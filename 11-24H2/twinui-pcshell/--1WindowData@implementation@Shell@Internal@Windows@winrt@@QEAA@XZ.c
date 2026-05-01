/*
 * XREFs of ??1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18015EADC
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A1E68 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KUWindowData@implementation@Shell@Internal@.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802CC774 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KUWindowData@implementation@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@QEAA@XZ @ 0x18015EC38 (--1-$_Hash@V-$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V-$_Uhash_com.c)
 *     ??1?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA@XZ @ 0x18015EC8C (--1-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAA@XZ.c)
 *     ?at@?$unordered_map@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@5@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@@std@@QEAAAEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEBUguid@4@@Z @ 0x18015EE7C (-at@-$unordered_map@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Window.c)
 *     ?DestroyTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@@Z @ 0x18015EF18 (-DestroyTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAXA.c)
 *     ??1?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1802C3E58 (--1-$_Hash@V-$_Umap_traits@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@Internal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::~WindowData(
        winrt::Windows::Internal::Shell::implementation::WindowData *this)
{
  __int64 **v2; // rdi
  __int64 *i; // rbx
  __int64 v4; // rcx
  unsigned __int64 j; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF

  v2 = (__int64 **)*((_QWORD *)this + 4);
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    v13 = *((_OWORD *)i + 1);
    v4 = 0xCBF29CE484222325uLL;
    for ( j = 0LL; j < 0x10; ++j )
      v4 = 0x100000001B3LL * (*((unsigned __int8 *)&v13 + j) ^ (unsigned __int64)v4);
    v6 = 2 * (v4 & *((_QWORD *)this + 9));
    v7 = *((_QWORD *)this + 6);
    v8 = *(_QWORD **)(v7 + 8 * v6 + 8);
    if ( v8 == *((_QWORD **)this + 4) )
    {
LABEL_12:
      v8 = 0LL;
    }
    else
    {
      v9 = *(_QWORD **)(v7 + 8 * v6);
      while ( 1 )
      {
        v10 = v13 - v8[2];
        if ( (_QWORD)v13 == v8[2] )
          v10 = *((_QWORD *)&v13 + 1) - v8[3];
        if ( !v10 )
          break;
        if ( v8 == v9 )
          goto LABEL_12;
        v8 = (_QWORD *)v8[1];
      }
    }
    if ( !v8 )
      v8 = (_QWORD *)*((_QWORD *)this + 4);
    if ( v8 != *((_QWORD **)this + 4) )
    {
      v11 = *((_QWORD *)this + 1);
      v12 = std::unordered_map<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>::at(
              (char *)this + 24,
              &v13);
      winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::DestroyTabProxyWindow(v11, v12);
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 128LL))(
    *((_QWORD *)this + 2),
    *((_QWORD *)this + 24));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 112LL))(
    *((_QWORD *)this + 2),
    *((_QWORD *)this + 25));
  std::deque<winrt::guid>::~deque<winrt::guid>((char *)this + 152);
  std::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>::~_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>((char *)this + 88);
  std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::~_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>((char *)this + 24);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::implementation::WindowData *)((char *)this + 16));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::implementation::WindowData *)((char *)this + 8));
}
