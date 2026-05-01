/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1806049B4
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1806040CC (--$_Try_emplace@AEB_K$$V@-$map@_KU-$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@U-$less@.c)
 * Callees:
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801BC9A8 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,winrt::com_ptr<SharedDesktopBackgroundVisualHost>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,winrt::com_ptr<SharedDesktopBackgroundVisualHost>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(v2 + 40));
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>(a1);
}
