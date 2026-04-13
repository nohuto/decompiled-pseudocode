/*
 * XREFs of ??$_Med3@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@00@Z @ 0x1800B0F8C
 * Callers:
 *     ??$_Median@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@00@Z @ 0x1800B0FF8 (--$_Median@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAUTile@TargetedCo.c)
 * Callees:
 *     ??$swap@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXAEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800B1F40 (--$swap@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXAEAUTile@TargetedContentL.c)
 *     ??MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z @ 0x1800B21FC (--MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z.c)
 */

__int64 __fastcall std::_Med3<CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(a2, a1) )
    std::swap<CreativeFramework::TargetedContentLayoutHelpers::Tile>();
  result = CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(a3, a2);
  if ( (_BYTE)result )
  {
    std::swap<CreativeFramework::TargetedContentLayoutHelpers::Tile>();
    result = CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(a2, a1);
    if ( (_BYTE)result )
      return std::swap<CreativeFramework::TargetedContentLayoutHelpers::Tile>();
  }
  return result;
}
