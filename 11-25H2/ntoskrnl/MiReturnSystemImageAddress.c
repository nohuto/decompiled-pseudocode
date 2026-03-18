/*
 * XREFs of MiReturnSystemImageAddress @ 0x140A651A0
 * Callers:
 *     MiReturnImageBase @ 0x140940000 (MiReturnImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140A5B2CC (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiReleaseDriverPtes @ 0x140A651C4 (MiReleaseDriverPtes.c)
 */

__int64 __fastcall MiReturnSystemImageAddress(unsigned __int64 a1)
{
  __int64 PteAddress; // rax
  __int64 v2; // rdx

  PteAddress = MiGetPteAddress(a1);
  return MiReleaseDriverPtes(PteAddress, v2);
}
