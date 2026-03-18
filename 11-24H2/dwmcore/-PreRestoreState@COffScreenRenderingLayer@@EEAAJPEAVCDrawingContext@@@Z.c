/*
 * XREFs of ?PreRestoreState@COffScreenRenderingLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800FAFE0
 * Callers:
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800FACC0 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderingLayer::PreRestoreState(
        COffScreenRenderingLayer *this,
        struct CDrawingContext *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a2 + 792);
  if ( v2 )
    *((_DWORD *)a2 + 792) = v2 - 1;
  return 0LL;
}
