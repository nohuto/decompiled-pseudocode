/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x1404C547C
 * Callers:
 *     ExpDeleteCallback @ 0x1407BB6D0 (ExpDeleteCallback.c)
 *     ExCreateCallback @ 0x140A5CC10 (ExCreateCallback.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall ExpUnlockCallbackListExclusive(__int64 a1)
{
  signed __int64 v2; // r8
  ULONG_PTR v3; // rtt
  _QWORD *result; // rax

  _m_prefetchw(&ExpCallbackListLock);
  v2 = ExpCallbackListLock - 16;
  if ( (ExpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v2 = 0LL;
  if ( (ExpCallbackListLock & 2) != 0
    || (v3 = ExpCallbackListLock,
        v3 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpCallbackListLock, v2, ExpCallbackListLock)) )
  {
    ExfReleasePushLock(&ExpCallbackListLock);
  }
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)&ExpCallbackListLock);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
