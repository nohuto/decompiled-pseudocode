/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180299A18
 * Callers:
 *     ??1ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAA@XZ @ 0x18029995C (--1ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1?$map@_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@@4@@std@@QEAA@XZ @ 0x1802D0E14 (--1-$map@_KU-$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@U-$less@_K@std@@V-$allocator@U.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@1@@Z @ 0x180299A48 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KU-$com_ptr@USharedDesktopBackgroundVisua.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,winrt::com_ptr<SharedDesktopBackgroundVisualHost>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::com_ptr<SharedDesktopBackgroundVisualHost>>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,winrt::com_ptr<SharedDesktopBackgroundVisualHost>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::com_ptr<SharedDesktopBackgroundVisualHost>>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,winrt::com_ptr<SharedDesktopBackgroundVisualHost>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,winrt::com_ptr<SharedDesktopBackgroundVisualHost>>,void *>>>(
    a1,
    a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
