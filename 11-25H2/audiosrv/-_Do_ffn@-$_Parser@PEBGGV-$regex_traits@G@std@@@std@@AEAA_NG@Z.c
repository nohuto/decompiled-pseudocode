/*
 * XREFs of ?_Do_ffn@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NG@Z @ 0x18013FA58
 * Callers:
 *     ?_CharacterEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18013F0D0 (-_CharacterEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_ClassAtom@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@XZ @ 0x18013F260 (-_ClassAtom@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_ffn(
        __int64 a1,
        __int16 a2)
{
  switch ( a2 )
  {
    case 'f':
      *(_DWORD *)(a1 + 116) = 12;
      return 1;
    case 'n':
      *(_DWORD *)(a1 + 116) = 10;
      return 1;
    case 'r':
      *(_DWORD *)(a1 + 116) = 13;
      return 1;
    case 't':
      *(_DWORD *)(a1 + 116) = 9;
      return 1;
    case 'v':
      *(_DWORD *)(a1 + 116) = 11;
      return 1;
  }
  return 0;
}
