/*
 * XREFs of ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180029670
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180029060 (-_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18002B2A8 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18005C784 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18006A48C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositio.c)
 *     ?_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18006D4CC (-_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@1@@Z @ 0x180192500 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositione.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180511420 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$ComPtr@UIApplicationView@@@W_ea_180511420.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  __int64 **v9; // r14
  __int64 *v10; // rax
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  HWND WindowForView; // rcx
  __int64 ***v15; // rbp
  __int64 **v16; // rsi
  __int64 *v17; // r8
  __int64 **v18; // rdx
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // r9
  __int64 **v22; // rdi
  __int64 *v23; // rax
  int v24; // eax
  __int64 v25; // r9
  __int64 v26; // rax
  _QWORD v27[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a3 - 1;
  if ( v5 )
  {
    v6 = v5 - 6;
    if ( v6 && (v7 = v6 - 1) != 0 )
    {
      if ( v7 == 7 )
        CDesktopPositioner::_OnSizeConstraintsChanged((CDesktopPositioner *)(a1 - 168), a2);
    }
    else
    {
      v24 = CDesktopPositioner::_OnViewGainedForeground((CDesktopPositioner *)(a1 - 168), a2);
      if ( v24 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x374,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v24,
          v27[0]);
    }
  }
  else
  {
    v9 = (__int64 **)(a1 + 216);
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
    v10 = (__int64 *)(*v9)[1];
    v11 = *v9;
    while ( !*((_BYTE *)v10 + 25) )
    {
      if ( v10[4] < (unsigned __int64)a2 )
      {
        v10 = (__int64 *)v10[2];
      }
      else
      {
        v11 = v10;
        v10 = (__int64 *)*v10;
      }
    }
    if ( *((_BYTE *)v11 + 25) || (unsigned __int64)a2 < v11[4] )
      v11 = *v9;
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
    if ( v11 != *v9 )
    {
      v12 = std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>>::_Extract(
              v9,
              v11);
      std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>,void *>>>(
        v13,
        v12);
    }
    WindowForView = ApplicationViewHelpers::GetWindowForView(a2, a2);
    if ( WindowForView )
    {
      v15 = (__int64 ***)(a1 + 200);
      v16 = *v15;
      v17 = (*v15)[1];
      v18 = *v15;
      v19 = v17;
      while ( !*((_BYTE *)v19 + 25) )
      {
        if ( v19[4] >= (unsigned __int64)WindowForView )
        {
          v18 = (__int64 **)v19;
          v19 = (__int64 *)*v19;
        }
        else
        {
          v19 = (__int64 *)v19[2];
        }
      }
      if ( v18 != v16 && !*((_BYTE *)v18 + 25) && WindowForView >= (HWND)v18[4] )
      {
        v20 = (*v15)[1];
        v21 = (__int64 *)*v15;
        v22 = *v15;
        if ( !*((_BYTE *)v17 + 25) )
        {
          do
          {
            if ( v20[4] < (unsigned __int64)WindowForView )
            {
              v20 = (__int64 *)v20[2];
            }
            else
            {
              if ( *((_BYTE *)v22 + 25) && (unsigned __int64)WindowForView < v20[4] )
                v22 = (__int64 **)v20;
              v21 = v20;
              v20 = (__int64 *)*v20;
            }
          }
          while ( !*((_BYTE *)v20 + 25) );
        }
        v23 = (*v15)[1];
        if ( !*((_BYTE *)v22 + 25) )
          v23 = *v22;
        while ( !*((_BYTE *)v23 + 25) )
        {
          if ( (unsigned __int64)WindowForView < v23[4] )
          {
            v22 = (__int64 **)v23;
            v23 = (__int64 *)*v23;
          }
          else
          {
            v23 = (__int64 *)v23[2];
          }
        }
        v27[0] = v21;
        if ( v21 == *v16 && *((_BYTE *)v22 + 25) )
        {
          std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>(
            v15,
            v15);
          v16[1] = (__int64 *)v16;
          *v16 = (__int64 *)v16;
          v16[2] = (__int64 *)v16;
          v15[1] = 0LL;
        }
        else
        {
          while ( v21 != (__int64 *)v22 )
          {
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(v27);
            v26 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Extract(
                    v15,
                    v25);
            std::_Deallocate<16,0>(v26, 48LL);
            v21 = (__int64 *)v27[0];
          }
        }
      }
    }
  }
  return 0LL;
}
