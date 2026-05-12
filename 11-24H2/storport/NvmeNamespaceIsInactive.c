/*
 * XREFs of NvmeNamespaceIsInactive @ 0x1400F9ED8
 * Callers:
 *     NvmeAdapterFabricControllerUpdateNamespace @ 0x1400E2530 (NvmeAdapterFabricControllerUpdateNamespace.c)
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 * Callees:
 *     <none>
 */

char __fastcall NvmeNamespaceIsInactive(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( !*(_QWORD *)a1 || !*(_BYTE *)(a1 + 4LL * (*(_BYTE *)(a1 + 26) & 0xF) + 130) )
    return 1;
  return v1;
}
