/*
 * XREFs of ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x18009309C
 * Callers:
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180084CA0 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_R.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800A48A0 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x1801BF030 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009BF4 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?allocate@?$allocator@U?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@QEAAPEAU?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@2@_K@Z @ 0x18006C750 (-allocate@-$allocator@U-$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@QEAAPEAU-$_Li.c)
 *     ?ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180085700 (-ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV-.c)
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___ @ 0x1800922B8 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderCommand___--_Sort.c)
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___ @ 0x18009244C (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderComm_ea_18009244C.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18009259C (-ensure_extra_capacity@-$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_pol.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180093920 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?clear@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180094DBC (-clear@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkR.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear_region@?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18020214C (-clear_region@-$vector_facade@UBounds@CCpuClipAntialiasSink@@V-$buffer_impl@UBounds@CCpuClipAnti.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180291AB8 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::FlushDrawList(
        CCpuClipAntialiasSinkContext *this,
        struct CDrawingContext *a2,
        unsigned int a3)
{
  __int64 v3; // rdi
  CCpuClipAntialiasSinkContext *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // r13
  void **v7; // rsi
  __int64 v8; // rax
  unsigned __int16 v9; // bx
  _DWORD *v10; // rax
  __int64 v11; // r14
  _QWORD *v12; // rcx
  int v13; // r15d
  __int64 v14; // r12
  __int64 v15; // rax
  float *v16; // rbx
  __int64 v17; // rcx
  float v18; // xmm7_4
  float v19; // xmm6_4
  _QWORD *v20; // rcx
  _QWORD *v21; // rbx
  __int64 *v22; // rcx
  unsigned __int64 v23; // rax
  float v24; // xmm1_4
  float v25; // xmm0_4
  __int64 v26; // rbx
  __int64 v27; // xmm6_8
  int v28; // r14d
  __m128i v29; // xmm2
  float v30; // xmm3_4
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // rcx
  _BYTE *v34; // rax
  __int64 v35; // rax
  _BYTE *v36; // rdx
  __int64 v37; // r8
  CDrawingContext *v38; // rsi
  __int64 v39; // rbx
  int v40; // eax
  unsigned int v41; // edi
  int v42; // eax
  _QWORD **v43; // rcx
  _QWORD *v44; // rcx
  _QWORD *v45; // rbx
  unsigned __int64 v47; // rdi
  __int64 v48; // rbx
  _BYTE *v49; // rdx
  signed __int64 v50; // r8
  unsigned __int64 v51; // r11
  __int64 v52; // r10
  _QWORD **v53; // rdx
  _QWORD *v54; // rcx
  _QWORD *v55; // rbx
  _QWORD **v56; // rcx
  _QWORD *v57; // rcx
  _QWORD *v58; // rbx
  __int64 v59; // rax
  __int64 v60; // r10
  __int64 v61; // rcx
  _BYTE *v62; // rax
  __int64 v63; // rax
  unsigned __int64 v64; // rsi
  __int64 v65; // rdi
  _BYTE *v66; // rdx
  signed __int64 v67; // r8
  unsigned __int64 v68; // r11
  __int64 v69; // r9
  char *v70; // rax
  _QWORD *v71; // rcx
  float *v72; // rax
  float **v73; // rcx
  float *v74; // rax
  int v75; // xmm0_4
  float **v76; // rcx
  float *v77; // rdi
  __int64 v78; // r9
  __int64 v79; // r10
  int v80[2]; // [rsp+28h] [rbp-E0h]
  __int64 v81; // [rsp+30h] [rbp-D8h]
  __int64 v82; // [rsp+38h] [rbp-D0h]
  void *v83; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v84; // [rsp+48h] [rbp-C0h]
  __int64 v85; // [rsp+50h] [rbp-B8h]
  CCpuClipAntialiasSinkContext *v86; // [rsp+60h] [rbp-A8h]
  struct CDrawingContext *v87; // [rsp+68h] [rbp-A0h]
  __int64 v88; // [rsp+78h] [rbp-90h] BYREF
  signed __int64 v89; // [rsp+80h] [rbp-88h]
  signed __int64 v90; // [rsp+88h] [rbp-80h]
  __int64 v91; // [rsp+98h] [rbp-70h]
  _BYTE v92[24]; // [rsp+A0h] [rbp-68h] BYREF
  int v93[2]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE *v94; // [rsp+C0h] [rbp-48h]
  char *v95; // [rsp+C8h] [rbp-40h]
  _BYTE v96[48]; // [rsp+D0h] [rbp-38h] BYREF
  char v97; // [rsp+100h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v3 = a3;
  v4 = this;
  HIDWORD(v82) = a3;
  v87 = a2;
  v86 = this;
  if ( !CCommonRegistryData::CpuClipAASinkEnableRender )
  {
LABEL_41:
    detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear(*((_QWORD *)v4 + 2) + 8LL + 432LL * (unsigned int)v3);
    return 0LL;
  }
  v84 = 0LL;
  v5 = std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
  *v5 = v5;
  v5[1] = v5;
  v6 = (_QWORD *)(*((_QWORD *)v4 + 2) + 432 * v3);
  v83 = v5;
  v7 = (void **)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
  *v7 = v7;
  v7[1] = v7;
  v8 = *(_QWORD *)(*v6 + 32LL);
  if ( v8 )
    v9 = *(_WORD *)(v8 + 16);
  else
    v9 = 0;
  v10 = std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
  v10[5] = 0;
  v11 = 1LL;
  *((_WORD *)v10 + 8) = v3;
  *((float *)v10 + 6) = (float)v9 + 1.0;
  v12 = v7[1];
  *(_QWORD *)v10 = v7;
  *((_QWORD *)v10 + 1) = v12;
  v7[1] = v10;
  *v12 = v10;
  v13 = -858993459 * ((__int64)(v6[2] - v6[1]) >> 3) - 1;
  v14 = 40LL * v13;
  while ( v11 && v13 >= 0 )
  {
    v15 = v6[1];
    v16 = (float *)*v7;
    v91 = v15;
    v17 = *(_QWORD *)(v14 + v15);
    v85 = v17;
    do
    {
      if ( v16 == (float *)v7 )
        break;
      v18 = fmaxf(*(float *)(v17 + 100), v16[5]);
      v19 = fminf(*(float *)(v17 + 104), v16[6]);
      LOWORD(v88) = v3;
      *((float *)&v88 + 1) = v18;
      if ( v18 >= v19 )
        goto LABEL_10;
      if ( *(_BYTE *)(v14 + v15 + 32) )
      {
        v3 = *(_QWORD *)v83;
        if ( v84 == 0x7FFFFFFFFFFFFFFLL )
          goto LABEL_80;
        v70 = (char *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
        *(_QWORD *)(v70 + 20) = v88;
        *((float *)v70 + 7) = v19;
        *((_DWORD *)v70 + 4) = v13;
        ++v84;
        v71 = *(_QWORD **)(v3 + 8);
        *(_QWORD *)v70 = v3;
        *((_QWORD *)v70 + 1) = v71;
        *(_QWORD *)(v3 + 8) = v70;
        LOWORD(v3) = WORD2(v82);
        *v71 = v70;
        v15 = v91;
        v17 = v85;
      }
      if ( *(_BYTE *)(v14 + v15 + 33) )
      {
        if ( v18 > v16[5] )
        {
          if ( v11 == 0x7FFFFFFFFFFFFFFLL )
            goto LABEL_80;
          v72 = (float *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
          ++v11;
          v72[5] = v16[5];
          v72[6] = v18;
          *((_WORD *)v72 + 8) = v3;
          v73 = (float **)*((_QWORD *)v16 + 1);
          *(_QWORD *)v72 = v16;
          *((_QWORD *)v72 + 1) = v73;
          *((_QWORD *)v16 + 1) = v72;
          *v73 = v72;
        }
        if ( v16[6] > v19 )
        {
          if ( v11 == 0x7FFFFFFFFFFFFFFLL )
LABEL_80:
            std::_Xlength_error("list too long");
          v74 = (float *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
          v75 = *((_DWORD *)v16 + 6);
          ++v11;
          v74[5] = v19;
          *((_DWORD *)v74 + 6) = v75;
          *((_WORD *)v74 + 8) = v3;
          v76 = (float **)*((_QWORD *)v16 + 1);
          *(_QWORD *)v74 = v16;
          *((_QWORD *)v74 + 1) = v76;
          *((_QWORD *)v16 + 1) = v74;
          *v76 = v74;
        }
        --v11;
        v77 = *(float **)v16;
        **((_QWORD **)v16 + 1) = *(_QWORD *)v16;
        *(_QWORD *)(*(_QWORD *)v16 + 8LL) = *((_QWORD *)v16 + 1);
        operator delete(v16, 0x20uLL);
        v15 = v91;
        v16 = v77;
        v17 = v85;
      }
      else
      {
LABEL_10:
        v16 = *(float **)v16;
      }
      LODWORD(v3) = HIDWORD(v82);
    }
    while ( *(float *)(v17 + 104) != v19 );
    --v13;
    v14 -= 40LL;
  }
  *(_QWORD *)v7[1] = 0LL;
  v20 = *v7;
  if ( *v7 )
  {
    do
    {
      v21 = (_QWORD *)*v20;
      operator delete(v20, 0x20uLL);
      v20 = v21;
    }
    while ( v21 );
  }
  operator delete(v7, 0x20uLL);
  if ( !v84 )
  {
LABEL_38:
    v43 = (_QWORD **)v83;
    **((_QWORD **)v83 + 1) = 0LL;
    v44 = *v43;
    if ( v44 )
    {
      do
      {
        v45 = (_QWORD *)*v44;
        operator delete(v44, 0x20uLL);
        v44 = v45;
      }
      while ( v45 );
    }
    operator delete(v83, 0x20uLL);
    v4 = v86;
    goto LABEL_41;
  }
  if ( CCommonRegistryData::CpuClipAASinkEnableIntermediates )
  {
    *(_QWORD *)v93 = v96;
    v94 = v96;
    v95 = &v97;
    std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___(
      (__int64 *)v83,
      v84);
    v22 = (__int64 *)v83;
    v23 = 0LL;
    v24 = FLOAT_3_4028235e38;
    v25 = FLOAT_N3_4028235e38;
    *((float *)&v85 + 1) = FLOAT_3_4028235e38;
    v26 = *(_QWORD *)v83;
    LOWORD(v85) = v3;
    v27 = v85;
    v28 = _mm_cvtsi128_si32((__m128i)LODWORD(FLOAT_N3_4028235e38));
    while ( (__int64 *)v26 != v22 )
    {
      v29 = (__m128i)*(unsigned int *)(v26 + 28);
      if ( *(float *)v29.m128i_i32 <= v24 || v25 <= *(float *)(v26 + 24) )
      {
        if ( v23 > 1 )
        {
          v64 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v94[-*(_QWORD *)v93] >> 2);
          detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
            (void **)v93,
            1uLL);
          v65 = *(_QWORD *)v93;
          v66 = v94;
          v67 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v94[-*(_QWORD *)v93] >> 2);
          v68 = v67 - v64;
          v69 = *(_QWORD *)v93 + 4 * ((__int64)&v94[-*(_QWORD *)v93] >> 2);
          if ( !v69 )
            goto LABEL_44;
          v59 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v94[-*(_QWORD *)v93] >> 2) - v64;
          v60 = 1LL;
          if ( v68 > 1 )
            v59 = 1LL;
          v61 = 12 * v59;
          v62 = &v94[-12 * v59];
          if ( v94 != &v94[-v61] )
          {
            v78 = v69 + 12;
            do
            {
              v66 -= 12;
              if ( !v60 )
                goto LABEL_44;
              --v60;
              v78 -= 12LL;
              if ( v60 )
                goto LABEL_44;
              *(_QWORD *)v78 = *(_QWORD *)v66;
              *(_DWORD *)(v78 + 8) = *((_DWORD *)v66 + 2);
            }
            while ( v66 != v62 );
            v66 = v94;
          }
          if ( v68 > 1 )
          {
            if ( v67 && (!v65 || v67 < 0) )
              goto LABEL_44;
            v89 = v67;
            v90 = v67;
            v88 = v65;
            std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
              v92,
              v65 + 12 * v64,
              v65 + 12 * (v67 - 1),
              &v88,
              *(_QWORD *)v80,
              v81,
              v82);
            v66 = v94;
          }
          v63 = 3 * v64;
          v94 = v66 + 12;
          *(_QWORD *)(v65 + 4 * v63) = v27;
          *(_DWORD *)(v65 + 4 * v63 + 8) = v28;
          v22 = (__int64 *)v83;
        }
        v28 = *(_DWORD *)(v26 + 28);
        v23 = 1LL;
        v27 = *(_QWORD *)(v26 + 20);
        v85 = v27;
        v24 = *((float *)&v27 + 1);
        v25 = *(float *)&v28;
      }
      else
      {
        v30 = *(float *)(v26 + 24);
        if ( v30 <= v24 )
        {
          HIDWORD(v85) = *(_DWORD *)(v26 + 24);
          v24 = v30;
          v27 = v85;
        }
        if ( v25 <= *(float *)v29.m128i_i32 )
        {
          v25 = *(float *)v29.m128i_i32;
          v28 = _mm_cvtsi128_si32(v29);
        }
        ++v23;
      }
      v26 = *(_QWORD *)v26;
    }
    if ( v23 > 1 )
    {
      v47 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v94[-*(_QWORD *)v93] >> 2);
      detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        (void **)v93,
        1uLL);
      v48 = *(_QWORD *)v93;
      v49 = v94;
      v50 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v94[-*(_QWORD *)v93] >> 2);
      v51 = v50 - v47;
      v52 = *(_QWORD *)v93 + 4 * ((__int64)&v94[-*(_QWORD *)v93] >> 2);
      if ( !v52 )
        goto LABEL_44;
      v31 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v94[-*(_QWORD *)v93] >> 2) - v47;
      v32 = 1LL;
      if ( v51 > 1 )
        v31 = 1LL;
      v33 = 12 * v31;
      v34 = &v94[-12 * v31];
      if ( v94 != &v94[-v33] )
      {
        v79 = v52 + 12;
        do
        {
          v49 -= 12;
          if ( !v32 )
            goto LABEL_44;
          --v32;
          v79 -= 12LL;
          if ( v32 )
            goto LABEL_44;
          *(_QWORD *)v79 = *(_QWORD *)v49;
          *(_DWORD *)(v79 + 8) = *((_DWORD *)v49 + 2);
        }
        while ( v49 != v34 );
        v49 = v94;
      }
      if ( v51 > 1 )
      {
        if ( v50 && (!v48 || v50 < 0) )
LABEL_44:
          _invalid_parameter_noinfo_noreturn();
        v89 = v50;
        v90 = v50;
        v88 = v48;
        std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
          v92,
          v48 + 12 * v47,
          v48 + 12 * (v50 - 1),
          &v88,
          *(_QWORD *)v80,
          v81,
          v82);
        v49 = v94;
      }
      v35 = 3 * v47;
      v94 = v49 + 12;
      *(_QWORD *)(v48 + 4 * v35) = v27;
      *(_DWORD *)(v48 + 4 * v35 + 8) = v28;
      v22 = (__int64 *)v83;
    }
    v36 = v94;
    v37 = *(_QWORD *)v93;
    if ( v94 == *(_BYTE **)v93
      || (std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___(
            v22,
            v84),
          v36 = v94,
          v37 = *(_QWORD *)v93,
          v94 == *(_BYTE **)v93) )
    {
      v39 = (__int64)v86;
      v38 = v87;
    }
    else
    {
      v38 = v87;
      v39 = (__int64)v86;
      v40 = CCpuClipAntialiasSinkContext::ProcessRenderCommands_OffscreenRenderPass(
              (_DWORD)v86,
              (_DWORD)v87,
              HIDWORD(v82),
              (unsigned int)&v83,
              (__int64)v93);
      v41 = v40;
      if ( v40 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7F,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
          (const char *)(unsigned int)v40,
          v80[0]);
        if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v94[-*(_QWORD *)v93] >> 2) )
          detail::vector_facade<CCpuClipAntialiasSink::Bounds,detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>>::clear_region(v93);
        detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v93);
        v56 = (_QWORD **)v83;
        **((_QWORD **)v83 + 1) = 0LL;
        v57 = *v56;
        if ( v57 )
        {
          do
          {
            v58 = (_QWORD *)*v57;
            std::_Deallocate<16,0>(v57, 0x20uLL);
            v57 = v58;
          }
          while ( v58 );
        }
        std::_Deallocate<16,0>(v83, 0x20uLL);
        return v41;
      }
      v36 = v94;
      v37 = *(_QWORD *)v93;
    }
    if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v36[-v37] >> 2) )
      v94 = &v36[-4 * ((__int64)&v36[-v37] >> 2)];
    detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v93);
    LODWORD(v3) = HIDWORD(v82);
  }
  else
  {
    v39 = (__int64)v86;
    v38 = v87;
  }
  v42 = CCpuClipAntialiasSinkContext::ProcessRenderCommands_RenderPass(v39, v38, v3, (__int64 **)&v83);
  v41 = v42;
  if ( v42 >= 0 )
  {
    LODWORD(v3) = HIDWORD(v82);
    goto LABEL_38;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
    (const char *)(unsigned int)v42,
    v80[0]);
  v53 = (_QWORD **)v83;
  **((_QWORD **)v83 + 1) = 0LL;
  v54 = *v53;
  if ( *v53 )
  {
    do
    {
      v55 = (_QWORD *)*v54;
      operator delete(v54, 0x20uLL);
      v54 = v55;
    }
    while ( v55 );
  }
  operator delete(v83, 0x20uLL);
  return v41;
}
