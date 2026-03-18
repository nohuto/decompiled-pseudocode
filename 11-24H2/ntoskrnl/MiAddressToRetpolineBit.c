/*
 * XREFs of MiAddressToRetpolineBit @ 0x1404C7F08
 * Callers:
 *     MiMarkRetpolineBits @ 0x140A88520 (MiMarkRetpolineBits.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiAddressToRetpolineBit(__int64 a1)
{
  return (unsigned __int64)(a1 + 0x800000000000LL) >> 16;
}
