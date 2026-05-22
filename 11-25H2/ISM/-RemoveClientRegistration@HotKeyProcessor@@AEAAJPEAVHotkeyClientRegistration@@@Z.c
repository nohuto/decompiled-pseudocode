/*
 * XREFs of ?RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z @ 0x1801C5020
 * Callers:
 *     ?OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801C46A0 (-OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?UnregisterHotKeyClient@HotKeyProcessor@@UEAAJUMessageObjectID@@@Z @ 0x1801C57C0 (-UnregisterHotKeyClient@HotKeyProcessor@@UEAAJUMessageObjectID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180032CB0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801975D8 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ??$As@UIMessageProxy@@@?$ComPtr@UIRemoteHotKeyCallBack@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801C1694 (--$As@UIMessageProxy@@@-$ComPtr@UIRemoteHotKeyCallBack@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@std@@@?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@1@PEAU01@@Z @ 0x1801C2098 (--$_Freenode@V-$allocator@U-$_List_node@V-$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEA.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801C20C4 (--$_Freenode@V-$allocator@U-$_List_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-$_Lis.c)
 *     ??$erase@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@@std@@$0A@@?$_Tree@V?$_Tmap_traits@KV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x1801C2370 (--$erase@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$list@V-$shared_ptr.c)
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_Microsoft::WRL::ComPtr_HotkeyClientRegistration_________lambda_c6db7401cba5f9fe705df5cb0dba3b7a___ @ 0x1801C246C (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_Microsoft--WRL--ComPtr.c)
 *     ??0?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x1801C2604 (--0-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo@@@std@@@2@@std.c)
 *     ?CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAH@Z @ 0x1801C32C4 (-CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV-$list@V-$shared_p.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HotKeyProcessor::RemoveClientRegistration(
        HotKeyProcessor *this,
        struct HotkeyClientRegistration *a2)
{
  unsigned int v4; // esi
  _QWORD **v5; // rsi
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // r14
  _QWORD *v10; // rbx
  int v11; // eax
  ULONG_PTR v12; // r8
  int v14; // eax
  _QWORD *v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  char *v21; // rcx
  char *v22; // rdx
  char *v23; // rdi
  __int64 v24; // [rsp+20h] [rbp-20h] BYREF
  char *v25; // [rsp+30h] [rbp-10h] BYREF
  HotKeyProcessor *v26; // [rsp+38h] [rbp-8h]
  ULONG_PTR retaddr; // [rsp+68h] [rbp+28h]
  __int64 v28; // [rsp+78h] [rbp+38h] BYREF
  __int64 v29; // [rsp+80h] [rbp+40h] BYREF
  __int64 v30; // [rsp+88h] [rbp+48h] BYREF

  v4 = 0;
  v30 = 0LL;
  if ( a2 )
  {
    v5 = (_QWORD **)*((_QWORD *)this + 3);
    v25 = (char *)a2;
    v26 = this;
    v6 = (_QWORD *)*std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_Microsoft::WRL::ComPtr_HotkeyClientRegistration_________lambda_c6db7401cba5f9fe705df5cb0dba3b7a___(
                      &v28,
                      *v5,
                      v5,
                      (__int64)&v25);
    if ( v6 != v5 )
    {
      v8 = (_QWORD *)v6[1];
      *v8 = v5;
      v5[1] = v8;
      v9 = 0LL;
      do
      {
        v10 = (_QWORD *)*v6;
        std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>::_Freenode<std::allocator<std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>>>(
          v7,
          (__int64)v6);
        v6 = v10;
        ++v9;
      }
      while ( v10 != v5 );
      *((_QWORD *)this + 4) -= v9;
    }
    v11 = Microsoft::WRL::ComPtr<IRemoteHotKeyCallBack>::As<IMessageProxy>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 13,
            &v30);
    v4 = v11;
    if ( v11 < 0 )
    {
      if ( v11 == -2147024882 )
        TerminateProcessOnMemoryExhaustion(0LL);
      v12 = 1108LL;
LABEL_10:
      FailFastWithHR(v4, retaddr, v12);
      goto LABEL_11;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v30 + 64LL))(
            v30,
            ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    v4 = v14;
    if ( v14 < 0 )
    {
      if ( v14 == -2147024882 )
        TerminateProcessOnMemoryExhaustion(0LL);
      v12 = 1109LL;
      goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a2 + 13);
    v15 = (_QWORD *)((char *)this + 40);
    v16 = **((_QWORD **)this + 5);
    v29 = v16;
    while ( v16 != *v15 )
    {
      LODWORD(v28) = 0;
      std::list<std::shared_ptr<HotKeyInfo>>::list<std::shared_ptr<HotKeyInfo>>(&v25, (_QWORD ***)(v16 + 40));
      HotKeyProcessor::CleanupClientHotKeys(v17, (__int64)a2, (_QWORD **)&v25, &v28);
      if ( v26 )
      {
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(
          &v29,
          v18,
          v19,
          v20);
        v16 = v29;
      }
      else
      {
        v16 = *std::_Tree<std::_Tmap_traits<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>,0>>::erase<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>>,0>(
                 (__int64)v15,
                 &v24,
                 v16);
        v29 = v16;
      }
      v21 = v25;
      **((_QWORD **)v25 + 1) = 0LL;
      v22 = *(char **)v21;
      if ( *(_QWORD *)v21 )
      {
        do
        {
          v23 = *(char **)v22;
          std::_List_node<std::shared_ptr<HotKeyInfo>,void *>::_Freenode<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
            (__int64)v21,
            v22);
          v22 = v23;
        }
        while ( v23 );
      }
      std::_Deallocate<16,0>(v25, (const struct std::nothrow_t *)0x20);
    }
  }
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
  return v4;
}
