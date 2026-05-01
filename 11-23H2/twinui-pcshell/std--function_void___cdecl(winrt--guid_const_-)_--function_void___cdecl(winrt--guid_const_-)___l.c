/*
 * XREFs of std::function_void___cdecl(winrt::guid_const_&)_::function_void___cdecl(winrt::guid_const_&)___lambda_1908bf4dcb0a72ead8215abd107bde15__0_ @ 0x18027A278
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1800DA6BC (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

_QWORD *__fastcall std::function_void___cdecl_winrt::guid_const____::function_void___cdecl_winrt::guid_const______lambda_1908bf4dcb0a72ead8215abd107bde15__0_(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // rax

  a1[7] = 0LL;
  *a1 = off_1807CB4C8;
  v3 = *a2;
  *a2 = 0LL;
  a1[1] = v3;
  a1[7] = a1;
  if ( *a2 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a2);
  return a1;
}
