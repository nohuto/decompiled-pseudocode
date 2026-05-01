/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1805848F0
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x1800B9260 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18005C784 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18006A48C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositio.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@1@@Z @ 0x1802B15FC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_trai_ea_1802B15FC.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1805835E4 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits_ea_1805835E4.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,STARTUPAPPINFO,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,STARTUPAPPINFO>>,0>>::_Erase(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF
  __int64 v17; // [rsp+38h] [rbp+10h] BYREF

  v16 = a1;
  v3 = *a2;
  v4 = 0LL;
  v5 = a2[1];
  v6 = *a2;
  v16 = *a2;
  while ( v6 != v5 )
  {
    ++v4;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(
      &v16,
      (__int64)a2,
      a3,
      v3);
    v6 = v16;
  }
  v7 = (_QWORD *)StartupAppMonitor::s_showNotificationMap;
  v16 = v3;
  if ( v3 == *(_QWORD *)StartupAppMonitor::s_showNotificationMap && *(_BYTE *)(v5 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,STARTUPAPPINFO>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,STARTUPAPPINFO>,void *>>>(
      (__int64)&StartupAppMonitor::s_showNotificationMap,
      (__int64)&StartupAppMonitor::s_showNotificationMap,
      *(__int64 **)(StartupAppMonitor::s_showNotificationMap + 8));
    v7[1] = v7;
    *v7 = v7;
    v7[2] = v7;
    qword_1808C9628 = 0LL;
  }
  else
  {
    while ( v3 != v5 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(
        &v16,
        (__int64)a2,
        a3,
        v3);
      v17 = v9;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(
        &v17,
        v10,
        v11,
        v9);
      v14 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Extract(
              &StartupAppMonitor::s_showNotificationMap,
              v13,
              v12,
              v13);
      std::_Tree_node<std::pair<std::wstring const,STARTUPAPPINFO>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<std::wstring const,STARTUPAPPINFO>,void *>>>(
        v15,
        (char *)v14);
      v3 = v16;
    }
  }
  return v4;
}
