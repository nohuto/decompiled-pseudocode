/*
 * XREFs of ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18013E834
 * Callers:
 *     ?_Disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18013F6AC (-_Disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?_Add_char@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x18013DF54 (-_Add_char@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXG@Z.c)
 *     ?_AtomEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18013EA00 (-_AtomEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_CharacterClass@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18013EFB8 (-_CharacterClass@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Error@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z @ 0x18013FC4C (-_Error@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z.c)
 *     ?_Expect@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@W4error_type@regex_constants@2@@Z @ 0x18013FC68 (-_Expect@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@W4error_type@regex_cons.c)
 *     ?_New_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z @ 0x180140200 (-_New_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180140258 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Quantifier@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180140298 (-_Quantifier@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Wrapped_disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180140A58 (-_Wrapped_disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 */

char __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Alternative(
        __int64 a1)
{
  char result; // al
  __int64 v3; // rcx
  __int64 v4; // rdx
  char v5; // bl

  result = 0;
  v3 = *(unsigned int *)(a1 + 124);
  while ( (_DWORD)v3 != -1 && (_DWORD)v3 != 124 )
  {
    switch ( (_DWORD)v3 )
    {
      case ')':
        if ( *(_DWORD *)(a1 + 28) )
          return result;
        if ( (*(_DWORD *)(a1 + 128) & 0x10000000) == 0 )
        {
          std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v3, 5LL);
          JUMPOUT(0x18013E9F7LL);
        }
        goto LABEL_6;
      case '.':
        std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_New_node(a1 + 64, 5LL);
        goto LABEL_9;
      case '\\':
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
        if ( *(char *)(a1 + 128) >= 0 )
          goto LABEL_24;
        if ( *(_WORD *)(a1 + 120) == 98 )
        {
          v4 = 4LL;
          goto LABEL_20;
        }
        if ( *(_WORD *)(a1 + 120) != 66 )
        {
LABEL_24:
          std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_AtomEscape(a1);
          goto LABEL_10;
        }
        std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_New_node(a1 + 64, 4LL);
        *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL) ^= 1u;
LABEL_21:
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
        goto LABEL_11;
      case '[':
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterClass(a1);
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Expect(a1, 93LL, 4LL);
        goto LABEL_10;
    }
    if ( (_DWORD)v3 != 40 )
    {
      if ( (_DWORD)v3 == 94 )
      {
        v4 = 2LL;
      }
      else
      {
        if ( (_DWORD)v3 != 36 )
        {
          if ( (unsigned int)(v3 - 42) <= 1 || (_DWORD)v3 == 63 || (_DWORD)v3 == 123 )
          {
            std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v3, 10LL);
            __debugbreak();
          }
          if ( (_DWORD)v3 == 125 )
          {
            if ( (*(_DWORD *)(a1 + 128) & 0x10000000) == 0 )
            {
              std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v3, 6LL);
              __debugbreak();
            }
LABEL_8:
            std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char(
              a1 + 64,
              *(_WORD *)(a1 + 120));
LABEL_9:
            std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
LABEL_10:
            std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Quantifier(a1);
            goto LABEL_11;
          }
LABEL_6:
          if ( (_DWORD)v3 == 93 && (*(_DWORD *)(a1 + 128) & 0x10000000) == 0 )
          {
            std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v3, 4LL);
            __debugbreak();
          }
          goto LABEL_8;
        }
        v4 = 3LL;
      }
LABEL_20:
      std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_New_node(a1 + 64, v4);
      goto LABEL_21;
    }
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
    v5 = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Wrapped_disjunction(a1);
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Expect(a1, 41LL, 5LL);
    if ( v5 )
      goto LABEL_10;
LABEL_11:
    v3 = *(unsigned int *)(a1 + 124);
    result = 1;
  }
  return result;
}
