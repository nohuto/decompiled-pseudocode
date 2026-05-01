/*
 * XREFs of _lambda_f85305330639c289329e0f73b8204bb6_::_lambda_f85305330639c289329e0f73b8204bb6_ @ 0x1802338A4
 * Callers:
 *     ?publish_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180199470 (-publish_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServic.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall lambda_f85305330639c289329e0f73b8204bb6_::_lambda_f85305330639c289329e0f73b8204bb6_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v5; // rcx

  v3 = *a3;
  *a1 = a2;
  v5 = a1 + 1;
  *v5 = v3;
  Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef(v5);
  return a1;
}
