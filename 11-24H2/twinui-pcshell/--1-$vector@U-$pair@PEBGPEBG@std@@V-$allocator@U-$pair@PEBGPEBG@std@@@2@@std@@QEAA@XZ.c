/*
 * XREFs of ??1?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@XZ @ 0x18022A39C
 * Callers:
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile_::_1_::dtor$0 @ 0x1806D55DC (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--ValidateLayoutFile_--_1_--dtor$0.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::LoadSchema_::_1_::dtor$0 @ 0x1806D5636 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--LoadSchema_--_1_--dtor$0.c)
 *     _TaskbarLayoutPolicyManager::ValidateLayoutModificationXML_::_1_::dtor$0 @ 0x1806DBFE9 (_TaskbarLayoutPolicyManager--ValidateLayoutModificationXML_--_1_--dtor$0.c)
 *     _PWSLayoutPolicyManager::ValidateLayoutModificationXML_::_1_::dtor$0 @ 0x1806E77CC (_PWSLayoutPolicyManager--ValidateLayoutModificationXML_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::~vector<std::pair<unsigned short const *,unsigned short const *>>(
        __int64 a1)
{
  std::vector<winrt::Windows::Foundation::Rect>::~vector<winrt::Windows::Foundation::Rect>(a1);
}
