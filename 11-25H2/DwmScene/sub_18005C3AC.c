/*
 * XREFs of sub_18005C3AC @ 0x18005C3AC
 * Callers:
 *     sub_18005AD28 @ 0x18005AD28 (sub_18005AD28.c)
 *     sub_18008DC3C @ 0x18008DC3C (sub_18008DC3C.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18005A038 @ 0x18005A038 (sub_18005A038.c)
 */

__int64 __fastcall sub_18005C3AC(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18005A038((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010134(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
