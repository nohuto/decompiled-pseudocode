/*
 * XREFs of sub_180052F1C @ 0x180052F1C
 * Callers:
 *     sub_180052AD0 @ 0x180052AD0 (sub_180052AD0.c)
 *     sub_180052B0C @ 0x180052B0C (sub_180052B0C.c)
 *     sub_1800D8F3B @ 0x1800D8F3B (sub_1800D8F3B.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

__int64 __fastcall sub_180052F1C(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000BB4C(v1);
  return result;
}
