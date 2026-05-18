/*
 * XREFs of sub_18000D53C @ 0x18000D53C
 * Callers:
 *     sub_1800E2B60 @ 0x1800E2B60 (sub_1800E2B60.c)
 * Callees:
 *     sub_18000EF44 @ 0x18000EF44 (sub_18000EF44.c)
 */

__int64 __fastcall sub_18000D53C(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_18000EF44(v1);
  return result;
}
