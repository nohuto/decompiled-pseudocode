/*
 * XREFs of ?_ClassRanges@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18013F3D8
 * Callers:
 *     ?_CharacterClass@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18013EFB8 (-_CharacterClass@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?translate@?$_Regex_traits@G@std@@QEBAGG@Z @ 0x180131CEC (-translate@-$_Regex_traits@G@std@@QEBAGG@Z.c)
 *     ?_Add_char_to_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x18013E0E0 (-_Add_char_to_class@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXG@Z.c)
 *     ?_Add_range@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXGG@Z @ 0x18013E3BC (-_Add_range@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXGG@Z.c)
 *     ?_ClassAtom@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@XZ @ 0x18013F260 (-_ClassAtom@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@XZ.c)
 *     ?_Error@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z @ 0x18013FC4C (-_Error@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180140258 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

int __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_ClassRanges(
        __int64 a1)
{
  __int64 i; // rbx
  unsigned __int16 *v2; // rdi
  unsigned __int16 *v3; // rsi
  unsigned __int16 v4; // di
  int v5; // eax
  __int64 v6; // rcx
  unsigned __int16 v7; // ax
  __int64 *v8; // rcx
  int result; // eax
  __int64 v10; // rcx

  for ( i = a1; ; a1 = i )
  {
    result = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_ClassAtom(a1);
    if ( !result )
      break;
    if ( result != 2 )
    {
      v2 = (unsigned __int16 *)(i + 116);
      v3 = (unsigned __int16 *)(i + 116);
      if ( !*(_DWORD *)(i + 116) )
      {
        if ( (*(_DWORD *)(i + 128) & 0x100000) == 0 )
        {
          std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v10, 2LL);
          __debugbreak();
        }
        v3 = (unsigned __int16 *)(i + 116);
      }
      if ( *(_DWORD *)(i + 124) == 45 )
      {
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(i);
        v4 = *v2;
        v5 = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_ClassAtom(i);
        if ( !v5 )
        {
          std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_class(
            i + 64,
            *v3);
          return std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_class(
                   i + 64,
                   45LL);
        }
        if ( v5 == 2 )
        {
          std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v6, 8LL);
          __debugbreak();
        }
        if ( (*(_DWORD *)(i + 112) & 0x800) != 0 )
        {
          v7 = std::_Regex_traits<unsigned short>::translate(*(__int64 **)(i + 104), *v3);
          v8 = *(__int64 **)(i + 104);
          *(_DWORD *)v3 = v7;
          v4 = std::_Regex_traits<unsigned short>::translate(v8, v4);
        }
        if ( *v3 < v4 )
        {
          std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v6, 8LL);
          JUMPOUT(0x18013F4E7LL);
        }
        std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_range(
          i + 64,
          v4,
          *v3);
      }
      else
      {
        std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_class(
          i + 64,
          *v2);
      }
    }
  }
  return result;
}
