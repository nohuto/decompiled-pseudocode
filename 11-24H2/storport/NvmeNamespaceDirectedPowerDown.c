/*
 * XREFs of NvmeNamespaceDirectedPowerDown @ 0x140133170
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x1400F9E9C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceReleasePoFx @ 0x1400F9EFC (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceDirectedPowerDownRequestD3 @ 0x1401332AC (NvmeNamespaceDirectedPowerDownRequestD3.c)
 */

void __fastcall NvmeNamespaceDirectedPowerDown(_QWORD *Context)
{
  ++*(_QWORD *)(*(_QWORD *)(Context[16] + 32LL) + 16LL);
  if ( NvmeNamespaceCheckAndAcquirePoFx((__int64)Context) )
  {
    *(_DWORD *)(*(_QWORD *)(Context[16] + 8LL) + 32LL) &= ~4u;
    *(_DWORD *)(*(_QWORD *)(Context[16] + 8LL) + 32LL) &= ~8u;
    if ( *((_DWORD *)Context + 69) )
    {
      if ( (*(_DWORD *)(Context[16] + 136LL) & 0x10) != 0 )
        *((_BYTE *)Context + 284) = 0;
    }
    NvmeNamespaceDirectedPowerDownRequestD3(Context);
    NvmeNamespaceReleasePoFx((__int64)Context);
  }
}
