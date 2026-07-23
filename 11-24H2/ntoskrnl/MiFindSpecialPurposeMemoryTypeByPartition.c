/*
 * XREFs of MiFindSpecialPurposeMemoryTypeByPartition @ 0x1407FEA18
 * Callers:
 *     MmManagePartitionMoveMemory @ 0x1407FD634 (MmManagePartitionMoveMemory.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x1407FF418 (MiSpecialPurposeMemoryRemoved.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x1407FF6B0 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiFindSpecialPurposeMemoryType @ 0x14068F888 (MiFindSpecialPurposeMemoryType.c)
 */

_QWORD *__fastcall MiFindSpecialPurposeMemoryTypeByPartition(__int64 a1, __int64 *a2, volatile signed __int64 **a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v5; // r14
  _QWORD *v8; // rbx
  __int64 v9; // r15
  volatile signed __int64 *v10; // rdi
  char *v11; // rax
  char *v12; // rbx
  _QWORD *SpecialPurposeMemoryType; // rax
  bool v14; // zf

  CurrentThread = KeGetCurrentThread();
  v5 = *(__int64 **)(a1 + 17624);
  *a2 = 0LL;
  *a3 = 0LL;
  v8 = 0LL;
  if ( PsReferencePartitionSafe((__int64)v5) )
  {
    v9 = *v5;
    --CurrentThread->SpecialApcDisable;
    v10 = (volatile signed __int64 *)(v9 + 17672);
    v11 = (char *)KeAbPreAcquire(v9 + 17672, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 17672), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 17672), v11, v9 + 17672);
    if ( v12 )
      v12[10] = 1;
    SpecialPurposeMemoryType = MiFindSpecialPurposeMemoryType(v9, (const void *)(a1 + 17640));
    v8 = SpecialPurposeMemoryType;
    if ( SpecialPurposeMemoryType && SpecialPurposeMemoryType[8] == a1 )
    {
      *a2 = v9;
      *a3 = v10;
    }
    else
    {
      v8 = 0LL;
      if ( v9 != -17672 )
      {
        if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 17672));
        KeAbPostRelease(v9 + 17672);
        v14 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v14
          && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      PsDereferencePartition((__int64)v5);
    }
  }
  return v8;
}
