/*
 * XREFs of MiSpecialPurposeMemoryTypeDereference @ 0x1407EEF94
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x1407ECF84 (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x1407ED034 (MmManagePartitionMoveMemory.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407EDFFC (MiCreatePagefileMemoryExtents.c)
 *     MiOpenSpecialPurposeMemory @ 0x1407EE868 (MiOpenSpecialPurposeMemory.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x1407EEE18 (MiSpecialPurposeMemoryRemoved.c)
 */

void __fastcall MiSpecialPurposeMemoryTypeDereference(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 *v3; // rdi
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 *v7; // r14
  bool v8; // zf
  __int64 v9; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 17672);
  v5 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire(a1 + 17672, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v6, (__int64)v3);
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
  if ( v8 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v5 )
  {
    MiSpecialPurposeMemoryRemoved(*(_QWORD **)v5);
    PsDereferencePartition(v5);
  }
}
