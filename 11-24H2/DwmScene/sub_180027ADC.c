/*
 * XREFs of sub_180027ADC @ 0x180027ADC
 * Callers:
 *     sub_180047520 @ 0x180047520 (sub_180047520.c)
 *     sub_1800497D0 @ 0x1800497D0 (sub_1800497D0.c)
 *     sub_180054BF0 @ 0x180054BF0 (sub_180054BF0.c)
 *     sub_180054CDC @ 0x180054CDC (sub_180054CDC.c)
 *     sub_1800583C0 @ 0x1800583C0 (sub_1800583C0.c)
 *     sub_180082D38 @ 0x180082D38 (sub_180082D38.c)
 *     sub_18009193C @ 0x18009193C (sub_18009193C.c)
 *     sub_180091F10 @ 0x180091F10 (sub_180091F10.c)
 *     sub_1800BC6D0 @ 0x1800BC6D0 (sub_1800BC6D0.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180027ADC(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(__int64))
{
  __int64 result; // rax

  do
  {
    result = a4(a1);
    a1 += a2;
    --a3;
  }
  while ( a3 );
  return result;
}
