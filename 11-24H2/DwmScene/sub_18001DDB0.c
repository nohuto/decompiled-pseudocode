/*
 * XREFs of sub_18001DDB0 @ 0x18001DDB0
 * Callers:
 *     sub_18003CF9C @ 0x18003CF9C (sub_18003CF9C.c)
 *     sub_18003D0F4 @ 0x18003D0F4 (sub_18003D0F4.c)
 * Callees:
 *     sub_18001E734 @ 0x18001E734 (sub_18001E734.c)
 */

char __fastcall sub_18001DDB0(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // r8
  int v6; // ecx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r11

  v5 = a4;
  if ( a4 >= a2 )
    v5 = a2;
  v6 = sub_18001E734(a1, a3, v5);
  if ( v6 )
    return v6;
  if ( v8 >= v7 )
    return v8 > v7;
  return -1;
}
