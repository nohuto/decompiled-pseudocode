/*
 * XREFs of NvmeAdapterDisableFabricControllerAsyncEvent @ 0x1400E1B6C
 * Callers:
 *     NvmeAdapterCleanupFabricNvmeController @ 0x1400DEF90 (NvmeAdapterCleanupFabricNvmeController.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterSetFabricControllerFeature @ 0x1400E76C8 (NvmeAdapterSetFabricControllerFeature.c)
 */

__int64 __fastcall NvmeAdapterDisableFabricControllerAsyncEvent(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx

  v4 = 0;
  if ( *(_DWORD *)(a1 + 568) == 2 )
  {
    v4 = NvmeAdapterSetFabricControllerFeature(a1, 0, 11, a4, 0);
    if ( v4 < 0 )
      StorEtwNvmeControllerEvent(
        a1,
        1,
        2,
        (__int64)L"Disabling Async Event failed",
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
  }
  return (unsigned int)v4;
}
