/*
 * XREFs of ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1400868FC
 * Callers:
 *     DrvEnableMDEV @ 0x140012A70 (DrvEnableMDEV.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x140089590 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x140178DA4 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019A38C (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140011900 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140012DEC (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001397C (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140014248 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     HmgSafeNextObjt @ 0x140086CD0 (HmgSafeNextObjt.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x140087D30 (GreIncrementDisplaySettingsUniqueness.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvEnableDisplay(HDEV a1)
{
  unsigned int v2; // r15d
  __int64 v3; // r14
  __int64 v4; // rbp
  struct _ERESOURCE *v5; // rsi
  struct _GRETHREAD *v6; // rax
  struct _GRETHREAD *v7; // rdi
  __int64 v8; // rcx
  char v9; // dl
  __int64 v10; // rdi
  signed __int32 v11; // ett
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 i; // rcx
  unsigned int v15; // eax
  int v16; // r8d
  struct _ERESOURCE *v17; // rbx
  struct _GRETHREAD *v18; // rax
  bool v19; // zf
  struct _ERESOURCE *v20; // rbx
  struct _GRETHREAD *v21; // rax
  struct _GRETHREAD *v22; // rax
  HDEV v24; // rax
  unsigned __int64 v25; // rdx
  int v26; // r8d
  int v27; // eax
  __int64 v28; // [rsp+60h] [rbp+8h] BYREF
  HSEMAPHORE v29; // [rsp+68h] [rbp+10h] BYREF
  HSEMAPHORE v30; // [rsp+70h] [rbp+18h] BYREF
  HSEMAPHORE v31; // [rsp+78h] [rbp+20h] BYREF

  v2 = 1;
  v3 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  WdLogSingleEntry1(4LL, a1);
  v4 = *(_QWORD *)v3 + 624LL;
  WdLogGlobalForLineNumber = 19702;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v4);
  v5 = (struct _ERESOURCE *)*((_QWORD *)a1 + 7);
  GreAcquireSemaphoreInternal(v5);
  v6 = GreGetCurrentThreadCrossSessionCheck();
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_QWORD *)v6;
    if ( (*(_QWORD *)v6 & 0xFFFFFFFFFFFFFFF0uLL) != 0 && (v8 & 0x10) == 0 )
    {
      v25 = 0LL;
      v26 = 37;
      do
      {
        v27 = v25;
        if ( !_bittest64(&v8, v25) )
          v27 = v26;
        ++v25;
        v26 = v27;
      }
      while ( v25 < 0x40 );
      if ( v27 > 4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v9 = *((_BYTE *)v7 + 12);
    *((_BYTE *)v7 + 12) = v9 + 1;
    if ( !v9 )
      *(_QWORD *)v7 |= 0x10uLL;
  }
  SEMOBJ<6>::SEMOBJ<6>(&v31, (_QWORD *)v3);
  v10 = *((_QWORD *)a1 + 6);
  GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v10);
  SEMOBJ<10>::SEMOBJ<10>(&v30, (_QWORD *)v3);
  *(_DWORD *)(v3 + 1268) = 0;
  if ( *((_QWORD *)a1 + 340) )
  {
    while ( !(*((unsigned int (__fastcall **)(_QWORD, __int64))a1 + 340))(*((_QWORD *)a1 + 223), 1LL) )
      *(_DWORD *)(v3 + 1268) = 1;
  }
  else
  {
    v2 = 0;
  }
  _m_prefetchw(a1 + 10);
  do
    v11 = *((_DWORD *)a1 + 10);
  while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v11 & 0xFFFFFBFF, v11) );
  if ( _bittest((const signed __int32 *)a1 + 10, 0x11u) )
  {
    *((_QWORD *)a1 + 4) = 0LL;
  }
  else
  {
    v12 = *((_QWORD *)a1 + 3);
    if ( v12 )
    {
      if ( _bittest((const signed __int32 *)(v12 + 40), 0x11u) )
      {
        if ( !*((_QWORD *)a1 + 4) )
        {
          v24 = *(HDEV *)(**(_QWORD **)(v12 + 1784) + 48LL);
          if ( a1 != v24 )
            *((_QWORD *)a1 + 4) = v24;
        }
      }
    }
  }
  SEMOBJ<20>::SEMOBJ<20>(&v29);
  v28 = 0LL;
  for ( i = 0LL; ; i = v15 )
  {
    LOBYTE(v13) = 1;
    v15 = HmgSafeNextObjt(i, v13, &v28);
    if ( !v15 )
      break;
    if ( !*(_DWORD *)(v28 + 32) && *(HDEV *)(v28 + 48) == a1 )
      *(_DWORD *)(v28 + 36) &= ~0x1000u;
  }
  SEMOBJ<20>::vUnlock(&v29);
  v17 = (struct _ERESOURCE *)v30;
  if ( v30 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v30, v16);
    v18 = GreGetCurrentThreadCrossSessionCheck();
    if ( v18 )
    {
      v19 = (*((_BYTE *)v18 + 18))-- == 1;
      if ( v19 )
        *(_QWORD *)v18 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v17);
  }
  if ( v10 )
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v10);
  v20 = (struct _ERESOURCE *)v31;
  if ( v31 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v31, v16);
    v21 = GreGetCurrentThreadCrossSessionCheck();
    if ( v21 )
    {
      v19 = (*((_BYTE *)v21 + 14))-- == 1;
      if ( v19 )
        *(_QWORD *)v21 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v20);
  }
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v5, v16);
    v22 = GreGetCurrentThreadCrossSessionCheck();
    if ( v22 )
    {
      v19 = (*((_BYTE *)v22 + 12))-- == 1;
      if ( v19 )
        *(_QWORD *)v22 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v5);
  }
  if ( v4 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v4);
  GreIncrementDisplaySettingsUniqueness();
  return v2;
}
