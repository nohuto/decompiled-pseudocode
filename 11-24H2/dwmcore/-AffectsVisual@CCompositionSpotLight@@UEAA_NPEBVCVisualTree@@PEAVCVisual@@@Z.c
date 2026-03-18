/*
 * XREFs of ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18014B770
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18014AFB0 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV?$DynArrayIANoCtor@PEAVCCompositionLight@@$02$0A@@@PEA_N@Z @ 0x18014B4AC (-GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV-$DynArrayIANoCtor@PE.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000A2C0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18009E420 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z @ 0x1800C3810 (-GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800C39A0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800D6E60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014D5C0 (-GetContentBounds@CSpriteVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x18019EB44 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     tanf_0 @ 0x1802DF6B0 (tanf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCompositionSpotLight::AffectsVisual(
        CCompositionSpotLight *this,
        const struct CVisualTree *a2,
        struct CVisual *a3)
{
  bool v3; // zf
  char v7; // di
  float v8; // xmm1_4
  __int64 v9; // rax
  float v10; // xmm7_4
  unsigned __int8 (__fastcall *v11)(const struct CVisualTree *); // rax
  RTL_SRWLOCK *v12; // rsi
  float v13; // xmm3_4
  char *v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  int v20; // ebx
  char v21; // al
  __int64 (__fastcall *v23)(CSpriteVisual *, struct D2D_RECT_F *); // rax
  int ContentBounds; // eax
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  CVisual *v28; // r14
  float v29; // xmm3_4
  __int64 **TreeData; // rax
  CTreeData *v31; // rsi
  unsigned int v32; // edx
  unsigned int v33; // eax
  int v34; // r9d
  unsigned int v35; // [rsp+28h] [rbp-A9h]
  bool v36[8]; // [rsp+38h] [rbp-99h] BYREF
  CSpriteVisual *v37; // [rsp+40h] [rbp-91h] BYREF
  struct D2D_RECT_F v38; // [rsp+48h] [rbp-89h] BYREF
  _BYTE v39[12]; // [rsp+58h] [rbp-79h] BYREF
  int v40; // [rsp+64h] [rbp-6Dh]
  int v41; // [rsp+74h] [rbp-5Dh]
  int v42; // [rsp+94h] [rbp-3Dh]
  int v43; // [rsp+98h] [rbp-39h]
  __int128 v44; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v45; // [rsp+B8h] [rbp-19h] BYREF
  struct D2D_RECT_F v46; // [rsp+C8h] [rbp-9h] BYREF

  v3 = *((_BYTE *)this + 170) == 0;
  v37 = a3;
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
    v43 = 0;
    v45 = 0LL;
    v11 = *(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v9 + 184);
    v44 = 0LL;
    if ( v11(a2) )
    {
      v12 = (RTL_SRWLOCK *)((char *)a3 + 328);
LABEL_9:
      if ( v12 )
      {
        v36[0] = 0;
        CVisual::EnsureWorldTransform(a3, a2, v12);
        CTreeData::GetWorldTransform((CTreeData *)v12, (struct CMILMatrix *)v39, v36, 0LL);
        if ( (char)(4 * BYTE1(v43)) >> 6 == 1 )
          return v7;
        if ( (char)(4 * BYTE1(v43)) >> 6 >= 0 )
        {
          LODWORD(v13) = COERCE_UNSIGNED_INT(
                           (float)((float)((float)(COERCE_FLOAT(v41 & _xmm) * 61440.0)
                                         + (float)(COERCE_FLOAT(v40 & _xmm) * 61440.0))
                                 + COERCE_FLOAT(v42 & _xmm))
                         - 1.0) & _xmm;
          BYTE1(v43) = BYTE1(v43) & 0xCF | (32 * (v13 < 0.000081380211) + 16);
          if ( v13 >= 0.000081380211 )
            return v7;
        }
        if ( v10 <= 0.0 || *((float *)this + 96) <= 0.0 )
          goto LABEL_14;
        v46 = 0LL;
        v23 = *(__int64 (__fastcall **)(CSpriteVisual *, struct D2D_RECT_F *))(*(_QWORD *)v37 + 232LL);
        if ( v23 == CSpriteVisual::GetContentBounds )
          ContentBounds = CSpriteVisual::GetContentBounds(v37, &v46);
        else
          ContentBounds = v23(v37, &v46);
        if ( ContentBounds < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ContentBounds, 0x26Fu, 0LL);
          return v7;
        }
        CMILMatrix::Transform2DBoundsHelper<1>((__int64)v39, &v46, (float *)&v44);
        v25 = tanf_0(*((float *)this + 96));
        v26 = *((float *)this + 90);
        v27 = *((float *)this + 89);
        v28 = (CVisual *)*((_QWORD *)this + 38);
        v43 = 0;
        v29 = (float)(v25 * v10) + (float)(v25 * v10);
        v38.left = v27 - (float)(v25 * v10);
        v38.top = v26 - (float)(v25 * v10);
        v38.bottom = v29 + v38.top;
        v38.right = v29 + v38.left;
        TreeData = CVisual::FindTreeData(v28, a2);
        v31 = (CTreeData *)TreeData;
        if ( !TreeData )
        {
          v20 = -2003292412;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x6AAu, 0LL);
          v35 = 642;
          goto LABEL_25;
        }
        v36[0] = 0;
        CVisual::EnsureWorldTransform(v28, a2, (RTL_SRWLOCK *)TreeData);
        CTreeData::GetWorldTransform(v31, (struct CMILMatrix *)v39, v36, 0LL);
        CMILMatrix::Transform2DBoundsHelper<1>((__int64)v39, &v38, (float *)&v45);
        if ( *((float *)&v45 + 2) <= *(float *)&v45
          || *((float *)&v45 + 3) <= *((float *)&v45 + 1)
          || *((float *)&v44 + 2) <= *(float *)&v44
          || *((float *)&v44 + 3) <= *((float *)&v44 + 1)
          || *((float *)&v45 + 2) <= *(float *)&v44
          || *((float *)&v44 + 2) <= *(float *)&v45
          || *((float *)&v45 + 3) <= *((float *)&v44 + 1)
          || *((float *)&v44 + 3) <= *((float *)&v45 + 1) )
        {
LABEL_14:
          v7 = 0;
        }
        v14 = (char *)this + 256;
        v15 = *((_QWORD *)this + 32);
        v16 = 0LL;
        v17 = *((unsigned int *)this + 70);
        while ( (unsigned int)v16 < (unsigned int)v17 )
        {
          if ( v37 == *(CSpriteVisual **)(v15 + 8 * v16) )
          {
            v21 = 1;
            goto LABEL_28;
          }
          v16 = (unsigned int)(v16 + 1);
        }
        v21 = 0;
LABEL_28:
        if ( v7 )
        {
          if ( v21 )
            DynArray<CChannelContext *,1>::Remove(v14, &v37);
          return v7;
        }
        if ( v21 )
          return v7;
        v32 = v17 + 1;
        v7 = 1;
        if ( (int)v17 + 1 >= (unsigned int)v17 )
        {
          if ( v32 <= *((_DWORD *)this + 69) )
          {
            *(_QWORD *)(v15 + 8 * v17) = v37;
            *((_DWORD *)this + 70) = v32;
            return v7;
          }
          v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v14, 8, 1, &v37);
          v34 = v20;
          if ( v20 >= 0 )
            return v7;
          v33 = 192;
        }
        else
        {
          v20 = -2147024362;
          v33 = 181;
          v34 = -2147024362;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, v33, 0LL);
        v35 = 674;
LABEL_25:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, v35, 0LL);
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
          v12 = (RTL_SRWLOCK *)&i[-22];
          if ( (const struct CVisualTree *)i[2].Flink == a2 )
            goto LABEL_9;
        }
      }
    }
    v20 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x6AAu, 0LL);
    v35 = 607;
    goto LABEL_25;
  }
  return 0;
}
