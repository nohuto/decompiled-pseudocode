/*
 * XREFs of MiExtendWorkingSetSwapPagefile @ 0x1406F9574
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x140404108 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x140404630 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiIssuePageExtendRequest @ 0x14046B438 (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MiExtendWorkingSetSwapPagefile(__int64 a1, __int64 a2, unsigned int a3)
{
  return !MiIssuePageExtendRequest(a1, (a2 + 0x7FFF) & 0xFFFFFFFFFFFF8000uLL, 0, a3) ? 0xC0000099 : 0;
}
