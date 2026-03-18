/*
 * XREFs of MiReturnSystemImageAddress @ 0x140A67CC0
 * Callers:
 *     MiReturnImageBase @ 0x1408F6610 (MiReturnImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140A5E524 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     MiReleaseDriverPtes @ 0x140A67CE4 (MiReleaseDriverPtes.c)
 */

__int64 __fastcall MiReturnSystemImageAddress(unsigned __int64 a1)
{
  __int64 PteAddress; // rax
  __int64 v2; // rdx

  PteAddress = MiGetPteAddress(a1);
  return MiReleaseDriverPtes(PteAddress, v2);
}
