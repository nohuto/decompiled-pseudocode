/*
 * XREFs of ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180029060
 * Callers:
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180029670 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x180169160 (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$les.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180169288 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPos.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHWND__@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHWND__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801DFC44 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHWND__@@@1@V-$tuple@$$V@1@@-$_Tree_temp_node.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180319DF4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDesktopPositioner::_OnViewGainedForeground(CDesktopPositioner *this, struct IApplicationView *a2)
{
  char v4; // r12
  int v5; // eax
  unsigned int v6; // ebx
  struct IApplicationView *v7; // rdx
  bool v8; // bl
  HWND *v9; // rcx
  char v10; // si
  char v11; // bl
  HWND WindowForView; // rax
  __int64 v13; // rcx
  char v14; // di
  char *v15; // rdi
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 inserted; // rdx
  HWND *v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rbx
  int v28; // eax
  char *v29; // rdi
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  char v34; // r15
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r8
  __int64 v41; // rcx
  int v42; // [rsp+20h] [rbp-60h]
  __int128 v43; // [rsp+30h] [rbp-50h] BYREF
  char v44; // [rsp+40h] [rbp-40h]
  _OWORD v45[2]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  HWND *v47; // [rsp+C8h] [rbp+48h] BYREF
  HWND v48; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v49; // [rsp+D8h] [rbp+58h] BYREF

  v4 = 0;
  v47 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, HWND **))(*(_QWORD *)a2 + 264LL))(a2, &v47);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (*((unsigned int (__fastcall **)(HWND *))*v47 + 3))(v47) == 0;
    v9 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*((void (__fastcall **)(HWND *))*v9 + 2))(v9);
    }
    if ( !v8 )
      return 0LL;
    v10 = 0;
    v11 = 0;
    WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v7);
    v48 = WindowForView;
    if ( !WindowForView )
      goto LABEL_6;
    v15 = (char *)this + 368;
    v16 = *((_QWORD *)this + 46);
    v17 = *(_QWORD *)(v16 + 8);
    HIDWORD(v45[0]) = 0;
    v18 = v16;
    v19 = v17;
    while ( !*(_BYTE *)(v19 + 25) )
    {
      if ( *(_QWORD *)(v19 + 32) >= (unsigned __int64)WindowForView )
      {
        v18 = v19;
        v19 = *(_QWORD *)v19;
      }
      else
      {
        v19 = *(_QWORD *)(v19 + 16);
      }
    }
    if ( v18 == v16 || *(_BYTE *)(v18 + 25) || (unsigned __int64)WindowForView < *(_QWORD *)(v18 + 32) )
      goto LABEL_6;
    v45[0] = (unsigned __int64)v17;
    inserted = v16;
    while ( !*(_BYTE *)(v17 + 25) )
    {
      *(_QWORD *)&v45[0] = v17;
      if ( *(_QWORD *)(v17 + 32) < (unsigned __int64)WindowForView )
      {
        DWORD2(v45[0]) = 0;
        v17 = *(_QWORD *)(v17 + 16);
      }
      else
      {
        DWORD2(v45[0]) = 1;
        inserted = v17;
        v17 = *(_QWORD *)v17;
      }
    }
    if ( *(_BYTE *)(inserted + 25) || (unsigned __int64)WindowForView < *(_QWORD *)(inserted + 32) )
    {
      if ( *((_QWORD *)this + 47) == 0x555555555555555LL )
        goto LABEL_79;
      v47 = &v48;
      v32 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>(
              (unsigned int)&v43,
              (int)this + 368,
              v16,
              v16,
              (__int64)&v47);
      v33 = *(_QWORD *)(v32 + 8);
      *(_QWORD *)(v32 + 8) = 0LL;
      if ( *((_QWORD *)&v43 + 1) )
        std::_Deallocate<16,0>(*((_QWORD *)&v43 + 1), 48LL);
      inserted = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Insert_node(
                   (char *)this + 368,
                   v45,
                   v33);
      WindowForView = v48;
    }
    v34 = *(_BYTE *)(inserted + 40);
    v35 = *(_QWORD *)v15;
    v36 = *(_QWORD *)(*(_QWORD *)v15 + 8LL);
    v43 = (unsigned __int64)v36;
    v37 = v35;
    while ( !*(_BYTE *)(v36 + 25) )
    {
      *(_QWORD *)&v43 = v36;
      if ( *(_QWORD *)(v36 + 32) < (unsigned __int64)WindowForView )
      {
        DWORD2(v43) = 0;
        v36 = *(_QWORD *)(v36 + 16);
      }
      else
      {
        DWORD2(v43) = 1;
        v37 = v36;
        v36 = *(_QWORD *)v36;
      }
    }
    if ( *(_BYTE *)(v37 + 25) || (unsigned __int64)WindowForView < *(_QWORD *)(v37 + 32) )
    {
      if ( *((_QWORD *)this + 47) == 0x555555555555555LL )
        goto LABEL_79;
      v47 = &v48;
      v38 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>(
              (unsigned int)v45,
              (int)this + 368,
              v35,
              0,
              (__int64)&v47);
      v39 = *(_QWORD *)(v38 + 8);
      *(_QWORD *)(v38 + 8) = 0LL;
      if ( *((_QWORD *)&v45[0] + 1) )
        std::_Deallocate<16,0>(*((_QWORD *)&v45[0] + 1), 48LL);
      v37 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Insert_node(
              (char *)this + 368,
              &v43,
              v39);
      WindowForView = v48;
    }
    v10 = *(_BYTE *)(v37 + 41);
    v40 = *(_QWORD *)v15;
    v41 = *(_QWORD *)(*(_QWORD *)v15 + 8LL);
    v43 = (unsigned __int64)v41;
    v27 = v40;
    while ( !*(_BYTE *)(v41 + 25) )
    {
      *(_QWORD *)&v43 = v41;
      if ( *(_QWORD *)(v41 + 32) < (unsigned __int64)WindowForView )
      {
        DWORD2(v43) = 0;
        v41 = *(_QWORD *)(v41 + 16);
      }
      else
      {
        DWORD2(v43) = 1;
        v27 = v41;
        v41 = *(_QWORD *)v41;
      }
    }
    if ( *(_BYTE *)(v27 + 25) || (unsigned __int64)WindowForView < *(_QWORD *)(v27 + 32) )
    {
      if ( *((_QWORD *)this + 47) == 0x555555555555555LL )
        goto LABEL_79;
      v47 = &v48;
      v25 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>(
              (unsigned int)v45,
              (int)this + 368,
              v40,
              0,
              (__int64)&v47);
      v26 = *(_QWORD *)(v25 + 8);
      *(_QWORD *)(v25 + 8) = 0LL;
      if ( *((_QWORD *)&v45[0] + 1) )
        std::_Deallocate<16,0>(*((_QWORD *)&v45[0] + 1), 48LL);
      v27 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Insert_node(
              (char *)this + 368,
              &v43,
              v26);
      WindowForView = v48;
    }
    v11 = *(_BYTE *)(v27 + 42);
    if ( !v34 )
    {
LABEL_6:
      v49 = 0LL;
      (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
        a2,
        &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
        &v49);
      v4 = 1;
      v13 = v49;
      WindowForView = v48;
      if ( v49 )
      {
        v14 = 1;
        goto LABEL_8;
      }
    }
    else
    {
      v13 = v49;
    }
    v14 = 0;
    if ( (v4 & 1) == 0 )
    {
LABEL_39:
      v28 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
      if ( v28 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x913,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v28,
          v42);
        v29 = (char *)this + 368;
        goto LABEL_27;
      }
      v29 = (char *)this + 368;
      v30 = *((_QWORD *)this + 46);
      v31 = *(_QWORD *)(v30 + 8);
      v43 = (unsigned __int64)v31;
      v24 = v30;
      while ( !*(_BYTE *)(v31 + 25) )
      {
        *(_QWORD *)&v43 = v31;
        if ( *(_QWORD *)(v31 + 32) < (unsigned __int64)v48 )
        {
          DWORD2(v43) = 0;
          v31 = *(_QWORD *)(v31 + 16);
        }
        else
        {
          DWORD2(v43) = 1;
          v24 = v31;
          v31 = *(_QWORD *)v31;
        }
      }
      if ( !*(_BYTE *)(v24 + 25) && (unsigned __int64)v48 >= *(_QWORD *)(v24 + 32) )
      {
LABEL_26:
        *(_BYTE *)(v24 + 40) = 1;
LABEL_27:
        if ( v10 )
        {
          DwmpEndTransitionRequest(93LL);
          *(_BYTE *)(*(_QWORD *)std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
                                  v29,
                                  v45,
                                  &v48)
                   + 41LL) = 0;
        }
        if ( v11 )
        {
          v43 = AnimationClock_TabSwitch;
          v44 = 1;
          *(_BYTE *)(*(_QWORD *)std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
                                  v29,
                                  v45,
                                  &v48)
                   + 42LL) = 0;
          v45[0] = AnimationClock_TabSwitch;
          DwmpEndAnimationClock(v45);
        }
        return 0LL;
      }
      if ( *((_QWORD *)this + 47) != 0x555555555555555LL )
      {
        v45[0] = (unsigned __int64)this + 368;
        v23 = std::_Allocate<16,std::_Default_allocate_traits,0>(48LL);
        *(_QWORD *)(v23 + 32) = v48;
        *(_WORD *)(v23 + 41) = 0;
        *(_WORD *)(v23 + 40) = 0;
        *(_BYTE *)(v23 + 42) = 0;
        *(_QWORD *)v23 = v30;
        *(_QWORD *)(v23 + 8) = v30;
        *(_QWORD *)(v23 + 16) = v30;
        *(_WORD *)(v23 + 24) = 0;
        v45[0] = v43;
        v24 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Insert_node(
                (char *)this + 368,
                v45,
                v23);
        goto LABEL_26;
      }
LABEL_79:
      std::_Throw_tree_length_error();
    }
LABEL_8:
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      WindowForView = v48;
    }
    if ( v14 )
      DwmpTransitionWindow(WindowForView, 93LL);
    goto LABEL_39;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8F0,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v5);
  v21 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*((void (__fastcall **)(HWND *))*v21 + 2))(v21);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8F9,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)v6);
  return v6;
}
