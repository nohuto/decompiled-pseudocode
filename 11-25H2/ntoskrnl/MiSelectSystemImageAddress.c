/*
 * XREFs of MiSelectSystemImageAddress @ 0x140A5B4F0
 * Callers:
 *     MiSelectImageBase @ 0x1409401DC (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140A5B2CC (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x140A5B530 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(__int64 a1)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(a1, 0LL);
  if ( result )
    return result << 25 >> 16;
  return result;
}
