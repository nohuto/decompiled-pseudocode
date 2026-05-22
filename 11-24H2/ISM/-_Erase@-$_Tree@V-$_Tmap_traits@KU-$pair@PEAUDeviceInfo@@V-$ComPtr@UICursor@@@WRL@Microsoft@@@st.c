/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x18008FFF4
 * Callers:
 *     ?OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800680D0 (-OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18004DC70 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$list@V-$shared_ptr@UHotKeyInfo@@@std.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18004DF08 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800900B0 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBKU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICursor@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@1@@Z @ 0x1801C0F8C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICurso.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>,0>>::_Erase(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 *v8; // rdi
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *v13; // r9
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  v5 = a2[1];
  v6 = *a2;
  v16 = *a2;
  v7 = 0LL;
  while ( v6 != v5 )
  {
    ++v7;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
      &v16,
      (__int64)a2,
      a3,
      v3);
    v6 = v16;
  }
  v8 = *(__int64 **)a1;
  v16 = v3;
  if ( v3 == *v8 && *(_BYTE *)(v5 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>,void *>>>(
      a1,
      a1,
      v8[1]);
    v8[1] = (__int64)v8;
    *v8 = (__int64)v8;
    v8[2] = (__int64)v8;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  else
  {
    while ( v3 != v5 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
        &v16,
        (__int64)a2,
        a3,
        v3);
      v17 = v10;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
        &v17,
        v11,
        v12,
        v10);
      v14 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Extract(
              (__int64 **)a1,
              v13);
      std::_Tree_node<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>,void *>>>(
        v15,
        v14);
      v3 = v16;
    }
  }
  return v7;
}
