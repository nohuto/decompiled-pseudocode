/*
 * XREFs of sub_180095E8C @ 0x180095E8C
 * Callers:
 *     sub_1800959D4 @ 0x1800959D4 (sub_1800959D4.c)
 *     sub_180095ADC @ 0x180095ADC (sub_180095ADC.c)
 *     sub_180095D08 @ 0x180095D08 (sub_180095D08.c)
 *     sub_180095D94 @ 0x180095D94 (sub_180095D94.c)
 *     sub_180095ED8 @ 0x180095ED8 (sub_180095ED8.c)
 *     sub_180095F70 @ 0x180095F70 (sub_180095F70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180095E8C(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rcx
  _QWORD *v5; // rax

  v3 = (_QWORD *)(a1 + 184);
  v4 = (_QWORD *)(a1 + 144);
  if ( v4 == v3 )
  {
LABEL_5:
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_BYTE *)a2 = 0;
  }
  else
  {
    v5 = v4;
    while ( *v5 != a3 )
    {
      if ( ++v5 == v3 )
        goto LABEL_5;
    }
    *(_BYTE *)a2 = 1;
    *(_QWORD *)(a2 + 8) = (unsigned int)(v5 - v4);
  }
  return a2;
}
