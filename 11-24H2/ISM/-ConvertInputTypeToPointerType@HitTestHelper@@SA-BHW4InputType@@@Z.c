/*
 * XREFs of ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x18019DC98
 * Callers:
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18014B9D0 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAPEAVBamoDragSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x18014BBE8 (-GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClie.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18014BF4C (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 *     ?HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z @ 0x1801548E8 (-HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z.c)
 *     ?BuildRequestForHitTestInfo@HitTestHelper@@SA?AUHitTestRequest@1@PEAUHitTestInfo@@@Z @ 0x18019DBC8 (-BuildRequestForHitTestInfo@HitTestHelper@@SA-AUHitTestRequest@1@PEAUHitTestInfo@@@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x18019FBD4 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HitTestHelper::ConvertInputTypeToPointerType(int a1)
{
  if ( (a1 & 8) != 0 )
    return 2LL;
  if ( (a1 & 0x1000020) != 0 )
    return 5LL;
  if ( (a1 & 0x10) != 0 )
    return 3LL;
  return (a1 & 2) != 0 ? 4 : 1;
}
