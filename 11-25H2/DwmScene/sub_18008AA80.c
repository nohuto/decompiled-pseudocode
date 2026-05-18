/*
 * XREFs of sub_18008AA80 @ 0x18008AA80
 * Callers:
 *     sub_18008A118 @ 0x18008A118 (sub_18008A118.c)
 *     sub_18008A148 @ 0x18008A148 (sub_18008A148.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008AA80(__int64 a1, __int64 a2, unsigned int *a3, _QWORD *a4)
{
  __int64 result; // rax

  result = *a3;
  *(_QWORD *)(a2 + 8) = *a4;
  *(_DWORD *)a2 = result;
  return result;
}
