/*
 * XREFs of PiMarkDeviceTreeForReenumerationWorker @ 0x140990590
 * Callers:
 *     PiMarkDeviceTreeForReenumeration @ 0x140A438A0 (PiMarkDeviceTreeForReenumeration.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x1409905B8 (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumerationWorker(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 300) == 778 )
    PipSetDevNodeFlags(a1, 8LL);
  return 0LL;
}
