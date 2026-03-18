/*
 * XREFs of ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1401959BC
 * Callers:
 *     ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1400756A8 (-OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CMatrixTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x140071398 (--0CMatrixTransformMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CManipulationTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x140072F1C (--0CManipulationTransformMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x140072F84 (--0CInteractionMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ @ 0x1400730E8 (--0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1400731D0 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CMatrixTransform3DMarshaler@DirectComposition@@QEAA@XZ @ 0x14013E124 (--0CMatrixTransform3DMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CHolographicInteropTextureMarshaler@DirectComposition@@QEAA@XZ @ 0x140154F1C (--0CHolographicInteropTextureMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CVisualGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x14022CB90 (--0CVisualGroupMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::GeneratedCreateSharedWriteMarshaler(
        DirectComposition *this,
        __int64 a2,
        const struct DirectComposition::CSharedSystemResource *a3,
        struct DirectComposition::CResourceMarshaler **a4)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rbx
  void **v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  DirectComposition::CHolographicInteropTextureMarshaler *v17; // rax
  const unsigned __int64 *v18; // rcx
  DirectComposition::CMatrixTransformMarshaler *v19; // rax
  DirectComposition::CManipulationTransformMarshaler *v20; // rax
  __int64 v21; // rax
  DirectComposition::CInteractionMarshaler *v22; // rax
  DirectComposition::CMatrixTransform3DMarshaler *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  DirectComposition::CVisualGroupMarshaler *v35; // rax
  __int64 v36; // rax
  DirectComposition::CVisualMarshaler *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rax
  DirectComposition::CRegionGeometryMarshaler *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax

  if ( (unsigned int)this > 0x6E )
  {
    v24 = (unsigned int)((_DWORD)this - 117);
    if ( !(_DWORD)v24 )
    {
      v43 = Win32AllocPoolWithQuotaZInitImpl(v24, 0x50uLL, 0x30734344u);
      v11 = (_QWORD *)v43;
      if ( v43 )
      {
        *(_DWORD *)(v43 + 32) = 0;
        *(_QWORD *)(v43 + 48) = 0LL;
        *(_QWORD *)(v43 + 24) = 1LL;
        *(_DWORD *)(v43 + 36) = 117;
        *(_QWORD *)(v43 + 72) = a2;
        *(_DWORD *)(v43 + 20) = ~(_DWORD)v43 ^ 1;
        v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CPrimitiveColorMarshaler,2>::`vftable';
        goto LABEL_67;
      }
      goto LABEL_68;
    }
    v25 = (unsigned int)(v24 - 3);
    if ( !(_DWORD)v25 )
    {
      v42 = Win32AllocPoolWithQuotaZInitImpl(v25, 0x70uLL, 0x30734344u);
      v11 = (_QWORD *)v42;
      if ( v42 )
      {
        *(_DWORD *)(v42 + 32) = 0;
        *(_QWORD *)(v42 + 48) = 0LL;
        *(_QWORD *)(v42 + 24) = 1LL;
        *(_DWORD *)(v42 + 36) = 120;
        *(_QWORD *)(v42 + 104) = a2;
        *(_DWORD *)(v42 + 20) = ~(_DWORD)v42 ^ 1;
        v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CProjectedShadowCasterMarshaler,2>::`vftable';
        goto LABEL_67;
      }
      goto LABEL_68;
    }
    v26 = (unsigned int)(v25 - 10);
    if ( !(_DWORD)v26 )
    {
      v41 = (DirectComposition::CRegionGeometryMarshaler *)Win32AllocPoolWithQuotaZInitImpl(v26, 0x80uLL, 0x30734344u);
      v11 = v41;
      if ( !v41 )
        goto LABEL_68;
      DirectComposition::CRegionGeometryMarshaler::CRegionGeometryMarshaler(v41);
      v11[15] = a2;
      *v11 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CRegionGeometryMarshaler,2>::`vftable';
      goto LABEL_69;
    }
    v27 = (unsigned int)(v26 - 1);
    if ( !(_DWORD)v27 )
    {
      v40 = Win32AllocPoolWithQuotaZInitImpl(v27, 0x80uLL, 0x30734344u);
      v11 = (_QWORD *)v40;
      if ( !v40 )
        goto LABEL_68;
      *(_DWORD *)(v40 + 32) = 0;
      *(_QWORD *)(v40 + 48) = 0LL;
      *(_QWORD *)(v40 + 24) = 1LL;
      *(_DWORD *)(v40 + 36) = 131;
      *(_DWORD *)(v40 + 56) = 3;
      *(_DWORD *)(v40 + 20) = ~(_DWORD)v40 ^ 1;
      v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CRemoteAppRenderTargetMarshaler,2>::`vftable';
      goto LABEL_18;
    }
    v28 = (unsigned int)(v27 - 53);
    if ( !(_DWORD)v28 )
    {
      v37 = (DirectComposition::CVisualMarshaler *)Win32AllocPoolWithQuotaZInitImpl(v28, 0x178uLL, 0x30734344u);
      v11 = v37;
      if ( !v37 )
        goto LABEL_68;
      DirectComposition::CVisualMarshaler::CVisualMarshaler(v37, v38, v39);
      v11[46] = a2;
      *v11 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::`vftable';
      goto LABEL_69;
    }
    v29 = (unsigned int)(v28 - 1);
    if ( (_DWORD)v29 )
    {
      v30 = (unsigned int)(v29 - 2);
      if ( !(_DWORD)v30 )
      {
        v35 = (DirectComposition::CVisualGroupMarshaler *)Win32AllocPoolWithQuotaZInitImpl(v30, 0x58uLL, 0x30734344u);
        v11 = v35;
        if ( !v35 )
          goto LABEL_68;
        DirectComposition::CVisualGroupMarshaler::CVisualGroupMarshaler(v35);
        v11[10] = a2;
        *v11 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualGroupMarshaler,2>::`vftable';
        goto LABEL_69;
      }
      v31 = (unsigned int)(v30 - 2);
      if ( (_DWORD)v31 )
      {
        if ( (_DWORD)v31 == 1 )
        {
          v33 = Win32AllocPoolWithQuotaZInitImpl(v31, 0x68uLL, 0x30734344u);
          v11 = (_QWORD *)v33;
          if ( v33 )
          {
            *(_DWORD *)(v33 + 32) = 0;
            *(_QWORD *)(v33 + 48) = 0LL;
            *(_QWORD *)(v33 + 24) = 1LL;
            *(_DWORD *)(v33 + 36) = 190;
            *(_QWORD *)(v33 + 96) = a2;
            *(_DWORD *)(v33 + 20) = ~(_DWORD)v33 ^ 1;
            v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualSurfaceMarshaler,2>::`vftable';
            goto LABEL_67;
          }
          goto LABEL_68;
        }
        return 3221225485LL;
      }
      v34 = Win32AllocPoolWithQuotaZInitImpl(v31, 0x48uLL, 0x30734344u);
      v11 = (_QWORD *)v34;
      if ( !v34 )
        goto LABEL_68;
      *(_DWORD *)(v34 + 32) = 0;
      *(_QWORD *)(v34 + 48) = 0LL;
      *(_QWORD *)(v34 + 24) = 1LL;
      *(_DWORD *)(v34 + 36) = 189;
      *(_DWORD *)(v34 + 20) = ~(_DWORD)v34 ^ 1;
      v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualReferenceControllerMarshaler,2>::`vftable';
    }
    else
    {
      v36 = Win32AllocPoolWithQuotaZInitImpl(v29, 0x48uLL, 0x30734344u);
      v11 = (_QWORD *)v36;
      if ( !v36 )
        goto LABEL_68;
      *(_DWORD *)(v36 + 32) = 0;
      *(_QWORD *)(v36 + 48) = 0LL;
      *(_QWORD *)(v36 + 24) = 1LL;
      *(_DWORD *)(v36 + 36) = 185;
      *(_DWORD *)(v36 + 20) = ~(_DWORD)v36 ^ 1;
      v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualBitmapMarshaler,2>::`vftable';
    }
LABEL_34:
    v11[8] = a2;
    goto LABEL_67;
  }
  if ( (_DWORD)this == 110 )
  {
    v23 = (DirectComposition::CMatrixTransform3DMarshaler *)Win32AllocPoolWithQuotaZInitImpl(
                                                              (__int64)this,
                                                              0x90uLL,
                                                              0x30734344u);
    v11 = v23;
    if ( !v23 )
      goto LABEL_68;
    DirectComposition::CMatrixTransform3DMarshaler::CMatrixTransform3DMarshaler(v23);
    v11[17] = a2;
    *v11 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CMatrixTransform3DMarshaler,2>::`vftable';
    goto LABEL_69;
  }
  if ( (unsigned int)this <= 0x50 )
  {
    if ( (_DWORD)this != 80 )
    {
      v6 = (unsigned int)((_DWORD)this - 19);
      if ( !(_DWORD)v6 )
      {
        v16 = Win32AllocPoolWithQuotaZInitImpl(v6, 0x98uLL, 0x30734344u);
        v11 = (_QWORD *)v16;
        if ( v16 )
        {
          *(_DWORD *)(v16 + 32) = 0;
          *(_QWORD *)(v16 + 48) = 0LL;
          *(_QWORD *)(v16 + 104) = 0LL;
          *(_QWORD *)(v16 + 112) = 0LL;
          *(_QWORD *)(v16 + 24) = 1LL;
          *(_DWORD *)(v16 + 36) = 19;
          *(_QWORD *)(v16 + 144) = a2;
          *(_QWORD *)(v16 + 120) = 0LL;
          *(_DWORD *)(v16 + 20) = ~(_DWORD)v16 ^ 1;
          v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCaptureControllerMarshaler,2>::`vftable';
          goto LABEL_67;
        }
        goto LABEL_68;
      }
      v7 = (unsigned int)(v6 - 13);
      if ( (_DWORD)v7 )
      {
        v8 = (unsigned int)(v7 - 1);
        if ( !(_DWORD)v8 )
        {
          v14 = Win32AllocPoolWithQuotaZInitImpl(v8, 0x90uLL, 0x30734344u);
          v11 = (_QWORD *)v14;
          if ( v14 )
          {
            *(_DWORD *)(v14 + 32) = 0;
            *(_QWORD *)(v14 + 48) = 0LL;
            *(_QWORD *)(v14 + 24) = 1LL;
            *(_DWORD *)(v14 + 36) = 33;
            *(_QWORD *)(v14 + 136) = a2;
            *(_DWORD *)(v14 + 20) = ~(_DWORD)v14 ^ 1;
            v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionDistantLightMarshaler,2>::`vftable';
            goto LABEL_67;
          }
          goto LABEL_68;
        }
        v9 = (unsigned int)(v8 - 6);
        if ( !(_DWORD)v9 )
        {
          v13 = Win32AllocPoolWithQuotaZInitImpl(v9, 0xA8uLL, 0x30734344u);
          v11 = (_QWORD *)v13;
          if ( v13 )
          {
            *(_DWORD *)(v13 + 32) = 0;
            *(_QWORD *)(v13 + 48) = 0LL;
            *(_QWORD *)(v13 + 24) = 1LL;
            *(_DWORD *)(v13 + 36) = 39;
            *(_QWORD *)(v13 + 160) = a2;
            *(_DWORD *)(v13 + 20) = ~(_DWORD)v13 ^ 1;
            v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionPointLightMarshaler,2>::`vftable';
            goto LABEL_67;
          }
LABEL_68:
          v11 = 0LL;
          goto LABEL_69;
        }
        if ( (_DWORD)v9 == 2 )
        {
          v10 = Win32AllocPoolWithQuotaZInitImpl(v9, 0xD0uLL, 0x30734344u);
          v11 = (_QWORD *)v10;
          if ( v10 )
          {
            *(_DWORD *)(v10 + 32) = 0;
            *(_QWORD *)(v10 + 48) = 0LL;
            *(_QWORD *)(v10 + 24) = 1LL;
            *(_DWORD *)(v10 + 20) = ~(_DWORD)v10 ^ 1;
            *(_DWORD *)(v10 + 36) = 41;
            v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionSpotLightMarshaler,2>::`vftable';
            v11[25] = a2;
LABEL_67:
            *v11 = v12;
            goto LABEL_69;
          }
          goto LABEL_68;
        }
        return 3221225485LL;
      }
      v15 = Win32AllocPoolWithQuotaZInitImpl(v7, 0x80uLL, 0x30734344u);
      v11 = (_QWORD *)v15;
      if ( !v15 )
        goto LABEL_68;
      *(_DWORD *)(v15 + 32) = 0;
      *(_QWORD *)(v15 + 48) = 0LL;
      *(_QWORD *)(v15 + 24) = 1LL;
      *(_DWORD *)(v15 + 36) = 32;
      *(_DWORD *)(v15 + 20) = ~(_DWORD)v15 ^ 1;
      v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionAmbientLightMarshaler,2>::`vftable';
LABEL_18:
      v11[15] = a2;
      goto LABEL_67;
    }
    v17 = (DirectComposition::CHolographicInteropTextureMarshaler *)Win32AllocPoolWithQuotaZInitImpl(
                                                                      (__int64)this,
                                                                      0x68uLL,
                                                                      0x30734344u);
    v11 = v17;
    if ( !v17 )
      goto LABEL_68;
    DirectComposition::CHolographicInteropTextureMarshaler::CHolographicInteropTextureMarshaler(v17);
    v18 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CHolographicInteropTextureMarshaler,2>::`vftable';
    goto LABEL_23;
  }
  if ( (_DWORD)this == 89 )
  {
    v22 = (DirectComposition::CInteractionMarshaler *)Win32AllocPoolWithQuotaZInitImpl(
                                                        (__int64)this,
                                                        0x158uLL,
                                                        0x30734344u);
    v11 = v22;
    if ( !v22 )
      goto LABEL_68;
    DirectComposition::CInteractionMarshaler::CInteractionMarshaler(v22);
    v11[42] = a2;
    *v11 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CInteractionMarshaler,2>::`vftable';
    goto LABEL_69;
  }
  if ( (_DWORD)this == 94 )
  {
    v21 = Win32AllocPoolWithQuotaZInitImpl((__int64)this, 0x48uLL, 0x30734344u);
    v11 = (_QWORD *)v21;
    if ( !v21 )
      goto LABEL_68;
    *(_DWORD *)(v21 + 32) = 0;
    *(_QWORD *)(v21 + 48) = 0LL;
    *(_QWORD *)(v21 + 24) = 1LL;
    *(_DWORD *)(v21 + 36) = 94;
    *(_DWORD *)(v21 + 20) = ~(_DWORD)v21 ^ 1;
    v12 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CLegacyAnimationTriggerMarshaler,2>::`vftable';
    goto LABEL_34;
  }
  if ( (_DWORD)this != 106 )
  {
    if ( (_DWORD)this != 109 )
      return 3221225485LL;
    v19 = (DirectComposition::CMatrixTransformMarshaler *)Win32AllocPoolWithQuotaZInitImpl(
                                                            (__int64)this,
                                                            0x68uLL,
                                                            0x30734344u);
    v11 = v19;
    if ( !v19 )
      goto LABEL_68;
    DirectComposition::CMatrixTransformMarshaler::CMatrixTransformMarshaler(v19);
    v18 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CMatrixTransformMarshaler,2>::`vftable';
LABEL_23:
    *v11 = v18;
    v11[12] = a2;
    goto LABEL_69;
  }
  v20 = (DirectComposition::CManipulationTransformMarshaler *)Win32AllocPoolWithQuotaZInitImpl(
                                                                (__int64)this,
                                                                0x88uLL,
                                                                0x30734344u);
  v11 = v20;
  if ( !v20 )
    goto LABEL_68;
  DirectComposition::CManipulationTransformMarshaler::CManipulationTransformMarshaler(v20);
  v11[16] = a2;
  *v11 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CManipulationTransformMarshaler,2>::`vftable';
LABEL_69:
  *(_QWORD *)a3 = v11;
  return 0LL;
}
