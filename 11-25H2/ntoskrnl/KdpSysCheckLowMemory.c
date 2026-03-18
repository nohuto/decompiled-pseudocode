/*
 * XREFs of KdpSysCheckLowMemory @ 0x140B684F0
 * Callers:
 *     KdSystemDebugControl @ 0x14072E220 (KdSystemDebugControl.c)
 *     KdpCheckLowMemory @ 0x140B670B0 (KdpCheckLowMemory.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x140B682F4 (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
