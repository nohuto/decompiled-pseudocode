/*
 * XREFs of ?_Disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180148124
 * Callers:
 *     ?_Compile@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Root_node@2@XZ @ 0x180147F68 (-_Compile@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Root_node@2@XZ.c)
 *     ?_Do_assert_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAX_N@Z @ 0x1801481DC (-_Do_assert_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAX_N@Z.c)
 *     ?_Do_capture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014822C (-_Do_capture_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Do_noncapture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180148554 (-_Do_noncapture_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x1801472AC (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_Begin_if@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@PEAV32@@Z @ 0x1801476EC (-_Begin_if@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@PEAV32@@Z.c)
 *     ?_Else_if@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@0@Z @ 0x1801485A0 (-_Else_if@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@0@Z.c)
 *     ?_End_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z @ 0x18014863C (-_End_group@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z.c)
 *     ?_New_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z @ 0x180148C78 (-_New_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180148CD0 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

char __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Disjunction(
        __int64 a1)
{
  __int64 v1; // rsi
  _DWORD *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  _DWORD *v6; // rbp
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 72);
  LOBYTE(v3) = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Alternative(a1);
  if ( (_BYTE)v3 )
  {
    v4 = a1 + 64;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 124) != 124 )
      return (char)v3;
    v4 = a1 + 64;
    v5 = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_New_node(a1 + 64, 8LL);
    std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_End_group(a1 + 64, v5);
  }
  v3 = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Begin_if(v4, v1);
  v6 = v3;
  while ( *(_DWORD *)(a1 + 124) == 124 )
  {
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
    if ( !std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Alternative(a1) )
    {
      v7 = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_New_node(v4, 8LL);
      std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_End_group(v4, v7);
    }
    LOBYTE(v3) = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Else_if(
                   v4,
                   v1,
                   v6);
  }
  return (char)v3;
}
