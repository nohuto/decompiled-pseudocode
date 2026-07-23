/*
 * XREFs of VfUtilAddressRangeFitNoLock @ 0x140B841E4
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x140BA5E64 (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140BA9084 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfUtilAddressRangeFitNoLock(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r10d

  v3 = 0;
  if ( !a1 || *a1 >= a1[1] )
    return 0LL;
  if ( a2 <= *a1 && a3 >= a1[1] || a2 >= *a1 && a2 < a1[1] || a3 > *a1 && a3 <= a1[1] )
    return 1;
  return v3;
}
