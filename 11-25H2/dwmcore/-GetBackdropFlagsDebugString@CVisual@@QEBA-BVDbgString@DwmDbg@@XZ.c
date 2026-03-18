/*
 * XREFs of ?GetBackdropFlagsDebugString@CVisual@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x1802B89DC
 * Callers:
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x18025851C (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 */

char **__fastcall CVisual::GetBackdropFlagsDebugString(__int64 a1, char **a2)
{
  DwmDbg::DbgString::DbgString(
    a2,
    "BackdropsInSubgraph=%d, WindowBackdropsInSubgraph=%d, HasBackdropInput=%d, HasWindowBackdropInput=%d, HasBlurredWall"
    "paperBackdropInput=%d",
    *(_DWORD *)(a1 + 264),
    *(_DWORD *)(a1 + 268),
    *(_BYTE *)(a1 + 107) & 1,
    (*(unsigned __int8 *)(a1 + 107) >> 2) & 1,
    (*(unsigned __int8 *)(a1 + 107) >> 1) & 1);
  return a2;
}
