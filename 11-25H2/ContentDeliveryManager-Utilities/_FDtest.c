/*
 * XREFs of _FDtest @ 0x18002151C
 * Callers:
 *     _FXp_addh @ 0x18000C5B8 (_FXp_addh.c)
 *     _FXp_mulh @ 0x18000CA34 (_FXp_mulh.c)
 * Callees:
 *     <none>
 */

__int16 __cdecl FDtest(float *a1)
{
  __int16 v1; // dx
  __int16 result; // ax

  v1 = *((_WORD *)a1 + 1) & 0x7F80;
  if ( v1 == 32640 )
  {
    if ( (*((_BYTE *)a1 + 2) & 0x7F) != 0 )
      return 2;
    result = 1;
    if ( *(_WORD *)a1 )
      return 2;
  }
  else
  {
    if ( (*((_WORD *)a1 + 1) & 0x7FFF) != 0 )
      return (v1 != 0) - 2;
    result = 0;
    if ( *(_WORD *)a1 )
      return (v1 != 0) - 2;
  }
  return result;
}
