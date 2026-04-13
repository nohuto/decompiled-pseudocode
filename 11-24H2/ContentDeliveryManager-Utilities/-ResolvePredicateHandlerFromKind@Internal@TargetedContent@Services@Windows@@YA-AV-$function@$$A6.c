/*
 * XREFs of ?ResolvePredicateHandlerFromKind@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180081DA8
 * Callers:
 *     ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180081CD8 (-ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AXPEAUHS.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@QEAA@AEBV01@@Z @ 0x180080240 (--0-$function@$$A6AXPEAUHSTRING__@@AEAV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::ResolvePredicateHandlerFromKind(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  int v4; // eax
  _DWORD *i; // rdx
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  v9 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64 *, int *))(v2 + 112))(a2, &v9);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x176,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4,
      v7);
  for ( i = &unk_180179560; i != (_DWORD *)&unk_180179600; i += 10 )
  {
    if ( *i == v9 )
    {
      std::function<void (HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *)>::function<void (HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *)>(
        a1,
        (__int64)(i + 2));
      return a1;
    }
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  return a1;
}
