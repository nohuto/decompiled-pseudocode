/*
 * XREFs of ??$_Try_emplace@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$$V@?$map@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@_N@1@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801711EC
 * Callers:
 *     ?AddItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180170FBC (-AddItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@C.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x18006A764 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x18006A7B8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180319DF4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>>::_Try_emplace<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // r15
  _QWORD *v7; // rdi
  int v8; // ebp
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // r10
  __int64 v13; // rcx
  _QWORD *v14; // r11
  _QWORD *v15; // r9
  __int64 i; // rax
  __int64 v18; // rax
  __int64 *v19; // rdx
  __int64 v20; // rcx

  v6 = *a1;
  v7 = *(_QWORD **)(*a1 + 8LL);
  v8 = 0;
  v9 = (_QWORD *)*a1;
  v10 = v7;
  while ( !*((_BYTE *)v10 + 25) )
  {
    v7 = v10;
    if ( v10[4] < (unsigned __int64)*a3 )
    {
      v8 = 0;
      v10 = (_QWORD *)v10[2];
    }
    else
    {
      v8 = 1;
      v9 = v10;
      v10 = (_QWORD *)*v10;
    }
  }
  if ( *((_BYTE *)v9 + 25) || (unsigned __int64)*a3 < v9[4] )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
    v12 = v11;
    v13 = *a3;
    *a3 = 0LL;
    v11[4] = v13;
    v11[5] = 0LL;
    *v11 = v6;
    v11[1] = v6;
    v11[2] = v6;
    *((_WORD *)v11 + 12) = 0;
    ++a1[1];
    v14 = (_QWORD *)*a1;
    v11[1] = v7;
    if ( v7 != v14 )
    {
      if ( v8 )
      {
        *v7 = v11;
        if ( v7 == (_QWORD *)*v14 )
          *v14 = v11;
      }
      else
      {
        v7[2] = v11;
        if ( v7 == (_QWORD *)v14[2] )
          v14[2] = v11;
      }
      v15 = v11;
      for ( i = v11[1]; ; i = v15[1] )
      {
        if ( *(_BYTE *)(i + 24) )
        {
          v11 = (_QWORD *)v14[1];
          goto LABEL_15;
        }
        v18 = v15[1];
        v19 = *(__int64 **)(v18 + 8);
        v20 = *v19;
        if ( v18 == *v19 )
        {
          v20 = v19[2];
          if ( !*(_BYTE *)(v20 + 24) )
          {
LABEL_20:
            *(_BYTE *)(v18 + 24) = 1;
            *(_BYTE *)(v20 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(v15[1] + 8LL) + 24LL) = 0;
            v15 = *(_QWORD **)(v15[1] + 8LL);
            continue;
          }
          if ( v15 == *(_QWORD **)(v18 + 16) )
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
              (__int64)a1,
              v18);
          *(_BYTE *)(v15[1] + 24LL) = 1;
          *(_BYTE *)(*(_QWORD *)(v15[1] + 8LL) + 24LL) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
            (__int64)a1,
            *(_QWORD **)(v15[1] + 8LL));
        }
        else
        {
          if ( !*(_BYTE *)(v20 + 24) )
            goto LABEL_20;
          if ( v15 == *(_QWORD **)v18 )
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v18);
          *(_BYTE *)(v15[1] + 24LL) = 1;
          *(_BYTE *)(*(_QWORD *)(v15[1] + 8LL) + 24LL) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
            (__int64)a1,
            *(_QWORD *)(v15[1] + 8LL));
        }
      }
    }
    *v14 = v11;
    v14[1] = v11;
    v14[2] = v11;
LABEL_15:
    *((_BYTE *)v11 + 24) = 1;
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
