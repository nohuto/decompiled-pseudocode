/*
 * XREFs of ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801F9568
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18010BB38 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180016DF0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x180160CF8 (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x1801FA044 (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x18029790C (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z.c)
 *     ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x1802979E8 (-PlaneVectorIntersection@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPolygon::CompareAndSplit(
        __m128 *this,
        struct CPolygon *a2,
        enum D2DVectorHelper::Relation *a3,
        struct CPolygon **a4,
        struct CPolygon **a5)
{
  _BYTE *v5; // r14
  unsigned int v6; // r15d
  int v9; // esi
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int v12; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  bool v15; // al
  struct Windows::Foundation::Numerics::float4x4 *v16; // r8
  bool v17; // al
  unsigned int v18; // edx
  unsigned int v19; // r9d
  __m128 v20; // xmm0
  unsigned int v21; // r10d
  __int64 v22; // r8
  int v23; // edx
  float v24; // xmm9_4
  float v25; // xmm10_4
  __m128 v26; // xmm8
  float v27; // xmm11_4
  struct D2D_VECTOR_4F v28; // xmm3
  int v29; // ebx
  __m128 v30; // xmm4
  int v31; // r9d
  float v32; // xmm5_4
  int v33; // edx
  float v34; // xmm3_4
  int v35; // r12d
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  struct D2D_VECTOR_4F v39; // xmm6
  float v40; // xmm3_4
  int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // r8d
  int v44; // ebx
  __int64 v45; // rcx
  __int64 v46; // rdx
  int v47; // eax
  int v49; // ebx
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // edx
  __int64 v53; // rax
  __int64 v54; // rcx
  unsigned int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rcx
  unsigned int v58; // r10d
  __m128i v59; // xmm0
  __int64 v60; // rcx
  int v61; // ebx
  unsigned int v62; // r8d
  __int64 v63; // rcx
  __int64 v64; // rdx
  int v65; // ebx
  unsigned int v66; // eax
  unsigned int v67; // r10d
  __m128i v68; // xmm0
  __int64 v69; // rcx
  int v70; // ebx
  unsigned int v71; // r8d
  __int64 v72; // rcx
  __int64 v73; // rdx
  unsigned int v74; // r8d
  __int64 v75; // rcx
  __int64 v76; // rdx
  int v77; // ebx
  unsigned int v78; // eax
  unsigned int v79; // eax
  int v80; // ebx
  __int64 v81; // rax
  unsigned int v82; // eax
  int v83; // ebx
  unsigned int v84; // eax
  unsigned int v85; // eax
  unsigned int v86; // eax
  unsigned int v87; // eax
  unsigned int v88; // eax
  unsigned int v89; // eax
  struct D2D_VECTOR_4F *v90; // [rsp+28h] [rbp-E0h]
  unsigned int v91; // [rsp+30h] [rbp-D8h]
  int v92; // [rsp+38h] [rbp-D0h]
  int v93; // [rsp+3Ch] [rbp-CCh]
  int v94; // [rsp+40h] [rbp-C8h]
  int v95; // [rsp+44h] [rbp-C4h]
  int v96; // [rsp+48h] [rbp-C0h]
  int v97; // [rsp+4Ch] [rbp-BCh]
  struct CPolygon *v99; // [rsp+58h] [rbp-B0h] BYREF
  struct CPolygon *v100; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v101; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v102; // [rsp+78h] [rbp-90h]
  __int128 v103; // [rsp+88h] [rbp-80h]
  __int128 v104; // [rsp+98h] [rbp-70h]
  int v105; // [rsp+A8h] [rbp-60h]
  struct D2D_VECTOR_4F v106; // [rsp+B8h] [rbp-50h] BYREF
  int v107; // [rsp+C8h] [rbp-40h]
  struct CPolygon **v108; // [rsp+D0h] [rbp-38h]
  struct CPolygon **v109; // [rsp+D8h] [rbp-30h]
  struct D2D_VECTOR_4F v110; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v111; // [rsp+F8h] [rbp-10h]
  __int128 v112; // [rsp+108h] [rbp+0h]
  __int128 v113; // [rsp+118h] [rbp+10h]
  int v114; // [rsp+128h] [rbp+20h]
  __int128 v115; // [rsp+138h] [rbp+30h] BYREF
  __int128 v116; // [rsp+148h] [rbp+40h]
  __int128 v117; // [rsp+158h] [rbp+50h]
  __int128 v118; // [rsp+168h] [rbp+60h]
  int v119; // [rsp+178h] [rbp+70h]
  __m128 v120; // [rsp+180h] [rbp+78h] BYREF
  __m128i v121; // [rsp+190h] [rbp+88h] BYREF
  int v122; // [rsp+1A0h] [rbp+98h]
  struct D2D_VECTOR_4F v123; // [rsp+1A8h] [rbp+A0h] BYREF
  int v124; // [rsp+1B8h] [rbp+B0h]
  __m128 v125; // [rsp+1C0h] [rbp+B8h] BYREF
  struct D2D_VECTOR_4F v126; // [rsp+1D0h] [rbp+C8h] BYREF
  _QWORD v127[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  int v128; // [rsp+1F8h] [rbp+F0h]
  __int64 v129; // [rsp+1FCh] [rbp+F4h]
  _BYTE v130[128]; // [rsp+208h] [rbp+100h] BYREF
  _QWORD v131[2]; // [rsp+288h] [rbp+180h] BYREF
  int v132; // [rsp+298h] [rbp+190h]
  __int64 v133; // [rsp+29Ch] [rbp+194h]
  _BYTE v134[128]; // [rsp+2A8h] [rbp+1A0h] BYREF

  v108 = a4;
  *a4 = 0LL;
  v127[1] = v130;
  v5 = v130;
  v93 = 0;
  v6 = 6;
  v92 = 0;
  v123 = 0LL;
  v121 = 0LL;
  v131[0] = v134;
  v9 = 0;
  *a5 = 0LL;
  v10 = *((_OWORD *)a2 + 9);
  v131[1] = v134;
  v126 = 0LL;
  v124 = 0;
  v11 = *((_OWORD *)a2 + 10);
  v122 = 0;
  v12 = *((_DWORD *)a2 + 52);
  v101 = v10;
  v13 = *((_OWORD *)a2 + 11);
  v109 = a5;
  v102 = v11;
  v14 = *((_OWORD *)a2 + 12);
  v127[0] = v130;
  v103 = v13;
  v104 = v14;
  v128 = 6;
  v129 = 6LL;
  v132 = 6;
  v133 = 6LL;
  v105 = v12;
  v114 = 0;
  v99 = 0LL;
  v100 = 0LL;
  v15 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)&v101, (__m128 *)&v101, a3);
  LOWORD(v105) = v105 & 0xC003;
  if ( v15 )
  {
    CMILMatrix::Multiply(this + 9, (const struct CMILMatrix *)&v101, (struct CMILMatrix *)&v101);
    v6 = v129;
    v5 = (_BYTE *)v127[0];
  }
  else
  {
    v105 = 10666;
    v101 = _xmm;
    v102 = _xmm;
    v103 = _xmm;
    v104 = *(__int128 *)&_xmm.r;
  }
  v17 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)&v101, (__m128 *)&v101, v16);
  LOWORD(v105) = v105 & 0xC003;
  if ( v17 )
  {
    v115 = v101;
    v119 = v105;
    v116 = v102;
    v117 = v103;
    v118 = v104;
    CMILMatrix::Transpose((__m128 *)&v115);
    v6 = v129;
    v5 = (_BYTE *)v127[0];
    v111 = v116;
    v114 = v119;
    v110 = (struct D2D_VECTOR_4F)v115;
    v113 = v118;
    v112 = v117;
  }
  else
  {
    v110 = (struct D2D_VECTOR_4F)_xmm;
    v111 = _xmm;
    BYTE1(v114) = BYTE1(v114) & 0xC0 | 0x29;
    v112 = _xmm;
    v113 = *(__int128 *)&_xmm.r;
    LOBYTE(v114) = -86;
  }
  v20 = this[8];
  v120 = 0LL;
  v125 = v20;
  D3DXVec4TransformArray(
    (struct D2DVector4 *)&v120,
    v18,
    (const struct D2DVector4 *)&v125,
    v19,
    (const struct D2DMatrix *)&v110,
    v91);
  v22 = *((_QWORD *)a2 + 2);
  v23 = *((_DWORD *)a2 + 10);
  v24 = _mm_shuffle_ps(v120, v120, 85).m128_f32[0];
  v25 = _mm_shuffle_ps(v120, v120, 170).m128_f32[0];
  v26 = v120;
  v27 = _mm_shuffle_ps(v26, v26, 255).m128_f32[0];
  LODWORD(v126.x) = v120.m128_i32[0];
  v125 = v120;
  v126.y = v24;
  v28 = *(struct D2D_VECTOR_4F *)(v22 + 20LL * (unsigned int)(v23 - 2));
  v29 = *(_DWORD *)(v22 + 20LL * (unsigned int)(v23 - 2) + 16);
  v126.z = v25;
  v95 = v29;
  v30 = *(__m128 *)(v22 + 20LL * (unsigned int)(v23 - 1));
  v107 = v29;
  v126.w = v27;
  v106 = v28;
  v123 = (struct D2D_VECTOR_4F)v30;
  v31 = *(_DWORD *)(v22 + 20LL * (unsigned int)(v23 - 1) + 16);
  v124 = v31;
  v32 = (float)((float)((float)(v120.m128_f32[0] * v28.x)
                      + (float)(v24 * _mm_shuffle_ps((__m128)v28, (__m128)v28, 85).m128_f32[0]))
              + (float)(v25 * _mm_shuffle_ps((__m128)v28, (__m128)v28, 170).m128_f32[0]))
      + (float)(v27 * _mm_shuffle_ps((__m128)v28, (__m128)v28, 255).m128_f32[0]);
  if ( v32 > 0.00390625 )
  {
    v33 = 1;
  }
  else
  {
    v33 = 0;
    if ( v32 < -0.00390625 )
      v33 = 2;
  }
  v34 = (float)((float)((float)(v24 * _mm_shuffle_ps(v30, v30, 85).m128_f32[0])
                      + (float)(v120.m128_f32[0] * v30.m128_f32[0]))
              + (float)(v25 * _mm_shuffle_ps(v30, v30, 170).m128_f32[0]))
      + (float)(v27 * _mm_shuffle_ps(v30, v30, 255).m128_f32[0]);
  if ( v34 > 0.00390625 )
  {
    v35 = 1;
  }
  else
  {
    v35 = 0;
    if ( v34 < -0.00390625 )
      v35 = 2;
  }
  v36 = 0LL;
  while ( 1 )
  {
    v96 = v36;
    if ( (unsigned int)v36 >= *((_DWORD *)a2 + 10) )
      break;
    v37 = 5 * v36;
    v38 = *((_QWORD *)a2 + 2);
    v39 = *(struct D2D_VECTOR_4F *)(v38 + 4 * v37);
    v97 = *(_DWORD *)(v38 + 4 * v37 + 16);
    v40 = (float)((float)((float)(v24 * _mm_shuffle_ps((__m128)v39, (__m128)v39, 85).m128_f32[0])
                        + (float)(v26.m128_f32[0] * v39.x))
                + (float)(v25 * _mm_shuffle_ps((__m128)v39, (__m128)v39, 170).m128_f32[0]))
        + (float)(v27 * _mm_shuffle_ps((__m128)v39, (__m128)v39, 255).m128_f32[0]);
    if ( v40 > 0.00390625 )
    {
      v41 = 1;
    }
    else
    {
      v41 = 0;
      if ( v40 < -0.00390625 )
        v41 = 2;
    }
    v94 = v41;
    if ( v35 != 1 )
    {
      if ( v35 == 2 )
      {
        if ( v33 == 1 )
        {
          v68 = _mm_loadu_si128((const __m128i *)D2DVectorHelper::PlaneVectorIntersection(
                                                   (D2DVectorHelper *)&v120,
                                                   &v126,
                                                   &v106,
                                                   &v123,
                                                   v90));
          v122 = 0;
          v121 = v68;
          if ( v67 + 1 < v67 )
          {
            v70 = -2147024362;
            v86 = 181;
            v9 = -2147024362;
            goto LABEL_117;
          }
          if ( v67 + 1 > v6 )
          {
            v70 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v127, 20, 1, &v121);
            v9 = v70;
            if ( v70 < 0 )
            {
              v86 = 192;
LABEL_117:
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v70, v86, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v70, 0x124u, 0LL);
              goto LABEL_35;
            }
            v29 = v95;
          }
          else
          {
            v69 = 5LL * v67;
            *(__m128i *)&v5[4 * v69] = v68;
            *(_DWORD *)&v5[4 * v69 + 16] = v122;
            HIDWORD(v129) = v67 + 1;
          }
          v122 = v29;
          v71 = HIDWORD(v133) + 1;
          if ( (unsigned int)(HIDWORD(v133) + 1) < HIDWORD(v133) )
          {
            v77 = -2147024362;
            v78 = 181;
            v9 = -2147024362;
            goto LABEL_114;
          }
          if ( v71 > (unsigned int)v133 )
          {
            v77 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v131, 20, 1, &v121);
            v9 = v77;
            if ( v77 < 0 )
            {
              v78 = 192;
LABEL_114:
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v77, v78, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v77, 0x127u, 0LL);
              goto LABEL_35;
            }
          }
          else
          {
            v72 = v131[0];
            v73 = 5LL * HIDWORD(v133);
            *(__m128i *)(v131[0] + 4 * v73) = v121;
            *(_DWORD *)(v72 + 4 * v73 + 16) = v122;
            HIDWORD(v133) = v71;
          }
          v30 = (__m128)v123;
        }
        v74 = HIDWORD(v133) + 1;
        if ( (unsigned int)(HIDWORD(v133) + 1) < HIDWORD(v133) )
        {
          v44 = -2147024362;
          v79 = 181;
          v9 = -2147024362;
          goto LABEL_119;
        }
        v44 = 0;
        if ( v74 > (unsigned int)v133 )
        {
          v44 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v131, 20, 1, &v123);
          v9 = v44;
          if ( v44 < 0 )
          {
            v79 = 192;
LABEL_119:
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, v79, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, 0x12Du, 0LL);
            goto LABEL_35;
          }
        }
        else
        {
          v75 = v131[0];
          v76 = 5LL * HIDWORD(v133);
          *(__m128 *)(v131[0] + 4 * v76) = v30;
          *(_DWORD *)(v75 + 4 * v76 + 16) = v124;
          HIDWORD(v133) = v74;
        }
        ++v92;
        goto LABEL_27;
      }
      v121 = (__m128i)v30;
      if ( v33 == 1 )
      {
        if ( v41 == 2 )
        {
          v122 = 0;
          if ( v21 + 1 < v21 )
          {
            v80 = -2147024362;
            v87 = 181;
            v9 = -2147024362;
            goto LABEL_124;
          }
          if ( v21 + 1 > v6 )
          {
            v80 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v127, 20, 1, &v121);
            v9 = v80;
            if ( v80 < 0 )
            {
              v87 = 192;
LABEL_124:
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v80, v87, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v80, 0x13Fu, 0LL);
              goto LABEL_35;
            }
          }
          else
          {
            v56 = 5LL * v21;
            *(__m128 *)&v5[4 * v56] = v30;
            *(_DWORD *)&v5[4 * v56 + 16] = v122;
            HIDWORD(v129) = v21 + 1;
          }
          v122 = v124;
          v81 = HIDWORD(v133);
          v43 = HIDWORD(v133) + 1;
          if ( (unsigned int)(HIDWORD(v133) + 1) < HIDWORD(v133) )
          {
            v44 = -2147024362;
            v82 = 181;
            v9 = -2147024362;
            goto LABEL_121;
          }
          v44 = 0;
          if ( v43 > (unsigned int)v133 )
          {
            v44 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v131, 20, 1, &v121);
            v9 = v44;
            if ( v44 < 0 )
            {
              v82 = 192;
LABEL_121:
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, v82, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, 0x142u, 0LL);
              goto LABEL_35;
            }
            goto LABEL_27;
          }
          goto LABEL_101;
        }
      }
      else if ( v33 == 2 && v41 == 1 )
      {
        v122 = v31;
        if ( v21 + 1 < v21 )
        {
          v83 = -2147024362;
          v88 = 181;
          v9 = -2147024362;
          goto LABEL_129;
        }
        if ( v21 + 1 > v6 )
        {
          v83 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v127, 20, 1, &v121);
          v9 = v83;
          if ( v83 < 0 )
          {
            v88 = 192;
LABEL_129:
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v83, v88, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v83, 0x14Au, 0LL);
            goto LABEL_35;
          }
        }
        else
        {
          v57 = 5LL * v21;
          *(__m128 *)&v5[4 * v57] = v30;
          *(_DWORD *)&v5[4 * v57 + 16] = v122;
          HIDWORD(v129) = v21 + 1;
        }
        v81 = HIDWORD(v133);
        v122 = 0;
        v43 = HIDWORD(v133) + 1;
        if ( (unsigned int)(HIDWORD(v133) + 1) < HIDWORD(v133) )
        {
          v44 = -2147024362;
          v84 = 181;
          v9 = -2147024362;
LABEL_126:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, v84, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, 0x14Du, 0LL);
          goto LABEL_35;
        }
        v44 = 0;
        if ( v43 > (unsigned int)v133 )
        {
          v44 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v131, 20, 1, &v121);
          v9 = v44;
          if ( v44 < 0 )
          {
            v84 = 192;
            goto LABEL_126;
          }
          goto LABEL_27;
        }
LABEL_101:
        v45 = v131[0];
        v46 = 5 * v81;
        *(__m128i *)(v131[0] + 20 * v81) = v121;
        v47 = v122;
LABEL_26:
        *(_DWORD *)(v45 + 4 * v46 + 16) = v47;
        HIDWORD(v133) = v43;
LABEL_27:
        v21 = HIDWORD(v129);
        goto LABEL_28;
      }
      if ( v21 + 1 < v21 )
      {
        v49 = -2147024362;
        v50 = 181;
        v9 = -2147024362;
LABEL_37:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v49, v50, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v49, 0x151u, 0LL);
        goto LABEL_35;
      }
      if ( v21 + 1 > v6 )
      {
        v49 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v127, 20, 1, &v123);
        v9 = v49;
        if ( v49 < 0 )
        {
          v50 = 192;
          goto LABEL_37;
        }
      }
      else
      {
        v42 = 5LL * v21;
        *(__m128 *)&v5[4 * v42] = v30;
        *(_DWORD *)&v5[4 * v42 + 16] = v124;
        HIDWORD(v129) = v21 + 1;
      }
      v43 = HIDWORD(v133) + 1;
      if ( (unsigned int)(HIDWORD(v133) + 1) < HIDWORD(v133) )
      {
        v44 = -2147024362;
        v51 = 181;
        v9 = -2147024362;
LABEL_39:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, v51, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, 0x152u, 0LL);
        goto LABEL_35;
      }
      v44 = 0;
      if ( v43 > (unsigned int)v133 )
      {
        v44 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v131, 20, 1, &v123);
        v9 = v44;
        if ( v44 < 0 )
        {
          v51 = 192;
          goto LABEL_39;
        }
        goto LABEL_27;
      }
      v45 = v131[0];
      v46 = 5LL * HIDWORD(v133);
      *(struct D2D_VECTOR_4F *)(v131[0] + 20LL * HIDWORD(v133)) = v123;
      v47 = v124;
      goto LABEL_26;
    }
    if ( v33 == 2 )
    {
      v59 = _mm_loadu_si128((const __m128i *)D2DVectorHelper::PlaneVectorIntersection(
                                               (D2DVectorHelper *)&v125,
                                               &v126,
                                               &v106,
                                               &v123,
                                               v90));
      v122 = v29;
      v121 = v59;
      if ( v58 + 1 < v58 )
      {
        v61 = -2147024362;
        v9 = -2147024362;
        v85 = 181;
        goto LABEL_111;
      }
      if ( v58 + 1 > v6 )
      {
        v61 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v127, 20, 1, &v121);
        v9 = v61;
        if ( v61 < 0 )
        {
          v85 = 192;
LABEL_111:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v61, v85, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v61, 0x10Bu, 0LL);
          goto LABEL_35;
        }
      }
      else
      {
        v60 = 5LL * v58;
        *(__m128i *)&v5[4 * v60] = v59;
        *(_DWORD *)&v5[4 * v60 + 16] = v122;
        HIDWORD(v129) = v58 + 1;
      }
      v122 = 0;
      v62 = HIDWORD(v133) + 1;
      if ( (unsigned int)(HIDWORD(v133) + 1) < HIDWORD(v133) )
      {
        v65 = -2147024362;
        v66 = 181;
        v9 = -2147024362;
        goto LABEL_108;
      }
      if ( v62 > (unsigned int)v133 )
      {
        v65 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v131, 20, 1, &v121);
        v9 = v65;
        if ( v65 < 0 )
        {
          v66 = 192;
LABEL_108:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v65, v66, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v65, 0x10Eu, 0LL);
          goto LABEL_35;
        }
      }
      else
      {
        v63 = v131[0];
        v64 = 5LL * HIDWORD(v133);
        *(__m128i *)(v131[0] + 4 * v64) = v121;
        *(_DWORD *)(v63 + 4 * v64 + 16) = v122;
        HIDWORD(v133) = v62;
      }
      v30 = (__m128)v123;
      v5 = (_BYTE *)v127[0];
      v6 = v129;
      v21 = HIDWORD(v129);
    }
    v52 = v21 + 1;
    if ( v21 + 1 < v21 )
    {
      v44 = -2147024362;
      v55 = 181;
      v9 = -2147024362;
LABEL_49:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, v55, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, 0x113u, 0LL);
      goto LABEL_35;
    }
    v44 = 0;
    if ( v52 > v6 )
    {
      v44 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v127, 20, 1, &v123);
      v9 = v44;
      if ( v44 < 0 )
      {
        v55 = 192;
        goto LABEL_49;
      }
      v21 = HIDWORD(v129);
    }
    else
    {
      v53 = v21++;
      v54 = 5 * v53;
      *(__m128 *)&v5[4 * v54] = v30;
      *(_DWORD *)&v5[4 * v54 + 16] = v124;
      HIDWORD(v129) = v52;
    }
    ++v93;
LABEL_28:
    v9 = v44;
    v29 = v124;
    v33 = v35;
    v31 = v97;
    v30 = (__m128)v39;
    v35 = v94;
    v36 = (unsigned int)(v96 + 1);
    v6 = v129;
    v5 = (_BYTE *)v127[0];
    v106 = v123;
    v95 = v124;
    v107 = v124;
    v123 = v39;
    v124 = v97;
  }
  if ( !v93 )
  {
    *(_DWORD *)a3 = v92 != 0 ? 2 : 0;
    goto LABEL_35;
  }
  if ( v92 )
  {
    *(_DWORD *)a3 = 3;
    v9 = CPolygon::Create(v127, a2, &v99);
    if ( v9 < 0 )
    {
      v89 = 372;
    }
    else
    {
      v9 = CPolygon::Create(v131, a2, &v100);
      if ( v9 >= 0 )
      {
        *v108 = v99;
        *v109 = v100;
        goto LABEL_35;
      }
      v89 = 373;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v89, 0LL);
    if ( v99 )
      (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v99 + 8LL))(v99);
    if ( v100 )
      (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v100 + 8LL))(v100);
  }
  else
  {
    *(_DWORD *)a3 = 1;
  }
LABEL_35:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v131);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v127);
  return (unsigned int)v9;
}
