/*
 * XREFs of sub_1800552C8 @ 0x1800552C8
 * Callers:
 *     sub_1800D91DB @ 0x1800D91DB (sub_1800D91DB.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_1800544FC @ 0x1800544FC (sub_1800544FC.c)
 */

__int64 __fastcall sub_1800552C8(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_1800544FC((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010234(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
