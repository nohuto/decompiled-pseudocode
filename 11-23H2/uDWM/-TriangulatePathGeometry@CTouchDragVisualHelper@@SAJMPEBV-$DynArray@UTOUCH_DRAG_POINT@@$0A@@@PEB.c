/*
 * XREFs of ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@@Z @ 0x1800E7BF0
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800E7A08 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180016EF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _o_sqrtf_0 @ 0x18005D4E4 (_o_sqrtf_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z @ 0x18006D5E8 (-AddMultipleAndSet@-$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z @ 0x18006D68A (-AddMultipleAndSet@-$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTouchDragVisualHelper::TriangulatePathGeometry(
        float a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 *v6; // r10
  float v7; // xmm1_4
  unsigned int v8; // ebx
  float v9; // xmm13_4
  int v10; // edi
  int v11; // r15d
  int v12; // r12d
  unsigned int v13; // esi
  __int64 v14; // r13
  float v15; // xmm14_4
  float v16; // xmm15_4
  __int64 v17; // rax
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  int v25; // eax
  int v26; // r9d
  __int64 v27; // r8
  __int64 v28; // rdx
  float v29; // xmm4_4
  float v30; // xmm5_4
  float v31; // xmm6_4
  float v32; // xmm7_4
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm5_4
  float v36; // xmm4_4
  float v37; // xmm3_4
  float *v38; // rax
  __int64 v39; // rcx
  float v40; // xmm2_4
  unsigned int v41; // r15d
  int v42; // eax
  unsigned int v43; // r12d
  __int64 v44; // rdx
  __int64 v45; // rdi
  float v46; // xmm14_4
  float v47; // xmm9_4
  float v48; // xmm15_4
  float v49; // xmm7_4
  float v50; // xmm8_4
  float v51; // xmm10_4
  float v52; // xmm11_4
  float v53; // xmm12_4
  float v54; // xmm6_4
  float v55; // xmm8_4
  __int64 v56; // rax
  float v57; // xmm6_4
  float v58; // xmm11_4
  float v59; // xmm12_4
  __int64 v60; // rcx
  int v61; // ecx
  __int64 v62; // r12
  _DWORD *v63; // r9
  unsigned int v64; // eax
  unsigned int v65; // r8d
  int v66; // edi
  int v67; // eax
  int v68; // edx
  __int64 v69; // r12
  _DWORD *v70; // r9
  unsigned int v71; // eax
  unsigned int v72; // r8d
  int v73; // eax
  int v74; // r9d
  unsigned int v75; // eax
  int v76; // r9d
  int v77; // r9d
  unsigned int v78; // eax
  unsigned int v80; // [rsp+28h] [rbp-E0h]
  bool v81; // [rsp+38h] [rbp-D0h]
  char v82; // [rsp+39h] [rbp-CFh]
  int v83; // [rsp+3Ch] [rbp-CCh]
  unsigned int v84; // [rsp+40h] [rbp-C8h]
  int v85; // [rsp+44h] [rbp-C4h]
  int v86; // [rsp+48h] [rbp-C0h]
  float v87; // [rsp+48h] [rbp-C0h]
  __int64 v88; // [rsp+50h] [rbp-B8h]
  unsigned int v89; // [rsp+60h] [rbp-A8h]
  int v90; // [rsp+64h] [rbp-A4h]
  unsigned int v91; // [rsp+68h] [rbp-A0h]
  __int64 v93; // [rsp+70h] [rbp-98h]
  int *v94; // [rsp+88h] [rbp-80h]
  __int128 v95; // [rsp+90h] [rbp-78h] BYREF
  int v96; // [rsp+A0h] [rbp-68h]
  int v97; // [rsp+A4h] [rbp-64h]
  int v98; // [rsp+A8h] [rbp-60h]
  __int64 v99; // [rsp+B0h] [rbp-58h]
  __int64 *v100; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v101; // [rsp+C8h] [rbp-40h] BYREF
  float v102; // [rsp+D0h] [rbp-38h]
  __int64 v103; // [rsp+D8h] [rbp-30h]
  float v104; // [rsp+E0h] [rbp-28h]
  __int64 v105; // [rsp+E8h] [rbp-20h]
  float v106; // [rsp+F0h] [rbp-18h]
  __int64 v107; // [rsp+F8h] [rbp-10h]
  __int64 v108; // [rsp+108h] [rbp+0h]
  float v109; // [rsp+110h] [rbp+8h]
  float v110[4]; // [rsp+118h] [rbp+10h] BYREF
  double v111[2]; // [rsp+128h] [rbp+20h] BYREF
  float v112[6]; // [rsp+138h] [rbp+30h] BYREF
  _DWORD v113[6]; // [rsp+150h] [rbp+48h] BYREF
  _DWORD v114[6]; // [rsp+168h] [rbp+60h] BYREF
  double v115; // [rsp+180h] [rbp+78h] BYREF
  double v116; // [rsp+188h] [rbp+80h]
  double v117; // [rsp+190h] [rbp+88h]
  double v118; // [rsp+198h] [rbp+90h]

  v88 = a4;
  v94 = a3;
  v6 = (__int64 *)a2;
  v100 = (__int64 *)a2;
  v7 = a1;
  v8 = 0;
  v91 = *(_DWORD *)(a2 + 24);
  v9 = (float)(a3[3] - a3[1]) / (float)(int)(v91 - 1);
  v10 = -1;
  v83 = -1;
  v95 = 0LL;
  v96 = 0;
  v97 = 0;
  v11 = 0;
  v98 = 0;
  v12 = -1;
  v85 = -1;
  v13 = 0;
  if ( !v91 )
    goto LABEL_66;
  v14 = 0LL;
  v15 = FLOAT_1_1920929eN7;
  v16 = FLOAT_0_99999988;
  while ( 1 )
  {
    v90 = v12;
    v17 = *v6;
    v84 = *(_DWORD *)(a4 + 24);
    v18 = v7 * *(float *)(*v6 + v14 + 16);
    v19 = v7 * *(float *)(*v6 + v14 + 20);
    v20 = v7 * *(float *)(*v6 + v14 + 24);
    v21 = *(float *)(*v6 + v14 + 8);
    v22 = *(float *)(*v6 + v14 + 12);
    v112[0] = v18 + *(float *)(*v6 + v14 + 4);
    v112[1] = v21 + v19;
    v112[2] = v22 + v20;
    v23 = *(float *)(v17 + v14 + 8);
    v24 = *(float *)(v17 + v14 + 12);
    v112[3] = *(float *)(v17 + v14 + 4) - v18;
    v112[4] = v23 - v19;
    v112[5] = v24 - v20;
    v115 = (double)*a3;
    v116 = (float)((float)((float)(int)v13 * v9) + (float)a3[1]);
    v117 = (double)a3[2];
    v118 = v116;
    v25 = DynArray<MilPoint3F,0>::AddMultipleAndSet(a4, v112, 2u);
    v8 = v25;
    if ( v25 < 0 )
    {
      v80 = 236;
      goto LABEL_64;
    }
    v25 = DynArray<MilPoint2D,0>::AddMultipleAndSet(a5, &v115, 2u);
    v8 = v25;
    if ( v25 < 0 )
    {
      v80 = 237;
      goto LABEL_64;
    }
    if ( v13 )
    {
      v26 = v13 - 1;
      if ( v10 >= 0 )
        v26 = v10;
      v86 = v26;
      v27 = *(_QWORD *)v88;
      v107 = *(_QWORD *)(*(_QWORD *)v88 + 12LL * v84);
      v99 = *(_QWORD *)(v27 + 12LL * (v84 + 1));
      v82 = 0;
      v28 = v84 + 2 * (v26 - v13);
      v108 = *(_QWORD *)(v27 + 12 * v28);
      v109 = *(float *)(v27 + 12 * v28 + 8);
      v93 = *(_QWORD *)(v27 + 12LL * (unsigned int)(v28 + 1));
      v29 = *(float *)&v93 - *(float *)&v108;
      v30 = *((float *)&v93 + 1) - *((float *)&v108 + 1);
      v31 = *(float *)(v27 + 12LL * (unsigned int)(v28 + 1) + 8) - v109;
      v32 = (float)((float)(*(float *)&v93 - *(float *)&v108) * (float)(*((float *)&v99 + 1) - *((float *)&v107 + 1)))
          - (float)((float)(*((float *)&v93 + 1) - *((float *)&v108 + 1)) * (float)(*(float *)&v99 - *(float *)&v107));
      if ( COERCE_FLOAT(LODWORD(v32) & _xmm) <= v15 )
        break;
      v33 = (float)((float)((float)(*((float *)&v108 + 1) - *((float *)&v107 + 1))
                          * (float)(*(float *)&v99 - *(float *)&v107))
                  - (float)((float)(*(float *)&v108 - *(float *)&v107)
                          * (float)(*((float *)&v99 + 1) - *((float *)&v107 + 1))))
          / v32;
      v34 = (float)((float)((float)(*((float *)&v108 + 1) - *((float *)&v107 + 1)) * v29)
                  - (float)((float)(*(float *)&v108 - *(float *)&v107) * v30))
          / v32;
      if ( v33 <= v15 )
        break;
      if ( v16 <= v33 )
        break;
      if ( v34 <= v15 )
        break;
      if ( v16 <= v34 )
        break;
      v110[0] = (float)(v29 * v33) + *(float *)&v108;
      v110[1] = (float)(v30 * v33) + *((float *)&v108 + 1);
      v110[2] = (float)(v31 * v33) + v109;
      DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)&v95, v110, 1u);
      v82 = 1;
      v10 = v86;
      v83 = v86;
      v11 = v98;
      if ( v13 == v91 - 1 )
        break;
    }
LABEL_51:
    ++v13;
    v14 += 28LL;
    if ( v13 >= v91 )
      goto LABEL_66;
    v7 = a1;
    v10 = v83;
    v12 = v85;
    a3 = v94;
    a4 = v88;
    v6 = v100;
  }
  if ( v10 < 0 )
  {
LABEL_38:
    if ( !v82 )
    {
      if ( v12 > 0 )
        v12 = -1;
      v85 = v12;
      v68 = v90;
      if ( v90 <= 0 )
        v68 = v84 - 2;
      if ( v10 >= 0 )
      {
        v85 = v84;
        v83 = -1;
      }
      v114[0] = v84;
      v114[1] = v68;
      v114[2] = v68 + 1;
      v114[3] = v68 + 1;
      v114[4] = v84 + 1;
      v114[5] = v84;
      v69 = 0LL;
      while ( 1 )
      {
        v70 = &v114[v69];
        v71 = *(_DWORD *)(a6 + 24);
        v72 = v71 + 1;
        if ( v71 + 1 < v71 )
          break;
        v66 = 0;
        if ( v72 > *(_DWORD *)(a6 + 20) )
        {
          v73 = DynArrayImpl<0>::AddMultipleAndSet(a6, 4, 1, v70);
          v66 = v73;
          v8 = v73;
          if ( v73 < 0 )
          {
            v77 = v73;
            v78 = 192;
            goto LABEL_61;
          }
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)a6 + 4LL * v71) = *v70;
          *(_DWORD *)(a6 + 24) = v72;
        }
        v8 = v66;
        v69 = (unsigned int)(v69 + 1);
        if ( (unsigned int)v69 >= 6 )
          goto LABEL_51;
      }
      v66 = -2147024362;
      v8 = -2147024362;
      v77 = -2147024362;
      v78 = 181;
LABEL_61:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v77, v78);
      v80 = 378;
LABEL_56:
      v76 = v66;
      goto LABEL_65;
    }
    goto LABEL_51;
  }
  v101 = 0LL;
  v102 = 0.0;
  v81 = 0;
  v35 = 0.0;
  v36 = 0.0;
  v37 = 0.0;
  if ( v11 )
  {
    v38 = (float *)(v95 + 8);
    v39 = (unsigned int)v11;
    v36 = *((float *)&v101 + 1);
    LODWORD(v35) = v101;
    do
    {
      v35 = v35 + *(v38 - 2);
      v36 = v36 + *(v38 - 1);
      v37 = v37 + *v38;
      v101 = __PAIR64__(LODWORD(v36), LODWORD(v35));
      v102 = v37;
      v38 += 3;
      --v39;
    }
    while ( v39 );
  }
  v40 = 1.0 / (float)v11;
  *(float *)&v101 = v40 * v35;
  *((float *)&v101 + 1) = v40 * v36;
  v102 = v40 * v37;
  v98 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v95, 0xCu);
  v41 = v10;
  if ( v10 >= v13 )
  {
LABEL_37:
    v11 = v98;
    goto LABEL_38;
  }
  v42 = 2 * v13;
  v43 = v84;
  while ( 1 )
  {
    v44 = v43 + 2 * v41 - v42;
    v89 = v43 + 2 * v41 - v42;
    v45 = *(_QWORD *)v88;
    v105 = *(_QWORD *)(*(_QWORD *)v88 + 12 * v44);
    v106 = *(float *)(v45 + 12 * v44 + 8);
    v103 = *(_QWORD *)(v45 + 12LL * (unsigned int)(v44 + 1));
    v104 = *(float *)(v45 + 12LL * (unsigned int)(v44 + 1) + 8);
    v46 = *(float *)&v105;
    v47 = *(float *)&v101 - *(float *)&v105;
    v48 = *((float *)&v105 + 1);
    v49 = *((float *)&v101 + 1) - *((float *)&v105 + 1);
    v50 = v102 - v106;
    v51 = *(float *)&v101 - *(float *)&v103;
    v52 = *((float *)&v101 + 1) - *((float *)&v103 + 1);
    v53 = v102 - v104;
    v87 = o_sqrtf_0(
            (float)((float)((float)(*((float *)&v103 + 1) - *((float *)&v105 + 1))
                          * (float)(*((float *)&v103 + 1) - *((float *)&v105 + 1)))
                  + (float)((float)(*(float *)&v103 - *(float *)&v105) * (float)(*(float *)&v103 - *(float *)&v105)))
          + (float)((float)(v104 - v106) * (float)(v104 - v106)));
    v54 = v87 / o_sqrtf_0((float)((float)(v49 * v49) + (float)(v47 * v47)) + (float)(v50 * v50));
    if ( v41 == v83 )
      v81 = v54 <= 2.0;
    if ( v81 )
    {
      v55 = (float)(v50 * v54) + v106;
      v56 = 3LL * (v43 + 2 * (v41 - v13) + 1);
      *(float *)(v45 + 4 * v56) = (float)(v47 * v54) + v46;
      *(float *)(v45 + 4 * v56 + 4) = (float)(v49 * v54) + v48;
      *(float *)(v45 + 4 * v56 + 8) = v55;
    }
    else
    {
      v57 = v87 / o_sqrtf_0((float)((float)(v52 * v52) + (float)(v51 * v51)) + (float)(v53 * v53));
      v58 = (float)(v52 * v57) + *((float *)&v103 + 1);
      v59 = (float)(v53 * v57) + v104;
      v60 = 3LL * (v43 + 2 * (v41 - v13));
      *(float *)(v45 + 4 * v60) = (float)(v51 * v57) + *(float *)&v103;
      *(float *)(v45 + 4 * v60 + 4) = v58;
      *(float *)(v45 + 4 * v60 + 8) = v59;
      v54 = v57 / (float)(v57 - 1.0);
    }
    if ( v41 < v13 - 1 )
      break;
LABEL_35:
    ++v41;
    v42 = 2 * v13;
    if ( v41 >= v13 )
    {
      v15 = FLOAT_1_1920929eN7;
      v16 = FLOAT_0_99999988;
      v10 = v83;
      v12 = v85;
      goto LABEL_37;
    }
  }
  v25 = DynArray<MilPoint3F,0>::AddMultipleAndSet(v88, &v101, 1u);
  v8 = v25;
  if ( v25 < 0 )
  {
    v80 = 335;
  }
  else
  {
    v111[0] = (float)((float)((float)(v94[2] - *v94) / v54) + (float)*v94);
    v111[1] = (float)((float)((float)((float)(int)v41 * v9) + (float)v94[1]) + (float)(v9 * 0.5));
    v25 = DynArray<MilPoint2D,0>::AddMultipleAndSet(a5, v111, 1u);
    v8 = v25;
    if ( v25 >= 0 )
    {
      v61 = *(_DWORD *)(v88 + 24) - 1;
      v113[0] = v89;
      v113[1] = v89 + 2;
      v113[2] = v61;
      v113[3] = v89 + 1;
      v113[4] = v89 + 3;
      v113[5] = v61;
      v62 = 0LL;
      while ( 1 )
      {
        v63 = &v113[v62];
        v64 = *(_DWORD *)(a6 + 24);
        v65 = v64 + 1;
        if ( v64 + 1 < v64 )
          break;
        v66 = 0;
        if ( v65 > *(_DWORD *)(a6 + 20) )
        {
          v67 = DynArrayImpl<0>::AddMultipleAndSet(a6, 4, 1, v63);
          v66 = v67;
          v8 = v67;
          if ( v67 < 0 )
          {
            v74 = v67;
            v75 = 192;
            goto LABEL_55;
          }
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)a6 + 4LL * v64) = *v63;
          *(_DWORD *)(a6 + 24) = v65;
        }
        v8 = v66;
        v62 = (unsigned int)(v62 + 1);
        if ( (unsigned int)v62 >= 6 )
        {
          v43 = v84;
          goto LABEL_35;
        }
      }
      v66 = -2147024362;
      v8 = -2147024362;
      v74 = -2147024362;
      v75 = 181;
LABEL_55:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v74, v75);
      v80 = 350;
      goto LABEL_56;
    }
    v80 = 338;
  }
LABEL_64:
  v76 = v25;
LABEL_65:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v76, v80);
LABEL_66:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v95);
  return v8;
}
