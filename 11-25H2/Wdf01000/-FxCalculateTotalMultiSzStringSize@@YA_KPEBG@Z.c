/*
 * XREFs of ?FxCalculateTotalMultiSzStringSize@@YA_KPEBG@Z @ 0x14006F500
 * Callers:
 *     ?_PnpQueryId@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1400173A0 (-_PnpQueryId@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxCalculateTotalMultiSzStringSize(const wchar_t *MultiSz)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = 0LL;
  if ( !*MultiSz )
    goto LABEL_7;
  do
  {
    v2 = -1LL;
    do
      ++v2;
    while ( MultiSz[v2] );
    MultiSz += v2 + 1;
    v1 += 2 * v2 + 2;
  }
  while ( *MultiSz );
  if ( !v1 )
LABEL_7:
    v1 = 2LL;
  return v1 + 2;
}
