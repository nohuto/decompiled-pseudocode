/*
 * XREFs of ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z @ 0x1801657A0
 * Callers:
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x1801655C4 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x180166FC0 (-Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 */

CVisualDepthGeometry *__fastcall CVisualDepthGeometry::CVisualDepthGeometry(
        CVisualDepthGeometry *this,
        struct CVisual *a2,
        const struct CMILMatrix *a3)
{
  CDirtyRegionAnnotation *v5; // rbx
  __int64 v6; // rdi
  int v7; // xmm1_4
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  *(_QWORD *)this = a2;
  v5 = (CVisualDepthGeometry *)((char *)this + 84);
  v6 = 4LL;
  do
  {
    --v6;
    if ( Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v5);
    v5 = (CDirtyRegionAnnotation *)((char *)v5 + 16);
  }
  while ( v6 );
  v7 = *(_DWORD *)(*(_QWORD *)this + 148LL);
  v9 = *(_DWORD *)(*(_QWORD *)this + 144LL);
  v10 = v7;
  CVisualDepthGeometry::Init(this, (const struct Windows::Foundation::Numerics::float2 *)&v9, a3);
  return this;
}
