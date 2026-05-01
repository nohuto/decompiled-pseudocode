/*
 * XREFs of ?Show@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x18063B1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowContextMenu@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x18063B378 (-ShowContextMenu@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::Show(
        winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *this)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu(this, &v2);
  return 0LL;
}
