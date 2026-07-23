/*
 * XREFs of MiInitializePagedPoolEvents @ 0x140C56054
 * Callers:
 *     MiInitializeMemoryEvents @ 0x14080067C (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiFreePoolPagesLeft @ 0x1404419D0 (MiFreePoolPagesLeft.c)
 */

$727077A9B6E167EAE1398C74674DC5A5 *MiInitializePagedPoolEvents()
{
  struct _KTHREAD *CurrentThread; // rbx
  char *v1; // rax
  signed __int8 v2; // cf
  char *v3; // rdi
  unsigned __int64 v4; // rdi
  $727077A9B6E167EAE1398C74674DC5A5 *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&qword_140E37680, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E37680, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_140E37680, v1, (__int64)&qword_140E37680);
  if ( v3 )
    v3[10] = 1;
  v4 = MiFreePoolPagesLeft(5);
  if ( v4 < qword_140E2CBA8 )
    KeResetEvent(qword_140E38E40);
  else
    KeSetEvent(qword_140E38E40, 0, 0);
  if ( v4 > qword_140E2CBA0 )
    KeResetEvent(qword_140E38E38);
  else
    KeSetEvent(qword_140E38E38, 0, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E37680, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E37680);
  result = ($727077A9B6E167EAE1398C74674DC5A5 *)KeAbPostRelease((ULONG_PTR)&qword_140E37680);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($727077A9B6E167EAE1398C74674DC5A5 *)result->ApcState.ApcListHead[0].Flink != result )
      return ($727077A9B6E167EAE1398C74674DC5A5 *)KiCheckForKernelApcDelivery();
  }
  return result;
}
