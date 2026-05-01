/*
 * XREFs of wistd::function_long___cdecl(void)_::function_long___cdecl(void)___lambda_344467b8d2742b929ca91d6f35e8528a__void_ @ 0x18022E788
 * Callers:
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x180187594 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::function_long___cdecl_void__::function_long___cdecl_void____lambda_344467b8d2742b929ca91d6f35e8528a__void_(
        __int64 a1,
        _OWORD *a2)
{
  __int128 v2; // xmm1

  v2 = a2[1];
  *(_OWORD *)(a1 + 16) = *a2;
  *(_QWORD *)(a1 + 8) = off_1807C9840;
  *(_OWORD *)(a1 + 32) = v2;
  *(_QWORD *)(a1 + 112) = a1 + 8;
  return a1;
}
