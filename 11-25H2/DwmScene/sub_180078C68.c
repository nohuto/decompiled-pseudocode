/*
 * XREFs of sub_180078C68 @ 0x180078C68
 * Callers:
 *     sub_18007A2D4 @ 0x18007A2D4 (sub_18007A2D4.c)
 * Callees:
 *     sub_1800788C8 @ 0x1800788C8 (sub_1800788C8.c)
 */

char *__fastcall sub_180078C68(_QWORD *a1, _QWORD *a2)
{
  _BYTE *v3; // rdx
  __int64 v4; // rdx

  v3 = (_BYTE *)a1[1];
  if ( v3 == (_BYTE *)a1[2] )
    return sub_1800788C8(a1, v3, a2);
  *(_QWORD *)v3 = *a2;
  v4 = a1[1];
  a1[1] = v4 + 8;
  return (char *)v4;
}
