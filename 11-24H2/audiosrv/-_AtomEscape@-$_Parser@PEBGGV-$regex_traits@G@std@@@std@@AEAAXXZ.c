/*
 * XREFs of ?_AtomEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180147478
 * Callers:
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x1801472AC (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 * Callees:
 *     ?_Add_backreference@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXI@Z @ 0x18014696C (-_Add_backreference@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXI@Z.c)
 *     ?_CharacterClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_N_N@Z @ 0x180147A9C (-_CharacterClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_N_N@Z.c)
 *     ?_CharacterEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180147B48 (-_CharacterEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_DecimalDigits@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NW4error_type@regex_constants@2@@Z @ 0x18014800C (-_DecimalDigits@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NW4error_type@regex_constants@2.c)
 *     ?_Error@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z @ 0x1801486C4 (-_Error@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_AtomEscape(
        __int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // r8
  int v4; // eax
  __int64 result; // rax
  __int64 v6; // rcx

  if ( (*(_DWORD *)(a1 + 128) & 0x100) != 0
    && (unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_DecimalDigits(
                          a1,
                          3LL) )
  {
    v3 = *(int *)(a1 + 116);
    v4 = *(_DWORD *)(a1 + 128);
    if ( !(_DWORD)v3 )
    {
      if ( (v4 & 0x100000) == 0 )
      {
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v2, 2LL);
        __debugbreak();
      }
      return std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char(
               a1 + 64,
               *(_WORD *)(a1 + 116));
    }
    if ( (v4 & 0x200) != 0 && (unsigned int)v3 > 9
      || (v2 = *(int *)(a1 + 116), *(unsigned int *)(a1 + 24) < v3)
      || *(_QWORD *)(a1 + 56) <= v3
      || (v2 = v3 & 0x1F, ((1 << (v3 & 0x1F)) & *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * (v3 >> 5))) == 0) )
    {
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v2, 3LL);
      __debugbreak();
    }
    return std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_backreference(
             a1 + 64,
             v3);
  }
  else
  {
    if ( (unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterEscape(a1) )
      return std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char(
               a1 + 64,
               *(_WORD *)(a1 + 116));
    if ( (*(_DWORD *)(a1 + 128) & 0x20000) == 0
      || (result = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterClassEscape(
                     a1,
                     1LL),
          !(_BYTE)result) )
    {
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v6, 2LL);
      JUMPOUT(0x180147560LL);
    }
  }
  return result;
}
