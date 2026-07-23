/*
 * XREFs of _wcsistr @ 0x140A1EB84
 * Callers:
 *     SubstringMatch @ 0x140A1EB1C (SubstringMatch.c)
 * Callees:
 *     <none>
 */

char *__fastcall wcsistr(char *a1, char *a2)
{
  signed __int64 v4; // r8
  __int16 *v5; // rdx
  __int16 v6; // r9
  __int16 v7; // r11

  if ( !*(_WORD *)a2 )
    return a1;
  v4 = a1 - a2;
LABEL_4:
  if ( *(_WORD *)a1 )
  {
    v5 = (__int16 *)a2;
    while ( 1 )
    {
      v6 = *v5;
      if ( !*v5 )
        return a1;
      v7 = *(__int16 *)((char *)v5 + v4);
      if ( (unsigned __int16)(v7 - 97) <= 0x19u )
        v7 -= 32;
      if ( (unsigned __int16)(v6 - 97) <= 0x19u )
        v6 -= 32;
      if ( v7 == v6 )
      {
        if ( *(__int16 *)((char *)++v5 + v4) )
          continue;
      }
      if ( !*v5 )
        return a1;
      a1 += 2;
      v4 += 2LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
