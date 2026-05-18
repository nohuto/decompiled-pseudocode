/*
 * XREFs of sub_180030580 @ 0x180030580
 * Callers:
 *     sub_180035358 @ 0x180035358 (sub_180035358.c)
 *     sub_1800355DC @ 0x1800355DC (sub_1800355DC.c)
 *     sub_180054160 @ 0x180054160 (sub_180054160.c)
 *     sub_1800B9D90 @ 0x1800B9D90 (sub_1800B9D90.c)
 *     sub_1800CE32C @ 0x1800CE32C (sub_1800CE32C.c)
 *     sub_1800CF0C4 @ 0x1800CF0C4 (sub_1800CF0C4.c)
 *     sub_1800CFF0C @ 0x1800CFF0C (sub_1800CFF0C.c)
 * Callees:
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_18001E574 @ 0x18001E574 (sub_18001E574.c)
 */

__int64 __fastcall sub_180030580(__int64 a1, __int64 a2)
{
  const void *v3; // rax
  __int64 v4; // rdx

  if ( a1 != a2 )
  {
    v3 = (const void *)sub_1800130AC(a2);
    sub_18001E574(a1, v3, *(_QWORD *)(v4 + 16));
  }
  return a1;
}
