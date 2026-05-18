/*
 * XREFs of sub_18003D88C @ 0x18003D88C
 * Callers:
 *     sub_18003D9B8 @ 0x18003D9B8 (sub_18003D9B8.c)
 *     sub_18003D9E8 @ 0x18003D9E8 (sub_18003D9E8.c)
 *     sub_18004B75C @ 0x18004B75C (sub_18004B75C.c)
 *     sub_1800D7CF0 @ 0x1800D7CF0 (sub_1800D7CF0.c)
 *     sub_1800D8A34 @ 0x1800D8A34 (sub_1800D8A34.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_18003D88C(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010234(v1, 0x50uLL);
  return result;
}
