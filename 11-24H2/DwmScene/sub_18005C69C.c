/*
 * XREFs of sub_18005C69C @ 0x18005C69C
 * Callers:
 *     sub_18005DD38 @ 0x18005DD38 (sub_18005DD38.c)
 *     sub_180068250 @ 0x180068250 (sub_180068250.c)
 *     sub_1800D0EC4 @ 0x1800D0EC4 (sub_1800D0EC4.c)
 * Callees:
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_18001E734 @ 0x18001E734 (sub_18001E734.c)
 */

char __fastcall sub_18005C69C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned __int16 *v6; // r10
  __int64 v7; // r8
  int v8; // eax
  char v9; // cl

  sub_1800131AC(a3);
  v4 = sub_1800131AC(v3);
  if ( v5 != *(_QWORD *)(v7 + 16) )
    return 1;
  v8 = sub_18001E734(v4, v6, v5);
  v9 = 0;
  if ( v8 )
    return 1;
  return v9;
}
