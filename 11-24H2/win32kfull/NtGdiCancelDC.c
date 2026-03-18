/*
 * XREFs of NtGdiCancelDC @ 0x140336DB0
 * Callers:
 *     <none>
 * Callees:
 *     GreCancelDC @ 0x140330A3C (GreCancelDC.c)
 */

__int64 __fastcall NtGdiCancelDC(__int64 a1)
{
  return GreCancelDC(a1);
}
