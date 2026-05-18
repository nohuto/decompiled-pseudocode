/*
 * XREFs of sub_180040BC8 @ 0x180040BC8
 * Callers:
 *     sub_180040B38 @ 0x180040B38 (sub_180040B38.c)
 *     sub_180040C1C @ 0x180040C1C (sub_180040C1C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180040BC8(__int64 *a1, _QWORD *a2, _WORD *a3)
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
    if ( *((_WORD *)v4 + 14) >= *a3 )
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
