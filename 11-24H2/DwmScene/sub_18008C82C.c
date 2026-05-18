/*
 * XREFs of sub_18008C82C @ 0x18008C82C
 * Callers:
 *     sub_18008C5FC @ 0x18008C5FC (sub_18008C5FC.c)
 *     sub_1800D2008 @ 0x1800D2008 (sub_1800D2008.c)
 * Callees:
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 *     sub_1800123C8 @ 0x1800123C8 (sub_1800123C8.c)
 */

_QWORD *__fastcall sub_18008C82C(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // r9
  __int64 v5; // r10

  v3 = a3;
  if ( a2 )
  {
    v4 = a1 - (_QWORD)a3;
    do
    {
      sub_1800123C8(a1, v3, (_QWORD *)((char *)v3 + v4));
      v3 += 2;
    }
    while ( v5 != 1 );
  }
  sub_180012140((__int64)v3, (__int64)v3);
  return v3;
}
