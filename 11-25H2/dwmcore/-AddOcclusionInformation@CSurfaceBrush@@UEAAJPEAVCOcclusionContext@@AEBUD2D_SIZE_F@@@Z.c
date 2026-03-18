/*
 * XREFs of ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180245D90
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180015130 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008B4A0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x1800D10D0 (-IsEmptyDrawing@CBrush@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18023D960 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 *     ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ @ 0x18023DE28 (-IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x180285A08 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::AddOcclusionInformation(
        CSurfaceBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned __int8 v3; // si
  unsigned int v5; // ebx
  char v8; // r13
  __int64 v9; // rax
  __int64 v10; // r12
  void (__fastcall ***v11)(_QWORD, __int64); // r8
  __int64 v12; // rcx
  FLOAT height; // xmm1_4
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // eax
  CShape *v19; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v20[4]; // [rsp+40h] [rbp-89h] BYREF
  __int128 v21; // [rsp+60h] [rbp-69h]
  __int64 v22; // [rsp+70h] [rbp-59h]
  int v23; // [rsp+78h] [rbp-51h]
  __int64 v24; // [rsp+7Ch] [rbp-4Dh]
  __int128 v25; // [rsp+90h] [rbp-39h] BYREF
  __int128 v26; // [rsp+A0h] [rbp-29h]
  __int64 v27; // [rsp+B0h] [rbp-19h]
  __int128 v28; // [rsp+B8h] [rbp-11h] BYREF
  struct CShape *v29[2]; // [rsp+C8h] [rbp-1h] BYREF
  char v30; // [rsp+D8h] [rbp+Fh]

  v3 = 0;
  v5 = 0;
  if ( CBrush::IsEmptyDrawing(this) )
    return v5;
  if ( a3->width <= 0.0 )
    return v5;
  if ( a3->height <= 0.0 )
    return v5;
  v8 = (*(__int64 (__fastcall **)(_QWORD, CSurfaceBrush *))(**((_QWORD **)this + 17) + 8LL))(
         *((_QWORD *)this + 17),
         this);
  v9 = (*(__int64 (__fastcall **)(_QWORD, CSurfaceBrush *))(**((_QWORD **)this + 17) + 56LL))(
         *((_QWORD *)this + 17),
         this);
  v10 = v9;
  if ( !v8 && !v9 )
    return v5;
  v19 = 0LL;
  v27 = 0LL;
  v29[1] = 0LL;
  v29[0] = (struct CShape *)&v19;
  v30 = 1;
  v25 = 0LL;
  v26 = 0LL;
  v5 = CSurfaceBrush::ComputeLayout(this, a3, (struct CContent::LayoutData *)&v25, &v29[1]);
  if ( v30 )
  {
    v11 = *(void (__fastcall ****)(_QWORD, __int64))v29[0];
    *(_QWORD *)v29[0] = v29[1];
    if ( v11 )
      (**v11)(v11, 1LL);
  }
  if ( v5 == -2003304441 )
  {
    v5 = 0;
    goto LABEL_31;
  }
  if ( (v5 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x1D9u, 0LL);
  }
  else if ( CShape::IsAxisAlignedRectangle(v19) )
  {
    if ( v10 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 296LL))(v10) )
      v3 = 1;
    if ( !v8 )
      goto LABEL_24;
    v12 = *((_QWORD *)this + 17);
    *(_OWORD *)v29 = 0LL;
    v28 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, CSurfaceBrush *, struct CShape **))(*(_QWORD *)v12 + 24LL))(
           v12,
           this,
           v29)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v29[1] + 1) - 1.0) & _xmm) < 0.0000011920929 )
    {
      height = a3->height;
      DWORD2(v28) = LODWORD(a3->width);
      *((FLOAT *)&v28 + 3) = height;
      *(_QWORD *)&v28 = 0LL;
LABEL_21:
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
        v15 = v3;
      else
        v15 = 0LL;
      COcclusionContext::CollectRectangleForOcclusion(a2, &v28, v15, 0LL);
LABEL_24:
      if ( v3 )
      {
        if ( COcclusionContext::IsOverlayCandidateCollectionEnabled(a2) )
        {
          v16 = *((_QWORD *)a2 + 193);
          v24 = 0x28083F800000LL;
          v20[2] = *((_QWORD *)&v25 + 1);
          v20[0] = v25;
          v21 = _xmm;
          v22 = v26;
          v20[1] = 0LL;
          v20[3] = 0LL;
          v23 = 0;
          v17 = COcclusionContext::CheckAndRecordOverlayCandidate((__int64)a2, v16, v10, (__int64)v20, (__int64)v19, 0);
          v5 = v17;
          if ( v17 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x209u, 0LL);
        }
      }
      goto LABEL_31;
    }
    v14 = (*(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(*(_QWORD *)v19 + 48LL))(v19, &v28, 0LL);
    v5 = v14;
    if ( v14 >= 0 )
      goto LABEL_21;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x1F1u, 0LL);
  }
LABEL_31:
  if ( v19 )
    (**(void (__fastcall ***)(CShape *, __int64))v19)(v19, 1LL);
  return v5;
}
