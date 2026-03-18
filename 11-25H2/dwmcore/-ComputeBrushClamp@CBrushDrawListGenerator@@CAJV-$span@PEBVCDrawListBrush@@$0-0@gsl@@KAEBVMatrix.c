/*
 * XREFs of ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x18004E5B0
 * Callers:
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800753B8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180035440 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004DFE0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F5D0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x180073CD0 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?As3DHomogeneous@Matrix3x3@@QEBA?AVCMILMatrix@@XZ @ 0x1801A0068 (-As3DHomogeneous@Matrix3x3@@QEBA-AVCMILMatrix@@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1801BDF50 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushDrawListGenerator::ComputeBrushClamp(
        unsigned __int64 *a1,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned __int64 v4; // r15
  struct CShape *v5; // r10
  __int64 v7; // r9
  __int64 v9; // r8
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __int128 v12; // xmm0
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm5_4
  float v18; // xmm6_4
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  int v21; // eax
  __m128 v22; // xmm0
  __m128 v23; // xmm1
  __m128 v24; // xmm1
  __m128 v25; // xmm1
  CRectanglesShape *v26; // rbx
  int v27; // r14d
  void *(__fastcall ***v28)(CRectanglesShape *__hidden, unsigned int); // rbx
  void *(__fastcall *v29)(CRectanglesShape *__hidden, unsigned int); // rax
  __int64 v30; // rax
  CResource *v31; // rcx
  void (*v32)(void); // rax
  __int64 v33; // rax
  void *(__fastcall ***v34)(CRectanglesShape *__hidden, unsigned int); // rdi
  CPathData *v35; // rcx
  void (*v36)(void); // rax
  _QWORD *Value; // rdi
  HANDLE v38; // rax
  CResource **v39; // rdx
  char *v40; // rbx
  __int64 v41; // rax
  void (*v42)(void); // rax
  __int64 v43; // rax
  CPathData *v44; // rcx
  void (*v45)(void); // rax
  LPVOID v46; // rax
  void *(__fastcall ***v47)(CRectanglesShape *__hidden, unsigned int); // rbx
  void *(__fastcall *v48)(CRectanglesShape *__hidden, unsigned int); // rax
  __int64 v49; // rax
  CResource *v50; // rcx
  __int64 (__fastcall *v51)(CResource *); // rax
  __int64 v52; // rax
  void *(__fastcall ***v53)(CRectanglesShape *__hidden, unsigned int); // rdi
  CPathData *v54; // rcx
  __int64 (__fastcall *v55)(CPathData *); // rax
  _QWORD *v56; // rdi
  HANDLE v57; // rax
  HANDLE v59; // rax
  HANDLE ProcessHeap; // rax
  int v61; // eax
  __int64 v62; // rdx
  void *(__fastcall ***v63)(CRectanglesShape *__hidden, unsigned int); // rbx
  void *(__fastcall *v64)(CRectanglesShape *__hidden, unsigned int); // rax
  __int64 v65; // rax
  CResource *v66; // rcx
  void (*v67)(void); // rax
  __int64 v68; // rax
  void *(__fastcall ***v69)(CRectanglesShape *__hidden, unsigned int); // rdi
  CPathData *v70; // rcx
  void (*v71)(void); // rax
  _QWORD *v72; // rdi
  HANDLE v73; // rax
  void *(__fastcall ***v74)(CRectanglesShape *__hidden, unsigned int); // rbx
  void *v75; // rax
  void *(__fastcall *v76)(CRectanglesShape *__hidden, unsigned int); // rax
  __int64 v77; // rax
  CResource *v78; // rcx
  void (*v79)(void); // rax
  __int64 v80; // rax
  void *(__fastcall ***v81)(CRectanglesShape *__hidden, unsigned int); // rdi
  CPathData *v82; // rcx
  void (*v83)(void); // rax
  _QWORD *v84; // rdi
  HANDLE v85; // rax
  _QWORD *v86; // rbx
  void *(__fastcall *v87)(CRectanglesShape *__hidden, unsigned int); // rax
  __int64 v88; // rax
  CResource *v89; // rcx
  void (*v90)(void); // rax
  __int64 v91; // rax
  _QWORD *v92; // rdi
  CPathData *v93; // rcx
  void (*v94)(void); // rax
  _QWORD *v95; // rdi
  HANDLE v96; // rax
  HANDLE v97; // rax
  HANDLE v98; // rax
  HANDLE v99; // rax
  HANDLE v100; // rax
  CThreadContext *v101; // rax
  CThreadContext *v102; // rax
  CThreadContext *v103; // rax
  CThreadContext *v104; // rax
  int v105; // eax
  CThreadContext *v106; // rax
  CThreadContext *v107; // rax
  CThreadContext *v108; // rax
  CThreadContext *v109; // rax
  CThreadContext *v110; // rax
  CThreadContext *v111; // rax
  int v112; // xmm1_4
  int v113; // xmm0_4
  int v114; // xmm1_4
  int v115; // xmm0_4
  int v116; // xmm1_4
  __int64 v117; // rax
  LPVOID lpMem; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v119; // [rsp+40h] [rbp-C8h]
  LPVOID v120; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v121; // [rsp+50h] [rbp-B8h]
  __m128 v122; // [rsp+58h] [rbp-B0h] BYREF
  __m256i v123; // [rsp+68h] [rbp-A0h]
  _BYTE v124[20]; // [rsp+88h] [rbp-80h]
  LPVOID *v125; // [rsp+A0h] [rbp-68h] BYREF
  CComplexShape *v126; // [rsp+A8h] [rbp-60h] BYREF
  int v127; // [rsp+B0h] [rbp-58h]
  int v128; // [rsp+B4h] [rbp-54h]
  int v129; // [rsp+B8h] [rbp-50h]
  int v130; // [rsp+BCh] [rbp-4Ch]
  int v131; // [rsp+C0h] [rbp-48h]
  LPVOID *p_lpMem; // [rsp+E8h] [rbp-20h]
  struct CShape *v133; // [rsp+F0h] [rbp-18h] BYREF
  char v134; // [rsp+F8h] [rbp-10h]
  __m128 v135; // [rsp+108h] [rbp+0h] BYREF
  __m256i v136; // [rsp+118h] [rbp+10h]
  __int128 v137; // [rsp+138h] [rbp+30h]
  int v138; // [rsp+148h] [rbp+40h]
  void **v139; // [rsp+158h] [rbp+50h] BYREF
  CPathData *v140; // [rsp+160h] [rbp+58h]
  char *v141; // [rsp+168h] [rbp+60h]
  CResource **v142; // [rsp+170h] [rbp+68h]
  CResource **v143; // [rsp+178h] [rbp+70h]
  __int128 v144; // [rsp+180h] [rbp+78h] BYREF
  CResource *v145; // [rsp+190h] [rbp+88h] BYREF
  __int128 v146; // [rsp+198h] [rbp+90h]
  void *retaddr; // [rsp+200h] [rbp+F8h]

  v4 = *a1;
  v5 = 0LL;
  v7 = a3;
  v121 = a3;
  lpMem = 0LL;
  v9 = a2;
  v10 = 0LL;
  LODWORD(v119) = a2;
  while ( 1 )
  {
    if ( v10 >= v4 )
    {
      v46 = lpMem;
      v47 = 0LL;
      lpMem = 0LL;
      v27 = 0;
      *a4 = v46;
      goto LABEL_50;
    }
    v11 = *(_QWORD *)(a1[1] + 8 * v10);
    if ( v11 )
    {
      if ( *(_BYTE *)(v11 + 52) )
        break;
    }
LABEL_48:
    ++v10;
  }
  v139 = &CRectanglesShape::`vftable';
  v141 = (char *)&v144;
  v140 = 0LL;
  v142 = (CResource **)&v144;
  v143 = &v145;
  v145 = 0LL;
  v12 = *(_OWORD *)(v11 + 32);
  v142 = &v145;
  v138 = 0;
  v146 = v12;
  v144 = v12;
  if ( ((1 << v10) & (unsigned int)v9) != 0 )
  {
    v112 = *(_DWORD *)(v11 + 12);
    LODWORD(v125) = *(_DWORD *)(v11 + 8);
    v113 = *(_DWORD *)(v11 + 16);
    HIDWORD(v125) = v112;
    v114 = *(_DWORD *)(v11 + 20);
    HIDWORD(v126) = v113;
    v115 = *(_DWORD *)(v11 + 24);
    v127 = v114;
    v116 = *(_DWORD *)(v11 + 28);
    v129 = v115;
    v130 = v116;
    LODWORD(v126) = 0;
    v128 = 0;
    v131 = 1065353216;
    Matrix3x3::operator*(&v125, &v122, v7, v7);
    v117 = Matrix3x3::As3DHomogeneous(&v122, &v125);
    v135 = *(__m128 *)v117;
    v136 = *(__m256i *)(v117 + 16);
    v137 = *(_OWORD *)(v117 + 48);
    v21 = *(_DWORD *)(v117 + 64);
  }
  else
  {
    v13 = *(float *)(v11 + 8);
    v14 = *(float *)(v11 + 16);
    v15 = *(float *)(v11 + 20);
    v16 = *(float *)(v11 + 12);
    v17 = *(float *)(v11 + 24);
    v18 = *(float *)(v11 + 28);
    *(_OWORD *)&v123.m256i_u64[1] = 0LL;
    *(_QWORD *)&v124[12] = 0x28083F800000LL;
    v19 = (__m128)v122.m128_u64[0];
    *(_DWORD *)&v124[8] = 0;
    v123.m256i_i64[3] = 1065353216LL;
    v19.m128_f32[0] = v13;
    v20 = *(__m128 *)v123.m256i_i8;
    v21 = 10248;
    v20.m128_f32[0] = v14;
    v22 = _mm_shuffle_ps(v19, v19, 225);
    v23 = _mm_shuffle_ps(v20, v20, 225);
    v22.m128_f32[0] = v16;
    v23.m128_f32[0] = v15;
    *(__m128 *)v123.m256i_i8 = _mm_shuffle_ps(v23, v23, 225);
    v136 = v123;
    v24 = *(__m128 *)v124;
    v122 = _mm_shuffle_ps(v22, v22, 225);
    v24.m128_f32[0] = v17;
    v135 = v122;
    v25 = _mm_shuffle_ps(v24, v24, 225);
    v25.m128_f32[0] = v18;
    *(__m128 *)v124 = _mm_shuffle_ps(v25, v25, 225);
    v137 = *(_OWORD *)v124;
  }
  v26 = (CRectanglesShape *)lpMem;
  v138 = v21;
  if ( !lpMem )
  {
    v133 = v5;
    p_lpMem = &lpMem;
    v134 = 1;
    v27 = CShape::CopyShape((CShape *)&v139, (const struct CMILMatrix *)&v135, &v133);
    if ( v134 )
    {
      v28 = (void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))*p_lpMem;
      *p_lpMem = v133;
      if ( v28 )
      {
        v29 = **v28;
        if ( v29 == CRectanglesShape::`scalar deleting destructor' )
        {
          *v28 = (void *(__fastcall **)(CRectanglesShape *__hidden, unsigned int))&CRectanglesShape::`vftable';
          v30 = ((char *)v28[3] - (char *)v28[2]) >> 4;
          if ( v30 )
            v28[3] -= 2 * v30;
          v31 = (CResource *)v28[7];
          if ( v31 )
          {
            v32 = *(void (**)(void))(*(_QWORD *)v31 + 16LL);
            if ( (char *)v32 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
              CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v31);
            else
              v32();
            v28[7] = 0LL;
          }
          v33 = ((char *)v28[3] - (char *)v28[2]) >> 4;
          if ( v33 )
            v28[3] -= 2 * v33;
          v34 = (void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v28[2];
          v28[2] = 0LL;
          if ( v34 == v28 + 5 )
            v34 = 0LL;
          if ( v34 )
          {
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, v34);
          }
          v35 = (CPathData *)v28[1];
          if ( v35 )
          {
            v28[1] = 0LL;
            v36 = *(void (**)(void))(*(_QWORD *)v35 + 16LL);
            if ( (char *)v36 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
              CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v35);
            else
              v36();
          }
          Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
          if ( !Value )
          {
            v101 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
            if ( !v101 || (v102 = CThreadContext::CThreadContext(v101), (Value = v102) == 0LL) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
              ModuleFailFastForHRESULT(-2147024882, retaddr);
            }
            TlsSetValue(CThreadContext::s_dwTlsIndex, v102);
          }
          if ( *((_DWORD *)Value + 13) < *((_DWORD *)Value + 12) )
          {
            *v28 = (void *(__fastcall **)(CRectanglesShape *__hidden, unsigned int))Value[7];
            ++*((_DWORD *)Value + 13);
            Value[7] = v28;
          }
          else
          {
            v38 = GetProcessHeap();
            HeapFree(v38, 0, v28);
          }
        }
        else
        {
          v29((CRectanglesShape *)v28, 1u);
        }
      }
    }
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x5Fu, 0LL);
      goto LABEL_150;
    }
    goto LABEL_30;
  }
  v120 = v5;
  v125 = &v120;
  v126 = v5;
  LOBYTE(v127) = 1;
  v61 = CShape::TryOptimizedCombinePaths(lpMem, 0LL, &v139, &v135, 1, &v126);
  v27 = v61;
  if ( v61 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x1C8u, 0LL);
  }
  else if ( !v126 )
  {
    v105 = CShape::D2DCombine(v26, v62, (CRoundedRectangleShape *)&v139, &v135, 1, &v126);
    v27 = v105;
    if ( v105 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v105, 0x1D3u, 0LL);
  }
  if ( (_BYTE)v127 )
  {
    v63 = (void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))*v125;
    *v125 = v126;
    if ( v63 )
    {
      v64 = **v63;
      if ( v64 == CRectanglesShape::`scalar deleting destructor' )
      {
        *v63 = (void *(__fastcall **)(CRectanglesShape *__hidden, unsigned int))&CRectanglesShape::`vftable';
        v65 = ((char *)v63[3] - (char *)v63[2]) >> 4;
        if ( v65 )
          v63[3] -= 2 * v65;
        v66 = (CResource *)v63[7];
        if ( v66 )
        {
          v67 = *(void (**)(void))(*(_QWORD *)v66 + 16LL);
          if ( (char *)v67 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
            CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v66);
          else
            v67();
          v63[7] = 0LL;
        }
        v68 = ((char *)v63[3] - (char *)v63[2]) >> 4;
        if ( v68 )
          v63[3] -= 2 * v68;
        v69 = (void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v63[2];
        v63[2] = 0LL;
        if ( v69 == v63 + 5 )
          v69 = 0LL;
        if ( v69 )
        {
          v100 = GetProcessHeap();
          HeapFree(v100, 0, v69);
        }
        v70 = (CPathData *)v63[1];
        if ( v70 )
        {
          v63[1] = 0LL;
          v71 = *(void (**)(void))(*(_QWORD *)v70 + 16LL);
          if ( (char *)v71 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v70);
          else
            v71();
        }
        v72 = TlsGetValue(CThreadContext::s_dwTlsIndex);
        if ( !v72 )
        {
          v110 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
          if ( !v110 || (v111 = CThreadContext::CThreadContext(v110), (v72 = v111) == 0LL) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
            ModuleFailFastForHRESULT(-2147024882, retaddr);
          }
          TlsSetValue(CThreadContext::s_dwTlsIndex, v111);
        }
        if ( *((_DWORD *)v72 + 13) < *((_DWORD *)v72 + 12) )
        {
          *v63 = (void *(__fastcall **)(CRectanglesShape *__hidden, unsigned int))v72[7];
          ++*((_DWORD *)v72 + 13);
          v72[7] = v63;
        }
        else
        {
          v73 = GetProcessHeap();
          HeapFree(v73, 0, v63);
        }
      }
      else
      {
        v64((CRectanglesShape *)v63, 1u);
      }
    }
  }
  if ( v27 >= 0 )
  {
    v74 = (void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))lpMem;
    v5 = 0LL;
    v75 = v120;
    v120 = 0LL;
    lpMem = v75;
    if ( !v74 )
      goto LABEL_31;
    v76 = **v74;
    if ( v76 == CRectanglesShape::`scalar deleting destructor' )
    {
      *v74 = (void *(__fastcall **)(CRectanglesShape *__hidden, unsigned int))&CRectanglesShape::`vftable';
      v77 = ((char *)v74[3] - (char *)v74[2]) >> 4;
      if ( v77 )
        v74[3] -= 2 * v77;
      v78 = (CResource *)v74[7];
      if ( v78 )
      {
        v79 = *(void (**)(void))(*(_QWORD *)v78 + 16LL);
        if ( (char *)v79 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v78);
        else
          v79();
        v74[7] = 0LL;
      }
      v80 = ((char *)v74[3] - (char *)v74[2]) >> 4;
      if ( v80 )
        v74[3] -= 2 * v80;
      v81 = (void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v74[2];
      v74[2] = 0LL;
      if ( v81 == v74 + 5 )
        v81 = 0LL;
      if ( v81 )
      {
        v99 = GetProcessHeap();
        HeapFree(v99, 0, v81);
      }
      v82 = (CPathData *)v74[1];
      if ( v82 )
      {
        v74[1] = 0LL;
        v83 = *(void (**)(void))(*(_QWORD *)v82 + 16LL);
        if ( (char *)v83 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v82);
        else
          v83();
      }
      v84 = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !v84 )
      {
        v108 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
        if ( !v108 || (v109 = CThreadContext::CThreadContext(v108), (v84 = v109) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v109);
      }
      if ( *((_DWORD *)v84 + 13) < *((_DWORD *)v84 + 12) )
      {
        *v74 = (void *(__fastcall **)(CRectanglesShape *__hidden, unsigned int))v84[7];
        ++*((_DWORD *)v84 + 13);
        v84[7] = v74;
      }
      else
      {
        v85 = GetProcessHeap();
        HeapFree(v85, 0, v74);
      }
    }
    else
    {
      v76((CRectanglesShape *)v74, 1u);
    }
    v86 = v120;
    if ( v120 )
    {
      v87 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v120;
      if ( v87 == CRectanglesShape::`scalar deleting destructor' )
      {
        *(_QWORD *)v120 = &CRectanglesShape::`vftable';
        v88 = (__int64)(v86[3] - v86[2]) >> 4;
        if ( v88 )
          v86[3] -= 16 * v88;
        v89 = (CResource *)v86[7];
        if ( v89 )
        {
          v90 = *(void (**)(void))(*(_QWORD *)v89 + 16LL);
          if ( (char *)v90 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
            CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v89);
          else
            v90();
          v86[7] = 0LL;
        }
        v91 = (__int64)(v86[3] - v86[2]) >> 4;
        if ( v91 )
          v86[3] -= 16 * v91;
        v92 = (_QWORD *)v86[2];
        v86[2] = 0LL;
        if ( v92 == v86 + 5 )
          v92 = 0LL;
        if ( v92 )
        {
          v98 = GetProcessHeap();
          HeapFree(v98, 0, v92);
        }
        v93 = (CPathData *)v86[1];
        if ( v93 )
        {
          v86[1] = 0LL;
          v94 = *(void (**)(void))(*(_QWORD *)v93 + 16LL);
          if ( (char *)v94 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v93);
          else
            v94();
        }
        v95 = TlsGetValue(CThreadContext::s_dwTlsIndex);
        if ( !v95 )
        {
          v106 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
          if ( !v106 || (v107 = CThreadContext::CThreadContext(v106), (v95 = v107) == 0LL) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
            ModuleFailFastForHRESULT(-2147024882, retaddr);
          }
          TlsSetValue(CThreadContext::s_dwTlsIndex, v107);
        }
        if ( *((_DWORD *)v95 + 13) < *((_DWORD *)v95 + 12) )
        {
          *v86 = v95[7];
          ++*((_DWORD *)v95 + 13);
          v95[7] = v86;
        }
        else
        {
          v96 = GetProcessHeap();
          HeapFree(v96, 0, v86);
        }
      }
      else
      {
        v87((CRectanglesShape *)v120, 1u);
      }
    }
LABEL_30:
    v5 = 0LL;
LABEL_31:
    v39 = v142;
    v40 = v141;
    v139 = &CRectanglesShape::`vftable';
    v41 = ((char *)v142 - v141) >> 4;
    if ( v41 )
    {
      v39 = &v142[-2 * v41];
      v142 = v39;
    }
    if ( v145 )
    {
      v42 = *(void (**)(void))(*(_QWORD *)v145 + 16LL);
      if ( (char *)v42 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v145);
      else
        v42();
      v39 = v142;
      v5 = 0LL;
      v40 = v141;
      v145 = 0LL;
    }
    v43 = ((char *)v39 - v40) >> 4;
    if ( v43 )
      v142 = &v39[-2 * v43];
    v141 = 0LL;
    if ( v40 == (char *)&v144 )
      v40 = 0LL;
    if ( v40 )
    {
      v59 = GetProcessHeap();
      HeapFree(v59, 0, v40);
      v5 = 0LL;
    }
    v44 = v140;
    if ( v140 )
    {
      v140 = 0LL;
      v45 = *(void (**)(void))(*(_QWORD *)v44 + 16LL);
      if ( (char *)v45 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
        CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v44);
      else
        v45();
      v5 = 0LL;
    }
    v9 = (unsigned int)v119;
    v7 = v121;
    goto LABEL_48;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x6Au, 0LL);
  std::unique_ptr<CShape>::~unique_ptr<CShape>(&v120);
LABEL_150:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v139);
  v47 = (void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))lpMem;
LABEL_50:
  if ( v47 )
  {
    v48 = **v47;
    if ( v48 == CRectanglesShape::`scalar deleting destructor' )
    {
      *v47 = (void *(__fastcall **)(CRectanglesShape *__hidden, unsigned int))&CRectanglesShape::`vftable';
      v49 = ((char *)v47[3] - (char *)v47[2]) >> 4;
      if ( v49 )
        v47[3] -= 2 * v49;
      v50 = (CResource *)v47[7];
      if ( v50 )
      {
        v51 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v50 + 16LL);
        if ( v51 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v50);
        else
          ((void (__fastcall *)(CResource *, void *(__fastcall *)(CRectanglesShape *__hidden, unsigned int), __int64, __int64))v51)(
            v50,
            CRectanglesShape::`scalar deleting destructor',
            v9,
            v7);
        v47[7] = 0LL;
      }
      v52 = ((char *)v47[3] - (char *)v47[2]) >> 4;
      if ( v52 )
        v47[3] -= 2 * v52;
      v53 = (void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v47[2];
      v47[2] = 0LL;
      if ( v53 == v47 + 5 )
        v53 = 0LL;
      if ( v53 )
      {
        v97 = GetProcessHeap();
        HeapFree(v97, 0, v53);
      }
      v54 = (CPathData *)v47[1];
      if ( v54 )
      {
        v47[1] = 0LL;
        v55 = *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v54 + 16LL);
        if ( v55 == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v54);
        else
          ((void (__fastcall *)(CPathData *, __int64 (__fastcall *)(CPathData *), __int64, __int64))v55)(
            v54,
            CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release,
            v9,
            v7);
      }
      v56 = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !v56 )
      {
        v103 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
        if ( !v103 || (v104 = CThreadContext::CThreadContext(v103), (v56 = v104) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v104);
      }
      if ( *((_DWORD *)v56 + 13) < *((_DWORD *)v56 + 12) )
      {
        *v47 = (void *(__fastcall **)(CRectanglesShape *__hidden, unsigned int))v56[7];
        ++*((_DWORD *)v56 + 13);
        v56[7] = v47;
      }
      else
      {
        v57 = GetProcessHeap();
        HeapFree(v57, 0, v47);
      }
    }
    else
    {
      ((void (__fastcall *)(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int), __int64, __int64, __int64))v48)(
        v47,
        1LL,
        v9,
        v7);
    }
  }
  return (unsigned int)v27;
}
