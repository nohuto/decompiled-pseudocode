/*
 * XREFs of sub_18001E97C @ 0x18001E97C
 * Callers:
 *     sub_18005ED5C @ 0x18005ED5C (sub_18005ED5C.c)
 *     sub_18005EEEC @ 0x18005EEEC (sub_18005EEEC.c)
 *     sub_18005F050 @ 0x18005F050 (sub_18005F050.c)
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 *     sub_1800CDC30 @ 0x1800CDC30 (sub_1800CDC30.c)
 * Callees:
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_18001CB38 @ 0x18001CB38 (sub_18001CB38.c)
 *     sub_18001CF74 @ 0x18001CF74 (sub_18001CF74.c)
 */

__int64 __fastcall sub_18001E97C(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rax

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  sub_18001CB38(a1, a3);
  if ( *(_QWORD *)(a1 + 16) - a3 < a4 )
    a4 = *(_QWORD *)(a1 + 16) - a3;
  v8 = sub_1800131AC(a1);
  sub_18001CF74((char **)a2, (const void *)(v8 + 2 * a3), a4);
  return a2;
}
