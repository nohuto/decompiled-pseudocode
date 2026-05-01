/*
 * XREFs of ??$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z @ 0x180361AC4
 * Callers:
 *     ?GetAllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA_NUread_lock_required@wil@@@Z @ 0x1803622EC (-GetAllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Window.c)
 *     ?GetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA?AURect@Foundation@56@Uread_lock_required@wil@@@Z @ 0x1803624EC (-GetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA-AU.c)
 *     ?GetWindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAIUread_lock_required@wil@@@Z @ 0x18036365C (-GetWindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEA.c)
 *     ?SetForegroundInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1803643DC (-SetForegroundInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@wi.c)
 *     ?CreateKeyForHwnd@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@_J@Z @ 0x18064B030 (-CreateKeyForHwnd@Util@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6A.c)
 *     ?SetValue@InProcPropertyStore@Util@@UEAAX_KAEBUhstring@winrt@@1@Z @ 0x180650F30 (-SetValue@InProcPropertyStore@Util@@UEAAX_KAEBUhstring@winrt@@1@Z.c)
 *     ?TryGetValue@InProcPropertyStore@Util@@UEAA?AUhstring@winrt@@_KAEBU34@@Z @ 0x180651430 (-TryGetValue@InProcPropertyStore@Util@@UEAA-AUhstring@winrt@@_KAEBU34@@Z.c)
 *     ?TryOpenKeyForHwnd@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@_J@Z @ 0x180652190 (-TryOpenKeyForHwnd@Util@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6.c)
 *     ?GetHostProcessDataFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBI@Z @ 0x180663474 (-GetHostProcessDataFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Wind.c)
 *     ?SaveHostProcessDataToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAAXV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1806639B0 (-SaveHostProcessDataToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windo.c)
 * Callees:
 *     ??0hresult@winrt@@QEAA@H@Z @ 0x1801EA3A8 (--0hresult@winrt@@QEAA@H@Z.c)
 *     ?hresult_from_win32@impl@winrt@@YAHI@Z @ 0x1802DF884 (-hresult_from_win32@impl@winrt@@YAHI@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DFA20 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 */

void __fastcall winrt::check_win32<unsigned long>(winrt::impl *a1)
{
  int v1; // eax
  int *v2; // rax
  unsigned int *v3; // r8
  char v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (_DWORD)a1 )
  {
    v1 = winrt::impl::hresult_from_win32(a1);
    v2 = (int *)winrt::hresult::hresult((winrt::hresult *)&v4, v1);
    winrt::throw_hresult(*v2, v3, (__int64)v3);
  }
}
