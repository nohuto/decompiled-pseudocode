/*
 * XREFs of MiValidCombineProtection @ 0x14042E980
 * Callers:
 *     MiCombineCandidate @ 0x140210C20 (MiCombineCandidate.c)
 *     MiProcessCrcList @ 0x1409F43E8 (MiProcessCrcList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiValidCombineProtection(unsigned int a1)
{
  return a1 != 31 && a1 != 24 && (a1 & 0xFFFFFFF8) != 0x10 && a1 < 0x1E;
}
