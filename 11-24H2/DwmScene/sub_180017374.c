/*
 * XREFs of sub_180017374 @ 0x180017374
 * Callers:
 *     sub_1800151A0 @ 0x1800151A0 (sub_1800151A0.c)
 * Callees:
 *     sub_180017A20 @ 0x180017A20 (sub_180017A20.c)
 */

__int64 __fastcall sub_180017374(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180017A20(v1);
  return result;
}
