/*
 * XREFs of sub_1800834AC @ 0x1800834AC
 * Callers:
 *     sub_180082B60 @ 0x180082B60 (sub_180082B60.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_1800834AC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    sub_180010234(v6, 2 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 1));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 2 * a3;
  result = a2 + 2 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
