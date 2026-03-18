/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x140A438A0
 * Callers:
 *     PiCollapseEnumRequests @ 0x1404A2D4C (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x140A437D8 (PiProcessReenumeration.c)
 * Callees:
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x140990590 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     PipForDeviceNodeSubtree @ 0x140A438E0 (PipForDeviceNodeSubtree.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumeration(__int64 a1, char a2)
{
  __int64 result; // rax

  result = PiMarkDeviceTreeForReenumerationWorker(a1);
  if ( a2 )
    return PipForDeviceNodeSubtree(a1, PiMarkDeviceTreeForReenumerationWorker, 0LL);
  return result;
}
