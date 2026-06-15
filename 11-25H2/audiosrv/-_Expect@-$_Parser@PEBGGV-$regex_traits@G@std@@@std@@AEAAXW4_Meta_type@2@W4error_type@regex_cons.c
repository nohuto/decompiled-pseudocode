/*
 * XREFs of ?_Expect@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@W4error_type@regex_constants@2@@Z @ 0x18013FC68
 * Callers:
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18013E834 (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_Do_ex_class@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z @ 0x18013F900 (-_Do_ex_class@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z.c)
 * Callees:
 *     ?_Error@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z @ 0x18013FC4C (-_Error@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Expect(
        __int64 a1,
        int a2,
        unsigned int a3)
{
  if ( *(_DWORD *)(a1 + 124) != a2 )
  {
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(a1, a3);
    JUMPOUT(0x18013FC82LL);
  }
  return std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
}
