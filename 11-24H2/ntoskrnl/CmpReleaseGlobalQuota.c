/*
 * XREFs of CmpReleaseGlobalQuota @ 0x14087EEC0
 * Callers:
 *     CmpAllocateForNonPagedHive @ 0x1404CF960 (CmpAllocateForNonPagedHive.c)
 *     CmpFree @ 0x14087EC70 (CmpFree.c)
 *     HvHiveCleanup @ 0x14087EC98 (HvHiveCleanup.c)
 *     CmpAllocate @ 0x14087F0C0 (CmpAllocate.c)
 *     HvpAddBin @ 0x140980584 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140982010 (HvpRemapAndEnlistHiveBins.c)
 *     HvFreeHivePartial @ 0x140A4FDCC (HvFreeHivePartial.c)
 *     HvpDropPagedBins @ 0x140A60168 (HvpDropPagedBins.c)
 *     HvpAllocateNonPagedBin @ 0x140A60388 (HvpAllocateNonPagedBin.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
