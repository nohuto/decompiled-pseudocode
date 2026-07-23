/*
 * XREFs of MiAllocatePartitionId @ 0x1407EC980
 * Callers:
 *     MmCreatePartition @ 0x1407FD07C (MmCreatePartition.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiExpandPartitionIds @ 0x1407FC698 (MiExpandPartitionIds.c)
 */

__int64 __fastcall MiAllocatePartitionId(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rdi
  ULONG ClearBitsAndSet; // eax
  bool v7; // zf
  unsigned __int16 v9; // di

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)&qword_140E30088, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E30088, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140E30088, v3, (__int64)&qword_140E30088);
  if ( v5 )
    v5[10] = 1;
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140E300A8, 1u, 0);
    if ( ClearBitsAndSet != -1 )
      break;
    if ( !(unsigned int)MiExpandPartitionIds() )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E30088, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E30088);
      KeAbPostRelease((ULONG_PTR)&qword_140E30088);
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
  byte_140E300D4 = 1;
  *((_QWORD *)qword_140E300C8 + (unsigned __int16)ClearBitsAndSet) = a1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E30088, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E30088);
  KeAbPostRelease((ULONG_PTR)&qword_140E30088);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v9;
}
