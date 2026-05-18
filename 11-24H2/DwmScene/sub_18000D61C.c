/*
 * XREFs of sub_18000D61C @ 0x18000D61C
 * Callers:
 *     sub_1800E2CC0 @ 0x1800E2CC0 (sub_1800E2CC0.c)
 * Callees:
 *     sub_18000F044 @ 0x18000F044 (sub_18000F044.c)
 */

__int64 __fastcall sub_18000D61C(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_18000F044(v1);
  return result;
}
