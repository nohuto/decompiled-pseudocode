/*
 * XREFs of ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1B00
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800A0FC0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 * Callees:
 *     ?CalcNodeWorldBounds@COcclusionContext@@AEBA_NPEBVCVisual@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001EF30 (-CalcNodeWorldBounds@COcclusionContext@@AEBA_NPEBVCVisual@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?RequiresExternalLayer@CVisual@@QEBA_NXZ @ 0x180036E50 (-RequiresExternalLayer@CVisual@@QEBA_NXZ.c)
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x180060010 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18009E420 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z @ 0x18009E720 (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z @ 0x1800FEDF0 (-CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z.c)
 *     ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180136B10 (-GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?PopLightsFromVisual@CLightStack@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z @ 0x18017BA80 (-PopLightsFromVisual@CLightStack@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?IsVisualInAncestorList@CBackdropVisualImage@@QEBA_NPEBVCVisual@@AEBVCVisualTreePath@@@Z @ 0x18019CC60 (-IsVisualInAncestorList@CBackdropVisualImage@@QEBA_NPEBVCVisual@@AEBVCVisualTreePath@@@Z.c)
 *     ?PopClip@COcclusionContext@@AEAAXXZ @ 0x1802347A0 (-PopClip@COcclusionContext@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180240E28 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ContentOnTop@@@details@wil@@QEAA_NXZ @ 0x18026D2AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ContentOnTop@@@details@wil@@QEAA_.c)
 *     ?IsMaskInvert@CCursorVisual@@QEBA_NXZ @ 0x180290728 (-IsMaskInvert@CCursorVisual@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COcclusionContext::PostSubgraph(COcclusionContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 *v4; // r14
  struct CVisual *v5; // rdi
  unsigned int v6; // r12d
  __int64 **TreeData; // rax
  unsigned int v8; // edx
  struct COcclusionInfo *OcclusionInfo; // rax
  int v10; // r13d
  struct COcclusionInfo *v11; // rsi
  __int64 v12; // rdx
  struct COcclusionInfo *v13; // rcx
  __int64 v14; // rax
  CBackdropVisualImage *v15; // rcx
  bool IsVisualInAncestorList; // bl
  char v17; // bl
  char v18; // di
  int v19; // eax
  struct CVisualTree *v20; // rbx
  __m128 v21; // xmm9
  int v22; // eax
  float v23; // xmm12_4
  float v24; // xmm13_4
  float v25; // xmm11_4
  float v26; // xmm10_4
  char v27; // al
  float **v28; // rbx
  float **v29; // rsi
  float *v30; // rdi
  __m128 v31; // xmm1
  float v32; // xmm4_4
  float v33; // xmm2_4
  float v34; // xmm8_4
  __m128 v35; // xmm1
  float v36; // xmm3_4
  float v37; // xmm7_4
  __m128 v38; // xmm1
  float v39; // xmm5_4
  float v40; // xmm6_4
  __m128 v41; // xmm1
  float v42; // xmm6_4
  int v43; // ecx
  int v44; // eax
  float v45; // xmm1_4
  int v46; // ecx
  int v47; // eax
  _QWORD **v48; // rbx
  _QWORD **v49; // r13
  __int64 v50; // rsi
  int v51; // r12d
  float v52; // xmm4_4
  __int32 v53; // xmm0_4
  float v54; // xmm1_4
  float v55; // xmm3_4
  float v56; // xmm2_4
  __int64 v57; // rcx
  __int64 v58; // rcx
  unsigned int v59; // edx
  __int64 v60; // rax
  unsigned int v61; // r10d
  __int64 v62; // r11
  unsigned __int64 v63; // r8
  __int64 v64; // rcx
  __int64 v65; // rdi
  int v66; // edi
  __int64 v67; // rcx
  __int64 v68; // rcx
  unsigned int v69; // edx
  __int64 v70; // rax
  unsigned int v71; // r10d
  __int64 v72; // r11
  unsigned __int64 v73; // r8
  __int64 v74; // rcx
  __int64 v75; // rdi
  int v76; // edi
  __int64 v77; // rcx
  char v78; // di
  const struct CMonitorTransform *MonitorTransform; // rax
  float v80; // xmm4_4
  int v81; // ecx
  float v82; // xmm2_4
  float v83; // xmm3_4
  float v84; // xmm1_4
  int v85; // eax
  float v86; // xmm4_4
  int v87; // ecx
  float v88; // xmm2_4
  float v89; // xmm3_4
  float v90; // xmm1_4
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int v94; // eax
  _DWORD *v95; // rax
  CVisual *v96; // rcx
  __int64 **v97; // rax
  bool v98; // al
  struct CVisual *v100; // [rsp+38h] [rbp-D0h]
  __m128 v101; // [rsp+40h] [rbp-C8h] BYREF
  struct CVisualTree *v102; // [rsp+50h] [rbp-B8h]
  int v103; // [rsp+58h] [rbp-B0h]
  int v104; // [rsp+5Ch] [rbp-ACh]
  bool *v105; // [rsp+60h] [rbp-A8h]
  struct COcclusionInfo *v106; // [rsp+68h] [rbp-A0h]
  _QWORD v107[3]; // [rsp+70h] [rbp-98h] BYREF

  v4 = 0LL;
  v5 = (struct CVisual *)*((_QWORD *)this + 8);
  v6 = 0;
  v105 = a3;
  v102 = a2;
  v103 = 0;
  v100 = v5;
  TreeData = CVisual::FindTreeData(v5, a2);
  v8 = *((_DWORD *)this + 384);
  v107[0] = TreeData;
  OcclusionInfo = CTreeData::GetOcclusionInfo((CTreeData *)TreeData, v8, 0);
  v10 = *((_DWORD *)this + 428);
  v11 = OcclusionInfo;
  v12 = *((unsigned int *)this + 427);
  v13 = OcclusionInfo;
  v106 = OcclusionInfo;
  v14 = *(_QWORD *)OcclusionInfo;
  v104 = v10;
  (*(void (__fastcall **)(struct COcclusionInfo *, __int64))(v14 + 8))(v13, v12);
  v15 = (CBackdropVisualImage *)*((_QWORD *)this + 194);
  if ( !v15 )
    goto LABEL_6;
  IsVisualInAncestorList = CBackdropVisualImage::IsVisualInAncestorList(
                             v15,
                             v5,
                             *((const struct CVisualTreePath **)this + 2));
  if ( CVisual::GetBackdropVisualImage(v5, *((const struct CVisualTreePath **)this + 2)) != *((struct CBackdropVisualImage **)this
                                                                                            + 194) )
  {
    if ( *((_BYTE *)this + 1570) )
    {
LABEL_6:
      v17 = 0;
      if ( (*(unsigned __int8 (__fastcall **)(struct CVisual *))(*(_QWORD *)v5 + 264LL))(v5) )
      {
        if ( !v10 )
        {
          v18 = *((_BYTE *)this + 1566);
          v19 = COcclusionContext::CollectOcclusion(this, v11, v100);
          v103 = v19;
          v6 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x253u, 0LL);
            v20 = v102;
            goto LABEL_191;
          }
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ContentOnTop>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ContentOnTop>::GetImpl'::`2'::impl)
            || !v18 )
          {
            v5 = v100;
          }
          else
          {
            v5 = v100;
            if ( !*((_BYTE *)this + 1566) )
              v17 = *((_BYTE *)this + 1567);
          }
        }
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
          *((_BYTE *)this + 1566) = 0;
        if ( v17 )
          goto LABEL_171;
      }
      if ( v10 && (*((_DWORD *)this + 428) != 1 || (*((_DWORD *)v5 + 24) & 0x100) == 0) )
      {
        v20 = v102;
LABEL_176:
        if ( *((_BYTE *)v11 + 26) )
          COcclusionContext::PopClip(this);
        if ( *((_BYTE *)v11 + 25) )
        {
          v93 = *((_DWORD *)this + 10);
          if ( v93 )
            *((_DWORD *)this + 10) = v93 - 1;
        }
        if ( *((_BYTE *)v11 + 24) )
        {
          v94 = *((_DWORD *)this + 434);
          if ( v94 )
            *((_DWORD *)this + 434) = v94 - 1;
        }
        if ( (*((_BYTE *)v5 + 106) & 4) != 0 )
          --*((_DWORD *)this + 430);
        if ( CVisual::RequiresExternalLayer(v5) )
          --*((_DWORD *)this + 429);
        goto LABEL_189;
      }
      v21 = 0LL;
      v101 = 0LL;
      if ( *((_BYTE *)v11 + 24) )
      {
        v22 = *((_DWORD *)this + 434);
        if ( v22 )
        {
          v21 = *(__m128 *)(*((_QWORD *)this + 216) + 16LL * (unsigned int)(v22 - 1));
          v23 = _mm_shuffle_ps(v21, v21, 170).m128_f32[0];
          v24 = v21.m128_f32[0];
          LODWORD(v25) = _mm_shuffle_ps(v21, v21, 255).m128_u32[0];
          LODWORD(v26) = _mm_shuffle_ps(v21, v21, 85).m128_u32[0];
          if ( v23 > v21.m128_f32[0] && v25 > v26 )
          {
            v27 = 1;
            goto LABEL_29;
          }
        }
        else
        {
          v24 = 0.0;
          LODWORD(v25) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 255).m128_u32[0];
          LODWORD(v23) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 170).m128_u32[0];
          LODWORD(v26) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 85).m128_u32[0];
        }
        v27 = 0;
      }
      else
      {
        v27 = COcclusionContext::CalcNodeWorldBounds((__int64)this, (__int64)v5, &v101);
        v25 = v101.m128_f32[3];
        v23 = v101.m128_f32[2];
        v26 = v101.m128_f32[1];
        v24 = v101.m128_f32[0];
        v21 = v101;
      }
LABEL_29:
      if ( !v27 )
        goto LABEL_171;
      if ( *((_DWORD *)this + 430) )
        *((_BYTE *)this + 1568) = 1;
      else
        *((_BYTE *)this + 1569) = 1;
      if ( (*(unsigned __int8 (__fastcall **)(struct CVisual *))(*(_QWORD *)v5 + 280LL))(v5) )
      {
        v28 = (float **)*((_QWORD *)this + 225);
        v29 = (float **)*((_QWORD *)this + 226);
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v28 == v29 )
            {
              v5 = v100;
              v11 = v106;
              goto LABEL_67;
            }
            v30 = *v28;
            v101 = *(__m128 *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)*v28 + 256LL))(*(_QWORD *)*v28) + 8);
            v31 = v101;
            v32 = v101.m128_f32[0];
            if ( v24 > v101.m128_f32[0] )
            {
              v32 = v24;
              v31.m128_f32[0] = v24;
              v101 = v31;
            }
            v33 = _mm_shuffle_ps(v31, v31, 85).m128_f32[0];
            v34 = v33;
            if ( v26 > v33 )
            {
              v33 = v26;
              v34 = v26;
              v35 = _mm_shuffle_ps(v101, v101, 225);
              v35.m128_f32[0] = v26;
              v31 = _mm_shuffle_ps(v35, v35, 225);
              v101 = v31;
            }
            v36 = _mm_shuffle_ps(v31, v31, 170).m128_f32[0];
            v37 = v36;
            if ( v36 > v23 )
            {
              v36 = v23;
              v37 = v23;
              v38 = _mm_shuffle_ps(v101, v101, 210);
              v38.m128_f32[0] = v23;
              v31 = _mm_shuffle_ps(v38, v38, 201);
              v101 = v31;
            }
            v39 = _mm_shuffle_ps(v31, v31, 255).m128_f32[0];
            v40 = v39;
            if ( v39 > v25 )
            {
              v39 = v25;
              v40 = v25;
              v41 = _mm_shuffle_ps(v101, v101, 147);
              v41.m128_f32[0] = v25;
              v31 = _mm_shuffle_ps(v41, v41, 57);
              v101 = v31;
            }
            if ( v37 > v32 && v40 > v34 )
              break;
LABEL_65:
            ++v28;
          }
          v42 = v30[4836];
          if ( v30[4838] <= v42 || (v43 = 0, v30[4839] <= v30[4837]) )
            v43 = 1;
          if ( v36 <= v32 || (v44 = 0, v39 <= v33) )
            v44 = 1;
          if ( !v43 )
          {
            if ( !v44 )
            {
              if ( v42 > v32 )
                v30[4836] = v32;
              if ( v30[4837] > v33 )
                v30[4837] = v33;
              if ( v36 > v30[4838] )
                v30[4838] = v36;
              if ( v39 > v30[4839] )
                v30[4839] = v39;
            }
            goto LABEL_65;
          }
          if ( v44 )
          {
            *((_QWORD *)v30 + 2419) = 0LL;
            ++v28;
            *((_QWORD *)v30 + 2418) = 0LL;
          }
          else
          {
            *((__m128 *)v30 + 1209) = v31;
            ++v28;
          }
        }
      }
LABEL_67:
      v45 = *((float *)this + 150);
      if ( *((float *)this + 152) <= v45 || (v46 = 0, *((float *)this + 153) <= *((float *)this + 151)) )
        v46 = 1;
      if ( v23 <= v24 || (v47 = 0, v25 <= v26) )
        v47 = 1;
      if ( v46 )
      {
        if ( v47 )
        {
          *((_QWORD *)this + 76) = 0LL;
          *((_QWORD *)this + 75) = 0LL;
        }
        else
        {
          *(__m128 *)((char *)this + 600) = v21;
        }
      }
      else if ( !v47 )
      {
        if ( v45 > v24 )
          *((float *)this + 150) = v24;
        if ( *((float *)this + 151) > v26 )
          *((float *)this + 151) = v26;
        if ( v23 > *((float *)this + 152) )
          *((float *)this + 152) = v23;
        if ( v25 > *((float *)this + 153) )
          *((float *)this + 153) = v25;
      }
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ContentOnTop>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ContentOnTop>::GetImpl'::`2'::impl) )
      {
        v48 = (_QWORD **)*((_QWORD *)this + 225);
        v49 = (_QWORD **)*((_QWORD *)this + 226);
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v48 == v49 )
            {
              v11 = v106;
              v6 = v103;
              v10 = v104;
              goto LABEL_171;
            }
            v50 = (__int64)*v48;
            v51 = *((_DWORD *)this + 430);
            v101 = *(__m128 *)((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v48 + 256LL))(**v48) + 8);
            v52 = v101.m128_f32[0];
            if ( v24 > v101.m128_f32[0] )
            {
              v52 = v24;
              v101.m128_f32[0] = v24;
            }
            v53 = v101.m128_i32[1];
            if ( v26 > v101.m128_f32[1] )
            {
              v101.m128_f32[1] = v26;
              v53 = LODWORD(v26);
            }
            v54 = v101.m128_f32[2];
            v55 = *(float *)&v53;
            if ( v101.m128_f32[2] > v23 )
            {
              v101.m128_f32[2] = v23;
              v54 = v23;
            }
            v56 = v101.m128_f32[3];
            if ( v101.m128_f32[3] > v25 )
            {
              v101.m128_f32[3] = v25;
              v56 = v25;
              v55 = *(float *)&v53;
            }
            if ( v54 > v52 && v56 > v55 )
              break;
LABEL_119:
            ++v48;
          }
          v57 = *(_QWORD *)(v50 + 19224);
          if ( v5 != (struct CVisual *)v57 )
          {
            v78 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)v5 + 280LL))(v5);
            goto LABEL_127;
          }
          if ( !*(_BYTE *)(v57 + 745) )
          {
            if ( *(_BYTE *)(v50 + 19593) )
            {
              v58 = *(_QWORD *)(v57 + 704);
              v59 = 0;
              v60 = *(_QWORD *)(v50 + 19232);
              v61 = *(_DWORD *)(v50 + 19240);
              v107[1] = v60;
              v62 = *(_QWORD *)(v58 + 88);
              v63 = 0xCCCCCCCCCCCCCCCDuLL * ((*(_QWORD *)(v58 + 96) - v62) >> 5);
              if ( v63 )
              {
                v64 = 0LL;
                while ( 1 )
                {
                  v65 = v62 + 160 * v64;
                  if ( *(_DWORD *)v65 == (_DWORD)v60 && *(_QWORD *)(v65 + 4) == __PAIR64__(v61, HIDWORD(v107[1])) )
                    break;
                  v64 = ++v59;
                  if ( v59 >= v63 )
                    goto LABEL_121;
                }
                EnterCriticalSection(&g_CursorManager);
                v66 = *(_DWORD *)(v65 + 152);
                LeaveCriticalSection(&g_CursorManager);
                if ( v66 != 2 )
                {
                  if ( CCommonRegistryData::m_dwOverlayTestMode == 5 )
                    goto LABEL_118;
                  if ( *(_DWORD *)(v50 + 40) <= 1u )
                    goto LABEL_118;
                  if ( *(_BYTE *)(v50 + 19582) )
                    goto LABEL_118;
                  if ( !CCursorVisual::IsMaskInvert(*(CCursorVisual **)(v50 + 19224)) )
                    goto LABEL_118;
                  v68 = *(_QWORD *)(v67 + 704);
                  v69 = 0;
                  v70 = *(_QWORD *)(v50 + 19232);
                  v71 = *(_DWORD *)(v50 + 19240);
                  v107[1] = v70;
                  v72 = *(_QWORD *)(v68 + 88);
                  v73 = 0xCCCCCCCCCCCCCCCDuLL * ((*(_QWORD *)(v68 + 96) - v72) >> 5);
                  if ( !v73 )
                    goto LABEL_118;
                  v74 = 0LL;
                  while ( 1 )
                  {
                    v75 = v72 + 160 * v74;
                    if ( *(_DWORD *)v75 == (_DWORD)v70 && *(_QWORD *)(v75 + 4) == __PAIR64__(v71, HIDWORD(v107[1])) )
                      break;
                    v74 = ++v69;
                    if ( v69 >= v73 )
                      goto LABEL_118;
                  }
                  EnterCriticalSection(&g_CursorManager);
                  v76 = *(_DWORD *)(v75 + 152);
                  LeaveCriticalSection(&g_CursorManager);
                  if ( v76 != 1 )
                  {
LABEL_118:
                    v5 = v100;
                    goto LABEL_119;
                  }
                }
              }
            }
          }
LABEL_121:
          v77 = *(_QWORD *)(*(_QWORD *)(v50 + 19224) + 704LL);
          v78 = v77 && *(_QWORD *)(v77 + 176) && *(_BYTE *)(v77 + 81);
LABEL_127:
          *(_OWORD *)&v107[1] = 0LL;
          MonitorTransform = COverlayContext::GetMonitorTransform((COverlayContext *)v50);
          CMILMatrix::Transform2DBoundsHelper<0>((char *)MonitorTransform + 52, &v101, &v107[1]);
          v80 = *(float *)(v50 + 19360);
          if ( *(float *)(v50 + 19368) <= v80 || (v81 = 0, *(float *)(v50 + 19372) <= *(float *)(v50 + 19364)) )
            v81 = 1;
          v82 = *(float *)&v107[2];
          v83 = *((float *)&v107[2] + 1);
          v84 = *((float *)&v107[1] + 1);
          if ( *(float *)&v107[2] <= *(float *)&v107[1]
            || (v85 = 0, *((float *)&v107[2] + 1) <= *((float *)&v107[1] + 1)) )
          {
            v85 = 1;
          }
          if ( v81 )
          {
            if ( v85 )
            {
              *(_QWORD *)(v50 + 19368) = 0LL;
              *(_QWORD *)(v50 + 19360) = 0LL;
            }
            else
            {
              *(_OWORD *)(v50 + 19360) = *(_OWORD *)&v107[1];
            }
          }
          else if ( !v85 )
          {
            if ( v80 > *(float *)&v107[1] )
              *(_DWORD *)(v50 + 19360) = v107[1];
            if ( *(float *)(v50 + 19364) > v84 )
              *(float *)(v50 + 19364) = v84;
            if ( v82 > *(float *)(v50 + 19368) )
              *(float *)(v50 + 19368) = v82;
            if ( v83 > *(float *)(v50 + 19372) )
              *(float *)(v50 + 19372) = v83;
          }
          if ( v78 )
          {
            v86 = *(float *)(v50 + 19376);
            if ( *(float *)(v50 + 19384) <= v86 || (v87 = 0, *(float *)(v50 + 19388) <= *(float *)(v50 + 19380)) )
              v87 = 1;
            v88 = v101.m128_f32[2];
            v89 = v101.m128_f32[3];
            v90 = v101.m128_f32[1];
            if ( v101.m128_f32[2] <= v101.m128_f32[0] || (v91 = 0, v101.m128_f32[3] <= v101.m128_f32[1]) )
              v91 = 1;
            if ( v87 )
            {
              if ( v91 )
              {
                *(_QWORD *)(v50 + 19384) = 0LL;
                *(_QWORD *)(v50 + 19376) = 0LL;
              }
              else
              {
                *(__m128 *)(v50 + 19376) = v101;
              }
            }
            else if ( !v91 )
            {
              if ( v86 > v101.m128_f32[0] )
                *(_DWORD *)(v50 + 19376) = v101.m128_i32[0];
              if ( *(float *)(v50 + 19380) > v90 )
                *(float *)(v50 + 19380) = v90;
              if ( v88 > *(float *)(v50 + 19384) )
                *(float *)(v50 + 19384) = v88;
              if ( v89 > *(float *)(v50 + 19388) )
                *(float *)(v50 + 19388) = v89;
            }
          }
          v5 = v100;
          if ( v51 )
            *(_BYTE *)(v50 + 19392) = 1;
          else
            *(_BYTE *)(v50 + 19393) = 1;
          ++v48;
        }
      }
LABEL_171:
      v20 = v102;
      if ( !v10 )
      {
        CLightStack::PopLightsFromVisual((COcclusionContext *)((char *)this + 224), v5, v102);
        if ( *((_BYTE *)v11 + 27) )
        {
          v92 = *((_DWORD *)this + 446);
          if ( v92 )
            *((_DWORD *)this + 446) = v92 - 1;
        }
      }
      goto LABEL_176;
    }
    if ( IsVisualInAncestorList )
    {
      *((_BYTE *)this + 1570) = 1;
      goto LABEL_6;
    }
  }
  v20 = v102;
LABEL_189:
  if ( v10 )
    --*((_DWORD *)this + 428);
LABEL_191:
  v95 = (_DWORD *)*((_QWORD *)this + 57);
  *((_DWORD *)this + 427) += 2;
  if ( *v95 )
    goto LABEL_192;
  if ( g_pComposition )
    v4 = (__int64 *)*((_QWORD *)g_pComposition + 111);
  if ( *(__int64 **)(v107[0] + 208LL) == v4 )
  {
LABEL_192:
    *v105 = 1;
  }
  else
  {
    v96 = (CVisual *)*((_QWORD *)this + 9);
    v98 = 0;
    if ( v96 )
    {
      v97 = CVisual::FindTreeData(v96, v20);
      if ( v97 )
      {
        if ( v97[26] == v4 )
          v98 = 1;
      }
    }
    *v105 = v98;
  }
  return v6;
}
