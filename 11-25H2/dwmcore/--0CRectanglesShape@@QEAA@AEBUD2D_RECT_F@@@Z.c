/*
 * XREFs of ??0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x1800AC4A0
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F5D0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800727D4 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x180073B4C (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800744F0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18010DE80 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@Z @ 0x1800E243C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

CRectanglesShape *__fastcall CRectanglesShape::CRectanglesShape(CRectanglesShape *this, const struct D2D_RECT_F *a2)
{
  char *v2; // r12
  __int64 v4; // rcx
  __int64 v5; // rax
  __int128 v6; // xmm0
  _OWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // r15
  __int64 v11; // r10
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  _OWORD *v16; // r8
  CRectanglesShape *result; // rax
  unsigned __int64 v18; // r14
  void *v19; // rax
  const void *v20; // rbx
  void *v21; // rbp
  signed __int64 v22; // rsi
  void *v23; // rax
  char *v24; // rcx
  _OWORD *v25; // r11
  __int64 v26; // rax
  __int64 v27; // [rsp+20h] [rbp-78h]
  __int128 v28; // [rsp+20h] [rbp-78h]
  __int128 v29; // [rsp+40h] [rbp-58h] BYREF
  __int64 v30; // [rsp+50h] [rbp-48h]
  __int128 v31; // [rsp+60h] [rbp-38h]

  v2 = (char *)this + 40;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CRectanglesShape::`vftable';
  *((_QWORD *)this + 2) = (char *)this + 40;
  *((_QWORD *)this + 4) = (char *)this + 56;
  *((_QWORD *)this + 3) = (char *)this + 40;
  *((_QWORD *)this + 7) = 0LL;
  v4 = *((_QWORD *)this + 3);
  v5 = (v4 - (__int64)v2) >> 4;
  if ( v5 )
    *((_QWORD *)this + 3) = v4 - 16 * v5;
  v6 = (__int128)*a2;
  v7 = (_OWORD *)*((_QWORD *)this + 3);
  v8 = *((_QWORD *)this + 4);
  v9 = *((_QWORD *)this + 2);
  v10 = ((__int64)v7 - v9) >> 4;
  v31 = v6;
  if ( !((v8 - (__int64)v7) >> 4) )
  {
    if ( v10 + 1 < v10 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      goto LABEL_21;
    }
    v18 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)((v8 - v9) >> 4),
            (v8 - v9) >> 4,
            v10 + 1);
    v19 = operator new[](saturated_mul(v18, 0x10uLL));
    v20 = (const void *)*((_QWORD *)this + 2);
    v21 = v19;
    *(_QWORD *)&v28 = v19;
    v22 = *((_QWORD *)this + 3) - (_QWORD)v20;
    *((_QWORD *)&v28 + 1) = v10;
    v29 = v28;
    v30 = 0LL;
    v23 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(
                    &v29,
                    v22 >> 4);
    memmove_0(v23, v20, v22);
    v24 = (char *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v21;
    if ( v24 == v2 )
      v24 = 0LL;
    operator delete(v24);
    v9 = *((_QWORD *)this + 2);
    v7 = (_OWORD *)(v9 + 16 * v10);
    *((_QWORD *)this + 3) = v7;
    *((_QWORD *)this + 4) = v9 + 16 * v18;
  }
  v11 = ((__int64)v7 - v9) >> 4;
  v12 = 16 * v11;
  v13 = v11 - v10;
  v30 = 0LL;
  v27 = 16 * v11 + v9;
  if ( !v27 )
    goto LABEL_12;
  v30 = 1LL;
  v14 = (((__int64)v7 - v9) >> 4) - v10;
  if ( v13 > 1 )
    v14 = 1LL;
  v15 = 16 * v14;
  v16 = &v7[v15 / 0xFFFFFFFFFFFFFFF0uLL];
  if ( v7 != &v7[v15 / 0xFFFFFFFFFFFFFFF0uLL] )
  {
    v25 = (_OWORD *)(v27 + 16);
    v26 = 1LL;
    do
    {
      --v7;
      if ( !v27 )
        goto LABEL_12;
      if ( !v26 )
        goto LABEL_12;
      --v26;
      --v25;
      if ( v26 )
        goto LABEL_12;
      *v25 = *v7;
    }
    while ( v7 != v16 );
  }
  if ( v13 > 1 )
  {
    if ( !v11 )
      goto LABEL_14;
    if ( !v9 )
      goto LABEL_12;
    if ( v11 >= 0 )
    {
LABEL_14:
      if ( (__int64)(16 * v11 - 16 * v10 - 16) >> 4 > 0 )
      {
        if ( v11 >= (unsigned __int64)((__int64)(16 * v11 - 16 * v10 - 16) >> 4) )
          goto LABEL_16;
      }
      else if ( (__int64)(16 * v11 - 16 * v10 - 16) >> 4 >= 0 )
      {
LABEL_16:
        memmove_0(
          (void *)(v9 + v12 - (16 * v11 - 16 * v10 - 16)),
          (const void *)(v9 + 16 * v10),
          16 * v11 - 16 * v10 - 16);
        goto LABEL_9;
      }
LABEL_12:
      _invalid_parameter_noinfo_noreturn();
    }
LABEL_21:
    if ( v11 )
      goto LABEL_12;
    goto LABEL_14;
  }
LABEL_9:
  *((_QWORD *)this + 3) += 16LL;
  result = this;
  *(_OWORD *)(v9 + 16 * v10) = v31;
  return result;
}
