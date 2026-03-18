/*
 * XREFs of PopAdaptiveStandbyCalculateBatteryRegion @ 0x1407604C0
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140761118 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbySessionStart @ 0x140762088 (PopAdaptiveStandbySessionStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAdaptiveStandbyCalculateBatteryRegion(int a1)
{
  unsigned int v1; // edx
  __int128 *v2; // r8
  __int64 result; // rax

  v1 = 0;
  v2 = &PopAdaptiveStandbyRegions;
  result = 1LL;
  do
  {
    if ( a1 > *(_DWORD *)v2 )
      break;
    ++v1;
    v2 = (__int128 *)((char *)v2 + 20);
  }
  while ( v1 < 2 );
  if ( !v1 )
    return 0LL;
  return result;
}
