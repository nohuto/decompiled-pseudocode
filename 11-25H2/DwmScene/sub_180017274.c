/*
 * XREFs of sub_180017274 @ 0x180017274
 * Callers:
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 * Callees:
 *     sub_180017960 @ 0x180017960 (sub_180017960.c)
 */

__int64 __fastcall sub_180017274(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180017960(v1);
  return result;
}
