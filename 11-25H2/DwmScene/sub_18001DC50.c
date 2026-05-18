/*
 * XREFs of sub_18001DC50 @ 0x18001DC50
 * Callers:
 *     sub_18003CE3C @ 0x18003CE3C (sub_18003CE3C.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 * Callees:
 *     sub_18001E5D4 @ 0x18001E5D4 (sub_18001E5D4.c)
 */

char __fastcall sub_18001DC50(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // r8
  int v6; // ecx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r11

  v5 = a4;
  if ( a4 >= a2 )
    v5 = a2;
  v6 = sub_18001E5D4(a1, a3, v5);
  if ( v6 )
    return v6;
  if ( v8 >= v7 )
    return v8 > v7;
  return -1;
}
