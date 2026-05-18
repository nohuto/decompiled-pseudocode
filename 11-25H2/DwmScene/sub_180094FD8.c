/*
 * XREFs of sub_180094FD8 @ 0x180094FD8
 * Callers:
 *     sub_180094DCC @ 0x180094DCC (sub_180094DCC.c)
 *     sub_18009502C @ 0x18009502C (sub_18009502C.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

__int64 __fastcall sub_180094FD8(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 *a5, __int64 *a6)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 result; // rax

  v7 = *a6;
  v8 = *a5;
  *(_DWORD *)a2 = *a3;
  result = sub_180016F54(a2 + 8, a4);
  *(_QWORD *)(a2 + 40) = v8;
  *(_QWORD *)(a2 + 48) = v7;
  return result;
}
