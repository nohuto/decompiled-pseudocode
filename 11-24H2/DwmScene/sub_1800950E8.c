/*
 * XREFs of sub_1800950E8 @ 0x1800950E8
 * Callers:
 *     sub_1800950A4 @ 0x1800950A4 (sub_1800950A4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800950E8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_DWORD *)a2 = *(_DWORD *)a3;
  *(_OWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a3 + 8);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a3 + 24);
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_QWORD *)(a3 + 32) = 15LL;
  *(_BYTE *)(a3 + 8) = 0;
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a3 + 40);
  result = *(_QWORD *)(a3 + 48);
  *(_QWORD *)(a2 + 48) = result;
  return result;
}
