/*
 * XREFs of ??$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAPEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAW423456@AEBW423456@@Z @ 0x18022F83C
 * Callers:
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x180320E30 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z @ 0x180321158 (-Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1803F8A6C (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     ?ParseSKUAttributeValue@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEBGAEAUSelectionData@2345@@Z @ 0x180677268 (-ParseSKUAttributeValue@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInte.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1800486E0 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@_K1@Z @ 0x1802A6450 (-_Change_array@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V-$a.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

char *__fastcall std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::_Emplace_reallocate<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU const &>(
        const void **a1,
        _BYTE *a2,
        _DWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  char *v14; // rsi
  char *v15; // r14
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8
  char *result; // rax
  void *v21; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) >> 2;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v8 = 0x3FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<4>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v21 = v13;
  try
  {
    v15 = &v13[4 * v6];
    *(_DWORD *)v15 = *a3;
    v16 = a1[1];
    v17 = *a1;
    v18 = v13;
    if ( a2 == v16 )
    {
      v19 = v16 - v17;
    }
    else
    {
      memmove_0(v13, v17, a2 - (_BYTE *)*a1);
      v18 = v15 + 4;
      v19 = (_BYTE *)a1[1] - a2;
      v17 = a2;
    }
    memmove_0(v18, v17, v19);
    std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Change_array(a1, v14, v9, v8);
    result = v15;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(4 * v8));
    throw;
  }
  return result;
}
