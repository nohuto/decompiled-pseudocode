/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x14045AB84
 * Callers:
 *     MiAllowImageMap @ 0x14086D7E4 (MiAllowImageMap.c)
 *     MiDoesImageContainFunctionOverrideFixups @ 0x14091BD84 (MiDoesImageContainFunctionOverrideFixups.c)
 *     MiMarkPrivateImageCfgBits @ 0x14091BF74 (MiMarkPrivateImageCfgBits.c)
 *     MiMarkSharedImageCfgBits @ 0x14091C554 (MiMarkSharedImageCfgBits.c)
 *     MmGetSectionInformation @ 0x1409E9C60 (MmGetSectionInformation.c)
 *     MiSwitchBaseAddress @ 0x140A45C38 (MiSwitchBaseAddress.c)
 *     MiRelocateImageAgain @ 0x140AEAE48 (MiRelocateImageAgain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaLoadConfig(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32);
  return (v1 + 72) & -(__int64)(v1 != 0);
}
