/*
 * XREFs of ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x1801482FC
 * Callers:
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180073030 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x1800F9390 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F94F0 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_R.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009304 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?allocate@?$allocator@U?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@QEAAPEAU?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@2@_K@Z @ 0x18007702C (-allocate@-$allocator@U-$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@QEAAPEAU-$_Li.c)
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___ @ 0x1801471B8 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderCommand___--_Sort.c)
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___ @ 0x18014734C (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderComm_ea_18014734C.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180147460 (-ensure_extra_capacity@-$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_pol.c)
 *     ?ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180147598 (-ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV-.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180148B80 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?clear@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18014A148 (-clear@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkR.c)
 *     ?clear_region@?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801F5F0C (-clear_region@-$vector_facade@UBounds@CCpuClipAntialiasSink@@V-$buffer_impl@UBounds@CCpuClipAnti.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180286518 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::FlushDrawList(
        CCpuClipAntialiasSinkContext *this,
        struct CDrawingContext *a2,
        __int64 a3)
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
  __int64 v22; // r8
  __int64 *v23; // rcx
  unsigned __int64 v24; // rax
  float v25; // xmm1_4
  float v26; // xmm0_4
  __int64 v27; // rbx
  __int64 v28; // xmm6_8
  int v29; // r14d
  __m128i v30; // xmm2
  float v31; // xmm3_4
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rcx
  _BYTE *v35; // rax
  __int64 v36; // rax
  _BYTE *v37; // rdx
  __int64 v38; // r8
  __m128 *v39; // rsi
  __int64 v40; // rbx
  int v41; // eax
  unsigned int v42; // edi
  int v43; // eax
  _QWORD **v44; // rcx
  _QWORD *v45; // rcx
  _QWORD *v46; // rbx
  unsigned __int64 v48; // rdi
  __int64 v49; // rbx
  _BYTE *v50; // rdx
  signed __int64 v51; // r8
  unsigned __int64 v52; // r11
  __int64 v53; // r10
  _QWORD **v54; // rdx
  _QWORD *v55; // rcx
  _QWORD *v56; // rbx
  _QWORD **v57; // rcx
  _QWORD *v58; // rcx
  _QWORD *v59; // rbx
  __int64 v60; // rax
  __int64 v61; // r10
  __int64 v62; // rcx
  _BYTE *v63; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // rsi
  __int64 v66; // rdi
  _BYTE *v67; // rdx
  signed __int64 v68; // r8
  unsigned __int64 v69; // r11
  __int64 v70; // r9
  char *v71; // rax
  _QWORD *v72; // rcx
  float *v73; // rax
  float **v74; // rcx
  float *v75; // rax
  int v76; // xmm0_4
  float **v77; // rcx
  float *v78; // rdi
  __int64 v79; // r9
  __int64 v80; // r10
  int v81[2]; // [rsp+28h] [rbp-E0h]
  __int64 v82; // [rsp+30h] [rbp-D8h]
  __int64 v83; // [rsp+38h] [rbp-D0h]
  void *v84; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v85; // [rsp+48h] [rbp-C0h]
  __int64 v86; // [rsp+50h] [rbp-B8h]
  CCpuClipAntialiasSinkContext *v87; // [rsp+60h] [rbp-A8h]
  struct CDrawingContext *v88; // [rsp+68h] [rbp-A0h]
  __int64 v89; // [rsp+78h] [rbp-90h] BYREF
  signed __int64 v90; // [rsp+80h] [rbp-88h]
  signed __int64 v91; // [rsp+88h] [rbp-80h]
  __int64 v92; // [rsp+98h] [rbp-70h]
  _BYTE v93[24]; // [rsp+A0h] [rbp-68h] BYREF
  int v94[2]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE *v95; // [rsp+C0h] [rbp-48h]
  char *v96; // [rsp+C8h] [rbp-40h]
  _BYTE v97[48]; // [rsp+D0h] [rbp-38h] BYREF
  char v98; // [rsp+100h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v3 = (unsigned int)a3;
  v4 = this;
  HIDWORD(v83) = a3;
  v88 = a2;
  v87 = this;
  if ( !CCommonRegistryData::CpuClipAASinkEnableRender )
  {
LABEL_41:
    detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear(
      *((_QWORD *)v4 + 2) + 8LL + 432LL * (unsigned int)v3,
      a2,
      a3);
    return 0LL;
  }
  v85 = 0LL;
  v5 = std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
  *v5 = v5;
  v5[1] = v5;
  v6 = (_QWORD *)(*((_QWORD *)v4 + 2) + 432 * v3);
  v84 = v5;
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
    v92 = v15;
    v17 = *(_QWORD *)(v14 + v15);
    v86 = v17;
    do
    {
      if ( v16 == (float *)v7 )
        break;
      v18 = fmaxf(*(float *)(v17 + 100), v16[5]);
      v19 = fminf(*(float *)(v17 + 104), v16[6]);
      LOWORD(v89) = v3;
      *((float *)&v89 + 1) = v18;
      if ( v18 >= v19 )
        goto LABEL_10;
      if ( *(_BYTE *)(v14 + v15 + 32) )
      {
        v3 = *(_QWORD *)v84;
        if ( v85 == 0x7FFFFFFFFFFFFFFLL )
          goto LABEL_80;
        v71 = (char *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
        *(_QWORD *)(v71 + 20) = v89;
        *((float *)v71 + 7) = v19;
        *((_DWORD *)v71 + 4) = v13;
        ++v85;
        v72 = *(_QWORD **)(v3 + 8);
        *(_QWORD *)v71 = v3;
        *((_QWORD *)v71 + 1) = v72;
        *(_QWORD *)(v3 + 8) = v71;
        LOWORD(v3) = WORD2(v83);
        *v72 = v71;
        v15 = v92;
        v17 = v86;
      }
      if ( *(_BYTE *)(v14 + v15 + 33) )
      {
        if ( v18 > v16[5] )
        {
          if ( v11 == 0x7FFFFFFFFFFFFFFLL )
            goto LABEL_80;
          v73 = (float *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
          ++v11;
          v73[5] = v16[5];
          v73[6] = v18;
          *((_WORD *)v73 + 8) = v3;
          v74 = (float **)*((_QWORD *)v16 + 1);
          *(_QWORD *)v73 = v16;
          *((_QWORD *)v73 + 1) = v74;
          *((_QWORD *)v16 + 1) = v73;
          *v74 = v73;
        }
        if ( v16[6] > v19 )
        {
          if ( v11 == 0x7FFFFFFFFFFFFFFLL )
LABEL_80:
            std::_Xlength_error("list too long");
          v75 = (float *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
          v76 = *((_DWORD *)v16 + 6);
          ++v11;
          v75[5] = v19;
          *((_DWORD *)v75 + 6) = v76;
          *((_WORD *)v75 + 8) = v3;
          v77 = (float **)*((_QWORD *)v16 + 1);
          *(_QWORD *)v75 = v16;
          *((_QWORD *)v75 + 1) = v77;
          *((_QWORD *)v16 + 1) = v75;
          *v77 = v75;
        }
        --v11;
        v78 = *(float **)v16;
        **((_QWORD **)v16 + 1) = *(_QWORD *)v16;
        *(_QWORD *)(*(_QWORD *)v16 + 8LL) = *((_QWORD *)v16 + 1);
        operator delete(v16, 0x20uLL);
        v15 = v92;
        v16 = v78;
        v17 = v86;
      }
      else
      {
LABEL_10:
        v16 = *(float **)v16;
      }
      LODWORD(v3) = HIDWORD(v83);
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
  if ( !v85 )
  {
LABEL_38:
    v44 = (_QWORD **)v84;
    **((_QWORD **)v84 + 1) = 0LL;
    v45 = *v44;
    if ( v45 )
    {
      do
      {
        v46 = (_QWORD *)*v45;
        operator delete(v45, 0x20uLL);
        v45 = v46;
      }
      while ( v46 );
    }
    operator delete(v84, 0x20uLL);
    v4 = v87;
    goto LABEL_41;
  }
  if ( CCommonRegistryData::CpuClipAASinkEnableIntermediates )
  {
    LOBYTE(v22) = v83;
    *(_QWORD *)v94 = v97;
    v95 = v97;
    v96 = &v98;
    std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___(
      (__int64 *)v84,
      v85,
      v22);
    v23 = (__int64 *)v84;
    v24 = 0LL;
    v25 = FLOAT_3_4028235e38;
    v26 = FLOAT_N3_4028235e38;
    *((float *)&v86 + 1) = FLOAT_3_4028235e38;
    v27 = *(_QWORD *)v84;
    LOWORD(v86) = v3;
    v28 = v86;
    v29 = _mm_cvtsi128_si32((__m128i)LODWORD(FLOAT_N3_4028235e38));
    while ( (__int64 *)v27 != v23 )
    {
      v30 = (__m128i)*(unsigned int *)(v27 + 28);
      if ( *(float *)v30.m128i_i32 <= v25 || v26 <= *(float *)(v27 + 24) )
      {
        if ( v24 > 1 )
        {
          v65 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v95[-*(_QWORD *)v94] >> 2);
          detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
            (void **)v94,
            1uLL);
          v66 = *(_QWORD *)v94;
          v67 = v95;
          v68 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v95[-*(_QWORD *)v94] >> 2);
          v69 = v68 - v65;
          v70 = *(_QWORD *)v94 + 4 * ((__int64)&v95[-*(_QWORD *)v94] >> 2);
          if ( !v70 )
            goto LABEL_44;
          v60 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v95[-*(_QWORD *)v94] >> 2) - v65;
          v61 = 1LL;
          if ( v69 > 1 )
            v60 = 1LL;
          v62 = 12 * v60;
          v63 = &v95[-12 * v60];
          if ( v95 != &v95[-v62] )
          {
            v79 = v70 + 12;
            do
            {
              v67 -= 12;
              if ( !v61 )
                goto LABEL_44;
              --v61;
              v79 -= 12LL;
              if ( v61 )
                goto LABEL_44;
              *(_QWORD *)v79 = *(_QWORD *)v67;
              *(_DWORD *)(v79 + 8) = *((_DWORD *)v67 + 2);
            }
            while ( v67 != v63 );
            v67 = v95;
          }
          if ( v69 > 1 )
          {
            if ( v68 && (!v66 || v68 < 0) )
              goto LABEL_44;
            v90 = v68;
            v91 = v68;
            v89 = v66;
            std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
              v93,
              v66 + 12 * v65,
              v66 + 12 * (v68 - 1),
              &v89,
              *(_QWORD *)v81,
              v82,
              v83);
            v67 = v95;
          }
          v64 = 3 * v65;
          v95 = v67 + 12;
          *(_QWORD *)(v66 + 4 * v64) = v28;
          *(_DWORD *)(v66 + 4 * v64 + 8) = v29;
          v23 = (__int64 *)v84;
        }
        v29 = *(_DWORD *)(v27 + 28);
        v24 = 1LL;
        v28 = *(_QWORD *)(v27 + 20);
        v86 = v28;
        v25 = *((float *)&v28 + 1);
        v26 = *(float *)&v29;
      }
      else
      {
        v31 = *(float *)(v27 + 24);
        if ( v31 <= v25 )
        {
          HIDWORD(v86) = *(_DWORD *)(v27 + 24);
          v25 = v31;
          v28 = v86;
        }
        if ( v26 <= *(float *)v30.m128i_i32 )
        {
          v26 = *(float *)v30.m128i_i32;
          v29 = _mm_cvtsi128_si32(v30);
        }
        ++v24;
      }
      v27 = *(_QWORD *)v27;
    }
    if ( v24 > 1 )
    {
      v48 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v95[-*(_QWORD *)v94] >> 2);
      detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        (void **)v94,
        1uLL);
      v49 = *(_QWORD *)v94;
      v50 = v95;
      v51 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v95[-*(_QWORD *)v94] >> 2);
      v52 = v51 - v48;
      v53 = *(_QWORD *)v94 + 4 * ((__int64)&v95[-*(_QWORD *)v94] >> 2);
      if ( !v53 )
        goto LABEL_44;
      v32 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v95[-*(_QWORD *)v94] >> 2) - v48;
      v33 = 1LL;
      if ( v52 > 1 )
        v32 = 1LL;
      v34 = 12 * v32;
      v35 = &v95[-12 * v32];
      if ( v95 != &v95[-v34] )
      {
        v80 = v53 + 12;
        do
        {
          v50 -= 12;
          if ( !v33 )
            goto LABEL_44;
          --v33;
          v80 -= 12LL;
          if ( v33 )
            goto LABEL_44;
          *(_QWORD *)v80 = *(_QWORD *)v50;
          *(_DWORD *)(v80 + 8) = *((_DWORD *)v50 + 2);
        }
        while ( v50 != v35 );
        v50 = v95;
      }
      if ( v52 > 1 )
      {
        if ( v51 && (!v49 || v51 < 0) )
LABEL_44:
          _invalid_parameter_noinfo_noreturn();
        v90 = v51;
        v91 = v51;
        v89 = v49;
        std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
          v93,
          v49 + 12 * v48,
          v49 + 12 * (v51 - 1),
          &v89,
          *(_QWORD *)v81,
          v82,
          v83);
        v50 = v95;
      }
      v36 = 3 * v48;
      v95 = v50 + 12;
      *(_QWORD *)(v49 + 4 * v36) = v28;
      *(_DWORD *)(v49 + 4 * v36 + 8) = v29;
      v23 = (__int64 *)v84;
    }
    v37 = v95;
    v38 = *(_QWORD *)v94;
    if ( v95 == *(_BYTE **)v94
      || (LOBYTE(v38) = v83,
          std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___(
            v23,
            v85,
            v38),
          v37 = v95,
          v38 = *(_QWORD *)v94,
          v95 == *(_BYTE **)v94) )
    {
      v40 = (__int64)v87;
      v39 = (__m128 *)v88;
    }
    else
    {
      v39 = (__m128 *)v88;
      v40 = (__int64)v87;
      v41 = CCpuClipAntialiasSinkContext::ProcessRenderCommands_OffscreenRenderPass(v87, v88, HIDWORD(v83), &v84, v94);
      v42 = v41;
      if ( v41 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7F,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
          (const char *)(unsigned int)v41);
        if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v95[-*(_QWORD *)v94] >> 2) )
          detail::vector_facade<CCpuClipAntialiasSink::Bounds,detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>>::clear_region(v94);
        detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v94);
        v57 = (_QWORD **)v84;
        **((_QWORD **)v84 + 1) = 0LL;
        v58 = *v57;
        if ( v58 )
        {
          do
          {
            v59 = (_QWORD *)*v58;
            std::_Deallocate<16,0>(v58, 0x20uLL);
            v58 = v59;
          }
          while ( v59 );
        }
        std::_Deallocate<16,0>(v84, 0x20uLL);
        return v42;
      }
      v37 = v95;
      v38 = *(_QWORD *)v94;
    }
    if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v37[-v38] >> 2) )
      v95 = &v37[-4 * ((__int64)&v37[-v38] >> 2)];
    detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v94);
    LODWORD(v3) = HIDWORD(v83);
  }
  else
  {
    v40 = (__int64)v87;
    v39 = (__m128 *)v88;
  }
  v43 = CCpuClipAntialiasSinkContext::ProcessRenderCommands_RenderPass(v40, v39, v3, (__int64 **)&v84);
  v42 = v43;
  if ( v43 >= 0 )
  {
    LODWORD(v3) = HIDWORD(v83);
    goto LABEL_38;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
    (const char *)(unsigned int)v43);
  v54 = (_QWORD **)v84;
  **((_QWORD **)v84 + 1) = 0LL;
  v55 = *v54;
  if ( *v54 )
  {
    do
    {
      v56 = (_QWORD *)*v55;
      operator delete(v55, 0x20uLL);
      v55 = v56;
    }
    while ( v56 );
  }
  operator delete(v84, 0x20uLL);
  return v42;
}
