/*
 * XREFs of ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800C0020
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800C0AF0 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180093170 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800ABD60 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x1800AE5D0 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z @ 0x1800C3810 (-GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800C39A0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800DEA80 (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014BF30 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C4A0 (-HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x18016A364 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?HasContent@CVisual@@UEBA_NXZ @ 0x18016A490 (-HasContent@CVisual@@UEBA_NXZ.c)
 *     ?ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ @ 0x18021E178 (-ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ.c)
 *     ?MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x18025887C (-MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHitTestContext::PostSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  struct D2D_SIZE_F *v3; // rdi
  __int64 v5; // rax
  __int64 v7; // r13
  unsigned int v9; // r15d
  struct D2D_SIZE_F *v10; // rsi
  int v11; // eax
  struct D2D_SIZE_F *v12; // r8
  bool (__fastcall *v14)(CVisual *__hidden); // rax
  int v15; // ecx
  _DWORD *v16; // rax
  struct CTreeData *v17; // r15
  float v18; // xmm9_4
  float v19; // xmm8_4
  float v20; // xmm7_4
  float v21; // xmm0_4
  float v22; // xmm6_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  __int64 v25; // rdx
  float v26; // xmm3_4
  float v27; // xmm2_4
  int (*v28)(CVisual *__hidden, bool, const struct D2D_POINT_2F *, bool *); // rax
  int v29; // eax
  struct D2D_SIZE_F v30; // r8
  __int64 v31; // rax
  _BYTE *v32; // rdx
  __int64 i; // rcx
  __int64 ****v34; // rcx
  __int64 ***v35; // rcx
  __int64 **j; // rax
  _DWORD *v37; // r9
  __int64 v38; // r10
  _BYTE *v39; // r11
  unsigned int v40; // eax
  _BYTE *v41; // rcx
  __int64 *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  struct D2D_SIZE_F v45; // r8
  __int64 v46; // rax
  _BYTE *v47; // rdx
  __int64 n; // rcx
  __int64 ****v49; // rcx
  __int64 ***v50; // rcx
  __int64 **ii; // rax
  unsigned int m; // eax
  __int64 *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  struct CTreeEffect *(__fastcall *v56)(CLayerVisual *__hidden); // rax
  char v58; // al
  bool v59; // zf
  bool HasContent; // al
  struct D2D_SIZE_F v61; // rax
  _DWORD *v62; // r8
  __int64 v63; // rax
  _BYTE *v64; // rdx
  __int64 k; // rcx
  _QWORD *v66; // rcx
  CTransform3D *Transform3DEffectNoRef; // rax
  CMILMatrix *Matrix; // rax
  int v69; // eax
  struct D2D_SIZE_F **v70; // rdx
  const struct CInteraction *InteractionInternal; // rax
  bool v72; // dl
  float v73[3]; // [rsp+30h] [rbp-69h] BYREF
  float v74; // [rsp+3Ch] [rbp-5Dh]
  float v75; // [rsp+40h] [rbp-59h]
  float v76; // [rsp+44h] [rbp-55h]
  float v77; // [rsp+4Ch] [rbp-4Dh]
  float v78; // [rsp+60h] [rbp-39h]
  float v79; // [rsp+64h] [rbp-35h]
  float v80; // [rsp+6Ch] [rbp-2Dh]
  bool v81; // [rsp+100h] [rbp+67h] BYREF
  struct D2D_POINT_2F v82; // [rsp+108h] [rbp+6Fh] BYREF
  struct D2D_SIZE_F *v83; // [rsp+110h] [rbp+77h] BYREF

  v3 = (struct D2D_SIZE_F *)*((_QWORD *)this + 2);
  v5 = *(_QWORD *)a2;
  v7 = *((_QWORD *)this + 3);
  *a3 = 1;
  v9 = 0;
  v83 = v3;
  v10 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v5 + 184))(a2) )
  {
    v10 = v3 + 41;
  }
  else
  {
    v30 = v3[29];
    if ( **(int **)&v30 < 0 )
    {
      v31 = *(unsigned int *)(*(_QWORD *)&v30 + 4LL);
      v32 = (_BYTE *)(*(_QWORD *)&v30 + 8LL);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v31; ++v32 )
      {
        if ( *v32 == 1 )
          break;
        i = (unsigned int)(i + 1);
      }
      v34 = (unsigned int)i >= (unsigned int)v31
          ? 0LL
          : (__int64 ****)(*(_QWORD *)&v30 + v31 + 15 + 8 * i - (((_BYTE)v31 + 15) & 7));
      v35 = *v34;
      if ( v35 )
      {
        for ( j = *v35; j != (__int64 **)v35; j = (__int64 **)*j )
        {
          if ( j[4] == (__int64 *)a2 )
          {
            v10 = (struct D2D_SIZE_F *)(j - 44);
            break;
          }
        }
      }
    }
  }
  if ( *((_QWORD *)this + 13) )
    goto LABEL_4;
  if ( LODWORD(v3[14].width) == 1 )
  {
    v81 = v7 && *(_DWORD *)(v7 + 112) == 1;
    v56 = *(struct CTreeEffect *(__fastcall **)(CLayerVisual *__hidden))(*(_QWORD *)v3 + 224LL);
    if ( v56 == CLayerVisual::GetTreeEffect ? *(struct CTreeEffect **)&v3[86] : v56((CLayerVisual *)v3) )
      goto LABEL_92;
    v62 = (_DWORD *)v3[29];
    if ( (*v62 & 0x800000) == 0 )
      goto LABEL_113;
    v63 = (unsigned int)v62[1];
    v64 = v62 + 2;
    for ( k = 0LL; (unsigned int)k < (unsigned int)v63; ++v64 )
    {
      if ( *v64 == 9 )
        break;
      k = (unsigned int)(k + 1);
    }
    v66 = (unsigned int)k >= (unsigned int)v63
        ? 0LL
        : (_QWORD *)((char *)v62 + 8 * k - (((_BYTE)v63 + 15) & 7) + v63 + 15);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v66 + 64LL))(*v66, 61LL) )
LABEL_92:
      v58 = 1;
    else
LABEL_113:
      v58 = 0;
    if ( v81 )
    {
      v59 = v58 == 0;
    }
    else
    {
      v61 = v3[10];
      if ( (LOBYTE(v61.width) & 2) != 0 )
        v61 = *(struct D2D_SIZE_F *)(*(_QWORD *)&v61 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v61.width) = LOBYTE(v61.width) & 1;
      v59 = LODWORD(v61.width) == 0;
    }
    if ( !v59 )
      goto LABEL_4;
  }
  if ( !LOBYTE(v3[13].height) )
    goto LABEL_4;
  v14 = *(bool (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v3 + 256LL);
  if ( v14 == CSpriteVisual::HasContent )
  {
    if ( !CVisual::HasContent((CVisual *)v3) && (**(_DWORD **)&v3[29] & 0x20000) == 0 )
      goto LABEL_4;
  }
  else
  {
    if ( v14 == CVisual::HasContent )
      HasContent = CVisual::HasContent((CVisual *)v3);
    else
      HasContent = v14((CVisual *)v3);
    if ( !HasContent )
      goto LABEL_4;
  }
  v15 = *((_DWORD *)this + 44);
  v16 = 0LL;
  if ( v15 )
    v16 = (_DWORD *)(*((_QWORD *)this + 21) + 4LL * (unsigned int)(v15 - 1));
  if ( *v16 == 1 )
  {
    Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)v3);
    if ( Transform3DEffectNoRef )
    {
      Matrix = CTransform3D::GetMatrix(Transform3DEffectNoRef, v3 + 18);
      if ( !CMILMatrix::IsFacingUser(Matrix) )
        goto LABEL_4;
    }
  }
  v82 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v17 = (struct CTreeData *)&v3[41];
LABEL_28:
    if ( v17 )
    {
      v81 = 0;
      CVisual::EnsureWorldTransform((CVisual *)v3, a2, v17);
      CTreeData::GetWorldTransform(v17, (struct CMILMatrix *)v73, &v81, 0LL);
      v9 = 0;
      v18 = *((float *)this + 20);
      v19 = *((float *)this + 21);
      v20 = (float)(v74 * v18) - v73[0];
      v21 = (float)(v77 * v18) - v75;
      v22 = (float)(v77 * v19) - v76;
      v23 = (float)(v74 * v19) - v73[1];
      if ( (float)(v20 * v22) != (float)(v21 * v23) )
      {
        v24 = (float)(v20 * v22) - (float)(v21 * v23);
        v25 = *((unsigned __int8 *)this + 216);
        v81 = 0;
        LOBYTE(v25) = v25 & 1;
        v26 = (float)(v80 * v18) - v78;
        v27 = (float)(v80 * v19) - v79;
        v82.y = (float)((float)(v26 * v23) - (float)(v27 * v20)) / v24;
        v82.x = (float)((float)(v27 * v21) - (float)(v26 * v22)) / v24;
        v28 = *(int (**)(CVisual *__hidden, bool, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v3 + 312LL);
        if ( v28 == CVisual::HitTestContent )
        {
          v29 = CVisual::HitTestContent((CVisual *)v3, v25, &v82, &v81);
        }
        else if ( v28 == CWindowNode::HitTestContent )
        {
          v29 = CWindowNode::HitTestContent((CWindowNode *)v3, v25, &v82, &v81);
        }
        else
        {
          v29 = ((__int64 (__fastcall *)(struct D2D_SIZE_F *, __int64, struct D2D_POINT_2F *, bool *))v28)(
                  v3,
                  v25,
                  &v82,
                  &v81);
        }
        v9 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x117u, 0LL);
          return v9;
        }
        if ( v81 )
          *((_QWORD *)this + 13) = v3;
      }
LABEL_4:
      if ( LODWORD(v3[26].height) != -1 )
      {
        v11 = *((_DWORD *)this + 44);
        if ( v11 )
          *((_DWORD *)this + 44) = v11 - 1;
      }
      if ( BYTE2(v10[1].height) )
      {
        v69 = *((_DWORD *)this + 50);
        if ( v69 )
          *((_DWORD *)this + 50) = v69 - 1;
      }
      if ( !*((_QWORD *)this + 14) )
      {
        v12 = (struct D2D_SIZE_F *)*((_QWORD *)this + 13);
        if ( v12 == v3 )
        {
          while ( v12 != *(struct D2D_SIZE_F **)(*((_QWORD *)a2 + 9) + 88LL) )
          {
            v37 = (_DWORD *)v12[29];
            if ( (*v37 & 0x1000000) != 0 )
            {
              v38 = (unsigned int)v37[1];
              v39 = v37 + 2;
              v40 = 0;
              if ( (_DWORD)v38 )
              {
                v41 = v37 + 2;
                do
                {
                  if ( *v41 == 8 )
                    break;
                  ++v40;
                  ++v41;
                }
                while ( v40 < (unsigned int)v38 );
              }
              v42 = v40 >= (unsigned int)v38
                  ? 0LL
                  : (__int64 *)((char *)v37 + v38 + 8LL * v40 - (((_BYTE)v38 + 15) & 7) + 15);
              v43 = *v42;
              if ( v43 )
              {
                v44 = *(_QWORD *)(v43 + 112);
                if ( v44 )
                {
                  if ( *(_QWORD *)(v44 + 64) )
                  {
                    for ( m = 0; m < (unsigned int)v38; ++v39 )
                    {
                      if ( *v39 == 8 )
                        break;
                      ++m;
                    }
                    if ( m >= (unsigned int)v38 )
                      v53 = 0LL;
                    else
                      v53 = (__int64 *)((char *)v37 + 8LL * m - (((_BYTE)v38 + 15) & 7) + v38 + 15);
                    v54 = *v53;
                    if ( v54
                      && (v55 = *(_QWORD *)(v54 + 112)) != 0
                      && *(_QWORD *)(v55 + 64)
                      && (*(_BYTE *)(v54 + 200) & 4) != 0 )
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
            v12 = (struct D2D_SIZE_F *)v12[11];
          }
        }
        if ( v3 == *((struct D2D_SIZE_F **)this + 20) )
        {
          if ( v3 == *((struct D2D_SIZE_F **)this + 19) )
          {
            InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v3);
            v72 = 0;
          }
          else
          {
            v70 = (struct D2D_SIZE_F **)*((_QWORD *)this + 17);
            if ( v70 == *((struct D2D_SIZE_F ***)this + 18) )
            {
              std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
                (char *)this + 128,
                v70,
                &v83);
              v3 = v83;
            }
            else
            {
              *v70 = v3;
              *((_QWORD *)this + 17) += 8LL;
            }
            *((_QWORD *)this + 19) = v3;
            InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v3);
            v72 = 1;
          }
          InputTraceLogging::DWM::MarkForFurtherEvaluation(InteractionInternal, v72);
          *((_QWORD *)this + 20) = 0LL;
        }
        if ( *((struct D2D_SIZE_F **)this + 19) == v3 )
          *((_QWORD *)this + 19) = v7;
      }
      if ( *((_QWORD *)this + 13) )
      {
        if ( *((struct D2D_SIZE_F **)this + 14) == v3 )
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
      if ( *((struct D2D_SIZE_F **)this + 14) == v3 )
        *((_QWORD *)this + 14) = 0LL;
      return v9;
    }
  }
  else
  {
    v45 = v3[29];
    if ( **(int **)&v45 < 0 )
    {
      v46 = *(unsigned int *)(*(_QWORD *)&v45 + 4LL);
      v47 = (_BYTE *)(*(_QWORD *)&v45 + 8LL);
      for ( n = 0LL; (unsigned int)n < (unsigned int)v46; ++v47 )
      {
        if ( *v47 == 1 )
          break;
        n = (unsigned int)(n + 1);
      }
      v49 = (unsigned int)n >= (unsigned int)v46
          ? 0LL
          : (__int64 ****)(v46 + 15 + *(_QWORD *)&v45 + 8 * n - (((_BYTE)v46 + 15) & 7));
      v50 = *v49;
      if ( v50 )
      {
        for ( ii = *v50; ii != (__int64 **)v50; ii = (__int64 **)*ii )
        {
          v17 = (struct CTreeData *)(ii - 44);
          if ( ii[4] == (__int64 *)a2 )
            goto LABEL_28;
        }
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x6AAu, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x10Fu, 0LL);
  return 2291674884LL;
}
