/*
 * XREFs of CmpUnblockTwoHiveWrites @ 0x14083EC40
 * Callers:
 *     CmpVirtualPathPresent @ 0x1407CC704 (CmpVirtualPathPresent.c)
 *     CmpVirtualBranchIsReplicated @ 0x14083EC94 (CmpVirtualBranchIsReplicated.c)
 * Callees:
 *     CmpDereferenceHive @ 0x1408484B4 (CmpDereferenceHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BA9B20 (HvUnlockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpUnblockTwoHiveWrites(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 )
    result = HvUnlockHiveFlusherExclusive(a1);
  if ( a2 )
    result = HvUnlockHiveFlusherExclusive(a2);
  if ( a1 )
    result = CmpDereferenceHive(a1);
  if ( a2 )
    return CmpDereferenceHive(a2);
  return result;
}
