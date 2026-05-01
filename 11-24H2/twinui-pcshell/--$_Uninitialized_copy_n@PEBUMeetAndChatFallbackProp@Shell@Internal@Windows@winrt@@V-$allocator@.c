/*
 * XREFs of ??$_Uninitialized_copy_n@PEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU12345@_KPEAU12345@AEAV?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@0@@Z @ 0x18049B7B4
 * Callers:
 *     ??$_Assign_counted_range@PEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXPEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@_K@Z @ 0x18049B438 (--$_Assign_counted_range@PEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@-$vector@UMe.c)
 *     ??$_Assign_counted_range@PEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAXPEBUUri@Foundation@Windows@winrt@@_K@Z @ 0x1805C3810 (--$_Assign_counted_range@PEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundation@Windows@win.c)
 *     ??$_Assign_counted_range@PEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXPEBUMenuItem@UI@WindowsUdk@winrt@@_K@Z @ 0x1805FE378 (--$_Assign_counted_range@PEBUMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@WindowsUdk@win.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801CDA40 (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 */

__int64 *__fastcall std::_Uninitialized_copy_n<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp const *>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdi

  v3 = a3;
  v4 = a2;
  if ( a2 )
  {
    v5 = a1 - (_QWORD)a3;
    do
    {
      *v3 = *(__int64 *)((char *)v3 + v5);
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v3++);
      --v4;
    }
    while ( v4 );
  }
  std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
    (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v3,
    (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v3);
  return v3;
}
