/*
 * XREFs of ?Host@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEBA?AUSearchAppHost@3456@XZ @ 0x1801F5A88
 * Callers:
 *     ?get_Host@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs2@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1801F5A30 (-get_Host@-$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISea.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::Host(
        __int64 a1,
        __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 144);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  return a2;
}
