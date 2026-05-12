/*
 * XREFs of NvmeAdapterPowerDownDeviceCompletion @ 0x14012F4C0
 * Callers:
 *     <none>
 * Callees:
 *     GetNvmeAdapter @ 0x14006B1A0 (GetNvmeAdapter.c)
 */

__int64 __fastcall NvmeAdapterPowerDownDeviceCompletion(__int64 a1)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *NvmeAdapter; // rax
  __int64 v2; // rdx

  NvmeAdapter = (PEX_RUNDOWN_REF_CACHE_AWARE *)GetNvmeAdapter(a1);
  if ( *(_BYTE *)(v2 + 65) )
    *(_BYTE *)(*(_QWORD *)(v2 + 184) + 3LL) |= 1u;
  ExReleaseRundownProtectionCacheAware(NvmeAdapter[19]);
  return 0LL;
}
