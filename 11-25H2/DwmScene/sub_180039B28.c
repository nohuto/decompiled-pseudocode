/*
 * XREFs of sub_180039B28 @ 0x180039B28
 * Callers:
 *     sub_180030D10 @ 0x180030D10 (sub_180030D10.c)
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_1800604D0 @ 0x1800604D0 (sub_1800604D0.c)
 *     sub_18006B954 @ 0x18006B954 (sub_18006B954.c)
 * Callees:
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 */

__int64 __fastcall sub_180039B28(__int64 a1)
{
  _BYTE *v1; // rax
  unsigned int v2; // ecx
  _BYTE *v3; // r8
  char v4; // al
  unsigned int v5; // edx

  v1 = (_BYTE *)sub_1800137F8(a1);
  v2 = 0;
  v3 = v1;
  if ( v1 )
  {
    v4 = *v1;
    v5 = 5381;
    while ( v4 )
    {
      v5 = v4 + 33 * v5;
      v4 = *++v3;
    }
    return v5;
  }
  return v2;
}
