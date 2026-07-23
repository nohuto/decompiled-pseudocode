/*
 * XREFs of MiSelectSystemImageAddress @ 0x140A55590
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140A5536C (MiGetSystemAddressForImage.c)
 *     MiSelectImageBase @ 0x140AEB020 (MiSelectImageBase.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x140A555D0 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(__int64 a1)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(a1, 0LL);
  if ( result )
    return result << 25 >> 16;
  return result;
}
