/*
 * XREFs of ??Rless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@0@Z @ 0x1800B2230
 * Callers:
 *     ??$_Buffered_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800AFEE0 (--$_Buffered_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 *     ??$_Insertion_sort1@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@V12@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800B0D08 (--$_Insertion_sort1@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@.c)
 *     ??$_Merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PEAV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@0000Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B10B8 (--$_Merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PE.c)
 *     ??$_Merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@V?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@000V10@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B1214 (--$_Merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@V-.c)
 *     ??$_Merge_backward@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PEAV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@0000Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B1448 (--$_Merge_backward@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 * Callees:
 *     <none>
 */

char __fastcall CreativeFramework::TargetedContentLayoutHelpers::less_than_rank::operator()(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  bool v5; // zf
  char v6; // dl

  v3 = *a2;
  v4 = *a3;
  v5 = *(_BYTE *)(*a2 + 16) == 0;
  v6 = *(_BYTE *)(*a3 + 16);
  if ( v5 )
  {
    if ( !v6 )
      return *(_DWORD *)(v3 + 20) < *(_DWORD *)(v4 + 20);
  }
  else if ( v6 )
  {
    return *(double *)(v4 + 24) > *(double *)(v3 + 24);
  }
  return *(_BYTE *)(v3 + 16);
}
