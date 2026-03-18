/*
 * XREFs of PiMarkDeviceTreeForReenumerationWorker @ 0x1408331C0
 * Callers:
 *     PiMarkDeviceTreeForReenumeration @ 0x140A3E3B0 (PiMarkDeviceTreeForReenumeration.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x1408331E8 (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumerationWorker(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 300) == 778 )
    PipSetDevNodeFlags(a1, 8LL);
  return 0LL;
}
