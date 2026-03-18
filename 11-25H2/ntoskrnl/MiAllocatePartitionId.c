/*
 * XREFs of MiAllocatePartitionId @ 0x1407DC510
 * Callers:
 *     MmCreatePartition @ 0x1407ECA7C (MmCreatePartition.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     RtlFindClearBitsAndSet @ 0x140338AF0 (RtlFindClearBitsAndSet.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiExpandPartitionIds @ 0x1407EC098 (MiExpandPartitionIds.c)
 */

__int64 __fastcall MiAllocatePartitionId(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rdi
  ULONG ClearBitsAndSet; // eax
  bool v7; // zf
  unsigned __int16 v9; // di

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140E2FD08, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2FD08, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140E2FD08, v3, (__int64)&qword_140E2FD08);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140E2FD28, 1u, 0);
    if ( ClearBitsAndSet != -1 )
      break;
    if ( !(unsigned int)MiExpandPartitionIds() )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2FD08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2FD08);
      KeAbPostRelease((ULONG_PTR)&qword_140E2FD08);
      v7 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v7
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      return 0LL;
    }
  }
  v9 = ClearBitsAndSet;
  byte_140E2FD54 = 1;
  *((_QWORD *)qword_140E2FD48 + (unsigned __int16)ClearBitsAndSet) = a1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2FD08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2FD08);
  KeAbPostRelease((ULONG_PTR)&qword_140E2FD08);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v9;
}
