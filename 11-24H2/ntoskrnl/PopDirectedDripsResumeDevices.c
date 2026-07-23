/*
 * XREFs of PopDirectedDripsResumeDevices @ 0x140A35FB0
 * Callers:
 *     PopDirectedDripsWorkerRoutine @ 0x14074AEB0 (PopDirectedDripsWorkerRoutine.c)
 *     PopDirectedDripsRefreshDisengageState @ 0x140A35E50 (PopDirectedDripsRefreshDisengageState.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140A360B8 (PopDirectedDripsHandleResiliencyNotification.c)
 * Callees:
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x1404879E0 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x14049736C (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x140A36088 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopDirectedDripsDestroyBroadcast @ 0x140A88168 (PopDirectedDripsDestroyBroadcast.c)
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 */

char __fastcall PopDirectedDripsResumeDevices(signed __int32 *a1, char a2)
{
  __int64 v4; // rbp
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int16 v7; // di
  signed __int32 v9; // eax
  signed __int32 v10; // ett

  v4 = MEMORY[0xFFFFF78000000008];
  _m_prefetchw(a1);
  v5 = *a1;
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange(a1, v5, v5);
  }
  while ( v6 != v5 );
  v7 = v5;
  if ( (v5 & 0x10) != 0 )
  {
    *((_BYTE *)a1 + 85) = 1;
    PoBroadcastSystemState(a1 + 15);
    _InterlockedOr(a1, 0x20u);
  }
  if ( (v7 & 0x80u) != 0 )
    PopDirectedDripsDestroyBroadcast();
  if ( !a2 && (v7 & 0x200) == 0 )
  {
    _m_prefetchw(&PopDirectedDripsUmTestDeviceCount);
    v9 = PopDirectedDripsUmTestDeviceCount;
    do
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange(&PopDirectedDripsUmTestDeviceCount, v9, v9);
    }
    while ( v10 != v9 );
    if ( !v9 )
      PopFxClearDirectedDripsCandidateDeviceList();
  }
  _InterlockedAnd(a1, 0xFFFFFF6F);
  if ( !a2 )
    PopDirectedDripsReleaseTransitionLock(a1);
  return PopDirectedDripsDiagTraceNotifyDevices(0, 0, (MEMORY[0xFFFFF78000000008] - v4) / 0x989680uLL);
}
