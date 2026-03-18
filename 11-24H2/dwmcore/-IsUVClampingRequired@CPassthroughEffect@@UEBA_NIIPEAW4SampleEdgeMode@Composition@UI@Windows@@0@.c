/*
 * XREFs of ?IsUVClampingRequired@CPassthroughEffect@@UEBA_NIIPEAW4SampleEdgeMode@Composition@UI@Windows@@0@Z @ 0x180044900
 * Callers:
 *     ?IsUVClampingRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAW4Enum@ExtendMode@@0@Z @ 0x1800446DC (-IsUVClampingRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAW4Enum@ExtendMode@@0@Z.c)
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x1800447B8 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 * Callees:
 *     <none>
 */

char __fastcall CPassthroughEffect::IsUVClampingRequired(
        CPassthroughEffect *this,
        __int64 a2,
        __int64 a3,
        enum Windows::UI::Composition::SampleEdgeMode *a4,
        enum Windows::UI::Composition::SampleEdgeMode *a5)
{
  if ( a4 )
    *(_BYTE *)a4 = 1;
  if ( a5 )
    *(_BYTE *)a5 = 1;
  return 1;
}
