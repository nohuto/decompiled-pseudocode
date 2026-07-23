/*
 * XREFs of PopAdaptiveStandbyCalculateBatteryRegion @ 0x14075F4C0
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140760484 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbySessionStart @ 0x140761630 (PopAdaptiveStandbySessionStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAdaptiveStandbyCalculateBatteryRegion(int a1)
{
  unsigned int v1; // edx
  __int128 *v2; // rax
  __int64 result; // rax

  v1 = 0;
  v2 = &PopAdaptiveStandbyRegions;
  do
  {
    if ( a1 > *(_DWORD *)v2 )
      break;
    ++v1;
    v2 = (__int128 *)((char *)v2 + 20);
  }
  while ( v1 < 3 );
  result = 2LL;
  if ( v1 < 2 )
    return v1;
  return result;
}
