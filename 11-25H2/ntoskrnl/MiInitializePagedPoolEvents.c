/*
 * XREFs of MiInitializePagedPoolEvents @ 0x140C42C94
 * Callers:
 *     MiInitializeMemoryEvents @ 0x1407F007C (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiFreePoolPagesLeft @ 0x14044B688 (MiFreePoolPagesLeft.c)
 */

$727077A9B6E167EAE1398C74674DC5A5 *MiInitializePagedPoolEvents()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rdi
  unsigned __int64 v4; // rdi
  $727077A9B6E167EAE1398C74674DC5A5 *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v1 = KeAbPreAcquire((__int64)&qword_140E37300, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E37300, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_140E37300, v1, (__int64)&qword_140E37300);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  v4 = MiFreePoolPagesLeft(5);
  if ( v4 < qword_140E2C828 )
    KeResetEvent(qword_140E38AC0);
  else
    KeSetEvent(qword_140E38AC0, 0, 0);
  if ( v4 > qword_140E2C820 )
    KeResetEvent(qword_140E38AB8);
  else
    KeSetEvent(qword_140E38AB8, 0, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E37300, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E37300);
  result = ($727077A9B6E167EAE1398C74674DC5A5 *)KeAbPostRelease((ULONG_PTR)&qword_140E37300);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($727077A9B6E167EAE1398C74674DC5A5 *)result->ApcState.ApcListHead[0].Flink != result )
      return ($727077A9B6E167EAE1398C74674DC5A5 *)KiCheckForKernelApcDelivery();
  }
  return result;
}
