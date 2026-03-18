/*
 * XREFs of CmpAllocate @ 0x14087F0C0
 * Callers:
 *     CmpCreateEmptyHiveClone @ 0x1407DE510 (CmpCreateEmptyHiveClone.c)
 *     CmpAddSubKeyToList @ 0x14087E9C8 (CmpAddSubKeyToList.c)
 *     HvpAdjustBitmap @ 0x14087EF7C (HvpAdjustBitmap.c)
 *     CmpCreateHive @ 0x14092F538 (CmpCreateHive.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x14087EEC0 (CmpReleaseGlobalQuota.c)
 *     CmpClaimGlobalQuota @ 0x14087F12C (CmpClaimGlobalQuota.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocate(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  __int64 Pool2; // rdi

  v2 = a1;
  if ( !(unsigned __int8)CmpClaimGlobalQuota(a1) )
    return 0LL;
  Pool2 = ExAllocatePool2(a2 != 0 ? 264LL : 256LL);
  if ( !Pool2 )
    CmpReleaseGlobalQuota(v2);
  return Pool2;
}
