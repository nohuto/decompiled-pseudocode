/*
 * XREFs of ?_Quantifier@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180140298
 * Callers:
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18013E834 (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 * Callees:
 *     ?_Add_rep@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXHH_N@Z @ 0x18013E4F4 (-_Add_rep@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXHH_N@Z.c)
 *     ?_DecimalDigits@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NW4error_type@regex_constants@2@@Z @ 0x18013F594 (-_DecimalDigits@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NW4error_type@regex_constants@2.c)
 *     ?_Error@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z @ 0x18013FC4C (-_Error@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180140258 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Quantifier(
        __int64 a1)
{
  __int64 result; // rax
  unsigned __int8 v2; // bp
  int v3; // edi
  int v5; // esi
  __int64 v6; // rcx

  result = *(unsigned int *)(a1 + 124);
  v2 = 0;
  v3 = -1;
  v5 = 0;
  if ( (_DWORD)result == 42 )
    goto LABEL_4;
  if ( (_DWORD)result == 43 )
  {
    v5 = 1;
    goto LABEL_4;
  }
  if ( (_DWORD)result != 63 )
  {
    if ( (_DWORD)result != 123 )
      return result;
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)a1);
    if ( !std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_DecimalDigits(a1, 7u) )
    {
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v6, 7u);
      JUMPOUT(0x1801403B7LL);
    }
    v5 = *(_DWORD *)(a1 + 116);
    if ( *(_DWORD *)(a1 + 124) == 44 )
    {
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)a1);
      if ( *(_DWORD *)(a1 + 124) == 125 )
      {
LABEL_17:
        if ( v3 == -1 || v3 >= v5 )
          goto LABEL_4;
LABEL_24:
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v6, 7u);
        __debugbreak();
      }
      if ( !std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_DecimalDigits(
              a1,
              7u) )
      {
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v6, 7u);
        __debugbreak();
      }
      v3 = *(_DWORD *)(a1 + 116);
    }
    else
    {
      v3 = *(_DWORD *)(a1 + 116);
    }
    if ( *(_DWORD *)(a1 + 124) != 125 )
      goto LABEL_24;
    goto LABEL_17;
  }
  v3 = 1;
LABEL_4:
  *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL) |= 4u;
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)a1);
  if ( (*(_DWORD *)(a1 + 128) & 0x400) != 0 && *(_DWORD *)(a1 + 124) == 63 )
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)a1);
  else
    v2 = 1;
  return std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_rep(
           (_QWORD *)(a1 + 64),
           v5,
           v3,
           v2);
}
