/*
 * XREFs of ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x1801655C4
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18016865C (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x1801653CC (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 *     ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z @ 0x1801657A0 (--0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z.c)
 *     ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x180166FC0 (-Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

bool __fastcall CProjectedShadowScene::IsCasterInBetweenLightAndReceiver(
        CProjectedShadowScene *this,
        const struct CVisualTree *a2,
        const struct CProjectedShadowScene::CasterEntry *a3,
        const struct CProjectedShadowScene::ReceiverEntry *a4,
        unsigned int a5)
{
  __int64 v5; // rax
  __int64 v8; // rcx
  float v9; // xmm0_4
  float v10; // xmm1_4
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  CDirtyRegionAnnotation *v15; // rbx
  __int64 v16; // rdi
  _DWORD v18[14]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+68h] [rbp-A0h]
  int v20; // [rsp+78h] [rbp-90h]
  _OWORD v21[4]; // [rsp+88h] [rbp-80h] BYREF
  int v22; // [rsp+C8h] [rbp-40h]
  _OWORD v23[4]; // [rsp+D8h] [rbp-30h] BYREF
  int v24; // [rsp+118h] [rbp+10h]
  _BYTE v25[32]; // [rsp+128h] [rbp+20h] BYREF
  int v26; // [rsp+148h] [rbp+40h]
  char v27; // [rsp+17Ch] [rbp+74h] BYREF
  _BYTE v28[32]; // [rsp+1D8h] [rbp+D0h] BYREF
  int v29; // [rsp+1F8h] [rbp+F0h]

  v5 = *(_QWORD *)a3;
  v20 = 0;
  v8 = *(_QWORD *)(v5 + 72);
  v9 = (float)(*(float *)&a5 + *(float *)&a5) + *(float *)(v8 + 144);
  v10 = (float)(*(float *)&a5 + *(float *)&a5) + *(float *)(v8 + 148);
  LODWORD(v19) = a5 ^ _xmm;
  LODWORD(v5) = *((_DWORD *)a4 + 24);
  *(float *)v18 = v9;
  v11 = *((_OWORD *)a4 + 2);
  HIDWORD(v19) = 1065353216;
  *(float *)&v18[1] = v10;
  v12 = *((_OWORD *)a4 + 3);
  LOWORD(v20) = 10664;
  v21[0] = v11;
  v13 = *((_OWORD *)a4 + 4);
  v22 = v5;
  v21[1] = v12;
  v14 = *((_OWORD *)a4 + 5);
  v21[2] = v13;
  *(_QWORD *)((char *)&v19 + 4) = a5 ^ (unsigned __int64)(unsigned int)_xmm;
  v21[3] = v14;
  CMILMatrix::Multiply((CMILMatrix *)v21, (const struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84));
  v23[3] = v19;
  v23[0] = _xmm;
  v23[1] = _xmm;
  v23[2] = _xmm;
  v24 = 10664;
  CMILMatrix::Multiply((CMILMatrix *)v23, (const struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 16));
  CVisualDepthGeometry::CVisualDepthGeometry(
    (CVisualDepthGeometry *)v28,
    *(struct CVisual **)(*(_QWORD *)a4 + 72LL),
    (const struct CMILMatrix *)v21);
  v15 = (CDirtyRegionAnnotation *)&v27;
  v16 = 4LL;
  do
  {
    --v16;
    if ( Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v15);
    v15 = (CDirtyRegionAnnotation *)((char *)v15 + 16);
  }
  while ( v16 );
  CVisualDepthGeometry::Init(
    (CVisualDepthGeometry *)v25,
    (const struct Windows::Foundation::Numerics::float2 *)v18,
    (const struct CMILMatrix *)v23);
  v29 = 2;
  v26 = 1;
  return (unsigned int)CVisualDepthGeometry::GetRelativeOrder((__int64)v25, (__int64)v28) == 0;
}
