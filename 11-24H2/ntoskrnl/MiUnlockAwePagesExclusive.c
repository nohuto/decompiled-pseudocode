/*
 * XREFs of MiUnlockAwePagesExclusive @ 0x14068429C
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140682624 (MiBuildPhysicalPageFreeChain.c)
 *     MiDeleteAweInfoPages @ 0x1407F9E50 (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1407FA110 (MiResizeAweBitMap.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14028F9A0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
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
