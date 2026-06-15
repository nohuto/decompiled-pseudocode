/*
 * XREFs of ?_Compile@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Root_node@2@XZ @ 0x18013F4F0
 * Callers:
 *     ??$_Reset@PEBG@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXPEBG0W4syntax_option_type@regex_constants@1@@Z @ 0x18013A988 (--$_Reset@PEBG@-$basic_regex@GV-$regex_traits@G@std@@@std@@AEAAXPEBG0W4syntax_option_type@regex_.c)
 * Callees:
 *     ??1?$_Tidy_guard@V?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@@std@@QEAA@XZ @ 0x18013B6CC (--1-$_Tidy_guard@V-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@@std@@QEAA@XZ.c)
 *     ?_Begin_capture_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@I@Z @ 0x18013EC14 (-_Begin_capture_group@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@I@Z.c)
 *     ?_Calculate_loop_simplicity@std@@YAXPEAV_Node_base@1@0PEAV_Node_rep@1@@Z @ 0x18013EDA4 (-_Calculate_loop_simplicity@std@@YAXPEAV_Node_base@1@0PEAV_Node_rep@1@@Z.c)
 *     ?_Disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18013F6AC (-_Disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_End_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z @ 0x18013FBC4 (-_End_group@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z.c)
 *     ?_Error@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z @ 0x18013FC4C (-_Error@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4error_type@regex_constants@2@@Z.c)
 *     ?_New_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z @ 0x180140200 (-_New_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Compile(
        __int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rbx
  struct std::_Node_base **v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 64);
  v7 = (struct std::_Node_base **)(a1 + 64);
  v3 = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Begin_capture_group(
         a1 + 64,
         0);
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Disjunction(a1);
  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 16) )
  {
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Error(v4, 14LL);
    JUMPOUT(0x18013F58DLL);
  }
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_End_group(v2, v3);
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_New_node(v2, 21LL);
  v5 = *v2;
  *(_DWORD *)(v5 + 32) = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(v5 + 40) = *(_DWORD *)(a1 + 24) + 1;
  std::_Calculate_loop_simplicity((struct std::_Node_base *)v5, 0LL, 0LL);
  v7 = 0LL;
  std::_Tidy_guard<std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>>::~_Tidy_guard<std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>>(&v7);
  return v5;
}
