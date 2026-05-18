/*
 * XREFs of sub_180059CB4 @ 0x180059CB4
 * Callers:
 *     sub_18005453C @ 0x18005453C (sub_18005453C.c)
 *     sub_1800547B0 @ 0x1800547B0 (sub_1800547B0.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_1800544FC @ 0x1800544FC (sub_1800544FC.c)
 */

__int64 __fastcall sub_180059CB4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_1800544FC((__int64)v6, *(_QWORD *)(a1 + 8));
    sub_180010234(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 48 * a3;
  result = a2 + 48 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
