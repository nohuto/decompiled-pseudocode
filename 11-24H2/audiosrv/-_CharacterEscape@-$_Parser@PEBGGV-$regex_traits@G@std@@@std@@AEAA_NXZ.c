/*
 * XREFs of ?_CharacterEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180147B48
 * Callers:
 *     ?_AtomEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180147478 (-_AtomEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_ClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@_N@Z @ 0x180147DC4 (-_ClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@_N@Z.c)
 * Callees:
 *     ?_Do_digits@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAHHHW4error_type@regex_constants@2@@Z @ 0x1801482A8 (-_Do_digits@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAHHHW4error_type@regex_constants@2@@Z.c)
 *     ?_Do_ffn@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NG@Z @ 0x1801484D0 (-_Do_ffn@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NG@Z.c)
 *     ?_Do_ffnx@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NG@Z @ 0x180148528 (-_Do_ffnx@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NG@Z.c)
 *     ?_Error@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z @ 0x1801486C4 (-_Error@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z.c)
 *     ?_HexDigits@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXH@Z @ 0x180148A2C (-_HexDigits@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXH@Z.c)
 *     ?_IsIdentityEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEBA_NXZ @ 0x180148B48 (-_IsIdentityEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEBA_NXZ.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180148CD0 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

char __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterEscape(
        __int64 a1)
{
  __int64 v1; // rbx
  _DWORD *v2; // r8
  char v3; // di
  _WORD *v4; // r14
  _DWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v10; // rcx

  v1 = a1;
  if ( *(_DWORD *)(a1 + 124) == -1 )
  {
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(a1, 2LL);
    __debugbreak();
  }
  v2 = (_DWORD *)(a1 + 128);
  v3 = 0;
  v4 = (_WORD *)(a1 + 120);
  if ( (*(_DWORD *)(a1 + 128) & 0x10000) != 0
    && (unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_ffn(
                          a1,
                          (unsigned __int16)*v4) )
  {
    goto LABEL_11;
  }
  v5 = v2;
  if ( (*v2 & 0x8000) != 0 )
  {
    if ( (unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_ffnx(
                            a1,
                            (unsigned __int16)*v4) )
    {
LABEL_11:
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
LABEL_12:
      if ( *(_DWORD *)(v1 + 116) > 0xFFFFu )
      {
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v7, 2LL);
        __debugbreak();
      }
      *(_DWORD *)(v1 + 116) = *(unsigned __int16 *)(v1 + 116);
      return 1;
    }
    v5 = (_DWORD *)(a1 + 128);
  }
  if ( *v4 != 99 )
  {
    if ( *v4 == 120 )
    {
      if ( (*v5 & 0x1000) == 0 )
        goto LABEL_21;
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
      v8 = 2LL;
    }
    else
    {
      if ( *v4 != 117 || (*v5 & 0x800) == 0 )
        goto LABEL_21;
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
      v8 = 4LL;
    }
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_HexDigits(v1, v8);
    goto LABEL_12;
  }
  if ( (*v2 & 0x40000) != 0 )
  {
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
    if ( !(unsigned __int8)std::ctype<unsigned short>::is(*(_QWORD *)(*(_QWORD *)(v1 + 104) + 8LL), 259LL) )
    {
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v6, 2LL);
      __debugbreak();
    }
    a1 = v1;
    *(_DWORD *)(v1 + 116) = *v4 & 0x1F;
    goto LABEL_11;
  }
LABEL_21:
  if ( (*v5 & 0x2000) != 0
    && (unsigned int)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_digits(
                       a1,
                       8LL,
                       3LL,
                       2LL) != 3 )
  {
    if ( !*(_DWORD *)(v1 + 116) )
    {
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v7, 2LL);
      JUMPOUT(0x180147CD1LL);
    }
    goto LABEL_12;
  }
  if ( (unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_IsIdentityEscape(v1) )
  {
    *(_DWORD *)(v1 + 116) = *(unsigned __int16 *)(v1 + 120);
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(v10);
    return 1;
  }
  return v3;
}
