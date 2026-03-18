/*
 * XREFs of MiFindSpecialPurposeMemoryTypeByPartition @ 0x1407EE418
 * Callers:
 *     MmManagePartitionMoveMemory @ 0x1407ED034 (MmManagePartitionMoveMemory.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x1407EEE18 (MiSpecialPurposeMemoryRemoved.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x1407EF0B0 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     PsReferencePartitionSafe @ 0x1403BE990 (PsReferencePartitionSafe.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiFindSpecialPurposeMemoryType @ 0x140682EC8 (MiFindSpecialPurposeMemoryType.c)
 */

_QWORD *__fastcall MiFindSpecialPurposeMemoryTypeByPartition(__int64 a1, __int64 *a2, volatile signed __int64 **a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v5; // r14
  _QWORD *v8; // rbx
  __int64 v9; // r15
  volatile signed __int64 *v10; // rdi
  __int64 *v11; // rax
  __int64 *v12; // rbx
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
    v11 = KeAbPreAcquire(v9 + 17672, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 17672), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 17672), v11, v9 + 17672);
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
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
