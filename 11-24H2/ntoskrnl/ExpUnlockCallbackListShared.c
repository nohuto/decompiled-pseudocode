/*
 * XREFs of ExpUnlockCallbackListShared @ 0x1404A19B8
 * Callers:
 *     ExpGetNextCallback @ 0x140A60060 (ExpGetNextCallback.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall ExpUnlockCallbackListShared(__int64 a1)
{
  signed __int64 v2; // r8
  ULONG_PTR v3; // rtt
  _QWORD *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

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
      return (_QWORD *)KiCheckForKernelApcDelivery(v6, v5);
  }
  return result;
}
