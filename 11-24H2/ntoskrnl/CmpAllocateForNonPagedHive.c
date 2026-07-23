/*
 * XREFs of CmpAllocateForNonPagedHive @ 0x1404C8A10
 * Callers:
 *     CmpCreateEmptyHiveClone @ 0x1407DEA60 (CmpCreateEmptyHiveClone.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x140882D70 (CmpReleaseGlobalQuota.c)
 *     CmpClaimGlobalQuota @ 0x140882FDC (CmpClaimGlobalQuota.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocateForNonPagedHive(unsigned int a1, char a2, ULONG a3)
{
  ULONG_PTR v4; // rbx
  __int64 Pool2; // rdi

  v4 = a1;
  if ( !(unsigned __int8)CmpClaimGlobalQuota() )
    return 0LL;
  Pool2 = ExAllocatePool2(a2 != 0 ? 72LL : 64LL, v4, a3);
  if ( !Pool2 )
    CmpReleaseGlobalQuota((unsigned int)v4);
  return Pool2;
}
