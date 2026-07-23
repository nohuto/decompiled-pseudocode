/*
 * XREFs of HalAllocateAdapterChannel @ 0x14053AFF0
 * Callers:
 *     <none>
 * Callees:
 *     HalAllocateAdapterChannelV2 @ 0x14038740C (HalAllocateAdapterChannelV2.c)
 *     HalpDmaGetAdapterVersion @ 0x14038951C (HalpDmaGetAdapterVersion.c)
 *     HalpAllocateAdapterChannel @ 0x14038C740 (HalpAllocateAdapterChannel.c)
 *     HalpDmaExtractFromVerifierShadowAdapter @ 0x1404A93D4 (HalpDmaExtractFromVerifierShadowAdapter.c)
 */

__int64 __fastcall HalAllocateAdapterChannel(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned int v6; // r8d
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11

  v5 = HalpDmaExtractFromVerifierShadowAdapter(a1);
  if ( (unsigned int)HalpDmaGetAdapterVersion(v5) == 2 )
    return HalAllocateAdapterChannelV2(v9, v8, v6, v7);
  *(_DWORD *)(v8 + 20) &= ~2u;
  return HalpAllocateAdapterChannel(v9, v8, v6, *(_DWORD *)(v9 + 252) >> 12, 0, a4);
}
