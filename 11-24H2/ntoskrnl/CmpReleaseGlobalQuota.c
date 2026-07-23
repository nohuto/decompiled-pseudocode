/*
 * XREFs of CmpReleaseGlobalQuota @ 0x140882D70
 * Callers:
 *     CmpAllocateForNonPagedHive @ 0x1404C8A10 (CmpAllocateForNonPagedHive.c)
 *     CmpFree @ 0x140882B20 (CmpFree.c)
 *     HvHiveCleanup @ 0x140882B48 (HvHiveCleanup.c)
 *     CmpAllocate @ 0x140882F70 (CmpAllocate.c)
 *     HvpAddBin @ 0x140968D94 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14096A820 (HvpRemapAndEnlistHiveBins.c)
 *     HvFreeHivePartial @ 0x140A46B7C (HvFreeHivePartial.c)
 *     HvpDropPagedBins @ 0x140A586B8 (HvpDropPagedBins.c)
 *     HvpAllocateNonPagedBin @ 0x140A588D8 (HvpAllocateNonPagedBin.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
