/*
 * XREFs of GreCreateHalftonePalette @ 0x14030F3CC
 * Callers:
 *     CreateDIBPalette @ 0x1402B2CA4 (CreateDIBPalette.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140028C4C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C8FBC (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1401277C8 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x140127884 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x140180CA0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401BACBC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140208834 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreCreateHalftonePalette(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  __int64 v3; // rdi
  Gre::Base *v5; // rcx
  struct Gre::Base::SESSION_GLOBALS *v6; // rbx
  HSEMAPHORE v7; // rbx
  struct _GRETHREAD *v8; // rax
  bool v9; // zf
  HPALETTE *v10; // rax
  unsigned int v11; // r8d
  HSEMAPHORE v12; // rbx
  struct _GRETHREAD *v13; // rax
  __int64 v14; // rsi
  HSEMAPHORE v15; // rbx
  struct _GRETHREAD *v16; // rax
  __int64 *v17; // [rsp+50h] [rbp-49h] BYREF
  int v18; // [rsp+58h] [rbp-41h]
  _BYTE v19[8]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v20; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v21[16]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v22; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+110h] [rbp+77h] BYREF
  HSEMAPHORE v24; // [rsp+118h] [rbp+7Fh] BYREF

  v2 = Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v21, (HDC)a1, v2);
  v3 = 0LL;
  if ( !v21[0] )
  {
    EngSetLastError(6u);
LABEL_3:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v21);
    return 0LL;
  }
  v22 = *(_QWORD *)(v21[0] + 48LL);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v20);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v19, (struct PDEVOBJ *)&v22);
  v6 = Gre::Base::Globals(v5);
  SEMOBJ<10>::SEMOBJ<10>(&v24, v6);
  if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v22) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v22, 0LL) )
  {
LABEL_6:
    v7 = v24;
    if ( v24 )
    {
      EtwTraceGreLockReleaseSemaphore(L"HT", v24);
      v8 = GreGetCurrentThreadCrossSessionCheck();
      if ( v8 )
      {
        v9 = (*((_BYTE *)v8 + 18))-- == 1;
        if ( v9 )
          *(_QWORD *)v8 &= ~0x400uLL;
        if ( !*(_QWORD *)v8 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v7);
    }
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v19);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v20);
    goto LABEL_3;
  }
  v10 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v22);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v23, *v10);
  v18 = 0;
  v17 = 0LL;
  if ( v23 && (v11 = *(_DWORD *)(v23 + 28)) != 0 )
  {
    if ( !PALMEMOBJ::bCreatePalette(
            (PALMEMOBJ *)&v17,
            1u,
            v11,
            *(const unsigned int **)(v23 + 112),
            0,
            0,
            0,
            0x100500u,
            0) )
    {
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v17);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v23);
      goto LABEL_6;
    }
  }
  else if ( !PALMEMOBJ::bCreatePalette(
               (PALMEMOBJ *)&v17,
               1u,
               *((__int16 *)v6 + 1839),
               (const unsigned int *)v6 + 920,
               0,
               0,
               0,
               0x100500u,
               0) )
  {
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v17);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v23);
    v12 = v24;
    if ( v24 )
    {
      EtwTraceGreLockReleaseSemaphore(L"HT", v24);
      v13 = GreGetCurrentThreadCrossSessionCheck();
      if ( v13 )
      {
        v9 = (*((_BYTE *)v13 + 18))-- == 1;
        if ( v9 )
          *(_QWORD *)v13 &= ~0x400uLL;
        if ( !*(_QWORD *)v13 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v12);
    }
    goto LABEL_34;
  }
  v18 = 1;
  v14 = *v17;
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v17);
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v23);
  v15 = v24;
  if ( v24 )
  {
    EtwTraceGreLockReleaseSemaphore(L"HT", v24);
    v16 = GreGetCurrentThreadCrossSessionCheck();
    if ( v16 )
    {
      v9 = (*((_BYTE *)v16 + 18))-- == 1;
      if ( v9 )
        *(_QWORD *)v16 &= ~0x400uLL;
      if ( !*(_QWORD *)v16 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v15);
  }
  v3 = v14;
LABEL_34:
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v19);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v20);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v21);
  return v3;
}
