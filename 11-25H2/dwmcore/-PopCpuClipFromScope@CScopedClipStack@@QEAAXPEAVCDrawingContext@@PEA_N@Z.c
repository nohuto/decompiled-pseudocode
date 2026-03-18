/*
 * XREFs of ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1800A9D30
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800A5660 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
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
 *     ??1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ @ 0x1800AAF50 (--1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??Y?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@QEAAAEAV01@_J@Z @ 0x1801D9450 (--Y-$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@QEAAAEAV01@_J@Z.c)
 *     ?clear_region@?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18020214C (-clear_region@-$vector_facade@UBounds@CCpuClipAntialiasSink@@V-$buffer_impl@UBounds@CCpuClipAnti.c)
 *     ??$move@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x1802552B8 (--$move@V-$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V-$checked_array_iterator.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??$move@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x180291900 (--$move@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$checked_array_iter.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180291AB8 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScopedClipStack::PopCpuClipFromScope(CScopedClipStack *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v3; // rax
  CScopedClipStack *v4; // r14
  unsigned __int64 v5; // r8
  __int64 v6; // r12
  __int64 v7; // rdi
  CBatchCommand *v8; // rbx
  unsigned int v9; // r15d
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  void **v12; // r14
  __int64 v13; // rax
  unsigned __int16 v14; // bx
  _DWORD *v15; // rax
  _QWORD *v16; // rcx
  int v17; // r13d
  __int64 i; // rsi
  float *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  float v22; // xmm6_4
  float v23; // xmm7_4
  _QWORD *v24; // rcx
  _QWORD *v25; // rbx
  __int64 *v26; // rcx
  unsigned __int64 v27; // rax
  float v28; // xmm3_4
  float v29; // xmm2_4
  __int64 v30; // rbx
  unsigned __int64 v31; // xmm6_8
  int v32; // r12d
  __m128i v33; // xmm4
  float v34; // xmm0_4
  __int64 v35; // rax
  __int64 v36; // r10
  __int64 v37; // rcx
  _BYTE *v38; // rax
  __int64 v39; // rax
  _BYTE *v40; // rdx
  __int64 v41; // r8
  CDrawingContext *v42; // rsi
  CBatchCommand *v43; // rbx
  int v44; // eax
  int v45; // eax
  _QWORD **v46; // rcx
  _QWORD *v47; // rcx
  _QWORD *v48; // rbx
  __int64 v49; // rsi
  __int64 v50; // r9
  signed __int64 v51; // rcx
  unsigned __int64 v52; // r8
  signed __int64 v53; // rdx
  CCpuClipAntialiasSinkContext::SinkEntry *v54; // rdi
  CCpuClipAntialiasSinkContext::SinkEntry *v55; // rbx
  char *v56; // rbx
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rdi
  char *v60; // rsi
  char *v61; // rbx
  CRectanglesShape *v62; // rdi
  void *(__fastcall *v63)(CRoundedRectangleShape *__hidden, unsigned int); // rax
  CScopedClipStack *v64; // r14
  __int64 v65; // rax
  __int64 v66; // rax
  bool v67; // cf
  bool v68; // zf
  int v69; // eax
  CPolygonShape *v70; // rcx
  unsigned __int64 v71; // rsi
  __int64 v72; // rbx
  _BYTE *v73; // rdx
  signed __int64 v74; // r9
  unsigned __int64 v75; // r11
  __int64 v76; // r8
  _QWORD **v77; // rcx
  _QWORD *v78; // rcx
  _QWORD *v79; // rbx
  _QWORD **v80; // rcx
  _QWORD *v81; // rcx
  _QWORD *v82; // rbx
  __int64 v83; // rax
  __int64 v84; // r10
  __int64 v85; // rcx
  _BYTE *v86; // rax
  __int64 v87; // rax
  unsigned __int64 v88; // r14
  __int64 v89; // rsi
  _BYTE *v90; // rdx
  signed __int64 v91; // r9
  unsigned __int64 v92; // r11
  __int64 v93; // r8
  char *v94; // rax
  unsigned __int64 v95; // rdx
  _QWORD *v96; // rcx
  float *v97; // rax
  float **v98; // rcx
  float *v99; // rax
  int v100; // xmm0_4
  float **v101; // rcx
  float *v102; // rsi
  __m128 v103; // xmm1
  __int64 v104; // r8
  __int64 v105; // r8
  int v106[2]; // [rsp+20h] [rbp-E0h]
  __int64 v107; // [rsp+28h] [rbp-D8h]
  __int64 v108; // [rsp+30h] [rbp-D0h]
  void *v109[2]; // [rsp+40h] [rbp-C0h] BYREF
  signed __int64 v110; // [rsp+50h] [rbp-B0h]
  unsigned int v111; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v112; // [rsp+68h] [rbp-98h]
  CBatchCommand *v113; // [rsp+78h] [rbp-88h]
  __int128 v114; // [rsp+80h] [rbp-80h] BYREF
  signed __int64 v115; // [rsp+90h] [rbp-70h]
  struct CDrawingContext *v116; // [rsp+A0h] [rbp-60h]
  __int64 v117; // [rsp+A8h] [rbp-58h]
  __int64 v118; // [rsp+B0h] [rbp-50h]
  __int64 v119; // [rsp+B8h] [rbp-48h]
  CScopedClipStack *v120; // [rsp+C0h] [rbp-40h]
  bool *v121; // [rsp+C8h] [rbp-38h]
  __int64 v122; // [rsp+D0h] [rbp-30h]
  _BYTE v123[24]; // [rsp+D8h] [rbp-28h] BYREF
  int v124[2]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE *v125; // [rsp+F8h] [rbp-8h]
  char *v126; // [rsp+100h] [rbp+0h]
  _BYTE v127[48]; // [rsp+108h] [rbp+8h] BYREF
  char v128; // [rsp+138h] [rbp+38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v3 = *((_QWORD *)this + 244);
  v4 = this;
  v120 = this;
  v121 = a3;
  v5 = 0xCCCCCCCCCCCCCCCDuLL;
  v116 = a2;
  v6 = 1LL;
  v111 = *(_DWORD *)(v3 - 24);
  if ( !*(_BYTE *)(v3 - 4) )
    goto LABEL_47;
  v7 = *((_QWORD *)this + 1);
  v8 = *(CBatchCommand **)(v7 - 16);
  v113 = v8;
  v9 = 1749801491 * ((__int64)(*((_QWORD *)v8 + 3) - *((_QWORD *)v8 + 2)) >> 4) - 1;
  if ( CCommonRegistryData::CpuClipAASinkEnableRender )
  {
    v109[1] = 0LL;
    v10 = std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
    *v10 = v10;
    v10[1] = v10;
    v109[0] = v10;
    v122 = *((_QWORD *)v8 + 2) + 432LL * v9;
    v11 = (_QWORD *)v122;
    v12 = (void **)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
    *v12 = v12;
    v12[1] = v12;
    v13 = *(_QWORD *)(*v11 + 32LL);
    if ( v13 )
      v14 = *(_WORD *)(v13 + 16);
    else
      v14 = 0;
    v15 = std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
    v15[5] = 0;
    *((_WORD *)v15 + 8) = v9;
    *((float *)v15 + 6) = (float)v14 + 1.0;
    v16 = v12[1];
    *(_QWORD *)v15 = v12;
    *((_QWORD *)v15 + 1) = v16;
    v12[1] = v15;
    *v16 = v15;
    v17 = -858993459 * ((__int64)(v11[2] - v11[1]) >> 3) - 1;
    for ( i = 40LL * v17; ; i -= 40LL )
    {
      v119 = i;
      if ( !v6 || v17 < 0 )
        break;
      v19 = (float *)*v12;
      v20 = *(_QWORD *)(v122 + 8);
      v117 = v20;
      v21 = *(_QWORD *)(i + v20);
      v118 = v21;
      do
      {
        if ( v19 == (float *)v12 )
          break;
        v22 = fmaxf(*(float *)(v21 + 100), v19[5]);
        v23 = fminf(*(float *)(v21 + 104), v19[6]);
        LOWORD(v114) = v9;
        *((float *)&v114 + 1) = v22;
        if ( v22 >= v23 )
          goto LABEL_11;
        if ( *(_BYTE *)(i + v20 + 32) )
        {
          v112 = *(_QWORD *)v109[0];
          if ( v109[1] == (void *)0x7FFFFFFFFFFFFFFLL )
            goto LABEL_104;
          v94 = (char *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
          v95 = v112;
          *(_QWORD *)(v94 + 20) = v114;
          *((float *)v94 + 7) = v23;
          *((_DWORD *)v94 + 4) = v17;
          ++v109[1];
          v96 = *(_QWORD **)(v95 + 8);
          *(_QWORD *)v94 = v95;
          *((_QWORD *)v94 + 1) = v96;
          *(_QWORD *)(v95 + 8) = v94;
          *v96 = v94;
          v20 = v117;
          v21 = v118;
        }
        if ( *(_BYTE *)(i + v20 + 33) )
        {
          if ( v22 > v19[5] )
          {
            if ( v6 == 0x7FFFFFFFFFFFFFFLL )
              goto LABEL_104;
            v97 = (float *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
            ++v6;
            v97[5] = v19[5];
            v97[6] = v22;
            *((_WORD *)v97 + 8) = v9;
            v98 = (float **)*((_QWORD *)v19 + 1);
            *(_QWORD *)v97 = v19;
            *((_QWORD *)v97 + 1) = v98;
            *((_QWORD *)v19 + 1) = v97;
            *v98 = v97;
          }
          if ( v19[6] > v23 )
          {
            if ( v6 == 0x7FFFFFFFFFFFFFFLL )
LABEL_104:
              std::_Xlength_error("list too long");
            v99 = (float *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
            v100 = *((_DWORD *)v19 + 6);
            ++v6;
            v99[5] = v23;
            *((_DWORD *)v99 + 6) = v100;
            *((_WORD *)v99 + 8) = v9;
            v101 = (float **)*((_QWORD *)v19 + 1);
            *(_QWORD *)v99 = v19;
            *((_QWORD *)v99 + 1) = v101;
            *((_QWORD *)v19 + 1) = v99;
            *v101 = v99;
          }
          --v6;
          v102 = *(float **)v19;
          **((_QWORD **)v19 + 1) = *(_QWORD *)v19;
          *(_QWORD *)(*(_QWORD *)v19 + 8LL) = *((_QWORD *)v19 + 1);
          operator delete(v19, 0x20uLL);
          v20 = v117;
          v19 = v102;
          i = v119;
          v21 = v118;
        }
        else
        {
LABEL_11:
          v19 = *(float **)v19;
        }
      }
      while ( *(float *)(v21 + 104) != v23 );
      --v17;
    }
    *(_QWORD *)v12[1] = 0LL;
    v24 = *v12;
    if ( *v12 )
    {
      do
      {
        v25 = (_QWORD *)*v24;
        operator delete(v24, 0x20uLL);
        v24 = v25;
      }
      while ( v25 );
    }
    operator delete(v12, 0x20uLL);
    if ( v109[1] )
    {
      if ( CCommonRegistryData::CpuClipAASinkEnableIntermediates )
      {
        *(_QWORD *)v124 = v127;
        v125 = v127;
        v126 = &v128;
        std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___(
          (__int64 *)v109[0],
          (unsigned __int64)v109[1]);
        v26 = (__int64 *)v109[0];
        v27 = 0LL;
        v28 = FLOAT_3_4028235e38;
        v29 = FLOAT_N3_4028235e38;
        *((float *)&v112 + 1) = FLOAT_3_4028235e38;
        v30 = *(_QWORD *)v109[0];
        LOWORD(v112) = v9;
        v31 = v112;
        v32 = _mm_cvtsi128_si32((__m128i)LODWORD(FLOAT_N3_4028235e38));
        while ( (__int64 *)v30 != v26 )
        {
          v33 = (__m128i)*(unsigned int *)(v30 + 28);
          if ( *(float *)v33.m128i_i32 <= v28 || v29 <= *(float *)(v30 + 24) )
          {
            if ( v27 > 1 )
            {
              v88 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v125[-*(_QWORD *)v124] >> 2);
              detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
                (void **)v124,
                1uLL);
              v89 = *(_QWORD *)v124;
              v90 = v125;
              v91 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v125[-*(_QWORD *)v124] >> 2);
              v92 = v91 - v88;
              v93 = *(_QWORD *)v124 + 4 * ((__int64)&v125[-*(_QWORD *)v124] >> 2);
              if ( !v93 )
                goto LABEL_68;
              v83 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v125[-*(_QWORD *)v124] >> 2) - v88;
              v84 = 1LL;
              if ( v92 > 1 )
                v83 = 1LL;
              v85 = 12 * v83;
              v86 = &v125[-12 * v83];
              if ( v125 != &v125[-v85] )
              {
                v104 = v93 + 12;
                do
                {
                  v90 -= 12;
                  if ( !v84 )
                    goto LABEL_68;
                  --v84;
                  v104 -= 12LL;
                  if ( v84 )
                    goto LABEL_68;
                  *(_QWORD *)v104 = *(_QWORD *)v90;
                  *(_DWORD *)(v104 + 8) = *((_DWORD *)v90 + 2);
                }
                while ( v90 != v86 );
                v90 = v125;
              }
              if ( v92 > 1 )
              {
                if ( v91 && (!v89 || v91 < 0) )
                  goto LABEL_68;
                *((_QWORD *)&v114 + 1) = v91;
                v115 = v91;
                *(_QWORD *)&v114 = v89;
                std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
                  v123,
                  v89 + 12 * v88,
                  v89 + 12 * (v91 - 1),
                  &v114,
                  *(_QWORD *)v106,
                  v107,
                  v108);
                v90 = v125;
              }
              v87 = 3 * v88;
              v125 = v90 + 12;
              *(_QWORD *)(v89 + 4 * v87) = v31;
              *(_DWORD *)(v89 + 4 * v87 + 8) = v32;
              v26 = (__int64 *)v109[0];
            }
            v31 = *(_QWORD *)(v30 + 20);
            v27 = 1LL;
            v32 = *(_DWORD *)(v30 + 28);
            v30 = *(_QWORD *)v30;
            LODWORD(v28) = _mm_shuffle_ps((__m128)v31, (__m128)v31, 85).m128_u32[0];
            v112 = v31;
            v29 = *(float *)&v32;
          }
          else
          {
            v34 = *(float *)(v30 + 24);
            if ( v34 <= v28 )
            {
              v28 = *(float *)(v30 + 24);
              v103 = _mm_shuffle_ps((__m128)v112, (__m128)v112, 225);
              v103.m128_f32[0] = v34;
              v112 = _mm_shuffle_ps(v103, v103, 225).m128_u64[0];
              v31 = v112;
            }
            if ( v29 <= *(float *)v33.m128i_i32 )
            {
              v29 = *(float *)v33.m128i_i32;
              v32 = _mm_cvtsi128_si32(v33);
            }
            v30 = *(_QWORD *)v30;
            ++v27;
          }
        }
        if ( v27 > 1 )
        {
          v71 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v125[-*(_QWORD *)v124] >> 2);
          detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
            (void **)v124,
            1uLL);
          v72 = *(_QWORD *)v124;
          v73 = v125;
          v74 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v125[-*(_QWORD *)v124] >> 2);
          v75 = v74 - v71;
          v76 = *(_QWORD *)v124 + 4 * ((__int64)&v125[-*(_QWORD *)v124] >> 2);
          if ( !v76 )
            goto LABEL_68;
          v35 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v125[-*(_QWORD *)v124] >> 2) - v71;
          v36 = 1LL;
          if ( v75 > 1 )
            v35 = 1LL;
          v37 = 12 * v35;
          v38 = &v125[-12 * v35];
          if ( v125 != &v125[-v37] )
          {
            v105 = v76 + 12;
            do
            {
              v73 -= 12;
              if ( !v36 )
                goto LABEL_68;
              --v36;
              v105 -= 12LL;
              if ( v36 )
                goto LABEL_68;
              *(_QWORD *)v105 = *(_QWORD *)v73;
              *(_DWORD *)(v105 + 8) = *((_DWORD *)v73 + 2);
            }
            while ( v73 != v38 );
            v73 = v125;
          }
          if ( v75 > 1 )
          {
            if ( v74 && (!v72 || v74 < 0) )
LABEL_68:
              _invalid_parameter_noinfo_noreturn();
            *((_QWORD *)&v114 + 1) = v74;
            v115 = v74;
            *(_QWORD *)&v114 = v72;
            std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
              v123,
              v72 + 12 * v71,
              v72 + 12 * (v74 - 1),
              &v114,
              *(_QWORD *)v106,
              v107,
              v108);
            v73 = v125;
          }
          v39 = 3 * v71;
          v125 = v73 + 12;
          *(_QWORD *)(v72 + 4 * v39) = v31;
          *(_DWORD *)(v72 + 4 * v39 + 8) = v32;
          v26 = (__int64 *)v109[0];
        }
        v40 = v125;
        v41 = *(_QWORD *)v124;
        if ( v125 == *(_BYTE **)v124
          || (std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___(
                v26,
                (unsigned __int64)v109[1]),
              v40 = v125,
              v41 = *(_QWORD *)v124,
              v125 == *(_BYTE **)v124) )
        {
          v43 = v113;
          v42 = v116;
        }
        else
        {
          v42 = v116;
          v43 = v113;
          v44 = CCpuClipAntialiasSinkContext::ProcessRenderCommands_OffscreenRenderPass(
                  v113,
                  v116,
                  v9,
                  v109,
                  (__int64 *)v124);
          if ( v44 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7F,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
              (const char *)(unsigned int)v44,
              v106[0]);
            if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v125[-*(_QWORD *)v124] >> 2) )
              detail::vector_facade<CCpuClipAntialiasSink::Bounds,detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>>::clear_region(v124);
            detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v124);
            v80 = (_QWORD **)v109[0];
            **((_QWORD **)v109[0] + 1) = 0LL;
            v81 = *v80;
            if ( v81 )
            {
              do
              {
                v82 = (_QWORD *)*v81;
                std::_Deallocate<16,0>(v81, 0x20uLL);
                v81 = v82;
              }
              while ( v82 );
            }
            std::_Deallocate<16,0>((_QWORD *)v109[0], 0x20uLL);
            goto LABEL_42;
          }
          v40 = v125;
          v41 = *(_QWORD *)v124;
        }
        if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v40[-v41] >> 2) )
          v125 = &v40[-4 * ((__int64)&v40[-v41] >> 2)];
        detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)v124);
      }
      else
      {
        v43 = v113;
        v42 = v116;
      }
      v45 = CCpuClipAntialiasSinkContext::ProcessRenderCommands_RenderPass((__int64)v43, v42, v9, (__int64 **)v109);
      if ( v45 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
          (const char *)(unsigned int)v45,
          v106[0]);
        v77 = (_QWORD **)v109[0];
        **((_QWORD **)v109[0] + 1) = 0LL;
        v78 = *v77;
        if ( v78 )
        {
          do
          {
            v79 = (_QWORD *)*v78;
            operator delete(v78, 0x20uLL);
            v78 = v79;
          }
          while ( v79 );
        }
        operator delete(v109[0], 0x20uLL);
        goto LABEL_42;
      }
    }
    v46 = (_QWORD **)v109[0];
    **((_QWORD **)v109[0] + 1) = 0LL;
    v47 = *v46;
    if ( v47 )
    {
      do
      {
        v48 = (_QWORD *)*v47;
        operator delete(v47, 0x20uLL);
        v47 = v48;
      }
      while ( v48 );
    }
    operator delete(v109[0], 0x20uLL);
    v8 = v113;
  }
  detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear(*((_QWORD *)v8 + 2) + 432LL * v9 + 8);
LABEL_42:
  v49 = *(_QWORD *)(v7 - 16);
  v50 = *(_QWORD *)(v49 + 16);
  v51 = 0x84BDA12F684BDA13uLL * ((*(_QWORD *)(v49 + 24) - v50 - 432) >> 4);
  v52 = 0x84BDA12F684BDA13uLL * ((*(_QWORD *)(v49 + 24) - v50) >> 4);
  v53 = v51 + 1;
  if ( v51 + 1 > v52 )
  {
LABEL_119:
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x1800AA821LL);
  }
  v54 = (CCpuClipAntialiasSinkContext::SinkEntry *)(v50 + 16 * ((*(_QWORD *)(v49 + 24) - v50) >> 4));
  if ( v53 != v52 )
  {
    if ( v51 && (!v50 || v51 < 0 || v52 < v51) )
      _invalid_parameter_noinfo_noreturn();
    v109[0] = *(void **)(v49 + 16);
    v109[1] = (void *)v52;
    v110 = v51;
    std::move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>>(
      v123,
      v50 + 432 * v53,
      v54,
      v109);
  }
  v55 = (CCpuClipAntialiasSinkContext::SinkEntry *)((char *)v54 - 432);
  do
  {
    CCpuClipAntialiasSinkContext::SinkEntry::~SinkEntry(v55);
    v55 = (CCpuClipAntialiasSinkContext::SinkEntry *)((char *)v55 + 432);
  }
  while ( v55 != v54 );
  *(_QWORD *)(v49 + 24) -= 432LL;
  v5 = 0xCCCCCCCCCCCCCCCDuLL;
  v4 = v120;
LABEL_47:
  v56 = (char *)*((_QWORD *)v4 + 243);
  v57 = 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)v4 + 244) - (_QWORD)v56 - 40LL) >> 3);
  v58 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)v4 + 244) - (_QWORD)v56) >> 3);
  v59 = v57 + 1;
  if ( v57 + 1 > v58 )
    goto LABEL_119;
  v60 = &v56[8 * ((__int64)(*((_QWORD *)v4 + 244) - (_QWORD)v56) >> 3)];
  if ( v57 + 1 != v58 )
  {
    v109[1] = (void *)(0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)v4 + 244) - (_QWORD)v56) >> 3));
    v109[0] = v56;
    v110 = 0LL;
    stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>::operator+=(v109, v57);
    v114 = *(_OWORD *)v109;
    v115 = v110;
    std::move<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>(
      v123,
      &v56[40 * v59],
      v60,
      &v114);
  }
  v61 = v60 - 40;
  do
  {
    if ( v61[8] )
    {
      v62 = *(CRectanglesShape **)v61;
      if ( *(_QWORD *)v61 )
      {
        v63 = **(void *(__fastcall ***)(CRoundedRectangleShape *__hidden, unsigned int))v62;
        if ( v63 == CRectanglesShape::`scalar deleting destructor' )
        {
          CRectanglesShape::~CRectanglesShape(*(CRectanglesShape **)v61);
          CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v62);
        }
        else if ( v63 == CRoundedRectangleShape::`vector deleting destructor' )
        {
          CRoundedRectangleShape::~CRoundedRectangleShape(*(CRoundedRectangleShape **)v61);
          CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v62);
        }
        else
        {
          v70 = *(CPolygonShape **)v61;
          if ( v63 == CPolygonShape::`scalar deleting destructor' )
            CPolygonShape::`scalar deleting destructor'(v70, 1u);
          else
            ((void (__fastcall *)(CPolygonShape *, __int64, unsigned __int64))v63)(v70, 1LL, v5);
        }
      }
    }
    *(_QWORD *)v61 = 0LL;
    v61[8] = 0;
    v61 += 40;
  }
  while ( v61 != v60 );
  v64 = v120;
  *((_QWORD *)v120 + 244) -= 40LL;
  --*(_QWORD *)(*((_QWORD *)v64 + 1) - 176LL);
  v65 = *((_QWORD *)v64 + 1);
  if ( v65 == *(_QWORD *)v64 || !*(_QWORD *)(v65 - 176) )
  {
    v67 = 0;
    v68 = v111 == 0;
  }
  else
  {
    v66 = *((_QWORD *)v64 + 244);
    v67 = (unsigned __int64)v111 < *(_QWORD *)(v66 - 24);
    v68 = v111 == *(_QWORD *)(v66 - 24);
  }
  *v121 = !v67 && !v68;
  v69 = *((_DWORD *)v64 + 600);
  if ( v69 )
    *((_DWORD *)v64 + 600) = v69 - 1;
  --*(_QWORD *)(*((_QWORD *)v64 + 1) - 168LL);
}
