/*
 * XREFs of _std::collate_unsigned_short_::do_transform_::_1_::dtor$0 @ 0x1800B727B
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x18004C4F8 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall std::collate_unsigned_short_::do_transform_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile(
      *(CreativeFramework::TargetedContentLayoutHelpers::Tile **)(a2 + 72),
      a2);
  }
}
