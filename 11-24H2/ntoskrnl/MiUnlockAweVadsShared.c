/*
 * XREFs of MiUnlockAweVadsShared @ 0x1404B5F4C
 * Callers:
 *     MiDeletePagablePteRange @ 0x1402663A4 (MiDeletePagablePteRange.c)
 *     MiProtectAweRegion @ 0x1404BDA90 (MiProtectAweRegion.c)
 *     MiLockAweVadsShared @ 0x1404BE2A0 (MiLockAweVadsShared.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140682624 (MiBuildPhysicalPageFreeChain.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F8C38 (MiAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1407FA870 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1407FAB20 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockShared @ 0x14028E600 (ExReleaseAutoExpandPushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
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
