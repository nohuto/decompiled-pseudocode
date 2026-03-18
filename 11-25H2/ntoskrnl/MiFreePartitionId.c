/*
 * XREFs of MiFreePartitionId @ 0x1407DC7D0
 * Callers:
 *     MiDeletePartition @ 0x1407DC78C (MiDeletePartition.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

$727077A9B6E167EAE1398C74674DC5A5 *__fastcall MiFreePartitionId(unsigned __int16 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v2; // rsi
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rdi
  $727077A9B6E167EAE1398C74674DC5A5 *result; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140E2FD08, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2FD08, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140E2FD08, v3, (__int64)&qword_140E2FD08);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  *((_BYTE *)qword_140E2FD28->Buffer + (v2 >> 3)) &= ~(1 << (v2 & 7));
  *((_QWORD *)qword_140E2FD48 + v2) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2FD08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2FD08);
  result = ($727077A9B6E167EAE1398C74674DC5A5 *)KeAbPostRelease((ULONG_PTR)&qword_140E2FD08);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($727077A9B6E167EAE1398C74674DC5A5 *)result->ApcState.ApcListHead[0].Flink != result )
      return ($727077A9B6E167EAE1398C74674DC5A5 *)KiCheckForKernelApcDelivery();
  }
  return result;
}
