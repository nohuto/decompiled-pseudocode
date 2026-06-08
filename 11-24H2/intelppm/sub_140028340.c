/*
 * XREFs of sub_140028340 @ 0x140028340
 * Callers:
 *     sub_140040F94 @ 0x140040F94 (sub_140040F94.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_140028340(__int64 a1, int a2)
{
  BOOLEAN result; // al

  result = KeSetTimerEx(
             (PKTIMER)a1,
             (LARGE_INTEGER)-(__int64)(unsigned int)(10000000 * a2),
             1000 * a2,
             (PKDPC)(a1 + 64));
  *(_BYTE *)(a1 + 148) = 1;
  return result;
}
