/*
 * XREFs of ?IsUVClampingRequired@CCustomKernelEffect@@UEBA_NIIPEAW4SampleEdgeMode@Composition@UI@Windows@@0@Z @ 0x18006E570
 * Callers:
 *     ?IsUVClampingRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAW4Enum@ExtendMode@@0@Z @ 0x18006E32C (-IsUVClampingRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAW4Enum@ExtendMode@@0@Z.c)
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x18006E408 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 * Callees:
 *     <none>
 */

char __fastcall CCustomKernelEffect::IsUVClampingRequired(
        CCustomKernelEffect *this,
        __int64 a2,
        __int64 a3,
        enum Windows::UI::Composition::SampleEdgeMode *a4,
        enum Windows::UI::Composition::SampleEdgeMode *a5)
{
  int v5; // eax

  v5 = *((unsigned __int8 *)this + 228);
  if ( !(_BYTE)v5 )
    return 0;
  if ( v5 == 1 )
  {
    if ( a4 )
      *(_BYTE *)a4 = 1;
    if ( a5 )
      *(_BYTE *)a5 = 1;
  }
  else if ( v5 == 3 )
  {
    if ( a4 )
      *(_BYTE *)a4 = 3;
    if ( a5 )
      *(_BYTE *)a5 = 3;
  }
  return 1;
}
