/*
 * XREFs of sub_180095138 @ 0x180095138
 * Callers:
 *     sub_180094F2C @ 0x180094F2C (sub_180094F2C.c)
 *     sub_18009518C @ 0x18009518C (sub_18009518C.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

__int64 __fastcall sub_180095138(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 *a5, __int64 *a6)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 result; // rax

  v7 = *a6;
  v8 = *a5;
  *(_DWORD *)a2 = *a3;
  result = sub_180017054(a2 + 8, a4);
  *(_QWORD *)(a2 + 40) = v8;
  *(_QWORD *)(a2 + 48) = v7;
  return result;
}
