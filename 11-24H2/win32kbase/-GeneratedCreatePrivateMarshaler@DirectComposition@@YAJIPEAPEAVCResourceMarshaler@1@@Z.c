/*
 * XREFs of ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x140194BEC
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140076C18 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear @ 0x140017890 (DirectComposition--Memory--AllocateAndClear.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ @ 0x1400730E8 (--0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073188 (--0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CVisualGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x14022CB90 (--0CVisualGroupMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::GeneratedCreatePrivateMarshaler(
        DirectComposition *this,
        _QWORD *a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // r10
  void **v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  void **v21; // r11
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  DirectComposition::CRegionGeometryMarshaler *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  void *v74; // rax
  __int64 v75; // r8
  DirectComposition::CVisualGroupMarshaler *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // r8
  __int64 v84; // r11
  __int64 v85; // rax

  if ( (unsigned int)this <= 0x88 )
  {
    if ( (_DWORD)this == 136 )
    {
      v44 = Win32AllocPoolWithQuotaZInitImpl((__int64)this, 0x58uLL, 0x6F724344u);
      v9 = (_QWORD *)v44;
      if ( v44 )
      {
        *(_DWORD *)(v44 + 32) = 0;
        *(_QWORD *)(v44 + 48) = 0LL;
        *(_QWORD *)(v44 + 24) = 1LL;
        *(_DWORD *)(v44 + 36) = 136;
        *(_DWORD *)(v44 + 20) = ~(_DWORD)v44 ^ 1;
        v10 = &DirectComposition::CRotateTransformMarshaler::`vftable';
        goto LABEL_135;
      }
      goto LABEL_136;
    }
    if ( (unsigned int)this <= 0x35 )
    {
      if ( (_DWORD)this == 53 )
      {
        v25 = Win32AllocPoolWithQuotaZInitImpl((__int64)this, 0x50uLL, 0x69644344u);
        v9 = (_QWORD *)v25;
        if ( v25 )
        {
          *(_DWORD *)(v25 + 32) = 0;
          *(_QWORD *)(v25 + 48) = 0LL;
          *(_QWORD *)(v25 + 24) = 1LL;
          *(_DWORD *)(v25 + 36) = 53;
          *(_DWORD *)(v25 + 20) = ~(_DWORD)v25 ^ 1;
          v10 = &DirectComposition::CDelegatedInkCanvasMarshaler::`vftable';
          goto LABEL_135;
        }
        goto LABEL_136;
      }
      if ( (unsigned int)this <= 0x13 )
      {
        if ( (_DWORD)this == 19 )
        {
          v15 = DirectComposition::Memory::AllocateAndClear(0x90uLL, 0x71634344u, 1);
          v9 = v15;
          if ( v15 )
          {
            *((_DWORD *)v15 + 8) = 0;
            v15[6] = 0LL;
            v15[3] = 1LL;
            *((_DWORD *)v15 + 9) = 19;
            v15[13] = 0LL;
            *((_DWORD *)v15 + 5) = ~(_DWORD)v15 ^ 1;
            v10 = &DirectComposition::CCaptureControllerMarshaler::`vftable';
            v9[14] = 0LL;
            v9[15] = 0LL;
            goto LABEL_135;
          }
          goto LABEL_136;
        }
        v4 = (unsigned int)((_DWORD)this - 3);
        if ( (_DWORD)v4 )
        {
          v5 = (unsigned int)(v4 - 1);
          if ( !(_DWORD)v5 )
          {
            v13 = Win32AllocPoolWithQuotaZInitImpl(v5, 0x40uLL, 0x63674344u);
            v9 = (_QWORD *)v13;
            if ( v13 )
            {
              *(_DWORD *)(v13 + 32) = 0;
              *(_QWORD *)(v13 + 48) = 0LL;
              *(_QWORD *)(v13 + 24) = 1LL;
              *(_DWORD *)(v13 + 36) = 4;
              *(_DWORD *)(v13 + 20) = ~(_DWORD)v13 ^ 1;
              v10 = &DirectComposition::CAnimationGlobalConfigurationMarshaler::`vftable';
              goto LABEL_135;
            }
            goto LABEL_136;
          }
          v6 = (unsigned int)(v5 - 1);
          if ( (_DWORD)v6 )
          {
            v7 = (unsigned int)(v6 - 2);
            if ( !(_DWORD)v7 )
            {
              v11 = Win32AllocPoolWithQuotaZInitImpl(v7, 0x58uLL, 0x77614344u);
              v9 = (_QWORD *)v11;
              if ( v11 )
              {
                *(_DWORD *)(v11 + 32) = 0;
                *(_QWORD *)(v11 + 48) = 0LL;
                *(_QWORD *)(v11 + 24) = 1LL;
                *(_DWORD *)(v11 + 36) = 7;
                *(_QWORD *)(v11 + 64) = 0LL;
                *(_DWORD *)(v11 + 20) = ~(_DWORD)v11 ^ 1;
                v10 = &DirectComposition::CAtlasedRectsGroupMarshaler::`vftable';
                v9[9] = 0LL;
                v9[10] = 0LL;
                goto LABEL_135;
              }
LABEL_136:
              v9 = 0LL;
              goto LABEL_137;
            }
            if ( (_DWORD)v7 == 1 )
            {
              v8 = Win32AllocPoolWithQuotaZInitImpl(v7, 0x70uLL, 0x30614344u);
              v9 = (_QWORD *)v8;
              if ( v8 )
              {
                *(_DWORD *)(v8 + 32) = 0;
                *(_QWORD *)(v8 + 48) = 0LL;
                *(_QWORD *)(v8 + 24) = 1LL;
                *(_DWORD *)(v8 + 36) = 8;
                *(_QWORD *)(v8 + 64) = 0LL;
                *(_DWORD *)(v8 + 20) = ~(_DWORD)v8 ^ 1;
                v10 = &DirectComposition::CAtlasedRectsMeshMarshaler::`vftable';
                v9[9] = 0LL;
                v9[10] = 0LL;
                v9[11] = 0LL;
                v9[12] = 0LL;
                v9[13] = 0LL;
LABEL_135:
                *v9 = v10;
                goto LABEL_137;
              }
              goto LABEL_136;
            }
            return 3221225485LL;
          }
          v12 = Win32AllocPoolWithQuotaZInitImpl(v6, 0x78uLL, 0x72744344u);
          v9 = (_QWORD *)v12;
          if ( !v12 )
            goto LABEL_136;
          *(_DWORD *)(v12 + 32) = 0;
          *(_QWORD *)(v12 + 48) = 0LL;
          *(_QWORD *)(v12 + 24) = 1LL;
          *(_DWORD *)(v12 + 36) = 5;
          *(_DWORD *)(v12 + 20) = ~(_DWORD)v12 ^ 1;
          v10 = &DirectComposition::CAnimationTriggerMarshaler::`vftable';
LABEL_18:
          v9[10] = 0LL;
          v9[11] = 0LL;
          v9[12] = 0LL;
          goto LABEL_135;
        }
        v14 = Win32AllocPoolWithQuotaZInitImpl(v4, 0x68uLL, 0x68614344u);
        v9 = (_QWORD *)v14;
        if ( !v14 )
          goto LABEL_136;
        *(_DWORD *)(v14 + 32) = 0;
        *(_QWORD *)(v14 + 48) = 0LL;
        *(_QWORD *)(v14 + 24) = 1LL;
        *(_DWORD *)(v14 + 36) = 3;
        *(_DWORD *)(v14 + 20) = ~(_DWORD)v14 ^ 1;
        v10 = &DirectComposition::CAnimationControllerMarshaler::`vftable';
LABEL_23:
        v9[9] = 0LL;
        v9[10] = 0LL;
        v9[11] = 0LL;
        goto LABEL_135;
      }
      v16 = (unsigned int)((_DWORD)this - 34);
      if ( (_DWORD)v16 )
      {
        v17 = (unsigned int)(v16 - 1);
        if ( !(_DWORD)v17 )
        {
          v23 = Win32AllocPoolWithQuotaZInitImpl(v17, 0x60uLL, 0x72674344u);
          v9 = (_QWORD *)v23;
          if ( v23 )
          {
            *(_DWORD *)(v23 + 32) = 0;
            *(_QWORD *)(v23 + 48) = 0LL;
            *(_QWORD *)(v23 + 24) = 1LL;
            *(_DWORD *)(v23 + 36) = 35;
            *(_DWORD *)(v23 + 20) = ~(_DWORD)v23 ^ 1;
            v10 = &DirectComposition::CCompositionGlyphRunMarshaler::`vftable';
            goto LABEL_135;
          }
          goto LABEL_136;
        }
        v18 = (unsigned int)(v17 - 8);
        if ( !(_DWORD)v18 )
        {
          v22 = Win32AllocPoolWithQuotaZInitImpl(v18, 0x60uLL, 0x6C744344u);
          v9 = (_QWORD *)v22;
          if ( v22 )
          {
            *(_DWORD *)(v22 + 32) = 0;
            *(_QWORD *)(v22 + 48) = 0LL;
            *(_QWORD *)(v22 + 24) = 1LL;
            *(_DWORD *)(v22 + 36) = 43;
            *(_DWORD *)(v22 + 20) = ~(_DWORD)v22 ^ 1;
            v10 = &DirectComposition::CCompositionTextLineMarshaler::`vftable';
            goto LABEL_135;
          }
          goto LABEL_136;
        }
        if ( (_DWORD)v18 != 7 )
          return 3221225485LL;
        v19 = Win32AllocPoolWithQuotaZInitImpl(v18, 0x190uLL, 0x79634344u);
        if ( !v19 )
          goto LABEL_136;
        DirectComposition::CVisualMarshaler::CVisualMarshaler(v19, 50LL, v20);
        v21 = &DirectComposition::CCursorVisualMarshaler::`vftable';
        goto LABEL_32;
      }
      v24 = Win32AllocPoolWithQuotaZInitImpl(v16, 0x58uLL, 0x74644344u);
      v9 = (_QWORD *)v24;
      if ( !v24 )
        goto LABEL_136;
      *(_DWORD *)(v24 + 32) = 0;
      *(_QWORD *)(v24 + 48) = 0LL;
      *(_QWORD *)(v24 + 24) = 1LL;
      *(_DWORD *)(v24 + 36) = 34;
      *(_DWORD *)(v24 + 20) = ~(_DWORD)v24 ^ 1;
      v10 = &DirectComposition::CCompositionDynamicTextureMarshaler::`vftable';
LABEL_39:
      v9[7] = 0LL;
      v9[8] = 0LL;
      v9[9] = 0LL;
      goto LABEL_135;
    }
    v26 = (unsigned int)((_DWORD)this - 54);
    if ( !(_DWORD)v26 )
    {
      v43 = Win32AllocPoolWithQuotaZInitImpl(v26, 0x48uLL, 0x65644344u);
      v9 = (_QWORD *)v43;
      if ( v43 )
      {
        *(_DWORD *)(v43 + 32) = 0;
        *(_QWORD *)(v43 + 48) = 0LL;
        *(_QWORD *)(v43 + 24) = 1LL;
        *(_DWORD *)(v43 + 36) = 54;
        *(_DWORD *)(v43 + 20) = ~(_DWORD)v43 ^ 1;
        v10 = &DirectComposition::CDesktopTreeMarshaler::`vftable';
        goto LABEL_135;
      }
      goto LABEL_136;
    }
    v27 = (unsigned int)(v26 - 4);
    if ( !(_DWORD)v27 )
    {
      v42 = Win32AllocPoolWithQuotaZInitImpl(v27, 0x58uLL, 0x67654344u);
      v9 = (_QWORD *)v42;
      if ( v42 )
      {
        *(_DWORD *)(v42 + 32) = 0;
        *(_QWORD *)(v42 + 48) = 0LL;
        *(_QWORD *)(v42 + 24) = 1LL;
        *(_DWORD *)(v42 + 36) = 58;
        *(_DWORD *)(v42 + 20) = ~(_DWORD)v42 ^ 1;
        v10 = &DirectComposition::CEffectGroupMarshaler::`vftable';
        goto LABEL_135;
      }
      goto LABEL_136;
    }
    v28 = (unsigned int)(v27 - 7);
    if ( !(_DWORD)v28 )
    {
      v41 = Win32AllocPoolWithQuotaZInitImpl(v28, 0x70uLL, 0x64674344u);
      v9 = (_QWORD *)v41;
      if ( !v41 )
        goto LABEL_136;
      *(_DWORD *)(v41 + 32) = 0;
      *(_QWORD *)(v41 + 48) = 0LL;
      *(_QWORD *)(v41 + 24) = 1LL;
      *(_DWORD *)(v41 + 36) = 65;
      *(_DWORD *)(v41 + 20) = ~(_DWORD)v41 ^ 1;
      v10 = &DirectComposition::CGdiSpriteBitmapMarshaler::`vftable';
      goto LABEL_39;
    }
    v29 = (unsigned int)(v28 - 4);
    if ( !(_DWORD)v29 )
    {
      v40 = Win32AllocPoolWithQuotaZInitImpl(v29, 0x50uLL, 0x67674344u);
      v9 = (_QWORD *)v40;
      if ( !v40 )
        goto LABEL_136;
      *(_DWORD *)(v40 + 32) = 0;
      *(_QWORD *)(v40 + 48) = 0LL;
      *(_QWORD *)(v40 + 24) = 1LL;
      *(_DWORD *)(v40 + 36) = 69;
      *(_DWORD *)(v40 + 20) = ~(_DWORD)v40 ^ 1;
      v10 = &DirectComposition::CGeometry2DGroupMarshaler::`vftable';
      goto LABEL_39;
    }
    v30 = v29 - 3;
    if ( !v30 )
    {
      v39 = DirectComposition::Memory::AllocateAndClear(0x58uLL, 0x76674344u, 1);
      v9 = v39;
      if ( v39 )
      {
        *((_DWORD *)v39 + 8) = 0;
        v39[6] = 0LL;
        v39[3] = 1LL;
        *((_DWORD *)v39 + 9) = 72;
        *((_DWORD *)v39 + 5) = ~(_DWORD)v39 ^ 1;
        v10 = &DirectComposition::CGlobalDCompVisualMarshaler::`vftable';
        goto LABEL_135;
      }
      goto LABEL_136;
    }
    v31 = (unsigned int)(v30 - 12);
    if ( !(_DWORD)v31 )
    {
      v38 = Win32AllocPoolWithQuotaZInitImpl(v31, 0xB8uLL, 0x62694344u);
      v9 = (_QWORD *)v38;
      if ( v38 )
      {
        *(_DWORD *)(v38 + 32) = 0;
        *(_QWORD *)(v38 + 48) = 0LL;
        *(_QWORD *)(v38 + 24) = 1LL;
        *(_DWORD *)(v38 + 36) = 84;
        *(_DWORD *)(v38 + 20) = ~(_DWORD)v38 ^ 1;
        v10 = &DirectComposition::CImageLegacyMilBrushMarshaler::`vftable';
        goto LABEL_135;
      }
      goto LABEL_136;
    }
    v32 = (unsigned int)(v31 - 16);
    if ( !(_DWORD)v32 )
    {
      v37 = Win32AllocPoolWithQuotaZInitImpl(v32, 0x90uLL, 0x626C4344u);
      v9 = (_QWORD *)v37;
      if ( v37 )
      {
        *(_DWORD *)(v37 + 32) = 0;
        *(_QWORD *)(v37 + 48) = 0LL;
        *(_QWORD *)(v37 + 24) = 1LL;
        *(_DWORD *)(v37 + 36) = 100;
        *(_QWORD *)(v37 + 104) = 0LL;
        *(_DWORD *)(v37 + 20) = ~(_DWORD)v37 ^ 1;
        v10 = &DirectComposition::CLinearGradientLegacyMilBrushMarshaler::`vftable';
        v9[14] = 0LL;
        v9[15] = 0LL;
        goto LABEL_135;
      }
      goto LABEL_136;
    }
    v33 = (unsigned int)(v32 - 11);
    if ( !(_DWORD)v33 )
    {
      v36 = Win32AllocPoolWithQuotaZInitImpl(v33, 0x88uLL, 0x676D4344u);
      v9 = (_QWORD *)v36;
      if ( v36 )
      {
        *(_DWORD *)(v36 + 32) = 0;
        *(_QWORD *)(v36 + 48) = 0LL;
        *(_QWORD *)(v36 + 24) = 1LL;
        *(_DWORD *)(v36 + 36) = 111;
        *(_QWORD *)(v36 + 64) = 0LL;
        *(_DWORD *)(v36 + 20) = ~(_DWORD)v36 ^ 1;
        v10 = &DirectComposition::CMeshGeometry2DMarshaler::`vftable';
        v9[9] = 0LL;
        v9[10] = 0LL;
        v9[11] = 0LL;
        v9[12] = 0LL;
        v9[13] = 0LL;
        v9[14] = 0LL;
        v9[15] = 0LL;
        v9[16] = 0LL;
        goto LABEL_135;
      }
      goto LABEL_136;
    }
    if ( (_DWORD)v33 != 19 )
      return 3221225485LL;
    v34 = (DirectComposition::CRegionGeometryMarshaler *)Win32AllocPoolWithQuotaZInitImpl(v33, 0x78uLL, 0x67724344u);
    if ( !v34 )
      goto LABEL_136;
    v35 = DirectComposition::CRegionGeometryMarshaler::CRegionGeometryMarshaler(v34);
LABEL_53:
    v9 = (_QWORD *)v35;
    goto LABEL_137;
  }
  if ( (unsigned int)this <= 0xA7 )
  {
    if ( (_DWORD)this == 167 )
    {
      v63 = Win32AllocPoolWithQuotaZInitImpl((__int64)this, 0x180uLL, 0x75734344u);
      if ( !v63 )
        goto LABEL_136;
      DirectComposition::CVisualMarshaler::CVisualMarshaler(v63, 167LL, v64);
      v21 = &DirectComposition::CSuperWetInkVisualMarshaler::`vftable';
    }
    else
    {
      if ( (unsigned int)this <= 0x94 )
      {
        if ( (_DWORD)this == 148 )
        {
          v54 = Win32AllocPoolWithQuotaZInitImpl((__int64)this, 0x40uLL, 0x7A7A4344u);
          v9 = (_QWORD *)v54;
          if ( v54 )
          {
            *(_DWORD *)(v54 + 32) = 0;
            *(_QWORD *)(v54 + 48) = 0LL;
            *(_QWORD *)(v54 + 24) = 1LL;
            *(_DWORD *)(v54 + 36) = 148;
            *(_DWORD *)(v54 + 20) = ~(_DWORD)v54 ^ 1;
            v10 = &DirectComposition::CSceneModelTransformMarshaler::`vftable';
            goto LABEL_135;
          }
          goto LABEL_136;
        }
        v45 = (unsigned int)((_DWORD)this - 137);
        if ( !(_DWORD)v45 )
        {
          v53 = Win32AllocPoolWithQuotaZInitImpl(v45, 0x68uLL, 0x33724344u);
          v9 = (_QWORD *)v53;
          if ( v53 )
          {
            *(_DWORD *)(v53 + 32) = 0;
            *(_QWORD *)(v53 + 48) = 0LL;
            *(_QWORD *)(v53 + 24) = 1LL;
            *(_DWORD *)(v53 + 36) = 137;
            *(_DWORD *)(v53 + 20) = ~(_DWORD)v53 ^ 1;
            v10 = &DirectComposition::CRotateTransform3DMarshaler::`vftable';
            goto LABEL_135;
          }
          goto LABEL_136;
        }
        v46 = (unsigned int)(v45 - 3);
        if ( !(_DWORD)v46 )
        {
          v52 = Win32AllocPoolWithQuotaZInitImpl(v46, 0x58uLL, 0x74734344u);
          v9 = (_QWORD *)v52;
          if ( v52 )
          {
            *(_DWORD *)(v52 + 32) = 0;
            *(_QWORD *)(v52 + 48) = 0LL;
            *(_QWORD *)(v52 + 24) = 1LL;
            *(_DWORD *)(v52 + 36) = 140;
            *(_DWORD *)(v52 + 20) = ~(_DWORD)v52 ^ 1;
            v10 = &DirectComposition::CScaleTransformMarshaler::`vftable';
            goto LABEL_135;
          }
          goto LABEL_136;
        }
        v47 = (unsigned int)(v46 - 1);
        if ( !(_DWORD)v47 )
        {
          v51 = Win32AllocPoolWithQuotaZInitImpl(v47, 0x60uLL, 0x33734344u);
          v9 = (_QWORD *)v51;
          if ( v51 )
          {
            *(_DWORD *)(v51 + 32) = 0;
            *(_QWORD *)(v51 + 48) = 0LL;
            *(_QWORD *)(v51 + 24) = 1LL;
            *(_DWORD *)(v51 + 36) = 141;
            *(_DWORD *)(v51 + 20) = ~(_DWORD)v51 ^ 1;
            v10 = &DirectComposition::CScaleTransform3DMarshaler::`vftable';
            goto LABEL_135;
          }
          goto LABEL_136;
        }
        v48 = (unsigned int)(v47 - 4);
        if ( !(_DWORD)v48 )
        {
          v50 = Win32AllocPoolWithQuotaZInitImpl(v48, 0x98uLL, 0x657A4344u);
          v9 = (_QWORD *)v50;
          if ( v50 )
          {
            *(_DWORD *)(v50 + 32) = 0;
            *(_QWORD *)(v50 + 48) = 0LL;
            *(_QWORD *)(v50 + 24) = 1LL;
            *(_DWORD *)(v50 + 36) = 145;
            *(_DWORD *)(v50 + 20) = ~(_DWORD)v50 ^ 1;
            v10 = &DirectComposition::CSceneMeshMarshaler::`vftable';
            goto LABEL_135;
          }
          goto LABEL_136;
        }
        if ( (_DWORD)v48 == 2 )
        {
          v49 = Win32AllocPoolWithQuotaZInitImpl(v48, 0xA8uLL, 0x726D4344u);
          v9 = (_QWORD *)v49;
          if ( v49 )
          {
            *(_DWORD *)(v49 + 32) = 0;
            *(_QWORD *)(v49 + 48) = 0LL;
            *(_QWORD *)(v49 + 24) = 1LL;
            *(_DWORD *)(v49 + 36) = 147;
            *(_DWORD *)(v49 + 20) = ~(_DWORD)v49 ^ 1;
            v10 = &DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::`vftable';
            goto LABEL_135;
          }
          goto LABEL_136;
        }
        return 3221225485LL;
      }
      v55 = (unsigned int)((_DWORD)this - 149);
      if ( !(_DWORD)v55 )
      {
        v62 = Win32AllocPoolWithQuotaZInitImpl(v55, 0x70uLL, 0x747A4344u);
        v9 = (_QWORD *)v62;
        if ( !v62 )
          goto LABEL_136;
        *(_DWORD *)(v62 + 32) = 0;
        *(_QWORD *)(v62 + 48) = 0LL;
        *(_QWORD *)(v62 + 24) = 1LL;
        *(_DWORD *)(v62 + 36) = 149;
        *(_QWORD *)(v62 + 56) = 0LL;
        *(_DWORD *)(v62 + 20) = ~(_DWORD)v62 ^ 1;
        v10 = &DirectComposition::CSceneNodeMarshaler::`vftable';
        v9[8] = 0LL;
        v9[9] = 0LL;
        goto LABEL_18;
      }
      v56 = (unsigned int)(v55 - 5);
      if ( (_DWORD)v56 )
      {
        v57 = (unsigned int)(v56 - 7);
        if ( !(_DWORD)v57 )
        {
          v59 = Win32AllocPoolWithQuotaZInitImpl(v57, 0x58uLL, 0x746B4344u);
          v9 = (_QWORD *)v59;
          if ( v59 )
          {
            *(_DWORD *)(v59 + 32) = 0;
            *(_QWORD *)(v59 + 48) = 0LL;
            *(_QWORD *)(v59 + 24) = 1LL;
            *(_DWORD *)(v59 + 36) = 161;
            *(_DWORD *)(v59 + 20) = ~(_DWORD)v59 ^ 1;
            v10 = &DirectComposition::CSkewTransformMarshaler::`vftable';
            goto LABEL_135;
          }
          goto LABEL_136;
        }
        if ( (_DWORD)v57 == 3 )
        {
          v58 = Win32AllocPoolWithQuotaZInitImpl(v57, 0x68uLL, 0x7A734344u);
          v9 = (_QWORD *)v58;
          if ( v58 )
          {
            *(_DWORD *)(v58 + 32) = 0;
            *(_QWORD *)(v58 + 48) = 0LL;
            *(_QWORD *)(v58 + 24) = 1LL;
            *(_DWORD *)(v58 + 36) = 164;
            *(_DWORD *)(v58 + 20) = ~(_DWORD)v58 ^ 1;
            v10 = &DirectComposition::CSolidColorLegacyMilBrushMarshaler::`vftable';
            goto LABEL_135;
          }
          goto LABEL_136;
        }
        return 3221225485LL;
      }
      v60 = Win32AllocPoolWithQuotaZInitImpl(v56, 0x180uLL, 0x767A4344u);
      if ( !v60 )
        goto LABEL_136;
      DirectComposition::CVisualMarshaler::CVisualMarshaler(v60, 154LL, v61);
      v21 = &DirectComposition::CSceneVisualMarshaler::`vftable';
    }
    goto LABEL_32;
  }
  v65 = (unsigned int)((_DWORD)this - 170);
  if ( !(_DWORD)v65 )
  {
    v85 = Win32AllocPoolWithQuotaZInitImpl(v65, 0x78uLL, 0x79734344u);
    v9 = (_QWORD *)v85;
    if ( v85 )
    {
      *(_DWORD *)(v85 + 32) = 0;
      *(_QWORD *)(v85 + 48) = 0LL;
      *(_QWORD *)(v85 + 24) = 1LL;
      *(_DWORD *)(v85 + 36) = 170;
      *(_DWORD *)(v85 + 20) = ~(_DWORD)v85 ^ 1;
      v10 = &DirectComposition::CSynchronousSuperWetInkMarshaler::`vftable';
      goto LABEL_135;
    }
    goto LABEL_136;
  }
  v66 = (unsigned int)(v65 - 3);
  if ( (_DWORD)v66 )
  {
    v67 = (unsigned int)(v66 - 3);
    if ( !(_DWORD)v67 )
    {
      v81 = Win32AllocPoolWithQuotaZInitImpl(v67, 0x60uLL, 0x33674344u);
      v9 = (_QWORD *)v81;
      if ( !v81 )
        goto LABEL_136;
      *(_DWORD *)(v81 + 32) = 0;
      *(_QWORD *)(v81 + 48) = 0LL;
      *(_QWORD *)(v81 + 24) = 1LL;
      *(_DWORD *)(v81 + 36) = 176;
      *(_DWORD *)(v81 + 20) = ~(_DWORD)v81 ^ 1;
      v10 = &DirectComposition::CTransform3DGroupMarshaler::`vftable';
      goto LABEL_23;
    }
    v68 = (unsigned int)(v67 - 1);
    if ( !(_DWORD)v68 )
    {
      v80 = Win32AllocPoolWithQuotaZInitImpl(v68, 0x60uLL, 0x67744344u);
      v9 = (_QWORD *)v80;
      if ( !v80 )
        goto LABEL_136;
      *(_DWORD *)(v80 + 32) = 0;
      *(_QWORD *)(v80 + 48) = 0LL;
      *(_QWORD *)(v80 + 24) = 1LL;
      *(_DWORD *)(v80 + 36) = 177;
      *(_DWORD *)(v80 + 20) = ~(_DWORD)v80 ^ 1;
      v10 = &DirectComposition::CTransformGroupMarshaler::`vftable';
      goto LABEL_23;
    }
    v69 = (unsigned int)(v68 - 1);
    if ( !(_DWORD)v69 )
    {
      v79 = Win32AllocPoolWithQuotaZInitImpl(v69, 0x50uLL, 0x74744344u);
      v9 = (_QWORD *)v79;
      if ( v79 )
      {
        *(_DWORD *)(v79 + 32) = 0;
        *(_QWORD *)(v79 + 48) = 0LL;
        *(_QWORD *)(v79 + 24) = 1LL;
        *(_DWORD *)(v79 + 36) = 178;
        *(_DWORD *)(v79 + 20) = ~(_DWORD)v79 ^ 1;
        v10 = &DirectComposition::CTranslateTransformMarshaler::`vftable';
        goto LABEL_135;
      }
      goto LABEL_136;
    }
    v70 = (unsigned int)(v69 - 1);
    if ( !(_DWORD)v70 )
    {
      v78 = Win32AllocPoolWithQuotaZInitImpl(v70, 0x58uLL, 0x33744344u);
      v9 = (_QWORD *)v78;
      if ( v78 )
      {
        *(_DWORD *)(v78 + 32) = 0;
        *(_QWORD *)(v78 + 48) = 0LL;
        *(_QWORD *)(v78 + 24) = 1LL;
        *(_DWORD *)(v78 + 36) = 179;
        *(_DWORD *)(v78 + 20) = ~(_DWORD)v78 ^ 1;
        v10 = &DirectComposition::CTranslateTransform3DMarshaler::`vftable';
        goto LABEL_135;
      }
      goto LABEL_136;
    }
    v71 = (unsigned int)(v70 - 6);
    if ( !(_DWORD)v71 )
    {
      v77 = Win32AllocPoolWithQuotaZInitImpl(v71, 0x40uLL, 0x78764344u);
      v9 = (_QWORD *)v77;
      if ( v77 )
      {
        *(_DWORD *)(v77 + 32) = 0;
        *(_QWORD *)(v77 + 48) = 0LL;
        *(_QWORD *)(v77 + 24) = 1LL;
        *(_DWORD *)(v77 + 36) = 185;
        *(_DWORD *)(v77 + 20) = ~(_DWORD)v77 ^ 1;
        v10 = &DirectComposition::CVisualBitmapMarshaler::`vftable';
        goto LABEL_135;
      }
      goto LABEL_136;
    }
    v72 = (unsigned int)(v71 - 2);
    if ( (_DWORD)v72 )
    {
      if ( (_DWORD)v72 != 5 )
        return 3221225485LL;
      v74 = DirectComposition::Memory::AllocateAndClear(0x228uLL, 0x6E774344u, 1);
      if ( !v74 )
        goto LABEL_136;
      DirectComposition::CVisualMarshaler::CVisualMarshaler((__int64)v74, 192LL, v75);
      v21 = &DirectComposition::CWindowNodeMarshaler::`vftable';
LABEL_32:
      *v9 = v21;
      goto LABEL_137;
    }
    v76 = (DirectComposition::CVisualGroupMarshaler *)Win32AllocPoolWithQuotaZInitImpl(v72, 0x50uLL, 0x67764344u);
    if ( !v76 )
      goto LABEL_136;
    v35 = DirectComposition::CVisualGroupMarshaler::CVisualGroupMarshaler(v76);
    goto LABEL_53;
  }
  v82 = Win32AllocPoolWithQuotaZInitImpl(v66, 0x1C0uLL, 0x76744344u);
  if ( !v82 )
    goto LABEL_136;
  DirectComposition::CVisualMarshaler::CVisualMarshaler(v82, 173LL, v83);
  *v9 = &DirectComposition::CTextVisualMarshaler::`vftable';
  v9[47] = v84;
  v9[48] = v84;
  v9[49] = v84;
  v9[50] = v84;
  v9[51] = v84;
  v9[52] = v84;
  v9[53] = v84;
  v9[54] = v84;
  v9[55] = v84;
LABEL_137:
  *a2 = v9;
  return 0LL;
}
