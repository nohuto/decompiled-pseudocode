/*
 * XREFs of ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18019AF04
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180199760 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009BF4 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?push_back@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBM@Z @ 0x180199574 (-push_back@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@de.c)
 *     ??Y?$checked_array_iterator@PEAM@stdext@@QEAAAEAV01@_J@Z @ 0x180199700 (--Y-$checked_array_iterator@PEAM@stdext@@QEAAAEAV01@_J@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18019C774 (-terminate@details@gsl@@YAXXZ.c)
 *     ??A?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEBAAEBURampPair@CoordMap@@_K@Z @ 0x1801EBF48 (--A-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEBAAEBURampPair@CoordMap@@_K@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAURampPair@CoordMap@@@std@@V?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@V?$move_iterator@PEAURampPair@CoordMap@@@0@0V12@@Z @ 0x1802020AC (--$uninitialized_move@V-$move_iterator@PEAURampPair@CoordMap@@@std@@V-$checked_array_iterator@PE.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@URampPair@CoordMap@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@URampPair@CoordMap@@@detail@@@std@@@std@@QEAA@XZ @ 0x18022F9C0 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@URampPair@CoordMap@@@detail@@U-$default_delete@$$B.c)
 *     ??$move@V?$move_iterator@PEAW4Type@IRenderTarget@@@std@@V?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@V?$move_iterator@PEAW4Type@IRenderTarget@@@0@0V12@@Z @ 0x180252220 (--$move@V-$move_iterator@PEAW4Type@IRenderTarget@@@std@@V-$checked_array_iterator@PEAW4Type@IRen.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@Z @ 0x1802522B0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA-A_.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180291AB8 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall CoordMap::ComputeTexPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned int *a3,
        __m128i *a4,
        void **a5,
        detail::liberal_expansion_policy *a6,
        float a7)
{
  unsigned __int64 v7; // r12
  _BYTE *v8; // r14
  char *v9; // r10
  _BYTE *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r9
  detail::liberal_expansion_policy *v20; // rcx
  __int64 v21; // r11
  char *v22; // rax
  unsigned __int64 v23; // rbx
  char *v24; // rdx
  unsigned __int64 v25; // r15
  signed __int64 v26; // r9
  unsigned __int64 v27; // rdx
  _BYTE *v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  char *v31; // rax
  unsigned __int64 v32; // rsi
  __m128i v33; // xmm1
  char *v34; // r9
  unsigned __int64 v35; // rcx
  float v36; // xmm7_4
  __int64 *v37; // rdx
  float v38; // xmm6_4
  float v39; // xmm8_4
  float *i; // rdx
  __int64 v41; // rdx
  unsigned __int64 v42; // r8
  __int64 v43; // rax
  char *v44; // r10
  char *v45; // r9
  __int64 v46; // rdx
  char *v47; // rdi
  __int64 v48; // rcx
  char *v49; // rax
  char *v50; // rcx
  unsigned __int64 v51; // rcx
  signed __int64 v52; // r9
  unsigned __int64 v53; // rdx
  _BYTE *v54; // r8
  __int64 v55; // rax
  __int64 v56; // rcx
  char *v57; // rax
  __m128i v58; // xmm1
  char *v59; // r8
  unsigned __int64 v60; // rsi
  float v61; // xmm7_4
  __int64 *v62; // rdx
  float v63; // xmm6_4
  float v64; // xmm8_4
  float *j; // rdx
  __int64 v66; // r8
  __m128i *v67; // rbx
  char *v68; // rdx
  __int64 v69; // rdi
  unsigned __int64 v70; // r9
  unsigned int *v71; // r10
  __int64 v72; // rcx
  char *v73; // rax
  detail::liberal_expansion_policy *v74; // rcx
  signed __int64 v76; // rdi
  __int64 v77; // rax
  unsigned int *v78; // rbx
  signed __int64 v79; // rdi
  __int64 v80; // rax
  unsigned __int64 v81; // rdi
  SIZE_T v82; // r9
  SIZE_T v83; // rax
  LPVOID v84; // rax
  void *v85; // r8
  void *v86; // rdx
  LPVOID v87; // rbx
  void *v88; // rcx
  bool v89; // zf
  char *v90; // rcx
  unsigned __int64 v91; // rdi
  SIZE_T v92; // r9
  SIZE_T v93; // rax
  LPVOID v94; // rax
  __int64 v95; // r8
  __m128i *v96; // rdx
  LPVOID v97; // rbx
  __m128i *v98; // rcx
  __m128i *v99; // rcx
  _BYTE *v100; // r8
  _BYTE *v101; // r8
  _DWORD *v102; // rbx
  _DWORD *v103; // rdi
  unsigned __int64 v104; // rdx
  _DWORD *v105; // rbx
  _DWORD *v106; // rdi
  unsigned __int64 v107; // rdx
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // rsi
  char *v110; // rdi
  void *v111; // rcx
  __int64 v112; // rax
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rdi
  LPVOID v115; // rax
  __int64 v116; // r8
  char *v117; // rdx
  LPVOID v118; // rbx
  char *v119; // rcx
  char *v120; // rcx
  unsigned __int64 v121; // rsi
  char *v122; // rdi
  void *v123; // rcx
  __int64 v124; // rax
  unsigned __int64 v125; // rax
  unsigned __int64 v126; // rdi
  LPVOID v127; // rax
  __int64 v128; // r8
  __m128i *v129; // rdx
  LPVOID v130; // rbx
  __m128i *v131; // rcx
  __m128i *v132; // rcx
  __m128i v133; // [rsp+28h] [rbp-E0h] BYREF
  signed __int64 v134; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v135; // [rsp+48h] [rbp-C0h] BYREF
  char *v136; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v137; // [rsp+58h] [rbp-B0h]
  detail::liberal_expansion_policy *v138; // [rsp+68h] [rbp-A0h]
  __m128i *v139; // [rsp+70h] [rbp-98h]
  char *v140; // [rsp+78h] [rbp-90h] BYREF
  void *v141[2]; // [rsp+88h] [rbp-80h] BYREF
  __m128i v142; // [rsp+98h] [rbp-70h]
  __m128i v143; // [rsp+A8h] [rbp-60h] BYREF
  signed __int64 v144; // [rsp+B8h] [rbp-50h]
  __m128i v145; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v146; // [rsp+D8h] [rbp-30h]
  __m128i v147; // [rsp+E8h] [rbp-20h] BYREF
  char *v148; // [rsp+F8h] [rbp-10h] BYREF
  char *v149; // [rsp+100h] [rbp-8h]
  char *v150; // [rsp+108h] [rbp+0h]
  _BYTE v151[72]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v152; // [rsp+158h] [rbp+50h] BYREF

  v7 = (unsigned __int64)a5;
  v8 = v151;
  v150 = (char *)&v152;
  v9 = v151;
  v138 = a1;
  v10 = a5[1];
  v139 = a4;
  v11 = (v10 - (_BYTE *)*a5) >> 2;
  v135 = (unsigned __int64)a3;
  v148 = v151;
  v149 = v151;
  if ( v11 )
    a5[1] = &v10[-4 * v11];
  v12 = (__int64)(*((_QWORD *)a6 + 1) - *(_QWORD *)a6) >> 2;
  if ( v12 )
    *((_QWORD *)a6 + 1) -= 4 * v12;
  v13 = *a3;
  v14 = ((_BYTE *)a5[1] - (_BYTE *)*a5) >> 2;
  if ( v13 > v14 )
  {
    v15 = ((_BYTE *)a5[2] - (_BYTE *)a5[1]) >> 2;
    if ( v15 < (unsigned int)v13 - v14 )
    {
      v81 = detail::liberal_expansion_policy::expand(
              (detail::liberal_expansion_policy *)v15,
              ((_BYTE *)a5[2] - (_BYTE *)*a5) >> 2,
              v13);
      v83 = 4 * v81;
      if ( !is_mul_ok(v81, 4uLL) )
        v83 = v82;
      v84 = operator new[](v83);
      v85 = a5[1];
      v86 = *a5;
      v133.m128i_i64[0] = (__int64)v84;
      v133.m128i_i64[1] = v14;
      v87 = v84;
      v145 = v133;
      v146 = 0LL;
      std::move<std::move_iterator<enum IRenderTarget::Type *>,stdext::checked_array_iterator<enum IRenderTarget::Type *>>(
        &v143,
        v86,
        v85,
        &v145,
        v84,
        v14,
        0LL);
      v88 = *a5;
      v89 = *a5 == a5 + 3;
      v136 = 0LL;
      *a5 = v87;
      if ( v89 )
        v88 = 0LL;
      operator delete(v88);
      v90 = (char *)*a5;
      a5[1] = (char *)*a5 + 4 * v14;
      a5[2] = &v90[4 * v81];
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v136);
      v9 = v149;
      v8 = v148;
    }
  }
  v16 = (__int64)(*((_QWORD *)a6 + 1) - *(_QWORD *)a6) >> 2;
  v17 = v139->m128i_u32[0];
  if ( v17 > v16 )
  {
    v18 = (__int64)(*((_QWORD *)a6 + 2) - *((_QWORD *)a6 + 1)) >> 2;
    if ( v18 < (unsigned int)v17 - v16 )
    {
      v91 = detail::liberal_expansion_policy::expand(
              (detail::liberal_expansion_policy *)v18,
              (__int64)(*((_QWORD *)a6 + 2) - *(_QWORD *)a6) >> 2,
              v17);
      v93 = 4 * v91;
      if ( !is_mul_ok(v91, 4uLL) )
        v93 = v92;
      v94 = operator new[](v93);
      v95 = *((_QWORD *)a6 + 1);
      v96 = *(__m128i **)a6;
      v133.m128i_i64[0] = (__int64)v94;
      v97 = v94;
      v133.m128i_i64[1] = v16;
      v145 = v133;
      v146 = 0LL;
      std::move<std::move_iterator<enum IRenderTarget::Type *>,stdext::checked_array_iterator<enum IRenderTarget::Type *>>(
        &v143,
        v96,
        v95,
        &v145,
        v94,
        v16,
        0LL);
      v98 = *(__m128i **)a6;
      v89 = *(_QWORD *)a6 == (_QWORD)a6 + 24;
      v136 = 0LL;
      *(_QWORD *)a6 = v97;
      if ( v89 )
        v98 = 0LL;
      operator delete(v98);
      v99 = *(__m128i **)a6;
      *((_QWORD *)a6 + 1) = *(_QWORD *)a6 + 4 * v16;
      *((_QWORD *)a6 + 2) = (char *)v99 + 4 * v91;
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v136);
      v9 = v149;
      v8 = v148;
    }
  }
  v19 = 0xAAAAAAAAAAAAAAABuLL;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((v9 - v8) >> 2) )
  {
    v9 -= 4 * ((v9 - v8) >> 2);
    v149 = v9;
  }
  v20 = v138;
  v21 = 1LL;
  v22 = (char *)*((_QWORD *)v138 + 1);
  v23 = *(_QWORD *)v138;
  v136 = v22;
  while ( (char *)v23 != v22 )
  {
    if ( *(_DWORD *)(v23 + 12) )
      goto LABEL_21;
    v24 = v150;
    v25 = 0xAAAAAAAAAAAAAAABuLL * ((v9 - v8) >> 2);
    if ( !(0xAAAAAAAAAAAAAAABuLL * ((v150 - v9) >> 2)) )
    {
      while ( 1 )
      {
        if ( v25 + 1 >= v25 )
        {
          v108 = detail::liberal_expansion_policy::expand(v20, v19 * ((v24 - v8) >> 2), v25 + 1);
          v109 = v108;
          v133.m128i_i64[0] = (__int64)operator new[](saturated_mul(v108, 0xCuLL));
          v110 = (char *)v133.m128i_i64[0];
          v133.m128i_i64[1] = v25;
          v146 = 0LL;
          v145 = v133;
          std::uninitialized_move<std::move_iterator<CoordMap::RampPair *>,stdext::checked_array_iterator<CoordMap::RampPair *>>(
            &v143,
            v148,
            v149,
            &v145,
            v133.m128i_i64[0],
            v25,
            0LL);
          v111 = v148;
          v89 = v148 == v151;
          v148 = v110;
          if ( v89 )
            v111 = 0LL;
          operator delete(v111);
          v8 = v148;
          v21 = 1LL;
          v9 = &v148[12 * v25];
          v149 = v9;
          v150 = &v148[12 * v109];
          break;
        }
LABEL_114:
        std::_Xoverflow_error("overflow");
        __debugbreak();
      }
    }
    v26 = 0xAAAAAAAAAAAAAAABuLL * ((v9 - v8) >> 2);
    v27 = v26 - v25;
    v28 = &v8[4 * ((v9 - v8) >> 2)];
    if ( !v28 )
      goto LABEL_22;
    v29 = 0xAAAAAAAAAAAAAAABuLL * ((v9 - v8) >> 2) - v25;
    if ( v27 > 1 )
      v29 = 1LL;
    v30 = 12 * v29;
    v31 = &v9[-12 * v29];
    if ( v9 != &v9[-v30] )
    {
      v100 = v28 + 12;
      do
      {
        v9 -= 12;
        if ( !v21 )
          goto LABEL_22;
        v100 -= 12;
        if ( --v21 )
          goto LABEL_22;
        *(_QWORD *)v100 = *(_QWORD *)v9;
        *((_DWORD *)v100 + 2) = *((_DWORD *)v9 + 2);
      }
      while ( v9 != v31 );
      v9 = v149;
    }
    v21 = 1LL;
    if ( v27 > 1 )
    {
      if ( v26 && (!v8 || v26 < 0) )
        goto LABEL_22;
      v133.m128i_i64[1] = v26;
      v134 = v26;
      v133.m128i_i64[0] = (__int64)v8;
      ((void (__fastcall *)(__m128i *, _BYTE *, _BYTE *, __m128i *))std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
        &v143,
        &v8[12 * v25],
        &v8[12 * v26 - 12],
        &v133);
      v9 = v149;
      v21 = 1LL;
    }
    v20 = (detail::liberal_expansion_policy *)(3 * v25);
    v149 = v9 + 12;
    v19 = 0xAAAAAAAAAAAAAAABuLL;
    *(_QWORD *)&v8[4 * (_QWORD)v20] = *(_QWORD *)v23;
    *(_DWORD *)&v8[4 * (_QWORD)v20 + 8] = *(_DWORD *)(v23 + 8);
    v9 = v149;
    v8 = v148;
    v22 = v136;
LABEL_21:
    v23 += 16LL;
  }
  v32 = 0xAAAAAAAAAAAAAAABuLL * ((v9 - v8) >> 2);
  if ( v32 == -1LL || !v8 && v32 )
    goto LABEL_102;
  v142.m128i_i64[0] = 0xAAAAAAAAAAAAAAABuLL * ((v9 - v8) >> 2);
  v142.m128i_i64[1] = (__int64)v8;
  if ( !v8 )
  {
    if ( v32 )
      goto LABEL_102;
  }
  v33 = *(__m128i *)v135;
  v147 = *(__m128i *)v135;
  v145 = v142;
  if ( v32 )
  {
    v34 = (char *)v33.m128i_i64[0];
    v35 = 0LL;
    v136 = 0LL;
    v25 = 0LL;
    v141[0] = (void *)v33.m128i_i64[0];
    if ( v33.m128i_i64[0] )
    {
      do
      {
        v36 = 0.0;
        v37 = (__int64 *)&v8[12 * v25];
        v38 = *(float *)(v147.m128i_i64[1] + 4 * v35);
        while ( v25 < v32 )
        {
          v137 = *v37;
          v39 = *(float *)&v137;
          if ( a7 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v38 - *(float *)&v137) & _xmm) )
          {
            v36 = *((float *)&v137 + 1);
            if ( !v35 )
              goto LABEL_34;
            if ( v35 - 1 >= (unsigned __int64)v34 )
              goto LABEL_102;
            if ( a7 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v38 - *(float *)(v147.m128i_i64[1] + 4 * v35 - 4)) & _xmm) )
            {
LABEL_34:
              v35 = v25 + 1;
              if ( v25 + 1 < v32 )
              {
                for ( i = (float *)&v8[12 * v25 + 12]; ; i += 3 )
                {
                  if ( v35 >= v32 )
                    goto LABEL_102;
                  if ( a7 < COERCE_FLOAT(COERCE_UNSIGNED_INT(*i - v38) & _xmm) )
                    break;
                  ++v25;
                  ++v35;
                }
                if ( v25 >= v32 )
                {
LABEL_102:
                  ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
                  __debugbreak();
                }
              }
              v36 = *(float *)&v8[12 * v25 + 8];
            }
            break;
          }
          if ( *(float *)&v137 > v38 )
          {
            v104 = 0LL;
            if ( v25 )
              v104 = v25 - 1;
            v112 = gsl::span<CoordMap::RampPair const,-1>::operator[](&v145, v104);
            v21 = 1LL;
            v142.m128i_i64[0] = *(_QWORD *)v112;
            v36 = (float)((float)(1.0
                                - (float)((float)(v38 - *(float *)v142.m128i_i32)
                                        / (float)(v39 - *(float *)v142.m128i_i32)))
                        * *(float *)(v112 + 8))
                + (float)((float)((float)(v38 - *(float *)v142.m128i_i32) / (float)(v39 - *(float *)v142.m128i_i32))
                        * *((float *)&v137 + 1));
            break;
          }
          ++v25;
          v37 = (__int64 *)((char *)v37 + 12);
        }
        v41 = *(_QWORD *)(v7 + 16);
        v42 = (__int64)(*(_QWORD *)(v7 + 8) - *(_QWORD *)v7) >> 2;
        v43 = (v41 - *(_QWORD *)(v7 + 8)) >> 2;
        v135 = v42;
        if ( !v43 )
        {
          if ( v42 + 1 < v42 )
            goto LABEL_114;
          v113 = detail::liberal_expansion_policy::expand(
                   (detail::liberal_expansion_policy *)v35,
                   (v41 - *(_QWORD *)v7) >> 2,
                   v42 + 1);
          v114 = v113;
          v115 = operator new[](saturated_mul(v113, 4uLL));
          v116 = *(_QWORD *)(v7 + 8);
          v117 = *(char **)v7;
          v133.m128i_i64[0] = (__int64)v115;
          v118 = v115;
          v133.m128i_i64[1] = v135;
          v134 = 0LL;
          v144 = 0LL;
          v143 = v133;
          ((void (__fastcall *)(__m128i *, char *, __int64, __m128i *))std::move<std::move_iterator<enum IRenderTarget::Type *>,stdext::checked_array_iterator<enum IRenderTarget::Type *>>)(
            &v133,
            v117,
            v116,
            &v143);
          v119 = *(char **)v7;
          *(_QWORD *)v7 = v118;
          v140 = 0LL;
          if ( v119 == (char *)(v7 + 24) )
            v119 = 0LL;
          operator delete(v119);
          v120 = *(char **)v7;
          *(_QWORD *)(v7 + 8) = *(_QWORD *)v7 + 4 * v135;
          *(_QWORD *)(v7 + 16) = &v120[4 * v114];
          std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v140);
          v42 = v135;
          v21 = 1LL;
        }
        v44 = *(char **)v7;
        v45 = *(char **)(v7 + 8);
        v140 = v44;
        v46 = (v45 - v44) >> 2;
        v23 = v46 - v42;
        v47 = &v44[4 * v46];
        if ( !v47 )
          goto LABEL_22;
        v48 = v46 - v42;
        if ( v23 > 1 )
          v48 = 1LL;
        v49 = &v45[-4 * v48];
        while ( v45 != v49 )
        {
          v45 -= 4;
          if ( !v21 || (--v21, v21) )
LABEL_22:
            _invalid_parameter_noinfo_noreturn();
          *(_DWORD *)v47 = *(_DWORD *)v45;
        }
        v21 = 1LL;
        if ( v23 > 1 )
        {
          if ( v46 && (!v44 || v46 < 0) )
            goto LABEL_22;
          v133.m128i_i64[1] = v46;
          v134 = v46;
          v23 = (unsigned __int64)&v44[4 * v42];
          v133.m128i_i64[0] = (__int64)v44;
          v76 = 4 * v46 - 4 * v42 - 4;
          v77 = std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(
                  &v133,
                  -(v76 >> 2));
          memmove_0((void *)(v77 - v76), (const void *)v23, v76);
          v42 = v135;
          v21 = 1LL;
          v44 = v140;
        }
        v50 = v136;
        *(_QWORD *)(v7 + 8) += 4LL;
        v35 = (unsigned __int64)(v50 + 1);
        v34 = (char *)v141[0];
        *(float *)&v44[4 * v42] = v36;
        v136 = (char *)v35;
      }
      while ( v35 < (unsigned __int64)v34 );
      v9 = v149;
      v8 = v148;
    }
  }
  else
  {
    v102 = (_DWORD *)_mm_srli_si128(v33, 8).m128i_u64[0];
    v103 = &v102[v33.m128i_i64[0]];
    if ( v102 != v103 )
    {
      do
      {
        LODWORD(v135) = *v102;
        detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::push_back(
          (detail::liberal_expansion_policy *)v7,
          (unsigned int *)&v135);
        ++v102;
      }
      while ( v102 != v103 );
      v9 = v149;
      v8 = v148;
      v21 = 1LL;
    }
  }
  if ( 0xAAAAAAAAAAAAAAABuLL * ((v9 - v8) >> 2) )
  {
    v9 -= 4 * ((v9 - v8) >> 2);
    v149 = v9;
  }
  v51 = (unsigned __int64)v138;
  v23 = *((_QWORD *)v138 + 23);
  v7 = *((_QWORD *)v138 + 24);
  while ( v23 != v7 )
  {
    if ( !*(_DWORD *)(v23 + 12) )
    {
      v25 = 0xAAAAAAAAAAAAAAABuLL * ((v9 - v8) >> 2);
      if ( !(0xAAAAAAAAAAAAAAABuLL * ((v150 - v9) >> 2)) )
      {
        if ( v25 + 1 < v25 )
          goto LABEL_114;
        v121 = detail::liberal_expansion_policy::expand(
                 (detail::liberal_expansion_policy *)v51,
                 0xAAAAAAAAAAAAAAABuLL * ((v150 - v8) >> 2),
                 v25 + 1);
        v133.m128i_i64[0] = (__int64)operator new[](saturated_mul(v121, 0xCuLL));
        v133.m128i_i64[1] = v25;
        v122 = (char *)v133.m128i_i64[0];
        v134 = 0LL;
        v143 = v133;
        v144 = 0LL;
        ((void (__fastcall *)(__m128i *, char *, char *, __m128i *))std::uninitialized_move<std::move_iterator<CoordMap::RampPair *>,stdext::checked_array_iterator<CoordMap::RampPair *>>)(
          &v133,
          v148,
          v149,
          &v143);
        v123 = v148;
        v89 = v148 == v151;
        v148 = v122;
        v141[0] = 0LL;
        if ( v89 )
          v123 = 0LL;
        operator delete(v123);
        v149 = &v148[12 * v25];
        v150 = &v148[12 * v121];
        std::unique_ptr<detail::aligned_storage_for<CoordMap::RampPair> [0],std::default_delete<detail::aligned_storage_for<CoordMap::RampPair> [0]>>::~unique_ptr<detail::aligned_storage_for<CoordMap::RampPair> [0],std::default_delete<detail::aligned_storage_for<CoordMap::RampPair> [0]>>(v141);
        v9 = v149;
        v21 = 1LL;
        v8 = v148;
      }
      v52 = 0xAAAAAAAAAAAAAAABuLL * ((v9 - v8) >> 2);
      v53 = v52 - v25;
      v54 = &v8[4 * ((v9 - v8) >> 2)];
      if ( !v54 )
        goto LABEL_22;
      v55 = 0xAAAAAAAAAAAAAAABuLL * ((v9 - v8) >> 2) - v25;
      if ( v53 > 1 )
        v55 = 1LL;
      v56 = 12 * v55;
      v57 = &v9[-12 * v55];
      if ( v9 != &v9[-v56] )
      {
        v101 = v54 + 12;
        do
        {
          v9 -= 12;
          if ( !v21 )
            goto LABEL_22;
          v101 -= 12;
          if ( --v21 )
            goto LABEL_22;
          *(_QWORD *)v101 = *(_QWORD *)v9;
          *((_DWORD *)v101 + 2) = *((_DWORD *)v9 + 2);
        }
        while ( v9 != v57 );
        v9 = v149;
      }
      if ( v53 > 1 )
      {
        if ( v52 && (!v8 || v52 < 0) )
          goto LABEL_22;
        v133.m128i_i64[1] = v52;
        v134 = v52;
        v133.m128i_i64[0] = (__int64)v8;
        ((void (__fastcall *)(__m128i *, _BYTE *, _BYTE *, __m128i *))std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
          &v143,
          &v8[12 * v25],
          &v8[12 * v52 - 12],
          &v133);
        v9 = v149;
      }
      v51 = 3 * v25;
      v149 = v9 + 12;
      *(_QWORD *)&v8[4 * v51] = *(_QWORD *)v23;
      *(_DWORD *)&v8[4 * v51 + 8] = *(_DWORD *)(v23 + 8);
      v9 = v149;
      v8 = v148;
    }
    v23 += 16LL;
    v21 = 1LL;
  }
  v23 = -1LL;
  v25 = 0xAAAAAAAAAAAAAAABuLL * ((v9 - v8) >> 2);
  if ( v25 == -1LL || !v8 && v25 )
    goto LABEL_100;
  v142.m128i_i64[0] = 0xAAAAAAAAAAAAAAABuLL * ((v9 - v8) >> 2);
  v142.m128i_i64[1] = (__int64)v8;
  if ( !v8 )
  {
    if ( v25 )
      goto LABEL_100;
  }
  v147 = v142;
  v58 = *v139;
  v145 = *v139;
  if ( v25 )
  {
    v59 = (char *)v58.m128i_i64[0];
    v51 = 0LL;
    v138 = 0LL;
    v60 = 0LL;
    v140 = (char *)v58.m128i_i64[0];
    if ( !v58.m128i_i64[0] )
      goto LABEL_94;
    while ( 1 )
    {
      v61 = 0.0;
      v62 = (__int64 *)&v8[12 * v60];
      v63 = *(float *)(v145.m128i_i64[1] + 4 * v51);
      while ( v60 < v25 )
      {
        v137 = *v62;
        v64 = *(float *)&v137;
        if ( a7 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v63 - *(float *)&v137) & _xmm) )
        {
          v61 = *((float *)&v137 + 1);
          if ( !v51 )
            goto LABEL_75;
          if ( v51 - 1 >= (unsigned __int64)v59 )
            goto LABEL_100;
          if ( a7 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v63 - *(float *)(v145.m128i_i64[1] + 4 * v51 - 4)) & _xmm) )
          {
LABEL_75:
            v51 = v60 + 1;
            if ( v60 + 1 < v25 )
            {
              for ( j = (float *)&v8[12 * v60 + 12]; ; j += 3 )
              {
                if ( v51 >= v25 )
                  goto LABEL_100;
                if ( a7 < COERCE_FLOAT(COERCE_UNSIGNED_INT(*j - v63) & _xmm) )
                  break;
                ++v60;
                ++v51;
              }
              if ( v60 >= v25 )
              {
LABEL_100:
                gsl::details::terminate((gsl::details *)v51);
                __debugbreak();
              }
            }
            v61 = *(float *)&v8[12 * v60 + 8];
          }
          break;
        }
        if ( *(float *)&v137 > v63 )
        {
          v107 = 0LL;
          if ( v60 )
            v107 = v60 - 1;
          v124 = gsl::span<CoordMap::RampPair const,-1>::operator[](&v147, v107);
          v142.m128i_i64[0] = *(_QWORD *)v124;
          v61 = (float)((float)(1.0
                              - (float)((float)(v63 - *(float *)v142.m128i_i32) / (float)(v64 - *(float *)v142.m128i_i32)))
                      * *(float *)(v124 + 8))
              + (float)((float)((float)(v63 - *(float *)v142.m128i_i32) / (float)(v64 - *(float *)v142.m128i_i32))
                      * *((float *)&v137 + 1));
          break;
        }
        ++v60;
        v62 = (__int64 *)((char *)v62 + 12);
      }
      v66 = 1LL;
      v7 = (__int64)(*((_QWORD *)a6 + 1) - *(_QWORD *)a6) >> 2;
      if ( (__int64)(*((_QWORD *)a6 + 2) - *((_QWORD *)a6 + 1)) >> 2 )
        goto LABEL_82;
      if ( v7 + 1 < v7 )
        goto LABEL_114;
      v125 = detail::liberal_expansion_policy::expand(
               (detail::liberal_expansion_policy *)v51,
               (__int64)(*((_QWORD *)a6 + 2) - *(_QWORD *)a6) >> 2,
               v7 + 1);
      v126 = v125;
      v127 = operator new[](saturated_mul(v125, 4uLL));
      v128 = *((_QWORD *)a6 + 1);
      v129 = *(__m128i **)a6;
      v133.m128i_i64[0] = (__int64)v127;
      v130 = v127;
      v133.m128i_i64[1] = v7;
      v134 = 0LL;
      v144 = 0LL;
      v143 = v133;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64, __m128i *))std::move<std::move_iterator<enum IRenderTarget::Type *>,stdext::checked_array_iterator<enum IRenderTarget::Type *>>)(
        &v133,
        v129,
        v128,
        &v143);
      v131 = *(__m128i **)a6;
      *(_QWORD *)a6 = v130;
      v141[0] = 0LL;
      if ( v131 == (__m128i *)((char *)a6 + 24) )
        v131 = 0LL;
      operator delete(v131);
      v132 = *(__m128i **)a6;
      *((_QWORD *)a6 + 1) = *(_QWORD *)a6 + 4 * v7;
      *((_QWORD *)a6 + 2) = (char *)v132 + 4 * v126;
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v141);
      v66 = 1LL;
LABEL_82:
      v67 = *(__m128i **)a6;
      v68 = (char *)*((_QWORD *)a6 + 1);
      v139 = v67;
      v69 = (v68 - (char *)v67) >> 2;
      v70 = v69 - v7;
      v71 = (unsigned int *)v67 + v69;
      if ( !v71 )
        goto LABEL_22;
      v72 = v69 - v7;
      if ( v70 > 1 )
        v72 = 1LL;
      v73 = &v68[-4 * v72];
      while ( v68 != v73 )
      {
        v68 -= 4;
        if ( !v66 )
          goto LABEL_22;
        if ( --v66 )
          goto LABEL_22;
        *v71 = *(_DWORD *)v68;
      }
      if ( v70 > 1 )
      {
        v133.m128i_i64[0] = (__int64)v67;
        v133.m128i_i64[1] = v69;
        v134 = 0LL;
        stdext::checked_array_iterator<float *>::operator+=(&v133, v69);
        v78 = (unsigned int *)v67 + v7;
        v143 = v133;
        v144 = v134;
        v79 = (signed __int64)&v139[-1].m128i_i64[1] + 4 * v69 - (_QWORD)v78 + 4;
        v80 = std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(
                &v143,
                -(v79 >> 2));
        memmove_0((void *)(v80 - v79), v78, v79);
        v67 = v139;
      }
      v74 = v138;
      *((_QWORD *)a6 + 1) += 4LL;
      v51 = (unsigned __int64)v74 + 1;
      v59 = v140;
      *(float *)&v67->m128i_i32[v7] = v61;
      v138 = (detail::liberal_expansion_policy *)v51;
      if ( v51 >= (unsigned __int64)v59 )
        goto LABEL_93;
      v23 = -1LL;
    }
  }
  v105 = (_DWORD *)_mm_srli_si128(v58, 8).m128i_u64[0];
  v106 = &v105[v58.m128i_i64[0]];
  if ( v105 != v106 )
  {
    do
    {
      LODWORD(v135) = *v105;
      detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::push_back(
        a6,
        (unsigned int *)&v135);
      ++v105;
    }
    while ( v105 != v106 );
LABEL_93:
    v9 = v149;
    v8 = v148;
  }
LABEL_94:
  if ( 0xAAAAAAAAAAAAAAABuLL * ((v9 - v8) >> 2) )
    v149 = &v9[-4 * ((v9 - v8) >> 2)];
  return detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)&v148);
}
