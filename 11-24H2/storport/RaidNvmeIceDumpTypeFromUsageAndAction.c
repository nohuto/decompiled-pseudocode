/*
 * XREFs of RaidNvmeIceDumpTypeFromUsageAndAction @ 0x14009D9F8
 * Callers:
 *     RaUnitStorageDumpControl @ 0x140188700 (RaUnitStorageDumpControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidNvmeIceDumpTypeFromUsageAndAction(int a1, int a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // edx

  v2 = a1 - 1;
  if ( !v2 )
    return 1LL;
  if ( v2 == 1 && !a2 )
    return 2LL;
  v3 = a2 - 1;
  if ( !v3 )
    return 1LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 2LL;
  if ( v4 == 1 )
    return 3LL;
  else
    return 0LL;
}
