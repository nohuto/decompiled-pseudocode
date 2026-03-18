/*
 * XREFs of PopHiberCheckResume @ 0x140B6E970
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x1406B3680 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     HalInitializeOnResume @ 0x1404F71E0 (HalInitializeOnResume.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1405823F0 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlRestoreEnlightenment @ 0x14058308C (HvlRestoreEnlightenment.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140587A40 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyAcpiReenabled @ 0x1405893BC (HvlNotifyAcpiReenabled.c)
 *     Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline @ 0x1405D3348 (Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopSstInvokeNotificationHandlers @ 0x140B5BD90 (PopSstInvokeNotificationHandlers.c)
 *     PopCheckpointSystemSleep @ 0x140B6675C (PopCheckpointSystemSleep.c)
 *     KdInitSystem @ 0x140B75E30 (KdInitSystem.c)
 */

char PopHiberCheckResume()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  ULONG_PTR v2; // rdi
  char v3; // bl
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbp
  unsigned __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  int IsEnabledDeviceUsageNoInline; // eax
  _BYTE *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // r8
  __int64 *v28; // rcx
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  int v32[4]; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v33[320]; // [rsp+30h] [rbp-158h] BYREF

  memset_0(v33, 0, 0x138uLL);
  v2 = BugCheckParameter4;
  v3 = 0;
  v32[0] = 0;
  v4 = *(_QWORD *)(BugCheckParameter4 + 216);
  if ( *(_DWORD *)v4 )
  {
    PopCheckpointSystemSleep(25, v0, v1);
    PoPowerDownActionInProgress = 0;
    guard_dispatch_icall_no_overrides(0LL, v5, v6, v7);
    v8 = 5LL;
    PopWatchdogTimerCount = 0;
    v9 = __rdtsc();
    PoResumeFromHibernate = 1;
    guard_dispatch_icall_no_overrides(5LL, (unsigned __int64)HIDWORD(v9) << 32, v10, v11);
    guard_dispatch_icall_no_overrides(1LL, v12, v13, v14);
    if ( HvlHypervisorConnected )
    {
      HvlRestoreEnlightenment(1);
      guard_dispatch_icall_no_overrides(v19, v18, v20, v21);
      PopHibernateHvMinloopEnabled = 0;
    }
    guard_dispatch_icall_no_overrides(5LL, v15, v16, v17);
    if ( *(_BYTE *)(v2 + 489) )
    {
      if ( (PopSimulateHiberBugcheck & 0x1000) != 0
        && ((_BYTE)KdDebuggerEnabled && !KdPitchDebugger || KdEventLoggingEnabled) )
      {
        LOBYTE(KdDebuggerEnabled) = 0;
        KdInitSystem(0LL, 0LL);
      }
      v32[0] = 5;
      PopSstInvokeNotificationHandlers(2u, (__int64)v32, v22, v23);
    }
    if ( HvlHypervisorConnected )
    {
      HvlConfigureMemoryZeroingOnReset(1);
      if ( VslVsmEnabled || (HvlpFlags & 2) != 0 )
      {
        HvlNotifyDebugDeviceAvailable();
        HvlNotifyAcpiReenabled();
      }
    }
    if ( (!*(_BYTE *)(v2 + 489) || (PopSimulateHiberBugcheck & 0x1000) == 0)
      && ((_BYTE)KdDebuggerEnabled && !KdPitchDebugger || KdEventLoggingEnabled) )
    {
      LOBYTE(KdDebuggerEnabled) = 0;
      KdInitSystem(0LL, 0LL);
    }
    if ( (_BYTE)KdDebuggerEnabled && *(_DWORD *)v4 == 1347113538 )
      __debugbreak();
    if ( (PopSimulate & 0x40000000) != 0 )
      __debugbreak();
    HalInitializeOnResume();
    IsEnabledDeviceUsageNoInline = Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline();
    v25 = v33;
    if ( IsEnabledDeviceUsageNoInline )
      v25 = *(_BYTE **)(v2 + 352);
    v26 = (_QWORD *)(v4 + 1184);
    v27 = 4LL;
    do
    {
      if ( *v26 )
        *((_QWORD *)v25 + 6) = *v26;
      ++v26;
      --v27;
    }
    while ( v27 );
    v28 = &qword_140F0B378;
    qword_140EFEAF8 = *(_QWORD *)(v4 + 1160);
    v29 = (_OWORD *)(v4 + 136);
    PopSstDiagResumeClock = v9;
    do
    {
      *(_OWORD *)v28 = *v29;
      *((_OWORD *)v28 + 1) = v29[1];
      *((_OWORD *)v28 + 2) = v29[2];
      *((_OWORD *)v28 + 3) = v29[3];
      *((_OWORD *)v28 + 4) = v29[4];
      *((_OWORD *)v28 + 5) = v29[5];
      *((_OWORD *)v28 + 6) = v29[6];
      v28 += 16;
      v30 = v29[7];
      v29 += 8;
      *((_OWORD *)v28 - 1) = v30;
      --v8;
    }
    while ( v8 );
    *(_OWORD *)v28 = *v29;
    *((_OWORD *)v28 + 1) = v29[1];
    *((_OWORD *)v28 + 2) = v29[2];
    *((_OWORD *)v28 + 3) = v29[3];
    *((_OWORD *)v28 + 4) = v29[4];
    *((_OWORD *)v28 + 5) = v29[5];
    v28[12] = *((_QWORD *)v29 + 12);
    *(_BYTE *)(v2 + 3) = 0;
    qword_140F0B450 = v9;
    if ( VslVsmEnabled || (HvlpFlags & 2) != 0 )
      *(_DWORD *)(v2 + 16) = 0;
    return 1;
  }
  return v3;
}
