/*
 * XREFs of ?reset@?$unique_any_array_ptr@PEAXU?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@U?$unique_any_array_deleter@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@2@_K@wil@@QEAAXXZ @ 0x18033C2F8
 * Callers:
 *     ??1?$unique_any_array_ptr@PEAXU?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@U?$unique_any_array_deleter@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@2@_K@wil@@QEAA@XZ @ 0x18033A5EC (--1-$unique_any_array_ptr@PEAXU-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@Z@wil@@U-$u.c)
 *     ?HasGamingAppCapability@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SA_NAEBUhstring@7@@Z @ 0x18033AF14 (-HasGamingAppCapability@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Inte.c)
 * Callees:
 *     ?close_reset@?$close_invoke_helper@$00P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZPEAX@details@wil@@SAXPEAX@Z @ 0x18033BFF4 (-close_reset@-$close_invoke_helper@$00P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZPEAX@details@wil@@SAXP.c)
 */

HLOCAL __fastcall wil::unique_any_array_ptr<void *,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>,wil::details::unique_any_array_deleter<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>,unsigned __int64>::reset(
        __int64 a1)
{
  HLOCAL *v1; // rbx
  HLOCAL *v3; // rsi
  HLOCAL result; // rax

  v1 = *(HLOCAL **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = &v1[*(_QWORD *)(a1 + 8)];
    while ( v1 != v3 )
      wil::details::close_invoke_helper<1,void * (*)(void *),&void * LocalFree(void *),void *>::close_reset(*v1++);
    result = LocalFree(*(HLOCAL *)a1);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return result;
}
