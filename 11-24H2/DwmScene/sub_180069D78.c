/*
 * XREFs of sub_180069D78 @ 0x180069D78
 * Callers:
 *     sub_18006997C @ 0x18006997C (sub_18006997C.c)
 *     sub_1800699B0 @ 0x1800699B0 (sub_1800699B0.c)
 *     sub_1800699BC @ 0x1800699BC (sub_1800699BC.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_1800695BC @ 0x1800695BC (sub_1800695BC.c)
 */

__int64 __fastcall sub_180069D78(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_1800695BC((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010234(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
