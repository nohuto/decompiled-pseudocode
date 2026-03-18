/*
 * XREFs of PopHiberCheckResume @ 0x140B56660
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x1406A83B0 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     HalInitializeOnResume @ 0x1404F4670 (HalInitializeOnResume.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x14057EC40 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlRestoreEnlightenment @ 0x14057F8DC (HvlRestoreEnlightenment.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1405842C0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyAcpiReenabled @ 0x140585D4C (HvlNotifyAcpiReenabled.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopCheckpointSystemSleep @ 0x140B5692C (PopCheckpointSystemSleep.c)
 *     KdInitSystem @ 0x140B65E30 (KdInitSystem.c)
 */

char PopHiberCheckResume()
{
  ULONG_PTR v0; // rsi
  char v1; // bl
  __int64 v2; // rdi
  __int64 v3; // rbp
  unsigned __int64 v4; // r14
  __int64 v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  _OWORD *v9; // rax
  __int64 *v10; // rcx
  __int128 v11; // xmm1
  __int64 v13; // rcx
  _BYTE v14[48]; // [rsp+20h] [rbp-158h] BYREF
  __int64 v15; // [rsp+50h] [rbp-128h]

  memset_0(v14, 0, 0x138uLL);
  v0 = BugCheckParameter4;
  v1 = 0;
  v2 = *(_QWORD *)(BugCheckParameter4 + 216);
  if ( *(_DWORD *)v2 )
  {
    PopCheckpointSystemSleep(25LL);
    PoPowerDownActionInProgress = 0;
    guard_dispatch_icall_no_overrides(0LL);
    v3 = 5LL;
    PopWatchdogTimerCount = 0;
    v4 = __rdtsc();
    PoResumeFromHibernate = 1;
    guard_dispatch_icall_no_overrides(5LL);
    guard_dispatch_icall_no_overrides(1LL);
    if ( HvlHypervisorConnected )
    {
      HvlRestoreEnlightenment(1);
      guard_dispatch_icall_no_overrides(v13);
      PopHibernateHvMinloopEnabled = 0;
    }
    guard_dispatch_icall_no_overrides(5LL);
    if ( HvlHypervisorConnected )
    {
      HvlConfigureMemoryZeroingOnReset(1);
      if ( VslVsmEnabled || (HvlpFlags & 2) != 0 )
      {
        HvlNotifyDebugDeviceAvailable();
        HvlNotifyAcpiReenabled();
      }
    }
    if ( (_BYTE)KdDebuggerEnabled && !KdPitchDebugger || KdEventLoggingEnabled )
    {
      LOBYTE(KdDebuggerEnabled) = 0;
      KdInitSystem(0LL, 0LL);
    }
    if ( (_BYTE)KdDebuggerEnabled && *(_DWORD *)v2 == 1347113538 )
      __debugbreak();
    if ( (PopSimulate & 0x40000000) != 0 )
      __debugbreak();
    HalInitializeOnResume();
    v5 = v15;
    v6 = (__int64 *)(v2 + 1184);
    v7 = 4LL;
    do
    {
      v8 = *v6++;
      if ( v8 )
        v5 = v8;
      --v7;
    }
    while ( v7 );
    qword_140EFE818 = *(_QWORD *)(v2 + 1160);
    v9 = (_OWORD *)(v2 + 136);
    v15 = v5;
    v10 = &qword_140F0B0D8;
    PopSstDiagResumeClock = v4;
    do
    {
      *(_OWORD *)v10 = *v9;
      *((_OWORD *)v10 + 1) = v9[1];
      *((_OWORD *)v10 + 2) = v9[2];
      *((_OWORD *)v10 + 3) = v9[3];
      *((_OWORD *)v10 + 4) = v9[4];
      *((_OWORD *)v10 + 5) = v9[5];
      *((_OWORD *)v10 + 6) = v9[6];
      v10 += 16;
      v11 = v9[7];
      v9 += 8;
      *((_OWORD *)v10 - 1) = v11;
      --v3;
    }
    while ( v3 );
    *(_OWORD *)v10 = *v9;
    *((_OWORD *)v10 + 1) = v9[1];
    *((_OWORD *)v10 + 2) = v9[2];
    *((_OWORD *)v10 + 3) = v9[3];
    *((_OWORD *)v10 + 4) = v9[4];
    *((_OWORD *)v10 + 5) = v9[5];
    v10[12] = *((_QWORD *)v9 + 12);
    *(_BYTE *)(v0 + 3) = 0;
    qword_140F0B1B0 = v4;
    if ( VslVsmEnabled || (HvlpFlags & 2) != 0 )
      *(_DWORD *)(v0 + 16) = 0;
    return 1;
  }
  return v1;
}
