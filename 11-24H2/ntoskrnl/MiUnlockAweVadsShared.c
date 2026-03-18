/*
 * XREFs of MiUnlockAweVadsShared @ 0x1404BB0AC
 * Callers:
 *     MiDeletePagablePteRange @ 0x1403CC1D4 (MiDeletePagablePteRange.c)
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiLockAweVadsShared @ 0x1404C2D68 (MiLockAweVadsShared.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140681434 (MiBuildPhysicalPageFreeChain.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F84C8 (MiAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1407FA100 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1407FA3B0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockShared @ 0x14025DFF0 (ExReleaseAutoExpandPushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MiUnlockAweVadsShared(__int64 a1, ULONG_PTR a2)
{
  _QWORD *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  result = (_QWORD *)ExReleaseAutoExpandPushLockShared(a2, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v5, v4);
  }
  return result;
}
