/*
 * XREFs of ?TryGetTitleForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AUhstring@7@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x180212198
 * Callers:
 *     ?TryGetTitleForWindow@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAPEAX@Z @ 0x180212150 (-TryGetTitleForWindow@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Wi.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

winrt::hstring *__fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TryGetTitleForWindow(
        __int64 a1,
        winrt::hstring *a2,
        unsigned int a3)
{
  int WindowText; // eax
  WCHAR *v5; // rdx
  WCHAR pString[264]; // [rsp+30h] [rbp-228h] BYREF

  WindowText = InternalGetWindowText((HWND)a3, pString, 260);
  v5 = pString;
  if ( !WindowText )
    v5 = (WCHAR *)&pvData;
  winrt::hstring::hstring(a2, v5);
  return a2;
}
