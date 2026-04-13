/*
 * XREFs of _CreativeFramework::NotificationManager::Details::ReplaceAll_::_1_::dtor$0 @ 0x1800BC48B
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x18004C4F8 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::NotificationManager::Details::ReplaceAll_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile(
      *(CreativeFramework::TargetedContentLayoutHelpers::Tile **)(a2 + 64),
      a2);
  }
}
