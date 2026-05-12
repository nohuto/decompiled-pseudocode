/*
 * XREFs of NvmeVersionCheck @ 0x1400BFE0C
 * Callers:
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400BEE0C (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeControllerSupportsUUIDList @ 0x1400BF638 (NvmeControllerSupportsUUIDList.c)
 *     NvmeNamespaceIdentify @ 0x1400BF954 (NvmeNamespaceIdentify.c)
 *     NvmeVersionCheck2 @ 0x1400BFE38 (NvmeVersionCheck2.c)
 *     NvmeControllerGetFeaturesSupportedCacheCapabilities @ 0x1400C8E14 (NvmeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NvmeControllerGetReadyTimeout @ 0x1400EED34 (NvmeControllerGetReadyTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall NvmeVersionCheck(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  bool v4; // cf
  bool v5; // zf

  v3 = *(unsigned __int16 *)(a1 + 578);
  v4 = v3 < a2;
  v5 = v3 == a2;
  if ( v3 == a2 )
  {
    if ( *(unsigned __int8 *)(a1 + 577) >= a3 )
      return 1;
    v4 = v3 < a2;
    v5 = v3 == a2;
  }
  return !v4 && !v5;
}
