/*
 * XREFs of ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800963E0
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180095C20 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV?$DynArrayIANoCtor@PEAVCCompositionLight@@$02$0A@@@PEA_N@Z @ 0x18009611C (-GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV-$DynArrayIANoCtor@PE.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000B7B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C4A0 (-GetContentBounds@CSpriteVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800B6FD0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800CC200 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x1801992E4 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     tanf_0 @ 0x1802E8950 (tanf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCompositionSpotLight::AffectsVisual(
        CCompositionSpotLight *this,
        const struct CVisualTree *a2,
        struct CVisual *a3)
{
  bool v3; // zf
  char v7; // si
  float v8; // xmm1_4
  __int64 v9; // rax
  float v10; // xmm7_4
  unsigned __int8 (__fastcall *v11)(const struct CVisualTree *); // rax
  struct CTreeData *p_Blink; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm3
  __m128 v16; // xmm2
  __int128 v17; // xmm0
  __m128 v18; // xmm4
  float v19; // xmm2_4
  char *v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  char v26; // al
  __int64 (__fastcall *v28)(CSpriteVisual *, struct D2D_RECT_F *, __int64, __int64); // rax
  int ContentBounds; // eax
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  CVisual *v33; // r14
  float v34; // xmm3_4
  struct CTreeData *TreeData; // rax
  struct CTreeData *v36; // rdi
  __m128 v37; // xmm0
  __m128 v38; // xmm1
  __int128 v39; // xmm0
  __m128 v40; // xmm1
  unsigned int v41; // edx
  int v42; // ebx
  unsigned int v43; // eax
  int v44; // r9d
  unsigned int v45; // [rsp+28h] [rbp-A9h]
  CSpriteVisual *v46; // [rsp+38h] [rbp-99h] BYREF
  struct D2D_RECT_F v47; // [rsp+40h] [rbp-91h] BYREF
  __m128 v48; // [rsp+58h] [rbp-79h] BYREF
  __m128 v49; // [rsp+68h] [rbp-69h]
  __int128 v50; // [rsp+78h] [rbp-59h]
  __m128 v51; // [rsp+88h] [rbp-49h]
  int v52; // [rsp+98h] [rbp-39h]
  __int128 v53; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v54; // [rsp+B8h] [rbp-19h] BYREF
  struct D2D_RECT_F v55; // [rsp+C8h] [rbp-9h] BYREF
  void *retaddr; // [rsp+130h] [rbp+5Fh]

  v3 = *((_BYTE *)this + 170) == 0;
  v46 = a3;
  v7 = 1;
  if ( !v3 )
  {
    if ( *((float *)this + 92) != 0.0 )
      return v7;
    if ( *((float *)this + 93) != 0.0 )
      return v7;
    if ( *((float *)this + 94) != -1.0 )
      return v7;
    v8 = *((float *)this + 96);
    if ( *((float *)this + 95) > v8 || v8 > 1.5707952 )
      return v7;
    v9 = *(_QWORD *)a2;
    v10 = *((float *)this + 91) - *((float *)a3 + 31);
    v52 = 0;
    v54 = 0LL;
    v11 = *(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v9 + 184);
    v53 = 0LL;
    if ( v11(a2) )
    {
      p_Blink = (struct CVisual *)((char *)a3 + 328);
LABEL_9:
      if ( p_Blink )
      {
        CVisual::EnsureWorldTransform(a3, a2, p_Blink);
        if ( !*((_QWORD *)p_Blink + 28) )
          ModuleFailFastForHRESULT(-2003292412, retaddr);
        v15 = *((__m128 *)p_Blink + 17);
        v52 = *((_DWORD *)p_Blink + 84);
        v16 = *((__m128 *)p_Blink + 18);
        v17 = *((_OWORD *)p_Blink + 19);
        v18 = *((__m128 *)p_Blink + 20);
        v48 = v15;
        v49 = v16;
        v50 = v17;
        v51 = v18;
        if ( (char)(4 * BYTE1(v52)) >> 6 == 1 )
          return v7;
        if ( (char)(4 * BYTE1(v52)) >> 6 >= 0 )
        {
          LODWORD(v19) = COERCE_UNSIGNED_INT(
                           (float)((float)((float)(COERCE_FLOAT(_mm_shuffle_ps(v16, v16, 255).m128_u32[0] & _xmm)
                                                 * 61440.0)
                                         + (float)(COERCE_FLOAT(_mm_shuffle_ps(v15, v15, 255).m128_u32[0] & _xmm)
                                                 * 61440.0))
                                 + COERCE_FLOAT(_mm_shuffle_ps(v18, v18, 255).m128_u32[0] & _xmm))
                         - 1.0) & _xmm;
          BYTE1(v52) = BYTE1(v52) & 0xCF | (32 * (v19 < 0.000081380211) + 16);
          if ( v19 >= 0.000081380211 )
            return v7;
        }
        if ( v10 <= 0.0 || *((float *)this + 96) <= 0.0 )
        {
LABEL_15:
          v7 = 0;
LABEL_16:
          v20 = (char *)this + 256;
          v21 = *((_QWORD *)this + 32);
          v22 = 0LL;
          v23 = *((unsigned int *)this + 70);
          while ( (unsigned int)v22 < (unsigned int)v23 )
          {
            if ( v46 == *(CSpriteVisual **)(v21 + 8 * v22) )
            {
              v26 = 1;
              goto LABEL_30;
            }
            v22 = (unsigned int)(v22 + 1);
          }
          v26 = 0;
LABEL_30:
          if ( v7 )
          {
            if ( v26 )
              DynArray<CChannelContext *,1>::Remove(v20, &v46);
            return v7;
          }
          if ( !v26 )
          {
            v41 = v23 + 1;
            v7 = 1;
            if ( (int)v23 + 1 >= (unsigned int)v23 )
            {
              if ( v41 <= *((_DWORD *)this + 69) )
              {
                *(_QWORD *)(v21 + 8 * v23) = v46;
                *((_DWORD *)this + 70) = v41;
                return v7;
              }
              v42 = DynArrayImpl<0>::AddMultipleAndSet(v20, 8LL, 1LL, &v46);
              v44 = v42;
              if ( v42 >= 0 )
                return v7;
              v43 = 192;
            }
            else
            {
              v42 = -2147024362;
              v43 = 181;
              v44 = -2147024362;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, v43, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x2A2u, 0LL);
          }
          return v7;
        }
        v55 = 0LL;
        v28 = *(__int64 (__fastcall **)(CSpriteVisual *, struct D2D_RECT_F *, __int64, __int64))(*(_QWORD *)v46 + 232LL);
        if ( v28 == CSpriteVisual::GetContentBounds )
          ContentBounds = CSpriteVisual::GetContentBounds(v46, &v55, v13, v14);
        else
          ContentBounds = ((__int64 (__fastcall *)(CSpriteVisual *, struct D2D_RECT_F *))v28)(v46, &v55);
        if ( ContentBounds < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ContentBounds, 0x26Fu, 0LL);
          return v7;
        }
        CMILMatrix::Transform2DBoundsHelper<1>((__int64)&v48, &v55, (float *)&v53);
        v30 = tanf_0(*((float *)this + 96));
        v31 = *((float *)this + 90);
        v32 = *((float *)this + 89);
        v33 = (CVisual *)*((_QWORD *)this + 38);
        v52 = 0;
        v34 = (float)(v30 * v10) + (float)(v30 * v10);
        v47.left = v32 - (float)(v30 * v10);
        v47.top = v31 - (float)(v30 * v10);
        v47.bottom = v34 + v47.top;
        v47.right = v34 + v47.left;
        TreeData = CVisual::FindTreeData(v33, a2);
        v36 = TreeData;
        if ( TreeData )
        {
          CVisual::EnsureWorldTransform(v33, a2, TreeData);
          if ( !*((_QWORD *)v36 + 28) )
            ModuleFailFastForHRESULT(-2003292412, retaddr);
          v37 = *((__m128 *)v36 + 17);
          v38 = *((__m128 *)v36 + 18);
          v52 = *((_DWORD *)v36 + 84);
          v48 = v37;
          v39 = *((_OWORD *)v36 + 19);
          v49 = v38;
          v40 = *((__m128 *)v36 + 20);
          v50 = v39;
          v51 = v40;
          CMILMatrix::Transform2DBoundsHelper<1>((__int64)&v48, &v47, (float *)&v54);
          if ( *((float *)&v54 + 2) > *(float *)&v54
            && *((float *)&v54 + 3) > *((float *)&v54 + 1)
            && *((float *)&v53 + 2) > *(float *)&v53
            && *((float *)&v53 + 3) > *((float *)&v53 + 1)
            && *((float *)&v54 + 2) > *(float *)&v53
            && *((float *)&v53 + 2) > *(float *)&v54
            && *((float *)&v54 + 3) > *((float *)&v53 + 1)
            && *((float *)&v53 + 3) > *((float *)&v54 + 1) )
          {
            goto LABEL_16;
          }
          goto LABEL_15;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x6AAu, 0LL);
        v45 = 642;
LABEL_27:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, v45, 0LL);
        return v7;
      }
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(a3);
      if ( TreeDataListHead )
      {
        for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
        {
          p_Blink = (struct CTreeData *)&i[-22].Blink;
          if ( (const struct CVisualTree *)i[2].Flink == a2 )
            goto LABEL_9;
        }
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x6AAu, 0LL);
    v45 = 607;
    goto LABEL_27;
  }
  return 0;
}
