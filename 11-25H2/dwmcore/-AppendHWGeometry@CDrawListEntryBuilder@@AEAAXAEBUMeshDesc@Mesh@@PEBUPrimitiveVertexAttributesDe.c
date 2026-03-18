/*
 * XREFs of ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18016A110
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawListEntry@@PEAPEAVCDrawListPrimitive@@@Z @ 0x180169888 (-BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawLis.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@_J@Z @ 0x180009754 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ??$move@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x1801696D0 (--$move@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$checked_a.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAG@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAG@stdext@@_J@Z @ 0x18016A0C0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAG@stdext@@_J@std@@YA-A_TAEAV-$checked_array_.c)
 *     ?CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z @ 0x18016B550 (-CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z.c)
 *     ?ComputeColorAndUV@CDrawListEntryBuilder@@AEBAXPEBUPrimitiveVertexAttributesDesc@@V?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@V?$StridedSpan@UVertexAAFixup_UVxN@@@@@Z @ 0x18016B8E0 (-ComputeColorAndUV@CDrawListEntryBuilder@@AEBAXPEBUPrimitiveVertexAttributesDesc@@V-$StridedSpan.c)
 *     ?GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x18016BF60 (-GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     ?GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x18016C7C0 (-GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     ?resize@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x180190CA0 (-resize@-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@.c)
 *     ?CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z @ 0x1801B5DD0 (-CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z.c)
 *     ??Y?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@QEAAAEAV01@_J@Z @ 0x1801D10B0 (--Y-$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@QEAAAEAV01@_J@Z.c)
 *     ??1?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801D74A0 (--1-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vl.c)
 *     ??Y?$checked_array_iterator@PEAG@stdext@@QEAAAEAV01@_J@Z @ 0x1801DDEA0 (--Y-$checked_array_iterator@PEAG@stdext@@QEAAAEAV01@_J@Z.c)
 *     ??$move@V?$move_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@std@@V?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@V?$move_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@0@0V12@@Z @ 0x1802373CC (--$move@V-$move_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@std@@V-$checked_array_iterator.c)
 *     ??$move_backward@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x180256D70 (--$move_backward@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_array.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??$move_backward@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x180290ACC (--$move_backward@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawListEntryBuilder::AppendHWGeometry(
        CDrawListEntryBuilder *this,
        const struct Mesh::MeshDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3)
{
  __int64 v4; // r9
  __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r14
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  LPVOID v21; // rax
  const void *v22; // rdi
  __int64 v23; // rsi
  LPVOID v24; // rbx
  signed __int64 v25; // rsi
  void *v26; // rax
  CDrawListEntryBuilder *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdi
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  _WORD *v35; // rdi
  unsigned int v36; // ebx
  __int64 v37; // rsi
  __int64 v38; // rdi
  struct Mesh::MeshDesc *v39; // rsi
  float *v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  struct Mesh::MeshDesc *v43; // r14
  __int64 v44; // rcx
  unsigned __int64 v45; // r15
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // r15
  unsigned __int64 v48; // rdi
  unsigned __int64 v49; // r13
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rdi
  LPVOID v52; // rax
  const void *v53; // rdi
  __int64 v54; // rsi
  LPVOID v55; // rbx
  signed __int64 v56; // rsi
  void *v57; // rax
  CDrawListEntryBuilder *v58; // rcx
  __int64 v59; // rdi
  unsigned __int64 v60; // rdx
  __int64 v61; // r8
  unsigned __int64 v62; // rcx
  __int64 v63; // rcx
  _WORD *v64; // rax
  _WORD *v65; // rdi
  unsigned __int64 k; // rcx
  unsigned int v67; // edi
  unsigned int j; // edx
  float *v69; // rcx
  float v70; // xmm1_4
  int v71; // eax
  float v72; // xmm1_4
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  LPVOID v75; // rax
  __int64 v76; // rsi
  LPVOID v77; // rbx
  const void *v78; // rdi
  signed __int64 v79; // rsi
  void *v80; // rax
  CDrawListEntryBuilder *v81; // rcx
  __int64 v82; // rdi
  unsigned __int64 v83; // rdx
  __int64 v84; // r8
  unsigned __int64 v85; // rcx
  __int64 v86; // rcx
  _OWORD *v87; // rax
  _OWORD *v88; // rsi
  unsigned __int64 v89; // rdi
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // rdx
  LPVOID v92; // rax
  const void *v93; // rdi
  __int64 v94; // rsi
  LPVOID v95; // rbx
  signed __int64 v96; // rsi
  void *v97; // rax
  CDrawListEntryBuilder *v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rdi
  unsigned __int64 v101; // rdx
  __int64 v102; // r8
  unsigned __int64 v103; // rcx
  __int64 v104; // rcx
  unsigned __int64 v105; // rax
  _OWORD *v106; // r15
  unsigned __int64 v107; // r13
  unsigned __int64 v108; // rcx
  unsigned __int64 v109; // rdx
  LPVOID v110; // rax
  const void *v111; // rdi
  __int64 v112; // rbx
  LPVOID v113; // r14
  signed __int64 v114; // rbx
  void *v115; // rax
  CDrawListEntryBuilder *v116; // rcx
  __int64 v117; // rdi
  unsigned __int64 v118; // rdx
  unsigned __int64 v119; // rcx
  __int64 v120; // rcx
  _OWORD *v121; // rax
  _OWORD *v122; // rsi
  unsigned __int64 v123; // r13
  unsigned __int64 v124; // rdx
  unsigned __int64 v125; // rdi
  LPVOID v126; // rax
  const void *v127; // rdi
  __int64 v128; // rbx
  LPVOID v129; // r14
  signed __int64 v130; // rbx
  void *v131; // rax
  CDrawListEntryBuilder *v132; // rcx
  __int64 v133; // rdi
  unsigned __int64 v134; // rdx
  unsigned __int64 v135; // rcx
  __int64 v136; // rcx
  _OWORD *v137; // rax
  _OWORD *v138; // rsi
  __int64 v139; // rcx
  __int64 v140; // rdx
  unsigned __int64 v141; // rdi
  unsigned __int64 i; // rcx
  __int64 v143; // rdx
  __int128 v144; // xmm1
  __int128 v145; // xmm0
  _OWORD *v146; // r9
  unsigned __int64 v147; // rsi
  _OWORD *v148; // rcx
  unsigned __int64 v149; // rsi
  _OWORD *v150; // rcx
  _OWORD *v151; // rbx
  unsigned __int64 v152; // r9
  _OWORD *v153; // rcx
  _OWORD *v154; // rbx
  unsigned __int64 v155; // r9
  _OWORD *v156; // rcx
  unsigned __int64 v157; // rsi
  _WORD *v158; // r9
  unsigned __int64 v159; // rsi
  __int128 v160; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v161; // [rsp+30h] [rbp-D0h]
  struct Mesh::MeshDesc *v162[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v163; // [rsp+50h] [rbp-B0h]
  __int128 v164; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v165; // [rsp+70h] [rbp-90h]
  unsigned int v166; // [rsp+80h] [rbp-80h]
  unsigned __int64 v167; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v168; // [rsp+90h] [rbp-70h] BYREF
  __int128 v169; // [rsp+98h] [rbp-68h] BYREF
  __int64 v170; // [rsp+A8h] [rbp-58h]
  unsigned int v171; // [rsp+B0h] [rbp-50h]
  __int64 v172; // [rsp+B8h] [rbp-48h]
  __int64 v173; // [rsp+C0h] [rbp-40h]
  __int64 v174; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v175; // [rsp+D8h] [rbp-28h]
  int v176; // [rsp+DCh] [rbp-24h]
  struct Mesh::MeshDesc *v177; // [rsp+E0h] [rbp-20h]
  unsigned int v178; // [rsp+E8h] [rbp-18h]
  int v179; // [rsp+ECh] [rbp-14h]
  __int64 v180; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v181; // [rsp+F8h] [rbp-8h]
  float *v182; // [rsp+100h] [rbp+0h]
  unsigned __int64 v183; // [rsp+108h] [rbp+8h]
  const struct PrimitiveVertexAttributesDesc *v184; // [rsp+110h] [rbp+10h]
  _OWORD v185[2]; // [rsp+118h] [rbp+18h] BYREF
  struct Mesh::VertexAAOffsetDesc *v186; // [rsp+138h] [rbp+38h]
  __int64 v187; // [rsp+140h] [rbp+40h]
  __int64 v188; // [rsp+148h] [rbp+48h]
  struct Mesh::VertexAAOffsetDesc *v189[3]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v190[1280]; // [rsp+168h] [rbp+68h] BYREF
  char v191; // [rsp+668h] [rbp+568h] BYREF

  v184 = a3;
  v162[0] = a2;
  v167 = 0LL;
  v168 = 0LL;
  Mesh::CalcGeometryCounts(a2, &v167, &v168);
  if ( v168 )
  {
    v4 = -1LL;
    v5 = *((_QWORD *)this + 22);
    v6 = *((_QWORD *)this + 23);
    v171 = 8 * *(_DWORD *)this + 16;
    v172 = (__int64)(*((_QWORD *)this + 267) - *((_QWORD *)this + 266)) >> 4;
    v7 = *((_QWORD *)this + 512) - *((_QWORD *)this + 511);
    v8 = (__int64)(v6 - v5) >> 4;
    v9 = v167 * (v171 >> 4);
    v166 = v171 >> 4;
    v173 = v7 >> 1;
    v10 = v9 + v8;
    if ( v9 + v8 > v8 )
    {
      if ( (__int64)(*((_QWORD *)this + 24) - v6) >> 4 < v9 )
      {
        v73 = (*((_QWORD *)this + 24) - v5) >> 4;
        v74 = v73 >> 1;
        if ( v73 <= ~(v73 >> 1) && v74 + v73 >= v10 )
          v10 = v74 + v73;
        v75 = operator new[](saturated_mul(v10, 0x10uLL));
        v76 = *((_QWORD *)this + 23);
        v170 = 0LL;
        v77 = v75;
        v78 = (const void *)*((_QWORD *)this + 22);
        v79 = v76 - (_QWORD)v78;
        *(_QWORD *)&v169 = v75;
        *((_QWORD *)&v169 + 1) = v8;
        v161 = 0LL;
        v160 = v169;
        v80 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
                        &v160,
                        v79 >> 4);
        memmove_0(v80, v78, v79);
        v81 = (CDrawListEntryBuilder *)*((_QWORD *)this + 22);
        *((_QWORD *)this + 22) = v77;
        if ( v81 == (CDrawListEntryBuilder *)((char *)this + 208) )
          v81 = 0LL;
        operator delete(v81);
        v5 = *((_QWORD *)this + 22);
        v6 = v5 + 16 * v8;
        *((_QWORD *)this + 23) = v6;
        *((_QWORD *)this + 24) = v5 + 16 * v10;
      }
      v82 = (__int64)(v6 - v5) >> 4;
      v83 = v82 - v8;
      v84 = v5 + 16 * v82;
      if ( v9 && (!v84 || (v9 & 0x8000000000000000uLL) != 0LL) )
        goto LABEL_66;
      v85 = ((__int64)(v6 - v5) >> 4) - v8;
      if ( v9 < v83 )
        v85 = v9;
      v86 = 16 * v85;
      v87 = (_OWORD *)(v6 - v86);
      if ( v6 != v6 - v86 )
      {
        v146 = (_OWORD *)(v6 - 16);
        v147 = v9;
        v148 = (_OWORD *)(v84 + 16 * v9);
        if ( v84 )
        {
          while ( v147 )
          {
            --v147;
            --v148;
            if ( v147 >= v9 )
              break;
            *v148 = *v146;
            if ( v146 == v87 )
              goto LABEL_95;
            --v146;
          }
        }
        goto LABEL_66;
      }
LABEL_95:
      if ( v83 > v9 )
      {
        if ( v82 && (!v5 || v82 < 0) )
          goto LABEL_66;
        *(_QWORD *)&v160 = v5;
        *((_QWORD *)&v160 + 1) = v82;
        v161 = v82;
        ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>)(
          &v164,
          v5 + 16 * v8,
          v5 + 16 * (v82 - v9),
          &v160);
      }
      v4 = -1LL;
      *((_QWORD *)this + 23) += 16 * v9;
      v88 = (_OWORD *)(v5 + 16 * v8);
      if ( v9 )
      {
        *v88 = 0LL;
        qmemcpy(v88 + 1, v88, 8 * ((16 * v9 - 9) >> 3));
      }
    }
    else
    {
      v11 = 16 * v10;
      v12 = (__int64)v11 >> 4;
      v13 = (__int64)(v6 - v11 - v5) >> 4;
      v14 = v13 + ((__int64)v11 >> 4);
      if ( v14 > v8 )
        goto LABEL_158;
      if ( v14 != v8 )
      {
        if ( v12 && (!v5 || v12 < 0 || v8 < v12) )
          goto LABEL_66;
        v161 = (__int64)v11 >> 4;
        *(_QWORD *)&v160 = v5;
        *((_QWORD *)&v160 + 1) = v8;
        ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::move<std::move_iterator<CVisualTreePath::VisualTreePathUnit *>,stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *>>)(
          &v164,
          v5 + 16 * v14,
          v5 + 16 * v8,
          &v160);
        v4 = -1LL;
      }
      *((_QWORD *)this + 23) -= 16 * v13;
    }
    v13 = *((_QWORD *)this + 267);
    v5 = *((_QWORD *)this + 266);
    v15 = v172 + v167 * v166;
    v11 = (__int64)(v13 - v5) >> 4;
    if ( v15 > v11 )
    {
      v9 = v15 - v11;
      if ( (__int64)(*((_QWORD *)this + 268) - v13) >> 4 < v9 )
      {
        v89 = v11 + v9;
        v90 = (*((_QWORD *)this + 268) - v5) >> 4;
        *(_QWORD *)&v169 = v11 + v9;
        if ( v11 + v9 < v11 )
          goto LABEL_158;
        v91 = v90 >> 1;
        if ( v90 <= ~(v90 >> 1) && v90 + v91 >= v89 )
        {
          v89 = v90 + v91;
          *(_QWORD *)&v169 = v90 + v91;
        }
        v92 = operator new[](saturated_mul(v89, 0x10uLL));
        v93 = (const void *)*((_QWORD *)this + 266);
        v94 = *((_QWORD *)this + 267);
        v95 = v92;
        *(_QWORD *)&v160 = v92;
        v96 = v94 - (_QWORD)v93;
        *((_QWORD *)&v160 + 1) = v11;
        v161 = 0LL;
        v165 = 0LL;
        v164 = v160;
        v97 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
                        &v164,
                        v96 >> 4);
        memmove_0(v97, v93, v96);
        v98 = (CDrawListEntryBuilder *)*((_QWORD *)this + 266);
        *((_QWORD *)this + 266) = v95;
        if ( v98 == (CDrawListEntryBuilder *)((char *)this + 2160) )
          v98 = 0LL;
        operator delete(v98);
        v5 = *((_QWORD *)this + 266);
        v13 = v5 + 16 * v11;
        v99 = v5 + 16 * v169;
        *((_QWORD *)this + 267) = v13;
        *((_QWORD *)this + 268) = v99;
      }
      v100 = (__int64)(v13 - v5) >> 4;
      v101 = v100 - v11;
      v102 = v5 + 16 * v100;
      if ( v9 && (!v102 || (v9 & 0x8000000000000000uLL) != 0LL) )
        goto LABEL_66;
      v103 = ((__int64)(v13 - v5) >> 4) - v11;
      if ( v9 < v101 )
        v103 = v9;
      v104 = 16 * v103;
      v105 = v13 - v104;
      if ( v13 != v13 - v104 )
      {
        v4 = v13 - 16;
        v149 = v9;
        v150 = (_OWORD *)(v102 + 16 * v9);
        if ( v102 )
        {
          while ( v149 )
          {
            --v149;
            --v150;
            if ( v149 >= v9 )
              break;
            *v150 = *(_OWORD *)v4;
            if ( v4 == v105 )
              goto LABEL_113;
            v4 -= 16LL;
          }
        }
        goto LABEL_66;
      }
LABEL_113:
      if ( v101 > v9 )
      {
        if ( v100 && (!v5 || v100 < 0) )
          goto LABEL_66;
        *(_QWORD *)&v160 = v5;
        *((_QWORD *)&v160 + 1) = v100;
        v161 = v100;
        ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>)(
          &v164,
          v5 + 16 * v11,
          v5 + 16 * (v100 - v9),
          &v160);
      }
      v106 = (_OWORD *)(v5 + 16 * v11);
      *((_QWORD *)this + 267) += 16 * v9;
      if ( v9 )
      {
        *v106 = 0LL;
        qmemcpy(v106 + 1, v106, 8 * ((16 * v9 - 9) >> 3));
      }
    }
    else
    {
      v9 = 16 * v15;
      v16 = (__int64)v9 >> 4;
      v13 = (__int64)(v13 - v9 - v5) >> 4;
      v17 = v13 + ((__int64)v9 >> 4);
      if ( v17 > v11 )
        goto LABEL_158;
      if ( v17 != v11 )
      {
        if ( v16 && (!v5 || v16 < 0 || v11 < v16) )
          goto LABEL_66;
        v161 = (__int64)v9 >> 4;
        *(_QWORD *)&v160 = v5;
        *((_QWORD *)&v160 + 1) = v11;
        ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::move<std::move_iterator<CVisualTreePath::VisualTreePathUnit *>,stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *>>)(
          &v164,
          v5 + 16 * v17,
          v5 + 16 * v11,
          &v160);
      }
      *((_QWORD *)this + 267) -= 16 * v13;
    }
    v13 = *((_QWORD *)this + 512);
    v5 = *((_QWORD *)this + 511);
    v9 = v168 + v173;
    v11 = (__int64)(v13 - v5) >> 1;
    if ( v168 + v173 <= v11 )
    {
      v139 = (__int64)(2 * v9) >> 1;
      v13 = (__int64)(v13 - 2 * v9 - v5) >> 1;
      if ( v13 + v139 > v11 )
        goto LABEL_158;
      v31 = v5 + 2 * v11;
      if ( v13 + v139 != v11 )
      {
        if ( v139 && (!v5 || v139 < 0 || v11 < v139) )
          goto LABEL_66;
        v161 = (__int64)(2 * v9) >> 1;
        *(_QWORD *)&v160 = v5;
        *((_QWORD *)&v160 + 1) = v11;
        std::move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
          (__int64)&v164,
          (const void *)(v5 + 2 * (v13 + v139)),
          v31,
          &v160);
      }
      *((_QWORD *)this + 512) -= 2 * v13;
    }
    else
    {
      v9 -= v11;
      if ( (__int64)(*((_QWORD *)this + 513) - v13) >> 1 < v9 )
      {
        v18 = v11 + v9;
        v19 = (*((_QWORD *)this + 513) - v5) >> 1;
        *(_QWORD *)&v169 = v11 + v9;
        if ( v11 + v9 < v11 )
          goto LABEL_158;
        v20 = v19 >> 1;
        if ( v19 <= ~(v19 >> 1) && v20 + v19 >= v18 )
        {
          v18 = v20 + v19;
          *(_QWORD *)&v169 = v20 + v19;
        }
        v21 = operator new[](saturated_mul(v18, 2uLL));
        v22 = (const void *)*((_QWORD *)this + 511);
        v23 = *((_QWORD *)this + 512);
        v24 = v21;
        *(_QWORD *)&v160 = v21;
        v25 = v23 - (_QWORD)v22;
        *((_QWORD *)&v160 + 1) = v11;
        v161 = 0LL;
        v165 = 0LL;
        v164 = v160;
        v26 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<unsigned short *> &,__int64>(&v164, v25 >> 1);
        memmove_0(v26, v22, v25);
        v27 = (CDrawListEntryBuilder *)*((_QWORD *)this + 511);
        *((_QWORD *)this + 511) = v24;
        if ( v27 == (CDrawListEntryBuilder *)((char *)this + 4112) )
          v27 = 0LL;
        operator delete(v27);
        v5 = *((_QWORD *)this + 511);
        v13 = v5 + 2 * v11;
        v28 = v5 + 2 * v169;
        *((_QWORD *)this + 512) = v13;
        *((_QWORD *)this + 513) = v28;
      }
      v29 = (__int64)(v13 - v5) >> 1;
      v30 = v29 - v11;
      v31 = v5 + 2 * v29;
      if ( v9 && (!v31 || (v9 & 0x8000000000000000uLL) != 0LL) )
        goto LABEL_66;
      v32 = ((__int64)(v13 - v5) >> 1) - v11;
      if ( v9 < v30 )
        v32 = v9;
      v33 = 2 * v32;
      v34 = v13 - v33;
      if ( v13 != v13 - v33 )
      {
        v4 = v13 - 2;
        v157 = v9;
        if ( v31 )
        {
          while ( v157 )
          {
            if ( --v157 >= v9 )
              break;
            *(_WORD *)(v31 + 2 * v157) = *(_WORD *)v4;
            if ( v4 == v34 )
              goto LABEL_25;
            v4 -= 2LL;
          }
        }
        goto LABEL_66;
      }
LABEL_25:
      if ( v30 > v9 )
      {
        if ( v29 && (!v5 || v29 < 0) )
          goto LABEL_66;
        *(_QWORD *)&v160 = v5;
        *((_QWORD *)&v160 + 1) = v29;
        v161 = v29;
        ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::move_backward<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>)(
          &v164,
          v5 + 2 * v11,
          v5 + 2 * (v29 - v9),
          &v160);
      }
      *((_QWORD *)this + 512) += 2 * v9;
      v35 = (_WORD *)(v5 + 2 * v11);
      if ( v9 )
      {
        for ( i = (2 * v9) >> 1; i; --i )
          *v35++ = 0;
      }
    }
    v36 = v171;
    v37 = *((_QWORD *)this + 266);
    v38 = 16 * v8 + *((_QWORD *)this + 22);
    v180 = 0LL;
    v183 = 0LL;
    v39 = (struct Mesh::MeshDesc *)(16 * v172 + v37);
    v176 = v167;
    v40 = (float *)v173;
    v179 = v167;
    v41 = *((_QWORD *)this + 511);
    v174 = v38;
    v175 = v171;
    v177 = v39;
    v42 = v41 + 2 * v173;
    v178 = v171;
    if ( v168 == -1LL || !v42 && v168 )
      goto LABEL_77;
    v43 = v162[0];
    v181 = v168;
    v182 = (float *)(v41 + 2 * v173);
    if ( *((_BYTE *)v162[0] + 52) )
    {
      Mesh::GenerateGeometryForRectangle(v162[0], (struct Mesh::GeometryBuffers *)&v174);
    }
    else if ( *((_QWORD *)v162[0] + 4) )
    {
      Mesh::GenerateGeometryWorker(v162[0], (struct Mesh::GeometryBuffers *)&v174);
    }
    else
    {
      v143 = *((_QWORD *)v162[0] + 1);
      v189[0] = (struct Mesh::VertexAAOffsetDesc *)v190;
      v189[1] = (struct Mesh::VertexAAOffsetDesc *)v190;
      v189[2] = (struct Mesh::VertexAAOffsetDesc *)&v191;
      detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::resize(
        v189,
        v143);
      Mesh::CalcVertexAAOffsets(v43, v189[0], 1);
      v144 = *((_OWORD *)v43 + 1);
      v185[0] = *(_OWORD *)v43;
      v145 = *((_OWORD *)v43 + 2);
      v185[1] = v144;
      *(_QWORD *)&v144 = *((_QWORD *)v43 + 6);
      v187 = *((_QWORD *)&v145 + 1);
      v186 = v189[0];
      v188 = v144;
      Mesh::GenerateGeometryWorker((const struct Mesh::MeshDesc *)v185, (struct Mesh::GeometryBuffers *)&v174);
      detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::~vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>(v189);
    }
    v162[0] = v39;
    v162[1] = (struct Mesh::MeshDesc *)__PAIR64__(v180, v36);
    *(_QWORD *)&v169 = v38;
    *((_QWORD *)&v169 + 1) = __PAIR64__(v180, v36);
    CDrawListEntryBuilder::ComputeColorAndUV(this, v184, &v169, v162);
    if ( !*((_BYTE *)this + 4489) || *((float *)this + 12) == 0.0 && *((float *)this + 13) == 0.0 )
    {
      v31 = 0LL;
    }
    else
    {
      v31 = 0LL;
      for ( j = 0; j < v167; v40[1] = v72 - *((float *)this + 13) )
      {
        v69 = (float *)(v174 + (int)(j * v175));
        v70 = v69[1];
        *v69 = *v69 - *((float *)this + 12);
        v69[1] = v70 - *((float *)this + 13);
        v71 = j * v178;
        ++j;
        v40 = (float *)((char *)v177 + v71);
        v72 = v40[1];
        *v40 = *v40 - *((float *)this + 12);
      }
    }
    if ( *((_QWORD *)this + 510) )
    {
      v67 = 0;
      if ( v183 )
      {
        v42 = 0LL;
        while ( v42 < v181 )
        {
          v40 = v182;
          ++v67;
          *((_WORD *)v182 + v42) += *((_WORD *)this + 2040);
          v42 = v67;
          if ( v67 >= v183 )
            goto LABEL_34;
        }
LABEL_77:
        ((void (__fastcall *)(float *, unsigned __int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
          v40,
          v42,
          v31,
          v4);
        __debugbreak();
      }
    }
LABEL_34:
    v44 = v180;
    *((_QWORD *)this + 510) += v180;
    v5 = *((_QWORD *)this + 23);
    v9 = *((_QWORD *)this + 22);
    v45 = v8 + v44 * v166;
    v13 = (__int64)(v5 - v9) >> 4;
    if ( v45 > v13 )
    {
      v11 = v45 - v13;
      if ( (*((_QWORD *)this + 24) - v5) >> 4 < v11 )
      {
        v107 = v13 + v11;
        v108 = (__int64)(*((_QWORD *)this + 24) - v9) >> 4;
        if ( v13 + v11 < v13 )
          goto LABEL_158;
        v109 = v108 >> 1;
        if ( v108 <= ~(v108 >> 1) && v108 + v109 >= v107 )
          v107 = v108 + v109;
        v110 = operator new[](saturated_mul(v107, 0x10uLL));
        v111 = (const void *)*((_QWORD *)this + 22);
        v112 = *((_QWORD *)this + 23);
        v113 = v110;
        *(_QWORD *)&v160 = v110;
        v114 = v112 - (_QWORD)v111;
        *((_QWORD *)&v160 + 1) = v13;
        v161 = 0LL;
        v165 = 0LL;
        v164 = v160;
        v115 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
                         &v164,
                         v114 >> 4);
        memmove_0(v115, v111, v114);
        v116 = (CDrawListEntryBuilder *)*((_QWORD *)this + 22);
        *((_QWORD *)this + 22) = v113;
        if ( v116 == (CDrawListEntryBuilder *)((char *)this + 208) )
          v116 = 0LL;
        operator delete(v116);
        v9 = *((_QWORD *)this + 22);
        v5 = v9 + 16 * v13;
        *((_QWORD *)this + 23) = v5;
        *((_QWORD *)this + 24) = v9 + 16 * v107;
      }
      v117 = (__int64)(v5 - v9) >> 4;
      v118 = v117 - v13;
      v31 = v9 + 16 * v117;
      if ( v11 && (!v31 || (v11 & 0x8000000000000000uLL) != 0LL) )
        goto LABEL_66;
      v119 = ((__int64)(v5 - v9) >> 4) - v13;
      if ( v11 < v118 )
        v119 = v11;
      v120 = 16 * v119;
      v121 = (_OWORD *)(v5 - v120);
      if ( v5 != v5 - v120 )
      {
        v151 = (_OWORD *)(v5 - 16);
        v152 = v11;
        v153 = (_OWORD *)(v31 + 16 * v11);
        if ( v31 )
        {
          while ( v152 )
          {
            --v152;
            --v153;
            if ( v152 >= v11 )
              break;
            *v153 = *v151;
            if ( v151 == v121 )
              goto LABEL_131;
            --v151;
          }
        }
        goto LABEL_66;
      }
LABEL_131:
      if ( v118 > v11 )
      {
        v162[0] = (struct Mesh::MeshDesc *)v9;
        v163 = 0LL;
        v162[1] = (struct Mesh::MeshDesc *)v117;
        stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>::operator+=(v162, v117, v31);
        v164 = *(_OWORD *)v162;
        v165 = v163;
        ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>)(
          &v160,
          v9 + 16 * v13,
          v9 + 16 * (v117 - v11),
          &v164);
      }
      v122 = (_OWORD *)(v9 + 16 * v13);
      *((_QWORD *)this + 23) += 16 * v11;
      if ( v11 )
      {
        *v122 = 0LL;
        qmemcpy(v122 + 1, v122, 8 * ((16 * v11 - 9) >> 3));
      }
    }
    else
    {
      v11 = 16 * v45;
      v5 = (__int64)(v5 - v11 - v9) >> 4;
      v46 = v5 + ((__int64)v11 >> 4);
      if ( v46 > v13 )
        goto LABEL_158;
      if ( v46 != v13 )
      {
        v162[0] = *((struct Mesh::MeshDesc **)this + 22);
        v162[1] = (struct Mesh::MeshDesc *)v13;
        v163 = 0LL;
        stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>::operator+=(v162, (__int64)v11 >> 4, 0LL);
        v164 = *(_OWORD *)v162;
        v165 = v163;
        ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::move<std::move_iterator<CVisualTreePath::VisualTreePathUnit *>,stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *>>)(
          &v160,
          v9 + 16 * v46,
          v9 + 16 * v13,
          &v164);
      }
      *((_QWORD *)this + 23) -= 16 * v5;
    }
    v5 = *((_QWORD *)this + 267);
    v9 = *((_QWORD *)this + 266);
    v47 = v172 + v180 * v166;
    v13 = (__int64)(v5 - v9) >> 4;
    if ( v47 > v13 )
    {
      v11 = v47 - v13;
      if ( (*((_QWORD *)this + 268) - v5) >> 4 < v11 )
      {
        v123 = v13 + v11;
        v124 = (__int64)(*((_QWORD *)this + 268) - v9) >> 4;
        if ( v13 + v11 < v13 )
          goto LABEL_158;
        v125 = v124 >> 1;
        if ( v124 <= ~(v124 >> 1) && v125 + v124 >= v123 )
          v123 = v125 + v124;
        v126 = operator new[](saturated_mul(v123, 0x10uLL));
        v127 = (const void *)*((_QWORD *)this + 266);
        v128 = *((_QWORD *)this + 267);
        v129 = v126;
        *(_QWORD *)&v160 = v126;
        v130 = v128 - (_QWORD)v127;
        *((_QWORD *)&v160 + 1) = v13;
        v161 = 0LL;
        v165 = 0LL;
        v164 = v160;
        v131 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
                         &v164,
                         v130 >> 4);
        memmove_0(v131, v127, v130);
        v132 = (CDrawListEntryBuilder *)*((_QWORD *)this + 266);
        *((_QWORD *)this + 266) = v129;
        if ( v132 == (CDrawListEntryBuilder *)((char *)this + 2160) )
          v132 = 0LL;
        operator delete(v132);
        v9 = *((_QWORD *)this + 266);
        v5 = v9 + 16 * v13;
        *((_QWORD *)this + 267) = v5;
        *((_QWORD *)this + 268) = v9 + 16 * v123;
      }
      v133 = (__int64)(v5 - v9) >> 4;
      v134 = v133 - v13;
      v31 = v9 + 16 * v133;
      if ( v11 && (!v31 || (v11 & 0x8000000000000000uLL) != 0LL) )
        goto LABEL_66;
      v135 = ((__int64)(v5 - v9) >> 4) - v13;
      if ( v11 < v134 )
        v135 = v11;
      v136 = 16 * v135;
      v137 = (_OWORD *)(v5 - v136);
      if ( v5 != v5 - v136 )
      {
        v154 = (_OWORD *)(v5 - 16);
        v155 = v11;
        v156 = (_OWORD *)(v31 + 16 * v11);
        if ( v31 )
        {
          while ( v155 )
          {
            --v155;
            --v156;
            if ( v155 >= v11 )
              break;
            *v156 = *v154;
            if ( v154 == v137 )
              goto LABEL_150;
            --v154;
          }
        }
        goto LABEL_66;
      }
LABEL_150:
      if ( v134 > v11 )
      {
        v162[0] = (struct Mesh::MeshDesc *)v9;
        v163 = 0LL;
        v162[1] = (struct Mesh::MeshDesc *)v133;
        stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>::operator+=(v162, v133, v31);
        v164 = *(_OWORD *)v162;
        v165 = v163;
        ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>)(
          &v160,
          v9 + 16 * v13,
          v9 + 16 * (v133 - v11),
          &v164);
      }
      v138 = (_OWORD *)(v9 + 16 * v13);
      *((_QWORD *)this + 267) += 16 * v11;
      if ( v11 )
      {
        *v138 = 0LL;
        qmemcpy(v138 + 1, v138, 8 * ((16 * v11 - 9) >> 3));
      }
    }
    else
    {
      v11 = 16 * v47;
      v5 = (__int64)(v5 - v11 - v9) >> 4;
      v48 = v5 + ((__int64)v11 >> 4);
      if ( v48 > v13 )
        goto LABEL_158;
      if ( v48 != v13 )
      {
        v162[0] = *((struct Mesh::MeshDesc **)this + 266);
        v163 = 0LL;
        v162[1] = (struct Mesh::MeshDesc *)v13;
        stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>::operator+=(v162, (__int64)v11 >> 4, v31);
        v164 = *(_OWORD *)v162;
        v165 = v163;
        ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::move<std::move_iterator<CVisualTreePath::VisualTreePathUnit *>,stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *>>)(
          &v160,
          v9 + 16 * v48,
          v9 + 16 * v13,
          &v164);
      }
      *((_QWORD *)this + 267) -= 16 * v5;
    }
    v13 = *((_QWORD *)this + 512);
    v5 = *((_QWORD *)this + 511);
    v9 = v173 + v183;
    v11 = (__int64)(v13 - v5) >> 1;
    if ( v173 + v183 <= v11 )
      goto LABEL_159;
    v9 -= v11;
    if ( (__int64)(*((_QWORD *)this + 513) - v13) >> 1 >= v9 )
    {
LABEL_53:
      v59 = (__int64)(v13 - v5) >> 1;
      v60 = v59 - v11;
      v61 = v5 + 2 * v59;
      if ( !v9 || v61 && (v9 & 0x8000000000000000uLL) == 0LL )
      {
        v62 = ((__int64)(v13 - v5) >> 1) - v11;
        if ( v9 < v60 )
          v62 = v9;
        v63 = 2 * v62;
        v64 = (_WORD *)(v13 - v63);
        if ( v13 == v13 - v63 )
        {
LABEL_59:
          if ( v60 > v9 )
          {
            v162[0] = (struct Mesh::MeshDesc *)v5;
            v163 = 0LL;
            v162[1] = (struct Mesh::MeshDesc *)v59;
            stdext::checked_array_iterator<unsigned short *>::operator+=(v162, v59, v61);
            v164 = *(_OWORD *)v162;
            v165 = v163;
            ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::move_backward<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>)(
              &v160,
              v5 + 2 * v11,
              v5 + 2 * (v59 - v9),
              &v164);
          }
          *((_QWORD *)this + 512) += 2 * v9;
          v65 = (_WORD *)(v5 + 2 * v11);
          if ( v9 )
          {
            for ( k = (2 * v9) >> 1; k; --k )
              *v65++ = 0;
          }
LABEL_70:
          ++*((_QWORD *)this + 558);
          return;
        }
        v158 = (_WORD *)(v13 - 2);
        v159 = v9;
        if ( v61 )
        {
          while ( v159 )
          {
            if ( --v159 >= v9 )
              break;
            *(_WORD *)(v61 + 2 * v159) = *v158;
            if ( v158 == v64 )
              goto LABEL_59;
            --v158;
          }
        }
      }
LABEL_66:
      _invalid_parameter_noinfo_noreturn();
    }
    v49 = v11 + v9;
    v50 = (*((_QWORD *)this + 513) - v5) >> 1;
    if ( v11 + v9 >= v11 )
    {
      v51 = v50 >> 1;
      if ( v50 <= ~(v50 >> 1) && v50 + v51 >= v49 )
        v49 = v50 + v51;
      v52 = operator new[](saturated_mul(v49, 2uLL));
      v53 = (const void *)*((_QWORD *)this + 511);
      v54 = *((_QWORD *)this + 512);
      v55 = v52;
      *(_QWORD *)&v160 = v52;
      v56 = v54 - (_QWORD)v53;
      *((_QWORD *)&v160 + 1) = v11;
      v161 = 0LL;
      v165 = 0LL;
      v164 = v160;
      v57 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<unsigned short *> &,__int64>(&v164, v56 >> 1);
      memmove_0(v57, v53, v56);
      v58 = (CDrawListEntryBuilder *)*((_QWORD *)this + 511);
      *((_QWORD *)this + 511) = v55;
      if ( v58 == (CDrawListEntryBuilder *)((char *)this + 4112) )
        v58 = 0LL;
      operator delete(v58);
      v5 = *((_QWORD *)this + 511);
      v13 = v5 + 2 * v11;
      *((_QWORD *)this + 512) = v13;
      *((_QWORD *)this + 513) = v5 + 2 * v49;
      goto LABEL_53;
    }
    do
    {
LABEL_158:
      std::_Xoverflow_error("overflow");
      __debugbreak();
LABEL_159:
      v140 = (__int64)(2 * v9) >> 1;
      v13 = (__int64)(v13 - 2 * v9 - v5) >> 1;
      v141 = v13 + v140;
    }
    while ( v13 + v140 > v11 );
    if ( v13 + v140 != v11 )
    {
      v162[0] = (struct Mesh::MeshDesc *)v5;
      v163 = 0LL;
      v162[1] = (struct Mesh::MeshDesc *)v11;
      stdext::checked_array_iterator<unsigned short *>::operator+=(v162, v140, v31);
      v164 = *(_OWORD *)v162;
      v165 = v163;
      std::move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
        (__int64)&v160,
        (const void *)(v5 + 2 * v141),
        v5 + 2 * v11,
        &v164);
    }
    *((_QWORD *)this + 512) -= 2 * v13;
    goto LABEL_70;
  }
}
