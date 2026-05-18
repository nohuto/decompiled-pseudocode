/*
 * XREFs of sub_18002B4B0 @ 0x18002B4B0
 * Callers:
 *     sub_180028E6C @ 0x180028E6C (sub_180028E6C.c)
 *     sub_180028F84 @ 0x180028F84 (sub_180028F84.c)
 *     sub_18006CF4C @ 0x18006CF4C (sub_18006CF4C.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180028CB4 @ 0x180028CB4 (sub_180028CB4.c)
 */

__int64 __fastcall sub_18002B4B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_180028CB4((__int64)v6, *(_QWORD *)(a1 + 8));
    sub_180010134(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 152 * a3;
  result = a2 + 152 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
