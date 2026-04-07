/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$basic_string_view@DU?$char_traits@D@std@@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEAAPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@QEAV21@AEAV?$basic_string_view@DU?$char_traits@D@std@@@1@@Z @ 0x1800EF064
 * Callers:
 *     ??$emplace_back@AEAV?$basic_string_view@DU?$char_traits@D@std@@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEAA?A_TAEAV?$basic_string_view@DU?$char_traits@D@std@@@1@@Z @ 0x1800EF9DC (--$emplace_back@AEAV-$basic_string_view@DU-$char_traits@D@std@@@std@@@-$vector@V-$basic_string@D.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1800322D4 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180032448 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@YAPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x1800EF864 (--$_Uninitialized_move@PEAV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$alloc.c)
 *     ?_Calculate_growth@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBA_K_K@Z @ 0x1800F2160 (-_Calculate_growth@-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$all.c)
 *     ?_Change_array@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@_K1@Z @ 0x1800F222C (-_Change_array@-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$allocat.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800F2734 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x18010DD40 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::vector<std::string>::_Emplace_reallocate<std::string_view &>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 size_of; // rax
  __int64 v9; // rbp
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // r8
  __int64 v13; // rcx

  v4 = a2 - *a1;
  v5 = (a1[1] - *a1) >> 5;
  if ( v5 == 0x7FFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)0x7FFFFFFFFFFFFFFLL);
  v6 = v5 + 1;
  v7 = std::vector<std::string>::_Calculate_growth(a1, v5 + 1);
  size_of = std::_Get_size_of_n<32>(v7);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v10 = (_QWORD *)(v9 + (v4 & 0xFFFFFFFFFFFFFFE0uLL));
  *v10 = 0LL;
  v10[2] = 0LL;
  v10[3] = 15LL;
  std::string::assign(v10);
  v11 = a1[1];
  v12 = (_QWORD *)v9;
  v13 = *a1;
  if ( a2 != v11 )
  {
    std::_Uninitialized_move<std::string *>(v13, a2, v9);
    v12 = v10 + 4;
    v11 = a1[1];
    v13 = a2;
  }
  std::_Uninitialized_move<std::string *>(v13, v11, v12);
  std::vector<std::string>::_Change_array(a1, v9, v6, v7);
  return v10;
}
