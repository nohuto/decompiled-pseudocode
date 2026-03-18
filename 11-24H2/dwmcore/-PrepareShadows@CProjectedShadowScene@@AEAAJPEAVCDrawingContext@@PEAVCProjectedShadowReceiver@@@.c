/*
 * XREFs of ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18016865C
 * Callers:
 *     ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180207678 (-DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18009E420 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x1801640B4 (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVi.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z @ 0x180164598 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V-$span@PEAVCVisual@@$0.c)
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x1801655C4 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x1801667A0 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x180168000 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x180168028 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 *     ?CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z @ 0x1801681C8 (-CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x18016823C (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x1801684F0 (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180168C64 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAVCProjectedShadowCaster@@@Z @ 0x1801DA5A8 (-erase@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1801DAB88 (-clear@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1801E8D90 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ??$_Try_emplace@AEBQEAVCProjectedShadowCaster@@$$V@?$map@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAVCProjectedShadowCaster@@@Z @ 0x1801E9768 (--$_Try_emplace@AEBQEAVCProjectedShadowCaster@@$$V@-$map@PEAVCProjectedShadowCaster@@V-$com_ptr_.c)
 *     ?SetTransforms@CProjectedShadow@@QEAAXAEBVCMILMatrix@@00@Z @ 0x180219B40 (-SetTransforms@CProjectedShadow@@QEAAXAEBVCMILMatrix@@00@Z.c)
 *     ?SetShadowOpacity@CProjectedShadow@@QEAAXM@Z @ 0x18021A7FC (-SetShadowOpacity@CProjectedShadow@@QEAAXM@Z.c)
 *     ?SetBlurRadius@CProjectedShadow@@QEAAXM@Z @ 0x18021B2A8 (-SetBlurRadius@CProjectedShadow@@QEAAXM@Z.c)
 *     ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x18021B7B4 (-Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCP.c)
 *     ?CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z @ 0x18021C574 (-CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z.c)
 *     ??0CProjectedShadow@@QEAA@PEAVCComposition@@@Z @ 0x18021C894 (--0CProjectedShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ??2CProjectedShadow@@SAPEAX_K@Z @ 0x180250340 (--2CProjectedShadow@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowScene::PrepareShadows(
        CProjectedShadowScene *this,
        struct CDrawingContext *a2,
        struct CProjectedShadowReceiver *a3)
{
  const struct CVisualTree *v3; // r13
  struct CVisual *v7; // rax
  CVisual *v8; // rax
  __int64 **TreeData; // rax
  __int64 *v10; // rdx
  __m128 *ReceiverEntry; // r15
  CProjectedShadowScene *v12; // rcx
  int updated; // eax
  unsigned int v14; // edi
  __int64 *v15; // rcx
  int v16; // eax
  __int64 *v17; // rbx
  struct CCompositionLight *v18; // r14
  __int64 v19; // rdx
  float z; // xmm6_4
  float v21; // xmm7_4
  const struct CVisualTree *v22; // rdx
  CProjectedShadowScene *v23; // rcx
  float v24; // xmm0_4
  unsigned __int64 *v26; // rax
  CProjectedShadow *v27; // r14
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  struct CCompositionLight *v30; // r12
  const struct CVisualTree *v31; // rdx
  const struct CVisualTree *v32; // rdx
  _QWORD **v33; // rdi
  _QWORD *i; // rbx
  CProjectedShadow *v35; // rax
  CProjectedShadow *v36; // rax
  int v37; // eax
  _QWORD *v38; // rax
  unsigned int v39; // [rsp+28h] [rbp-E0h]
  struct CCompositionLight *v40; // [rsp+38h] [rbp-D0h] BYREF
  struct CCompositionLight *v41; // [rsp+40h] [rbp-C8h]
  struct D2D_VECTOR_4F v42; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v43; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v44; // [rsp+68h] [rbp-A0h]
  __int128 v45; // [rsp+78h] [rbp-90h]
  __int128 v46; // [rsp+88h] [rbp-80h]
  int v47; // [rsp+98h] [rbp-70h]
  struct CCompositionLight *v48; // [rsp+A0h] [rbp-68h]
  __int64 *v49; // [rsp+A8h] [rbp-60h]
  _QWORD v50[2]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v51[2]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v52[2]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int64 v53[2]; // [rsp+E8h] [rbp-20h] BYREF
  _OWORD v54[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v55; // [rsp+138h] [rbp+30h]
  _OWORD v56[4]; // [rsp+148h] [rbp+40h] BYREF
  int v57; // [rsp+188h] [rbp+80h]
  _OWORD v58[4]; // [rsp+198h] [rbp+90h] BYREF
  int v59; // [rsp+1D8h] [rbp+D0h]
  _OWORD v60[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  int v61; // [rsp+228h] [rbp+120h]
  struct D2D_VECTOR_4F v62; // [rsp+238h] [rbp+130h] BYREF
  _BYTE v63[16]; // [rsp+248h] [rbp+140h] BYREF
  _BYTE v64[64]; // [rsp+258h] [rbp+150h] BYREF
  int v65; // [rsp+2E0h] [rbp+1D8h]
  struct CProjectedShadowCaster *v67; // [rsp+2F0h] [rbp+1E8h] BYREF

  v3 = (const struct CVisualTree *)*((_QWORD *)a2 + 993);
  v41 = (struct CCompositionLight *)*((_QWORD *)a3 + 9);
  if ( CProjectedShadowScene::IsEmptyProjection(this)
    || (v7 = (struct CVisual *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 200LL))(*((_QWORD *)this + 13)),
        !CProjectedShadowScene::IsValidVisual(v3, v7)) )
  {
    v33 = (_QWORD **)*((_QWORD *)this + 11);
    for ( i = *v33; i != v33; i = (_QWORD *)*i )
      std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear(i + 3);
  }
  else
  {
    if ( *((_QWORD *)this + 14) )
    {
      v8 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 200LL))(*((_QWORD *)this + 13));
      TreeData = CVisual::FindTreeData(v8, v3);
      v10 = (__int64 *)*((_QWORD *)this + 14);
      if ( v10 <= TreeData[28] )
        v10 = TreeData[28];
    }
    else
    {
      v10 = *(__int64 **)(*((_QWORD *)this + 3) + 888LL);
    }
    *((_QWORD *)this + 14) = v10;
    ReceiverEntry = (__m128 *)CProjectedShadowScene::FindReceiverEntry(this, a3);
    updated = CProjectedShadowScene::UpdateReceiverEntry(v12, a2, ReceiverEntry);
    v14 = updated;
    if ( updated < 0 )
    {
      v39 = 819;
LABEL_19:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, v39, 0LL);
      return v14;
    }
    if ( ReceiverEntry[6].m128_i8[4] )
    {
      v15 = (__int64 *)*((_QWORD *)this + 9);
      v16 = 0;
      v49 = v15;
      v17 = (__int64 *)*v15;
      while ( v17 != v15 )
      {
        v65 = v16 + 1;
        if ( v16 + 1 > 5 )
          break;
        v67 = (struct CProjectedShadowCaster *)v17[2];
        v18 = (struct CCompositionLight *)*((_QWORD *)v67 + 9);
        v48 = v18;
        if ( v18 == v41 )
          goto LABEL_16;
        v14 = CProjectedShadowScene::UpdateCasterEntry(this, v3, (struct CProjectedShadowScene::CasterEntry *)(v17 + 2));
        if ( (v14 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x34Fu, 0LL);
          return v14;
        }
        if ( !*((_BYTE *)v17 + 168) )
          goto LABEL_16;
        v59 = 0;
        *(_QWORD *)&v42.x = v18;
        v40 = (struct CCompositionLight *)v58;
        v50[1] = &v40;
        v51[1] = (unsigned __int64)&v42;
        v50[0] = 1LL;
        v51[0] = 1LL;
        updated = CVisual::CalcSrcToDestVisualTransform(v3, v19, v51, v41, (__int64)v50);
        v14 = updated;
        if ( updated < 0 )
        {
          v39 = 856;
          goto LABEL_19;
        }
        v42 = *(struct D2D_VECTOR_4F *)&_xmm.r;
        z = CMILMatrix::Transform4DVector((CMILMatrix *)v58, &v62, &v42)->z;
        v21 = CProjectedShadowScene::CalculateOpacity(this, z);
        v24 = CProjectedShadowScene::CalculateBlurRadius(this, z);
        if ( COERCE_FLOAT(LODWORD(v21) & _xmm) >= 0.0000011920929
          && CProjectedShadowScene::IsCasterInBetweenLightAndReceiver(
               v23,
               v22,
               (const struct CProjectedShadowScene::CasterEntry *)(v17 + 2),
               (const struct CProjectedShadowScene::ReceiverEntry *)ReceiverEntry,
               LODWORD(v24)) )
        {
          v26 = (unsigned __int64 *)std::map<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>::_Try_emplace<CProjectedShadowCaster * const &,>(
                                      &ReceiverEntry->m128_u16[4],
                                      v63,
                                      &v67);
          v27 = *(CProjectedShadow **)(*v26 + 40);
          if ( !v27 )
          {
            v35 = (CProjectedShadow *)CProjectedShadow::operator new(*v26);
            if ( v35 )
            {
              v36 = CProjectedShadow::CProjectedShadow(v35, *((struct CComposition **)this + 3));
              v40 = v36;
              v27 = v36;
              if ( v36 )
                (*(void (__fastcall **)(CProjectedShadow *))(*(_QWORD *)v36 + 8LL))(v36);
            }
            else
            {
              v27 = 0LL;
              v40 = 0LL;
            }
            v37 = CProjectedShadow::Initialize(v27, this, v67, a3);
            v14 = v37;
            if ( v37 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v37, 0x36Au, 0LL);
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v40);
              return v14;
            }
            v38 = (_QWORD *)std::map<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>::_Try_emplace<CProjectedShadowCaster * const &,>(
                              &ReceiverEntry->m128_u16[4],
                              v64,
                              &v67);
            wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
              *v38 + 40LL,
              &v40);
            if ( v27 )
              (*(void (__fastcall **)(CProjectedShadow *))(*(_QWORD *)v27 + 16LL))(v27);
          }
          CProjectedShadow::SetShadowOpacity(v27, v21);
          CProjectedShadow::SetBlurRadius(v27, v24);
          v29 = *((_QWORD *)v27 + 13);
          if ( v29 < *((_QWORD *)this + 14) || v29 < ReceiverEntry[1].m128_u64[1] || v29 < v17[3] )
          {
            v30 = v48;
            v61 = 0;
            *(_QWORD *)&v42.x = v60;
            v40 = v41;
            v52[1] = &v42;
            v53[1] = (unsigned __int64)&v40;
            v52[0] = 1LL;
            v53[0] = 1LL;
            updated = CVisual::CalcSrcToDestVisualTransform(v3, v28, v53, v48, (__int64)v52);
            v14 = updated;
            if ( updated < 0 )
            {
              v39 = 892;
              goto LABEL_19;
            }
            v31 = (const struct CVisualTree *)*((_QWORD *)this + 13);
            v57 = 0;
            updated = ShadowHelpers::GetProjectionOntoVisualMatrix(v3, v31, v41, (struct CVisual *)v56);
            v14 = updated;
            if ( updated < 0 )
            {
              v39 = 895;
              goto LABEL_19;
            }
            v43 = v58[0];
            v47 = v59;
            v44 = v58[1];
            v45 = v58[2];
            v46 = v58[3];
            CMILMatrix::Multiply((CMILMatrix *)&v43, (const struct CMILMatrix *)v56);
            v32 = (const struct CVisualTree *)*((_QWORD *)this + 13);
            v55 = 0;
            v56[0] = v43;
            v57 = v47;
            v56[1] = v44;
            v56[2] = v45;
            v56[3] = v46;
            updated = ShadowHelpers::GetProjectionOntoVisualMatrix(v3, v32, v30, (struct CVisual *)v54);
            v14 = updated;
            if ( updated < 0 )
            {
              v39 = 899;
              goto LABEL_19;
            }
            v43 = v60[0];
            v47 = v61;
            v44 = v60[1];
            v45 = v60[2];
            v46 = v60[3];
            CMILMatrix::Multiply((CMILMatrix *)&v43, (const struct CMILMatrix *)v54);
            v54[0] = v43;
            v55 = v47;
            v54[1] = v44;
            v54[2] = v45;
            v54[3] = v46;
            CProjectedShadow::SetTransforms(
              v27,
              (const struct CMILMatrix *)v58,
              (const struct CMILMatrix *)v56,
              (const struct CMILMatrix *)v54);
          }
        }
        else
        {
LABEL_16:
          std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::erase(
            &ReceiverEntry->m128_u16[4],
            &v67);
        }
        v17 = (__int64 *)*v17;
        v16 = v65;
        v15 = v49;
      }
      return v14;
    }
  }
  return 0LL;
}
