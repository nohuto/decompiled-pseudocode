/*
 * XREFs of MiReturnSystemImageAddress @ 0x140A611C0
 * Callers:
 *     MiReturnImageBase @ 0x1409D83E0 (MiReturnImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140A5536C (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiReleaseDriverPtes @ 0x140A611E4 (MiReleaseDriverPtes.c)
 */

__int64 __fastcall MiReturnSystemImageAddress(unsigned __int64 a1)
{
  __int64 PteAddress; // rax
  __int64 v2; // rdx

  PteAddress = MiGetPteAddress(a1);
  return MiReleaseDriverPtes(PteAddress, v2);
}
