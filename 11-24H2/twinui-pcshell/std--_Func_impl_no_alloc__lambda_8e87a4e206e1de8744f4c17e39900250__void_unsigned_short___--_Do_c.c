/*
 * XREFs of std::_Func_impl_no_alloc__lambda_8e87a4e206e1de8744f4c17e39900250__void_unsigned_short___::_Do_call @ 0x1806778F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ParseSKUAttributeValue@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEBGAEAUSelectionData@2345@@Z @ 0x180677268 (-ParseSKUAttributeValue@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInte.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_8e87a4e206e1de8744f4c17e39900250__void_unsigned_short___::_Do_call(
        struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData **a1,
        const unsigned __int16 **a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::ParseSKUAttributeValue(
         (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)a1,
         *a2,
         a1[2]);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x40,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\selectiondataparser.cpp",
      (const char *)(unsigned int)v2);
}
