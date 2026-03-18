/*
 * XREFs of MiFreePartitionId @ 0x1407EC670
 * Callers:
 *     MiDeletePartition @ 0x1407EC62C (MiDeletePartition.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

$81B80DCEA5A02D890AB7B2872B48AC01 *__fastcall MiFreePartitionId(unsigned __int16 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v2; // rsi
  _QWORD *v3; // rax
  signed __int8 v4; // cf
  _QWORD *v5; // rdi
  $81B80DCEA5A02D890AB7B2872B48AC01 *result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140E2FF48, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2FF48, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140E2FF48, (__int64)v3, (__int64)&qword_140E2FF48);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  *((_BYTE *)qword_140E2FF68->Buffer + (v2 >> 3)) &= ~(1 << (v2 & 7));
  *((_QWORD *)qword_140E2FF88 + v2) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2FF48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2FF48);
  result = ($81B80DCEA5A02D890AB7B2872B48AC01 *)KeAbPostRelease((ULONG_PTR)&qword_140E2FF48);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)result->ApcState.ApcListHead[0].Flink != result )
      return ($81B80DCEA5A02D890AB7B2872B48AC01 *)KiCheckForKernelApcDelivery(v8, v7);
  }
  return result;
}
