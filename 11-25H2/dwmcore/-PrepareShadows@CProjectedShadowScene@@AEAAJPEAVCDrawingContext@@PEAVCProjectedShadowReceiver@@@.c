/*
 * XREFs of ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18011B580
 * Callers:
 *     ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18011B46C (-DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800CC200 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18011BB88 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x18011BC28 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x18011BEDC (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 *     ?CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z @ 0x18011C048 (-CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z.c)
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x18011C0BC (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x18011C25C (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z @ 0x18011C3AC (-CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z.c)
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x18011CF64 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x18011E140 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAVCProjectedShadowCaster@@@Z @ 0x1801E5724 (-erase@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1801E5D04 (-clear@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x1801E9854 (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVi.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z @ 0x1801E9DEC (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V-$span@PEAVCVisual@@$0.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1801F5F50 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ??$_Try_emplace@AEBQEAVCProjectedShadowCaster@@$$V@?$map@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAVCProjectedShadowCaster@@@Z @ 0x1801F6B18 (--$_Try_emplace@AEBQEAVCProjectedShadowCaster@@$$V@-$map@PEAVCProjectedShadowCaster@@V-$com_ptr_.c)
 *     ?SetTransforms@CProjectedShadow@@QEAAXAEBVCMILMatrix@@00@Z @ 0x1802257D0 (-SetTransforms@CProjectedShadow@@QEAAXAEBVCMILMatrix@@00@Z.c)
 *     ?SetShadowOpacity@CProjectedShadow@@QEAAXM@Z @ 0x18022639C (-SetShadowOpacity@CProjectedShadow@@QEAAXM@Z.c)
 *     ?SetBlurRadius@CProjectedShadow@@QEAAXM@Z @ 0x180226FDC (-SetBlurRadius@CProjectedShadow@@QEAAXM@Z.c)
 *     ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x1802274E4 (-Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCP.c)
 *     ??0CProjectedShadow@@QEAA@PEAVCComposition@@@Z @ 0x180228204 (--0CProjectedShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ??2CProjectedShadow@@SAPEAX_K@Z @ 0x18025B990 (--2CProjectedShadow@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  struct CProjectedShadowScene::ReceiverEntry *ReceiverEntry; // r15
  CProjectedShadowScene *v12; // rcx
  int updated; // eax
  unsigned int v14; // edi
  __int64 *v15; // rcx
  int v16; // eax
  __int64 *v17; // rbx
  struct CCompositionLight *v18; // r14
  int v19; // edx
  float z; // xmm6_4
  float v21; // xmm7_4
  const struct CVisualTree *v22; // rdx
  CProjectedShadowScene *v23; // rcx
  float v24; // xmm0_4
  unsigned __int64 *v26; // rax
  CProjectedShadow *v27; // r14
  int v28; // edx
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
  struct CMILMatrix *v40; // [rsp+28h] [rbp-E0h]
  struct CMILMatrix *v41; // [rsp+28h] [rbp-E0h]
  struct CCompositionLight *v42; // [rsp+38h] [rbp-D0h] BYREF
  struct CCompositionLight *v43; // [rsp+40h] [rbp-C8h]
  struct D2D_VECTOR_4F v44; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v45; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v46; // [rsp+68h] [rbp-A0h]
  __int128 v47; // [rsp+78h] [rbp-90h]
  __int128 v48; // [rsp+88h] [rbp-80h]
  int v49; // [rsp+98h] [rbp-70h]
  struct CCompositionLight *v50; // [rsp+A0h] [rbp-68h]
  __int64 *v51; // [rsp+A8h] [rbp-60h]
  _QWORD v52[2]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v53[2]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v54[2]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v55[2]; // [rsp+E8h] [rbp-20h] BYREF
  _OWORD v56[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v57; // [rsp+138h] [rbp+30h]
  _OWORD v58[4]; // [rsp+148h] [rbp+40h] BYREF
  int v59; // [rsp+188h] [rbp+80h]
  _OWORD v60[4]; // [rsp+198h] [rbp+90h] BYREF
  int v61; // [rsp+1D8h] [rbp+D0h]
  _OWORD v62[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  int v63; // [rsp+228h] [rbp+120h]
  struct D2D_VECTOR_4F v64; // [rsp+238h] [rbp+130h] BYREF
  _BYTE v65[16]; // [rsp+248h] [rbp+140h] BYREF
  _BYTE v66[64]; // [rsp+258h] [rbp+150h] BYREF
  int v67; // [rsp+2E0h] [rbp+1D8h]
  struct CProjectedShadowCaster *v69; // [rsp+2F0h] [rbp+1E8h] BYREF

  v3 = (const struct CVisualTree *)*((_QWORD *)a2 + 993);
  v43 = (struct CCompositionLight *)*((_QWORD *)a3 + 9);
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
    ReceiverEntry = CProjectedShadowScene::FindReceiverEntry(this, a3);
    updated = CProjectedShadowScene::UpdateReceiverEntry(v12, a2, ReceiverEntry);
    v14 = updated;
    if ( updated < 0 )
    {
      v39 = 819;
LABEL_19:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, v39, 0LL);
      return v14;
    }
    if ( *((_BYTE *)ReceiverEntry + 100) )
    {
      v15 = (__int64 *)*((_QWORD *)this + 9);
      v16 = 0;
      v51 = v15;
      v17 = (__int64 *)*v15;
      while ( v17 != v15 )
      {
        v67 = v16 + 1;
        if ( v16 + 1 > 5 )
          break;
        v69 = (struct CProjectedShadowCaster *)v17[2];
        v18 = (struct CCompositionLight *)*((_QWORD *)v69 + 9);
        v50 = v18;
        if ( v18 == v43 )
          goto LABEL_16;
        v14 = CProjectedShadowScene::UpdateCasterEntry(this, v3, (struct CProjectedShadowScene::CasterEntry *)(v17 + 2));
        if ( (v14 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x34Fu, 0LL);
          return v14;
        }
        if ( !*((_BYTE *)v17 + 168) )
          goto LABEL_16;
        v61 = 0;
        *(_QWORD *)&v44.x = v18;
        v42 = (struct CCompositionLight *)v60;
        v52[1] = &v42;
        v53[1] = &v44;
        v52[0] = 1LL;
        v53[0] = 1LL;
        updated = CVisual::CalcSrcToDestVisualTransform((_DWORD)v3, v19, (unsigned int)v53, (_DWORD)v43, (__int64)v52);
        v14 = updated;
        if ( updated < 0 )
        {
          v39 = 856;
          goto LABEL_19;
        }
        v44 = *(struct D2D_VECTOR_4F *)&_xmm.r;
        z = CMILMatrix::Transform4DVector((CMILMatrix *)v60, &v64, &v44)->z;
        v21 = CProjectedShadowScene::CalculateOpacity(this, z);
        v24 = CProjectedShadowScene::CalculateBlurRadius(this, z);
        if ( COERCE_FLOAT(LODWORD(v21) & _xmm) >= 0.0000011920929
          && CProjectedShadowScene::IsCasterInBetweenLightAndReceiver(
               v23,
               v22,
               (const struct CProjectedShadowScene::CasterEntry *)(v17 + 2),
               ReceiverEntry,
               v24) )
        {
          v26 = (unsigned __int64 *)std::map<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>::_Try_emplace<CProjectedShadowCaster * const &,>(
                                      (char *)ReceiverEntry + 8,
                                      v65,
                                      &v69);
          v27 = *(CProjectedShadow **)(*v26 + 40);
          if ( !v27 )
          {
            v35 = (CProjectedShadow *)CProjectedShadow::operator new(*v26);
            if ( v35 )
            {
              v36 = CProjectedShadow::CProjectedShadow(v35, *((struct CComposition **)this + 3));
              v42 = v36;
              v27 = v36;
              if ( v36 )
                (*(void (__fastcall **)(CProjectedShadow *))(*(_QWORD *)v36 + 8LL))(v36);
            }
            else
            {
              v27 = 0LL;
              v42 = 0LL;
            }
            v37 = CProjectedShadow::Initialize(v27, this, v69, a3);
            v14 = v37;
            if ( v37 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v37, 0x36Au, 0LL);
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v42);
              return v14;
            }
            v38 = (_QWORD *)std::map<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>::_Try_emplace<CProjectedShadowCaster * const &,>(
                              (char *)ReceiverEntry + 8,
                              v66,
                              &v69);
            wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
              *v38 + 40LL,
              &v42);
            if ( v27 )
              (*(void (__fastcall **)(CProjectedShadow *))(*(_QWORD *)v27 + 16LL))(v27);
          }
          CProjectedShadow::SetShadowOpacity(v27, v21);
          CProjectedShadow::SetBlurRadius(v27, v24);
          v29 = *((_QWORD *)v27 + 13);
          if ( v29 < *((_QWORD *)this + 14) || v29 < *((_QWORD *)ReceiverEntry + 3) || v29 < v17[3] )
          {
            v30 = v50;
            v63 = 0;
            *(_QWORD *)&v44.x = v62;
            v42 = v43;
            v54[1] = &v44;
            v55[1] = &v42;
            v54[0] = 1LL;
            v55[0] = 1LL;
            updated = CVisual::CalcSrcToDestVisualTransform(
                        (_DWORD)v3,
                        v28,
                        (unsigned int)v55,
                        (_DWORD)v50,
                        (__int64)v54);
            v14 = updated;
            if ( updated < 0 )
            {
              v39 = 892;
              goto LABEL_19;
            }
            v31 = (const struct CVisualTree *)*((_QWORD *)this + 13);
            v59 = 0;
            updated = ShadowHelpers::GetProjectionOntoVisualMatrix(v3, v31, v43, (struct CVisual *)v58, v40);
            v14 = updated;
            if ( updated < 0 )
            {
              v39 = 895;
              goto LABEL_19;
            }
            v45 = v60[0];
            v49 = v61;
            v46 = v60[1];
            v47 = v60[2];
            v48 = v60[3];
            CMILMatrix::Multiply((CMILMatrix *)&v45, (const struct CMILMatrix *)v58);
            v32 = (const struct CVisualTree *)*((_QWORD *)this + 13);
            v57 = 0;
            v58[0] = v45;
            v59 = v49;
            v58[1] = v46;
            v58[2] = v47;
            v58[3] = v48;
            updated = ShadowHelpers::GetProjectionOntoVisualMatrix(v3, v32, v30, (struct CVisual *)v56, v41);
            v14 = updated;
            if ( updated < 0 )
            {
              v39 = 899;
              goto LABEL_19;
            }
            v45 = v62[0];
            v49 = v63;
            v46 = v62[1];
            v47 = v62[2];
            v48 = v62[3];
            CMILMatrix::Multiply((CMILMatrix *)&v45, (const struct CMILMatrix *)v56);
            v56[0] = v45;
            v57 = v49;
            v56[1] = v46;
            v56[2] = v47;
            v56[3] = v48;
            CProjectedShadow::SetTransforms(
              v27,
              (const struct CMILMatrix *)v60,
              (const struct CMILMatrix *)v58,
              (const struct CMILMatrix *)v56);
          }
        }
        else
        {
LABEL_16:
          std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::erase(
            (char *)ReceiverEntry + 8,
            &v69);
        }
        v17 = (__int64 *)*v17;
        v16 = v67;
        v15 = v51;
      }
      return v14;
    }
  }
  return 0LL;
}
