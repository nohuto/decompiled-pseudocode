/*
 * XREFs of ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800B193C
 * Callers:
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800B193C (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 *     ?SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@1AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@4@@Z @ 0x1800B2658 (-SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV-$vector@V-.c)
 * Callees:
 *     ??$_Insertion_sort1@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@U123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@00@Z @ 0x1800B0BA8 (--$_Insertion_sort1@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@U123@@std@@YAXPEAUT.c)
 *     ??$_Make_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0PEA_J0@Z @ 0x1800B0ED8 (--$_Make_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@.c)
 *     ??$_Pop_heap_0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@U123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@00@Z @ 0x1800B16E4 (--$_Pop_heap_0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@U123@@std@@YAXPEAUTile@T.c)
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800B193C (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 *     ??$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AU?$pair@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800B1D70 (--$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA-AU-$pa.c)
 */

void __fastcall std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v4 = a2;
  v5 = 0x6DB6DB6DB6DB6DB7LL * ((a2 - a1) >> 3);
  v6 = a1;
  if ( v5 <= 32 )
    goto LABEL_12;
  do
  {
    if ( a3 <= 0 )
      break;
    std::_Unguarded_partition<CreativeFramework::TargetedContentLayoutHelpers::Tile *>(&v7, v6, v4);
    a3 = a3 / 2 / 2 + a3 / 2;
    if ( 0x6DB6DB6DB6DB6DB7LL * ((v7 - v6) >> 3) >= 0x6DB6DB6DB6DB6DB7LL * ((v4 - v8) >> 3) )
    {
      std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(v8, v4, a3);
      v4 = v7;
    }
    else
    {
      std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(v6, v7, a3);
      v6 = v8;
    }
    v5 = 0x6DB6DB6DB6DB6DB7LL * ((v4 - v6) >> 3);
  }
  while ( v5 > 32 );
  if ( v5 <= 32 )
  {
LABEL_12:
    if ( v5 > 1 )
      std::_Insertion_sort1<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
        v6,
        v4);
  }
  else if ( 0x6DB6DB6DB6DB6DB7LL * ((v4 - v6) >> 3) > 1 )
  {
    std::_Make_heap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
      v6,
      v4);
    do
    {
      std::_Pop_heap_0<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
        v6,
        v4);
      v4 -= 56LL;
    }
    while ( 0x6DB6DB6DB6DB6DB7LL * ((v4 - v6) >> 3) > 1 );
  }
}
