/*
 * XREFs of ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x180143A90
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18016D520 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801D4370 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18000F570 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?As3DHomogeneous@Matrix3x3@@QEBA?AVCMILMatrix@@XZ @ 0x18006B694 (-As3DHomogeneous@Matrix3x3@@QEBA-AVCMILMatrix@@XZ.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18006DC10 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180146340 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1801AEC30 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  LPVOID v26; // rbx
  __int64 v27; // r8
  int v28; // r14d
  __int64 v29; // rdx
  CRectanglesShape *(__fastcall ***v30)(CRectanglesShape *, char, __int64); // rbx
  CRectanglesShape *(__fastcall *v31)(CRectanglesShape *, char, __int64); // rax
  __int64 v32; // rax
  CCachedVisualImage *v33; // rcx
  void (*v34)(void); // rax
  __int64 v35; // rax
  CRectanglesShape *(__fastcall ***v36)(CRectanglesShape *, char, __int64); // rdi
  CPathData *v37; // rcx
  void (*v38)(void); // rax
  _QWORD *Value; // rdi
  HANDLE v40; // rax
  CCachedVisualImage **v41; // rdx
  char *v42; // rbx
  __int64 v43; // rax
  void (*v44)(void); // rax
  __int64 v45; // rax
  CPathData *v46; // rcx
  void (*v47)(void); // rax
  LPVOID v48; // rax
  CRectanglesShape *(__fastcall ***v49)(CRectanglesShape *, char, __int64); // rbx
  CRectanglesShape *(__fastcall *v50)(CRectanglesShape *, char, __int64); // rax
  __int64 v51; // rax
  CCachedVisualImage *v52; // rcx
  __int64 (__fastcall *v53)(CCachedVisualImage *, __int64, __int64); // rax
  __int64 v54; // rax
  CRectanglesShape *(__fastcall ***v55)(CRectanglesShape *, char, __int64); // rdi
  CPathData *v56; // rcx
  __int64 (__fastcall *v57)(CPathData *); // rax
  _QWORD *v58; // rdi
  HANDLE v59; // rax
  HANDLE v61; // rax
  HANDLE ProcessHeap; // rax
  int v63; // eax
  __int64 v64; // rdx
  CRectanglesShape *(__fastcall ***v65)(CRectanglesShape *, char, __int64); // rbx
  CRectanglesShape *(__fastcall *v66)(CRectanglesShape *, char, __int64); // rax
  __int64 v67; // rax
  CCachedVisualImage *v68; // rcx
  void (*v69)(void); // rax
  __int64 v70; // rax
  CRectanglesShape *(__fastcall ***v71)(CRectanglesShape *, char, __int64); // rdi
  CPathData *v72; // rcx
  void (*v73)(void); // rax
  _QWORD *v74; // rdi
  HANDLE v75; // rax
  CRectanglesShape *(__fastcall ***v76)(CRectanglesShape *, char, __int64); // rbx
  void *v77; // rax
  CRectanglesShape *(__fastcall *v78)(CRectanglesShape *, char, __int64); // rax
  __int64 v79; // rax
  CCachedVisualImage *v80; // rcx
  void (*v81)(void); // rax
  __int64 v82; // rax
  CRectanglesShape *(__fastcall ***v83)(CRectanglesShape *, char, __int64); // rdi
  CPathData *v84; // rcx
  void (*v85)(void); // rax
  _QWORD *v86; // rdi
  HANDLE v87; // rax
  _QWORD *v88; // rbx
  CRectanglesShape *(__fastcall *v89)(CRectanglesShape *, char, __int64); // rax
  __int64 v90; // rax
  CCachedVisualImage *v91; // rcx
  void (*v92)(void); // rax
  __int64 v93; // rax
  _QWORD *v94; // rdi
  CPathData *v95; // rcx
  void (*v96)(void); // rax
  _QWORD *v97; // rdi
  HANDLE v98; // rax
  HANDLE v99; // rax
  HANDLE v100; // rax
  HANDLE v101; // rax
  HANDLE v102; // rax
  CThreadContext *v103; // rax
  CThreadContext *v104; // rax
  CThreadContext *v105; // rax
  CThreadContext *v106; // rax
  int v107; // eax
  CThreadContext *v108; // rax
  CThreadContext *v109; // rax
  CThreadContext *v110; // rax
  CThreadContext *v111; // rax
  CThreadContext *v112; // rax
  CThreadContext *v113; // rax
  int v114; // xmm1_4
  int v115; // xmm0_4
  int v116; // xmm1_4
  int v117; // xmm0_4
  int v118; // xmm1_4
  __int64 v119; // rax
  LPVOID lpMem; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v121; // [rsp+40h] [rbp-C8h]
  LPVOID v122; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v123; // [rsp+50h] [rbp-B8h]
  __m128 v124; // [rsp+58h] [rbp-B0h] BYREF
  __m256i v125; // [rsp+68h] [rbp-A0h]
  _BYTE v126[20]; // [rsp+88h] [rbp-80h]
  LPVOID *v127; // [rsp+A0h] [rbp-68h] BYREF
  struct CShape *v128; // [rsp+A8h] [rbp-60h] BYREF
  int v129; // [rsp+B0h] [rbp-58h]
  int v130; // [rsp+B4h] [rbp-54h]
  int v131; // [rsp+B8h] [rbp-50h]
  int v132; // [rsp+BCh] [rbp-4Ch]
  int v133; // [rsp+C0h] [rbp-48h]
  LPVOID *p_lpMem; // [rsp+E8h] [rbp-20h]
  struct CShape *v135; // [rsp+F0h] [rbp-18h] BYREF
  char v136; // [rsp+F8h] [rbp-10h]
  __m128 v137; // [rsp+108h] [rbp+0h] BYREF
  __m256i v138; // [rsp+118h] [rbp+10h]
  __int128 v139; // [rsp+138h] [rbp+30h]
  int v140; // [rsp+148h] [rbp+40h]
  void **v141; // [rsp+158h] [rbp+50h] BYREF
  CPathData *v142; // [rsp+160h] [rbp+58h]
  char *v143; // [rsp+168h] [rbp+60h]
  CCachedVisualImage **v144; // [rsp+170h] [rbp+68h]
  CCachedVisualImage **v145; // [rsp+178h] [rbp+70h]
  __int128 v146; // [rsp+180h] [rbp+78h] BYREF
  CCachedVisualImage *v147; // [rsp+190h] [rbp+88h] BYREF
  __int128 v148; // [rsp+198h] [rbp+90h]
  void *retaddr; // [rsp+200h] [rbp+F8h]

  v4 = *a1;
  v5 = 0LL;
  v7 = a3;
  v123 = a3;
  lpMem = 0LL;
  v9 = a2;
  v10 = 0LL;
  LODWORD(v121) = a2;
  while ( 1 )
  {
    if ( v10 >= v4 )
    {
      v48 = lpMem;
      v49 = 0LL;
      lpMem = 0LL;
      v28 = 0;
      *a4 = v48;
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
  v141 = &CRectanglesShape::`vftable';
  v143 = (char *)&v146;
  v142 = 0LL;
  v144 = (CCachedVisualImage **)&v146;
  v145 = &v147;
  v147 = 0LL;
  v12 = *(_OWORD *)(v11 + 32);
  v144 = &v147;
  v140 = 0;
  v148 = v12;
  v146 = v12;
  if ( ((1 << v10) & (unsigned int)v9) != 0 )
  {
    v114 = *(_DWORD *)(v11 + 12);
    LODWORD(v127) = *(_DWORD *)(v11 + 8);
    v115 = *(_DWORD *)(v11 + 16);
    HIDWORD(v127) = v114;
    v116 = *(_DWORD *)(v11 + 20);
    HIDWORD(v128) = v115;
    v117 = *(_DWORD *)(v11 + 24);
    v129 = v116;
    v118 = *(_DWORD *)(v11 + 28);
    v131 = v117;
    v132 = v118;
    LODWORD(v128) = 0;
    v130 = 0;
    v133 = 1065353216;
    Matrix3x3::operator*(&v127, &v124, v7);
    v119 = Matrix3x3::As3DHomogeneous(&v124, (__int64)&v127);
    v137 = *(__m128 *)v119;
    v138 = *(__m256i *)(v119 + 16);
    v139 = *(_OWORD *)(v119 + 48);
    v21 = *(_DWORD *)(v119 + 64);
  }
  else
  {
    v13 = *(float *)(v11 + 8);
    v14 = *(float *)(v11 + 16);
    v15 = *(float *)(v11 + 20);
    v16 = *(float *)(v11 + 12);
    v17 = *(float *)(v11 + 24);
    v18 = *(float *)(v11 + 28);
    *(_OWORD *)&v125.m256i_u64[1] = 0LL;
    *(_QWORD *)&v126[12] = 0x28083F800000LL;
    v19 = (__m128)v124.m128_u64[0];
    *(_DWORD *)&v126[8] = 0;
    v125.m256i_i64[3] = 1065353216LL;
    v19.m128_f32[0] = v13;
    v20 = *(__m128 *)v125.m256i_i8;
    v21 = 10248;
    v20.m128_f32[0] = v14;
    v22 = _mm_shuffle_ps(v19, v19, 225);
    v23 = _mm_shuffle_ps(v20, v20, 225);
    v22.m128_f32[0] = v16;
    v23.m128_f32[0] = v15;
    *(__m128 *)v125.m256i_i8 = _mm_shuffle_ps(v23, v23, 225);
    v138 = v125;
    v24 = *(__m128 *)v126;
    v124 = _mm_shuffle_ps(v22, v22, 225);
    v24.m128_f32[0] = v17;
    v137 = v124;
    v25 = _mm_shuffle_ps(v24, v24, 225);
    v25.m128_f32[0] = v18;
    *(__m128 *)v126 = _mm_shuffle_ps(v25, v25, 225);
    v139 = *(_OWORD *)v126;
  }
  v26 = lpMem;
  v140 = v21;
  if ( !lpMem )
  {
    v135 = v5;
    p_lpMem = &lpMem;
    v136 = 1;
    v28 = CShape::CopyShape((CShape *)&v141, (const struct CMILMatrix *)&v137, &v135);
    if ( v136 )
    {
      v29 = (__int64)p_lpMem;
      v30 = (CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))*p_lpMem;
      *p_lpMem = v135;
      if ( v30 )
      {
        v31 = **v30;
        if ( v31 == CRectanglesShape::`scalar deleting destructor' )
        {
          *v30 = (CRectanglesShape *(__fastcall **)(CRectanglesShape *, char, __int64))&CRectanglesShape::`vftable';
          v32 = ((char *)v30[3] - (char *)v30[2]) >> 4;
          if ( v32 )
            v30[3] -= 2 * v32;
          v33 = (CCachedVisualImage *)v30[7];
          if ( v33 )
          {
            v34 = *(void (**)(void))(*(_QWORD *)v33 + 16LL);
            if ( (char *)v34 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
              CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v33, v29, v27);
            else
              v34();
            v30[7] = 0LL;
          }
          v35 = ((char *)v30[3] - (char *)v30[2]) >> 4;
          if ( v35 )
            v30[3] -= 2 * v35;
          v36 = (CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))v30[2];
          v30[2] = 0LL;
          if ( v36 == v30 + 5 )
            v36 = 0LL;
          if ( v36 )
          {
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, v36);
          }
          v37 = (CPathData *)v30[1];
          if ( v37 )
          {
            v30[1] = 0LL;
            v38 = *(void (**)(void))(*(_QWORD *)v37 + 16LL);
            if ( (char *)v38 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
              CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v37);
            else
              v38();
          }
          Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
          if ( !Value )
          {
            v103 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
            if ( !v103 || (v104 = CThreadContext::CThreadContext(v103), (Value = v104) == 0LL) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
              ModuleFailFastForHRESULT(-2147024882, retaddr);
            }
            TlsSetValue(CThreadContext::s_dwTlsIndex, v104);
          }
          if ( *((_DWORD *)Value + 13) < *((_DWORD *)Value + 12) )
          {
            *v30 = (CRectanglesShape *(__fastcall **)(CRectanglesShape *, char, __int64))Value[7];
            ++*((_DWORD *)Value + 13);
            Value[7] = v30;
          }
          else
          {
            v40 = GetProcessHeap();
            HeapFree(v40, 0, v30);
          }
        }
        else
        {
          ((void (__fastcall *)(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64), __int64))v31)(
            v30,
            1LL);
        }
      }
    }
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x5Fu, 0LL);
      goto LABEL_150;
    }
    goto LABEL_30;
  }
  v122 = v5;
  v127 = &v122;
  v128 = v5;
  LOBYTE(v129) = 1;
  v63 = CShape::TryOptimizedCombinePaths((CShape *)lpMem, 0LL, &v141, (unsigned __int64)&v137, 1, &v128);
  v28 = v63;
  if ( v63 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v63, 0x1C8u, 0LL);
  }
  else if ( !v128 )
  {
    v107 = CShape::D2DCombine(v26, v64, &v141, &v137, 1, &v128);
    v28 = v107;
    if ( v107 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v107, 0x1D3u, 0LL);
  }
  if ( (_BYTE)v129 )
  {
    v65 = (CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))*v127;
    *v127 = v128;
    if ( v65 )
    {
      v66 = **v65;
      if ( v66 == CRectanglesShape::`scalar deleting destructor' )
      {
        *v65 = (CRectanglesShape *(__fastcall **)(CRectanglesShape *, char, __int64))&CRectanglesShape::`vftable';
        v67 = ((char *)v65[3] - (char *)v65[2]) >> 4;
        if ( v67 )
          v65[3] -= 2 * v67;
        v68 = (CCachedVisualImage *)v65[7];
        if ( v68 )
        {
          v69 = *(void (**)(void))(*(_QWORD *)v68 + 16LL);
          if ( (char *)v69 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
            CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
              v68,
              (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
              v27);
          else
            v69();
          v65[7] = 0LL;
        }
        v70 = ((char *)v65[3] - (char *)v65[2]) >> 4;
        if ( v70 )
          v65[3] -= 2 * v70;
        v71 = (CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))v65[2];
        v65[2] = 0LL;
        if ( v71 == v65 + 5 )
          v71 = 0LL;
        if ( v71 )
        {
          v102 = GetProcessHeap();
          HeapFree(v102, 0, v71);
        }
        v72 = (CPathData *)v65[1];
        if ( v72 )
        {
          v65[1] = 0LL;
          v73 = *(void (**)(void))(*(_QWORD *)v72 + 16LL);
          if ( (char *)v73 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v72);
          else
            v73();
        }
        v74 = TlsGetValue(CThreadContext::s_dwTlsIndex);
        if ( !v74 )
        {
          v112 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
          if ( !v112 || (v113 = CThreadContext::CThreadContext(v112), (v74 = v113) == 0LL) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
            ModuleFailFastForHRESULT(-2147024882, retaddr);
          }
          TlsSetValue(CThreadContext::s_dwTlsIndex, v113);
        }
        if ( *((_DWORD *)v74 + 13) < *((_DWORD *)v74 + 12) )
        {
          *v65 = (CRectanglesShape *(__fastcall **)(CRectanglesShape *, char, __int64))v74[7];
          ++*((_DWORD *)v74 + 13);
          v74[7] = v65;
        }
        else
        {
          v75 = GetProcessHeap();
          HeapFree(v75, 0, v65);
        }
      }
      else
      {
        ((void (__fastcall *)(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64), __int64))v66)(
          v65,
          1LL);
      }
    }
  }
  if ( v28 >= 0 )
  {
    v76 = (CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))lpMem;
    v5 = 0LL;
    v77 = v122;
    v122 = 0LL;
    lpMem = v77;
    if ( !v76 )
      goto LABEL_31;
    v78 = **v76;
    if ( v78 == CRectanglesShape::`scalar deleting destructor' )
    {
      *v76 = (CRectanglesShape *(__fastcall **)(CRectanglesShape *, char, __int64))&CRectanglesShape::`vftable';
      v79 = ((char *)v76[3] - (char *)v76[2]) >> 4;
      if ( v79 )
        v76[3] -= 2 * v79;
      v80 = (CCachedVisualImage *)v76[7];
      if ( v80 )
      {
        v81 = *(void (**)(void))(*(_QWORD *)v80 + 16LL);
        if ( (char *)v81 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
            v80,
            (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
            v27);
        else
          v81();
        v76[7] = 0LL;
      }
      v82 = ((char *)v76[3] - (char *)v76[2]) >> 4;
      if ( v82 )
        v76[3] -= 2 * v82;
      v83 = (CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))v76[2];
      v76[2] = 0LL;
      if ( v83 == v76 + 5 )
        v83 = 0LL;
      if ( v83 )
      {
        v101 = GetProcessHeap();
        HeapFree(v101, 0, v83);
      }
      v84 = (CPathData *)v76[1];
      if ( v84 )
      {
        v76[1] = 0LL;
        v85 = *(void (**)(void))(*(_QWORD *)v84 + 16LL);
        if ( (char *)v85 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v84);
        else
          v85();
      }
      v86 = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !v86 )
      {
        v110 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
        if ( !v110 || (v111 = CThreadContext::CThreadContext(v110), (v86 = v111) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v111);
      }
      if ( *((_DWORD *)v86 + 13) < *((_DWORD *)v86 + 12) )
      {
        *v76 = (CRectanglesShape *(__fastcall **)(CRectanglesShape *, char, __int64))v86[7];
        ++*((_DWORD *)v86 + 13);
        v86[7] = v76;
      }
      else
      {
        v87 = GetProcessHeap();
        HeapFree(v87, 0, v76);
      }
    }
    else
    {
      ((void (__fastcall *)(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64), __int64))v78)(
        v76,
        1LL);
    }
    v88 = v122;
    if ( v122 )
    {
      v89 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))v122;
      if ( v89 == CRectanglesShape::`scalar deleting destructor' )
      {
        *(_QWORD *)v122 = &CRectanglesShape::`vftable';
        v90 = (__int64)(v88[3] - v88[2]) >> 4;
        if ( v90 )
          v88[3] -= 16 * v90;
        v91 = (CCachedVisualImage *)v88[7];
        if ( v91 )
        {
          v92 = *(void (**)(void))(*(_QWORD *)v91 + 16LL);
          if ( (char *)v92 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
            CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
              v91,
              (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
              v27);
          else
            v92();
          v88[7] = 0LL;
        }
        v93 = (__int64)(v88[3] - v88[2]) >> 4;
        if ( v93 )
          v88[3] -= 16 * v93;
        v94 = (_QWORD *)v88[2];
        v88[2] = 0LL;
        if ( v94 == v88 + 5 )
          v94 = 0LL;
        if ( v94 )
        {
          v100 = GetProcessHeap();
          HeapFree(v100, 0, v94);
        }
        v95 = (CPathData *)v88[1];
        if ( v95 )
        {
          v88[1] = 0LL;
          v96 = *(void (**)(void))(*(_QWORD *)v95 + 16LL);
          if ( (char *)v96 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v95);
          else
            v96();
        }
        v97 = TlsGetValue(CThreadContext::s_dwTlsIndex);
        if ( !v97 )
        {
          v108 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
          if ( !v108 || (v109 = CThreadContext::CThreadContext(v108), (v97 = v109) == 0LL) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
            ModuleFailFastForHRESULT(-2147024882, retaddr);
          }
          TlsSetValue(CThreadContext::s_dwTlsIndex, v109);
        }
        if ( *((_DWORD *)v97 + 13) < *((_DWORD *)v97 + 12) )
        {
          *v88 = v97[7];
          ++*((_DWORD *)v97 + 13);
          v97[7] = v88;
        }
        else
        {
          v98 = GetProcessHeap();
          HeapFree(v98, 0, v88);
        }
      }
      else
      {
        ((void (__fastcall *)(LPVOID, __int64))v89)(v122, 1LL);
      }
    }
LABEL_30:
    v5 = 0LL;
LABEL_31:
    v41 = v144;
    v42 = v143;
    v141 = &CRectanglesShape::`vftable';
    v43 = ((char *)v144 - v143) >> 4;
    if ( v43 )
    {
      v41 = &v144[-2 * v43];
      v144 = v41;
    }
    if ( v147 )
    {
      v44 = *(void (**)(void))(*(_QWORD *)v147 + 16LL);
      if ( (char *)v44 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
          v147,
          (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
          v27);
      else
        v44();
      v41 = v144;
      v5 = 0LL;
      v42 = v143;
      v147 = 0LL;
    }
    v45 = ((char *)v41 - v42) >> 4;
    if ( v45 )
      v144 = &v41[-2 * v45];
    v143 = 0LL;
    if ( v42 == (char *)&v146 )
      v42 = 0LL;
    if ( v42 )
    {
      v61 = GetProcessHeap();
      HeapFree(v61, 0, v42);
      v5 = 0LL;
    }
    v46 = v142;
    if ( v142 )
    {
      v142 = 0LL;
      v47 = *(void (**)(void))(*(_QWORD *)v46 + 16LL);
      if ( (char *)v47 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
        CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v46);
      else
        v47();
      v5 = 0LL;
    }
    v9 = (unsigned int)v121;
    v7 = v123;
    goto LABEL_48;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x6Au, 0LL);
  std::unique_ptr<CShape>::~unique_ptr<CShape>((CRectanglesShape **)&v122);
LABEL_150:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v141);
  v49 = (CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))lpMem;
LABEL_50:
  if ( v49 )
  {
    v50 = **v49;
    if ( v50 == CRectanglesShape::`scalar deleting destructor' )
    {
      *v49 = (CRectanglesShape *(__fastcall **)(CRectanglesShape *, char, __int64))&CRectanglesShape::`vftable';
      v51 = ((char *)v49[3] - (char *)v49[2]) >> 4;
      if ( v51 )
        v49[3] -= 2 * v51;
      v52 = (CCachedVisualImage *)v49[7];
      if ( v52 )
      {
        v53 = *(__int64 (__fastcall **)(CCachedVisualImage *, __int64, __int64))(*(_QWORD *)v52 + 16LL);
        if ( v53 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
            v52,
            (__int64)CRectanglesShape::`scalar deleting destructor',
            v9);
        else
          ((void (__fastcall *)(CCachedVisualImage *, CRectanglesShape *(__fastcall *)(CRectanglesShape *, char, __int64), __int64, __int64))v53)(
            v52,
            CRectanglesShape::`scalar deleting destructor',
            v9,
            v7);
        v49[7] = 0LL;
      }
      v54 = ((char *)v49[3] - (char *)v49[2]) >> 4;
      if ( v54 )
        v49[3] -= 2 * v54;
      v55 = (CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))v49[2];
      v49[2] = 0LL;
      if ( v55 == v49 + 5 )
        v55 = 0LL;
      if ( v55 )
      {
        v99 = GetProcessHeap();
        HeapFree(v99, 0, v55);
      }
      v56 = (CPathData *)v49[1];
      if ( v56 )
      {
        v49[1] = 0LL;
        v57 = *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v56 + 16LL);
        if ( v57 == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v56);
        else
          ((void (__fastcall *)(CPathData *, __int64 (__fastcall *)(CPathData *), __int64, __int64))v57)(
            v56,
            CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release,
            v9,
            v7);
      }
      v58 = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !v58 )
      {
        v105 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
        if ( !v105 || (v106 = CThreadContext::CThreadContext(v105), (v58 = v106) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v106);
      }
      if ( *((_DWORD *)v58 + 13) < *((_DWORD *)v58 + 12) )
      {
        *v49 = (CRectanglesShape *(__fastcall **)(CRectanglesShape *, char, __int64))v58[7];
        ++*((_DWORD *)v58 + 13);
        v58[7] = v49;
      }
      else
      {
        v59 = GetProcessHeap();
        HeapFree(v59, 0, v49);
      }
    }
    else
    {
      ((void (__fastcall *)(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64), __int64, __int64, __int64))v50)(
        v49,
        1LL,
        v9,
        v7);
    }
  }
  return (unsigned int)v28;
}
