/*
 * XREFs of CmpAllocate @ 0x140882F70
 * Callers:
 *     CmpCreateEmptyHiveClone @ 0x1407DEA60 (CmpCreateEmptyHiveClone.c)
 *     CmpAddSubKeyToList @ 0x140882878 (CmpAddSubKeyToList.c)
 *     HvpAdjustBitmap @ 0x140882E2C (HvpAdjustBitmap.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x140882D70 (CmpReleaseGlobalQuota.c)
 *     CmpClaimGlobalQuota @ 0x140882FDC (CmpClaimGlobalQuota.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocate(__int64 a1, char a2, ULONG a3)
{
  unsigned int v4; // ebx
  __int64 Pool2; // rdi

  v4 = a1;
  if ( !(unsigned __int8)CmpClaimGlobalQuota(a1) )
    return 0LL;
  Pool2 = ExAllocatePool2(a2 != 0 ? 264LL : 256LL, v4, a3);
  if ( !Pool2 )
    CmpReleaseGlobalQuota(v4);
  return Pool2;
}
