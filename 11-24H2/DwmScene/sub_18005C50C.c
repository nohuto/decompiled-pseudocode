/*
 * XREFs of sub_18005C50C @ 0x18005C50C
 * Callers:
 *     sub_18005AE88 @ 0x18005AE88 (sub_18005AE88.c)
 *     sub_18008DD9C @ 0x18008DD9C (sub_18008DD9C.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18005A198 @ 0x18005A198 (sub_18005A198.c)
 */

__int64 __fastcall sub_18005C50C(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18005A198((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010234(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
