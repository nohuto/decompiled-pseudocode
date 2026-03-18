/*
 * XREFs of ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BA220
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800B8300 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 * Callees:
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x1800265FC (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800268C0 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?CheckClipAllowsOcclusion@COcclusionContext@@AEBAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEA_N@Z @ 0x180058150 (-CheckClipAllowsOcclusion@COcclusionContext@@AEBAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEA_N@Z.c)
 *     ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x18007D940 (-GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180091460 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?NodeIntersectsOcclusionRegion@COcclusionContext@@AEAA_NPEBVCVisual@@PEAVCOcclusionInfo@@PEAM@Z @ 0x18009C510 (-NodeIntersectsOcclusionRegion@COcclusionContext@@AEAA_NPEBVCVisual@@PEAVCOcclusionInfo@@PEAM@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B6CE0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?RequiresExternalLayer@CVisual@@QEBA_NXZ @ 0x1800B81A0 (-RequiresExternalLayer@CVisual@@QEBA_NXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800CC200 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z @ 0x1800CC750 (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SkipInvalidTransformParentSubtree@CVisual@@QEBA_NPEBVCVisualTree@@@Z @ 0x18010C430 (-SkipInvalidTransformParentSubtree@CVisual@@QEBA_NPEBVCVisualTree@@@Z.c)
 *     ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z @ 0x18012FF50 (-GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z.c)
 *     ?PushLightsFromVisual@CLightStack@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z @ 0x18018C2D0 (-PushLightsFromVisual@CLightStack@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x1801950C0 (-GetEffectAlpha@CVisual@@QEBAMXZ.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1801963F0 (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?IsVisualInAncestorList@CBackdropVisualImage@@QEBA_NPEBVCVisual@@AEBVCVisualTreePath@@@Z @ 0x180197FB0 (-IsVisualInAncestorList@CBackdropVisualImage@@QEBA_NPEBVCVisual@@AEBVCVisualTreePath@@@Z.c)
 *     ?PushClipInternal@COcclusionContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@AEBVCMILMatrix@@@Z @ 0x18023DE80 (-PushClipInternal@COcclusionContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@AEBVCMILMatrix@@@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COcclusionContext::PreSubgraph(COcclusionContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rdi
  bool *v5; // r12
  struct CVisualTree *v6; // r15
  int v7; // r14d
  CTreeData *TreeData; // rax
  struct COcclusionInfo *OcclusionInfo; // rax
  CGlobalComposition *v10; // rcx
  struct COcclusionInfo *v11; // r13
  __int64 v12; // rax
  int v13; // edx
  struct CBackdropVisualImage *BackdropVisualImage; // rax
  CBackdropVisualImage *v15; // rcx
  bool v17; // zf
  float *v18; // rdx
  float v19; // xmm0_4
  int v20; // ecx
  unsigned int v21; // eax
  _DWORD *v22; // r8
  __int64 v23; // rdx
  _BYTE *v24; // rcx
  unsigned int i; // eax
  CFilterEffect **v26; // r15
  CFilterEffect *v27; // r15
  float v28; // xmm0_4
  _BYTE *v29; // rax
  CVisual *v30; // rcx
  COcclusionContext *v31; // rcx
  int v32; // eax
  struct CGeometry *v33; // r8
  int v34; // r9d
  __int64 v35; // rcx
  __int64 v36; // rax
  size_t v37; // r12
  unsigned __int64 v38; // rax
  int v39; // esi
  void *v40; // rax
  void *v41; // r15
  unsigned int v42; // esi
  __int64 v43; // rdx
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // ecx
  char v47; // al
  _BYTE v48[64]; // [rsp+30h] [rbp-89h] BYREF
  int v49; // [rsp+70h] [rbp-49h]
  _BYTE v50[64]; // [rsp+80h] [rbp-39h] BYREF
  int v51; // [rsp+C0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]
  float v53; // [rsp+120h] [rbp+67h] BYREF
  struct CVisualTree *v54; // [rsp+128h] [rbp+6Fh]
  bool *v55; // [rsp+130h] [rbp+77h]
  bool v56; // [rsp+138h] [rbp+7Fh] BYREF

  v55 = a3;
  v54 = a2;
  v3 = *((_QWORD *)this + 8);
  v5 = a3;
  v6 = a2;
  v7 = 0;
  TreeData = CVisual::FindTreeData((CVisual *)v3, a2);
  OcclusionInfo = CTreeData::GetOcclusionInfo(TreeData, *((_DWORD *)this + 384), 1);
  v10 = g_pComposition;
  v11 = OcclusionInfo;
  *((_DWORD *)OcclusionInfo + 6) = 0;
  *((_BYTE *)OcclusionInfo + 28) = 0;
  v12 = 0LL;
  v13 = *((_DWORD *)this + 427);
  if ( v10 )
    v12 = *((_QWORD *)v10 + 111);
  *((_QWORD *)v11 + 2) = v12;
  *((_DWORD *)v11 + 9) = v13;
  if ( *((_QWORD *)this + 194) )
  {
    BackdropVisualImage = CVisual::GetBackdropVisualImage((CVisual *)v3, *((const struct CVisualTreePath **)this + 2));
    v15 = (CBackdropVisualImage *)*((_QWORD *)this + 194);
    if ( BackdropVisualImage == v15 )
    {
      *((_BYTE *)this + 1570) = 1;
LABEL_6:
      *v5 = 0;
      return 0LL;
    }
    if ( !*((_BYTE *)this + 1570)
      && !CBackdropVisualImage::IsVisualInAncestorList(
            v15,
            (const struct CVisual *)v3,
            *((const struct CVisualTreePath **)this + 2)) )
    {
      goto LABEL_6;
    }
  }
  if ( CVisual::RequiresExternalLayer((CVisual *)v3) )
    ++*((_DWORD *)this + 429);
  if ( (*(_BYTE *)(v3 + 106) & 4) != 0 )
    ++*((_DWORD *)this + 430);
  if ( *((_DWORD *)this + 428) )
    goto LABEL_83;
  if ( !**((_DWORD **)this + 57) )
    goto LABEL_83;
  v17 = (*(_BYTE *)(v3 + 106) & 1) == 0;
  v53 = 0.0;
  if ( !v17 || CVisual::GetEffectAlpha((CVisual *)v3) < 1.0 || CVisual::GetVisualAlpha((CVisual *)v3, v6) < 1.0 )
    goto LABEL_83;
  v18 = (float *)((char *)v6 + 80);
  if ( v3 != *((_QWORD *)v6 + 9) )
    v18 = (float *)(v3 + 152);
  v19 = v18[5];
  v20 = (v19 <= v18[4]) + 1;
  if ( v18[2] > *v18 )
    v20 = v19 <= v18[4];
  v21 = v20 + 1;
  if ( v18[3] > v18[1] )
    v21 = v20;
  if ( v21 > 1 || (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 224LL))(v3) )
    goto LABEL_83;
  v22 = *(_DWORD **)(v3 + 232);
  if ( (*v22 & 0x800000) != 0 )
  {
    v23 = (unsigned int)v22[1];
    v24 = v22 + 2;
    for ( i = 0; i < (unsigned int)v23; ++v24 )
    {
      if ( *v24 == 9 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v23 )
      v26 = 0LL;
    else
      v26 = (CFilterEffect **)((char *)v22 + v23 + 8LL * i - (((_BYTE)v23 + 15) & 7) + 15);
    v27 = *v26;
    if ( (*(unsigned __int8 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)v27 + 64LL))(v27, 60LL)
      && !CFilterEffect::IsOpaque(v27, (const struct CVisual *)v3) )
    {
      goto LABEL_83;
    }
    v6 = v54;
  }
  if ( CVisual::SkipInvalidTransformParentSubtree((CVisual *)v3, v6)
    || CVisual::IsPreserve3DRoot((CVisual *)v3, *((const struct CVisual **)this + 9))
    || ((*(_DWORD *)(v3 + 204) - 2) & 0xFFFFFFFD) == 0
    || *(char *)(v3 + 106) < 0 && *((_BYTE *)g_pComposition + 6490)
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 264LL))(v3) && (*(_DWORD *)(v3 + 96) & 0x100) == 0
    || !COcclusionContext::NodeIntersectsOcclusionRegion(this, (const struct CVisual *)v3, v11, &v53)
    || (*(_BYTE *)(v3 + 105) & 0xC) != 0
    || (v28 = v53, *((_BYTE *)v11 + 28) = v53 >= 75000.0, v28 < *((float *)this + 385))
    && (!*((_BYTE *)this + 1566) || (*(_DWORD *)(v3 + 96) & 0x8000) == 0) )
  {
LABEL_83:
    ++*((_DWORD *)this + 428);
    goto LABEL_84;
  }
  v29 = v50;
  v30 = (CVisual *)*((_QWORD *)this + 8);
  if ( !*(_QWORD *)(v3 + 248) )
    v29 = 0LL;
  v49 = 0;
  v51 = 0;
  LOBYTE(v53) = 0;
  CVisual::GetWorldTransform(v30, v6, 2, (__int64)v48, &v53, (__int64)v29);
  if ( LOBYTE(v53) )
  {
    if ( !CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)v48) )
      goto LABEL_83;
    v32 = CMatrixStack::Push((COcclusionContext *)((char *)this + 32), (const struct CMILMatrix *)v48, 0);
    v7 = v32;
    if ( v32 < 0 )
    {
      v34 = v32;
      v44 = 466;
      goto LABEL_73;
    }
    *((_BYTE *)v11 + 25) = 1;
  }
  v33 = *(struct CGeometry **)(v3 + 248);
  if ( v33 )
  {
    LOBYTE(v53) = 0;
    v7 = COcclusionContext::CheckClipAllowsOcclusion(v31, (const struct D2D_SIZE_F *)(v3 + 144), v33, (bool *)&v53);
    v34 = v7;
    if ( v7 >= 0 )
    {
      if ( LOBYTE(v53) )
      {
        v7 = COcclusionContext::PushClipInternal(
               this,
               (const struct D2D_SIZE_F *)(v3 + 144),
               *(struct CGeometry **)(v3 + 248),
               (const struct CMILMatrix *)v50);
        v34 = v7;
        if ( v7 >= 0 )
        {
          *((_BYTE *)v11 + 26) = 1;
          goto LABEL_59;
        }
        v44 = 486;
        goto LABEL_73;
      }
      goto LABEL_83;
    }
    v44 = 481;
LABEL_73:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, v44, 0LL);
LABEL_84:
    v47 = 0;
    goto LABEL_85;
  }
LABEL_59:
  v35 = *(_QWORD *)(v3 + 256);
  LOBYTE(v53) = 1;
  v56 = 0;
  if ( v35 )
  {
    (*(void (__fastcall **)(__int64, float *, bool *))(*(_QWORD *)v35 + 296LL))(v35, &v53, &v56);
    if ( !LOBYTE(v53) )
    {
LABEL_63:
      v36 = *((unsigned int *)this + 447);
      v37 = *((unsigned int *)this + 446);
      if ( (_DWORD)v37 == (_DWORD)v36 )
      {
        v38 = 2 * v36;
        if ( v38 > 0xFFFFFFFF )
        {
          v42 = -2147024362;
          v43 = 98LL;
          goto LABEL_82;
        }
        if ( (unsigned int)v38 <= 0x40 )
          LODWORD(v38) = 64;
        v39 = v38;
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v38 <= 1 )
        {
          v42 = -2147024809;
          v43 = 104LL;
          goto LABEL_82;
        }
        v40 = MIDL_user_allocate((unsigned int)v38);
        v41 = v40;
        if ( !v40 )
        {
          v42 = -2147024882;
          v43 = 104LL;
LABEL_82:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v43,
            (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)v42);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x83,
            (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)v42);
LABEL_78:
          v5 = v55;
          *((_BYTE *)v11 + 27) = 1;
          goto LABEL_79;
        }
        memcpy_0(v40, *((const void **)this + 222), v37);
        operator delete(*((void **)this + 222));
        *((_QWORD *)this + 222) = v41;
        *((_DWORD *)this + 447) = v39;
      }
      *(_BYTE *)(*((unsigned int *)this + 446) + *((_QWORD *)this + 222)) = v56;
      v45 = *((_DWORD *)this + 449);
      v46 = *((_DWORD *)this + 446) + 1;
      *((_DWORD *)this + 446) = v46;
      if ( v45 <= v46 )
        v45 = v46;
      *((_DWORD *)this + 449) = v45;
      goto LABEL_78;
    }
  }
  if ( (*(_DWORD *)(v3 + 96) & 0x8000000) != 0 )
  {
    v17 = *(_DWORD *)(v3 + 204) == 0;
    LOBYTE(v53) = 0;
    v56 = !v17;
    goto LABEL_63;
  }
LABEL_79:
  CLightStack::PushLightsFromVisual((COcclusionContext *)((char *)this + 224), (const struct CVisual *)v3, v54);
  v47 = 1;
LABEL_85:
  *v5 = v47;
  return (unsigned int)v7;
}
