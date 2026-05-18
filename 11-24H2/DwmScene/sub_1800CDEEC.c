/*
 * XREFs of sub_1800CDEEC @ 0x1800CDEEC
 * Callers:
 *     sub_1800CE554 @ 0x1800CE554 (sub_1800CE554.c)
 * Callees:
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_18001E734 @ 0x18001E734 (sub_18001E734.c)
 */

char __fastcall sub_1800CDEEC(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // r8
  unsigned __int16 *v5; // r10
  __int64 v6; // rdx
  int v7; // eax
  char v8; // cl

  sub_1800131AC(a2);
  v3 = sub_1800131AC(v2);
  if ( v4 != *(_QWORD *)(v6 + 16) )
    return 1;
  v7 = sub_18001E734(v3, v5, v4);
  v8 = 0;
  if ( v7 )
    return 1;
  return v8;
}
