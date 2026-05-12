/*
 * XREFs of NvmeAdapterPowerNotRequiredStep1 @ 0x14012F7E0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterPowerNotRequiredStep2 @ 0x14012F814 (NvmeAdapterPowerNotRequiredStep2.c)
 */

__int64 __fastcall NvmeAdapterPowerNotRequiredStep1(_QWORD *a1)
{
  ++*(_QWORD *)(*(_QWORD *)(a1[20] + 24LL) + 32LL);
  *(_DWORD *)(*(_QWORD *)(a1[20] + 8LL) + 20LL) &= ~1u;
  return NvmeAdapterPowerNotRequiredStep2(a1);
}
