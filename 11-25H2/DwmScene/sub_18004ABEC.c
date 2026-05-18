/*
 * XREFs of sub_18004ABEC @ 0x18004ABEC
 * Callers:
 *     sub_18004A2F8 @ 0x18004A2F8 (sub_18004A2F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004ABEC(__int64 a1, __int64 a2, __int64 a3)
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
  return result;
}
