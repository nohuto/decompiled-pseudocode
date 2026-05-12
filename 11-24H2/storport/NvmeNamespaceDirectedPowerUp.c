/*
 * XREFs of NvmeNamespaceDirectedPowerUp @ 0x1401334C0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x1400F9E9C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceReleasePoFx @ 0x1400F9EFC (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceDirectedPowerUpRequestD0 @ 0x140133554 (NvmeNamespaceDirectedPowerUpRequestD0.c)
 */

void __fastcall NvmeNamespaceDirectedPowerUp(_QWORD *Context)
{
  ++*(_QWORD *)(*(_QWORD *)(Context[16] + 32LL) + 24LL);
  if ( NvmeNamespaceCheckAndAcquirePoFx((__int64)Context) )
  {
    *(_DWORD *)(*(_QWORD *)(Context[16] + 8LL) + 32LL) |= 4u;
    NvmeNamespaceDirectedPowerUpRequestD0(Context);
    NvmeNamespaceReleasePoFx((__int64)Context);
  }
}
