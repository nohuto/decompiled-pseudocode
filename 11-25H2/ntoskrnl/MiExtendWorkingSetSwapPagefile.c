/*
 * XREFs of MiExtendWorkingSetSwapPagefile @ 0x1406ED804
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x1403D8A60 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1403D8E1C (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiIssuePageExtendRequest @ 0x14046DC64 (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MiExtendWorkingSetSwapPagefile(__int64 a1, __int64 a2, unsigned int a3)
{
  return !MiIssuePageExtendRequest(a1, (a2 + 0x7FFF) & 0xFFFFFFFFFFFF8000uLL, 0, a3) ? 0xC0000099 : 0;
}
