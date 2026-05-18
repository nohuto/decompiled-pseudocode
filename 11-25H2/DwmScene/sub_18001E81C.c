/*
 * XREFs of sub_18001E81C @ 0x18001E81C
 * Callers:
 *     sub_18005EBFC @ 0x18005EBFC (sub_18005EBFC.c)
 *     sub_18005ED8C @ 0x18005ED8C (sub_18005ED8C.c)
 *     sub_18005EEF0 @ 0x18005EEF0 (sub_18005EEF0.c)
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_1800CDAD0 @ 0x1800CDAD0 (sub_1800CDAD0.c)
 * Callees:
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_18001C9D8 @ 0x18001C9D8 (sub_18001C9D8.c)
 *     sub_18001CE14 @ 0x18001CE14 (sub_18001CE14.c)
 */

__int64 __fastcall sub_18001E81C(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rax

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  sub_18001C9D8(a1, a3);
  if ( *(_QWORD *)(a1 + 16) - a3 < a4 )
    a4 = *(_QWORD *)(a1 + 16) - a3;
  v8 = sub_1800130AC(a1);
  sub_18001CE14((char **)a2, (const void *)(v8 + 2 * a3), a4);
  return a2;
}
