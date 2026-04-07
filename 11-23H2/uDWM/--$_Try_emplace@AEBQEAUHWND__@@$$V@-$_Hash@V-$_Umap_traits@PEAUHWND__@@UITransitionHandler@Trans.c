/*
 * XREFs of ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x1800FBE20
 * Callers:
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAX_K@Z @ 0x1800FDFD8 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@implementation@Transitions@Udwm@winrt.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18001EB00 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180032448 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Find_last@PEAUHWND__@@@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@_K@Z @ 0x1800F8568 (--$_Find_last@PEAUHWND__@@@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@U.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800FA024 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UI.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800FA168 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Uerr_returncode.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x1800FA2D4 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800FC7D4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@UITransitionHandler@T.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x18010DD40 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Try_emplace<HWND__ * const &,>(
        char *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 appended; // rbp
  const char *v7; // rcx
  _QWORD *v8; // r14
  __int64 v9; // rdx
  float v10; // xmm0_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  _QWORD *v16; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v17; // [rsp+28h] [rbp-30h]
  __int64 v18[5]; // [rsp+30h] [rbp-28h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 8uLL);
  std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Find_last<HWND__ *>(
    a1,
    v18,
    a3,
    appended);
  if ( v18[1] )
  {
    *(_QWORD *)a2 = v18[1];
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x7FFFFFFFFFFFFFFLL )
      std::_Dwm_Xlength_error(v7);
    v16 = a1 + 8;
    v8 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    v17 = v8;
    v8[2] = *(_QWORD *)a3;
    v8[3] = 0LL;
    v9 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v9 < 0 )
      v10 = (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1))
          + (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1));
    else
      v10 = (float)(int)v9;
    v11 = *((_QWORD *)a1 + 7);
    if ( v11 < 0 )
    {
      v13 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v11 >> 1);
      v12 = (float)(int)v13 + (float)(int)v13;
    }
    else
    {
      v12 = (float)(int)v11;
    }
    if ( (float)(v10 / v12) > *(float *)a1 )
    {
      v14 = std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransition,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransition,std::hash<enum winrt::Udwm::Transitions::ShellTransition>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransition>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v9);
      std::_Hash<std::_Umap_traits<HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::_Forced_rehash(
        a1,
        v14);
      *(_OWORD *)v18 = *(_OWORD *)std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Find_last<HWND__ *>(
                                    a1,
                                    v18,
                                    v8 + 2,
                                    appended);
    }
    v17 = 0LL;
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,0>>::_Insert_new_node_before(
                      a1,
                      appended,
                      v18[0],
                      v8);
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>,void *>>>(&v16);
  }
  return a2;
}
