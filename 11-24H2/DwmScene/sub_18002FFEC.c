/*
 * XREFs of sub_18002FFEC @ 0x18002FFEC
 * Callers:
 *     sub_18002DAF0 @ 0x18002DAF0 (sub_18002DAF0.c)
 *     sub_18002DBC0 @ 0x18002DBC0 (sub_18002DBC0.c)
 *     sub_1800D6935 @ 0x1800D6935 (sub_1800D6935.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

__int64 __fastcall sub_18002FFEC(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000BB4C(v1);
  return result;
}
