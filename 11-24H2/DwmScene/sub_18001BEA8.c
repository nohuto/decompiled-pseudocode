/*
 * XREFs of sub_18001BEA8 @ 0x18001BEA8
 * Callers:
 *     sub_18001BCFC @ 0x18001BCFC (sub_18001BCFC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001BEA8(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  result = *a4;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)a2 = *(_OWORD *)result;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(result + 16);
  *(_QWORD *)(result + 16) = 0LL;
  *(_QWORD *)(result + 24) = 15LL;
  *(_BYTE *)result = 0;
  *(_QWORD *)(a2 + 32) = 0LL;
  return result;
}
