/*
 * XREFs of sub_18007345C @ 0x18007345C
 * Callers:
 *     sub_180073154 @ 0x180073154 (sub_180073154.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007345C(__int64 a1, __int64 a2, int *a3, _QWORD *a4)
{
  int v4; // eax
  __int64 result; // rax

  v4 = *a3;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)a2 = v4;
  *(_QWORD *)(a2 + 8) = *a4;
  result = a4[1];
  *(_QWORD *)(a2 + 16) = result;
  *a4 = 0LL;
  a4[1] = 0LL;
  return result;
}
