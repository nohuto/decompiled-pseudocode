/*
 * XREFs of _CreativeFramework::NotificationManager::ToastHelpers::EnforceSchemaAndValidate_::_1_::dtor$16 @ 0x1800BC42E
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x18004C4F8 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::NotificationManager::ToastHelpers::EnforceSchemaAndValidate_::_1_::dtor_16(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~2u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile(
      (CreativeFramework::TargetedContentLayoutHelpers::Tile *)(a2 + 144),
      a2);
  }
}
