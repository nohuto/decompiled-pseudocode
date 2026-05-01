/*
 * XREFs of wistd::function_long___cdecl(void)_::function_long___cdecl(void)___lambda_bdc0369aff36f5007facc09437a0c890__void_ @ 0x18022EB18
 * Callers:
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x180187594 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::function_long___cdecl_void__::function_long___cdecl_void____lambda_bdc0369aff36f5007facc09437a0c890__void_(
        __int64 a1,
        _OWORD *a2)
{
  __int128 v2; // xmm1

  v2 = a2[1];
  *(_OWORD *)(a1 + 16) = *a2;
  *(_QWORD *)(a1 + 8) = off_1807C9868;
  *(_OWORD *)(a1 + 32) = v2;
  *(_QWORD *)(a1 + 112) = a1 + 8;
  return a1;
}
