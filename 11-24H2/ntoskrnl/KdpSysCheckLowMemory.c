/*
 * XREFs of KdpSysCheckLowMemory @ 0x140B7A4F0
 * Callers:
 *     KdSystemDebugControl @ 0x1407383E0 (KdSystemDebugControl.c)
 *     KdpCheckLowMemory @ 0x140B790B0 (KdpCheckLowMemory.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x140B7A2F4 (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
