/*
 * XREFs of NvmeAdapterDirectedPowerUp @ 0x14012E3C0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterCheckAndAcquirePoFx @ 0x14012DF08 (NvmeAdapterCheckAndAcquirePoFx.c)
 *     NvmeAdapterDirectedPowerUpRequestD0 @ 0x14012E4D8 (NvmeAdapterDirectedPowerUpRequestD0.c)
 */

BOOLEAN __fastcall NvmeAdapterDirectedPowerUp(_QWORD *Context)
{
  BOOLEAN result; // al

  ++*(_QWORD *)(*(_QWORD *)(Context[20] + 24LL) + 48LL);
  result = NvmeAdapterCheckAndAcquirePoFx((__int64)Context);
  if ( result )
  {
    *(_DWORD *)(*(_QWORD *)(Context[20] + 8LL) + 20LL) |= 1u;
    return NvmeAdapterDirectedPowerUpRequestD0(Context);
  }
  return result;
}
