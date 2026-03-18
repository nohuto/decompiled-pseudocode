/*
 * XREFs of ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x1800238A8
 * Callers:
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x18012FBF8 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x1800221B0 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ @ 0x180022220 (-GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180024D70 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1801215D0 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020985C (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowCaster::CalculateCasterBounds(
        __int64 a1,
        __int64 a2,
        const struct CVisualTree *a3,
        char *a4)
{
  __int64 v4; // rax
  struct CVisual *v5; // rdi
  float v6; // xmm6_4
  float v7; // xmm7_4
  int v9; // xmm1_4
  char v13; // r15
  float v14; // xmm8_4
  float v15; // xmm9_4
  CVisual *v16; // rbx
  __int64 v17; // rcx
  struct TransformParentData *TransformParentDataInternal; // rax
  CVisualReferenceController *v19; // rcx
  __int64 (*v20)(void); // rax
  struct CVisual *VisualNoRef; // rax
  struct _LIST_ENTRY **p_Blink; // rax
  bool v23; // al
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v26; // r10
  struct _LIST_ENTRY *i; // rcx
  float v28; // xmm3_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  bool v31; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v32[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+80h] [rbp-80h]
  _BYTE v34[64]; // [rsp+90h] [rbp-70h] BYREF
  int v35; // [rsp+D0h] [rbp-30h]
  float v36; // [rsp+E0h] [rbp-20h] BYREF
  float v37; // [rsp+E4h] [rbp-1Ch]
  float v38; // [rsp+E8h] [rbp-18h]
  float v39; // [rsp+ECh] [rbp-14h]
  __int128 v40; // [rsp+F0h] [rbp-10h] BYREF

  v4 = *(_QWORD *)(a1 + 72);
  v5 = 0LL;
  v33 = 0;
  v6 = 0.0;
  v7 = 0.0;
  v36 = 0.0;
  v37 = 0.0;
  v9 = *(_DWORD *)(v4 + 148);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(v4 + 144);
  v13 = 0;
  *(_DWORD *)(a2 + 12) = v9;
  *(_QWORD *)a2 = 0LL;
  v14 = *(float *)(v4 + 144);
  v15 = *(float *)(v4 + 148);
  v16 = *(CVisual **)(a1 + 72);
  v32[0] = _xmm;
  v32[1] = _xmm;
  BYTE1(v33) = BYTE1(v33) & 0xC0 | 0x29;
  v38 = v14;
  v39 = v15;
  v32[2] = _xmm;
  v32[3] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
  LOBYTE(v33) = -86;
  while ( v16 )
  {
    v17 = *((_QWORD *)v16 + 31);
    if ( v17 )
    {
      v40 = 0LL;
      if ( (unsigned __int8)CGeometry::TryGetAxisAlignedRectangle(v17, (char *)v16 + 144, &v40) )
      {
        if ( *(float *)&v40 > v6 )
        {
          v36 = *(float *)&v40;
          v6 = *(float *)&v40;
        }
        v28 = v7;
        if ( *((float *)&v40 + 1) > v7 )
        {
          v37 = *((float *)&v40 + 1);
          v7 = *((float *)&v40 + 1);
          v28 = *((float *)&v40 + 1);
        }
        v29 = v14;
        if ( v14 > *((float *)&v40 + 2) )
        {
          v38 = *((float *)&v40 + 2);
          v14 = *((float *)&v40 + 2);
          v29 = *((float *)&v40 + 2);
        }
        v30 = v15;
        if ( v15 > *((float *)&v40 + 3) )
        {
          v39 = *((float *)&v40 + 3);
          v15 = *((float *)&v40 + 3);
          v30 = *((float *)&v40 + 3);
        }
        if ( v29 <= v6 || v30 <= v28 )
        {
          v15 = 0.0;
          v14 = 0.0;
          v7 = 0.0;
          v39 = 0.0;
          v6 = 0.0;
          v38 = 0.0;
          v37 = 0.0;
          v36 = 0.0;
        }
        v13 = 1;
      }
    }
    if ( !*(_QWORD *)(a1 + 80) )
      break;
    if ( v16 != *((CVisual **)a3 + 9) )
    {
      TransformParentDataInternal = CVisual::GetTransformParentDataInternal(v16);
      if ( TransformParentDataInternal )
      {
        v19 = *(CVisualReferenceController **)TransformParentDataInternal;
        v20 = *(__int64 (**)(void))(**(_QWORD **)TransformParentDataInternal + 184LL);
        if ( (char *)v20 == (char *)CVisualReferenceController::GetVisualNoRef )
          VisualNoRef = CVisualReferenceController::GetVisualNoRef(v19);
        else
          VisualNoRef = (struct CVisual *)v20();
        v5 = VisualNoRef;
      }
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a3 + 184LL))(a3) )
      {
        p_Blink = (struct _LIST_ENTRY **)((char *)v16 + 328);
LABEL_11:
        if ( p_Blink && *((_BYTE *)p_Blink + 12) && v5 )
          break;
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v16);
        v26 = TreeDataListHead;
        if ( TreeDataListHead )
        {
          for ( i = TreeDataListHead->Flink; i != v26; i = i->Flink )
          {
            p_Blink = &i[-22].Blink;
            if ( (const struct CVisualTree *)i[2].Flink == a3 )
              goto LABEL_11;
          }
        }
      }
    }
    v5 = 0LL;
    v31 = 0;
    v35 = 0;
    CVisual::CalcTransform(v16, a3, 0LL, &v31, (struct CMILMatrix *)v34, 0LL);
    if ( v31 )
    {
      if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(v34) )
        break;
      CMILMatrix::Transform2DBoundsHelper<0>(v34, &v36, &v36);
      CMILMatrix::Multiply((CMILMatrix *)v32, (const struct CMILMatrix *)v34);
      v15 = v39;
      v14 = v38;
      v7 = v37;
      v6 = v36;
    }
    v16 = (CVisual *)*((_QWORD *)v16 + 11);
  }
  v23 = Windows::Foundation::Numerics::invert(
          (Windows::Foundation::Numerics *)v32,
          (const struct Windows::Foundation::Numerics::float4x4 *)v32,
          a3);
  LOWORD(v33) = v33 & 0xC003;
  if ( v23 )
  {
    *a4 = v13;
    CMILMatrix::Transform2DBoundsHelper<0>(v32, &v36, a2);
  }
  return a2;
}
