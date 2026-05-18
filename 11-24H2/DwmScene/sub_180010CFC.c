/*
 * XREFs of sub_180010CFC @ 0x180010CFC
 * Callers:
 *     sub_180011BC0 @ 0x180011BC0 (sub_180011BC0.c)
 *     sub_18002DFFC @ 0x18002DFFC (sub_18002DFFC.c)
 *     sub_18004A874 @ 0x18004A874 (sub_18004A874.c)
 *     sub_18004F18C @ 0x18004F18C (sub_18004F18C.c)
 *     sub_18005BB48 @ 0x18005BB48 (sub_18005BB48.c)
 *     sub_1800954CC @ 0x1800954CC (sub_1800954CC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180010CFC(__int64 *a1, _QWORD *a2, _QWORD *a3)
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
    if ( (unsigned __int64)v4[4] >= *a3 )
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
