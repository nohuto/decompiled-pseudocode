/*
 * XREFs of sub_1800970DC @ 0x1800970DC
 * Callers:
 *     sub_180096FA8 @ 0x180096FA8 (sub_180096FA8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800970DC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a3 + 32);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a3 + 48);
  return result;
}
