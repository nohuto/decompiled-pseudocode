/*
 * XREFs of NtGdiCancelDC @ 0x1C02C1830
 * Callers:
 *     <none>
 * Callees:
 *     GreCancelDC @ 0x1C02A9A30 (GreCancelDC.c)
 */

__int64 __fastcall NtGdiCancelDC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return GreCancelDC(a1, a2, a3, a4);
}
