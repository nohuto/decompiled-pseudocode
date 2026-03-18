/*
 * XREFs of NtGdiUnrealizeObject @ 0x1C02C4830
 * Callers:
 *     <none>
 * Callees:
 *     GreUnrealizeObject @ 0x1C02D1A4C (GreUnrealizeObject.c)
 */

__int64 __fastcall NtGdiUnrealizeObject(HPALETTE a1)
{
  return GreUnrealizeObject(a1);
}
