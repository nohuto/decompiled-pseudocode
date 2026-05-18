/*
 * XREFs of sub_180095FEC @ 0x180095FEC
 * Callers:
 *     sub_180095B34 @ 0x180095B34 (sub_180095B34.c)
 *     sub_180095C3C @ 0x180095C3C (sub_180095C3C.c)
 *     sub_180095E68 @ 0x180095E68 (sub_180095E68.c)
 *     sub_180095EF4 @ 0x180095EF4 (sub_180095EF4.c)
 *     sub_180096038 @ 0x180096038 (sub_180096038.c)
 *     sub_1800960D0 @ 0x1800960D0 (sub_1800960D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180095FEC(__int64 a1, __int64 a2, __int64 a3)
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
