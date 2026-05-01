/*
 * XREFs of ??_ESelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAPEAXI@Z @ 0x180677010
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ @ 0x180676F28 (--1SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ.c)
 */

WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *__fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::`vector deleting destructor'(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *this,
        const struct std::nothrow_t *a2)
{
  char v2; // bl

  v2 = (char)a2;
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::~SelectionDataParser(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
