/*
 * XREFs of NvmeNamespacePowerNotRequiredStep1 @ 0x140133F80
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x1400F9E9C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceReleasePoFx @ 0x1400F9EFC (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespacePowerNotRequiredStep2 @ 0x140133FFC (NvmeNamespacePowerNotRequiredStep2.c)
 */

void __fastcall NvmeNamespacePowerNotRequiredStep1(_QWORD *Context)
{
  ++*(_QWORD *)(*(_QWORD *)(Context[16] + 32LL) + 8LL);
  if ( NvmeNamespaceCheckAndAcquirePoFx((__int64)Context) )
  {
    *(_DWORD *)(*(_QWORD *)(Context[16] + 8LL) + 32LL) &= ~4u;
    *(_DWORD *)(Context[16] + 64LL) = 0;
    if ( *((_DWORD *)Context + 69) )
    {
      if ( (*(_DWORD *)(Context[16] + 136LL) & 0x10) != 0 )
        *((_BYTE *)Context + 284) = 0;
    }
    NvmeNamespacePowerNotRequiredStep2(Context);
    NvmeNamespaceReleasePoFx((__int64)Context);
  }
}
