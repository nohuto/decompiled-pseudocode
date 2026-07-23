/*
 * XREFs of CmpUnblockTwoHiveWrites @ 0x1408E20F0
 * Callers:
 *     CmpVirtualPathPresent @ 0x1407DC414 (CmpVirtualPathPresent.c)
 *     CmpVirtualBranchIsReplicated @ 0x1408E2144 (CmpVirtualBranchIsReplicated.c)
 * Callees:
 *     CmpDereferenceHive @ 0x140840680 (CmpDereferenceHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BBBA98 (HvUnlockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpUnblockTwoHiveWrites(volatile signed __int32 *a1, volatile signed __int32 *a2)
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
