/*
 * XREFs of PspPostFreezeOperationWorkEnqueue @ 0x140A97D04
 * Callers:
 *     PsThawMultiProcess @ 0x1404EEE60 (PsThawMultiProcess.c)
 *     PsFreezeProcess @ 0x14093A750 (PsFreezeProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

void __fastcall PspPostFreezeOperationWorkEnqueue(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  signed __int8 v4; // cf
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140F05948, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F05948, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140F05948, (__int64)v3, (__int64)&qword_140F05948);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = a1 + 257;
  if ( !a1[257] )
  {
    PsReferenceSiloContext(a1);
    v7 = (_QWORD *)qword_140F05958;
    if ( *(__int64 **)qword_140F05958 != &qword_140F05950 )
      __fastfail(3u);
    *v6 = &qword_140F05950;
    a1[258] = v7;
    *v7 = v6;
    qword_140F05958 = (__int64)(a1 + 257);
    if ( (PsFreezeWorkGlobals & 1) == 0 )
    {
      ExQueueWorkItem(&stru_140F05960, DelayedWorkQueue);
      PsFreezeWorkGlobals |= 1uLL;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140F05948, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140F05948);
  KeAbPostRelease((ULONG_PTR)&qword_140F05948);
  KeLeaveCriticalRegion();
}
