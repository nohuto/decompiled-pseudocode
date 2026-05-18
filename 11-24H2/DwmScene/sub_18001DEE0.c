/*
 * XREFs of sub_18001DEE0 @ 0x18001DEE0
 * Callers:
 *     sub_18001DE9C @ 0x18001DE9C (sub_18001DE9C.c)
 *     sub_18005E324 @ 0x18005E324 (sub_18005E324.c)
 *     sub_1800CF988 @ 0x1800CF988 (sub_1800CF988.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001DEE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 7LL;
  *(_WORD *)a3 = 0;
  return result;
}
