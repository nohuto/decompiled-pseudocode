/*
 * XREFs of PopHiberCheckResume @ 0x140B709E0
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x1406B4620 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     HalInitializeOnResume @ 0x1404F4AC0 (HalInitializeOnResume.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x14057F770 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlRestoreEnlightenment @ 0x14058040C (HvlRestoreEnlightenment.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140584DC0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyAcpiReenabled @ 0x14058669C (HvlNotifyAcpiReenabled.c)
 *     Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline @ 0x1405D0A68 (Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopSstInvokeNotificationHandlers @ 0x140B5DE00 (PopSstInvokeNotificationHandlers.c)
 *     PopCheckpointSystemSleep @ 0x140B6889C (PopCheckpointSystemSleep.c)
 *     KdInitSystem @ 0x140B77E30 (KdInitSystem.c)
 */

char PopHiberCheckResume()
{
  ULONG_PTR v0; // rdi
  char v1; // bl
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rbp
  unsigned __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  _BYTE *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 *v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  _BYTE v18[320]; // [rsp+30h] [rbp-158h] BYREF

  memset_0(v18, 0, 0x138uLL);
  v0 = BugCheckParameter4;
  v1 = 0;
  v2 = *(_QWORD *)(BugCheckParameter4 + 216);
  if ( *(_DWORD *)v2 )
  {
    PopCheckpointSystemSleep(25);
    PoPowerDownActionInProgress = 0;
    guard_dispatch_icall_no_overrides(0LL, v3);
    v4 = 5LL;
    PopWatchdogTimerCount = 0;
    v5 = __rdtsc();
    PoResumeFromHibernate = 1;
    guard_dispatch_icall_no_overrides(5LL, (unsigned __int64)HIDWORD(v5) << 32);
    guard_dispatch_icall_no_overrides(1LL, v6);
    if ( HvlHypervisorConnected )
    {
      HvlRestoreEnlightenment(1);
      guard_dispatch_icall_no_overrides(v9, v8);
      PopHibernateHvMinloopEnabled = 0;
    }
    guard_dispatch_icall_no_overrides(5LL, v7);
    if ( *(_BYTE *)(v0 + 493) )
    {
      if ( (PopSimulateHiberBugcheck & 0x1000) != 0
        && ((_BYTE)KdDebuggerEnabled && !KdPitchDebugger || KdEventLoggingEnabled) )
      {
        LOBYTE(KdDebuggerEnabled) = 0;
        KdInitSystem(0LL, 0LL);
      }
      PopSstInvokeNotificationHandlers(2u);
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
    if ( (!*(_BYTE *)(v0 + 493) || (PopSimulateHiberBugcheck & 0x1000) == 0)
      && ((_BYTE)KdDebuggerEnabled && !KdPitchDebugger || KdEventLoggingEnabled) )
    {
      LOBYTE(KdDebuggerEnabled) = 0;
      KdInitSystem(0LL, 0LL);
    }
    if ( (_BYTE)KdDebuggerEnabled && *(_DWORD *)v2 == 1347113538 )
      __debugbreak();
    if ( (PopSimulate & 0x40000000) != 0 )
      __debugbreak();
    HalInitializeOnResume();
    IsEnabledDeviceUsageNoInline = Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline();
    v11 = v18;
    if ( IsEnabledDeviceUsageNoInline )
      v11 = *(_BYTE **)(v0 + 352);
    v12 = (_QWORD *)(v2 + 1184);
    v13 = 4LL;
    do
    {
      if ( *v12 )
        *((_QWORD *)v11 + 6) = *v12;
      ++v12;
      --v13;
    }
    while ( v13 );
    v14 = &qword_140F0BFB8;
    qword_140EFEE18 = *(_QWORD *)(v2 + 1160);
    v15 = (_OWORD *)(v2 + 136);
    PopSstDiagResumeClock = v5;
    do
    {
      *(_OWORD *)v14 = *v15;
      *((_OWORD *)v14 + 1) = v15[1];
      *((_OWORD *)v14 + 2) = v15[2];
      *((_OWORD *)v14 + 3) = v15[3];
      *((_OWORD *)v14 + 4) = v15[4];
      *((_OWORD *)v14 + 5) = v15[5];
      *((_OWORD *)v14 + 6) = v15[6];
      v14 += 16;
      v16 = v15[7];
      v15 += 8;
      *((_OWORD *)v14 - 1) = v16;
      --v4;
    }
    while ( v4 );
    *(_OWORD *)v14 = *v15;
    *((_OWORD *)v14 + 1) = v15[1];
    *((_OWORD *)v14 + 2) = v15[2];
    *((_OWORD *)v14 + 3) = v15[3];
    *((_OWORD *)v14 + 4) = v15[4];
    *((_OWORD *)v14 + 5) = v15[5];
    v14[12] = *((_QWORD *)v15 + 12);
    *(_BYTE *)(v0 + 3) = 0;
    qword_140F0C090 = v5;
    if ( VslVsmEnabled || (HvlpFlags & 2) != 0 )
      *(_DWORD *)(v0 + 16) = 0;
    return 1;
  }
  return v1;
}
