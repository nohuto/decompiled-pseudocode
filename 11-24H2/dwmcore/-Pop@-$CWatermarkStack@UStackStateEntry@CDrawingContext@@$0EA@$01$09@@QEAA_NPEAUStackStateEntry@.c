/*
 * XREFs of ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1801A02B0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F94F0 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_R.c)
 * Callees:
 *     <none>
 */

char __fastcall CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(__int64 a1, _OWORD *a2)
{
  int v2; // eax
  unsigned int v3; // eax

  v2 = *(_DWORD *)(a1 + 8);
  if ( !v2 )
    return 0;
  v3 = v2 - 1;
  *(_DWORD *)(a1 + 8) = v3;
  if ( a2 )
    *a2 = *(_OWORD *)(*(_QWORD *)a1 + 16LL * v3);
  return 1;
}
