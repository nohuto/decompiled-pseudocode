/*
 * XREFs of _CreativeFramework::Actions::MakeAppInstallService_::_1_::dtor$16 @ 0x1800BB31C
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x18004C2F8 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::MakeAppInstallService_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 100) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 100) &= ~0x10u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile(
      (CreativeFramework::TargetedContentLayoutHelpers::Tile *)(a2 + 304),
      a2);
  }
}
