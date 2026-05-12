/*
 * XREFs of NvmeAdapterEnableFabricControllerAsyncEvent @ 0x1400E225C
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400DFBF4 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterReconnectFabricControllerAssociation @ 0x1400E69F4 (NvmeAdapterReconnectFabricControllerAssociation.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterSetFabricControllerFeature @ 0x1400E76C8 (NvmeAdapterSetFabricControllerFeature.c)
 */

__int64 __fastcall NvmeAdapterEnableFabricControllerAsyncEvent(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  int v6; // edx
  int v7; // edi

  v4 = *(_DWORD *)(a1 + 572);
  if ( v4 == 1 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 592) + 92LL) & 0x100 | ((*(_BYTE *)(*(_QWORD *)(a1 + 592) + 261LL) & 8) << 7) | 0x1F;
  }
  else
  {
    v6 = 0;
    if ( v4 == 2 )
      v6 = 0x80000000;
  }
  v7 = NvmeAdapterSetFabricControllerFeature(a1, 0, 11, a4, v6);
  if ( v7 < 0 )
    StorEtwNvmeControllerEvent(
      a1,
      1,
      2,
      (__int64)L"Enabling Async Event failed",
      (void *)&word_140150F48,
      0,
      &word_140150F48,
      0,
      &word_140150F48,
      0,
      &word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0);
  return (unsigned int)v7;
}
