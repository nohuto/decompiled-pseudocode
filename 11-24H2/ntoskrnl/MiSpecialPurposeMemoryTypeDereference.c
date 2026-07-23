/*
 * XREFs of MiSpecialPurposeMemoryTypeDereference @ 0x1407FF594
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x1407FD584 (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x1407FD634 (MmManagePartitionMoveMemory.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407FE5FC (MiCreatePagefileMemoryExtents.c)
 *     MiOpenSpecialPurposeMemory @ 0x1407FEE68 (MiOpenSpecialPurposeMemory.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x1407FF418 (MiSpecialPurposeMemoryRemoved.c)
 */

void __fastcall MiSpecialPurposeMemoryTypeDereference(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 *v3; // rdi
  __int64 v5; // rbx
  char *v6; // rax
  char *v7; // r14
  bool v8; // zf
  __int64 v9; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 17672);
  v5 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v6 = (char *)KeAbPreAcquire(a1 + 17672, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v6, (__int64)v3);
  if ( v7 )
    v7[10] = 1;
  v8 = (*(_QWORD *)(a2 + 88))-- == 1LL;
  if ( v8 )
  {
    v9 = *(_QWORD *)(a2 + 64);
    if ( !*(_QWORD *)(v9 + 18512) && !*(_QWORD *)(v9 + 424) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 184LL);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 40)) <= 1 )
        __fastfail(0xEu);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v5 )
  {
    MiSpecialPurposeMemoryRemoved(*(_QWORD **)v5);
    PsDereferencePartition(v5);
  }
}
