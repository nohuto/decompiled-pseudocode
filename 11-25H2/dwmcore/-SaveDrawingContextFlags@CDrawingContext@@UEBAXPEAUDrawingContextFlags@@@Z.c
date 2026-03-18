/*
 * XREFs of ?SaveDrawingContextFlags@CDrawingContext@@UEBAXPEAUDrawingContextFlags@@@Z @ 0x1801E05C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::SaveDrawingContextFlags(CDrawingContext *this, struct DrawingContextFlags *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 1989);
  *((_BYTE *)a2 + 4) = *((_BYTE *)this + 7960);
}
