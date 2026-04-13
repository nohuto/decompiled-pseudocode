/*
 * XREFs of ?_Resetm@?$_Func_class@XPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAIU_Nil@std@@U45@U45@U45@@std@@IEAAX$$QEAV12@@Z @ 0x1800821EC
 * Callers:
 *     ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800818A8 (-ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AXPEAUHS.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@_NAEAVPropertySetHelper@Triggers@CreativeFramework@@U_Nil@std@@U45@U45@U45@U45@U45@@std@@IEAAXXZ @ 0x18005B7D0 (-_Tidy@-$_Func_class@_NAEAVPropertySetHelper@Triggers@CreativeFramework@@U_Nil@std@@U45@U45@U45@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Func_class<void,HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Resetm(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(a2 + 24);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 24) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      std::_Func_class<bool,CreativeFramework::Triggers::PropertySetHelper &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Tidy(
        a2,
        v5);
    }
    else
    {
      *(_QWORD *)(a1 + 24) = v4;
      *(_QWORD *)(a2 + 24) = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
