/*
 * XREFs of ?_ClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@_N@Z @ 0x180147DC4
 * Callers:
 *     ?_ClassAtom@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@XZ @ 0x180147CD8 (-_ClassAtom@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@XZ.c)
 * Callees:
 *     ?_CharacterClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_N_N@Z @ 0x180147A9C (-_CharacterClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_N_N@Z.c)
 *     ?_CharacterEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180147B48 (-_CharacterEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_DecimalDigits@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NW4error_type@regex_constants@2@@Z @ 0x18014800C (-_DecimalDigits@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NW4error_type@regex_constants@2.c)
 *     ?_Error@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z @ 0x1801486C4 (-_Error@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180148CD0 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_ClassEscape(
        __int64 a1)
{
  int v1; // eax
  __int64 v4; // rcx

  v1 = *(_DWORD *)(a1 + 128);
  if ( (v1 & 0x4000) != 0 && *(_WORD *)(a1 + 120) == 92 )
  {
    *(_DWORD *)(a1 + 116) = 92;
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
    return 1LL;
  }
  if ( (v1 & 0x20000) != 0
    && std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterClassEscape(
         a1,
         0) )
  {
    return 2LL;
  }
  if ( (unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_DecimalDigits(
                          a1,
                          2LL) )
  {
    if ( *(_DWORD *)(a1 + 116) )
    {
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v4, 2LL);
      JUMPOUT(0x180147E46LL);
    }
    return 1LL;
  }
  return (unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterEscape(a1);
}
