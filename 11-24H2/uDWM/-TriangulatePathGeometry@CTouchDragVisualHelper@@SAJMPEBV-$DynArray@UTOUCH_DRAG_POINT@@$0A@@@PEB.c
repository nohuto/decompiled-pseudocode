/*
 * XREFs of ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UD2D_POINT_3F@@$0A@@@PEAV?$DynArray@UD2D_POINT_2F@@$0A@@@PEAV?$DynArray@I$0A@@@@Z @ 0x180010C10
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x180010A00 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ?Length@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_3F@@@Z @ 0x1800105D4 (-Length@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_3F@@@Z.c)
 *     ?Multiply@CTouchDragVisualHelper@@SA?AUD2D_POINT_3F@@PEBU2@M@Z @ 0x180010604 (-Multiply@CTouchDragVisualHelper@@SA-AUD2D_POINT_3F@@PEBU2@M@Z.c)
 *     ?Add@CTouchDragVisualHelper@@SA?AUD2D_POINT_3F@@PEBU2@PEBUD2D_VECTOR_3F@@@Z @ 0x180010634 (-Add@CTouchDragVisualHelper@@SA-AUD2D_POINT_3F@@PEBU2@PEBUD2D_VECTOR_3F@@@Z.c)
 *     ?Subtract@CTouchDragVisualHelper@@SA?AUD2D_VECTOR_3F@@PEBUD2D_POINT_3F@@0@Z @ 0x180010834 (-Subtract@CTouchDragVisualHelper@@SA-AUD2D_VECTOR_3F@@PEBUD2D_POINT_3F@@0@Z.c)
 *     ?CrossProductZ@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_3F@@0@Z @ 0x18001172C (-CrossProductZ@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_3F@@0@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UD2D_POINT_3F@@$0A@@@QEAAJPEFBUD2D_POINT_3F@@I@Z @ 0x180011B70 (-AddMultipleAndSet@-$DynArray@UD2D_POINT_3F@@$0A@@@QEAAJPEFBUD2D_POINT_3F@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UD2D_POINT_2F@@$0A@@@QEAAJPEFBUD2D_POINT_2F@@I@Z @ 0x180011C1C (-AddMultipleAndSet@-$DynArray@UD2D_POINT_2F@@$0A@@@QEAAJPEFBUD2D_POINT_2F@@I@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180025870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTouchDragVisualHelper::TriangulatePathGeometry(
        float a1,
        __int64 a2,
        int *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 *v6; // r15
  _QWORD *v7; // rbx
  unsigned int v9; // edi
  float v10; // xmm8_4
  int v11; // r13d
  unsigned int v12; // r11d
  unsigned int v13; // esi
  __int64 v14; // r12
  float *v15; // rax
  __int64 v16; // r8
  float *v17; // rax
  const struct D2D_POINT_3F *v18; // rdx
  __int64 v19; // r10
  int *v20; // r9
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // eax
  unsigned int v25; // edx
  int v26; // ebx
  __int64 v27; // r9
  int v28; // r10d
  __int64 v29; // rcx
  __int64 v30; // r9
  float v31; // xmm3_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  int v34; // eax
  __int64 k; // r15
  _DWORD *v36; // r9
  unsigned int v37; // eax
  unsigned int v38; // r8d
  float *v39; // rax
  float *v40; // rax
  unsigned int v41; // eax
  unsigned int v42; // eax
  int v43; // r9d
  unsigned int v45; // eax
  int v46; // r9d
  float *v47; // r8
  float *v48; // rax
  __int64 v49; // r8
  __int64 v50; // r10
  float *v51; // rax
  unsigned int i; // r15d
  __int64 v53; // rbx
  float v54; // xmm7_4
  float v55; // xmm6_4
  float v56; // xmm6_4
  float *v57; // rax
  float *v58; // rax
  int v59; // r8d
  __int64 v60; // rdx
  int v61; // eax
  int v62; // ecx
  __int64 j; // r13
  _DWORD *v64; // r9
  unsigned int v65; // eax
  unsigned int v66; // r8d
  float *v67; // rax
  float *v68; // rax
  __int64 v69; // xmm0_8
  int v70; // r8d
  int v71; // r9d
  __int64 v72; // rax
  unsigned int v73; // eax
  unsigned int v74; // [rsp+28h] [rbp-E0h]
  bool v75; // [rsp+38h] [rbp-D0h]
  char v76; // [rsp+39h] [rbp-CFh]
  int v77; // [rsp+3Ch] [rbp-CCh]
  int v78; // [rsp+40h] [rbp-C8h]
  unsigned int v79; // [rsp+4Ch] [rbp-BCh]
  __int64 v81; // [rsp+60h] [rbp-A8h]
  float v82[2]; // [rsp+68h] [rbp-A0h] BYREF
  int *v83; // [rsp+70h] [rbp-98h]
  __int128 v84; // [rsp+78h] [rbp-90h] BYREF
  struct D2D_VECTOR_3F v85; // [rsp+88h] [rbp-80h] BYREF
  struct D2D_VECTOR_3F v86; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v87; // [rsp+A8h] [rbp-60h]
  struct D2D_VECTOR_3F v88; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v89; // [rsp+C0h] [rbp-48h] BYREF
  int v90; // [rsp+C8h] [rbp-40h]
  struct D2D_VECTOR_3F v91; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v92[3]; // [rsp+E0h] [rbp-28h] BYREF
  int v93; // [rsp+F8h] [rbp-10h]
  struct D2D_VECTOR_3F v94; // [rsp+100h] [rbp-8h] BYREF
  float v95[4]; // [rsp+110h] [rbp+8h] BYREF
  float v96[4]; // [rsp+120h] [rbp+18h] BYREF
  float v97[4]; // [rsp+130h] [rbp+28h] BYREF
  float v98[4]; // [rsp+140h] [rbp+38h] BYREF
  float v99[4]; // [rsp+150h] [rbp+48h] BYREF
  float v100[4]; // [rsp+160h] [rbp+58h] BYREF
  float v101[4]; // [rsp+170h] [rbp+68h] BYREF
  struct D2D_VECTOR_3F v102; // [rsp+180h] [rbp+78h] BYREF
  struct D2D_VECTOR_3F v103; // [rsp+190h] [rbp+88h] BYREF
  struct D2D_VECTOR_3F v104; // [rsp+1A0h] [rbp+98h] BYREF
  struct D2D_VECTOR_3F v105; // [rsp+1B0h] [rbp+A8h] BYREF
  float v106[4]; // [rsp+1C0h] [rbp+B8h] BYREF
  float v107[4]; // [rsp+1D0h] [rbp+C8h] BYREF
  float v108[4]; // [rsp+1E0h] [rbp+D8h] BYREF
  struct D2D_VECTOR_3F v109; // [rsp+1F0h] [rbp+E8h] BYREF
  struct D2D_VECTOR_3F v110; // [rsp+200h] [rbp+F8h] BYREF
  __int64 v111; // [rsp+210h] [rbp+108h] BYREF
  int v112; // [rsp+218h] [rbp+110h]
  struct D2D_VECTOR_3F v113; // [rsp+220h] [rbp+118h] BYREF
  struct D2D_VECTOR_3F v114; // [rsp+230h] [rbp+128h] BYREF
  __int64 v115; // [rsp+240h] [rbp+138h] BYREF
  int v116; // [rsp+248h] [rbp+140h]
  __int64 v117; // [rsp+250h] [rbp+148h] BYREF
  int v118; // [rsp+258h] [rbp+150h]
  __int64 v119; // [rsp+260h] [rbp+158h] BYREF
  int v120; // [rsp+268h] [rbp+160h]
  struct D2D_VECTOR_3F v121; // [rsp+270h] [rbp+168h] BYREF
  struct D2D_VECTOR_3F v122; // [rsp+280h] [rbp+178h] BYREF
  __int64 v123; // [rsp+290h] [rbp+188h] BYREF
  int v124; // [rsp+298h] [rbp+190h]
  __int64 v125; // [rsp+2A0h] [rbp+198h] BYREF
  int v126; // [rsp+2A8h] [rbp+1A0h]
  __int64 v127; // [rsp+2B0h] [rbp+1A8h] BYREF
  int v128; // [rsp+2B8h] [rbp+1B0h]
  __int64 v129; // [rsp+2C0h] [rbp+1B8h] BYREF
  int v130; // [rsp+2C8h] [rbp+1C0h]
  __int64 v131; // [rsp+2D0h] [rbp+1C8h] BYREF
  int v132; // [rsp+2D8h] [rbp+1D0h]
  _BYTE v133[24]; // [rsp+2E0h] [rbp+1D8h] BYREF
  _DWORD v134[6]; // [rsp+2F8h] [rbp+1F0h] BYREF
  _DWORD v135[6]; // [rsp+310h] [rbp+208h] BYREF

  v6 = a4;
  v83 = a3;
  v7 = (_QWORD *)a2;
  v87 = (_QWORD *)a2;
  v9 = 0;
  v79 = *(_DWORD *)(a2 + 24);
  v10 = (float)(a3[3] - a3[1]) / (float)(int)(v79 - 1);
  v11 = -1;
  v78 = -1;
  DynArrayImpl<0>::DynArrayImpl<0>(v92, 0LL, 0LL);
  v77 = -1;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= v12 )
      goto LABEL_40;
    v14 = *((unsigned int *)v6 + 6);
    v15 = CTouchDragVisualHelper::Multiply(v101, (float *)(*v7 + 28LL * v13 + 16), a1);
    v119 = *(_QWORD *)v15;
    v120 = *((_DWORD *)v15 + 2);
    v17 = CTouchDragVisualHelper::Add(v100, (float *)(v16 + 4), (float *)&v119);
    *(_QWORD *)v133 = *(_QWORD *)v17;
    *(float *)&v133[8] = v17[2];
    *(struct D2D_VECTOR_3F *)&v133[12] = *CTouchDragVisualHelper::Subtract(
                                            &v102,
                                            v18,
                                            (const struct D2D_POINT_3F *)&v119);
    *(float *)&v84 = (float)*v20;
    *((float *)&v84 + 1) = (float)((float)(int)v13 * v10) + (float)v20[1];
    *((float *)&v84 + 2) = (float)v20[2];
    HIDWORD(v84) = DWORD1(v84);
    v21 = v14 + 2;
    if ( (int)v14 + 2 < (unsigned int)v14 )
    {
      v26 = -2147024362;
      v9 = -2147024362;
      v45 = 179;
LABEL_44:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, v45, 0LL);
      v74 = 268;
      goto LABEL_38;
    }
    if ( v21 <= *((_DWORD *)v6 + 5) )
    {
      v22 = 3 * v14;
      v23 = *v6;
      *(_OWORD *)(v23 + 4 * v22) = *(_OWORD *)v133;
      *(_QWORD *)(v23 + 4 * v22 + 16) = *(_QWORD *)&v133[16];
      *((_DWORD *)v6 + 6) = v21;
      goto LABEL_6;
    }
    v26 = DynArrayImpl<0>::AddMultipleAndSet(v6, 12LL, 2LL, v133);
    v9 = v26;
    if ( v26 < 0 )
    {
      v45 = 190;
      goto LABEL_44;
    }
    v19 = a5;
LABEL_6:
    v24 = *(_DWORD *)(v19 + 24);
    v25 = v24 + 2;
    if ( v24 + 2 < v24 )
    {
      v26 = -2147024362;
      v9 = -2147024362;
      v42 = 179;
      goto LABEL_37;
    }
    v26 = 0;
    if ( v25 > *(_DWORD *)(v19 + 20) )
      break;
    *(_OWORD *)(*(_QWORD *)v19 + 8LL * v24) = v84;
    *(_DWORD *)(v19 + 24) = v25;
LABEL_9:
    v9 = v26;
    if ( v13 )
    {
      v27 = *v6;
      v123 = *(_QWORD *)(*v6 + 12 * v14);
      v124 = *(_DWORD *)(v27 + 12 * v14 + 8);
      v89 = *(_QWORD *)(v27 + 12LL * (unsigned int)(v14 + 1));
      v90 = *(_DWORD *)(v27 + 12LL * (unsigned int)(v14 + 1) + 8);
      v85 = *CTouchDragVisualHelper::Subtract(
               &v103,
               (const struct D2D_POINT_3F *)&v89,
               (const struct D2D_POINT_3F *)&v123);
      v76 = 0;
      v29 = (unsigned int)v14 + 2 * (v28 - v13);
      v114 = *(struct D2D_VECTOR_3F *)(v30 + 12 * v29);
      v91 = *(struct D2D_VECTOR_3F *)(v30 + 12LL * (unsigned int)(v29 + 1));
      v113 = *CTouchDragVisualHelper::Subtract(
                &v104,
                (const struct D2D_POINT_3F *)&v91,
                (const struct D2D_POINT_3F *)&v114);
      v31 = CTouchDragVisualHelper::CrossProductZ(&v113, &v85);
      if ( COERCE_FLOAT(LODWORD(v31) & _xmm) <= 0.00000011920929 )
        goto LABEL_12;
      v86 = *CTouchDragVisualHelper::Subtract(
               &v105,
               (const struct D2D_POINT_3F *)&v114,
               (const struct D2D_POINT_3F *)&v123);
      v32 = CTouchDragVisualHelper::CrossProductZ(&v85, &v86) / v31;
      v33 = CTouchDragVisualHelper::CrossProductZ(&v113, &v86) / v31;
      if ( v32 <= 0.00000011920929 || v32 >= 0.99999988 || v33 <= 0.00000011920929 || v33 >= 0.99999988 )
        goto LABEL_12;
      v39 = CTouchDragVisualHelper::Multiply(v106, &v113.x, v32);
      v125 = *(_QWORD *)v39;
      v126 = *((_DWORD *)v39 + 2);
      v40 = CTouchDragVisualHelper::Add(v107, &v114.x, (float *)&v125);
      v131 = *(_QWORD *)v40;
      v132 = *((_DWORD *)v40 + 2);
      if ( v11 < 0 )
      {
        v11 = v13 - 1;
        v78 = v13 - 1;
      }
      DynArray<D2D_POINT_3F,0>::AddMultipleAndSet(v92, &v131, 1LL);
      v76 = 1;
      if ( v13 == v79 - 1 )
      {
LABEL_12:
        v9 = v26;
        if ( v11 >= 0 )
        {
          v111 = 0LL;
          v112 = 0;
          v75 = 0;
          v46 = v93;
          if ( v93 )
          {
            v47 = (float *)v92[0];
            do
            {
              v48 = CTouchDragVisualHelper::Add(v108, (float *)&v111, v47);
              v111 = *(_QWORD *)v48;
              v112 = *((_DWORD *)v48 + 2);
              v47 = (float *)(v49 + 12);
            }
            while ( v50 != 1 );
          }
          v51 = CTouchDragVisualHelper::Multiply(v97, (float *)&v111, 1.0 / (float)v46);
          v111 = *(_QWORD *)v51;
          v112 = *((_DWORD *)v51 + 2);
          v93 = 0;
          DynArrayImpl<0>::ShrinkToSize(v92, 12LL);
          for ( i = v11; ; ++i )
          {
            if ( i >= v13 )
              goto LABEL_13;
            v53 = (unsigned int)v14 + 2 * i - 2 * v13;
            v81 = *a4;
            v115 = *(_QWORD *)(*a4 + 12 * v53);
            v116 = *(_DWORD *)(v81 + 12 * v53 + 8);
            v117 = *(_QWORD *)(v81 + 12LL * (unsigned int)(v53 + 1));
            v118 = *(_DWORD *)(v81 + 12LL * (unsigned int)(v53 + 1) + 8);
            v122 = *CTouchDragVisualHelper::Subtract(
                      &v109,
                      (const struct D2D_POINT_3F *)&v111,
                      (const struct D2D_POINT_3F *)&v115);
            v121 = *CTouchDragVisualHelper::Subtract(
                      &v110,
                      (const struct D2D_POINT_3F *)&v111,
                      (const struct D2D_POINT_3F *)&v117);
            v88 = *CTouchDragVisualHelper::Subtract(
                     &v94,
                     (const struct D2D_POINT_3F *)&v117,
                     (const struct D2D_POINT_3F *)&v115);
            v54 = CTouchDragVisualHelper::Length(&v88);
            v55 = v54 / CTouchDragVisualHelper::Length(&v122);
            if ( i == v11 )
              v75 = v55 <= 2.0;
            if ( v75 )
            {
              v67 = CTouchDragVisualHelper::Multiply(v95, &v122.x, v55);
              v127 = *(_QWORD *)v67;
              v128 = *((_DWORD *)v67 + 2);
              v68 = CTouchDragVisualHelper::Add(v96, (float *)&v115, (float *)&v127);
              v69 = *(_QWORD *)v68;
              v70 = *((_DWORD *)v68 + 2);
              v72 = 3LL * (unsigned int)(v71 + 1);
              *(_QWORD *)(v81 + 4 * v72) = v69;
              *(_DWORD *)(v81 + 4 * v72 + 8) = v70;
            }
            else
            {
              v56 = v54 / CTouchDragVisualHelper::Length(&v121);
              v57 = CTouchDragVisualHelper::Multiply(v99, &v121.x, v56);
              v129 = *(_QWORD *)v57;
              v130 = *((_DWORD *)v57 + 2);
              v58 = CTouchDragVisualHelper::Add(v98, (float *)&v117, (float *)&v129);
              v59 = *((_DWORD *)v58 + 2);
              v60 = 3LL * ((unsigned int)v14 + 2 * (i - v13));
              *(_QWORD *)(v81 + 4 * v60) = *(_QWORD *)v58;
              *(_DWORD *)(v81 + 4 * v60 + 8) = v59;
              v55 = v56 / (float)(v56 - 1.0);
            }
            if ( i < v13 - 1 )
              break;
LABEL_64:
            ;
          }
          v61 = DynArray<D2D_POINT_3F,0>::AddMultipleAndSet(a4, &v111, 1LL);
          v9 = v61;
          if ( v61 < 0 )
          {
            v74 = 367;
          }
          else
          {
            v82[0] = (float)((float)(v83[2] - *v83) / v55) + (float)*v83;
            v82[1] = (float)((float)((float)(int)i * v10) + (float)v83[1]) + (float)(v10 * 0.5);
            v61 = DynArray<D2D_POINT_2F,0>::AddMultipleAndSet(a5, v82, 1LL);
            v9 = v61;
            if ( v61 >= 0 )
            {
              v62 = *((_DWORD *)a4 + 6) - 1;
              v134[0] = v14 + 2 * i - 2 * v13;
              v134[1] = v53 + 2;
              v134[2] = v62;
              v134[3] = v53 + 1;
              v134[4] = v53 + 3;
              v134[5] = v62;
              for ( j = 0LL; ; j = (unsigned int)(j + 1) )
              {
                if ( (unsigned int)j >= 6 )
                {
                  v11 = v78;
                  goto LABEL_64;
                }
                v64 = &v134[j];
                v65 = *(_DWORD *)(a6 + 24);
                v66 = v65 + 1;
                if ( v65 + 1 < v65 )
                  break;
                v26 = 0;
                if ( v66 > *(_DWORD *)(a6 + 20) )
                {
                  v26 = DynArrayImpl<0>::AddMultipleAndSet(a6, 4LL, 1LL, v64);
                  v9 = v26;
                  if ( v26 < 0 )
                  {
                    v73 = 190;
                    goto LABEL_72;
                  }
                }
                else
                {
                  *(_DWORD *)(*(_QWORD *)a6 + 4LL * v65) = *v64;
                  *(_DWORD *)(a6 + 24) = v66;
                }
                v9 = v26;
              }
              v26 = -2147024362;
              v9 = -2147024362;
              v73 = 179;
LABEL_72:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, v73, 0LL);
              v74 = 382;
              goto LABEL_38;
            }
            v74 = 370;
          }
          v43 = v61;
          goto LABEL_39;
        }
LABEL_13:
        if ( !v76 )
        {
          v34 = v14 - 2;
          if ( v77 > 0 )
          {
            v34 = v77;
            v77 = -1;
          }
          if ( v11 >= 0 )
          {
            v77 = v14;
            v11 = -1;
            v78 = -1;
          }
          v135[0] = v14;
          v135[1] = v34;
          v135[2] = v34 + 1;
          v135[3] = v34 + 1;
          v135[4] = v14 + 1;
          v135[5] = v14;
          for ( k = 0LL; ; k = (unsigned int)(k + 1) )
          {
            if ( (unsigned int)k >= 6 )
              goto LABEL_29;
            v36 = &v135[k];
            v37 = *(_DWORD *)(a6 + 24);
            v38 = v37 + 1;
            if ( v37 + 1 < v37 )
              break;
            v26 = 0;
            if ( v38 > *(_DWORD *)(a6 + 20) )
            {
              v26 = DynArrayImpl<0>::AddMultipleAndSet(a6, 4LL, 1LL, v36);
              v9 = v26;
              if ( v26 < 0 )
              {
                v41 = 190;
LABEL_74:
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, v41, 0LL);
                v74 = 410;
                goto LABEL_38;
              }
            }
            else
            {
              *(_DWORD *)(*(_QWORD *)a6 + 4LL * v37) = *v36;
              *(_DWORD *)(a6 + 24) = v38;
            }
            v9 = v26;
          }
          v26 = -2147024362;
          v9 = -2147024362;
          v41 = 179;
          goto LABEL_74;
        }
      }
    }
LABEL_29:
    ++v13;
    v6 = a4;
    v12 = v79;
    v7 = v87;
  }
  v26 = DynArrayImpl<0>::AddMultipleAndSet(v19, 8LL, 2LL, &v84);
  v9 = v26;
  if ( v26 >= 0 )
    goto LABEL_9;
  v42 = 190;
LABEL_37:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, v42, 0LL);
  v74 = 269;
LABEL_38:
  v43 = v26;
LABEL_39:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, v74, 0LL);
LABEL_40:
  DynArrayImpl<0>::~DynArrayImpl<0>(v92);
  return v9;
}
