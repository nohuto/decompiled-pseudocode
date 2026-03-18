/*
 * XREFs of ?RenderLayer@COffScreenRenderingLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801619A0
 * Callers:
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180160F10 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COffScreenRenderingLayer::RenderLayer(COffScreenRenderingLayer *this, struct CDrawingContext *a2)
{
  __int64 v4; // rax

  if ( g_LockAndReadLayer )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v4 + 112LL))(
      v4,
      ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  }
  return 0LL;
}
