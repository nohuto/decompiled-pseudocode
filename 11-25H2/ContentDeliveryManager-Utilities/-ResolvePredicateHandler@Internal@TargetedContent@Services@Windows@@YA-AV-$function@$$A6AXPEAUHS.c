/*
 * XREFs of ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800818A8
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180081480 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18008588C (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x18004C3D4 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     ?_Tidy@?$_Func_class@_NAEAVPropertySetHelper@Triggers@CreativeFramework@@U_Nil@std@@U45@U45@U45@U45@U45@@std@@IEAAXXZ @ 0x18005B7D0 (-_Tidy@-$_Func_class@_NAEAVPropertySetHelper@Triggers@CreativeFramework@@U_Nil@std@@U45@U45@U45@.c)
 *     ?GetHandlerForTriggerType@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x1800807CC (-GetHandlerForTriggerType@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AXPEAUH.c)
 *     ?ResolvePredicateHandlerFromKind@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180081978 (-ResolvePredicateHandlerFromKind@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6.c)
 *     ?_Resetm@?$_Func_class@XPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAIU_Nil@std@@U45@U45@U45@@std@@IEAAX$$QEAV12@@Z @ 0x1800821EC (-_Resetm@-$_Func_class@XPEAUHSTRING__@@AEAV-$unique_any_t@V-$unique_storage@U-$resource_policy@P.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Services::TargetedContent::Internal::ResolvePredicateHandler(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  _QWORD *HandlerForTriggerType; // rdi
  int v8[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+28h] [rbp-40h]
  _QWORD v10[4]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v9 = a1;
  Windows::Services::TargetedContent::Internal::ResolvePredicateHandlerFromKind();
  v8[1] = 1;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v8[0] = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, v8);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x189,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v4,
        v8[0]);
    HandlerForTriggerType = Windows::Services::TargetedContent::Internal::GetHandlerForTriggerType(v10, v8[0]);
    if ( (_QWORD *)a1 != HandlerForTriggerType )
    {
      std::_Func_class<bool,CreativeFramework::Triggers::PropertySetHelper &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Tidy(
        a1,
        v5);
      std::_Func_class<void,HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Resetm(
        a1,
        HandlerForTriggerType);
    }
    std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>((__int64)v10);
  }
  return a1;
}
