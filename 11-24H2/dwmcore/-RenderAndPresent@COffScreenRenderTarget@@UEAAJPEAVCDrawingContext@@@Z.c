/*
 * XREFs of ?RenderAndPresent@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180159170
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Render@COffScreenRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801591D0 (-Render@COffScreenRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COffScreenRenderTarget::RenderAndPresent(COffScreenRenderTarget *this, struct CDrawingContext *a2)
{
  char *v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx

  v2 = (char *)this - 96;
  v3 = COffScreenRenderTarget::Render((COffScreenRenderTarget *)((char *)this - 96), a2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x38u, 0LL);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 224LL))(v2);
  return v4;
}
