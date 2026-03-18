/*
 * XREFs of MiUnlockAweVadsShared @ 0x1404BBD6C
 * Callers:
 *     MiDeletePagablePteRange @ 0x140383DB4 (MiDeletePagablePteRange.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MiLockAweVadsShared @ 0x1404C43BC (MiLockAweVadsShared.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140675C14 (MiBuildPhysicalPageFreeChain.c)
 *     MiAllocateUserPhysicalPages @ 0x1407E8638 (MiAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1407EA270 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1407EA520 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockShared @ 0x140205BC0 (ExReleaseAutoExpandPushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MiUnlockAweVadsShared(__int64 a1, ULONG_PTR a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExReleaseAutoExpandPushLockShared(a2, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
