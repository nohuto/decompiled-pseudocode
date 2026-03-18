/*
 * XREFs of ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14001EB5C
 * Callers:
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x140013840 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     NtGdiGetDIBitsInternal @ 0x140155610 (NtGdiGetDIBitsInternal.c)
 *     GreGetDIBitsInternal @ 0x140180F68 (GreGetDIBitsInternal.c)
 *     ?GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x14033B334 (-GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 * Callees:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14000EA14 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x140015954 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001F0D0 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14001F1E8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14001F7E4 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001FC80 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001FD60 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x14001FD90 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D2050 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1401541FC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall GrepGetDIBits(
        OPTAPIDCOBJ *this,
        HSURF a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6,
        int a7,
        unsigned int a8,
        unsigned int a9)
{
  unsigned int *v9; // rsi
  OPTAPIDCOBJ *v11; // rdi
  char v12; // r15
  int v13; // ebx
  struct Gre::Base::SESSION_GLOBALS *v14; // r14
  unsigned int *v15; // rbx
  unsigned int v16; // r12d
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  int v19; // ecx
  int v20; // ecx
  __int64 v22; // rbx
  int v23; // ecx
  unsigned int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // r8
  struct _DC_ATTR *UserAttr; // rax
  OBJECT *v28; // rax
  __int16 v29; // ax
  unsigned int DIBitsInternalWorker; // ebx
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v32[24]; // [rsp+68h] [rbp-98h] BYREF
  __int16 v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  _BYTE v35[16]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v36[14]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v37[20]; // [rsp+110h] [rbp+10h] BYREF

  v9 = a6;
  v11 = this;
  if ( !a6 || a7 && (unsigned int)(a7 - 1) > 1 || a9 < 0xC )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  if ( !a4 )
  {
    *(_QWORD *)a5 = 0LL;
    v33 = 0;
    *(_QWORD *)(a5 + 8) = 0LL;
    *(_QWORD *)(a5 + 16) = 0LL;
    *(_WORD *)(a5 + 24) = 0;
  }
  v12 = 1;
  if ( *(_QWORD *)this )
    goto LABEL_7;
  if ( *((_BYTE *)this + 113) == 1 )
    goto LABEL_8;
  XDCOBJ::vLockIgnoreAttributes(this, *((HDC *)this + 13));
  if ( *(_QWORD *)v11 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)v11 + 44LL) & 2) == 0 )
    {
      if ( (*((_DWORD *)v11 + 8) & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr(v11);
        if ( UserAttr )
        {
          if ( !DC::SaveAttributes(*(DC **)v11, UserAttr) )
          {
            OBJECT::InterlockedDecrementExclusiveLockCount(*(OBJECT **)v11);
            *(_QWORD *)v11 = 0LL;
            goto LABEL_46;
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)v11 + 44LL) |= 2u;
      *((_DWORD *)v11 + 2) = 1;
    }
    this = *(OPTAPIDCOBJ **)v11;
    if ( (*(_DWORD *)(*(_QWORD *)v11 + 520LL) & 4) != 0 )
      DC::vMarkTransformDirty(this);
  }
LABEL_46:
  v28 = *(OBJECT **)v11;
  *((_BYTE *)v11 + 113) = 1;
  if ( !v28 )
    goto LABEL_8;
  if ( *((_WORD *)v28 + 6) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v25, v26);
  if ( *(_WORD *)(*(_QWORD *)v11 + 12LL) != 1 )
  {
    XDCOBJ::vUnlockNoNullSet(v11);
    *(_QWORD *)v11 = 0LL;
    goto LABEL_8;
  }
LABEL_7:
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v37, (struct Gre::Base::SESSION_GLOBALS **)v11);
  v13 = *(_DWORD *)(*(_QWORD *)(v37[0] + 48LL) + 40LL);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v37);
  if ( (v13 & 0x8000) == 0 )
  {
LABEL_8:
    v14 = Gre::Base::Globals(this);
    GreAcquireSemaphoreShared<1,>(v14);
    goto LABEL_9;
  }
  v12 = 0;
  v14 = Gre::Base::Globals(this);
LABEL_9:
  SURFREF::SURFREF((SURFREF *)v32, a2);
  v15 = (unsigned int *)v34;
  if ( !v34 )
    goto LABEL_37;
  v16 = *v9;
  if ( !*(_QWORD *)a5 )
  {
    if ( v16 == 12 )
    {
      if ( !*((_WORD *)v9 + 5) )
      {
        *((_WORD *)v9 + 2) = *(_WORD *)(v34 + 56);
        *((_WORD *)v9 + 3) = *((_WORD *)v15 + 30);
        *((_WORD *)v9 + 4) = 1;
        v29 = gaulConvert[2 * v15[24]];
        *((_WORD *)v9 + 5) = v29;
        if ( (unsigned __int16)v29 >= 0x10u )
          *((_WORD *)v9 + 5) = 24;
        goto LABEL_19;
      }
      goto LABEL_24;
    }
    if ( a9 < 0x28 )
      goto LABEL_37;
    if ( !*((_WORD *)v9 + 7) )
    {
      if ( v16 > 0x28 )
        memset_0(v9, 0, *v9);
      *v9 = 40;
      v17 = v15[14];
      v9[1] = v17;
      v18 = v15[15];
      v9[2] = v18;
      *((_WORD *)v9 + 6) = 1;
      v9[4] = 0;
      v19 = (unsigned __int16)gaulConvert[2 * v15[24]];
      *((_WORD *)v9 + 7) = v19;
      if ( v19 == 32 || v19 == 16 )
        v9[4] = 3;
      *((_QWORD *)v9 + 3) = 0LL;
      v9[5] = v18 * (((int)(v17 * v19 + 31) >> 3) & 0xFFFFFFFC);
      v20 = dword_140361A18[v15[24]];
      v9[9] = v20;
      v9[8] = v20;
LABEL_19:
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v32);
      if ( v12 )
        GreReleaseSemaphoreShared<1,>(v14);
      return 1LL;
    }
  }
  if ( v16 >= 0x28 && v9[4] - 4 <= 1 )
  {
    EngSetLastError(0x57u);
LABEL_37:
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v32);
    if ( v12 )
      GreReleaseSemaphoreShared<1,>(v14);
    return 0LL;
  }
LABEL_24:
  v22 = 0LL;
  if ( !OPTAPIDCOBJ::bValid(v11) )
    goto LABEL_37;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v36, (struct Gre::Base::SESSION_GLOBALS **)v11);
  v31 = *(_QWORD *)(v36[0] + 48LL);
  a6 = *(unsigned int **)(v36[0] + 88LL);
  if ( (*(_DWORD *)(v31 + 40) & 0x8000) != 0 )
  {
    DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                             v16,
                             (__int64)v36,
                             (__int64)&v31,
                             (__int64)v32,
                             (__int64 *)&a6,
                             a3,
                             a4,
                             (__int64 *)a5,
                             (__int64)v9,
                             a7,
                             a8,
                             a9);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v36);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v32);
    if ( v12 )
      GreReleaseSemaphoreShared<1,>(v14);
    return DIBitsInternalWorker;
  }
  else
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v35, (struct XDCOBJ *)v36);
    if ( v34 )
    {
      if ( v34 != -24 )
      {
        v23 = *(_DWORD *)(v34 + 112);
        if ( (v23 & 0x80004000) != 0 && (v23 & 0x200) == 0 )
        {
          v22 = v34;
          GreLockDisplayDevice(*(_QWORD *)(v34 + 48));
        }
      }
    }
    v24 = GreGetDIBitsInternalWorker(
            v16,
            (__int64)v36,
            (__int64)&v31,
            (__int64)v32,
            (__int64 *)&a6,
            a3,
            a4,
            (__int64 *)a5,
            (__int64)v9,
            a7,
            a8,
            a9);
    if ( v22 )
      GreUnlockDisplayDevice(*(_QWORD *)(v22 + 48));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v35);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v36);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v32);
    if ( v12 )
      GreReleaseSemaphoreShared<1,>(v14);
    return v24;
  }
}
