/*
 * XREFs of GreSetMagicColors @ 0x14014964C
 * Callers:
 *     SetSysColor @ 0x1400A0B4C (SetSysColor.c)
 *     NtGdiSetMagicColors @ 0x1401C3A40 (NtGdiSetMagicColors.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001397C (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x140013CC0 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140013D84 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x140014590 (-bAllowShareAccess@PDEVOBJ@@QEBAHXZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001D9D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001E1AC (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x140021560 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140022264 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x140037E58 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x140038274 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B140 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x14003CA18 (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400E8C68 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1401C3970 (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreSetMagicColors(HDC a1, struct tagPALETTEENTRY a2, unsigned int a3)
{
  unsigned int v5; // r12d
  unsigned int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  struct _ERESOURCE **v10; // rcx
  struct _ERESOURCE *v11; // rsi
  struct _GRETHREAD *v12; // rax
  struct _GRETHREAD *v13; // r13
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  int v16; // r8d
  int v17; // eax
  char v18; // cl
  __int64 v19; // rcx
  struct _ERESOURCE **v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  int v23; // edx
  __int64 v24; // rcx
  unsigned int MatchFromPalentry; // eax
  int v26; // r8d
  unsigned int v27; // ecx
  __int64 v28; // r9
  unsigned int v29; // eax
  struct _ERESOURCE *v30; // rdi
  struct _GRETHREAD *v31; // rax
  bool v32; // zf
  struct _ERESOURCE *v33; // rbx
  struct _GRETHREAD *v34; // rax
  __int64 v35; // rdx
  int v36; // r8d
  struct _GRETHREAD *v37; // rax
  __int64 v39; // [rsp+30h] [rbp-D0h] BYREF
  struct _ERESOURCE **v40; // [rsp+38h] [rbp-C8h] BYREF
  struct _ERESOURCE *v41; // [rsp+40h] [rbp-C0h] BYREF
  HSEMAPHORE v42; // [rsp+48h] [rbp-B8h] BYREF
  HSEMAPHORE v43; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h]
  int v47; // [rsp+78h] [rbp-88h]
  char v48[80]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  _QWORD v51[14]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v52; // [rsp+1A8h] [rbp+A8h] BYREF

  v5 = 0;
  v6 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v51, a1);
  if ( v51[0] )
  {
    v40 = (struct _ERESOURCE **)v51[2];
    if ( a3 - 8 > 1 && a3 - 246 > 1 )
      goto LABEL_70;
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v44);
    if ( (*(_DWORD *)&a2 & 0xFD000000) != 0 )
    {
LABEL_69:
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v44);
LABEL_70:
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v51);
      return v5;
    }
    v41 = 0LL;
    v8 = *(_QWORD *)(v51[0] + 48LL);
    v39 = v8;
    if ( v8 && !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v39, v7) && (*(_DWORD *)(v8 + 40) & 0x8000) == 0 )
    {
      v10 = *(struct _ERESOURCE ***)(W32GetSessionState(v9) + 88);
      v41 = *v10 + 11;
      GreAcquireSemaphore<2,>(v10);
    }
    v11 = *(struct _ERESOURCE **)(v8 + 56);
    GreAcquireSemaphoreInternal(v11);
    v12 = GreGetCurrentThreadCrossSessionCheck();
    v13 = v12;
    if ( v12 )
    {
      v14 = *(_QWORD *)v12;
      if ( (*(_QWORD *)v12 & 0xFFFFFFFFFFFFFFF0uLL) != 0 && (v14 & 0x10) == 0 )
      {
        v15 = 0LL;
        v16 = 37;
        do
        {
          v17 = v15;
          if ( !_bittest64(&v14, v15) )
            v17 = v16;
          ++v15;
          v16 = v17;
        }
        while ( v15 < 0x40 );
        if ( v17 > 4 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
      }
      v18 = *((_BYTE *)v13 + 12);
      *((_BYTE *)v13 + 12) = v18 + 1;
      if ( !v18 )
        *(_QWORD *)v13 |= 0x10uLL;
    }
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v48);
    v50 = 0LL;
    v49 = 0LL;
    v45 = 0LL;
    DEVLOCKOBJ::bPrepareTrgDco((DEVLOCKOBJ *)&v45, 0LL);
    v47 = 1;
    if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
    {
      v20 = *(struct _ERESOURCE ***)(W32GetSessionState(v19) + 88);
      *(_QWORD *)&v45 = *(_QWORD *)(v8 + 48);
      v46 = v8;
      if ( (struct _ERESOURCE *)v45 == &(*v20)[11] )
      {
        v47 |= 0x100000u;
        GreAcquireSemaphore<2,>(v20);
      }
      else
      {
        GreAcquireSemaphore<8,PDEVOBJ>(v8);
      }
    }
    if ( !_bittest((const signed __int32 *)(v8 + 2156), 8u) )
    {
      if ( (*(_DWORD *)(v8 + 40) & 0x20000) == 0 )
      {
LABEL_63:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v45);
        if ( v11 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v11, v36);
          v37 = GreGetCurrentThreadCrossSessionCheck();
          if ( v37 )
          {
            v32 = (*((_BYTE *)v37 + 12))-- == 1;
            if ( v32 )
              *(_QWORD *)v37 &= ~0x10uLL;
          }
          GreReleaseSemaphoreSharedInternal(v11);
        }
        NEEDGRELOCK::vUnlock(&v41, v35, v36);
        goto LABEL_69;
      }
      v21 = *(_QWORD *)(v8 + 1784);
      v22 = *(_QWORD **)v21;
      v23 = *(_DWORD *)(v21 + 16);
      while ( 1 )
      {
        v8 = v22[6];
        v39 = v8;
        if ( _bittest((const signed __int32 *)(v8 + 2156), 8u) )
          break;
        v22 = (_QWORD *)*v22;
        if ( !--v23 )
          goto LABEL_63;
      }
      v5 = 1;
    }
    v52 = *(_QWORD *)(v8 + 1792);
    SEMOBJ<10>::SEMOBJ<10>(&v43, v40);
    SEMOBJ<13>::SEMOBJ<13>((struct _ERESOURCE **)&v42, v40);
    v40 = *(struct _ERESOURCE ***)(*(_QWORD *)(W32GetSessionState(v24) + 88) + 3768LL);
    MatchFromPalentry = XEPALOBJ::ulGetMatchFromPalentry((ULONG_PTR *)&v40, a2);
    if ( MatchFromPalentry != -1 )
    {
      v27 = MatchFromPalentry + 236;
      if ( MatchFromPalentry < 0xA )
        v27 = MatchFromPalentry;
      if ( v27 == a3 )
      {
        if ( !v5 )
        {
          v5 = 1;
LABEL_48:
          v30 = (struct _ERESOURCE *)v42;
          if ( v42 )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v42, v26);
            v31 = GreGetCurrentThreadCrossSessionCheck();
            if ( v31 )
            {
              v32 = (*((_BYTE *)v31 + 21))-- == 1;
              if ( v32 )
                *(_QWORD *)v31 &= ~0x2000uLL;
            }
            GreReleaseSemaphoreSharedInternal(v30);
          }
          if ( v6 && (*(_DWORD *)(v8 + 40) & 0x400) == 0 )
          {
            if ( *(_QWORD *)(v8 + 1752) )
              (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v8 + 1752))(
                *(_QWORD *)(*(_QWORD *)(v8 + 24) + 1784LL),
                &v52,
                0LL,
                0LL,
                *(_DWORD *)(v52 + 28));
            else
              v5 = 0;
          }
          v33 = (struct _ERESOURCE *)v43;
          if ( v43 )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v43, v26);
            v34 = GreGetCurrentThreadCrossSessionCheck();
            if ( v34 )
            {
              v32 = (*((_BYTE *)v34 + 18))-- == 1;
              if ( v32 )
                *(_QWORD *)v34 &= ~0x400uLL;
            }
            GreReleaseSemaphoreSharedInternal(v33);
          }
          goto LABEL_63;
        }
      }
      else if ( v27 - 8 > 1 && v27 - 246 > 1 )
      {
        if ( a3 == 8 )
        {
          v28 = 12639424LL;
        }
        else if ( a3 == 9 )
        {
          v28 = 15780518LL;
        }
        else
        {
          v28 = 10789024LL;
          if ( a3 == 246 )
            v28 = 15793151LL;
        }
        v29 = bSetMagicColor(&v39, v52, a3, v28);
        v5 = 0;
        goto LABEL_47;
      }
    }
    v29 = bSetMagicColor(&v39, v52, a3, *(unsigned int *)&a2);
    v5 = v29;
LABEL_47:
    v6 = v29;
    goto LABEL_48;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v51);
  return 0LL;
}
