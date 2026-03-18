/*
 * XREFs of ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x18006CC04
 * Callers:
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18006C5CC (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x18006CBB8 (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CBrushRenderingGraph *__fastcall CBrush::GetBrushGraph(CBrush *this, __int64 a2)
{
  if ( *((_BYTE *)this + 96) && !*((_QWORD *)this + 10) )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(CBrush *, __int64))(*(_QWORD *)this + 344LL))(this, a2);
  }
  return (struct CBrushRenderingGraph *)*((_QWORD *)this + 10);
}
