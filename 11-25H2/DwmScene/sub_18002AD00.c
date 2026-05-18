/*
 * XREFs of sub_18002AD00 @ 0x18002AD00
 * Callers:
 *     sub_1800BE0C0 @ 0x1800BE0C0 (sub_1800BE0C0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18002AD00(__int64 a1, float a2, float a3)
{
  char result; // al

  if ( a2 < 0.1 || a2 > 1.0 || a3 < 0.1 || a3 > 1.0 )
    return 0;
  *(float *)(a1 + 192) = a2;
  result = 1;
  *(float *)(a1 + 196) = a3;
  return result;
}
