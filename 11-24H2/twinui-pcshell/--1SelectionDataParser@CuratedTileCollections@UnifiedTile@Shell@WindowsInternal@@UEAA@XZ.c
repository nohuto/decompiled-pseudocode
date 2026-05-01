/*
 * XREFs of ??1SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ @ 0x180676F28
 * Callers:
 *     ??_ESelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAPEAXI@Z @ 0x180677010 (--_ESelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x180165EA8 (-_Free@_bstr_t@@AEAAXXZ.c)
 */

void __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::~SelectionDataParser(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *this,
        const struct std::nothrow_t *a2)
{
  const struct std::nothrow_t *v3; // rdx
  const struct std::nothrow_t *v4; // rdx
  const struct std::nothrow_t *v5; // rdx
  const struct std::nothrow_t *v6; // rdx
  const struct std::nothrow_t *v7; // rdx
  const struct std::nothrow_t *v8; // rdx
  const struct std::nothrow_t *v9; // rdx
  const struct std::nothrow_t *v10; // rdx

  _bstr_t::_Free(
    (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)((char *)this + 80),
    a2);
  _bstr_t::_Free(
    (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)((char *)this + 72),
    v3);
  _bstr_t::_Free(
    (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)((char *)this + 64),
    v4);
  _bstr_t::_Free(
    (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)((char *)this + 56),
    v5);
  _bstr_t::_Free(
    (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)((char *)this + 48),
    v6);
  _bstr_t::_Free(
    (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)((char *)this + 40),
    v7);
  _bstr_t::_Free(
    (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)((char *)this + 32),
    v8);
  _bstr_t::_Free(
    (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)((char *)this + 24),
    v9);
  _bstr_t::_Free(
    (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)((char *)this + 16),
    v10);
  *((_DWORD *)this + 3) = -1073741823;
}
