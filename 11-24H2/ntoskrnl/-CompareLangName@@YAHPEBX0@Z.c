/*
 * XREFs of ?CompareLangName@@YAHPEBX0@Z @ 0x1404990D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareLangName(char *a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r8
  char *v3; // r9
  unsigned __int16 v4; // cx
  unsigned __int16 v5; // dx
  unsigned int v6; // edx

  v2 = *a2;
  v3 = (char *)(a1 - (char *)*a2);
  while ( 1 )
  {
    v4 = *(unsigned __int16 *)((char *)v2 + (_QWORD)v3);
    v5 = *v2;
    if ( !v4 )
      break;
    if ( !v5 )
      return v4 != 0 ? 1 : -1;
    if ( (unsigned __int16)(v4 - 65) <= 0x19u )
      v4 |= 0x20u;
    if ( (unsigned __int16)(v5 - 65) <= 0x19u )
      v5 |= 0x20u;
    if ( v4 == 95 )
      v4 = 45;
    if ( v5 == 95 )
      v5 = 45;
    v6 = v4 - v5;
    if ( v6 )
      return v6;
    ++v2;
  }
  if ( !v5 )
    return 0LL;
  return v4 != 0 ? 1 : -1;
}
