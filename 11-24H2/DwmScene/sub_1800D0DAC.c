/*
 * XREFs of sub_1800D0DAC @ 0x1800D0DAC
 * Callers:
 *     sub_1800CF6A0 @ 0x1800CF6A0 (sub_1800CF6A0.c)
 *     sub_1800CF89C @ 0x1800CF89C (sub_1800CF89C.c)
 * Callees:
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 */

__int64 __fastcall sub_1800D0DAC(__int64 a1)
{
  __int64 result; // rax

  result = 0x155555555555555LL;
  if ( *(_QWORD *)(a1 + 8) == 0x155555555555555LL )
    sub_18001CD64();
  return result;
}
