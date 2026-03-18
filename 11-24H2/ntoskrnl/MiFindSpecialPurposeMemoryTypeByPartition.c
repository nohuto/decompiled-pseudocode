/*
 * XREFs of MiFindSpecialPurposeMemoryTypeByPartition @ 0x1407FE2A8
 * Callers:
 *     MmManagePartitionMoveMemory @ 0x1407FCEC4 (MmManagePartitionMoveMemory.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x1407FECA8 (MiSpecialPurposeMemoryRemoved.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x1407FEF40 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsReferencePartitionSafe @ 0x1403D4B60 (PsReferencePartitionSafe.c)
 *     MiFindSpecialPurposeMemoryType @ 0x14068E758 (MiFindSpecialPurposeMemoryType.c)
 */

_QWORD *__fastcall MiFindSpecialPurposeMemoryTypeByPartition(__int64 a1, __int64 *a2, volatile signed __int64 **a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v5; // r14
  _QWORD *v8; // rbx
  __int64 v9; // r15
  volatile signed __int64 *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *SpecialPurposeMemoryType; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf

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
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 17672), (__int64)v11, v9 + 17672);
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
        v16 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v16
          && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v15, v14);
        }
      }
      PsDereferencePartition((__int64)v5);
    }
  }
  return v8;
}
