/*
 * XREFs of ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x18001AF1C
 * Callers:
 *     ?SetText@CDWriteText@@UEAAJPEBG@Z @ 0x180031530 (-SetText@CDWriteText@@UEAAJPEBG@Z.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x1800CCAF8 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_WChar_traits<unsigned short>::compare(char *a1, char *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int16 v4; // r9
  signed __int64 v5; // rcx
  bool v6; // cc
  unsigned __int16 v7; // r9

  result = 0LL;
  if ( a3 )
  {
    v4 = *(_WORD *)a1;
    if ( *(_WORD *)a1 < *(_WORD *)a2 )
    {
      return 0xFFFFFFFFLL;
    }
    else
    {
      v5 = a1 - a2;
      v6 = v4 <= *(_WORD *)a2;
      while ( v6 )
      {
        if ( a3 == 1 )
          return result;
        a2 += 2;
        --a3;
        v7 = *(_WORD *)&a2[v5];
        v6 = v7 <= *(_WORD *)a2;
        if ( v7 < *(_WORD *)a2 )
          return 0xFFFFFFFFLL;
      }
      return 1LL;
    }
  }
  return result;
}
