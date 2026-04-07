/*
 * XREFs of ?get@?$weak_ref@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x18009643C
 * Callers:
 *     winrt::impl::delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___::Invoke @ 0x1800963B0 (winrt--impl--delegate_winrt--Udwm--Transitions--AnimationCompletedHandler__lambda_7747b62f378c07.c)
 * Callees:
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18004BFEC (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x18009A75C (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ??$get_self@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@winrt@@YAPEAUWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@0@AEBUITransition@450@@Z @ 0x18009AE5C (--$get_self@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IUnknown *__fastcall winrt::weak_ref<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>::get(
        __int64 *a1,
        struct IUnknown *a2)
{
  __int64 v2; // rsi
  void (__fastcall *v4)(__int64, __int64 *, void **); // rbx
  void **v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    v8 = 0LL;
    v4 = *(void (__fastcall **)(__int64, __int64 *, void **))(*(_QWORD *)v2 + 24LL);
    v5 = winrt::put_abi((winrt *)&v8, a2);
    v4(v2, &winrt::impl::guid_v<winrt::Udwm::Transitions::ITransition>, v5);
    v6 = 0LL;
    if ( v8 )
    {
      v6 = winrt::get_self<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,winrt::Udwm::Transitions::ITransition>(&v8);
      v8 = 0LL;
    }
    a2->lpVtbl = (struct IUnknownVtbl *)v6;
    winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v8);
  }
  else
  {
    a2->lpVtbl = 0LL;
  }
  return a2;
}
