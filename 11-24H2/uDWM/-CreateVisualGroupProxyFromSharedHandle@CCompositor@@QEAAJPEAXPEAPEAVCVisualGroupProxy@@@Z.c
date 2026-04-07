/*
 * XREFs of ?CreateVisualGroupProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualGroupProxy@@@Z @ 0x1800B6240
 * Callers:
 *     ?BuildCaptureWindowVisualExclusionList@CCaptureManager@@UEAAJPEAXAEBV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1800AD5A0 (-BuildCaptureWindowVisualExclusionList@CCaptureManager@@UEAAJPEAXAEBV-$vector@PEAUHWND__@@V-$all.c)
 *     ?BuildCaptureWindowVisualExclusionList@CProjectionBorderManager@@UEAAJPEAXAEBV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1800CB8B0 (-BuildCaptureWindowVisualExclusionList@CProjectionBorderManager@@UEAAJPEAXAEBV-$vector@PEAUHWND_.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateVisualGroupProxyFromSharedHandle(
        __int64 this,
        void *a2,
        struct CVisualGroupProxy **a3)
{
  return CCompositor::CreateProxyFromSharedHandle<CVisualGroupProxy>(this, a2, a3);
}
