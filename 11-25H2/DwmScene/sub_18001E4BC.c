/*
 * XREFs of sub_18001E4BC @ 0x18001E4BC
 * Callers:
 *     sub_18001DF9C @ 0x18001DF9C (sub_18001DF9C.c)
 *     sub_1800551C8 @ 0x1800551C8 (sub_1800551C8.c)
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_1800D03C0 @ 0x1800D03C0 (sub_1800D03C0.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001D79C @ 0x18001D79C (sub_18001D79C.c)
 */

__int64 __fastcall sub_18001E4BC(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18001D79C((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010134(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
