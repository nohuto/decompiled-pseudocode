/*
 * XREFs of ??0?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@QEAA@AEBV01@@Z @ 0x180080240
 * Callers:
 *     ?GetHandlerForTriggerType@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180080BFC (-GetHandlerForTriggerType@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AXPEAUH.c)
 *     ?ResolvePredicateHandlerFromKind@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180081DA8 (-ResolvePredicateHandlerFromKind@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6.c)
 *     ?ResolveRegisterTaskHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TriggerRegistrationOption@1234@@Z @ 0x180081E30 (-ResolveRegisterTaskHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AJPEA.c)
 *     ?ResolveTriggerCleanupHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180081E90 (-ResolveTriggerCleanupHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AJP.c)
 *     ?ResolveTriggerSetupHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180082038 (-ResolveTriggerSetupHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AJPEA.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *)>::function<void (HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rcx
  __int64 v5; // rdx

  v3 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 24);
  if ( v4 )
  {
    if ( v4 == (__int64 (__fastcall ***)(_QWORD, __int64))a2 )
      v5 = a1;
    else
      v5 = 0LL;
    v3 = (**v4)(v4, v5);
  }
  *(_QWORD *)(a1 + 24) = v3;
  return a1;
}
