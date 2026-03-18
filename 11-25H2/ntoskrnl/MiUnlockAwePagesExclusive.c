/*
 * XREFs of MiUnlockAwePagesExclusive @ 0x14067788C
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140675C14 (MiBuildPhysicalPageFreeChain.c)
 *     MiDeleteAweInfoPages @ 0x1407E9850 (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1407E9B10 (MiResizeAweBitMap.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402BD2A0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MiUnlockAwePagesExclusive(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExReleaseAutoExpandPushLockExclusive(a1 + 64, 0LL);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
