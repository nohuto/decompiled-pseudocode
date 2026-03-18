/*
 * XREFs of ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18023FB60
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A1E00 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18010255C (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18023D960 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 *     ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ @ 0x18023DE28 (-IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x180285A08 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddOcclusionInformation(
        CCompositionSurfaceBitmap *this,
        struct COcclusionContext *a2,
        struct D2D_SIZE_F *a3)
{
  __int64 (__fastcall *v6)(CCompositionSurfaceBitmap *, struct D2D_SIZE_F *, __int128 *); // rax
  int v7; // eax
  unsigned int v8; // ebx
  unsigned __int8 v9; // al
  __int64 v10; // rax
  __int64 (__fastcall *v11)(char *, __int64 *); // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-69h] BYREF
  __int64 v17; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v18[64]; // [rsp+40h] [rbp-59h] BYREF
  int v19; // [rsp+80h] [rbp-19h]
  __int128 v20; // [rsp+90h] [rbp-9h] BYREF
  __int128 v21; // [rsp+A0h] [rbp+7h] BYREF

  v6 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, struct D2D_SIZE_F *, __int128 *))(*(_QWORD *)this + 184LL);
  v20 = 0LL;
  v7 = v6(this, a3, &v20);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x98u, 0LL);
  }
  else if ( *((float *)&v20 + 2) > *(float *)&v20
         && *((float *)&v20 + 3) > *((float *)&v20 + 1)
         && (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 9) + 32LL))((char *)this + 72) )
  {
    v9 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl)
       ? CCompositionSurfaceBitmap::IsSwapChain(this)
       : 0;
    COcclusionContext::CollectRectangleForOcclusion(a2, &v20, v9, 0LL);
    if ( COcclusionContext::IsOverlayCandidateCollectionEnabled(a2) )
    {
      if ( CCompositionSurfaceBitmap::IsSwapChain(this) )
      {
        v10 = *((_QWORD *)this + 9);
        v16 = 0LL;
        v19 = 0;
        v11 = *(__int64 (__fastcall **)(char *, __int64 *))(v10 + 64);
        v21 = 0LL;
        v17 = 0LL;
        v12 = v11((char *)this + 72, &v17);
        v8 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xAFu, 0LL);
        }
        else
        {
          v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v17)(
                  v17,
                  &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c,
                  &v16);
          v8 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0xB1u, 0LL);
          }
          else
          {
            CCompositionSurfaceBitmap::CalcImageTransform(this, (float *)a3, (__int64)v18, &v21);
            v14 = COcclusionContext::CheckAndRecordOverlayCandidate(
                    (__int64)a2,
                    *((_QWORD *)a2 + 193),
                    *((_QWORD *)this + 12),
                    (__int64)v18,
                    0LL,
                    0);
            v8 = v14;
            if ( v14 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xB7u, 0LL);
          }
        }
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  return v8;
}
