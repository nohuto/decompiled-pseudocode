/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x140A3E3B0
 * Callers:
 *     PiCollapseEnumRequests @ 0x1404A33EC (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x140A3E2E8 (PiProcessReenumeration.c)
 * Callees:
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x1408331C0 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     PipForDeviceNodeSubtree @ 0x140A3E3F0 (PipForDeviceNodeSubtree.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumeration(__int64 a1, char a2)
{
  __int64 result; // rax

  result = PiMarkDeviceTreeForReenumerationWorker(a1);
  if ( a2 )
    return PipForDeviceNodeSubtree(a1, PiMarkDeviceTreeForReenumerationWorker, 0LL);
  return result;
}
