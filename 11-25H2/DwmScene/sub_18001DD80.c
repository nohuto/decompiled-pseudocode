/*
 * XREFs of sub_18001DD80 @ 0x18001DD80
 * Callers:
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_18005E1C4 @ 0x18005E1C4 (sub_18005E1C4.c)
 *     sub_1800CF828 @ 0x1800CF828 (sub_1800CF828.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001DD80(__int64 a1, __int64 a2, __int64 a3)
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
