/*
 * XREFs of ?IsDriverWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDevice@@@Z @ 0x18023673C
 * Callers:
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801C5270 (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CComputeScribbleRenderer::IsDriverWhitelisted(const struct CD3DDevice *a1)
{
  if ( CCommonRegistryData::InkGPUAccelOverrideVendorWhitelist )
    return 1;
  if ( *((_DWORD *)a1 + 224) == 32902 )
    return *((_DWORD *)a1 + 155) < 2600;
  return 0;
}
