/*
 * XREFs of sub_180040A14 @ 0x180040A14
 * Callers:
 *     sub_18004099C @ 0x18004099C (sub_18004099C.c)
 *     sub_180050140 @ 0x180050140 (sub_180050140.c)
 *     sub_18007CC38 @ 0x18007CC38 (sub_18007CC38.c)
 *     sub_1800BC268 @ 0x1800BC268 (sub_1800BC268.c)
 *     sub_1800BC360 @ 0x1800BC360 (sub_1800BC360.c)
 *     sub_1800BD88C @ 0x1800BD88C (sub_1800BD88C.c)
 *     sub_1800BDDAC @ 0x1800BDDAC (sub_1800BDDAC.c)
 *     sub_1800BEA80 @ 0x1800BEA80 (sub_1800BEA80.c)
 *     sub_1800BEAD0 @ 0x1800BEAD0 (sub_1800BEAD0.c)
 *     sub_1800CB974 @ 0x1800CB974 (sub_1800CB974.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180040A14(__int64 *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx

  *a2 = *(_QWORD *)(*a1 + 8);
  a2[1] = 0LL;
  v3 = *a1;
  v4 = (__int64 *)*a2;
  a2[2] = v3;
  while ( !*((_BYTE *)v4 + 25) )
  {
    *a2 = v4;
    if ( *((_DWORD *)v4 + 8) >= *a3 )
    {
      *((_DWORD *)a2 + 2) = 1;
      a2[2] = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      *((_DWORD *)a2 + 2) = 0;
      v4 = (__int64 *)v4[2];
    }
  }
  return a2;
}
