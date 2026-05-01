/*
 * XREFs of ?CompareStringVector@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXV?$vector@PEAGV?$allocator@PEAG@std@@@std@@_N01AEAH@Z @ 0x180320F8C
 * Callers:
 *     ?GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAHAEBU12345@@Z @ 0x1803214F0 (-GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAH.c)
 * Callees:
 *     ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x180221244 (--1-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pa.c)
 */

void __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::CompareStringVector(
        __int64 a1,
        LPCWCH **a2,
        char a3,
        LPCWCH **a4,
        char a5,
        int *a6)
{
  LPCWCH *v8; // rdi
  int v9; // ebx
  LPCWCH *v10; // r12
  LPCWCH *v11; // r14
  LPCWCH *v12; // r13

  if ( a3 && a5 )
  {
    v8 = *a2;
    v9 = -1;
    v10 = a2[1];
LABEL_9:
    if ( v8 != v10 )
    {
      v11 = *a4;
      v12 = a4[1];
      while ( 1 )
      {
        if ( v11 == v12 )
        {
          ++v8;
          goto LABEL_9;
        }
        if ( CompareStringOrdinal(*v8, -1, *v11, -1, 0) == 2 )
          break;
        ++v11;
      }
      v9 = *a6 + 1;
    }
    *a6 = v9;
  }
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>>((__int64)a2);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>>((__int64)a4);
}
