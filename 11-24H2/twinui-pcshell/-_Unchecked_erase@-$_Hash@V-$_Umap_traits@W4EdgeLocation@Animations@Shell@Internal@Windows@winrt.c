/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@V?$_Uhash_compare@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@U?$hash@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@8@@8@V?$allocator@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@@8@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18069C068
 * Callers:
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@V?$_Uhash_compare@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@U?$hash@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@8@@8@V?$allocator@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@@8@$0A@@std@@@std@@QEAA@XZ @ 0x18069AF48 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??$?RH@?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@QEBA_KAEBH@Z @ 0x1800AB80C (--$-RH@-$_Uhash_compare@HU-$hash@H@std@@U-$equal_to@H@2@@std@@QEBA_KAEBH@Z.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@V?$_Uhash_compare@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@U?$hash@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@8@@8@V?$allocator@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@@8@$0A@@std@@@std@@QEAAXXZ @ 0x18069BD08 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@W4EdgeLocation@Animations@Shell@Internal@Win.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation,std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation,std::hash<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation>,std::equal_to<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation const,std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // r12
  _QWORD *v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r13
  bool v14; // bl
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  bool v20; // bl
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+88h] [rbp+10h]

  if ( a2 != a3 )
  {
    v5 = *(_QWORD **)(a2 + 8);
    v6 = (_QWORD *)a1[1];
    v7 = a1[3];
    v23 = a2;
    v21 = a1 + 1;
    v22 = v5;
    v8 = std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>::operator()<int>((__int64)a1, a2 + 16);
    v11 = 2 * (*(_QWORD *)(v10 + 48) & v8);
    v12 = *(_QWORD *)(v7 + 16 * (*(_QWORD *)(v10 + 48) & v8) + 8);
    v13 = *(_QWORD *)(v7 + 8 * v11);
    v25 = *(_QWORD *)(v7 + 8 * v11 + 8);
    while ( 1 )
    {
      v14 = v9 == v12;
      std::_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation,std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation,std::hash<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation>,std::equal_to<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation const,std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>>>,0>>::_Range_eraser::_Bump_erased(&v21);
      if ( v14 )
        break;
      v9 = v23;
      v12 = v25;
      if ( v23 == a3 )
      {
        if ( v13 == a2 )
LABEL_6:
          *(_QWORD *)(v7 + 8 * v11) = v9;
        goto LABEL_7;
      }
    }
    if ( v13 == a2 )
    {
      *(_QWORD *)(v7 + 8 * v11) = v6;
      v5 = v6;
    }
    for ( *(_QWORD *)(v7 + 8 * v11 + 8) = v5; ; *(_QWORD *)(v7 + 8 * v11 + 8) = v6 )
    {
      v9 = v23;
      if ( v23 == a3 )
        break;
      v18 = std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>::operator()<int>(v15, v23 + 16);
      v11 = 2 * (a1[6] & v18);
      v19 = *(_QWORD *)(v7 + 16 * (a1[6] & v18) + 8);
      while ( 1 )
      {
        v20 = v9 == v19;
        std::_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation,std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation,std::hash<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation>,std::equal_to<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation const,std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>>>,0>>::_Range_eraser::_Bump_erased(&v21);
        if ( v20 )
          break;
        v9 = v23;
        if ( v23 == a3 )
          goto LABEL_6;
      }
      *(_QWORD *)(v7 + 8 * v11) = v6;
    }
LABEL_7:
    v16 = v22;
    *v22 = v9;
    *(_QWORD *)(v9 + 8) = v16;
  }
  return a3;
}
