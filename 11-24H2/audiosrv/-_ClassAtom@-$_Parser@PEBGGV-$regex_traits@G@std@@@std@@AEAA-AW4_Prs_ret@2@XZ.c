/*
 * XREFs of ?_ClassAtom@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@XZ @ 0x180147CD8
 * Callers:
 *     ?_ClassRanges@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180147E50 (-_ClassRanges@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?_ClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@_N@Z @ 0x180147DC4 (-_ClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@_N@Z.c)
 *     ?_Do_ex_class@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z @ 0x180148378 (-_Do_ex_class@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z.c)
 *     ?_Do_ffn@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NG@Z @ 0x1801484D0 (-_Do_ffn@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NG@Z.c)
 *     ?_Do_ffnx@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NG@Z @ 0x180148528 (-_Do_ffnx@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NG@Z.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180148CD0 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_ClassAtom(
        __int64 a1)
{
  int v1; // eax
  __int64 v2; // rbx
  int v3; // eax
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx

  v1 = *(_DWORD *)(a1 + 124);
  v2 = a1;
  switch ( v1 )
  {
    case 92:
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
      v3 = *(_DWORD *)(v2 + 128);
      if ( (v3 & 0x200000) != 0 )
        return std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_ClassEscape(v2);
      if ( ((v3 & 0x10000) == 0
         || !(unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_ffn(
                                v2,
                                *(unsigned __int16 *)(v2 + 120)))
        && ((*(_DWORD *)(v2 + 128) & 0x8000) == 0
         || !(unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_ffnx(
                                v2,
                                *(unsigned __int16 *)(v2 + 120))) )
      {
        *(_DWORD *)(v2 + 116) = 92;
        return 1LL;
      }
      a1 = v2;
LABEL_9:
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
      return 1LL;
    case 91:
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
      v5 = *(int *)(v2 + 124);
      if ( (unsigned int)v5 > 0x3D || (v6 = 0x2400400000000000LL, !_bittest64(&v6, v5)) )
      {
        *(_DWORD *)(v2 + 116) = 91;
        return 1LL;
      }
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(v2);
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_ex_class(
        v2,
        (unsigned int)v5);
      return 2LL;
    case 93:
    case -1:
      return 0LL;
    default:
      *(_DWORD *)(a1 + 116) = *(unsigned __int16 *)(a1 + 120);
      goto LABEL_9;
  }
}
