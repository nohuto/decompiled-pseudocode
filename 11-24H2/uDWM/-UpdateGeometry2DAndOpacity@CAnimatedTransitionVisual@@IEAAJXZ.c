/*
 * XREFs of ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017F9C
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017878 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x180017A30 (-D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x180017D20 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x180017E80 (-Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180017F60 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z @ 0x180019394 (-D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z.c)
 *     ?D2DMatrixTranslation@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x1800193CC (-D2DMatrixTranslation@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180019410 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180019B80 (-Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001B720 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x18001F698 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18001F858 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180024618 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DAndOpacity(CAnimatedTransitionVisual *this)
{
  char v2; // r12
  char v3; // r14
  char v4; // r15
  char v5; // bl
  int v6; // r13d
  int v7; // ecx
  int v8; // eax
  float v9; // xmm12_4
  int v10; // r8d
  int v11; // edx
  int v12; // eax
  float v13; // xmm13_4
  int v14; // r9d
  int *v15; // rax
  float v16; // xmm8_4
  float v17; // xmm9_4
  float m11; // xmm15_4
  float m12; // xmm14_4
  LONG v20; // edi
  LONG v21; // eax
  __int64 v22; // rbx
  float v23; // xmm10_4
  float v24; // xmm11_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  int v27; // eax
  int v28; // edx
  int v29; // eax
  struct CBaseImageProxy *v30; // rcx
  int v31; // ebx
  CBaseObject *v32; // rcx
  CBaseObject *v33; // rcx
  CBaseObject *v34; // rcx
  __int64 v36; // rdx
  CBaseObject *v37; // rcx
  CBaseObject *v38; // rcx
  CBaseObject *v39; // rcx
  float v40; // xmm0_4
  const struct D2DVector2 *v41; // r8
  int v42; // eax
  int v43; // [rsp+28h] [rbp-E0h]
  CBaseObject *v44; // [rsp+48h] [rbp-C0h] BYREF
  CBaseObject *v45; // [rsp+50h] [rbp-B8h] BYREF
  CBaseObject *v46; // [rsp+58h] [rbp-B0h] BYREF
  char v47; // [rsp+60h] [rbp-A8h]
  struct tagRECT v48; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+78h] [rbp-90h] BYREF
  __int64 v50; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v51; // [rsp+88h] [rbp-80h] BYREF
  __int64 v52; // [rsp+90h] [rbp-78h] BYREF
  D2D_MATRIX_3X2_F v53; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v54[8]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v55[64]; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), 0.9999899864196777);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v47 = 0;
  v52 = 0LL;
  v51 = 0LL;
  v50 = 0LL;
  v49 = 0LL;
  v46 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  *(_QWORD *)&v53.m11 = *(_QWORD *)((char *)this + 716);
  v53.m21 = *((FLOAT *)this + 181);
  v48 = *(struct tagRECT *)((char *)this + 808);
  v6 = *((_DWORD *)this + 202);
  v7 = *((_DWORD *)this + 204) - v6;
  v8 = 0;
  if ( v7 >= 0 )
    v8 = *((_DWORD *)this + 204) - v6;
  v9 = (float)((float)v8 * *((float *)this + 182)) + (float)v6;
  *(float *)&v52 = v9;
  v10 = *((_DWORD *)this + 203);
  v11 = *((_DWORD *)this + 205) - v10;
  v12 = 0;
  if ( v11 >= 0 )
    v12 = *((_DWORD *)this + 205) - v10;
  v13 = (float)((float)v12 * *((float *)this + 183)) + (float)v10;
  *((float *)&v52 + 1) = v13;
  v14 = *((_DWORD *)this + 226);
  v15 = (int *)((char *)this + 908);
  if ( v14 || *v15 )
  {
    if ( v7 < 0 )
      v7 = 0;
    v16 = (float)v7 / (float)((float)v14 / *((float *)this + 191));
    if ( v11 < 0 )
      v11 = 0;
    v17 = (float)v11 / (float)((float)*v15 / *((float *)this + 192));
    m11 = v53.m11 * v16;
    m12 = v53.m12 * v17;
    v20 = RoundToNearestInt((float)((float)((float)v48.left - v9) / v16) + v9);
    v21 = RoundToNearestInt((float)((float)((float)v48.top - v13) / v17) + v13);
    v22 = HIDWORD(*(_QWORD *)&v48.right);
    v23 = (float)((float)((float)((float)((float)v20 - v9) * v16) + v9) - (float)v48.left) * *((float *)this + 179);
    v24 = (float)((float)((float)((float)((float)v21 - v13) * v17) + v13) - (float)v48.top) * *((float *)this + 180);
    v48.left = v20;
    v48.top = v21;
    v48.right = RoundToNearestInt((float)((float)((float)v48.right - v9) / v16) + v9);
    v48.bottom = RoundToNearestInt((float)((float)((float)(int)v22 - v13) / v17) + v13);
    v10 = *((_DWORD *)this + 203);
    v5 = v47;
  }
  else
  {
    v23 = 0.0;
    v24 = 0.0;
    m12 = v53.m12;
    m11 = v53.m11;
  }
  v25 = (float)(v6 + *((_DWORD *)this + 204)) * 0.5;
  v26 = (float)(v10 + *((_DWORD *)this + 205)) * 0.5;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(m11 - 1.0) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(m12 - 1.0) & _xmm) >= 0.0000011920929 )
  {
    v51 = __PAIR64__(LODWORD(m12), LODWORD(m11));
    v3 = 1;
  }
  if ( COERCE_FLOAT(*((_DWORD *)this + 185) & _xmm) >= 0.0000011920929 )
  {
    v27 = 0;
    if ( *((_DWORD *)this + 204) - v6 >= 0 )
      v27 = *((_DWORD *)this + 204) - v6;
    *(float *)&v50 = (float)((float)v27 * *((float *)this + 188)) + (float)v6;
    v28 = *((_DWORD *)this + 203);
    v29 = 0;
    if ( *((_DWORD *)this + 205) - v28 >= 0 )
      v29 = *((_DWORD *)this + 205) - v28;
    *((float *)&v50 + 1) = (float)((float)v29 * *((float *)this + 189)) + (float)v28;
    v2 = 1;
  }
  if ( COERCE_FLOAT(*((_DWORD *)this + 176) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(*((_DWORD *)this + 177) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(LODWORD(v23) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(LODWORD(v24) & _xmm) >= 0.0000011920929 )
  {
    *(float *)&v49 = *((float *)this + 176) - v23;
    *((float *)&v49 + 1) = *((float *)this + 177) - v24;
    v4 = 1;
  }
  D2DMatrixIdentity((struct D2DMatrix *)v54);
  if ( COERCE_FLOAT(*((_DWORD *)this + 223) & _xmm) >= 0.0000011920929 )
  {
    v5 = 1;
    D2DMatrixTranslation(
      (struct D2DMatrix *)v55,
      COERCE_FLOAT(LODWORD(v25) ^ _xmm),
      COERCE_FLOAT(LODWORD(v26) ^ _xmm),
      0.0);
    D2DMatrixMultiply((struct D2DMatrix *)v54, (const struct D2DMatrix *)v54, (const struct D2DMatrix *)v55);
    D2DMatrixRotationZ((struct D2DMatrix *)v55, *((float *)this + 223) * 0.017453292);
    D2DMatrixMultiply((struct D2DMatrix *)v54, (const struct D2DMatrix *)v54, (const struct D2DMatrix *)v55);
    D2DMatrixTranslation((struct D2DMatrix *)v55, v25, v26, 0.0);
    D2DMatrixMultiply((struct D2DMatrix *)v54, (const struct D2DMatrix *)v54, (const struct D2DMatrix *)v55);
  }
  if ( (v3 || v2 || v4)
    && (v2 ? (v40 = *((float *)this + 185), v41 = (const struct D2DVector2 *)&v50) : (v40 = 0.0, v41 = 0LL),
        (D2DMatrixTransformation2D(
           (struct D2DMatrix *)v55,
           (const struct D2DVector2 *)((unsigned __int64)&v52 & -(__int64)(v3 != 0)),
           0.0,
           (const struct D2DVector2 *)((unsigned __int64)&v51 & -(__int64)(v3 != 0)),
           v41,
           v40,
           (const struct D2DVector2 *)((unsigned __int64)&v49 & -(__int64)(v4 != 0))),
         D2DMatrixMultiply((struct D2DMatrix *)v54, (const struct D2DMatrix *)v54, (const struct D2DMatrix *)v55),
         v2)
     || v3
     || v4)
    || v5 )
  {
    *(_QWORD *)&v53.m11 = v54[0];
    *(_QWORD *)&v53.m[1][0] = v54[2];
    *(_QWORD *)&v53.m[2][0] = v54[6];
    v31 = CMatrixTransformProxy::Update(*((CMatrixTransformProxy **)this + 36), &v53);
    if ( v31 < 0 )
    {
      v36 = 1342LL;
      goto LABEL_40;
    }
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v44);
    v31 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 36), &v44);
    if ( v31 < 0 )
    {
      v36 = 1343LL;
      goto LABEL_40;
    }
    v31 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v44);
    if ( v31 < 0 )
    {
      v36 = 1344LL;
      goto LABEL_40;
    }
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v46);
  v30 = (struct CBaseImageProxy *)*((_QWORD *)this + 69);
  if ( !v30 )
    v30 = (struct CBaseImageProxy *)*((_QWORD *)this + 67);
  v31 = CDrawTileImageInstruction::Create(v30, &v48, (const struct tagPOINT *)this + 112, *((float *)this + 174), &v46);
  if ( v31 < 0 )
  {
    v36 = 1353LL;
    goto LABEL_40;
  }
  v31 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v46);
  if ( v31 < 0 )
  {
    v36 = 1354LL;
    goto LABEL_40;
  }
  if ( v44 )
  {
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v45);
    v31 = CPopInstruction::Create(&v45);
    if ( v31 >= 0 )
    {
      v42 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v45);
      v31 = v42;
      if ( v42 >= 0 )
        goto LABEL_32;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54F,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
        (const char *)(unsigned int)v42,
        v43);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v45);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v44);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v46);
      return (unsigned int)v31;
    }
    v36 = 1358LL;
LABEL_40:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v31,
      v43);
    v37 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      CBaseObject::Release(v37);
    }
    v38 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      CBaseObject::Release(v38);
    }
    v39 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      CBaseObject::Release(v39);
    }
    return (unsigned int)v31;
  }
LABEL_32:
  v32 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    CBaseObject::Release(v32);
  }
  v33 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    CBaseObject::Release(v33);
  }
  v34 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    CBaseObject::Release(v34);
  }
  return 0LL;
}
