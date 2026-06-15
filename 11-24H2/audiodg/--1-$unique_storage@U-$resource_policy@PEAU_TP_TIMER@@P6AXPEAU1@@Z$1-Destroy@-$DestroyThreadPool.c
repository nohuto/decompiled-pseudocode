/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140058494
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x14004DF88 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x140050D58 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ?ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ @ 0x14007AF54 (-ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x140078020 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>(
        struct _TP_TIMER **a1)
{
  struct _TP_TIMER *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v1);
  return result;
}
