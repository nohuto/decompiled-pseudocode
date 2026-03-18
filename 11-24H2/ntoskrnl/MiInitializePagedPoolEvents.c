/*
 * XREFs of MiInitializePagedPoolEvents @ 0x140C53EC4
 * Callers:
 *     MiInitializeMemoryEvents @ 0x1407FFF3C (MiInitializeMemoryEvents.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiFreePoolPagesLeft @ 0x140449280 (MiFreePoolPagesLeft.c)
 */

$81B80DCEA5A02D890AB7B2872B48AC01 *MiInitializePagedPoolEvents()
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rdi
  $81B80DCEA5A02D890AB7B2872B48AC01 *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v1 = KeAbPreAcquire((__int64)&qword_140E37540, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E37540, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_140E37540, (__int64)v1, (__int64)&qword_140E37540);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  v4 = MiFreePoolPagesLeft(5);
  if ( v4 < qword_140E2CA68 )
    KeResetEvent(qword_140E38D00);
  else
    KeSetEvent(qword_140E38D00, 0, 0);
  if ( v4 > qword_140E2CA60 )
    KeResetEvent(qword_140E38CF8);
  else
    KeSetEvent(qword_140E38CF8, 0, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E37540, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E37540);
  result = ($81B80DCEA5A02D890AB7B2872B48AC01 *)KeAbPostRelease((ULONG_PTR)&qword_140E37540);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)result->ApcState.ApcListHead[0].Flink != result )
      return ($81B80DCEA5A02D890AB7B2872B48AC01 *)KiCheckForKernelApcDelivery(v7, v6);
  }
  return result;
}
