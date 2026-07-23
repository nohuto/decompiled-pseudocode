/*
 * XREFs of VfUtilAddressRangeFit @ 0x140B85148
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x140612598 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x1406126F8 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     ViDeadlockSearchResource @ 0x140B9C0E0 (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x140B9C1BC (ViDeadlockSearchThread.c)
 *     ViIrpDatabaseFindPointer @ 0x140BA6150 (ViIrpDatabaseFindPointer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfUtilAddressRangeFit(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned int v4; // r10d
  unsigned __int64 *v6; // rax

  v3 = *a1;
  v4 = 0;
  if ( !*a1 )
    return 0LL;
  v6 = a1 + 1;
  if ( a2 <= v3 )
  {
    if ( a3 >= *v6 )
      return 1;
    if ( a2 < v3 )
    {
LABEL_7:
      if ( a3 <= v3 || a3 > *v6 )
        return v4;
      return 1;
    }
  }
  if ( a2 >= *v6 )
    goto LABEL_7;
  return 1;
}
