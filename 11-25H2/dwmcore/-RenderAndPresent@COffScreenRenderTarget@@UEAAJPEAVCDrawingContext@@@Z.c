/*
 * XREFs of ?RenderAndPresent@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C42C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Render@COffScreenRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C4320 (-Render@COffScreenRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x38u, 0LL);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 224LL))(v2);
  return v4;
}
