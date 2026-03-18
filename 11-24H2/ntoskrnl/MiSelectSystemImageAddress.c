/*
 * XREFs of MiSelectSystemImageAddress @ 0x1408F8034
 * Callers:
 *     MiSelectImageBase @ 0x1408F67EC (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140A5E524 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x140AB636C (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(__int64 a1)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(a1, 0LL);
  if ( result )
    return result << 25 >> 16;
  return result;
}
