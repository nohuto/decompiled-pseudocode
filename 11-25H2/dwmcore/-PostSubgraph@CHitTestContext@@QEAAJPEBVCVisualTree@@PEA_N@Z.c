/*
 * XREFs of ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B42D0
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800B4E20 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180019310 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x18001BC20 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18007AE20 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18007B390 (-HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800B6FD0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x18010B728 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?HasContent@CVisual@@UEBA_NXZ @ 0x18010B850 (-HasContent@CVisual@@UEBA_NXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180137C40 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x18013C654 (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ @ 0x180229978 (-ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x1802637BC (-MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHitTestContext::PostSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  CWindowNode *v3; // rdi
  __int64 v5; // rax
  __int64 v7; // r12
  unsigned int v9; // ebp
  __int64 **v10; // rsi
  int v11; // eax
  CWindowNode *v12; // r8
  bool (__fastcall *v14)(CVisual *__hidden); // rax
  int v15; // ecx
  _DWORD *v16; // rax
  __m128 *v17; // rbp
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  float v20; // xmm11_4
  float v21; // xmm10_4
  __m128 v22; // xmm5
  float v23; // xmm7_4
  float v24; // xmm8_4
  float v25; // xmm9_4
  float v26; // xmm6_4
  float v27; // xmm8_4
  float v28; // xmm7_4
  __int64 v29; // r8
  __int64 v30; // rax
  _BYTE *v31; // rdx
  __int64 i; // rcx
  __int64 ****v33; // rcx
  __int64 ***v34; // rcx
  __int64 **j; // rax
  float v36; // xmm4_4
  float v37; // xmm2_4
  __int64 v38; // rdx
  float v39; // xmm3_4
  float v40; // xmm2_4
  __int64 (__fastcall *v41)(CSurfaceBrush **, char, const struct D2D_POINT_2F *, bool *); // rax
  int v42; // eax
  _DWORD *v43; // r9
  __int64 v44; // r10
  _BYTE *v45; // r11
  unsigned int v46; // eax
  _BYTE *v47; // rcx
  __int64 *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  _BYTE *v53; // rdx
  __int64 m; // rcx
  __int64 ****v55; // rcx
  __int64 ***v56; // rcx
  __int64 **n; // rax
  unsigned int ii; // eax
  __int64 *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  bool v62; // r13
  struct CTreeEffect *(__fastcall *v63)(CLayerVisual *); // rax
  char v65; // al
  bool v66; // zf
  bool HasContent; // al
  __int64 v68; // rax
  _DWORD *v69; // r8
  __int64 v70; // rax
  _BYTE *v71; // rdx
  __int64 k; // rcx
  _QWORD *v73; // rcx
  CTransform3D *Transform3DEffectNoRef; // rax
  CMILMatrix *Matrix; // rax
  int v76; // eax
  CWindowNode **v77; // rdx
  const struct CInteraction *InteractionInternal; // rax
  bool v79; // dl
  void *retaddr; // [rsp+118h] [rbp+0h]
  bool v81; // [rsp+120h] [rbp+8h] BYREF
  struct D2D_POINT_2F v82; // [rsp+128h] [rbp+10h] BYREF
  CWindowNode *v83; // [rsp+130h] [rbp+18h] BYREF

  v3 = (CWindowNode *)*((_QWORD *)this + 2);
  v5 = *(_QWORD *)a2;
  v7 = *((_QWORD *)this + 3);
  *a3 = 1;
  v9 = 0;
  v83 = v3;
  v10 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v5 + 184))(a2) )
  {
    v10 = (__int64 **)((char *)v3 + 328);
  }
  else
  {
    v29 = *((_QWORD *)v3 + 29);
    if ( *(int *)v29 < 0 )
    {
      v30 = *(unsigned int *)(v29 + 4);
      v31 = (_BYTE *)(v29 + 8);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v30; ++v31 )
      {
        if ( *v31 == 1 )
          break;
        i = (unsigned int)(i + 1);
      }
      v33 = (unsigned int)i >= (unsigned int)v30
          ? 0LL
          : (__int64 ****)(v29 + v30 + 15 + 8 * i - (((_BYTE)v30 + 15) & 7));
      v34 = *v33;
      if ( v34 )
      {
        for ( j = *v34; j != (__int64 **)v34; j = (__int64 **)*j )
        {
          if ( j[4] == (__int64 *)a2 )
          {
            v10 = j - 43;
            break;
          }
        }
      }
    }
  }
  if ( *((_QWORD *)this + 13) )
    goto LABEL_4;
  if ( *((_DWORD *)v3 + 28) == 1 )
  {
    v62 = v7 && *(_DWORD *)(v7 + 112) == 1;
    v63 = *(struct CTreeEffect *(__fastcall **)(CLayerVisual *))(*(_QWORD *)v3 + 224LL);
    if ( v63 == CLayerVisual::GetTreeEffect ? (struct CTreeEffect *)*((_QWORD *)v3 + 85) : v63(v3) )
      goto LABEL_95;
    v69 = (_DWORD *)*((_QWORD *)v3 + 29);
    if ( (*v69 & 0x800000) == 0 )
      goto LABEL_116;
    v70 = (unsigned int)v69[1];
    v71 = v69 + 2;
    for ( k = 0LL; (unsigned int)k < (unsigned int)v70; ++v71 )
    {
      if ( *v71 == 9 )
        break;
      k = (unsigned int)(k + 1);
    }
    v73 = (unsigned int)k >= (unsigned int)v70
        ? 0LL
        : (_QWORD *)((char *)v69 + 8 * k - (((_BYTE)v70 + 15) & 7) + v70 + 15);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v73 + 64LL))(*v73, 60LL) )
LABEL_95:
      v65 = 1;
    else
LABEL_116:
      v65 = 0;
    if ( v62 )
    {
      v66 = v65 == 0;
    }
    else
    {
      v68 = *((_QWORD *)v3 + 10);
      if ( (v68 & 2) != 0 )
        v68 = *(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v68) = v68 & 1;
      v66 = (_DWORD)v68 == 0;
    }
    if ( !v66 )
      goto LABEL_4;
  }
  if ( !*((_BYTE *)v3 + 108) )
    goto LABEL_4;
  v14 = *(bool (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v3 + 256LL);
  if ( v14 == CSpriteVisual::HasContent )
  {
    if ( !CVisual::HasContent(v3) && (**((_DWORD **)v3 + 29) & 0x20000) == 0 )
      goto LABEL_4;
  }
  else
  {
    if ( v14 == CVisual::HasContent )
      HasContent = CVisual::HasContent(v3);
    else
      HasContent = v14(v3);
    if ( !HasContent )
      goto LABEL_4;
  }
  v15 = *((_DWORD *)this + 44);
  v16 = 0LL;
  if ( v15 )
    v16 = (_DWORD *)(*((_QWORD *)this + 21) + 4LL * (unsigned int)(v15 - 1));
  if ( *v16 != 1
    || (Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef(v3)) == 0LL
    || (Matrix = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)v3 + 18),
        CMILMatrix::IsFacingUser(Matrix)) )
  {
    v82 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
    {
      v17 = (__m128 *)((char *)v3 + 328);
LABEL_28:
      if ( v17 )
      {
        CVisual::EnsureWorldTransform(v3, a2, (struct CTreeData *)v17);
        if ( !v17[14].m128_u64[0] )
          ModuleFailFastForHRESULT(-2003292412, retaddr);
        v18 = v17[18];
        v19 = v17[17];
        v20 = *((float *)this + 20);
        v21 = *((float *)this + 21);
        v22 = v17[20];
        v9 = 0;
        v23 = _mm_shuffle_ps(v19, v19, 255).m128_f32[0];
        v24 = _mm_shuffle_ps(v18, v18, 255).m128_f32[0];
        v25 = (float)(v23 * v20) - v19.m128_f32[0];
        v26 = (float)(v24 * v20) - v18.m128_f32[0];
        v27 = (float)(v24 * v21) - _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
        v28 = (float)(v23 * v21) - _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
        if ( (float)(v25 * v27) == (float)(v26 * v28) )
        {
          v3 = v83;
        }
        else
        {
          v3 = v83;
          v36 = (float)(v25 * v27) - (float)(v26 * v28);
          v38 = *((unsigned __int8 *)this + 216);
          v81 = 0;
          v37 = _mm_shuffle_ps(v22, v22, 255).m128_f32[0];
          LOBYTE(v38) = v38 & 1;
          v39 = (float)(v37 * v20) - v22.m128_f32[0];
          v40 = (float)(v37 * v21) - _mm_shuffle_ps(v22, v22, 85).m128_f32[0];
          v82.x = (float)((float)(v40 * v26) - (float)(v39 * v27)) / v36;
          v82.y = (float)((float)(v39 * v28) - (float)(v40 * v25)) / v36;
          v41 = *(__int64 (__fastcall **)(CSurfaceBrush **, char, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v83 + 312LL);
          if ( v41 == CVisual::HitTestContent )
          {
            v42 = CVisual::HitTestContent((CSurfaceBrush **)v83, v38, &v82, &v81);
          }
          else if ( v41 == CWindowNode::HitTestContent )
          {
            v42 = CWindowNode::HitTestContent((CSurfaceBrush **)v83, v38, &v82, &v81);
          }
          else
          {
            v42 = v41((CSurfaceBrush **)v83, v38, &v82, &v81);
          }
          v9 = v42;
          if ( v42 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x117u, 0LL);
            return v9;
          }
          if ( v81 )
            *((_QWORD *)this + 13) = v3;
        }
        goto LABEL_4;
      }
    }
    else
    {
      v51 = *((_QWORD *)v3 + 29);
      if ( *(int *)v51 < 0 )
      {
        v52 = *(unsigned int *)(v51 + 4);
        v53 = (_BYTE *)(v51 + 8);
        for ( m = 0LL; (unsigned int)m < (unsigned int)v52; ++v53 )
        {
          if ( *v53 == 1 )
            break;
          m = (unsigned int)(m + 1);
        }
        v55 = (unsigned int)m >= (unsigned int)v52
            ? 0LL
            : (__int64 ****)(v52 + 15 + v51 + 8 * m - (((_BYTE)v52 + 15) & 7));
        v56 = *v55;
        if ( v56 )
        {
          for ( n = *v56; n != (__int64 **)v56; n = (__int64 **)*n )
          {
            v17 = (__m128 *)(n - 43);
            if ( n[4] == (__int64 *)a2 )
              goto LABEL_28;
          }
        }
      }
    }
    v9 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x6AAu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x10Fu, 0LL);
    return v9;
  }
LABEL_4:
  if ( *((_DWORD *)v3 + 53) != -1 )
  {
    v11 = *((_DWORD *)this + 44);
    if ( v11 )
      *((_DWORD *)this + 44) = v11 - 1;
  }
  if ( *((_BYTE *)v10 + 14) )
  {
    v76 = *((_DWORD *)this + 50);
    if ( v76 )
      *((_DWORD *)this + 50) = v76 - 1;
  }
  if ( !*((_QWORD *)this + 14) )
  {
    v12 = (CWindowNode *)*((_QWORD *)this + 13);
    if ( v12 == v3 )
    {
      while ( v12 != *(CWindowNode **)(*((_QWORD *)a2 + 9) + 88LL) )
      {
        v43 = (_DWORD *)*((_QWORD *)v12 + 29);
        if ( (*v43 & 0x1000000) != 0 )
        {
          v44 = (unsigned int)v43[1];
          v45 = v43 + 2;
          v46 = 0;
          if ( (_DWORD)v44 )
          {
            v47 = v43 + 2;
            do
            {
              if ( *v47 == 8 )
                break;
              ++v46;
              ++v47;
            }
            while ( v46 < (unsigned int)v44 );
          }
          v48 = v46 >= (unsigned int)v44
              ? 0LL
              : (__int64 *)((char *)v43 + v44 + 8LL * v46 - (((_BYTE)v44 + 15) & 7) + 15);
          v49 = *v48;
          if ( v49 )
          {
            v50 = *(_QWORD *)(v49 + 112);
            if ( v50 )
            {
              if ( *(_QWORD *)(v50 + 64) )
              {
                for ( ii = 0; ii < (unsigned int)v44; ++v45 )
                {
                  if ( *v45 == 8 )
                    break;
                  ++ii;
                }
                if ( ii >= (unsigned int)v44 )
                  v59 = 0LL;
                else
                  v59 = (__int64 *)((char *)v43 + 8LL * ii - (((_BYTE)v44 + 15) & 7) + v44 + 15);
                v60 = *v59;
                if ( v60
                  && (v61 = *(_QWORD *)(v60 + 112)) != 0
                  && *(_QWORD *)(v61 + 64)
                  && (*(_BYTE *)(v60 + 200) & 4) != 0 )
                {
                  *((_QWORD *)this + 13) = 0LL;
                  *((_QWORD *)this + 20) = v12;
                }
                else
                {
                  *((_QWORD *)this + 20) = 0LL;
                }
                break;
              }
            }
          }
        }
        v12 = (CWindowNode *)*((_QWORD *)v12 + 11);
      }
    }
    if ( v3 == *((CWindowNode **)this + 20) )
    {
      if ( v3 == *((CWindowNode **)this + 19) )
      {
        InteractionInternal = CVisual::GetInteractionInternal(v3);
        v79 = 0;
      }
      else
      {
        v77 = (CWindowNode **)*((_QWORD *)this + 17);
        if ( v77 == *((CWindowNode ***)this + 18) )
        {
          std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
            (char *)this + 128,
            v77,
            &v83);
          v3 = v83;
        }
        else
        {
          *v77 = v3;
          *((_QWORD *)this + 17) += 8LL;
        }
        *((_QWORD *)this + 19) = v3;
        InteractionInternal = CVisual::GetInteractionInternal(v3);
        v79 = 1;
      }
      InputTraceLogging::DWM::MarkForFurtherEvaluation(InteractionInternal, v79);
      *((_QWORD *)this + 20) = 0LL;
    }
    if ( *((CWindowNode **)this + 19) == v3 )
      *((_QWORD *)this + 19) = v7;
  }
  if ( *((_QWORD *)this + 13) )
  {
    if ( *((CWindowNode **)this + 14) == v3 )
    {
      *((_QWORD *)this + 13) = 0LL;
      *((_BYTE *)this + 120) = 1;
      InputTraceLogging::GestureTargeting::ForcePalmRejection();
    }
    else
    {
      *a3 = 0;
    }
  }
  if ( *((CWindowNode **)this + 14) == v3 )
    *((_QWORD *)this + 14) = 0LL;
  return v9;
}
