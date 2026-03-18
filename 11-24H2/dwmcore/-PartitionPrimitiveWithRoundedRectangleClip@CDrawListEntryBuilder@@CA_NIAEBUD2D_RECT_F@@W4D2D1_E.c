/*
 * XREFs of ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800707A0
 * Callers:
 *     ?PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800702F0 (-PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV-$vector_facade@UPrimitiveS.c)
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800707A0 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_E.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x180072340 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 * Callees:
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800707A0 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_E.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?reserve_region@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUPrimitiveSubRect@CDrawListEntryBuilder@@_K0@Z @ 0x1801CBCDC (-reserve_region@-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimiti.c)
 *     ??$emplace_back@UD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@Z @ 0x1801CD930 (--$emplace_back@UD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@-$vector_facade@UPrimitiveSubRect@CDrawListEn.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x1802257B8 (--$uninitialized_move@V-$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V-$checked_array_iterator@PEAV.c)
 *     ??$move_backward@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x18024AED0 (--$move_backward@V-$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V-$checked_array_iterator@PEAVMatri.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

char __fastcall CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
        int a1,
        float *a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5)
{
  int v5; // r14d
  float v6; // xmm5_4
  unsigned int v7; // r12d
  float v8; // xmm7_4
  __int64 v11; // rcx
  float v12; // xmm4_4
  float v13; // xmm9_4
  float v14; // xmm12_4
  float v15; // xmm13_4
  float v16; // xmm3_4
  float v17; // xmm11_4
  float v18; // xmm14_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm10_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  __m128 v25; // xmm15
  float *v26; // rax
  float v27; // xmm8_4
  __m128 v28; // xmm6
  float v29; // xmm3_4
  float v30; // xmm6_4
  float *v31; // rdx
  float v32; // xmm5_4
  float v33; // xmm3_4
  float v34; // xmm8_4
  float *v35; // rdx
  float v36; // xmm4_4
  float v37; // xmm3_4
  float v38; // xmm8_4
  float v39; // xmm7_4
  float v40; // xmm9_4
  unsigned int v41; // xmm7_4
  unsigned int v42; // xmm9_4
  float v43; // xmm2_4
  unsigned __int64 v44; // rdi
  float v45; // xmm2_4
  __int64 v46; // r10
  __int64 v47; // rdx
  _DWORD *v48; // rbx
  unsigned __int64 v49; // r14
  signed __int64 v50; // r9
  unsigned __int64 v51; // rdx
  char *v52; // r8
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  __m128 v57; // xmm0
  unsigned int v59; // ebx
  __int64 v60; // r10
  __int64 v61; // rdx
  _DWORD *v62; // rbx
  unsigned __int64 v63; // r12
  signed __int64 v64; // r9
  unsigned __int64 v65; // rdx
  _DWORD *v66; // r8
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  float v71; // xmm2_4
  unsigned int v72; // xmm1_4
  unsigned int v73; // r12d
  __int64 v74; // r8
  __int64 v75; // rdx
  _DWORD *v76; // rbx
  unsigned __int64 v77; // r14
  signed __int64 v78; // r9
  unsigned __int64 v79; // rdx
  _DWORD *v80; // r10
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __m128 v84; // xmm0
  __int64 v85; // r10
  __int64 v86; // rdx
  signed __int64 v87; // r9
  unsigned __int64 v88; // rdx
  char *v89; // r8
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rax
  unsigned int v93; // xmm1_4
  unsigned int v94; // r12d
  __int64 v95; // rdx
  __int64 v96; // rax
  unsigned int v97; // ebx
  __int64 v98; // r10
  __int64 v99; // r10
  __int64 v100; // r8
  __int64 v101; // r10
  void *v102; // rax
  __int64 v103; // r8
  _DWORD *v104; // rdx
  void *v105; // rbx
  _DWORD *v106; // rcx
  bool v107; // zf
  __int64 v108; // rax
  unsigned __int64 v109; // rdi
  void *v110; // rax
  __int64 v111; // r8
  _DWORD *v112; // rdx
  void *v113; // rbx
  _DWORD *v114; // rcx
  _DWORD *v115; // rcx
  unsigned __int64 v116; // rdi
  void *v117; // rax
  __int64 v118; // r8
  _DWORD *v119; // rdx
  void *v120; // rbx
  _DWORD *v121; // rcx
  unsigned __int64 v122; // rdi
  void *v123; // rax
  __int64 v124; // r8
  _DWORD *v125; // rdx
  void *v126; // rbx
  _DWORD *v127; // rcx
  unsigned int v128; // [rsp+38h] [rbp-D0h]
  float v129; // [rsp+3Ch] [rbp-CCh]
  __m128 v130; // [rsp+48h] [rbp-C0h] BYREF
  signed __int64 v131; // [rsp+58h] [rbp-B0h]
  int v132; // [rsp+68h] [rbp-A0h]
  __m128 v133; // [rsp+78h] [rbp-90h] BYREF
  __int64 v134; // [rsp+88h] [rbp-80h]
  __m128 v135; // [rsp+98h] [rbp-70h] BYREF
  __int64 v136; // [rsp+A8h] [rbp-60h]
  unsigned int v137; // [rsp+B8h] [rbp-50h]
  unsigned int v138; // [rsp+BCh] [rbp-4Ch]
  __m128 v139; // [rsp+C8h] [rbp-40h] BYREF
  __m128 v140; // [rsp+D8h] [rbp-30h] BYREF

  v5 = a4;
  v6 = *(float *)(a4 + 4);
  v7 = a3;
  v8 = *(float *)a4;
  v11 = *(unsigned __int8 *)(a4 + 52);
  v138 = a3;
  v132 = a1;
  if ( (_BYTE)v11 )
  {
    v12 = v8 + *(float *)(a4 + 8);
    v13 = v6 + *(float *)(a4 + 12);
  }
  else
  {
    v12 = *(float *)(a4 + 8);
    v13 = *(float *)(a4 + 12);
  }
  v14 = *a2;
  v15 = a2[2];
  v16 = fmaxf(v8, *a2);
  v17 = a2[1];
  v18 = a2[3];
  v19 = fminf(v12, v15);
  v20 = fmaxf(v6, v17);
  v21 = fminf(v13, v18);
  if ( v19 <= v16 || v21 <= v20 )
    return 0;
  v22 = 0.0;
  if ( v19 < v16 || v21 < v20 )
    v23 = 0.0;
  else
    v23 = (float)(v19 - v16) * (float)(v21 - v20);
  v24 = (float)a1;
  if ( (float)a1 > v23 )
    return 0;
  v25 = *(__m128 *)a2;
  v26 = (float *)(a4 + 16);
  v27 = v8 + *(float *)(a4 + 16);
  v28 = v25;
  v29 = v6 + *(float *)(a4 + 20);
  v140 = *(__m128 *)a2;
  v139 = v25;
  if ( (float)(v27 - v14) > 0.015625 && (float)(v29 - v17) > 0.015625 )
  {
    if ( v25.m128_f32[0] <= v27 )
      v25.m128_f32[0] = v27;
    v30 = _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
    if ( v30 <= v29 )
      v30 = v29;
  }
  else
  {
    v25.m128_i32[0] = v140.m128_i32[0];
    v30 = v139.m128_f32[1];
  }
  if ( (_BYTE)v11 )
    v31 = (float *)(a4 + 16);
  else
    v31 = (float *)(a4 + 24);
  v32 = v6 + v31[1];
  v33 = v12 - *v31;
  if ( (float)(v15 - v33) <= 0.015625 || (float)(v32 - v17) <= 0.015625 )
  {
    v34 = v140.m128_f32[2];
    v129 = v140.m128_f32[2];
  }
  else
  {
    v34 = v140.m128_f32[2];
    v129 = v140.m128_f32[2];
    if ( v33 <= v140.m128_f32[2] )
    {
      v129 = v12 - *v31;
      v34 = v129;
    }
    if ( v30 <= v32 )
      v30 = v32;
  }
  if ( (_BYTE)v11 )
    v35 = (float *)(a4 + 16);
  else
    v35 = (float *)(a4 + 32);
  v36 = v12 - *v35;
  v37 = v13 - v35[1];
  if ( (float)(v15 - v36) <= 0.015625 || (float)(v18 - v37) <= 0.015625 )
  {
    v38 = v139.m128_f32[3];
    v36 = v129;
  }
  else
  {
    if ( v36 <= v34 )
      v129 = v36;
    else
      v36 = v129;
    v38 = v139.m128_f32[3];
    if ( v37 <= v139.m128_f32[3] )
      v38 = v13 - v35[1];
  }
  if ( !(_BYTE)v11 )
    v26 = (float *)(a4 + 40);
  v39 = v8 + *v26;
  v40 = v13 - v26[1];
  if ( (float)(v39 - v14) > 0.015625 && (float)(v18 - v40) > 0.015625 )
  {
    if ( v25.m128_f32[0] <= v39 )
      v25.m128_f32[0] = v39;
    if ( v40 <= v38 )
      v38 = v40;
  }
  v41 = v139.m128_u32[2];
  v42 = v139.m128_i32[0];
  if ( v139.m128_f32[2] < v139.m128_f32[0] || v38 < v30 )
    v43 = 0.0;
  else
    v43 = (float)(v139.m128_f32[2] - v139.m128_f32[0]) * (float)(v38 - v30);
  if ( v36 >= v25.m128_f32[0] && v140.m128_f32[3] >= v140.m128_f32[1] )
    v22 = (float)(v140.m128_f32[3] - v140.m128_f32[1]) * (float)(v36 - v25.m128_f32[0]);
  if ( v43 < v22 )
  {
    if ( v24 > v22 )
      return 0;
    v59 = a3;
    v128 = a3;
    v44 = 1LL;
    if ( v25.m128_f32[0] <= v14 )
    {
LABEL_69:
      v71 = a2[2];
      if ( v71 <= v129
        || (v72 = *((_DWORD *)a2 + 3),
            v73 = v7 & 0xFCFFFFFF,
            v139.m128_u64[0] = __PAIR64__(*((_DWORD *)a2 + 1), LODWORD(v129)),
            v139.m128_u64[1] = __PAIR64__(v72, LODWORD(v71)),
            v128 = v59 & 0xFFFFFCFF,
            (unsigned __int8)CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
                               a1,
                               (unsigned int)&v139,
                               v73,
                               v5,
                               (__int64)a5)) )
      {
LABEL_78:
        v85 = a5[1];
        v86 = a5[2];
        v48 = (_DWORD *)*a5;
        v49 = 0xAAAAAAAAAAAAAAABuLL * ((v85 - *a5) >> 3);
        v139.m128_u64[0] = __PAIR64__(v140.m128_u32[1], v25.m128_u32[0]);
        v139.m128_u64[1] = __PAIR64__(v140.m128_u32[3], LODWORD(v129));
        if ( !(0xAAAAAAAAAAAAAAABuLL * ((v86 - v85) >> 3)) )
        {
          if ( v49 + 1 < v49 )
          {
LABEL_150:
            std::_Xoverflow_error("overflow");
            __debugbreak();
LABEL_151:
            while ( 1 )
            {
              *(_OWORD *)v89 = *(_OWORD *)v101;
              *((_QWORD *)v89 + 2) = *(_QWORD *)(v101 + 16);
              if ( v101 == v92 )
                break;
              v101 -= 24LL;
              if ( v44 )
              {
                --v44;
                v89 -= 24;
                if ( !v44 )
                  continue;
              }
              goto LABEL_46;
            }
LABEL_83:
            if ( v88 > 1 )
            {
              if ( v87 && (!v48 || v87 < 0) )
                goto LABEL_46;
              v130.m128_u64[1] = v87;
              v131 = v87;
              v130.m128_u64[0] = (unsigned __int64)v48;
              std::move_backward<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
                &v135,
                &v48[6 * v49],
                &v48[6 * v87 - 6],
                &v130);
            }
            a5[1] += 24LL;
            v56 = 3 * v49;
            v57 = v139;
            v48[6 * v49 + 4] = v128;
            goto LABEL_45;
          }
          v122 = detail::liberal_expansion_policy::expand(
                   (detail::liberal_expansion_policy *)v11,
                   0xAAAAAAAAAAAAAAABuLL * ((v86 - (__int64)v48) >> 3),
                   v49 + 1);
          v123 = operator new[](saturated_mul(v122, 0x18uLL));
          v124 = a5[1];
          v125 = (_DWORD *)*a5;
          v130.m128_u64[0] = (unsigned __int64)v123;
          v130.m128_u64[1] = v49;
          v126 = v123;
          v131 = 0LL;
          v135 = v130;
          v136 = 0LL;
          std::uninitialized_move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
            &v130,
            v125,
            v124,
            &v135);
          v127 = (_DWORD *)*a5;
          v107 = *a5 == (_QWORD)(a5 + 3);
          *a5 = v126;
          if ( v107 )
            v127 = 0LL;
          operator delete(v127);
          v48 = (_DWORD *)*a5;
          v85 = *a5 + 24 * v49;
          a5[1] = v85;
          a5[2] = &v48[6 * v122];
        }
        v87 = 0xAAAAAAAAAAAAAAABuLL * ((v85 - (__int64)v48) >> 3);
        v88 = v87 - v49;
        v89 = (char *)&v48[2 * ((v85 - (__int64)v48) >> 3)];
        if ( !v89 )
          goto LABEL_46;
        v90 = 0xAAAAAAAAAAAAAAABuLL * ((v85 - (__int64)v48) >> 3) - v49;
        if ( v88 > 1 )
          v90 = 1LL;
        v91 = 24 * v90;
        v92 = v85 - 24 * v90;
        if ( v85 != v85 - v91 )
        {
          v101 = v85 - 24;
          v44 = 0LL;
          goto LABEL_151;
        }
        goto LABEL_83;
      }
      v74 = a5[1];
      v75 = a5[2];
      v76 = (_DWORD *)*a5;
      v133 = v139;
      v77 = 0xAAAAAAAAAAAAAAABuLL * ((v74 - (__int64)v76) >> 3);
      if ( !(0xAAAAAAAAAAAAAAABuLL * ((v75 - v74) >> 3)) )
      {
        if ( v77 + 1 < v77 )
        {
          std::_Xoverflow_error("overflow");
          __debugbreak();
          goto LABEL_128;
        }
        v116 = detail::liberal_expansion_policy::expand(
                 (detail::liberal_expansion_policy *)v11,
                 0xAAAAAAAAAAAAAAABuLL * ((v75 - (__int64)v76) >> 3),
                 v77 + 1);
        v117 = operator new[](saturated_mul(v116, 0x18uLL));
        v118 = a5[1];
        v119 = (_DWORD *)*a5;
        v130.m128_u64[0] = (unsigned __int64)v117;
        v130.m128_u64[1] = v77;
        v120 = v117;
        v131 = 0LL;
        v135 = v130;
        v136 = 0LL;
        std::uninitialized_move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
          &v130,
          v119,
          v118,
          &v135);
        v121 = (_DWORD *)*a5;
        v107 = *a5 == (_QWORD)(a5 + 3);
        *a5 = v120;
        if ( v107 )
          v121 = 0LL;
        operator delete(v121);
        v76 = (_DWORD *)*a5;
        v74 = *a5 + 24 * v77;
        a5[1] = v74;
        a5[2] = &v76[6 * v116];
        v44 = 1LL;
      }
      v78 = 0xAAAAAAAAAAAAAAABuLL * ((v74 - (__int64)v76) >> 3);
      v79 = v78 - v77;
      v80 = &v76[2 * ((v74 - (__int64)v76) >> 3)];
      if ( !v80 )
        goto LABEL_86;
      v81 = 0xAAAAAAAAAAAAAAABuLL * ((v74 - (__int64)v76) >> 3) - v77;
      if ( v79 > 1 )
        v81 = 1LL;
      v11 = 24 * v81;
      v82 = v74 - 24 * v81;
      if ( v74 == v74 - v11 )
      {
LABEL_76:
        if ( v79 <= 1 )
        {
LABEL_77:
          a5[1] += 24LL;
          v83 = 3 * v77;
          v84 = v133;
          v76[2 * v83 + 4] = v73;
          LOBYTE(v76[2 * v83 + 5]) = 0;
          *(__m128 *)&v76[2 * v83] = v84;
          goto LABEL_78;
        }
        if ( !v78 || v76 && v78 >= 0 )
        {
          v130.m128_u64[1] = v78;
          v131 = v78;
          v130.m128_u64[0] = (unsigned __int64)v76;
          std::move_backward<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
            &v135,
            &v76[6 * v77],
            &v76[6 * v78 - 6],
            &v130);
          goto LABEL_77;
        }
LABEL_86:
        _invalid_parameter_noinfo_noreturn();
      }
LABEL_128:
      v100 = v74 - 24;
      v11 = 0LL;
      *(_OWORD *)v80 = *(_OWORD *)v100;
      *((_QWORD *)v80 + 2) = *(_QWORD *)(v100 + 16);
      if ( v100 != v82 )
        goto LABEL_86;
      goto LABEL_76;
    }
    v139.m128_u64[0] = __PAIR64__(LODWORD(v17), LODWORD(v14));
    v59 = a3 & 0xFCFFFFFF;
    v139.m128_u64[1] = __PAIR64__(LODWORD(v18), v25.m128_u32[0]);
    v128 = a3 & 0xFCFFFFFF;
    v137 = a3 & 0xFFFFFCFF;
    if ( (unsigned __int8)CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
                            a1,
                            (unsigned int)&v139,
                            a3 & 0xFFFFFCFF,
                            a4,
                            (__int64)a5) )
    {
LABEL_68:
      a1 = v132;
      goto LABEL_69;
    }
    v60 = a5[1];
    v61 = a5[2];
    v62 = (_DWORD *)*a5;
    v133 = v139;
    v63 = 0xAAAAAAAAAAAAAAABuLL * ((v60 - (__int64)v62) >> 3);
    if ( !(0xAAAAAAAAAAAAAAABuLL * ((v61 - v60) >> 3)) )
    {
      if ( v63 + 1 < v63 )
      {
        std::_Xoverflow_error("overflow");
        __debugbreak();
        goto LABEL_125;
      }
      v109 = detail::liberal_expansion_policy::expand(
               (detail::liberal_expansion_policy *)v11,
               0xAAAAAAAAAAAAAAABuLL * ((v61 - (__int64)v62) >> 3),
               v63 + 1);
      v110 = operator new[](saturated_mul(v109, 0x18uLL));
      v111 = a5[1];
      v112 = (_DWORD *)*a5;
      v130.m128_u64[0] = (unsigned __int64)v110;
      v113 = v110;
      v130.m128_u64[1] = v63;
      v131 = 0LL;
      v135 = v130;
      v136 = 0LL;
      std::uninitialized_move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
        &v130,
        v112,
        v111,
        &v135);
      v114 = (_DWORD *)*a5;
      v107 = *a5 == (_QWORD)(a5 + 3);
      *a5 = v113;
      if ( v107 )
        v114 = 0LL;
      operator delete(v114);
      v62 = (_DWORD *)*a5;
      v60 = *a5 + 24 * v63;
      a5[1] = v60;
      v115 = &v62[6 * v109];
      v44 = 1LL;
      a5[2] = v115;
    }
    v64 = 0xAAAAAAAAAAAAAAABuLL * ((v60 - (__int64)v62) >> 3);
    v65 = v64 - v63;
    v66 = &v62[2 * ((v60 - (__int64)v62) >> 3)];
    if ( !v66 )
      goto LABEL_85;
    v67 = 0xAAAAAAAAAAAAAAABuLL * ((v60 - (__int64)v62) >> 3) - v63;
    if ( v65 > 1 )
      v67 = 1LL;
    v68 = 24 * v67;
    v69 = v60 - 24 * v67;
    if ( v60 == v60 - v68 )
    {
LABEL_66:
      if ( v65 <= 1 )
      {
LABEL_67:
        a5[1] += 24LL;
        v70 = 3 * v63;
        v11 = v137;
        v7 = v138;
        *(__m128 *)&v62[2 * v70] = v133;
        v62[2 * v70 + 4] = v11;
        LOBYTE(v62[2 * v70 + 5]) = 0;
        v59 = v128;
        goto LABEL_68;
      }
      if ( !v64 || v62 && v64 >= 0 )
      {
        v130.m128_u64[1] = v64;
        v131 = v64;
        v130.m128_u64[0] = (unsigned __int64)v62;
        std::move_backward<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
          &v135,
          &v62[6 * v63],
          &v62[6 * v64 - 6],
          &v130);
        goto LABEL_67;
      }
LABEL_85:
      _invalid_parameter_noinfo_noreturn();
    }
LABEL_125:
    v99 = v60 - 24;
    *(_OWORD *)v66 = *(_OWORD *)v99;
    *((_QWORD *)v66 + 2) = *(_QWORD *)(v99 + 16);
    if ( v99 != v69 )
      goto LABEL_85;
    goto LABEL_66;
  }
  if ( v24 <= v43 )
  {
    v44 = a3;
    if ( v30 > v17 )
    {
      v140.m128_u64[0] = __PAIR64__(LODWORD(v17), LODWORD(v14));
      v97 = a3 & 0xFFFCFFFF;
      v140.m128_u64[1] = __PAIR64__(LODWORD(v30), LODWORD(v15));
      v44 = a3 & 0xFFFFFFFC;
      if ( !(unsigned __int8)CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
                               a1,
                               (unsigned int)&v140,
                               a3 & 0xFFFCFFFF,
                               a4,
                               (__int64)a5) )
      {
        v133 = v140;
        detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::emplace_back<D2D_RECT_F,enum D2D1_EDGE_FLAGS,bool>(
          a5,
          &v133,
          v97,
          0LL);
      }
      a1 = v132;
    }
    v45 = a2[3];
    if ( v45 > v38 )
    {
      v93 = *((_DWORD *)a2 + 2);
      v94 = v7 & 0xFFFFFFFC;
      v139.m128_f32[0] = *a2;
      *(unsigned __int64 *)((char *)v139.m128_u64 + 4) = __PAIR64__(v93, LODWORD(v38));
      v139.m128_f32[3] = v45;
      v44 = (unsigned int)v44 & 0xFFFCFFFF;
      if ( !(unsigned __int8)CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
                               a1,
                               (unsigned int)&v139,
                               v94,
                               v5,
                               (__int64)a5) )
      {
        v95 = a5[1] - *a5;
        v140 = v139;
        v96 = detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::reserve_region(
                a5,
                0xAAAAAAAAAAAAAAABuLL * (v95 >> 3));
        *(__m128 *)v96 = v140;
        *(_DWORD *)(v96 + 16) = v94;
        *(_BYTE *)(v96 + 20) = 0;
      }
    }
    v46 = a5[1];
    v47 = a5[2];
    v48 = (_DWORD *)*a5;
    v140.m128_u64[0] = __PAIR64__(LODWORD(v30), v42);
    v49 = 0xAAAAAAAAAAAAAAABuLL * ((v46 - (__int64)v48) >> 3);
    v140.m128_u64[1] = __PAIR64__(LODWORD(v38), v41);
    v128 = v44;
    if ( 0xAAAAAAAAAAAAAAABuLL * ((v47 - v46) >> 3) )
      goto LABEL_39;
    if ( v49 + 1 >= v49 )
    {
      v44 = detail::liberal_expansion_policy::expand(
              (detail::liberal_expansion_policy *)v11,
              0xAAAAAAAAAAAAAAABuLL * ((v47 - (__int64)v48) >> 3),
              v49 + 1);
      v102 = operator new[](saturated_mul(v44, 0x18uLL));
      v103 = a5[1];
      v104 = (_DWORD *)*a5;
      v133.m128_u64[0] = (unsigned __int64)v102;
      v133.m128_u64[1] = v49;
      v105 = v102;
      v134 = 0LL;
      v130 = v133;
      v131 = 0LL;
      std::uninitialized_move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
        &v135,
        v104,
        v103,
        &v130);
      v106 = (_DWORD *)*a5;
      v107 = *a5 == (_QWORD)(a5 + 3);
      *a5 = v105;
      if ( v107 )
        v106 = 0LL;
      operator delete(v106);
      v48 = (_DWORD *)*a5;
      v46 = *a5 + 24 * v49;
      v108 = 3 * v44;
      a5[1] = v46;
      LODWORD(v44) = v128;
      a5[2] = &v48[2 * v108];
LABEL_39:
      v50 = 0xAAAAAAAAAAAAAAABuLL * ((v46 - (__int64)v48) >> 3);
      v51 = v50 - v49;
      v52 = (char *)&v48[2 * ((v46 - (__int64)v48) >> 3)];
      if ( !v52 )
        goto LABEL_46;
      v53 = 0xAAAAAAAAAAAAAAABuLL * ((v46 - (__int64)v48) >> 3) - v49;
      if ( v51 > 1 )
        v53 = 1LL;
      v54 = 24 * v53;
      v55 = v46 - 24 * v53;
      if ( v46 != v46 - v54 )
      {
        v98 = v46 - 24;
        *(_OWORD *)v52 = *(_OWORD *)v98;
        *((_QWORD *)v52 + 2) = *(_QWORD *)(v98 + 16);
        if ( v98 != v55 )
LABEL_46:
          _invalid_parameter_noinfo_noreturn();
      }
      if ( v51 > 1 )
      {
        if ( v50 && (!v48 || v50 < 0) )
          goto LABEL_46;
        v130.m128_u64[1] = v50;
        v131 = v50;
        v130.m128_u64[0] = (unsigned __int64)v48;
        std::move_backward<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
          &v135,
          &v48[6 * v49],
          &v48[6 * v50 - 6],
          &v130);
      }
      a5[1] += 24LL;
      v56 = 3 * v49;
      v57 = v140;
      v48[6 * v49 + 4] = v44;
LABEL_45:
      LOBYTE(v48[2 * v56 + 5]) = 1;
      *(__m128 *)&v48[2 * v56] = v57;
      return 1;
    }
    goto LABEL_150;
  }
  return 0;
}
