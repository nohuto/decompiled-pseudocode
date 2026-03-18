/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x140464454
 * Callers:
 *     MiAllowImageMap @ 0x1408694B4 (MiAllowImageMap.c)
 *     MiRelocateImageAgain @ 0x1408F642C (MiRelocateImageAgain.c)
 *     MiSwitchBaseAddress @ 0x1408F6D04 (MiSwitchBaseAddress.c)
 *     MiDoesImageContainFunctionOverrideFixups @ 0x1408F94A8 (MiDoesImageContainFunctionOverrideFixups.c)
 *     MiMarkPrivateImageCfgBits @ 0x1408F9698 (MiMarkPrivateImageCfgBits.c)
 *     MiMarkSharedImageCfgBits @ 0x1408F9C78 (MiMarkSharedImageCfgBits.c)
 *     MmGetSectionInformation @ 0x14093C550 (MmGetSectionInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaLoadConfig(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32);
  return (v1 + 72) & -(__int64)(v1 != 0);
}
