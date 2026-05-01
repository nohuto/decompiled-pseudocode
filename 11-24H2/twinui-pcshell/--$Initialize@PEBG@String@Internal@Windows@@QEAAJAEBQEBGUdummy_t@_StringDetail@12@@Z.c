/*
 * XREFs of ??$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180019520
 * Callers:
 *     ?IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z @ 0x180017C40 (-IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z @ 0x180019168 (-RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z.c)
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@Z @ 0x180019408 (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@Y.c)
 *     ?Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@67@UUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@UWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@_K@Z @ 0x18001994C (-Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowCont.c)
 *     ?GetKGLLocationForApp@IsGameManager@@AEAAJPEBG0PEAVString@Internal@Windows@@@Z @ 0x18010BC48 (-GetKGLLocationForApp@IsGameManager@@AEAAJPEBG0PEAVString@Internal@Windows@@@Z.c)
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180421704 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ?QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180429504 (-QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPrope.c)
 *     ?Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@W4AppModelKind@4567@UAppViewId@4567@PEAUIWindow@4567@UWindowId@4567@PEBGW4WindowCreatedType@@@Z @ 0x180440AF8 (-Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::String::Initialize<unsigned short const *>(HSTRING *a1, const WCHAR **a2)
{
  const WCHAR *v3; // rcx
  unsigned __int64 v4; // rdx
  HRESULT v5; // ebx
  HSTRING v6; // rcx
  HSTRING string; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a2;
  if ( *a2 )
  {
    string = 0LL;
    v4 = -1LL;
    do
      ++v4;
    while ( v3[v4] );
    if ( v4 > 0xFFFFFFFF )
    {
      return (unsigned int)-2147024362;
    }
    else
    {
      v5 = WindowsCreateString(v3, v4, &string);
      if ( v5 >= 0 )
      {
        v6 = *a1;
        *a1 = string;
        WindowsDeleteString(v6);
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)v5;
}
