/*
 * XREFs of ?add_EnableChanged@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x18060E3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?add@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@2@@Z @ 0x18060E298 (-add@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@The_ea_18060E298.c)
 */

__int64 __fastcall winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>::add_EnableChanged(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  PVOID v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v5 = a1 + 104;
  if ( !a1 )
    v5 = 128LL;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>::add(
    (RTL_SRWLOCK *)v5,
    &v7,
    &v8);
  *a3 = v7;
  return 0LL;
}
