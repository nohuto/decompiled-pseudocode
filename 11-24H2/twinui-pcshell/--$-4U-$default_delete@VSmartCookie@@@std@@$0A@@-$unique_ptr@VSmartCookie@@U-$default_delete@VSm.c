/*
 * XREFs of ??$?4U?$default_delete@VSmartCookie@@@std@@$0A@@?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1806BF75C
 * Callers:
 *     ?Register@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x180229B40 (-Register@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationVie.c)
 *     ?Register@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJPEAUIImmersiveShellHookService@@@Z @ 0x1806C05B0 (-Register@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJPEAUIImmersiveShellHookService.c)
 *     ?Unregister@?$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@AppViewEventHelpers@@QEAAXXZ @ 0x1806C073C (-Unregister@-$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@d.c)
 * Callees:
 *     ??R?$default_delete@VSmartCookie@@@std@@QEBAXPEAVSmartCookie@@@Z @ 0x1806BFB8C (--R-$default_delete@VSmartCookie@@@std@@QEBAXPEAVSmartCookie@@@Z.c)
 */

__int64 *__fastcall std::unique_ptr<SmartCookie>::operator=<std::default_delete<SmartCookie>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<SmartCookie>::operator()(a1, v4);
  return a1;
}
