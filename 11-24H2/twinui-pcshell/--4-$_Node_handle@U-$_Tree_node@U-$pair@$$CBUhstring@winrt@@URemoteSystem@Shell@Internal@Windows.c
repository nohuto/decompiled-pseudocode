/*
 * XREFs of ??4?$_Node_handle@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@2@U_Node_handle_map_base@2@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@6@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18064A3D0
 * Callers:
 *     ?Remove@?$map_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@URemoteSystem@Shell@Internal@Windows@3@@winrt@@QEAAXAEBUhstring@2@@Z @ 0x1806500E4 (-Remove@-$map_base@U-$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V-$map@Uhs.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@QEAA@XZ @ 0x180649DC0 (--1-$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@QEAA@XZ.c)
 *     ?_Clear@?$_Node_handle@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@2@U_Node_handle_map_base@2@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@6@@std@@AEAAXXZ @ 0x180652BB8 (-_Clear@-$_Node_handle@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Wi.c)
 */

void **__fastcall std::_Node_handle<std::_Tree_node<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>,void *>,std::allocator<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>>,std::_Node_handle_map_base,winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>::operator=(
        void **a1,
        void **a2)
{
  void *v2; // rax
  volatile signed __int32 **v4; // rcx

  v2 = *a2;
  v4 = (volatile signed __int32 **)*a1;
  if ( v4 )
  {
    if ( !v2 || a1 == a2 )
    {
      std::_Node_handle<std::_Tree_node<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>,void *>,std::allocator<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>>,std::_Node_handle_map_base,winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>::_Clear(a1);
      return a1;
    }
    std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>::~pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>(v4 + 4);
    std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
    v2 = *a2;
    *a2 = 0LL;
    goto LABEL_4;
  }
  if ( v2 )
  {
    *a2 = 0LL;
LABEL_4:
    *a1 = v2;
  }
  return a1;
}
