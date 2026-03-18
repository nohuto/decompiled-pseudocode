/*
 * XREFs of KdpSysCheckLowMemory @ 0x140B784F0
 * Callers:
 *     KdSystemDebugControl @ 0x14073A4B0 (KdSystemDebugControl.c)
 *     KdpCheckLowMemory @ 0x140B770B0 (KdpCheckLowMemory.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x140B782F4 (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
