/*
 * XREFs of sub_1800D03C0 @ 0x1800D03C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CEFB4 @ 0x1800CEFB4 (sub_1800CEFB4.c)
 */

char __fastcall sub_1800D03C0(__int64 a1, __int64 a2, char a3)
{
  int v4; // eax
  char v5; // dl
  char v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0;
  v4 = sub_1800CEFB4(a1, a2, &v7);
  v5 = a3;
  if ( !v4 )
    return v7;
  return v5;
}
