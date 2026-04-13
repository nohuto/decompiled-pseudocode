/*
 * XREFs of _CreativeFramework::Actions::MakeLaunchUriService_::_1_::dtor$6 @ 0x1800BBC42
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x18004C4F8 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::MakeLaunchUriService_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 68) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 68) &= ~8u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile(
      (CreativeFramework::TargetedContentLayoutHelpers::Tile *)(a2 + 96),
      a2);
  }
}
