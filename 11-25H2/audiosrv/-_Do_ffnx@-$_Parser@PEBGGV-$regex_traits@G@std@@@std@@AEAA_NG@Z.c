/*
 * XREFs of ?_Do_ffnx@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NG@Z @ 0x18013FAB0
 * Callers:
 *     ?_CharacterEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18013F0D0 (-_CharacterEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_ClassAtom@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@XZ @ 0x18013F260 (-_ClassAtom@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_ffnx(
        __int64 a1,
        __int16 a2)
{
  int v2; // eax

  if ( a2 == 97 )
  {
    v2 = 7;
LABEL_5:
    *(_DWORD *)(a1 + 116) = v2;
    return 1;
  }
  if ( a2 == 98 )
  {
    v2 = 8;
    goto LABEL_5;
  }
  return 0;
}
