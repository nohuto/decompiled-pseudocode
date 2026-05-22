/*
 * XREFs of ??$make_unique@VDragGestureTracker@@_N$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@$$QEA_N@Z @ 0x18014A1D4
 * Callers:
 *     ?SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z @ 0x18014D870 (-SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18014DD44 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x18014E1B8 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 *     ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x1801522C0 (-StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z.c)
 *     ?StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBamoManualResizeAreaClientProxy@@@Z @ 0x180152448 (-StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBam.c)
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1801526F4 (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ??0EdgyRecognizer@@QEAA@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x180155D94 (--0EdgyRecognizer@@QEAA@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ?ResetAndInitializeInteractionContext@DragGestureTracker@@QEAAJXZ @ 0x1801A0B10 (-ResetAndInitializeInteractionContext@DragGestureTracker@@QEAAJXZ.c)
 */

DragGestureTracker **__fastcall std::make_unique<DragGestureTracker,bool,0>(DragGestureTracker **a1, char *a2)
{
  DragGestureTracker *v4; // rax
  char v5; // dl
  DragGestureTracker *v6; // rdi
  int InteractionContext; // eax
  DragGestureTracker **result; // rax
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (DragGestureTracker *)operator new(0x18uLL);
  v5 = *a2;
  v6 = v4;
  *(_DWORD *)v4 = 0;
  *((_QWORD *)v4 + 2) = 0LL;
  *((_DWORD *)v4 + 1) = 0;
  *((_DWORD *)v4 + 2) = 0;
  if ( v5 )
  {
    InteractionContext = CreateInteractionContext();
    if ( InteractionContext < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\pointermanipulationtracker\\draggesturetracker.cpp",
        (const char *)(unsigned int)InteractionContext,
        v9);
    DragGestureTracker::ResetAndInitializeInteractionContext(v6);
  }
  result = a1;
  *a1 = v6;
  return result;
}
