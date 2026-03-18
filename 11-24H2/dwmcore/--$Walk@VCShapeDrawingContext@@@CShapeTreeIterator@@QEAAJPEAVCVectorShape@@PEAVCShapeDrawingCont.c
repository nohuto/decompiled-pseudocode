/*
 * XREFs of ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180141D90
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180140BA0 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180041E8C (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800B4D30 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ?GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180142C00 (-GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x180142FF0 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAXXZ @ 0x180143610 (-Optimize@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAXXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?IsOfType@CVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C25A8 (-IsOfType@CVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x1802257B8 (--$uninitialized_move@V-$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V-$checked_array_iterator@PEAV.c)
 *     ??$move_backward@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x18024AED0 (--$move_backward@V-$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V-$checked_array_iterator@PEAVMatri.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeTreeIterator::Walk<CShapeDrawingContext>(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  CSpriteVectorShape *v6; // r12
  char v7; // r13
  CComponentTransform2D *v8; // rbx
  bool (__fastcall *v9)(__int64, int); // rax
  struct D2D_SIZE_F v10; // xmm0_8
  __int64 v11; // rax
  void (__fastcall *v12)(CComponentTransform2D *__hidden, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *); // rax
  unsigned __int64 v13; // r9
  float v14; // xmm7_4
  float v15; // xmm6_4
  float v16; // xmm5_4
  float v17; // xmm4_4
  __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned __int64 v20; // r15
  __m128 dy_low; // xmm8
  __m128 dx_low; // xmm9
  signed __int64 v23; // r8
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r9
  signed __int64 v32; // r8
  unsigned __int64 v33; // rcx
  bool (__fastcall *v34)(__int64, int); // rax
  char v35; // al
  _QWORD *v36; // rcx
  __int64 (__fastcall *v37)(CContainerVectorShape *); // rax
  __int64 v38; // rax
  int v39; // ebx
  _QWORD *v40; // r8
  unsigned int v41; // eax
  __int64 v42; // rbx
  struct CVectorShape *(__fastcall *v43)(CContainerVectorShape *, unsigned int); // rax
  __int64 v44; // rax
  unsigned int v45; // ebx
  __int64 v46; // rcx
  int v47; // edx
  int v48; // eax
  unsigned int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned int v53; // edi
  __int64 v54; // rax
  char *v55; // r13
  char *v56; // r8
  __int64 v57; // r9
  __int64 v58; // rbx
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rax
  SIZE_T size_of; // rax
  char *v63; // r15
  char *v64; // rcx
  __int128 v65; // xmm1
  __int64 v66; // rbx
  __int128 v67; // xmm0
  char *v68; // r8
  char *v69; // rdx
  size_t v70; // r8
  _QWORD *v71; // rcx
  unsigned __int64 v72; // rdx
  _QWORD *v73; // rcx
  __int64 (*v74)(void); // rax
  __int64 v75; // rcx
  unsigned int v76; // eax
  unsigned int v77; // ecx
  unsigned int v78; // edx
  _QWORD *v79; // r8
  struct CVectorShape *(__fastcall *v80)(CContainerVectorShape *, unsigned int); // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  unsigned __int64 v83; // rax
  __int64 v84; // rdx
  unsigned int v86; // r15d
  HANDLE ProcessHeap; // rax
  void *v88; // rax
  void *v89; // r12
  __int64 v90; // rax
  int RenderTasks; // eax
  __int128 v92; // xmm1
  __int128 v93; // xmm0
  __int64 v94; // rax
  int v95; // xmm1_4
  int v96; // xmm1_4
  unsigned int v97; // xmm0_4
  __int64 v98; // r9
  float x; // xmm5_4
  float y; // xmm6_4
  float v101; // xmm3_4
  float v102; // xmm4_4
  float v103; // xmm2_4
  float v104; // xmm1_4
  float v105; // xmm0_4
  float *v106; // r9
  float v107; // xmm7_4
  float v108; // xmm1_4
  float v109; // xmm0_4
  void *v110; // r15
  HANDLE v111; // rax
  unsigned __int64 v112; // r11
  unsigned __int64 v113; // rcx
  __int64 v114; // r10
  float v115; // xmm1_4
  float v116; // xmm0_4
  unsigned __int64 v117; // rcx
  LPVOID v118; // rax
  __int64 v119; // r8
  __int64 v120; // rdx
  LPVOID v121; // rbx
  void *v122; // rcx
  __int64 v123; // rax
  char v124; // [rsp+38h] [rbp-D0h]
  unsigned __int8 v125; // [rsp+39h] [rbp-CFh]
  __int128 v126; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v127; // [rsp+50h] [rbp-B8h]
  __int64 v128; // [rsp+58h] [rbp-B0h]
  struct D2D_SIZE_F v129; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v130; // [rsp+70h] [rbp-98h]
  __int128 v131; // [rsp+78h] [rbp-90h] BYREF
  signed __int64 v132; // [rsp+88h] [rbp-80h]
  struct D2D_RECT_F v133; // [rsp+98h] [rbp-70h] BYREF
  __int64 v134; // [rsp+A8h] [rbp-60h]
  __int128 v135; // [rsp+B8h] [rbp-50h]
  struct D2D_RECT_F v136; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v137; // [rsp+D8h] [rbp-30h]
  _BYTE v138[48]; // [rsp+E0h] [rbp-28h] BYREF
  unsigned __int64 v139; // [rsp+110h] [rbp+8h]
  int v140; // [rsp+118h] [rbp+10h]
  __int64 v141; // [rsp+11Ch] [rbp+14h]
  struct D2D_MATRIX_3X2_F v142; // [rsp+128h] [rbp+20h] BYREF
  struct D2D_POINT_2F v143[4]; // [rsp+140h] [rbp+38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = a2;
  do
  {
LABEL_2:
    v6 = *(CSpriteVectorShape **)(a3 + 8);
    v7 = 0;
    LOBYTE(v3) = 1;
    v125 = 1;
    v8 = (CComponentTransform2D *)*((_QWORD *)v6 + 9);
    v9 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v6 + 64LL);
    if ( v9 == CContainerVectorShape::IsOfType )
    {
      if ( !(unsigned __int8)CVectorShape::IsOfType(v6, 165LL) )
      {
        v124 = 0;
        goto LABEL_6;
      }
      v124 = 1;
    }
    else
    {
      v124 = v9((__int64)v6, 165);
      if ( !v124 )
        goto LABEL_6;
    }
    LOBYTE(v3) = 0;
    v125 = 0;
    v136 = (struct D2D_RECT_F)*((_OWORD *)v6 + 5);
    if ( *((_BYTE *)v6 + 97) )
    {
      if ( *(_BYTE *)(a3 + 521) )
      {
        v94 = *(_QWORD *)(a3 + 64);
        v141 = 1065353216LL;
        *(_QWORD *)&v138[8] = 0LL;
        *(_QWORD *)&v138[40] = 1065353216LL;
        v95 = *(_DWORD *)(v94 - 20);
        *(_DWORD *)v138 = *(_DWORD *)(v94 - 24);
        *(_DWORD *)&v138[16] = *(_DWORD *)(v94 - 16);
        *(_DWORD *)&v138[4] = v95;
        v96 = *(_DWORD *)(v94 - 12);
        *(_OWORD *)&v138[24] = 0LL;
        v140 = 0;
        v97 = *(_DWORD *)(v94 - 8);
        *(_DWORD *)&v138[20] = v96;
        v139 = __PAIR64__(*(_DWORD *)(v94 - 4), v97);
        WORD2(v141) = 10248;
        CMILMatrix::Multiply((__m128 *)v138, (const struct CMILMatrix *)(a3 + 352), (struct CMILMatrix *)(a3 + 420));
        *(_BYTE *)(a3 + 521) = 0;
      }
      v98 = a3 + 420;
      if ( (char)(4 * *(_BYTE *)(a3 + 484)) >> 6 != 1 )
      {
        if ( (char)(4 * *(_BYTE *)(a3 + 484)) >> 6 < 0 )
        {
LABEL_103:
          x = v136.left + *(float *)(v98 + 48);
          y = v136.top + *(float *)(v98 + 52);
          v101 = v136.right + *(float *)(v98 + 48);
          v102 = v136.bottom + *(float *)(v98 + 52);
LABEL_104:
          if ( v101 > x && v102 > y )
          {
            v103 = *(float *)(a3 + 344);
            v104 = *(float *)(a3 + 336);
            if ( v103 > v104 )
            {
              v105 = *(float *)(a3 + 348);
              if ( v105 > *(float *)(a3 + 340) && v101 > v104 && v103 > x && v102 > *(float *)(a3 + 340) && v105 > y )
                v7 = 1;
            }
          }
          goto LABEL_6;
        }
        if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a3 + 420)
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v98 - 1.0) & _xmm) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v98 + 20) - 1.0) & _xmm) < 0.000081380211 )
        {
          *(_BYTE *)(v98 + 64) |= 0x30u;
          goto LABEL_103;
        }
        *(_BYTE *)(v98 + 64) = *(_BYTE *)(v98 + 64) & 0xCF | 0x10;
      }
      if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v98) )
      {
        v107 = v106[5];
        v101 = (float)(v136.right * *v106) + v106[12];
        v102 = (float)(v136.bottom * v107) + v106[13];
        x = (float)(v136.left * *v106) + v106[12];
        v108 = v101;
        y = (float)(v136.top * v107) + v106[13];
        v109 = v102;
        if ( *v106 <= 0.0 || v107 <= 0.0 )
        {
          if ( x > v101 )
          {
            v136.left = (float)(v136.right * *v106) + v106[12];
            v101 = x;
            x = v108;
          }
          if ( y > v102 )
          {
            v136.top = v102;
            v102 = y;
            y = v109;
          }
        }
      }
      else
      {
        CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v106, &v136, v143);
        x = v143[0].x;
        v117 = 1LL;
        y = v143[0].y;
        v101 = v143[0].x;
        v102 = v143[0].y;
        do
        {
          v115 = v143[v117].x;
          v116 = v143[v117].y;
          x = fminf(x, v115);
          ++v117;
          y = fminf(y, v116);
          v101 = fmaxf(v101, v115);
          v102 = fmaxf(v102, v116);
        }
        while ( v117 < 4 );
      }
      goto LABEL_104;
    }
LABEL_6:
    if ( v8 )
    {
      if ( *(_QWORD *)(a3 + 16) )
        v10 = (struct D2D_SIZE_F)_mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      else
        v10 = *(struct D2D_SIZE_F *)(a3 + 328);
      v129 = v10;
      v11 = *(_QWORD *)v8;
      memset(&v142, 0, sizeof(v142));
      v12 = *(void (__fastcall **)(CComponentTransform2D *__hidden, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *))(v11 + 208);
      if ( v12 == CComponentTransform2D::GetRealization )
        CComponentTransform2D::GetRealization(v8, &v129, &v142);
      else
        v12(v8, &v129, &v142);
      v13 = *(_QWORD *)(a3 + 64);
      dy_low = (__m128)LODWORD(v142.dy);
      v14 = *(float *)(v13 - 20);
      v15 = *(float *)(v13 - 12);
      v16 = *(float *)(v13 - 16);
      v17 = *(float *)(v13 - 24);
      v18 = *(_QWORD *)(a3 + 72);
      v19 = *(_QWORD *)(a3 + 56);
      *(float *)&v131 = (float)(v142.m11 * v17) + (float)(v142.m12 * v16);
      *((float *)&v131 + 1) = (float)(v142.m11 * v14) + (float)(v142.m12 * v15);
      v20 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v13 - v19) >> 3);
      *((float *)&v131 + 3) = (float)(v142.m22 * v15) + (float)(v142.m21 * v14);
      *((float *)&v131 + 2) = (float)(v142.m21 * v17) + (float)(v142.m22 * v16);
      dx_low = (__m128)LODWORD(v142.dx);
      dy_low.m128_f32[0] = (float)((float)(v142.dy * v15) + (float)(v142.dx * v14)) + *(float *)(v13 - 4);
      dx_low.m128_f32[0] = (float)((float)(v142.dx * v17) + (float)(v142.dy * v16)) + *(float *)(v13 - 8);
      if ( !(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v18 - v13) >> 3)) )
      {
        if ( v20 + 1 < v20 )
        {
          std::_Xoverflow_error("overflow");
          __debugbreak();
          goto LABEL_82;
        }
        v3 = detail::liberal_expansion_policy::expand(
               (detail::liberal_expansion_policy *)0xAAAAAAAAAAAAAAABLL,
               0xAAAAAAAAAAAAAAABuLL * ((v18 - v19) >> 3),
               v20 + 1);
        v118 = operator new[](saturated_mul(v3, 0x18uLL));
        v119 = *(_QWORD *)(a3 + 64);
        v120 = *(_QWORD *)(a3 + 56);
        *(_QWORD *)&v136.left = v118;
        v121 = v118;
        *(_QWORD *)&v136.right = v20;
        v137 = 0LL;
        v133 = v136;
        v134 = 0LL;
        std::uninitialized_move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
          &v136,
          v120,
          v119,
          &v133);
        v122 = *(void **)(a3 + 56);
        *(_QWORD *)(a3 + 56) = v121;
        if ( v122 == (void *)(a3 + 80) )
          v122 = 0LL;
        operator delete(v122);
        v19 = *(_QWORD *)(a3 + 56);
        v13 = v19 + 24 * v20;
        v123 = 3 * v3;
        *(_QWORD *)(a3 + 64) = v13;
        LODWORD(v3) = v125;
        *(_QWORD *)(a3 + 72) = v19 + 8 * v123;
      }
      v128 = 0LL;
      v23 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v13 - v19) >> 3);
      v134 = 0LL;
      v127 = 1LL;
      v24 = v23 - v20;
      *((_QWORD *)&v126 + 1) = v19 + 8 * ((__int64)(v13 - v19) >> 3);
      if ( !*((_QWORD *)&v126 + 1) )
        goto LABEL_56;
      v134 = 1LL;
      v25 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v13 - v19) >> 3) - v20;
      if ( v24 > 1 )
        v25 = 1LL;
      v128 = 1LL;
      v26 = 24 * v25;
      v27 = v13 - 24 * v25;
      if ( v13 != v13 - v26 )
      {
        v112 = v127;
        v113 = v128;
        v114 = *((_QWORD *)&v126 + 1) + 24LL;
        while ( 1 )
        {
          v13 -= 24LL;
          if ( !*((_QWORD *)&v126 + 1) )
            break;
          if ( !v113 )
            break;
          --v113;
          v114 -= 24LL;
          if ( v113 >= v112 )
            break;
          *(_OWORD *)v114 = *(_OWORD *)v13;
          *(_QWORD *)(v114 + 16) = *(_QWORD *)(v13 + 16);
          if ( v13 == v27 )
            goto LABEL_16;
        }
LABEL_56:
        _invalid_parameter_noinfo_noreturn();
      }
LABEL_16:
      if ( v24 > 1 )
      {
        if ( v23 && (!v19 || v23 < 0) )
          goto LABEL_56;
        v127 = v23;
        v128 = v23;
        *((_QWORD *)&v126 + 1) = v19;
        std::move_backward<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
          &v133,
          v19 + 24 * v20,
          v19 + 24 * (v23 - 1),
          (char *)&v126 + 8);
      }
      *(_QWORD *)(a3 + 64) += 24LL;
      v28 = 3 * v20;
      *(_OWORD *)(v19 + 8 * v28) = v131;
      *(_QWORD *)(v19 + 8 * v28 + 16) = _mm_unpacklo_ps(dx_low, dy_low).m128_u64[0];
      *(_BYTE *)(a3 + 520) = 1;
      if ( !v124 )
        *(_BYTE *)(a3 + 521) = 1;
    }
    if ( v7 )
    {
      if ( *(_BYTE *)(a3 + 520) )
      {
        v54 = *(_QWORD *)(a3 + 64);
        v55 = *(char **)(a3 + 504);
        v56 = *(char **)(a3 + 512);
        *(_DWORD *)v138 = 1;
        *(_QWORD *)&v138[24] = *(_QWORD *)(v54 - 8);
        *(_OWORD *)&v138[8] = *(_OWORD *)(v54 - 24);
        if ( v55 == v56 )
        {
          v57 = *(_QWORD *)(a3 + 496);
          v58 = (__int64)&v55[-v57] / 56;
          if ( v58 == 0x492492492492492LL )
            std::_Xlength_error("vector too long");
          v59 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)&v56[-v57] >> 3);
          *(_QWORD *)&v136.left = v58 + 1;
          v60 = v59 >> 1;
          if ( v59 > 0x492492492492492LL - (v59 >> 1) )
          {
            v61 = 0x492492492492492LL;
          }
          else
          {
            v61 = v59 + v60;
            if ( v59 + v60 < v58 + 1 )
              v61 = v58 + 1;
          }
          v130 = v61;
          size_of = std::_Get_size_of_n<56>(v61);
          v63 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
          v64 = v63;
          v65 = *(_OWORD *)&v138[16];
          v66 = 56 * v58;
          *(_OWORD *)&v63[v66] = *(_OWORD *)v138;
          v67 = *(_OWORD *)&v138[32];
          *(_OWORD *)&v63[v66 + 16] = v65;
          *(_QWORD *)&v65 = v139;
          *(_OWORD *)&v63[v66 + 32] = v67;
          *(_QWORD *)&v63[v66 + 48] = v65;
          v68 = *(char **)(a3 + 504);
          v69 = *(char **)(a3 + 496);
          if ( v55 == v68 )
          {
            v70 = v68 - v69;
          }
          else
          {
            memmove_0(v63, v69, v55 - v69);
            v70 = *(_QWORD *)(a3 + 504) - (_QWORD)v55;
            v69 = v55;
            v64 = &v63[v66 + 56];
          }
          memmove_0(v64, v69, v70);
          v71 = *(_QWORD **)(a3 + 496);
          if ( v71 )
          {
            v72 = 8 * ((__int64)(*(_QWORD *)(a3 + 512) - (_QWORD)v71) >> 3);
            if ( v72 >= 0x1000 )
            {
              v72 += 39LL;
              if ( (unsigned __int64)v71 - *(v71 - 1) - 8 > 0x1F )
                goto LABEL_56;
              v71 = (_QWORD *)*(v71 - 1);
            }
            operator delete(v71, v72);
          }
          v90 = 56LL * *(_QWORD *)&v136.left;
          *(_QWORD *)(a3 + 496) = v63;
          *(_QWORD *)(a3 + 504) = &v63[v90];
          *(_QWORD *)(a3 + 512) = &v63[56 * v130];
        }
        else
        {
          v92 = *(_OWORD *)&v138[16];
          *(_OWORD *)v55 = *(_OWORD *)v138;
          v93 = *(_OWORD *)&v138[32];
          *((_OWORD *)v55 + 1) = v92;
          *(_QWORD *)&v92 = v139;
          *((_OWORD *)v55 + 2) = v93;
          *((_QWORD *)v55 + 6) = v92;
          *(_QWORD *)(a3 + 504) += 56LL;
        }
        *(_BYTE *)(a3 + 520) = 0;
      }
      RenderTasks = CSpriteVectorShape::CreateRenderTasks(v6, (struct CShapeDrawingContext *)a3);
      v45 = RenderTasks;
      if ( RenderTasks < 0 )
      {
        v53 = 0;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, RenderTasks, 0x148u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v45, 0x24u, 0LL);
        goto LABEL_75;
      }
    }
    if ( !(_BYTE)v3 )
      break;
    v73 = *(_QWORD **)(a1 + 8);
    v74 = *(__int64 (**)(void))(*v73 + 312LL);
    if ( (char *)v74 == (char *)CContainerVectorShape::GetChildrenCount )
      v19 = (__int64)(v73[14] - v73[13]) >> 3;
    else
      LODWORD(v19) = v74();
    if ( !(_DWORD)v19 )
      break;
    *(_QWORD *)&v135 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v135 + 1) = *(unsigned int *)(a1 + 24);
    v75 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v75 != *(_DWORD *)(a1 + 44) )
      goto LABEL_61;
    v83 = 0xFFFFFFFFLL;
    v3 = 2LL * *(unsigned int *)(a1 + 44);
    if ( v3 > 0xFFFFFFFF )
    {
      v84 = 98LL;
      goto LABEL_73;
    }
LABEL_82:
    if ( (unsigned int)v3 <= 0x40 )
      LODWORD(v3) = 64;
    v86 = 16 * v75;
    if ( 16 * v75 > v83 )
    {
      v84 = 101LL;
LABEL_73:
      v45 = -2147024362;
LABEL_74:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v84,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)v45);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)v45);
      v53 = 0;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v45, 0x87u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v45, 0x29u, 0LL);
      goto LABEL_75;
    }
    if ( !(_DWORD)v3 || 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v3 <= 0x10 )
    {
      v45 = -2147024809;
      goto LABEL_89;
    }
    ProcessHeap = GetProcessHeap();
    v88 = HeapAlloc(ProcessHeap, 0, 16LL * (unsigned int)v3);
    v89 = v88;
    if ( !v88 )
    {
      v45 = -2147024882;
LABEL_89:
      v84 = 104LL;
      goto LABEL_74;
    }
    memcpy_0(v88, *(const void **)(a1 + 32), v86);
    v110 = *(void **)(a1 + 32);
    if ( v110 )
    {
      v111 = GetProcessHeap();
      HeapFree(v111, 0, v110);
    }
    *(_QWORD *)(a1 + 32) = v89;
    *(_DWORD *)(a1 + 44) = v3;
LABEL_61:
    *(_OWORD *)(*(_QWORD *)(a1 + 32) + 16LL * *(unsigned int *)(a1 + 40)) = v135;
    v76 = *(_DWORD *)(a1 + 52);
    v77 = *(_DWORD *)(a1 + 40) + 1;
    *(_DWORD *)(a1 + 40) = v77;
    if ( v76 <= v77 )
      v76 = v77;
    *(_DWORD *)(a1 + 52) = v76;
    if ( *(_DWORD *)(a1 + 28) == 1 )
      v78 = 0;
    else
      v78 = v19 - 1;
    *(_DWORD *)(a1 + 24) = v78;
    v79 = *(_QWORD **)(a1 + 8);
    v80 = *(struct CVectorShape *(__fastcall **)(CContainerVectorShape *, unsigned int))(*v79 + 320LL);
    if ( v80 == CContainerVectorShape::GetChildAt )
      v81 = *(_QWORD *)(v79[13] + 8LL * v78);
    else
      v81 = ((__int64 (__fastcall *)(_QWORD))v80)(*(_QWORD *)(a1 + 8));
    v82 = *(_QWORD *)(a1 + 8);
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v82;
    *(_QWORD *)(a1 + 8) = v81;
  }
  while ( v81 );
  v3 = (unsigned __int64)CContainerVectorShape::IsOfType;
  do
  {
    v29 = *(_QWORD **)(a3 + 8);
    if ( v29[9] )
    {
      v30 = *(_QWORD *)(a3 + 64);
      v31 = *(_QWORD *)(a3 + 56);
      v32 = 0xAAAAAAAAAAAAAAABuLL * ((v30 - 24 - v31) >> 3);
      v33 = 0xAAAAAAAAAAAAAAABuLL * ((v30 - v31) >> 3);
      if ( v32 + 1 > v33 )
      {
        std::_Xoverflow_error("overflow");
        __debugbreak();
        JUMPOUT(0x180142B8DLL);
      }
      if ( v32 + 1 != v33 )
      {
        if ( v32 && (!v31 || v32 < 0 || v33 < v32) )
          _invalid_parameter_noinfo_noreturn();
        *(_QWORD *)&v131 = *(_QWORD *)(a3 + 56);
        *((_QWORD *)&v131 + 1) = v33;
        v132 = v32;
        std::uninitialized_move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
          &v133,
          v31 + 24 * (v32 + 1),
          v31 + 24 * v33,
          &v131);
      }
      *(_QWORD *)(a3 + 64) -= 24LL;
      *(_BYTE *)(a3 + 520) = 1;
      v34 = *(bool (__fastcall **)(__int64, int))(*v29 + 64LL);
      if ( v34 == CContainerVectorShape::IsOfType )
        v35 = CVectorShape::IsOfType(v29, 165LL);
      else
        v35 = v34((__int64)v29, 165);
      if ( !v35 )
        *(_BYTE *)(a3 + 521) = 1;
    }
    v36 = *(_QWORD **)(a1 + 16);
    if ( v36
      && (*(_DWORD *)(a1 + 28) == 1
       && *(_DWORD *)(a1 + 24) != -1
       && ((v37 = *(__int64 (__fastcall **)(CContainerVectorShape *))(*v36 + 312LL),
            v37 != CContainerVectorShape::GetChildrenCount)
         ? (LODWORD(v38) = ((__int64 (*)(void))v37)())
         : (v38 = (__int64)(v36[14] - v36[13]) >> 3),
           v39 = *(_DWORD *)(a1 + 24),
           v39 + 1 < (unsigned int)v38)
       || !*(_DWORD *)(a1 + 28) && (v39 = *(_DWORD *)(a1 + 24)) != 0) )
    {
      v40 = *(_QWORD **)(a1 + 16);
      v41 = v39 - 1;
      v42 = (unsigned int)(v39 + 1);
      if ( *(_DWORD *)(a1 + 28) != 1 )
        v42 = v41;
      v43 = *(struct CVectorShape *(__fastcall **)(CContainerVectorShape *, unsigned int))(*v40 + 320LL);
      if ( v43 == CContainerVectorShape::GetChildAt )
        v44 = *(_QWORD *)(v40[13] + 8 * v42);
      else
        v44 = (__int64)v43(*(CContainerVectorShape **)(a1 + 16), v42);
      *(_DWORD *)(a1 + 24) = v42;
      v45 = 0;
      *(_QWORD *)(a1 + 8) = v44;
      if ( v44 )
        goto LABEL_2;
    }
    else
    {
      v45 = 1;
    }
    if ( !*(_DWORD *)(a1 + 4) )
      break;
    v46 = 0LL;
    v136.bottom = 0.0;
    v47 = 0;
    v48 = *(_DWORD *)(a1 + 40);
    if ( v48 )
    {
      v49 = v48 - 1;
      *(_DWORD *)(a1 + 40) = v49;
      v50 = v49;
      v51 = *(_QWORD *)(a1 + 32);
      v50 *= 2LL;
      v47 = *(_DWORD *)(v51 + 8 * v50 + 8);
      v46 = *(_QWORD *)(v51 + 8 * v50);
    }
    v52 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v46;
    --*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 8) = v52;
    *(_DWORD *)(a1 + 24) = v47;
  }
  while ( v52 );
  v53 = 0;
LABEL_75:
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  CWatermarkStack<CGraphWalker<CVectorShape>::CFrame,64,2,10>::Optimize(a1 + 32);
  if ( (v45 & 0x80000000) != 0 )
    return v45;
  return v53;
}
