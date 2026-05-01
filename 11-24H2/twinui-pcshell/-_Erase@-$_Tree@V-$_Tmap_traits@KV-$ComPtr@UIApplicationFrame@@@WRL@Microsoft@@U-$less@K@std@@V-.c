/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1804EB310
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1804EB3CC (-erase@-$_Tree@V-$_Tmap_traits@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-$less@K@std@@V-$.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18005C784 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18006A48C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositio.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1804EA734 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@@WRL@Micros.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1804EA78C (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@@WRL@Microsof.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Erase(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  v5 = a2[1];
  v6 = *a2;
  v17 = *a2;
  v7 = 0LL;
  while ( v6 != v5 )
  {
    ++v7;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(
      &v17,
      (__int64)a2,
      a3,
      v3);
    v6 = v17;
  }
  v8 = *a1;
  v17 = v3;
  if ( v3 == *(_QWORD *)v8 && *(_BYTE *)(v5 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>(
      (__int64)a1,
      (__int64)a1,
      *(__int64 **)(v8 + 8));
    *(_QWORD *)(v8 + 8) = v8;
    *(_QWORD *)v8 = v8;
    *(_QWORD *)(v8 + 16) = v8;
    a1[1] = 0LL;
  }
  else
  {
    while ( v3 != v5 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(
        &v17,
        (__int64)a2,
        a3,
        v3);
      v18 = v10;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(
        &v18,
        v11,
        v12,
        v10);
      v15 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Extract(
              a1,
              v14,
              v13,
              v14);
      std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>(
        v16,
        v15);
      v3 = v17;
    }
  }
  return v7;
}
