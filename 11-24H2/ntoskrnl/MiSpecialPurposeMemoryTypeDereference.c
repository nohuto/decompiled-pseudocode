/*
 * XREFs of MiSpecialPurposeMemoryTypeDereference @ 0x1407FEE24
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x1407FCE14 (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x1407FCEC4 (MmManagePartitionMoveMemory.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407FDE8C (MiCreatePagefileMemoryExtents.c)
 *     MiOpenSpecialPurposeMemory @ 0x1407FE6F8 (MiOpenSpecialPurposeMemory.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x1407FECA8 (MiSpecialPurposeMemoryRemoved.c)
 */

void __fastcall MiSpecialPurposeMemoryTypeDereference(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 *v3; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // r14
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 17672);
  v5 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire(a1 + 17672, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, (__int64)v6, (__int64)v3);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
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
  if ( v8 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v11, v10);
  if ( v5 )
  {
    MiSpecialPurposeMemoryRemoved(*(_QWORD **)v5);
    PsDereferencePartition(v5);
  }
}
