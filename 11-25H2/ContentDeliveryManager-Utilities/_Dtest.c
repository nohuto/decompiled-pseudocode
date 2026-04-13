/*
 * XREFs of _Dtest @ 0x180021860
 * Callers:
 *     _Xp_addh @ 0x18000D310 (_Xp_addh.c)
 *     _Xp_mulh @ 0x18000D7A0 (_Xp_mulh.c)
 *     _LDtest @ 0x180021A84 (_LDtest.c)
 * Callees:
 *     <none>
 */

__int16 __cdecl Dtest(double *a1)
{
  __int16 v1; // dx
  __int16 result; // ax

  v1 = *((_WORD *)a1 + 3) & 0x7FF0;
  if ( v1 == 32752 )
  {
    if ( (*((_BYTE *)a1 + 6) & 0xF) != 0 )
      return 2;
    if ( *((_WORD *)a1 + 2) )
      return 2;
    if ( *((_WORD *)a1 + 1) )
      return 2;
    result = 1;
    if ( *(_WORD *)a1 )
      return 2;
  }
  else
  {
    if ( (*((_WORD *)a1 + 3) & 0x7FFF) != 0 )
      return (v1 != 0) - 2;
    result = 0;
    if ( *((_WORD *)a1 + 2) || *((_WORD *)a1 + 1) || *(_WORD *)a1 )
      return (v1 != 0) - 2;
  }
  return result;
}
