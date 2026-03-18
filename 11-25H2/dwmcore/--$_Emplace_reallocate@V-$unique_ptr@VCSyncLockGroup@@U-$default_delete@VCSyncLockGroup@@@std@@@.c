/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180272E24
 * Callers:
 *     ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z @ 0x18025A414 (-GetGroup@CSyncLockGroup@@SAPEAV1@I@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18006BB80 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@0@@Z @ 0x180272F18 (--$_Uninitialized_move@PEAV-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std.c)
 *     ?_Calculate_growth@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@AEBA_K_K@Z @ 0x180273030 (-_Calculate_growth@-$vector@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@s.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@2@_K1@Z @ 0x180273070 (-_Change_array@-$vector@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@.c)
 */

_QWORD *__fastcall std::vector<std::unique_ptr<CSyncLockGroup>>::_Emplace_reallocate<std::unique_ptr<CSyncLockGroup>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // r14
  SIZE_T size_of; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  _QWORD *v13; // r8
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx

  v3 = CSyncLockGroup::g_syncLockGroups;
  v6 = ((__int64)xmmword_180406940 - CSyncLockGroup::g_syncLockGroups) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = std::vector<std::unique_ptr<CSyncLockGroup>>::_Calculate_growth(0x1FFFFFFFFFFFFFFFLL, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v8);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v11 = *a3;
  *a3 = 0LL;
  v12 = v10;
  v13 = (_QWORD *)v10;
  v14 = (_QWORD *)(v10 + 8 * ((a2 - v3) >> 3));
  *v14 = v11;
  v15 = xmmword_180406940;
  v16 = CSyncLockGroup::g_syncLockGroups;
  if ( a2 != (_QWORD)xmmword_180406940 )
  {
    std::_Uninitialized_move<std::unique_ptr<CSyncLockGroup> *,std::allocator<std::unique_ptr<CSyncLockGroup>>>(
      CSyncLockGroup::g_syncLockGroups,
      a2,
      v10);
    v15 = xmmword_180406940;
    v13 = v14 + 1;
    v16 = a2;
  }
  std::_Uninitialized_move<std::unique_ptr<CSyncLockGroup> *,std::allocator<std::unique_ptr<CSyncLockGroup>>>(
    v16,
    v15,
    v13);
  std::vector<std::unique_ptr<CSyncLockGroup>>::_Change_array(v17, v12, v7, v8);
  return v14;
}
