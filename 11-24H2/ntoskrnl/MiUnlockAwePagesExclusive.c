/*
 * XREFs of MiUnlockAwePagesExclusive @ 0x1406830AC
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140681434 (MiBuildPhysicalPageFreeChain.c)
 *     MiDeleteAweInfoPages @ 0x1407F96E0 (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1407F99A0 (MiResizeAweBitMap.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14025F390 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MiUnlockAwePagesExclusive(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  result = (_QWORD *)ExReleaseAutoExpandPushLockExclusive(a1 + 64, 0LL);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v5, v4);
  }
  return result;
}
