/*
 * XREFs of MiAllocatePartitionId @ 0x1407EC3B0
 * Callers:
 *     MmCreatePartition @ 0x1407FC90C (MmCreatePartition.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14024B8D0 (RtlFindClearBitsAndSet.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiExpandPartitionIds @ 0x1407FBF28 (MiExpandPartitionIds.c)
 */

__int64 __fastcall MiAllocatePartitionId(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v3; // rax
  signed __int8 v4; // cf
  _QWORD *v5; // rdi
  ULONG ClearBitsAndSet; // eax
  __int64 v7; // rdx
  bool v8; // zf
  $81B80DCEA5A02D890AB7B2872B48AC01 *v9; // rcx
  unsigned __int16 v11; // di
  __int64 v12; // rdx
  $81B80DCEA5A02D890AB7B2872B48AC01 *v13; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140E2FF48, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2FF48, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140E2FF48, (__int64)v3, (__int64)&qword_140E2FF48);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140E2FF68, 1u, 0);
    if ( ClearBitsAndSet != -1 )
      break;
    if ( !(unsigned int)MiExpandPartitionIds() )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2FF48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2FF48);
      KeAbPostRelease((ULONG_PTR)&qword_140E2FF48);
      v8 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v8 )
      {
        v9 = &CurrentThread->152;
        if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v9->ApcState.ApcListHead[0].Flink != v9 )
          KiCheckForKernelApcDelivery((__int64)v9, v7);
      }
      return 0LL;
    }
  }
  v11 = ClearBitsAndSet;
  byte_140E2FF94 = 1;
  *((_QWORD *)qword_140E2FF88 + (unsigned __int16)ClearBitsAndSet) = a1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2FF48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2FF48);
  KeAbPostRelease((ULONG_PTR)&qword_140E2FF48);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 )
  {
    v13 = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v13->ApcState.ApcListHead[0].Flink != v13 )
      KiCheckForKernelApcDelivery((__int64)v13, v12);
  }
  return v11;
}
