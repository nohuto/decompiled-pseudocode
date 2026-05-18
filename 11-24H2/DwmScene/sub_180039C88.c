/*
 * XREFs of sub_180039C88 @ 0x180039C88
 * Callers:
 *     sub_180030E70 @ 0x180030E70 (sub_180030E70.c)
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 *     sub_180060630 @ 0x180060630 (sub_180060630.c)
 *     sub_18006BAB4 @ 0x18006BAB4 (sub_18006BAB4.c)
 * Callees:
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 */

__int64 __fastcall sub_180039C88(__int64 a1)
{
  _BYTE *v1; // rax
  unsigned int v2; // ecx
  _BYTE *v3; // r8
  char v4; // al
  unsigned int v5; // edx

  v1 = (_BYTE *)sub_1800138F8(a1);
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
