/*
 * XREFs of MiFlushAllPagesWorker @ 0x140263A34
 * Callers:
 *     MiFlushAllPages @ 0x1402653D4 (MiFlushAllPages.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiCanFlushMakeProgress @ 0x140261320 (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x140261468 (MiWakeModifiedPageWriter.c)
 *     CcNotifyWriteBehindEx @ 0x140262B14 (CcNotifyWriteBehindEx.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402F4DDC (MiStoreUpdateMemoryConditions.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
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
    if ( !(unsigned int)MiCanFlushMakeProgress(a1, 0, 1uLL) || a4 && *(_DWORD *)(a4 + 4) )
      break;
    KeSetEvent((PRKEVENT)(a1 + 840), 0, 0);
    MiWakeModifiedPageWriter(a1, -1LL);
    CcNotifyWriteBehindEx(2u, *(_QWORD *)(a1 + 184));
    if ( *(_DWORD *)(a1 + 1204) != -1 )
      MiStoreUpdateMemoryConditions(a1);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - a2 > a3 )
      break;
  }
  while ( *(_QWORD *)(a1 + 19392) > 0x32uLL );
  _InterlockedAdd((volatile signed __int32 *)(a1 + 832), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 836), 0xFFFFFFFF);
  return KeLeaveCriticalRegionThread(CurrentThread);
}
