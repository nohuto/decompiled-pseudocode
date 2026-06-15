/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?WpRpcBindingFree@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800806B8
 * Callers:
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x180056638 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x1800567C8 (-s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?WpRpcBindingFree@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180088A64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-WpRpcBindingFree@details.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x1800AEF50 (s_adGetDeviceGraphWnfStateName.c)
 *     ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800B1DB0 (-OnTimer@-$CWatchdogTimer@$00@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        RPC_BINDING_HANDLE *a1)
{
  RPC_BINDING_HANDLE v1; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    Binding = *a1;
    LODWORD(v1) = RpcBindingFree(&Binding);
  }
  return (int)v1;
}
