/*
 * XREFs of ??$?0AEAPEAUIWinRTApplicationView@@AEAV?$shared_ptr@VUwpAppViewInfo@@@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@1@AEAPEAUIWinRTApplicationView@@AEAV?$shared_ptr@VUwpAppViewInfo@@@1@@Z @ 0x180571FBC
 * Callers:
 *     ??$_Emplace@AEAPEAUIWinRTApplicationView@@AEAV?$shared_ptr@VUwpAppViewInfo@@@std@@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@U?$less@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@std@@_N@1@AEAPEAUIWinRTApplicationView@@AEAV?$shared_ptr@VUwpAppViewInfo@@@1@@Z @ 0x180572124 (--$_Emplace@AEAPEAUIWinRTApplicationView@@AEAV-$shared_ptr@VUwpAppViewInfo@@@std@@@-$_Tree@V-$_T.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800D6010 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5)
{
  _QWORD *v8; // rax
  char *v9; // rbp
  __int64 v10; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  a1[1] = v8;
  v9 = (char *)(v8 + 4);
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    v8 + 4,
    *a4);
  *((_QWORD *)v9 + 1) = 0LL;
  *((_QWORD *)v9 + 2) = 0LL;
  v10 = a5[1];
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  *((_QWORD *)v9 + 1) = *a5;
  *((_QWORD *)v9 + 2) = a5[1];
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
