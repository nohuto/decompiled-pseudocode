/*
 * XREFs of MiniportGetNvmeAdapter @ 0x140053A10
 * Callers:
 *     StorpAllocateHostMemoryBuffer @ 0x140040D6C (StorpAllocateHostMemoryBuffer.c)
 *     StorpFreeHostMemoryBuffer @ 0x1400538E8 (StorpFreeHostMemoryBuffer.c)
 *     StorPortGetDeviceBase @ 0x140073BD0 (StorPortGetDeviceBase.c)
 *     StorPortGetUncachedExtension @ 0x140073D40 (StorPortGetUncachedExtension.c)
 *     NvmeAdapterUpdateDynamicRegistrySettings @ 0x1400DAD00 (NvmeAdapterUpdateDynamicRegistrySettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiniportGetNvmeAdapter(_BYTE *a1)
{
  if ( a1 && (a1[248] & 1) != 0 )
    return *(_QWORD *)a1;
  else
    return 0LL;
}
