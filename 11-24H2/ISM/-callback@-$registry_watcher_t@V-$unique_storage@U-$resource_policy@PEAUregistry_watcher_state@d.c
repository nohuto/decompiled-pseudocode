/*
 * XREFs of ?callback@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1801BDD40
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEBAXW4RegistryChangeKind@wil@@@Z @ 0x1801BB4FC (--R-$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEBAXW4RegistryChangeKind@wil@@@Z.c)
 *     ?ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z @ 0x1801BC97C (-ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z.c)
 */

void __fastcall wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::callback(
        PTP_CALLBACK_INSTANCE Instance,
        unsigned __int8 *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  int v5; // eax
  char v6; // dl
  BOOL fAsynchronous; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( _InterlockedIncrement((volatile signed __int32 *)Context + 37) > 1 )
  {
    v5 = RegNotifyChangeKeyValue(*((HKEY *)Context + 15), Context[144], 0x10000005u, *((HANDLE *)Context + 16), 1);
    if ( !v5 || v5 == 5 )
    {
      wistd::function<void (enum wil::RegistryChangeKind)>::operator()((__int64)Context, 0);
      v6 = 1;
    }
    else
    {
      if ( v5 != 811 )
      {
        if ( v5 != 1018 )
        {
          if ( v5 > 0 )
            v5 = (unsigned __int16)v5 | 0x80070000;
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xCB1,
            (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/registry.h",
            (const char *)(unsigned int)v5,
            fAsynchronous);
        }
        wistd::function<void (enum wil::RegistryChangeKind)>::operator()((__int64)Context, 1);
      }
      v6 = 0;
    }
    wil::details::registry_watcher_state::ReleaseFromCallback((wil::details::registry_watcher_state *)Context, v6);
  }
}
