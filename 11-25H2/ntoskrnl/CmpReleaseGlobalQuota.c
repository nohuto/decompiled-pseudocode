/*
 * XREFs of CmpReleaseGlobalQuota @ 0x14087E2C0
 * Callers:
 *     CmpAllocateForNonPagedHive @ 0x1404D1DA0 (CmpAllocateForNonPagedHive.c)
 *     CmpFree @ 0x14087E070 (CmpFree.c)
 *     HvHiveCleanup @ 0x14087E098 (HvHiveCleanup.c)
 *     CmpAllocate @ 0x14087E4C0 (CmpAllocate.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408820A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x1409F6F54 (HvpDropPagedBins.c)
 *     HvpAddBin @ 0x1409F795C (HvpAddBin.c)
 *     HvpAllocateNonPagedBin @ 0x1409F8730 (HvpAllocateNonPagedBin.c)
 *     HvFreeHivePartial @ 0x140A4CAE0 (HvFreeHivePartial.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpReleaseGlobalQuota(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  if ( a1 > (unsigned __int64)CmpGlobalQuotaUsed )
    KeBugCheckEx(0x51u, 0xDuLL, 1uLL, 0LL, 0LL);
  _InterlockedAdd((volatile signed __int32 *)&CmpGlobalQuotaUsed, -a1);
  return result;
}
