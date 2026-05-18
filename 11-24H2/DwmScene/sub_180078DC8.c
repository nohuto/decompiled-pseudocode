/*
 * XREFs of sub_180078DC8 @ 0x180078DC8
 * Callers:
 *     sub_18007A434 @ 0x18007A434 (sub_18007A434.c)
 * Callees:
 *     sub_180078A28 @ 0x180078A28 (sub_180078A28.c)
 */

char *__fastcall sub_180078DC8(_QWORD *a1, _QWORD *a2)
{
  _BYTE *v3; // rdx
  __int64 v4; // rdx

  v3 = (_BYTE *)a1[1];
  if ( v3 == (_BYTE *)a1[2] )
    return sub_180078A28(a1, v3, a2);
  *(_QWORD *)v3 = *a2;
  v4 = a1[1];
  a1[1] = v4 + 8;
  return (char *)v4;
}
