/*
 * XREFs of ?terminate@winrt@@YAXXZ @ 0x1802DF9F0
 * Callers:
 *     ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@2@@experimental@std@@QEBAXXZ @ 0x1802DFC98 (-unhandled_exception@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInsta.c)
 *     std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_a1bf07eabb51e841d7b59a4e813e5668__const___::promise_type::unhandled_exception @ 0x180479DBC (std--experimental--coroutine_traits_winrt--fire_and_forget__lambda_a1bf07eabb51e841d7b59a4e813e5.c)
 * Callees:
 *     ??Bhresult@winrt@@QEBAHXZ @ 0x1802CFCA8 (--Bhresult@winrt@@QEBAHXZ.c)
 *     WINRT_IMPL_RoFailFastWithErrorContext @ 0x1802D3E93 (WINRT_IMPL_RoFailFastWithErrorContext.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DE0D8 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

void __fastcall __noreturn winrt::terminate(winrt *this)
{
  unsigned int *v1; // rax
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = winrt::to_hresult(&v2);
  winrt::hresult::operator int(v1);
  WINRT_IMPL_RoFailFastWithErrorContext();
  abort();
}
