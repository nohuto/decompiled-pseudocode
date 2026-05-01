/*
 * XREFs of ??$_Erase@Uguid@winrt@@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@AEAA_KAEBUguid@winrt@@@Z @ 0x18015E8A8
 * Callers:
 *     ?RemoveTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x18015E594 (-RemoveTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>::_Erase<winrt::guid>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r8

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 0x10; ++i )
  {
    v6 = *((unsigned __int8 *)a2 + i);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = a1[3];
  v8 = v4 & a1[6];
  v9 = (_QWORD *)a1[1];
  v10 = 2 * v8;
  v11 = *(_QWORD **)(v7 + 8 * v10 + 8);
  if ( v11 == v9 )
  {
LABEL_9:
    v11 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v12 = *a2 - v11[2];
      if ( *a2 == v11[2] )
        v12 = a2[1] - v11[3];
      if ( !v12 )
        break;
      if ( v11 == *(_QWORD **)(v7 + 8 * v10) )
        goto LABEL_9;
      v11 = (_QWORD *)v11[1];
    }
  }
  if ( !v11 )
    return 0LL;
  if ( *(_QWORD **)(v7 + 8 * v10 + 8) == v11 )
  {
    if ( *(_QWORD **)(v7 + 8 * v10) == v11 )
      *(_QWORD *)(v7 + 8 * v10) = v9;
    else
      v9 = (_QWORD *)v11[1];
    *(_QWORD *)(v7 + 8 * v10 + 8) = v9;
  }
  else if ( *(_QWORD **)(v7 + 8 * v10) == v11 )
  {
    *(_QWORD *)(v7 + 8 * v10) = *v11;
  }
  v13 = *v11;
  --a1[2];
  *(_QWORD *)v11[1] = v13;
  *(_QWORD *)(v13 + 8) = v11[1];
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v11 + 4));
  std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)0x28);
  return 1LL;
}
