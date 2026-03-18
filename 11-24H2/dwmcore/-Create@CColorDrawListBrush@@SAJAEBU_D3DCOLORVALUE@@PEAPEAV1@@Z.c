/*
 * XREFs of ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x180172BF0
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18001A9F4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18006C70C (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@CObjectCache@@QEAAPEAX_K@Z @ 0x180170C50 (-Alloc@CObjectCache@@QEAAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z @ 0x180172C8C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z.c)
 */

__int64 __fastcall CColorDrawListBrush::Create(struct _D3DCOLORVALUE *a1, struct CColorDrawListBrush **a2)
{
  unsigned int v4; // ebx
  CObjectCache *ObjectCache; // rax
  _QWORD *v6; // rax

  v4 = 0;
  ObjectCache = CThreadContext::GetObjectCache((struct CColorDrawListBrush *)a1);
  v6 = CObjectCache::Alloc(ObjectCache, 0x48uLL);
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = 1065353216;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 4) = 0;
    *((_DWORD *)v6 + 5) = 1065353216;
    *((_DWORD *)v6 + 6) = 0;
    *((_DWORD *)v6 + 7) = 0;
    *((_BYTE *)v6 + 52) = 0;
    *v6 = &CColorDrawListBrush::`vftable';
    *(struct _D3DCOLORVALUE *)(v6 + 7) = *(struct _D3DCOLORVALUE *)&a1->r;
    *a2 = (struct CColorDrawListBrush *)v6;
  }
  else
  {
    *a2 = 0LL;
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x29u, 0LL);
  }
  return v4;
}
