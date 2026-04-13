/*
 * XREFs of ??MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z @ 0x1800B1EDC
 * Callers:
 *     ??$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J1$$QEAU123@@Z @ 0x1800AFAC4 (--$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTil.c)
 *     ??$_Insertion_sort1@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@U123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@00@Z @ 0x1800B0888 (--$_Insertion_sort1@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@U123@@std@@YAXPEAUT.c)
 *     ??$_Med3@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@00@Z @ 0x1800B0C6C (--$_Med3@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAUTile@TargetedCont.c)
 *     ??$_Push_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J1$$QEAU123@@Z @ 0x1800B1478 (--$_Push_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@.c)
 *     ??$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AU?$pair@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800B1A50 (--$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA-AU-$pa.c)
 * Callees:
 *     <none>
 */

bool __fastcall CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(__int64 a1, __int64 a2)
{
  double v2; // xmm0_8
  double v3; // xmm1_8

  v2 = *(double *)(a1 + 32);
  v3 = *(double *)(a2 + 32);
  return v3 > v2 || v2 == v3 && *(double *)(a2 + 40) > *(double *)(a1 + 40);
}
