/*
 * XREFs of DequeueAndReadyContext @ 0x140005CE4
 * Callers:
 *     WriteCookAccess @ 0x1400015F0 (WriteCookAccess.c)
 *     ParseRelease @ 0x140004C30 (ParseRelease.c)
 *     SignalASLEvent @ 0x140055F48 (SignalASLEvent.c)
 * Callees:
 *     InsertReadyQueue @ 0x140013A60 (InsertReadyQueue.c)
 */

_QWORD *__fastcall DequeueAndReadyContext(_QWORD **a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx

  v2 = 0LL;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v4 = *a1;
  if ( *a1 != a1 )
  {
    if ( (_QWORD **)v4[1] != a1 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *a1 = v5;
    v2 = v4 - 4;
    v5[1] = a1;
    LOBYTE(v3) = 1;
    v4[1] = v4;
    *v4 = v4;
    InsertReadyQueue(v4 - 4, v3);
  }
  KeReleaseSpinLock(&SpinLock, NewIrql);
  return v2;
}
