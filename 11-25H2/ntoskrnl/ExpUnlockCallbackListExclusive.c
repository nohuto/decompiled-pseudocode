/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x1404CC43C
 * Callers:
 *     ExpDeleteCallback @ 0x1407ABDD0 (ExpDeleteCallback.c)
 *     ExCreateCallback @ 0x140A62280 (ExCreateCallback.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
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
