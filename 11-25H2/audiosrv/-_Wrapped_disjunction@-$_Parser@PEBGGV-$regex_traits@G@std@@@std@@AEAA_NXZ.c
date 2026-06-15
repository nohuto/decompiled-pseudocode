/*
 * XREFs of ?_Wrapped_disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180140A58
 * Callers:
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18013E834 (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 * Callees:
 *     ?_Do_assert_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAX_N@Z @ 0x18013F764 (-_Do_assert_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAX_N@Z.c)
 *     ?_Do_capture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18013F7B4 (-_Do_capture_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Do_noncapture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18013FADC (-_Do_noncapture_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Error@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z @ 0x18013FC4C (-_Error@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180140258 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

char __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Wrapped_disjunction(
        __int64 a1)
{
  int *v1; // rdi
  int v2; // eax
  int v4; // edi
  __int64 v5; // rcx
  unsigned __int8 v6; // dl

  ++*(_DWORD *)(a1 + 28);
  v1 = (int *)(a1 + 124);
  v2 = *(_DWORD *)(a1 + 128);
  if ( (v2 & 0x8000000) == 0 && *v1 == 41 )
  {
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(a1, 5u);
    JUMPOUT(0x180140AF7LL);
  }
  if ( (v2 & 0x20) == 0 || *v1 != 63 )
  {
    if ( (*(_DWORD *)(a1 + 112) & 0x200) == 0 )
    {
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_capture_group(a1);
      goto LABEL_14;
    }
LABEL_12:
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_noncapture_group(a1);
LABEL_14:
    --*(_DWORD *)(a1 + 28);
    return 1;
  }
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)a1);
  v4 = *v1;
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)a1);
  switch ( v4 )
  {
    case ':':
      goto LABEL_12;
    case '!':
      v6 = 1;
      break;
    case '=':
      v6 = 0;
      break;
    default:
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v5, 0xEu);
      __debugbreak();
  }
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_assert_group(a1, v6);
  --*(_DWORD *)(a1 + 28);
  return 0;
}
