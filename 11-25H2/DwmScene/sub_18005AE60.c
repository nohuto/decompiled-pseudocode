/*
 * XREFs of sub_18005AE60 @ 0x18005AE60
 * Callers:
 *     sub_18005A360 @ 0x18005A360 (sub_18005A360.c)
 *     sub_18005AC54 @ 0x18005AC54 (sub_18005AC54.c)
 * Callees:
 *     sub_18003D828 @ 0x18003D828 (sub_18003D828.c)
 *     sub_18005A42C @ 0x18005A42C (sub_18005A42C.c)
 */

__int64 __fastcall sub_18005AE60(__int64 a1)
{
  __int64 v2; // rcx

  sub_18003D828((void **)(a1 + 16));
  sub_18005A42C(v2, *(_QWORD *)a1);
  return sub_180010134(*(void **)a1, 0x20uLL);
}
