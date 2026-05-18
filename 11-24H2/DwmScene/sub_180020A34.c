/*
 * XREFs of sub_180020A34 @ 0x180020A34
 * Callers:
 *     sub_180020A80 @ 0x180020A80 (sub_180020A80.c)
 *     sub_180020B18 @ 0x180020B18 (sub_180020B18.c)
 *     sub_1800E2D80 @ 0x1800E2D80 (sub_1800E2D80.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

__int64 __fastcall sub_180020A34(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000BB4C(v1);
  return result;
}
