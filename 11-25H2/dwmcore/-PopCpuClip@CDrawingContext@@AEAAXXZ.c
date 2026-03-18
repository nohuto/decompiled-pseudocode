/*
 * XREFs of ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800A9050
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800E81B0 (-Pop@CDrawingContext@@UEAAJXZ.c)
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
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800AAEE0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ?pop_back@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800AAF98 (-pop_back@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkEntry@CCp.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??Y?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@QEAAAEAV01@_J@Z @ 0x1801D9450 (--Y-$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@QEAAAEAV01@_J@Z.c)
 *     ?clear_region@?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18020214C (-clear_region@-$vector_facade@UBounds@CCpuClipAntialiasSink@@V-$buffer_impl@UBounds@CCpuClipAnti.c)
 *     ??$move@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x1802552B8 (--$move@V-$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V-$checked_array_iterator.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180291AB8 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D50 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::PopCpuClip(CDrawingContext *this)
{
  int v1; // eax
  struct CDrawingContext *v2; // r14
  __int64 v3; // rax
  unsigned __int64 v4; // r8
  __int64 v5; // r12
  __int64 v6; // rdi
  CBatchCommand *v7; // rbx
  unsigned int v8; // r15d
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  void **v11; // r14
  __int64 v12; // rax
  unsigned __int16 v13; // bx
  _DWORD *v14; // rax
  _QWORD *v15; // rcx
  int v16; // r13d
  __int64 i; // rsi
  float *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  float v21; // xmm7_4
  float v22; // xmm6_4
  _QWORD *v23; // rcx
  _QWORD *v24; // rbx
  _QWORD **v25; // rcx
  _QWORD *v26; // rcx
  _QWORD *v27; // rbx
  char *v28; // rbx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  char *v32; // rsi
  char *v33; // rbx
  CRectanglesShape *v34; // rdi
  CRectanglesShape *v35; // rcx
  void *(__fastcall *v36)(CRoundedRectangleShape *__hidden, unsigned int); // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  bool v39; // cf
  bool v40; // zf
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // eax
  __m128 v45; // xmm2
  float v46; // xmm4_4
  float v47; // xmm1_4
  float v48; // xmm3_4
  __int64 v49; // rax
  int v50; // eax
  __m128 v51; // xmm0
  float v52; // xmm5_4
  float v53; // xmm6_4
  float v54; // xmm8_4
  float v55; // xmm6_4
  float v56; // xmm7_4
  float v57; // xmm0_4
  float v58; // xmm6_4
  __int64 *v59; // rcx
  unsigned __int64 v60; // rax
  float v61; // xmm3_4
  float v62; // xmm2_4
  __int64 v63; // rbx
  unsigned __int64 v64; // xmm6_8
  int v65; // r12d
  __m128i v66; // xmm4
  float v67; // xmm0_4
  unsigned __int64 v68; // rsi
  __int64 v69; // rbx
  _BYTE *v70; // rdx
  signed __int64 v71; // r9
  unsigned __int64 v72; // r11
  __int64 v73; // r8
  __int64 v74; // rax
  __int64 v75; // r10
  __int64 v76; // rcx
  _BYTE *v77; // rax
  __int64 v78; // rax
  _BYTE *v79; // rdx
  __int64 v80; // r8
  CBatchCommand *v81; // rbx
  int v82; // eax
  int v83; // eax
  _QWORD **v84; // rcx
  _QWORD *v85; // rcx
  _QWORD *v86; // rbx
  __int64 v87; // rcx
  void (__fastcall *v88)(__int64, CBatchCommand **, unsigned __int64); // rax
  CBatchCommand **v89; // rdx
  _QWORD **v90; // rcx
  _QWORD *v91; // rcx
  _QWORD *v92; // rbx
  __int64 v93; // rax
  __int64 v94; // r10
  __int64 v95; // rcx
  _BYTE *v96; // rax
  __int64 v97; // rax
  unsigned __int64 v98; // r14
  __int64 v99; // rsi
  _BYTE *v100; // rdx
  signed __int64 v101; // r9
  unsigned __int64 v102; // r11
  __int64 v103; // r8
  char *v104; // rax
  unsigned __int64 v105; // rdx
  _QWORD *v106; // rcx
  float *v107; // rax
  float **v108; // rcx
  float *v109; // rax
  int v110; // xmm0_4
  float **v111; // rcx
  float *v112; // rsi
  __m128 v113; // xmm1
  __int64 v114; // r8
  __int64 v115; // r8
  int v116[2]; // [rsp+20h] [rbp-E0h]
  __int64 v117; // [rsp+28h] [rbp-D8h]
  __int64 v118; // [rsp+30h] [rbp-D0h]
  void *v119[2]; // [rsp+38h] [rbp-C8h] BYREF
  signed __int64 v120; // [rsp+48h] [rbp-B8h]
  CBatchCommand *v121; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v122; // [rsp+58h] [rbp-A8h]
  struct CDrawingContext *v123; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v124; // [rsp+68h] [rbp-98h]
  __int128 v125; // [rsp+80h] [rbp-80h] BYREF
  signed __int64 v126; // [rsp+90h] [rbp-70h]
  __int64 v127; // [rsp+A0h] [rbp-60h]
  __int64 v128; // [rsp+A8h] [rbp-58h]
  __int64 v129; // [rsp+B0h] [rbp-50h]
  __int64 v130; // [rsp+B8h] [rbp-48h]
  _BYTE v131[32]; // [rsp+C0h] [rbp-40h] BYREF
  int v132[2]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE *v133; // [rsp+E8h] [rbp-18h]
  char *v134; // [rsp+F0h] [rbp-10h]
  _BYTE v135[48]; // [rsp+F8h] [rbp-8h] BYREF
  char v136; // [rsp+128h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v1 = *((_DWORD *)this + 68);
  v2 = this;
  v123 = this;
  if ( v1 )
    *((_DWORD *)this + 68) = v1 - 1;
  v3 = *((_QWORD *)this + 337);
  v4 = 0xCCCCCCCCCCCCCCCDuLL;
  v5 = 1LL;
  v122 = *(_DWORD *)(v3 - 24);
  if ( *(_BYTE *)(v3 - 4) )
  {
    v6 = *((_QWORD *)this + 94);
    v7 = *(CBatchCommand **)(v6 - 16);
    v121 = v7;
    v8 = 1749801491 * ((__int64)(*((_QWORD *)v7 + 3) - *((_QWORD *)v7 + 2)) >> 4) - 1;
    if ( !CCommonRegistryData::CpuClipAASinkEnableRender )
    {
LABEL_21:
      detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear(*((_QWORD *)v7 + 2) + 432LL * v8 + 8);
LABEL_22:
      detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::pop_back(*(_QWORD *)(v6 - 16) + 16LL);
      v4 = 0xCCCCCCCCCCCCCCCDuLL;
      goto LABEL_23;
    }
    v119[1] = 0LL;
    v9 = std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
    *v9 = v9;
    v9[1] = v9;
    v119[0] = v9;
    v130 = *((_QWORD *)v7 + 2) + 432LL * v8;
    v10 = (_QWORD *)v130;
    v11 = (void **)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
    *v11 = v11;
    v11[1] = v11;
    v12 = *(_QWORD *)(*v10 + 32LL);
    if ( v12 )
      v13 = *(_WORD *)(v12 + 16);
    else
      v13 = 0;
    v14 = std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
    v14[5] = 0;
    *((_WORD *)v14 + 8) = v8;
    *((float *)v14 + 6) = (float)v13 + 1.0;
    v15 = v11[1];
    *(_QWORD *)v14 = v11;
    *((_QWORD *)v14 + 1) = v15;
    v11[1] = v14;
    *v15 = v14;
    v16 = -858993459 * ((__int64)(v10[2] - v10[1]) >> 3) - 1;
    for ( i = 40LL * v16; ; i -= 40LL )
    {
      v129 = i;
      if ( !v5 || v16 < 0 )
        break;
      v18 = (float *)*v11;
      v19 = *(_QWORD *)(v130 + 8);
      v127 = v19;
      v20 = *(_QWORD *)(i + v19);
      v128 = v20;
      do
      {
        if ( v18 == (float *)v11 )
          break;
        v21 = fmaxf(*(float *)(v20 + 100), v18[5]);
        v22 = fminf(*(float *)(v20 + 104), v18[6]);
        LOWORD(v125) = v8;
        *((float *)&v125 + 1) = v21;
        if ( v21 >= v22 )
          goto LABEL_13;
        if ( *(_BYTE *)(i + v19 + 32) )
        {
          v124 = *(_QWORD *)v119[0];
          if ( v119[1] == (void *)0x7FFFFFFFFFFFFFFLL )
            goto LABEL_142;
          v104 = (char *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
          v105 = v124;
          *(_QWORD *)(v104 + 20) = v125;
          *((float *)v104 + 7) = v22;
          *((_DWORD *)v104 + 4) = v16;
          ++v119[1];
          v106 = *(_QWORD **)(v105 + 8);
          *(_QWORD *)v104 = v105;
          *((_QWORD *)v104 + 1) = v106;
          *(_QWORD *)(v105 + 8) = v104;
          *v106 = v104;
          v19 = v127;
          v20 = v128;
        }
        if ( *(_BYTE *)(i + v19 + 33) )
        {
          if ( v21 > v18[5] )
          {
            if ( v5 == 0x7FFFFFFFFFFFFFFLL )
              goto LABEL_142;
            v107 = (float *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
            ++v5;
            v107[5] = v18[5];
            v107[6] = v21;
            *((_WORD *)v107 + 8) = v8;
            v108 = (float **)*((_QWORD *)v18 + 1);
            *(_QWORD *)v107 = v18;
            *((_QWORD *)v107 + 1) = v108;
            *((_QWORD *)v18 + 1) = v107;
            *v108 = v107;
          }
          if ( v18[6] > v22 )
          {
            if ( v5 == 0x7FFFFFFFFFFFFFFLL )
LABEL_142:
              std::_Xlength_error("list too long");
            v109 = (float *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
            v110 = *((_DWORD *)v18 + 6);
            ++v5;
            v109[5] = v22;
            *((_DWORD *)v109 + 6) = v110;
            *((_WORD *)v109 + 8) = v8;
            v111 = (float **)*((_QWORD *)v18 + 1);
            *(_QWORD *)v109 = v18;
            *((_QWORD *)v109 + 1) = v111;
            *((_QWORD *)v18 + 1) = v109;
            *v111 = v109;
          }
          --v5;
          v112 = *(float **)v18;
          **((_QWORD **)v18 + 1) = *(_QWORD *)v18;
          *(_QWORD *)(*(_QWORD *)v18 + 8LL) = *((_QWORD *)v18 + 1);
          operator delete(v18, 0x20uLL);
          v19 = v127;
          v18 = v112;
          i = v129;
          v20 = v128;
        }
        else
        {
LABEL_13:
          v18 = *(float **)v18;
        }
      }
      while ( *(float *)(v20 + 104) != v22 );
      --v16;
    }
    *(_QWORD *)v11[1] = 0LL;
    v23 = *v11;
    if ( *v11 )
    {
      do
      {
        v24 = (_QWORD *)*v23;
        operator delete(v23, 0x20uLL);
        v23 = v24;
      }
      while ( v24 );
    }
    operator delete(v11, 0x20uLL);
    if ( !v119[1] )
    {
      v2 = v123;
LABEL_18:
      v25 = (_QWORD **)v119[0];
      **((_QWORD **)v119[0] + 1) = 0LL;
      v26 = *v25;
      if ( v26 )
      {
        do
        {
          v27 = (_QWORD *)*v26;
          operator delete(v26, 0x20uLL);
          v26 = v27;
        }
        while ( v27 );
      }
      operator delete(v119[0], 0x20uLL);
      v7 = v121;
      goto LABEL_21;
    }
    if ( !CCommonRegistryData::CpuClipAASinkEnableIntermediates )
    {
      v81 = v121;
      v2 = v123;
      goto LABEL_97;
    }
    *(_QWORD *)v132 = v135;
    v133 = v135;
    v134 = &v136;
    std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___(
      (__int64 *)v119[0],
      (unsigned __int64)v119[1]);
    v59 = (__int64 *)v119[0];
    v60 = 0LL;
    v61 = FLOAT_3_4028235e38;
    v62 = FLOAT_N3_4028235e38;
    *((float *)&v124 + 1) = FLOAT_3_4028235e38;
    v63 = *(_QWORD *)v119[0];
    LOWORD(v124) = v8;
    v64 = v124;
    *(float *)&v65 = COERCE_FLOAT(_mm_cvtsi128_si32((__m128i)LODWORD(FLOAT_N3_4028235e38)));
    while ( (__int64 *)v63 != v59 )
    {
      v66 = (__m128i)*(unsigned int *)(v63 + 28);
      if ( *(float *)v66.m128i_i32 <= v61 || v62 <= *(float *)(v63 + 24) )
      {
        if ( v60 > 1 )
        {
          v98 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v133[-*(_QWORD *)v132] >> 2);
          detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
            (void **)v132,
            1uLL);
          v99 = *(_QWORD *)v132;
          v100 = v133;
          v101 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v133[-*(_QWORD *)v132] >> 2);
          v102 = v101 - v98;
          v103 = *(_QWORD *)v132 + 4 * ((__int64)&v133[-*(_QWORD *)v132] >> 2);
          if ( !v103 )
            goto LABEL_101;
          v93 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v133[-*(_QWORD *)v132] >> 2) - v98;
          v94 = 1LL;
          if ( v102 > 1 )
            v93 = 1LL;
          v95 = 12 * v93;
          v96 = &v133[-12 * v93];
          if ( v133 != &v133[-v95] )
          {
            v114 = v103 + 12;
            do
            {
              v100 -= 12;
              if ( !v94 )
                goto LABEL_101;
              --v94;
              v114 -= 12LL;
              if ( v94 )
                goto LABEL_101;
              *(_QWORD *)v114 = *(_QWORD *)v100;
              *(_DWORD *)(v114 + 8) = *((_DWORD *)v100 + 2);
            }
            while ( v100 != v96 );
            v100 = v133;
          }
          if ( v102 > 1 )
          {
            if ( v101 && (!v99 || v101 < 0) )
              goto LABEL_101;
            *((_QWORD *)&v125 + 1) = v101;
            v126 = v101;
            *(_QWORD *)&v125 = v99;
            std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
              v131,
              v99 + 12 * v98,
              v99 + 12 * (v101 - 1),
              &v125,
              *(_QWORD *)v116,
              v117,
              v118);
            v100 = v133;
          }
          v97 = 3 * v98;
          v133 = v100 + 12;
          *(_QWORD *)(v99 + 4 * v97) = v64;
          *(float *)(v99 + 4 * v97 + 8) = *(float *)&v65;
          v59 = (__int64 *)v119[0];
        }
        v64 = *(_QWORD *)(v63 + 20);
        v60 = 1LL;
        v65 = *(int *)(v63 + 28);
        v63 = *(_QWORD *)v63;
        LODWORD(v61) = _mm_shuffle_ps((__m128)v64, (__m128)v64, 85).m128_u32[0];
        v124 = v64;
        v62 = *(float *)&v65;
      }
      else
      {
        v67 = *(float *)(v63 + 24);
        if ( v67 <= v61 )
        {
          v61 = *(float *)(v63 + 24);
          v113 = _mm_shuffle_ps((__m128)v124, (__m128)v124, 225);
          v113.m128_f32[0] = v67;
          v124 = _mm_shuffle_ps(v113, v113, 225).m128_u64[0];
          v64 = v124;
        }
        if ( v62 <= *(float *)v66.m128i_i32 )
        {
          v62 = *(float *)v66.m128i_i32;
          *(float *)&v65 = COERCE_FLOAT(_mm_cvtsi128_si32(v66));
        }
        v63 = *(_QWORD *)v63;
        ++v60;
      }
    }
    if ( v60 <= 1 )
    {
LABEL_90:
      v79 = v133;
      v80 = *(_QWORD *)v132;
      if ( v133 == *(_BYTE **)v132
        || (std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___(
              v59,
              (unsigned __int64)v119[1]),
            v79 = v133,
            v80 = *(_QWORD *)v132,
            v133 == *(_BYTE **)v132) )
      {
        v81 = v121;
        v2 = v123;
      }
      else
      {
        v2 = v123;
        v81 = v121;
        v82 = CCpuClipAntialiasSinkContext::ProcessRenderCommands_OffscreenRenderPass(
                v121,
                v123,
                v8,
                v119,
                (__int64 *)v132);
        if ( v82 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7F,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
            (const char *)(unsigned int)v82,
            v116[0]);
          if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v133[-*(_QWORD *)v132] >> 2) )
            detail::vector_facade<CCpuClipAntialiasSink::Bounds,detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>>::clear_region(v132);
          detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v132);
          v90 = (_QWORD **)v119[0];
          **((_QWORD **)v119[0] + 1) = 0LL;
          v91 = *v90;
          if ( v91 )
          {
            do
            {
              v92 = (_QWORD *)*v91;
              std::_Deallocate<16,0>(v91, 0x20uLL);
              v91 = v92;
            }
            while ( v92 );
          }
          std::_Deallocate<16,0>((_QWORD *)v119[0], 0x20uLL);
          goto LABEL_22;
        }
        v79 = v133;
        v80 = *(_QWORD *)v132;
      }
      if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v79[-v80] >> 2) )
        v133 = &v79[-4 * ((__int64)&v79[-v80] >> 2)];
      detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v132);
LABEL_97:
      v83 = CCpuClipAntialiasSinkContext::ProcessRenderCommands_RenderPass((__int64)v81, v2, v8, (__int64 **)v119);
      if ( v83 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
          (const char *)(unsigned int)v83,
          v116[0]);
        v84 = (_QWORD **)v119[0];
        **((_QWORD **)v119[0] + 1) = 0LL;
        v85 = *v84;
        if ( v85 )
        {
          do
          {
            v86 = (_QWORD *)*v85;
            operator delete(v85, 0x20uLL);
            v85 = v86;
          }
          while ( v86 );
        }
        operator delete(v119[0], 0x20uLL);
        goto LABEL_22;
      }
      goto LABEL_18;
    }
    v68 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v133[-*(_QWORD *)v132] >> 2);
    detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
      (void **)v132,
      1uLL);
    v69 = *(_QWORD *)v132;
    v70 = v133;
    v71 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v133[-*(_QWORD *)v132] >> 2);
    v72 = v71 - v68;
    v73 = *(_QWORD *)v132 + 4 * ((__int64)&v133[-*(_QWORD *)v132] >> 2);
    if ( v73 )
    {
      v74 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v133[-*(_QWORD *)v132] >> 2) - v68;
      v75 = 1LL;
      if ( v72 > 1 )
        v74 = 1LL;
      v76 = 12 * v74;
      v77 = &v133[-12 * v74];
      if ( v133 != &v133[-v76] )
      {
        v115 = v73 + 12;
        do
        {
          v70 -= 12;
          if ( !v75 )
            goto LABEL_101;
          --v75;
          v115 -= 12LL;
          if ( v75 )
            goto LABEL_101;
          *(_QWORD *)v115 = *(_QWORD *)v70;
          *(_DWORD *)(v115 + 8) = *((_DWORD *)v70 + 2);
        }
        while ( v70 != v77 );
        v70 = v133;
      }
      if ( v72 <= 1 )
        goto LABEL_89;
      if ( !v71 || v69 && v71 >= 0 )
      {
        *((_QWORD *)&v125 + 1) = v71;
        v126 = v71;
        *(_QWORD *)&v125 = v69;
        std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
          v131,
          v69 + 12 * v68,
          v69 + 12 * (v71 - 1),
          &v125,
          *(_QWORD *)v116,
          v117,
          v118);
        v70 = v133;
LABEL_89:
        v78 = 3 * v68;
        v133 = v70 + 12;
        *(_QWORD *)(v69 + 4 * v78) = v64;
        *(float *)(v69 + 4 * v78 + 8) = *(float *)&v65;
        v59 = (__int64 *)v119[0];
        goto LABEL_90;
      }
    }
LABEL_101:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_23:
  v28 = (char *)*((_QWORD *)v2 + 336);
  v29 = 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)v2 + 337) - (_QWORD)v28 - 40LL) >> 3);
  v30 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)v2 + 337) - (_QWORD)v28) >> 3);
  v31 = v29 + 1;
  if ( v29 + 1 > v30 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_154;
  }
  v32 = &v28[8 * ((__int64)(*((_QWORD *)v2 + 337) - (_QWORD)v28) >> 3)];
  if ( v29 + 1 != v30 )
  {
    v119[1] = (void *)(0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)v2 + 337) - (_QWORD)v28) >> 3));
    v119[0] = v28;
    v120 = 0LL;
    stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>::operator+=(v119, v29);
    v125 = *(_OWORD *)v119;
    v126 = v120;
    std::move<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>(
      v131,
      &v28[40 * v31],
      v32,
      &v125);
  }
  v33 = v32 - 40;
  do
  {
    if ( v33[8] )
    {
      v34 = *(CRectanglesShape **)v33;
      if ( *(_QWORD *)v33 )
      {
        v35 = *(CRectanglesShape **)v33;
        v36 = **(void *(__fastcall ***)(CRoundedRectangleShape *__hidden, unsigned int))v34;
        if ( v36 == CRectanglesShape::`scalar deleting destructor' )
        {
          CRectanglesShape::~CRectanglesShape(v35);
          CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v34);
        }
        else if ( v36 == CRoundedRectangleShape::`vector deleting destructor' )
        {
          CRoundedRectangleShape::~CRoundedRectangleShape(v35);
          CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v34);
        }
        else if ( v36 == CPolygonShape::`scalar deleting destructor' )
        {
          CPolygonShape::`scalar deleting destructor'(v35, 1u);
        }
        else
        {
          ((void (__fastcall *)(CRectanglesShape *, __int64, unsigned __int64))v36)(v35, 1LL, v4);
        }
      }
    }
    *(_QWORD *)v33 = 0LL;
    v33[8] = 0;
    v33 += 40;
  }
  while ( v33 != v32 );
  v2 = v123;
  *((_QWORD *)v123 + 337) -= 40LL;
  --*(_QWORD *)(*((_QWORD *)v2 + 94) - 176LL);
  v37 = *((_QWORD *)v2 + 94);
  if ( v37 == *((_QWORD *)v2 + 93) || !*(_QWORD *)(v37 - 176) )
  {
    v39 = 0;
    v40 = v122 == 0;
  }
  else
  {
    v38 = *((_QWORD *)v2 + 337);
    v39 = (unsigned __int64)v122 < *(_QWORD *)(v38 - 24);
    v40 = v122 == *(_QWORD *)(v38 - 24);
  }
  v41 = *((_DWORD *)v2 + 786);
  if ( v41 )
    *((_DWORD *)v2 + 786) = v41 - 1;
  --*(_QWORD *)(v37 - 168);
  if ( !v39 && !v40 )
  {
    if ( *((_BYTE *)v2 + 8066) )
    {
      v42 = *((_QWORD *)v2 + 94);
      if ( v42 == *((_QWORD *)v2 + 93) || !*(_QWORD *)(v42 - 176) || !*(_QWORD *)(*((_QWORD *)v2 + 337) - 24LL) )
        *((_BYTE *)v2 + 8066) = 0;
    }
    v43 = *((_QWORD *)v2 + 94);
    *(_OWORD *)v119 = 0LL;
    if ( v43 == *((_QWORD *)v2 + 93) )
    {
      v45.m128_i32[0] = _xmm;
      LODWORD(v46) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
      LODWORD(v47) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
      LODWORD(v48) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
LABEL_61:
      if ( v47 > v45.m128_f32[0]
        && v46 > v48
        && (v45.m128_f32[0] < *((float *)v2 + 56)
         || v48 < *((float *)v2 + 57)
         || *((float *)v2 + 58) < v47
         || *((float *)v2 + 59) < v46) )
      {
        *((_BYTE *)v2 + 8065) = 1;
      }
      return;
    }
    if ( *(_QWORD *)(v43 - 184) )
    {
      v44 = *((_DWORD *)v2 + 780);
      if ( v44 )
        v45 = *(__m128 *)(*((_QWORD *)v2 + 389) + 16LL * (unsigned int)(v44 - 1));
      else
        v45 = (__m128)_xmm;
      LODWORD(v46) = _mm_shuffle_ps(v45, v45, 255).m128_u32[0];
      LODWORD(v47) = _mm_shuffle_ps(v45, v45, 170).m128_u32[0];
      LODWORD(v48) = _mm_shuffle_ps(v45, v45, 85).m128_u32[0];
LABEL_47:
      v49 = *((_QWORD *)v2 + 94);
      if ( v49 != *((_QWORD *)v2 + 93) && *(_QWORD *)(v49 - 168) )
      {
        v50 = *((_DWORD *)v2 + 786);
        if ( v50 )
          v51 = *(__m128 *)(*((_QWORD *)v2 + 392) + 16LL * (unsigned int)(v50 - 1));
        else
          v51 = (__m128)_xmm;
        if ( v51.m128_f32[0] > v45.m128_f32[0] )
          v45.m128_i32[0] = v51.m128_i32[0];
        v52 = v48;
        v53 = _mm_shuffle_ps(v51, v51, 85).m128_f32[0];
        if ( v53 > v48 )
        {
          v48 = v53;
          v52 = v53;
        }
        v54 = v52;
        v55 = _mm_shuffle_ps(v51, v51, 170).m128_f32[0];
        v56 = v47;
        if ( v47 > v55 )
        {
          v47 = v55;
          v56 = v55;
        }
        v57 = _mm_shuffle_ps(v51, v51, 255).m128_f32[0];
        v58 = v46;
        if ( v46 > v57 )
        {
          v46 = v57;
          v58 = v57;
          v54 = v52;
        }
        if ( v56 <= v45.m128_f32[0] || v58 <= v54 )
        {
          v46 = 0.0;
          v47 = 0.0;
          v48 = 0.0;
          v45.m128_i32[0] = 0;
        }
      }
      goto LABEL_61;
    }
    v87 = *(_QWORD *)(v43 - 192);
    v88 = *(void (__fastcall **)(__int64, CBatchCommand **, unsigned __int64))(*(_QWORD *)v87 + 88LL);
    v89 = &v121;
    if ( (char *)v88 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
    {
      IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v87, &v121);
LABEL_112:
      v45.m128_i32[0] = 0;
      v48 = 0.0;
      v47 = (float)(int)v121;
      v46 = (float)SHIDWORD(v121);
      goto LABEL_47;
    }
LABEL_154:
    v88(v87, v89, v4);
    goto LABEL_112;
  }
}
