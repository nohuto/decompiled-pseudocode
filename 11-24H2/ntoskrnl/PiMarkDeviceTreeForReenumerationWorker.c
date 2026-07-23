/*
 * XREFs of PiMarkDeviceTreeForReenumerationWorker @ 0x14097B5D0
 * Callers:
 *     PiMarkDeviceTreeForReenumeration @ 0x140A39130 (PiMarkDeviceTreeForReenumeration.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumerationWorker(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 300) == 778 )
    PipSetDevNodeFlags(a1, 8LL);
  return 0LL;
}
