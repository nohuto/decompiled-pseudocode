/*
 * XREFs of MiFlushAllPagesWorker @ 0x1403A75B4
 * Callers:
 *     MiFlushAllPages @ 0x1404C7844 (MiFlushAllPages.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     CcNotifyWriteBehindEx @ 0x1403A7590 (CcNotifyWriteBehindEx.c)
 *     MiCanFlushMakeProgress @ 0x1403C11C8 (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x1403C1310 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403C1B60 (MiStoreUpdateMemoryConditions.c)
 */

__int64 __fastcall MiFlushAllPagesWorker(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 832));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 836));
  do
  {
    if ( !(unsigned int)MiCanFlushMakeProgress(a1, 0LL, 1LL) || a4 && *(_DWORD *)(a4 + 4) )
      break;
    KeSetEvent((PRKEVENT)(a1 + 840), 0, 0);
    MiWakeModifiedPageWriter(a1, -1LL);
    CcNotifyWriteBehindEx(2, *(_QWORD *)(a1 + 184));
    if ( *(_DWORD *)(a1 + 1204) != -1 )
      MiStoreUpdateMemoryConditions(a1);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - a2 > a3 )
      break;
  }
  while ( *(_QWORD *)(a1 + 19392) > 0x32uLL );
  _InterlockedAdd((volatile signed __int32 *)(a1 + 832), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 836), 0xFFFFFFFF);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
