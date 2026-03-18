/*
 * XREFs of ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140086454
 * Callers:
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x140089590 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x140178DA4 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019A38C (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140011900 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140012DEC (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001397C (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x140013B80 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140014248 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F2CC (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140021264 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     HmgSafeNextObjt @ 0x140086CD0 (HmgSafeNextObjt.c)
 *     vSpDwmDestroyDeviceSpecificResources @ 0x140086FD8 (vSpDwmDestroyDeviceSpecificResources.c)
 *     ??$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140087038 (--$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreSuspendDirectDraw @ 0x140087130 (GreSuspendDirectDraw.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140087714 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140087764 (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140087C14 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x140087D30 (GreIncrementDisplaySettingsUniqueness.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDisableDisplay(HDEV a1, int a2)
{
  __int64 v2; // r14
  __int64 v4; // r13
  struct _ERESOURCE *v5; // rsi
  struct _GRETHREAD *v6; // rax
  struct _GRETHREAD *v7; // rdi
  int v8; // r15d
  __int64 v9; // rdx
  char v10; // cl
  __int64 v11; // r12
  __int64 v12; // rdi
  unsigned int v13; // r14d
  __int64 v14; // rcx
  int v15; // r8d
  __int64 (__fastcall *v16)(_QWORD, _QWORD); // rax
  signed __int32 v17; // ett
  __int64 v18; // rdx
  __int64 i; // rcx
  unsigned int v20; // eax
  struct _ERESOURCE *v21; // rbx
  struct _GRETHREAD *v22; // rax
  bool v23; // zf
  struct _ERESOURCE *v24; // rbx
  struct _GRETHREAD *v25; // rax
  struct _GRETHREAD *v26; // rax
  __int64 result; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int (*v31)(void); // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  int v34; // r8d
  int v35; // eax
  __int64 v36; // [rsp+60h] [rbp-39h] BYREF
  HDEV v37; // [rsp+68h] [rbp-31h] BYREF
  HSEMAPHORE v38; // [rsp+70h] [rbp-29h] BYREF
  HSEMAPHORE v39; // [rsp+78h] [rbp-21h] BYREF
  HSEMAPHORE v40; // [rsp+80h] [rbp-19h] BYREF
  __int64 v41; // [rsp+88h] [rbp-11h]
  __int64 v42; // [rsp+90h] [rbp-9h]
  __int64 v43; // [rsp+98h] [rbp-1h]
  __int64 v44; // [rsp+A0h] [rbp+7h] BYREF
  int v45; // [rsp+A8h] [rbp+Fh]
  int v46; // [rsp+ACh] [rbp+13h]

  v2 = a2;
  v37 = a1;
  v4 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  WdLogSingleEntry2(4LL, a1, v2);
  WdLogGlobalForLineNumber = 19932;
  GreSuspendDirectDraw(a1);
  v43 = *(_QWORD *)v4 + 624LL;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v43);
  v42 = *(_QWORD *)v4 + 1144LL;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v42);
  v41 = *(_QWORD *)v4 + 728LL;
  GreAcquireSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v41);
  v5 = (struct _ERESOURCE *)*((_QWORD *)a1 + 7);
  GreAcquireSemaphoreInternal(v5);
  v6 = GreGetCurrentThreadCrossSessionCheck();
  v7 = v6;
  v8 = 1;
  if ( v6 )
  {
    v9 = *(_QWORD *)v6;
    if ( (*(_QWORD *)v6 & 0xFFFFFFFFFFFFFFF0uLL) != 0 && (v9 & 0x10) == 0 )
    {
      v33 = 0LL;
      v34 = 37;
      do
      {
        v35 = v33;
        if ( !_bittest64(&v9, v33) )
          v35 = v34;
        ++v33;
        v34 = v35;
      }
      while ( v33 < 0x40 );
      if ( v35 > 4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v10 = *((_BYTE *)v7 + 12);
    *((_BYTE *)v7 + 12) = v10 + 1;
    if ( !v10 )
      *(_QWORD *)v7 |= 0x10uLL;
  }
  SEMOBJ<6>::SEMOBJ<6>(&v39, (_QWORD *)v4);
  v11 = *(_QWORD *)v4 + 520LL;
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v11);
  v12 = *((_QWORD *)a1 + 6);
  GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v12);
  SEMOBJ<10>::SEMOBJ<10>(&v38, (_QWORD *)v4);
  if ( (_DWORD)v2 )
  {
    v13 = 0;
    if ( ((_DWORD)a1[10] & 0x400) == 0 )
    {
      v28 = *((_QWORD *)a1 + 318);
      v29 = *(unsigned int *)(v28 + 60);
      v30 = *(unsigned int *)(v28 + 56);
      v44 = 0LL;
      v45 = v30;
      v46 = v29;
      v31 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v30, v29) + 24) + 896LL);
      if ( v31 )
      {
        if ( v31() >= 0 )
        {
          v32 = *((_QWORD *)a1 + 318);
          if ( (*(_DWORD *)(v32 + 112) & 1) != 0 )
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)(v32 + 48) + 2824LL))(
              (v32 + 24) & -(__int64)(v32 != 0),
              0LL,
              0LL,
              0LL,
              0LL,
              &v44,
              0LL,
              0LL,
              0LL,
              0LL,
              0);
          else
            ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EngBitBlt)(
              (v32 + 24) & -(__int64)(v32 != 0),
              0LL,
              0LL,
              0LL,
              0LL,
              &v44,
              0LL,
              0LL,
              0LL,
              0LL,
              0);
        }
      }
    }
  }
  else
  {
    v13 = 0;
  }
  PDEVOBJ::vSync(
    (PDEVOBJ *)&v37,
    (struct _SURFOBJ *)((*((_QWORD *)a1 + 318) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)a1 + 318) >> 64)),
    0LL,
    0);
  vSpDwmDestroyDeviceSpecificResources(a1);
  if ( *(_WORD *)(W32GetUserSessionState(v14) + 69008) == 0xFFFF )
    *((_DWORD *)a1 + 652) = 4;
  v16 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)a1 + 340);
  if ( v16 )
    v13 = v16(*((_QWORD *)a1 + 223), 0LL);
  *((_DWORD *)a1 + 652) = 0;
  if ( v13 )
  {
    _m_prefetchw(a1 + 10);
    do
      v17 = *((_DWORD *)a1 + 10);
    while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v17 | 0x400, v17) );
    *((_QWORD *)a1 + 4) = 0LL;
    SEMOBJ<20>::SEMOBJ<20>(&v40);
    v36 = 0LL;
    for ( i = 0LL; ; i = v20 )
    {
      LOBYTE(v18) = 1;
      v20 = HmgSafeNextObjt(i, v18, &v36);
      if ( !v20 )
        break;
      if ( !*(_DWORD *)(v36 + 32) && *(HDEV *)(v36 + 48) == a1 )
        *(_DWORD *)(v36 + 36) |= 0x1000u;
    }
    SEMOBJ<20>::vUnlock(&v40);
    v8 = 0;
  }
  *(_DWORD *)(v4 + 1268) = v8;
  v21 = (struct _ERESOURCE *)v38;
  if ( v38 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v38, v15);
    v22 = GreGetCurrentThreadCrossSessionCheck();
    if ( v22 )
    {
      v23 = (*((_BYTE *)v22 + 18))-- == 1;
      if ( v23 )
        *(_QWORD *)v22 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v21);
    v38 = 0LL;
  }
  if ( v12 )
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v12);
  if ( v11 )
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v11);
  v24 = (struct _ERESOURCE *)v39;
  if ( v39 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v39, v15);
    v25 = GreGetCurrentThreadCrossSessionCheck();
    if ( v25 )
    {
      v23 = (*((_BYTE *)v25 + 14))-- == 1;
      if ( v23 )
        *(_QWORD *)v25 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v24);
    v39 = 0LL;
  }
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v5, v15);
    v26 = GreGetCurrentThreadCrossSessionCheck();
    if ( v26 )
    {
      v23 = (*((_BYTE *)v26 + 12))-- == 1;
      if ( v23 )
        *(_QWORD *)v26 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v5);
  }
  if ( v41 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v41,
      v15);
  if ( v42 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v42);
  if ( v43 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v43);
  if ( !v13 )
    GreIncrementDisplaySettingsUniqueness();
  WdLogSingleEntry1(5LL, (int)v13);
  result = v13;
  WdLogGlobalForLineNumber = 20051;
  return result;
}
