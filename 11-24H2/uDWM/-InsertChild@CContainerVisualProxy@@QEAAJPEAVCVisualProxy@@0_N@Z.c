/*
 * XREFs of ?InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z @ 0x18002639C
 * Callers:
 *     ?CompNodeReconnectChild@VisualCollection@@AEAAJPEAVCVisual@@@Z @ 0x180021CA8 (-CompNodeReconnectChild@VisualCollection@@AEAAJPEAVCVisual@@@Z.c)
 *     ?SendLinkVisualCommand@VisualCollection@@AEAAJPEAVCVisualProxy@@0_N@Z @ 0x180026354 (-SendLinkVisualCommand@VisualCollection@@AEAAJPEAVCVisualProxy@@0_N@Z.c)
 *     ?AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A87E4 (-AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x1800A897C (-Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800B30CC (-_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QE.c)
 *     ?_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@PEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800CE9A4 (-_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENT.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CContainerVisualProxy::InsertChild(
        CContainerVisualProxy *this,
        struct CVisualProxy *a2,
        struct CVisualProxy *a3,
        unsigned __int8 a4)
{
  __int64 v4; // rcx
  unsigned int v5; // r10d
  __int64 v6; // r9

  v4 = *((_QWORD *)this + 3);
  v5 = a4;
  v6 = 0LL;
  if ( a3 )
    v6 = *((_QWORD *)a3 + 3);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v4 + 128LL))(
           v4,
           *((_QWORD *)a2 + 3),
           v5,
           v6);
}
