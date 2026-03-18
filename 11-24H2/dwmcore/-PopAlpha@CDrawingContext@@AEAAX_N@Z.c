/*
 * XREFs of ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x1801D6DCC
 * Callers:
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FBE20 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::PopAlpha(CDrawingContext *this, char a2)
{
  int v2; // eax
  int v3; // eax

  if ( a2 )
  {
    v2 = *((_DWORD *)this + 68);
    if ( v2 )
      *((_DWORD *)this + 68) = v2 - 1;
  }
  v3 = *((_DWORD *)this + 792);
  if ( v3 )
    *((_DWORD *)this + 792) = v3 - 1;
}
