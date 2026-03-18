/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x140465A8C
 * Callers:
 *     MmGetSectionInformation @ 0x1408B6660 (MmGetSectionInformation.c)
 *     MiAllowImageMap @ 0x140903D34 (MiAllowImageMap.c)
 *     MiDoesImageContainFunctionOverrideFixups @ 0x14090469C (MiDoesImageContainFunctionOverrideFixups.c)
 *     MiMarkSharedImageCfgBits @ 0x140905BC4 (MiMarkSharedImageCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1409067EC (MiMarkPrivateImageCfgBits.c)
 *     MiRelocateImageAgain @ 0x14093FE24 (MiRelocateImageAgain.c)
 *     MiSwitchBaseAddress @ 0x140941584 (MiSwitchBaseAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaLoadConfig(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32);
  return (v1 + 72) & -(__int64)(v1 != 0);
}
