/*
 * XREFs of ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140076C18
 * Callers:
 *     ?CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x14007611C (-CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1400768D8 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear @ 0x140017890 (DirectComposition--Memory--AllocateAndClear.c)
 *     ??0CMatrixTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x140071398 (--0CMatrixTransformMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CManipulationTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x140072F1C (--0CManipulationTransformMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x140072F84 (--0CInteractionMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CGradientBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073038 (--0CGradientBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073188 (--0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1400731D0 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14007321C (--0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CBaseAnimationMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140129180 (--0CBaseAnimationMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CFilterEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14013934C (--0CFilterEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CMatrixTransform3DMarshaler@DirectComposition@@QEAA@XZ @ 0x14013E124 (--0CMatrixTransform3DMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ @ 0x14014849C (--0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CHolographicInteropTextureMarshaler@DirectComposition@@QEAA@XZ @ 0x140154F1C (--0CHolographicInteropTextureMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x140194BEC (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreatePrivateMarshaler(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  int PrivateMarshaler; // r14d
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  void **v9; // rax
  _DWORD *v10; // rax
  void **v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _DWORD *v17; // rax
  _DWORD *v18; // rax
  bool v19; // zf
  _DWORD *v20; // rax
  _DWORD *v21; // rax
  _DWORD *v22; // rax
  _QWORD *v23; // rax
  bool v24; // zf
  unsigned int v25; // eax
  _DWORD *v26; // rax
  _DWORD *v27; // rax
  _DWORD *v28; // rax
  _DWORD *v29; // rax
  _DWORD *v30; // rax
  _DWORD *v31; // rax
  _DWORD *v32; // rax
  _DWORD *v33; // rax
  _DWORD *v34; // rax
  _DWORD *v35; // rax
  __int64 v36; // rsi
  _DWORD *v37; // rax
  _DWORD *v38; // rax
  _QWORD *v39; // rax
  _DWORD *v40; // rax
  _DWORD *v41; // rax
  _DWORD *v42; // rax
  _DWORD *v43; // rax
  _DWORD *v44; // rax
  _QWORD *v45; // rax
  _DWORD *v46; // rax
  _DWORD *v47; // rax
  _DWORD *v48; // rax
  _DWORD *v49; // rax
  _QWORD *v50; // rax
  _DWORD *v51; // rax
  _DWORD *v52; // rax
  _DWORD *v53; // rax
  _DWORD *v54; // rax
  _DWORD *v55; // rax
  _DWORD *v56; // rax
  _DWORD *v57; // rax
  _DWORD *v58; // rax
  _DWORD *v59; // rax
  char *v60; // rax
  DirectComposition::CHolographicInteropTextureMarshaler *v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  _DWORD *v64; // rax
  DirectComposition::CInteractionTrackerMarshaler *v65; // rax
  DirectComposition::CInteractionMarshaler *v66; // rax
  _QWORD *v67; // rax
  _DWORD *v68; // rax
  _QWORD *v69; // rax
  _DWORD *v70; // rax
  _DWORD *v71; // rax
  _DWORD *v72; // rax
  _DWORD *v73; // rax
  __int64 v74; // r8
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  _DWORD *v77; // rax
  _DWORD *v78; // rax
  _QWORD *v79; // rax
  LARGE_INTEGER *v80; // rax
  DirectComposition::CMatrixTransform3DMarshaler *v81; // rax
  DirectComposition::CMatrixTransformMarshaler *v82; // rax
  _DWORD *v83; // rax
  DirectComposition::CManipulationTransformMarshaler *v84; // rax
  _DWORD *v85; // rax
  _QWORD *v86; // rax
  _DWORD *v87; // rax
  _DWORD *v88; // rax
  _DWORD *v89; // rax
  _DWORD *v90; // rax
  _QWORD *v91; // rax
  _DWORD *v92; // rax
  _QWORD *v93; // rax
  _DWORD *v94; // rax
  __int64 v95; // r8
  void **v96; // r10
  _QWORD *v97; // rax
  _DWORD *v98; // rax
  _DWORD *v99; // rax
  _QWORD *v100; // rax
  _DWORD *v101; // rax
  _DWORD *v102; // rax
  _DWORD *v103; // rax
  _DWORD *v104; // rax
  __int64 v105; // r8
  _DWORD *v106; // rax
  _DWORD *v107; // rax
  _DWORD *v108; // rax
  _DWORD *v109; // rax
  _DWORD *v110; // rax
  __int64 v111; // r8
  _DWORD *v112; // rax
  _DWORD *v113; // rax
  _DWORD *v114; // rax
  DirectComposition::CVisualMarshaler *v115; // rax
  __int64 v116; // rdx
  __int64 v117; // r8
  _DWORD *v118; // rax
  _DWORD *v119; // rax
  _DWORD *v120; // rax
  _DWORD *v121; // rax
  _DWORD *v122; // rax
  __int64 v123; // r8
  _DWORD *v124; // rax
  _DWORD *v125; // rax
  _DWORD *v126; // rax
  _DWORD *v128; // [rsp+68h] [rbp+20h] BYREF

  v128 = 0LL;
  PrivateMarshaler = 0;
  if ( a2 > 0x92 )
  {
    if ( a2 <= 0xAB )
    {
      if ( a2 == 171 )
      {
        v113 = DirectComposition::Memory::AllocateAndClear(0xB8uLL, 0x65664344u, 1);
        v8 = v113;
        if ( v113 )
        {
          DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v113, 171LL);
          v11 = &DirectComposition::CTableTransferEffectMarshaler::`vftable';
          goto LABEL_22;
        }
        goto LABEL_23;
      }
      if ( a2 <= 0xA2 )
      {
        switch ( a2 )
        {
          case 0xA2u:
            v108 = DirectComposition::Memory::AllocateAndClear(0x90uLL, 0x61734344u, 1);
            v8 = v108;
            if ( v108 )
            {
              v108[8] = 0;
              *((_QWORD *)v108 + 6) = 0LL;
              *((_QWORD *)v108 + 3) = 1LL;
              v108[9] = 162;
              v108[5] = ~(_DWORD)v108 ^ 1;
              v9 = &DirectComposition::CSnapshotMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
          case 0x99u:
            v107 = DirectComposition::Memory::AllocateAndClear(0x60uLL, 0x6E6D4344u, 1);
            v8 = v107;
            if ( v107 )
            {
              v107[8] = 0;
              *((_QWORD *)v107 + 6) = 0LL;
              *((_QWORD *)v107 + 3) = 1LL;
              v107[9] = 153;
              v107[5] = ~(_DWORD)v107 ^ 1;
              v9 = &DirectComposition::CSceneSurfaceMaterialInputMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
          case 0x9Bu:
            v106 = DirectComposition::Memory::AllocateAndClear(0x88uLL, 0x65664344u, 1);
            v8 = v106;
            if ( v106 )
            {
              DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v106, 155LL);
              v11 = &DirectComposition::CShadowEffectMarshaler::`vftable';
              goto LABEL_22;
            }
            goto LABEL_23;
          case 0x9Cu:
            v104 = DirectComposition::Memory::AllocateAndClear(0x190uLL, 0x68734344u, 1);
            v8 = v104;
            if ( v104 )
            {
              DirectComposition::CVisualMarshaler::CVisualMarshaler((__int64)v104, 156LL, v105);
              v8[98] = 0;
              *(_QWORD *)v8 = &DirectComposition::CShapeVisualMarshaler::`vftable';
              goto LABEL_354;
            }
            goto LABEL_23;
          case 0x9Du:
            v103 = DirectComposition::Memory::AllocateAndClear(0x48uLL, 0x73734344u, 1);
            v8 = v103;
            if ( v103 )
            {
              v103[8] = 0;
              *((_QWORD *)v103 + 6) = 0LL;
              *((_QWORD *)v103 + 3) = 1LL;
              v103[9] = 157;
              v103[5] = ~(_DWORD)v103 ^ 1;
              v9 = &DirectComposition::CSharedSectionMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
        }
        v25 = a2 - 159;
        if ( a2 == 159 )
        {
          v102 = DirectComposition::Memory::AllocateAndClear(0x48uLL, 0x677A4344u, 1);
          v8 = v102;
          if ( v102 )
          {
            v102[8] = 0;
            *((_QWORD *)v102 + 6) = 0LL;
            *((_QWORD *)v102 + 3) = 1LL;
            v102[9] = 159;
            v102[5] = ~(_DWORD)v102 ^ 1;
            v9 = &DirectComposition::CSharedSectionWrapperMarshaler::`vftable';
            goto LABEL_19;
          }
          return (unsigned int)-1073741801;
        }
        goto LABEL_302;
      }
      if ( a2 != 163 )
      {
        if ( a2 != 164 )
        {
          if ( a2 == 165 )
          {
            v112 = DirectComposition::Memory::AllocateAndClear(0x88uLL, 0x736F4344u, 1);
            v8 = v112;
            if ( v112 )
            {
              v112[8] = 0;
              *((_QWORD *)v112 + 6) = 0LL;
              *((_QWORD *)v112 + 3) = 1LL;
              v112[9] = 165;
              v112[5] = ~(_DWORD)v112 ^ 1;
              v9 = &DirectComposition::CSpriteShapeMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
          }
          if ( a2 != 166 )
          {
            if ( a2 == 169 )
            {
              v109 = DirectComposition::Memory::AllocateAndClear(0x90uLL, 0x736A4344u, 1);
              v8 = v109;
              if ( v109 )
              {
                v109[8] = 0;
                *((_QWORD *)v109 + 6) = 0LL;
                *((_QWORD *)v109 + 3) = 1LL;
                v109[9] = 169;
                v109[5] = ~(_DWORD)v109 ^ 1;
                v9 = &DirectComposition::CSurfaceBrushMarshaler::`vftable';
                goto LABEL_19;
              }
              return (unsigned int)-1073741801;
            }
            goto LABEL_352;
          }
          v110 = DirectComposition::Memory::AllocateAndClear(0x188uLL, 0x76734344u, 1);
          v8 = v110;
          if ( v110 )
          {
            DirectComposition::CVisualMarshaler::CVisualMarshaler((__int64)v110, 166LL, v111);
            v8[96] = 0;
            *(_QWORD *)v8 = &DirectComposition::CSpriteVisualMarshaler::`vftable';
            goto LABEL_354;
          }
          goto LABEL_23;
        }
        goto LABEL_214;
      }
      return (unsigned int)-1073741811;
    }
    if ( a2 <= 0xBB )
    {
      switch ( a2 )
      {
        case 0xBBu:
          goto LABEL_214;
        case 0xB4u:
          v120 = DirectComposition::Memory::AllocateAndClear(0x98uLL, 0x65664344u, 1);
          v8 = v120;
          if ( v120 )
          {
            DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v120, 180LL);
            v11 = &DirectComposition::CTurbulenceEffectMarshaler::`vftable';
            goto LABEL_22;
          }
          goto LABEL_23;
        case 0xB6u:
          v119 = DirectComposition::Memory::AllocateAndClear(0x58uLL, 0x62764344u, 1);
          v8 = v119;
          if ( v119 )
          {
            v119[8] = 0;
            *((_QWORD *)v119 + 6) = 0LL;
            *((_QWORD *)v119 + 3) = 1LL;
            v119[9] = 182;
            v119[5] = ~(_DWORD)v119 ^ 1;
            v9 = &DirectComposition::CViewBoxMarshaler::`vftable';
            goto LABEL_19;
          }
          return (unsigned int)-1073741801;
        case 0xB7u:
          v118 = DirectComposition::Memory::AllocateAndClear(0xD8uLL, 0x6D764344u, 1);
          v8 = v118;
          if ( v118 )
          {
            v118[8] = 0;
            *((_QWORD *)v118 + 6) = 0LL;
            *((_QWORD *)v118 + 3) = 1LL;
            v118[9] = 183;
            v118[5] = ~(_DWORD)v118 ^ 1;
            v9 = &DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::`vftable';
            goto LABEL_19;
          }
          return (unsigned int)-1073741801;
      }
      if ( a2 != 184 )
      {
        if ( a2 == 186 )
        {
          v114 = DirectComposition::Memory::AllocateAndClear(0x70uLL, 0x72764344u, 1);
          v8 = v114;
          if ( v114 )
          {
            v114[8] = 0;
            *((_QWORD *)v114 + 6) = 0LL;
            *((_QWORD *)v114 + 3) = 1LL;
            v114[9] = 186;
            v114[5] = ~(_DWORD)v114 ^ 1;
            v9 = &DirectComposition::CVisualCaptureMarshaler::`vftable';
            goto LABEL_19;
          }
          return (unsigned int)-1073741801;
        }
        goto LABEL_352;
      }
      v115 = (DirectComposition::CVisualMarshaler *)DirectComposition::Memory::AllocateAndClear(
                                                      0x170uLL,
                                                      0x69764344u,
                                                      1);
      if ( !v115 )
        goto LABEL_23;
      v62 = DirectComposition::CVisualMarshaler::CVisualMarshaler(v115, v116, v117);
      goto LABEL_170;
    }
    switch ( a2 )
    {
      case 0xBDu:
        v126 = DirectComposition::Memory::AllocateAndClear(0x40uLL, 0x66724344u, 1);
        v8 = v126;
        if ( v126 )
        {
          v126[8] = 0;
          *((_QWORD *)v126 + 6) = 0LL;
          *((_QWORD *)v126 + 3) = 1LL;
          v126[9] = 189;
          v126[5] = ~(_DWORD)v126 ^ 1;
          v9 = &DirectComposition::CVisualReferenceControllerMarshaler::`vftable';
          goto LABEL_19;
        }
        goto LABEL_353;
      case 0xBEu:
        v125 = DirectComposition::Memory::AllocateAndClear(0x60uLL, 0x736C4344u, 1);
        v8 = v125;
        if ( v125 )
        {
          v125[8] = 0;
          *((_QWORD *)v125 + 6) = 0LL;
          *((_QWORD *)v125 + 3) = 1LL;
          v125[9] = 190;
          v125[5] = ~(_DWORD)v125 ^ 1;
          v9 = &DirectComposition::CVisualSurfaceMarshaler::`vftable';
          goto LABEL_19;
        }
        return (unsigned int)-1073741801;
      case 0xBFu:
        v124 = DirectComposition::Memory::AllocateAndClear(0x48uLL, 0x776A4344u, 1);
        v8 = v124;
        if ( v124 )
        {
          v124[8] = 0;
          *((_QWORD *)v124 + 6) = 0LL;
          *((_QWORD *)v124 + 3) = 1LL;
          v124[9] = 191;
          v124[5] = ~(_DWORD)v124 ^ 1;
          v9 = &DirectComposition::CBlurredWallpaperBackdropBrushMarshaler::`vftable';
          goto LABEL_19;
        }
        return (unsigned int)-1073741801;
    }
    if ( a2 != 192 )
    {
      if ( a2 == 193 )
      {
        v121 = DirectComposition::Memory::AllocateAndClear(0x50uLL, 0x73794344u, 1);
        v8 = v121;
        if ( v121 )
        {
          v121[8] = 0;
          *((_QWORD *)v121 + 6) = 0LL;
          *((_QWORD *)v121 + 3) = 1LL;
          v121[9] = 193;
          v121[5] = ~(_DWORD)v121 ^ 1;
          v9 = &DirectComposition::CYCbCrSurfaceMarshaler::`vftable';
          goto LABEL_19;
        }
        return (unsigned int)-1073741801;
      }
      goto LABEL_352;
    }
    v122 = DirectComposition::Memory::AllocateAndClear(0x228uLL, 0x6E774344u, 1);
    v8 = v122;
    if ( !v122 )
      goto LABEL_23;
    DirectComposition::CVisualMarshaler::CVisualMarshaler((__int64)v122, 192LL, v123);
    v96 = &DirectComposition::CWindowNodeMarshaler::`vftable';
    goto LABEL_277;
  }
  if ( a2 == 146 )
  {
    v101 = DirectComposition::Memory::AllocateAndClear(0x58uLL, 0x687A4344u, 1);
    v8 = v101;
    if ( v101 )
    {
      v101[8] = 0;
      *((_QWORD *)v101 + 6) = 0LL;
      *((_QWORD *)v101 + 3) = 1LL;
      v101[9] = 146;
      v101[5] = ~(_DWORD)v101 ^ 1;
      v9 = &DirectComposition::CSceneMeshRendererComponentMarshaler::`vftable';
      goto LABEL_19;
    }
    return (unsigned int)-1073741801;
  }
  if ( a2 > 0x4C )
  {
    if ( a2 <= 0x69 )
    {
      if ( a2 == 105 )
      {
        v79 = DirectComposition::Memory::AllocateAndClear(0x120uLL, 0x696D4344u, 1);
        v8 = v79;
        if ( !v79 )
          return (unsigned int)-1073741801;
        *((_DWORD *)v79 + 8) = 0;
        v79[6] = 0LL;
        v79[3] = 1LL;
        *((_DWORD *)v79 + 9) = 105;
        v79[14] = 0LL;
        *((_BYTE *)v79 + 108) &= 0xF8u;
        *((_DWORD *)v79 + 5) = ~(_DWORD)v79 ^ 1;
        *v79 = &DirectComposition::CManipulationMarshaler::`vftable';
        *((_DWORD *)v79 + 30) = 0;
        v79[16] = 0LL;
        v79[17] = 0LL;
        goto LABEL_354;
      }
      if ( a2 > 0x5B )
      {
        if ( a2 <= 0x63 )
        {
          switch ( a2 )
          {
            case 'c':
              v8 = DirectComposition::Memory::AllocateAndClear(0x80uLL, 0x6C6A4344u, 1);
              if ( v8 )
              {
                DirectComposition::CGradientBrushMarshaler::CGradientBrushMarshaler();
                v11 = &DirectComposition::CLinearGradientBrushMarshaler::`vftable';
                goto LABEL_22;
              }
              goto LABEL_23;
            case '\\':
              v75 = DirectComposition::Memory::AllocateAndClear(0x130uLL, 0x666B4344u, 1);
              v8 = v75;
              if ( !v75 )
                return (unsigned int)-1073741801;
              *((_DWORD *)v75 + 8) = 0;
              v75[6] = 0LL;
              v75[3] = 1LL;
              *((_DWORD *)v75 + 9) = 92;
              *((_DWORD *)v75 + 5) = ~(_DWORD)v75 ^ 1;
              *v75 = &DirectComposition::CKeyframeAnimationMarshaler::`vftable';
              *((_DWORD *)v75 + 64) = 1065353216;
              *((_DWORD *)v75 + 65) = 1065353216;
              goto LABEL_354;
            case ']':
              v73 = DirectComposition::Memory::AllocateAndClear(0x188uLL, 0x766C4344u, 1);
              v8 = v73;
              if ( v73 )
              {
                DirectComposition::CVisualMarshaler::CVisualMarshaler((__int64)v73, 93LL, v74);
                v8[97] = 0;
                *(_QWORD *)v8 = &DirectComposition::CLayerVisualMarshaler::`vftable';
                goto LABEL_354;
              }
              goto LABEL_23;
            case '^':
              v72 = DirectComposition::Memory::AllocateAndClear(0x40uLL, 0x74614344u, 1);
              v8 = v72;
              if ( v72 )
              {
                v72[8] = 0;
                *((_QWORD *)v72 + 6) = 0LL;
                *((_QWORD *)v72 + 3) = 1LL;
                v72[9] = 94;
                v72[5] = ~(_DWORD)v72 ^ 1;
                v9 = &DirectComposition::CLegacyAnimationTriggerMarshaler::`vftable';
                goto LABEL_19;
              }
              return (unsigned int)-1073741801;
            case '`':
              v71 = DirectComposition::Memory::AllocateAndClear(0x98uLL, 0x6B644344u, 1);
              v8 = v71;
              if ( v71 )
              {
                v71[8] = 0;
                *((_QWORD *)v71 + 6) = 0LL;
                *((_QWORD *)v71 + 3) = 1LL;
                v71[9] = 96;
                v71[5] = ~(_DWORD)v71 ^ 1;
                v9 = &DirectComposition::CLegacyRenderTargetMarshaler::`vftable';
                goto LABEL_19;
              }
              return (unsigned int)-1073741801;
          }
          v25 = a2 - 97;
          if ( a2 == 97 )
          {
            v70 = DirectComposition::Memory::AllocateAndClear(0x98uLL, 0x6A644344u, 1);
            v8 = v70;
            if ( v70 )
            {
              v70[8] = 0;
              *((_QWORD *)v70 + 6) = 0LL;
              *((_QWORD *)v70 + 3) = 1LL;
              v70[9] = 97;
              v70[5] = ~(_DWORD)v70 ^ 1;
              v9 = &DirectComposition::CLegacyStereoRenderTargetMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
          }
LABEL_302:
          v19 = v25 == 1;
          goto LABEL_303;
        }
        switch ( a2 )
        {
          case 'd':
            goto LABEL_214;
          case 'e':
            v78 = DirectComposition::Memory::AllocateAndClear(0x98uLL, 0x65664344u, 1);
            v8 = v78;
            if ( v78 )
            {
              DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v78, 101LL);
              v11 = &DirectComposition::CLinearTransferEffectMarshaler::`vftable';
              goto LABEL_22;
            }
            goto LABEL_23;
          case 'f':
            v77 = DirectComposition::Memory::AllocateAndClear(0x70uLL, 0x676C4344u, 1);
            v8 = v77;
            if ( v77 )
            {
              v77[8] = 0;
              *((_QWORD *)v77 + 6) = 0LL;
              *((_QWORD *)v77 + 3) = 1LL;
              v77[9] = 102;
              v77[5] = ~(_DWORD)v77 ^ 1;
              v9 = &DirectComposition::CLineGeometryMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
        }
        v25 = a2 - 103;
        v24 = a2 == 103;
LABEL_213:
        if ( v24 )
          goto LABEL_214;
        goto LABEL_302;
      }
      if ( a2 == 91 )
      {
        v69 = DirectComposition::Memory::AllocateAndClear(0x70uLL, 0x73694344u, 1);
        v8 = v69;
        if ( !v69 )
          return (unsigned int)-1073741801;
        *((_DWORD *)v69 + 8) = 0;
        v69[6] = 0LL;
        v69[3] = 1LL;
        *((_DWORD *)v69 + 9) = 91;
        *((_BYTE *)v69 + 80) = 1;
        *((_DWORD *)v69 + 5) = ~(_DWORD)v69 ^ 1;
        *v69 = &DirectComposition::CInteractionTrackerBindingManagerMarshaler::`vftable';
        v69[13] = 24LL;
        goto LABEL_354;
      }
      if ( a2 > 0x54 )
      {
        switch ( a2 )
        {
          case 'V':
            goto LABEL_214;
          case 'W':
            v68 = DirectComposition::Memory::AllocateAndClear(0x98uLL, 0x61694344u, 1);
            v8 = v68;
            if ( v68 )
            {
              v68[8] = 0;
              *((_QWORD *)v68 + 6) = 0LL;
              *((_QWORD *)v68 + 3) = 1LL;
              v68[9] = 87;
              v68[5] = ~(_DWORD)v68 ^ 1;
              v9 = &DirectComposition::CInjectionAnimationMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
          case 'X':
            v67 = DirectComposition::Memory::AllocateAndClear(0xA0uLL, 0x6B694344u, 1);
            v8 = v67;
            if ( !v67 )
              return (unsigned int)-1073741801;
            *((_DWORD *)v67 + 8) = 0;
            v67[6] = 0LL;
            v67[3] = 1LL;
            *((_DWORD *)v67 + 9) = 88;
            *((_BYTE *)v67 + 120) = 1;
            *((_DWORD *)v67 + 5) = ~(_DWORD)v67 ^ 1;
            *v67 = &DirectComposition::CInkMarshaler::`vftable';
            v67[18] = 36LL;
            goto LABEL_354;
          case 'Y':
            v66 = (DirectComposition::CInteractionMarshaler *)DirectComposition::Memory::AllocateAndClear(
                                                                0x150uLL,
                                                                0x6F694344u,
                                                                1);
            if ( !v66 )
              goto LABEL_23;
            v62 = DirectComposition::CInteractionMarshaler::CInteractionMarshaler(v66);
            break;
          case 'Z':
            v65 = (DirectComposition::CInteractionTrackerMarshaler *)DirectComposition::Memory::AllocateAndClear(
                                                                       0x1D0uLL,
                                                                       0x72694344u,
                                                                       1);
            if ( !v65 )
              goto LABEL_23;
            v62 = DirectComposition::CInteractionTrackerMarshaler::CInteractionTrackerMarshaler(v65);
            break;
          default:
            goto LABEL_352;
        }
      }
      else
      {
        switch ( a2 )
        {
          case 'T':
            goto LABEL_214;
          case 'M':
            v64 = DirectComposition::Memory::AllocateAndClear(0x48uLL, 0x6D684344u, 1);
            v8 = v64;
            if ( v64 )
            {
              v64[8] = 0;
              *((_QWORD *)v64 + 6) = 0LL;
              *((_QWORD *)v64 + 3) = 1LL;
              v64[9] = 77;
              v64[5] = ~(_DWORD)v64 ^ 1;
              v9 = &DirectComposition::CHolographicExclusiveModeMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
          case 'N':
            v63 = DirectComposition::Memory::AllocateAndClear(0x68uLL, 0x65684344u, 1);
            v8 = v63;
            if ( !v63 )
              return (unsigned int)-1073741801;
            *((_DWORD *)v63 + 8) = 0;
            v63[6] = 0LL;
            v63[3] = 1LL;
            *((_DWORD *)v63 + 9) = 78;
            *((_DWORD *)v63 + 4) |= 0x20u;
            *((_DWORD *)v63 + 5) = ~(_DWORD)v63 ^ 1;
            *v63 = &DirectComposition::CHolographicExclusiveViewMarshaler::`vftable';
            goto LABEL_354;
        }
        if ( a2 != 80 )
        {
          if ( a2 != 81 )
          {
            if ( a2 == 82 )
            {
              v59 = DirectComposition::Memory::AllocateAndClear(0x38uLL, 0x70684344u, 1);
              v8 = v59;
              if ( v59 )
              {
                v59[8] = 0;
                *((_QWORD *)v59 + 6) = 0LL;
                *((_QWORD *)v59 + 3) = 1LL;
                v59[9] = 82;
                v59[5] = ~(_DWORD)v59 ^ 1;
                v9 = &DirectComposition::CHoverPointerSourceMarshaler::`vftable';
                goto LABEL_19;
              }
              return (unsigned int)-1073741801;
            }
            if ( a2 != 83 )
              goto LABEL_352;
            v58 = DirectComposition::Memory::AllocateAndClear(0x78uLL, 0x65664344u, 1);
            v8 = v58;
            if ( v58 )
            {
              DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v58, 83LL);
              v11 = &DirectComposition::CHueRotationEffectMarshaler::`vftable';
              goto LABEL_22;
            }
            goto LABEL_23;
          }
          v60 = (char *)DirectComposition::Memory::AllocateAndClear(0x88uLL, 0x78684344u, 1);
          v8 = v60;
          if ( !v60 )
            return (unsigned int)-1073741801;
          *((_DWORD *)v60 + 8) = 0;
          *((_QWORD *)v60 + 6) = 0LL;
          *((_QWORD *)v60 + 3) = 1LL;
          *((_DWORD *)v60 + 9) = 81;
          *((_QWORD *)v60 + 7) = 0LL;
          *((_DWORD *)v60 + 5) = ~(_DWORD)v60 ^ 1;
          *(_QWORD *)v60 = &DirectComposition::CHolographicViewerMarshaler::`vftable';
          *((_QWORD *)v60 + 8) = 0LL;
          *((_DWORD *)v60 + 18) = 0;
          *(_OWORD *)(v60 + 76) = 0LL;
          *(_QWORD *)(v60 + 92) = 0LL;
          *((_QWORD *)v60 + 13) = 0LL;
          *((_DWORD *)v60 + 28) = 0;
          *(_QWORD *)(v60 + 116) = 0LL;
          *((_QWORD *)v60 + 16) = 0LL;
          goto LABEL_354;
        }
        v61 = (DirectComposition::CHolographicInteropTextureMarshaler *)DirectComposition::Memory::AllocateAndClear(
                                                                          0x60uLL,
                                                                          0x69684344u,
                                                                          1);
        if ( !v61 )
          goto LABEL_23;
        v62 = DirectComposition::CHolographicInteropTextureMarshaler::CHolographicInteropTextureMarshaler(v61);
      }
      goto LABEL_170;
    }
    if ( a2 <= 0x7A )
    {
      if ( a2 == 122 )
      {
        v91 = DirectComposition::Memory::AllocateAndClear(0x88uLL, 0x737A4344u, 1);
        v8 = v91;
        if ( !v91 )
          return (unsigned int)-1073741801;
        *((_DWORD *)v91 + 8) = 0;
        v91[6] = 0LL;
        v91[3] = 1LL;
        *((_DWORD *)v91 + 9) = 122;
        *((_DWORD *)v91 + 27) = 2139095039;
        *((_DWORD *)v91 + 5) = ~(_DWORD)v91 ^ 1;
        *v91 = &DirectComposition::CProjectedShadowSceneMarshaler::`vftable';
        *((_DWORD *)v91 + 26) = 1065353216;
        v91[14] = 1065353216LL;
        *((_DWORD *)v91 + 30) = 0;
        *((_DWORD *)v91 + 31) = -1082130432;
        goto LABEL_354;
      }
      if ( a2 > 0x71 )
      {
        switch ( a2 )
        {
          case 's':
            v90 = DirectComposition::Memory::AllocateAndClear(0x70uLL, 0x79704344u, 1);
            v8 = v90;
            if ( v90 )
            {
              v90[8] = 0;
              *((_QWORD *)v90 + 6) = 0LL;
              *((_QWORD *)v90 + 3) = 1LL;
              v90[9] = 115;
              v90[5] = ~(_DWORD)v90 ^ 1;
              v9 = &DirectComposition::CPathGeometryMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
          case 'u':
            v89 = DirectComposition::Memory::AllocateAndClear(0x48uLL, 0x63704344u, 1);
            v8 = v89;
            if ( v89 )
            {
              v89[8] = 0;
              *((_QWORD *)v89 + 6) = 0LL;
              *((_QWORD *)v89 + 3) = 1LL;
              v89[9] = 117;
              v89[5] = ~(_DWORD)v89 ^ 1;
              v9 = &DirectComposition::CPrimitiveColorMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
          case 'v':
            v88 = DirectComposition::Memory::AllocateAndClear(0xC8uLL, 0x67704344u, 1);
            v8 = v88;
            if ( v88 )
            {
              v88[8] = 0;
              *((_QWORD *)v88 + 6) = 0LL;
              *((_QWORD *)v88 + 3) = 1LL;
              v88[9] = 118;
              v88[5] = ~(_DWORD)v88 ^ 1;
              v9 = &DirectComposition::CPrimitiveGroupMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
          case 'x':
            v87 = DirectComposition::Memory::AllocateAndClear(0x68uLL, 0x637A4344u, 1);
            v8 = v87;
            if ( v87 )
            {
              v87[8] = 0;
              *((_QWORD *)v87 + 6) = 0LL;
              *((_QWORD *)v87 + 3) = 1LL;
              v87[9] = 120;
              v87[5] = ~(_DWORD)v87 ^ 1;
              v9 = &DirectComposition::CProjectedShadowCasterMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
        }
        if ( a2 != 121 )
          goto LABEL_352;
        v86 = DirectComposition::Memory::AllocateAndClear(0x60uLL, 0x727A4344u, 1);
        v8 = v86;
        if ( !v86 )
          return (unsigned int)-1073741801;
        *((_DWORD *)v86 + 8) = 0;
        v86[6] = 0LL;
        v86[3] = 1LL;
        *((_DWORD *)v86 + 9) = 121;
        *((_DWORD *)v86 + 20) = 1;
        *((_DWORD *)v86 + 5) = ~(_DWORD)v86 ^ 1;
        *v86 = &DirectComposition::CProjectedShadowReceiverMarshaler::`vftable';
        goto LABEL_354;
      }
      switch ( a2 )
      {
        case 'q':
          v85 = DirectComposition::Memory::AllocateAndClear(0x78uLL, 0x6E6A4344u, 1);
          v8 = v85;
          if ( v85 )
          {
            v85[8] = 0;
            *((_QWORD *)v85 + 6) = 0LL;
            *((_QWORD *)v85 + 3) = 1LL;
            v85[9] = 113;
            v85[5] = ~(_DWORD)v85 ^ 1;
            v9 = &DirectComposition::CNineGridBrushMarshaler::`vftable';
            goto LABEL_19;
          }
          return (unsigned int)-1073741801;
        case 'j':
          v84 = (DirectComposition::CManipulationTransformMarshaler *)DirectComposition::Memory::AllocateAndClear(
                                                                        0x80uLL,
                                                                        0x616D4344u,
                                                                        1);
          if ( !v84 )
            goto LABEL_23;
          v62 = (__int64)DirectComposition::CManipulationTransformMarshaler::CManipulationTransformMarshaler(v84);
          break;
        case 'k':
          v83 = DirectComposition::Memory::AllocateAndClear(0x58uLL, 0x6D6A4344u, 1);
          v8 = v83;
          if ( v83 )
          {
            v83[8] = 0;
            *((_QWORD *)v83 + 6) = 0LL;
            *((_QWORD *)v83 + 3) = 1LL;
            v83[9] = 107;
            v83[5] = ~(_DWORD)v83 ^ 1;
            v9 = &DirectComposition::CMaskBrushMarshaler::`vftable';
            goto LABEL_19;
          }
          return (unsigned int)-1073741801;
        case 'm':
          v82 = (DirectComposition::CMatrixTransformMarshaler *)DirectComposition::Memory::AllocateAndClear(
                                                                  0x60uLL,
                                                                  0x746D4344u,
                                                                  1);
          if ( !v82 )
            goto LABEL_23;
          v62 = (__int64)DirectComposition::CMatrixTransformMarshaler::CMatrixTransformMarshaler(v82);
          break;
        case 'n':
          v81 = (DirectComposition::CMatrixTransform3DMarshaler *)DirectComposition::Memory::AllocateAndClear(
                                                                    0x88uLL,
                                                                    0x336D4344u,
                                                                    1);
          if ( !v81 )
            goto LABEL_23;
          v62 = DirectComposition::CMatrixTransform3DMarshaler::CMatrixTransform3DMarshaler(v81);
          break;
        case 'o':
          goto LABEL_214;
        case 'p':
          v80 = (LARGE_INTEGER *)DirectComposition::Memory::AllocateAndClear(0xC8uLL, 0x616E4344u, 1);
          v8 = v80;
          if ( !v80 )
            return (unsigned int)-1073741801;
          v80[4].LowPart = 0;
          v80[6].QuadPart = 0LL;
          v80[3].QuadPart = 1LL;
          v80[4].HighPart = 112;
          v80[2].HighPart = ~(_DWORD)v80 ^ 1;
          v80->QuadPart = (LONGLONG)&DirectComposition::CNaturalAnimationMarshaler::`vftable';
          v80[22] = KeQueryPerformanceCounter(0LL);
          *((_QWORD *)v8 + 23) = 0LL;
          v8[48] = 0;
          goto LABEL_354;
        default:
          goto LABEL_352;
      }
LABEL_170:
      v8 = (_DWORD *)v62;
      goto LABEL_354;
    }
    if ( a2 > 0x81 )
    {
      switch ( a2 )
      {
        case 0x83u:
          v100 = DirectComposition::Memory::AllocateAndClear(0x78uLL, 0x6D644344u, 1);
          v8 = v100;
          if ( !v100 )
            return (unsigned int)-1073741801;
          *((_DWORD *)v100 + 8) = 0;
          v100[6] = 0LL;
          v100[3] = 1LL;
          *((_DWORD *)v100 + 9) = 131;
          *((_DWORD *)v100 + 14) = 3;
          *((_DWORD *)v100 + 5) = ~(_DWORD)v100 ^ 1;
          *v100 = &DirectComposition::CRemoteAppRenderTargetMarshaler::`vftable';
          goto LABEL_354;
        case 0x84u:
          v99 = DirectComposition::Memory::AllocateAndClear(0x70uLL, 0x70644344u, 1);
          v8 = v99;
          if ( v99 )
          {
            v99[8] = 0;
            *((_QWORD *)v99 + 6) = 0LL;
            *((_QWORD *)v99 + 3) = 1LL;
            v99[9] = 132;
            v99[5] = ~(_DWORD)v99 ^ 1;
            v9 = &DirectComposition::CRemoteRenderTargetMarshaler::`vftable';
            goto LABEL_19;
          }
          return (unsigned int)-1073741801;
        case 0x85u:
          goto LABEL_214;
        case 0x8Au:
          v98 = DirectComposition::Memory::AllocateAndClear(0x78uLL, 0x65664344u, 1);
          v8 = v98;
          if ( v98 )
          {
            DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v98, 138LL);
            v11 = &DirectComposition::CSaturationEffectMarshaler::`vftable';
            goto LABEL_22;
          }
          goto LABEL_23;
      }
      if ( a2 != 139 )
        goto LABEL_352;
      v97 = DirectComposition::Memory::AllocateAndClear(0x50uLL, 0x6C734344u, 1);
      v13 = v97;
      if ( !v97 )
        return (unsigned int)-1073741801;
      DirectComposition::CBaseAnimationMarshaler::CBaseAnimationMarshaler(v97, 139LL);
      v13[2] = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
      *v13 = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
LABEL_28:
      v8 = v13 + 2;
      goto LABEL_354;
    }
    if ( a2 != 129 )
    {
      switch ( a2 )
      {
        case '|':
          v93 = DirectComposition::Memory::AllocateAndClear(0x70uLL, 0x62704344u, 1);
          v8 = v93;
          if ( !v93 )
            return (unsigned int)-1073741801;
          *((_DWORD *)v93 + 8) = 0;
          v93[6] = 0LL;
          v93[3] = 1LL;
          *((_DWORD *)v93 + 9) = 124;
          v93[9] = 0LL;
          *((_DWORD *)v93 + 5) = ~(_DWORD)v93 ^ 1;
          *v93 = &DirectComposition::CPropertySetMarshaler::`vftable';
          v93[10] = 0LL;
          v93[11] = 0LL;
          v93[12] = 0LL;
          goto LABEL_354;
        case '}':
          v8 = DirectComposition::Memory::AllocateAndClear(0x70uLL, 0x787A4344u, 1);
          if ( v8 )
          {
            DirectComposition::CPropertyChangeResourceMarshaler::CPropertyChangeResourceMarshaler();
            v11 = &DirectComposition::CProxyGeometryClipMarshaler::`vftable';
            goto LABEL_22;
          }
          goto LABEL_23;
        case '~':
          v8 = DirectComposition::Memory::AllocateAndClear(0x88uLL, 0x6F6A4344u, 1);
          if ( v8 )
          {
            DirectComposition::CGradientBrushMarshaler::CGradientBrushMarshaler();
            v11 = &DirectComposition::CRadialGradientBrushMarshaler::`vftable';
            goto LABEL_22;
          }
          goto LABEL_23;
      }
      v25 = a2 - 127;
      if ( a2 == 127 )
      {
        v92 = DirectComposition::Memory::AllocateAndClear(0x98uLL, 0x63724344u, 1);
        v8 = v92;
        if ( v92 )
        {
          v92[8] = 0;
          *((_QWORD *)v92 + 6) = 0LL;
          *((_QWORD *)v92 + 3) = 1LL;
          v92[9] = 127;
          v92[5] = ~(_DWORD)v92 ^ 1;
          v9 = &DirectComposition::CRectangleClipMarshaler::`vftable';
          goto LABEL_19;
        }
        return (unsigned int)-1073741801;
      }
      goto LABEL_302;
    }
    v94 = DirectComposition::Memory::AllocateAndClear(0x180uLL, 0x76724344u, 1);
    v8 = v94;
    if ( !v94 )
      goto LABEL_23;
    DirectComposition::CVisualMarshaler::CVisualMarshaler((__int64)v94, 129LL, v95);
    v96 = &DirectComposition::CRedirectVisualMarshaler::`vftable';
LABEL_277:
    *(_QWORD *)v8 = v96;
    goto LABEL_354;
  }
  if ( a2 == 76 )
  {
    v57 = DirectComposition::Memory::AllocateAndClear(0x68uLL, 0x64684344u, 1);
    v8 = v57;
    if ( v57 )
    {
      v57[8] = 0;
      *((_QWORD *)v57 + 6) = 0LL;
      *((_QWORD *)v57 + 3) = 1LL;
      v57[9] = 76;
      v57[5] = ~(_DWORD)v57 ^ 1;
      v9 = &DirectComposition::CHolographicDisplayMarshaler::`vftable';
      goto LABEL_19;
    }
    return (unsigned int)-1073741801;
  }
  if ( a2 > 0x25 )
  {
    if ( a2 > 0x3B )
    {
      if ( a2 > 0x43 )
      {
        if ( a2 != 69 )
        {
          if ( a2 == 70 )
          {
            v56 = DirectComposition::Memory::AllocateAndClear(0x70uLL, 0x67634344u, 1);
            v8 = v56;
            if ( v56 )
            {
              v56[8] = 0;
              *((_QWORD *)v56 + 6) = 0LL;
              *((_QWORD *)v56 + 3) = 1LL;
              v56[9] = 70;
              v56[5] = ~(_DWORD)v56 ^ 1;
              v9 = &DirectComposition::CClipGroupMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
          }
          if ( a2 != 71 )
          {
            if ( a2 == 72 )
            {
              v55 = DirectComposition::Memory::AllocateAndClear(0x58uLL, 0x76674344u, 1);
              v8 = v55;
              if ( v55 )
              {
                v55[8] = 0;
                *((_QWORD *)v55 + 6) = 0LL;
                *((_QWORD *)v55 + 3) = 1LL;
                v55[9] = 72;
                v55[5] = ~(_DWORD)v55 ^ 1;
                v9 = &DirectComposition::CGlobalDCompVisualMarshaler::`vftable';
                goto LABEL_19;
              }
              return (unsigned int)-1073741801;
            }
            if ( a2 == 75 )
            {
              v54 = DirectComposition::Memory::AllocateAndClear(0x60uLL, 0x63684344u, 1);
              v8 = v54;
              if ( v54 )
              {
                v54[8] = 0;
                *((_QWORD *)v54 + 6) = 0LL;
                *((_QWORD *)v54 + 3) = 1LL;
                v54[9] = 75;
                v54[5] = ~(_DWORD)v54 ^ 1;
                v9 = &DirectComposition::CHolographicCompositionMarshaler::`vftable';
                goto LABEL_19;
              }
              return (unsigned int)-1073741801;
            }
            goto LABEL_352;
          }
        }
        goto LABEL_214;
      }
      switch ( a2 )
      {
        case 'C':
          goto LABEL_214;
        case '<':
          v53 = DirectComposition::Memory::AllocateAndClear(0xC8uLL, 0x78654344u, 1);
          v8 = v53;
          if ( v53 )
          {
            v53[8] = 0;
            *((_QWORD *)v53 + 6) = 0LL;
            *((_QWORD *)v53 + 3) = 1LL;
            v53[9] = 60;
            v53[5] = ~(_DWORD)v53 ^ 1;
            v9 = &DirectComposition::CExpressionMarshaler::`vftable';
            goto LABEL_19;
          }
          return (unsigned int)-1073741801;
        case '>':
          goto LABEL_214;
        case '?':
          v52 = DirectComposition::Memory::AllocateAndClear(0x80uLL, 0x65664344u, 1);
          v8 = v52;
          if ( v52 )
          {
            DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v52, 63LL);
            v11 = &DirectComposition::CFloodEffectMarshaler::`vftable';
            goto LABEL_22;
          }
          goto LABEL_23;
        case '@':
          v51 = DirectComposition::Memory::AllocateAndClear(0x80uLL, 0x65664344u, 1);
          v8 = v51;
          if ( v51 )
          {
            DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v51, 64LL);
            v11 = &DirectComposition::CGaussianBlurEffectMarshaler::`vftable';
            goto LABEL_22;
          }
          goto LABEL_23;
      }
      if ( a2 != 66 )
        goto LABEL_352;
      v50 = DirectComposition::Memory::AllocateAndClear(0xF0uLL, 0x69674344u, 1);
      v8 = v50;
      if ( !v50 )
        return (unsigned int)-1073741801;
      *((_DWORD *)v50 + 8) = 0;
      v50[6] = 0LL;
      v50[3] = 1LL;
      *((_DWORD *)v50 + 9) = 66;
      *((_BYTE *)v50 + 64) = 1;
      *((_DWORD *)v50 + 5) = ~(_DWORD)v50 ^ 1;
      *v50 = &DirectComposition::CGenericInkMarshaler::`vftable';
      v50[11] = 1LL;
      *((_BYTE *)v50 + 104) = 1;
      v50[16] = 1LL;
      *((_BYTE *)v50 + 180) = 0;
    }
    else
    {
      if ( a2 == 59 )
      {
        v49 = DirectComposition::Memory::AllocateAndClear(0x70uLL, 0x79654344u, 1);
        v8 = v49;
        if ( v49 )
        {
          v49[8] = 0;
          *((_QWORD *)v49 + 6) = 0LL;
          *((_QWORD *)v49 + 3) = 1LL;
          v49[9] = 59;
          v49[5] = ~(_DWORD)v49 ^ 1;
          v9 = &DirectComposition::CEllipseGeometryMarshaler::`vftable';
          goto LABEL_19;
        }
        return (unsigned int)-1073741801;
      }
      if ( a2 > 0x30 )
      {
        switch ( a2 )
        {
          case '1':
            v48 = DirectComposition::Memory::AllocateAndClear(0x68uLL, 0x67734344u, 1);
            v8 = v48;
            if ( v48 )
            {
              v48[8] = 0;
              *((_QWORD *)v48 + 6) = 0LL;
              *((_QWORD *)v48 + 3) = 1LL;
              v48[9] = 157;
              v48[5] = ~(_DWORD)v48 ^ 1;
              v9 = &DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
          case '3':
            v47 = DirectComposition::Memory::AllocateAndClear(0x48uLL, 0x72734344u, 1);
            v8 = v47;
            if ( v47 )
            {
              v47[8] = 0;
              *((_QWORD *)v47 + 6) = 0LL;
              *((_QWORD *)v47 + 3) = 1LL;
              v47[9] = 51;
              v47[5] = ~(_DWORD)v47 ^ 1;
              v9 = &DirectComposition::CDataSourceReaderMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
          case '4':
            v46 = DirectComposition::Memory::AllocateAndClear(0xA8uLL, 0x64644344u, 1);
            v8 = v46;
            if ( v46 )
            {
              v46[8] = 0;
              *((_QWORD *)v46 + 6) = 0LL;
              *((_QWORD *)v46 + 3) = 1LL;
              v46[9] = 52;
              v46[5] = ~(_DWORD)v46 ^ 1;
              v9 = &DirectComposition::CDDisplayRenderTargetMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
        }
        if ( a2 != 55 )
        {
          if ( a2 == 57 )
          {
            v44 = DirectComposition::Memory::AllocateAndClear(0x68uLL, 0x656A4344u, 1);
            v8 = v44;
            if ( v44 )
            {
              v44[8] = 0;
              *((_QWORD *)v44 + 6) = 0LL;
              *((_QWORD *)v44 + 3) = 1LL;
              v44[9] = 57;
              v44[5] = ~(_DWORD)v44 ^ 1;
              v9 = &DirectComposition::CEffectBrushMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
          }
          goto LABEL_352;
        }
        v45 = DirectComposition::Memory::AllocateAndClear(0x78uLL, 0x73644344u, 1);
        v8 = v45;
        if ( !v45 )
          return (unsigned int)-1073741801;
        *((_DWORD *)v45 + 8) = 0;
        v45[6] = 0LL;
        v45[3] = 1LL;
        *((_DWORD *)v45 + 9) = 55;
        *((_DWORD *)v45 + 24) = 1091567616;
        *((_DWORD *)v45 + 5) = ~(_DWORD)v45 ^ 1;
        *v45 = &DirectComposition::CDropShadowMarshaler::`vftable';
        v45[14] = 1065353216LL;
        *((_DWORD *)v45 + 23) = 1065353216;
      }
      else
      {
        switch ( a2 )
        {
          case '0':
            v43 = DirectComposition::Memory::AllocateAndClear(0x58uLL, 0x66734344u, 1);
            v8 = v43;
            if ( v43 )
            {
              v43[8] = 0;
              *((_QWORD *)v43 + 6) = 0LL;
              *((_QWORD *)v43 + 3) = 1LL;
              v43[9] = 48;
              v43[5] = ~(_DWORD)v43 ^ 1;
              v9 = &DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
          case '&':
            v42 = DirectComposition::Memory::AllocateAndClear(0x60uLL, 0x6D6D4344u, 1);
            v8 = v42;
            if ( v42 )
            {
              v42[8] = 0;
              *((_QWORD *)v42 + 6) = 0LL;
              *((_QWORD *)v42 + 3) = 1LL;
              v42[9] = 38;
              v42[5] = ~(_DWORD)v42 ^ 1;
              v9 = &DirectComposition::CCompositionMipmapSurfaceMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
          case '\'':
            v41 = DirectComposition::Memory::AllocateAndClear(0xA0uLL, 0x6F704344u, 1);
            v8 = v41;
            if ( v41 )
            {
              v41[8] = 0;
              *((_QWORD *)v41 + 6) = 0LL;
              *((_QWORD *)v41 + 3) = 1LL;
              v41[9] = 39;
              v41[5] = ~(_DWORD)v41 ^ 1;
              v9 = &DirectComposition::CCompositionPointLightMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
        }
        v36 = 2LL;
        if ( a2 == 41 )
        {
          v40 = DirectComposition::Memory::AllocateAndClear(0xC8uLL, 0x70734344u, 1);
          v8 = v40;
          if ( v40 )
          {
            v40[8] = 0;
            *((_QWORD *)v40 + 6) = 0LL;
            *((_QWORD *)v40 + 3) = 1LL;
            v40[9] = 41;
            v40[5] = ~(_DWORD)v40 ^ 1;
            v9 = &DirectComposition::CCompositionSpotLightMarshaler::`vftable';
            goto LABEL_19;
          }
          return (unsigned int)-1073741801;
        }
        if ( a2 != 42 )
        {
          if ( a2 == 45 )
          {
            v38 = DirectComposition::Memory::AllocateAndClear(0xA0uLL, 0x61634344u, 1);
            v8 = v38;
            if ( v38 )
            {
              v38[8] = 0;
              *((_QWORD *)v38 + 6) = 0LL;
              *((_QWORD *)v38 + 3) = 1LL;
              v38[9] = 45;
              v38[5] = ~(_DWORD)v38 ^ 1;
              v9 = &DirectComposition::CConditionalExpressionMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
          }
          if ( a2 == 46 )
          {
            v37 = DirectComposition::Memory::AllocateAndClear(0x50uLL, 0x636F4344u, 1);
            v8 = v37;
            if ( v37 )
            {
              v37[8] = 0;
              *((_QWORD *)v37 + 6) = 0LL;
              *((_QWORD *)v37 + 3) = 1LL;
              v37[9] = 46;
              v37[5] = ~(_DWORD)v37 ^ 1;
              v9 = &DirectComposition::CContainerShapeMarshaler::`vftable';
              goto LABEL_19;
            }
            return (unsigned int)-1073741801;
          }
          goto LABEL_352;
        }
        v39 = DirectComposition::Memory::AllocateAndClear(0x48uLL, 0x62634344u, 1);
        v8 = v39;
        if ( !v39 )
          return (unsigned int)-1073741801;
        *((_DWORD *)v39 + 8) = 0;
        v39[6] = 0LL;
        v39[3] = 1LL;
        *((_DWORD *)v39 + 9) = 42;
        *((_DWORD *)v39 + 5) = ~(_DWORD)v39 ^ 1;
        *v39 = &DirectComposition::CHoverPointerSourceMarshaler::`vftable';
        do
        {
          *v39 = &DirectComposition::CCompositionSurfaceBitmapMarshaler::`vftable';
          --v36;
        }
        while ( v36 );
      }
    }
LABEL_354:
    if ( v8 )
    {
      *a3 = (struct DirectComposition::CResourceMarshaler *)v8;
      return (unsigned int)PrivateMarshaler;
    }
    return (unsigned int)-1073741801;
  }
  if ( a2 == 37 )
    return (unsigned int)-1073741811;
  if ( a2 > 0x13 )
  {
    if ( a2 > 0x1C )
    {
      if ( a2 == 29 )
      {
        v35 = DirectComposition::Memory::AllocateAndClear(0x88uLL, 0x32634344u, 1);
        v8 = v35;
        if ( v35 )
        {
          v35[8] = 0;
          *((_QWORD *)v35 + 6) = 0LL;
          *((_QWORD *)v35 + 3) = 1LL;
          v35[9] = 29;
          v35[5] = ~(_DWORD)v35 ^ 1;
          v9 = &DirectComposition::CComponentTransform2DMarshaler::`vftable';
          goto LABEL_19;
        }
        return (unsigned int)-1073741801;
      }
      if ( a2 == 30 )
      {
        v34 = DirectComposition::Memory::AllocateAndClear(0xD8uLL, 0x6F634344u, 1);
        v8 = v34;
        if ( v34 )
        {
          v34[8] = 0;
          *((_QWORD *)v34 + 6) = 0LL;
          *((_QWORD *)v34 + 3) = 1LL;
          v34[9] = 30;
          v34[5] = ~(_DWORD)v34 ^ 1;
          v9 = &DirectComposition::CComponentTransform3DMarshaler::`vftable';
          goto LABEL_19;
        }
        return (unsigned int)-1073741801;
      }
      if ( a2 != 31 )
      {
        if ( a2 == 32 )
        {
          v32 = DirectComposition::Memory::AllocateAndClear(0x78uLL, 0x6D614344u, 1);
          v8 = v32;
          if ( v32 )
          {
            v32[8] = 0;
            *((_QWORD *)v32 + 6) = 0LL;
            *((_QWORD *)v32 + 3) = 1LL;
            v32[9] = 32;
            v32[5] = ~(_DWORD)v32 ^ 1;
            v9 = &DirectComposition::CCompositionAmbientLightMarshaler::`vftable';
            goto LABEL_19;
          }
          return (unsigned int)-1073741801;
        }
        if ( a2 == 33 )
        {
          v31 = DirectComposition::Memory::AllocateAndClear(0x88uLL, 0x6C644344u, 1);
          v8 = v31;
          if ( v31 )
          {
            v31[8] = 0;
            *((_QWORD *)v31 + 6) = 0LL;
            *((_QWORD *)v31 + 3) = 1LL;
            v31[9] = 33;
            v31[5] = ~(_DWORD)v31 ^ 1;
            v9 = &DirectComposition::CCompositionDistantLightMarshaler::`vftable';
            goto LABEL_19;
          }
          return (unsigned int)-1073741801;
        }
        goto LABEL_352;
      }
      v33 = DirectComposition::Memory::AllocateAndClear(0x78uLL, 0x65664344u, 1);
      v8 = v33;
      if ( v33 )
      {
        DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v33, 31LL);
        v11 = &DirectComposition::CCompositeEffectMarshaler::`vftable';
        goto LABEL_22;
      }
      goto LABEL_23;
    }
    switch ( a2 )
    {
      case 0x1Cu:
        v30 = DirectComposition::Memory::AllocateAndClear(0x60uLL, 0x74654344u, 1);
        v8 = v30;
        if ( v30 )
        {
          v30[8] = 0;
          *((_QWORD *)v30 + 6) = 0LL;
          *((_QWORD *)v30 + 3) = 1LL;
          v30[9] = 28;
          v30[5] = ~(_DWORD)v30 ^ 1;
          v9 = &DirectComposition::CCompiledEffectTemplateMarshaler::`vftable';
          goto LABEL_19;
        }
        return (unsigned int)-1073741801;
      case 0x14u:
        v29 = DirectComposition::Memory::AllocateAndClear(0x98uLL, 0x72634344u, 1);
        v8 = v29;
        if ( v29 )
        {
          v29[8] = 0;
          *((_QWORD *)v29 + 6) = 0LL;
          *((_QWORD *)v29 + 3) = 1LL;
          v29[9] = 20;
          v29[5] = ~(_DWORD)v29 ^ 1;
          v9 = &DirectComposition::CCaptureRenderTargetMarshaler::`vftable';
          goto LABEL_19;
        }
        return (unsigned int)-1073741801;
      case 0x16u:
        v28 = DirectComposition::Memory::AllocateAndClear(0x58uLL, 0x636A4344u, 1);
        v8 = v28;
        if ( v28 )
        {
          v28[8] = 0;
          *((_QWORD *)v28 + 6) = 0LL;
          *((_QWORD *)v28 + 3) = 1LL;
          v28[9] = 22;
          v28[5] = ~(_DWORD)v28 ^ 1;
          v9 = &DirectComposition::CColorBrushMarshaler::`vftable';
          goto LABEL_19;
        }
        return (unsigned int)-1073741801;
      case 0x17u:
        v27 = DirectComposition::Memory::AllocateAndClear(0x50uLL, 0x73674344u, 1);
        v8 = v27;
        if ( v27 )
        {
          v27[8] = 0;
          *((_QWORD *)v27 + 6) = 0LL;
          *((_QWORD *)v27 + 3) = 1LL;
          v27[9] = 23;
          v27[5] = ~(_DWORD)v27 ^ 1;
          v9 = &DirectComposition::CColorGradientStopMarshaler::`vftable';
          goto LABEL_19;
        }
        return (unsigned int)-1073741801;
      case 0x18u:
        v26 = DirectComposition::Memory::AllocateAndClear(0xC8uLL, 0x65664344u, 1);
        v8 = v26;
        if ( v26 )
        {
          DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v26, 24LL);
          v11 = &DirectComposition::CColorMatrixEffectMarshaler::`vftable';
          goto LABEL_22;
        }
        goto LABEL_23;
    }
    v25 = a2 - 26;
    v24 = a2 == 26;
    goto LABEL_213;
  }
  if ( a2 == 19 )
  {
    v23 = DirectComposition::Memory::AllocateAndClear(0x90uLL, 0x71634344u, 1);
    v8 = v23;
    if ( !v23 )
      return (unsigned int)-1073741801;
    *((_DWORD *)v23 + 8) = 0;
    v23[6] = 0LL;
    v23[3] = 1LL;
    *((_DWORD *)v23 + 9) = 19;
    v23[13] = 0LL;
    *((_DWORD *)v23 + 5) = ~(_DWORD)v23 ^ 1;
    *v23 = &DirectComposition::CCaptureControllerMarshaler::`vftable';
    v23[14] = 0LL;
    v23[15] = 0LL;
    goto LABEL_354;
  }
  if ( a2 > 0xC )
  {
    if ( a2 != 13 )
    {
      switch ( a2 )
      {
        case 0xEu:
          v22 = DirectComposition::Memory::AllocateAndClear(0x78uLL, 0x65664344u, 1);
          v8 = v22;
          if ( v22 )
          {
            DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v22, 14LL);
            v11 = &DirectComposition::CBlendEffectMarshaler::`vftable';
            goto LABEL_22;
          }
          goto LABEL_23;
        case 0xFu:
          v21 = DirectComposition::Memory::AllocateAndClear(0x48uLL, 0x646A4344u, 1);
          v8 = v21;
          if ( v21 )
          {
            v21[8] = 0;
            *((_QWORD *)v21 + 6) = 0LL;
            *((_QWORD *)v21 + 3) = 1LL;
            v21[9] = 15;
            v21[5] = ~(_DWORD)v21 ^ 1;
            v9 = &DirectComposition::CBlurredWallpaperBackdropBrushMarshaler::`vftable';
            goto LABEL_19;
          }
          return (unsigned int)-1073741801;
        case 0x10u:
          v20 = DirectComposition::Memory::AllocateAndClear(0x80uLL, 0x65664344u, 1);
          v8 = v20;
          if ( v20 )
          {
            DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v20, 16LL);
            v11 = &DirectComposition::CBrightnessEffectMarshaler::`vftable';
            goto LABEL_22;
          }
          goto LABEL_23;
      }
      v19 = a2 == 18;
LABEL_303:
      if ( !v19 )
        goto LABEL_352;
    }
LABEL_214:
    v76 = DirectComposition::Memory::AllocateAndClear(0x50uLL, 0x6D674344u, 1);
    v8 = v76;
    if ( !v76 )
      return (unsigned int)-1073741801;
    *((_DWORD *)v76 + 8) = 0;
    v76[6] = 0LL;
    v76[3] = 1LL;
    *((_DWORD *)v76 + 9) = a2;
    v76[7] = 0LL;
    *((_DWORD *)v76 + 5) = ~(_DWORD)v76 ^ 1;
    *v76 = &DirectComposition::CGenericMarshaler::`vftable';
    v76[8] = 0LL;
    v76[9] = 0LL;
    goto LABEL_354;
  }
  switch ( a2 )
  {
    case 0xCu:
      v18 = DirectComposition::Memory::AllocateAndClear(0x40uLL, 0x64624344u, 1);
      v8 = v18;
      if ( v18 )
      {
        v18[8] = 0;
        *((_QWORD *)v18 + 6) = 0LL;
        *((_QWORD *)v18 + 3) = 1LL;
        v18[9] = 12;
        v18[5] = ~(_DWORD)v18 ^ 1;
        v9 = &DirectComposition::CBatchDeferralMarshaler::`vftable';
        goto LABEL_19;
      }
      return (unsigned int)-1073741801;
    case 1u:
      v17 = DirectComposition::Memory::AllocateAndClear(0x98uLL, 0x65664344u, 1);
      v8 = v17;
      if ( v17 )
      {
        DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v17, 1LL);
        v11 = &DirectComposition::CAffineTransform2DEffectMarshaler::`vftable';
        goto LABEL_22;
      }
LABEL_23:
      v8 = 0LL;
      goto LABEL_354;
    case 2u:
      v12 = DirectComposition::Memory::AllocateAndClear(0xF8uLL, 0x6E614344u, 1);
      v13 = v12;
      if ( !v12 )
        return (unsigned int)-1073741801;
      DirectComposition::CBaseAnimationMarshaler::CBaseAnimationMarshaler(v12, 2LL);
      v13[2] = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
      v14 = (_QWORD *)((char *)this + 360);
      *v13 = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
      v15 = *((_QWORD *)this + 45);
      v16 = v13 + 16;
      if ( *(DirectComposition::CApplicationChannel **)(v15 + 8) != (DirectComposition::CApplicationChannel *)((char *)this + 360) )
        __fastfail(3u);
      *v16 = v15;
      v13[17] = v14;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = v16;
      goto LABEL_28;
    case 6u:
      v10 = DirectComposition::Memory::AllocateAndClear(0x88uLL, 0x65664344u, 1);
      v8 = v10;
      if ( v10 )
      {
        DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v10, 6LL);
        v11 = &DirectComposition::CArithmeticCompositeEffectMarshaler::`vftable';
LABEL_22:
        *(_QWORD *)v8 = v11;
        goto LABEL_354;
      }
      goto LABEL_23;
    case 7u:
    case 8u:
      goto LABEL_214;
    case 9u:
      v7 = DirectComposition::Memory::AllocateAndClear(0x48uLL, 0x626A4344u, 1);
      v8 = v7;
      if ( v7 )
      {
        v7[8] = 0;
        *((_QWORD *)v7 + 6) = 0LL;
        *((_QWORD *)v7 + 3) = 1LL;
        v7[9] = 9;
        v7[5] = ~(_DWORD)v7 ^ 1;
        v9 = &DirectComposition::CBlurredWallpaperBackdropBrushMarshaler::`vftable';
LABEL_19:
        *(_QWORD *)v8 = v9;
        goto LABEL_354;
      }
      return (unsigned int)-1073741801;
  }
LABEL_352:
  PrivateMarshaler = DirectComposition::GeneratedCreatePrivateMarshaler(
                       (DirectComposition *)a2,
                       (unsigned int)&v128,
                       a3);
  if ( PrivateMarshaler >= 0 )
  {
LABEL_353:
    v8 = v128;
    goto LABEL_354;
  }
  return (unsigned int)PrivateMarshaler;
}
