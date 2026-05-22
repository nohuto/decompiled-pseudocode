/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@2@PEAU32@@Z @ 0x180198AF0
 * Callers:
 *     ?NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z @ 0x180197C70 (-NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18003DBA0 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180196A0C (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBUtagMsgRoutingInfo@@V-$ComPtr@UIRemoteViewHi.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2)
{
  __int64 appended; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  _QWORD *v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = *(_DWORD *)(a2 + 16);
  v14 = *(_DWORD *)(a2 + 20);
  appended = std::_Fnv1a_append_bytes((__int64)a1, (const unsigned __int8 *const)&v14, 4uLL);
  v6 = std::_Fnv1a_append_bytes(v4, (const unsigned __int8 *const)&v15, v5);
  v8 = a1[3];
  v9 = 2 * (a1[6] & (v6 ^ appended));
  if ( *(_QWORD **)(v8 + 8 * v9 + 8) == v7 )
  {
    if ( *(_QWORD **)(v8 + 8 * v9) == v7 )
    {
      v10 = a1[1];
      *(_QWORD *)(v8 + 8 * v9) = v10;
    }
    else
    {
      v10 = v7[1];
    }
    *(_QWORD *)(v8 + 8 * v9 + 8) = v10;
  }
  else if ( *(_QWORD **)(v8 + 8 * v9) == v7 )
  {
    *(_QWORD *)(v8 + 8 * v9) = *v7;
  }
  v11 = *v7;
  --a1[2];
  *(_QWORD *)v7[1] = v11;
  v12 = v7[1];
  *(_QWORD *)(v11 + 8) = v12;
  std::_List_node<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>,void *>>>(
    v12,
    (__int64)v7);
  return v11;
}
