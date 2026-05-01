/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A917C
 * Callers:
 *     ??1?$list@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x1802A90FC (--1-$list@U-$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@V-$alloca.c)
 *     ??1?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA@XZ @ 0x1802A9128 (--1-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$_Uhash_.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A1E68 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KUWindowData@implementation@Shell@Internal@.c)
 */

void __fastcall std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>(
        a1,
        (__int64)v2);
      v2 = v3;
    }
    while ( v3 );
  }
}
