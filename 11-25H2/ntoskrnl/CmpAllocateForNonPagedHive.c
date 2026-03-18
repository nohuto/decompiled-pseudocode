/*
 * XREFs of CmpAllocateForNonPagedHive @ 0x1404D1DA0
 * Callers:
 *     CmpCreateEmptyHiveClone @ 0x1407CEC28 (CmpCreateEmptyHiveClone.c)
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x14087E2C0 (CmpReleaseGlobalQuota.c)
 *     CmpClaimGlobalQuota @ 0x14087E52C (CmpClaimGlobalQuota.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocateForNonPagedHive(unsigned int a1, char a2)
{
  __int64 Pool2; // rdi

  if ( !(unsigned __int8)CmpClaimGlobalQuota() )
    return 0LL;
  Pool2 = ExAllocatePool2(a2 != 0 ? 72LL : 64LL);
  if ( !Pool2 )
    CmpReleaseGlobalQuota(a1);
  return Pool2;
}
