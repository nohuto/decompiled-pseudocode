/*
 * XREFs of ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18003A504
 * Callers:
 *     ?CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z @ 0x18002E7B4 (-CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z.c)
 *     ?Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x1800674B0 (-Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_I.c)
 *     ?Invoke@PinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAXXZ @ 0x18009CA70 (-Invoke@PinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?MakePinWebsiteToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18009CD40 (-MakePinWebsiteToTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Act.c)
 *     ?PinWebsite@PinnedWebsiteManager@Actions@CreativeFramework@@YAXPEB_W00@Z @ 0x1800A4D54 (-PinWebsite@PinnedWebsiteManager@Actions@CreativeFramework@@YAXPEB_W00@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::RunFunctor(
        wil::details *this,
        struct wil::details::IFunctor *a2,
        struct wil::details::IFunctorHost *a3)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( wil::details::g_pfnRunFunctorWithExceptionFilter )
    return wil::details::g_pfnRunFunctorWithExceptionFilter(this, a2, retaddr);
  else
    return (**(__int64 (__fastcall ***)(struct wil::details::IFunctor *, wil::details *, struct wil::details::IFunctorHost *))a2)(
             a2,
             this,
             a3);
}
