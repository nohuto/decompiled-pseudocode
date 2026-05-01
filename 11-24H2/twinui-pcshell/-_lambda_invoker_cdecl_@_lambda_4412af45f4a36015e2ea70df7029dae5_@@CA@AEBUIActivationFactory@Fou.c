/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_4412af45f4a36015e2ea70df7029dae5_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x180461F00
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUShowShellViewOptions@Shell@UI@WindowsUdk@3@XZ @ 0x1802AE9D0 (--$ActivateInstance@UShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@IActivationFactory@Foundat.c)
 */

struct IUnknown *__fastcall _lambda_4412af45f4a36015e2ea70df7029dae5_::_lambda_invoker_cdecl_(
        struct IUnknown *a1,
        __int64 *a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions>(
    a2,
    a1);
  return a1;
}
