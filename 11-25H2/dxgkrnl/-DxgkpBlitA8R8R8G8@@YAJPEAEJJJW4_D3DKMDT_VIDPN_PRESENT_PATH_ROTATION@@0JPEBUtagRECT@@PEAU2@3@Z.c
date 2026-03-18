/*
 * XREFs of ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x14038D54C
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1403FAC10 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x140412F30 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1401B2794 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x14038E358 (-DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z.c)
 */

__int64 __fastcall DxgkpBlitA8R8R8G8(
        unsigned __int8 *a1,
        int a2,
        int a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5,
        unsigned __int8 *a6,
        int a7,
        const struct tagRECT *a8,
        struct tagRECT *a9,
        struct tagRECT *a10)
{
  int v10; // r13d
  int v11; // edi
  LONG left; // r11d
  LONG right; // ebp
  LONG top; // r10d
  LONG bottom; // r9d
  LONG v17; // esi
  LONG v18; // r15d
  LONG v19; // r14d
  int v20; // r8d
  int v21; // r10d
  int v22; // r11d
  unsigned __int8 *v23; // rbx
  int v24; // esi
  int v25; // r9d
  int v26; // r8d
  int v27; // eax
  int v28; // r12d
  LONG v29; // r9d
  unsigned __int8 *v30; // r15
  int v31; // ecx
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  int v35; // ebx
  int v36; // ecx
  unsigned __int8 *v37; // r9
  struct _UFIXPOINT_PIXEL *v38; // r12
  unsigned __int8 *v39; // rcx
  int v40; // r15d
  struct _UFIXPOINT_PIXEL *v41; // r9
  unsigned __int8 *v42; // r8
  int *v43; // r11
  int v44; // r9d
  _BYTE *v45; // rdx
  int v46; // eax
  unsigned __int8 *v47; // r8
  int v48; // eax
  bool v49; // cc
  struct _UFIXPOINT_PIXEL *v51; // rdx
  unsigned int v52; // r8d
  unsigned int *v53; // r11
  unsigned int v54; // edx
  int v55; // r10d
  _BYTE *v56; // r8
  unsigned int v57; // edx
  signed __int64 v58; // r9
  unsigned int v59; // ecx
  unsigned int v60; // eax
  int v61; // r14d
  int v62; // ebp
  int v63; // r11d
  int v64; // r9d
  int v65; // edx
  int v66; // ecx
  int v67; // r8d
  struct _UFIXPOINT_PIXEL *v68; // r8
  unsigned int v69; // eax
  _BYTE *v70; // r11
  _DWORD *v71; // rdx
  unsigned int v72; // r9d
  unsigned int v73; // ebp
  signed __int64 v74; // r10
  int v75; // r14d
  unsigned int v76; // eax
  _DWORD *v77; // rdx
  int v78; // r9d
  _BYTE *v79; // r15
  signed __int64 v80; // r8
  int v81; // ecx
  _DWORD *v82; // rdx
  unsigned int v83; // r9d
  signed __int64 v84; // r10
  int v85; // r14d
  unsigned int v86; // eax
  unsigned __int8 *v87; // rdi
  size_t v88; // rsi
  __int64 v89; // rbx
  __int64 v90; // r12
  unsigned int v91; // r9d
  _BYTE *v92; // r11
  unsigned int *v93; // rdx
  unsigned int v94; // r10d
  unsigned int v95; // r9d
  __int64 v96; // r8
  unsigned int v97; // ecx
  unsigned int v98; // eax
  unsigned __int8 *v99; // rdi
  __int64 v100; // rbp
  int v101; // r9d
  int v102; // r8d
  _DWORD *v103; // rdx
  unsigned int v104; // eax
  LONG v105; // [rsp+50h] [rbp-98h]
  unsigned int v106; // [rsp+50h] [rbp-98h]
  int v107; // [rsp+50h] [rbp-98h]
  int v108; // [rsp+58h] [rbp-90h]
  int v109; // [rsp+5Ch] [rbp-8Ch]
  int v110; // [rsp+5Ch] [rbp-8Ch]
  LONG v111; // [rsp+60h] [rbp-88h]
  int v112; // [rsp+60h] [rbp-88h]
  int v113; // [rsp+64h] [rbp-84h]
  int v114; // [rsp+68h] [rbp-80h]
  int v115; // [rsp+6Ch] [rbp-7Ch]
  int v116; // [rsp+6Ch] [rbp-7Ch]
  unsigned int v117; // [rsp+70h] [rbp-78h]
  struct tagRECT v118; // [rsp+78h] [rbp-70h]
  __int64 v119; // [rsp+78h] [rbp-70h]
  int v120; // [rsp+88h] [rbp-60h]
  unsigned __int8 *v121; // [rsp+90h] [rbp-58h]
  unsigned __int8 *v122; // [rsp+90h] [rbp-58h]
  int v123; // [rsp+90h] [rbp-58h]
  unsigned __int8 *v124; // [rsp+98h] [rbp-50h]
  struct _UFIXPOINT_PIXEL *v125; // [rsp+A0h] [rbp-48h]
  struct _UFIXPOINT_PIXEL *v126; // [rsp+A0h] [rbp-48h]
  unsigned __int8 *v127; // [rsp+A8h] [rbp-40h]
  int v128; // [rsp+B0h] [rbp-38h]
  int v129; // [rsp+130h] [rbp+48h]

  v10 = a2;
  v11 = a3;
  left = a9->left;
  right = a9->right;
  if ( a9->left == right
    || (top = a9->top, bottom = a9->bottom, top == bottom)
    || (v17 = a8->right, v111 = a8->left, a8->left == v17)
    || (v18 = a8->bottom, v105 = a8->top, v105 == v18) )
  {
    DxgkpConvertRects(a2, a3, a5, a8, 1u, a9, a10);
    return 0LL;
  }
  if ( a5 == D3DKMDT_VPPR_IDENTITY )
    goto LABEL_77;
  if ( a5 != D3DKMDT_VPPR_ROTATE90 )
  {
    if ( a5 == D3DKMDT_VPPR_ROTATE180 )
    {
      v20 = a2 - right;
      v19 = v11 - bottom;
      v118.top = v11 - bottom;
      right = v11 - top;
      bottom = a2 - left;
      v118.bottom = v11 - top;
      v21 = -a4;
      v22 = -4;
      v114 = -a4;
      v23 = &a1[4 * a2 - 4 + a4 * (v11 - 1)];
      goto LABEL_8;
    }
    if ( a5 == D3DKMDT_VPPR_ROTATE270 )
    {
      v118.top = a9->left;
      v10 = a3;
      v118.bottom = a9->right;
      v19 = a9->left;
      v20 = a3 - bottom;
      bottom = v11 - top;
      v11 = a2;
      v21 = 4;
      v22 = -a4;
      v114 = 4;
      v23 = &a1[a4 * (v10 - 1)];
      goto LABEL_8;
    }
LABEL_77:
    bottom = a9->right;
    v21 = a4;
    v114 = a4;
    v22 = 4;
    v20 = _mm_cvtsi128_si32(*(__m128i *)a9);
    v23 = a1;
    right = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)a9, 12));
    v19 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)a9, 4));
    v118 = *a9;
    goto LABEL_8;
  }
  v118.left = a9->top;
  v19 = a2 - right;
  v20 = v118.left;
  v118.top = a2 - right;
  right = a2 - left;
  v21 = -4;
  v10 = v11;
  v118.bottom = a2 - left;
  v11 = a2;
  v114 = -4;
  v22 = a4;
  v23 = &a1[4 * a2 - 4];
LABEL_8:
  v24 = v17 - v111;
  v25 = v24 * bottom;
  v120 = v18 - v105;
  v121 = v23;
  v129 = v22;
  v26 = v24 * v20 / v10;
  v108 = (v10 * v26 + v24 - 1) / v24;
  v27 = (v25 - 1 - (v25 - 1) % v10 + v10) / v24;
  v28 = v27;
  v113 = v27;
  v115 = v26 + v111;
  a10->left = v26 + v111;
  v109 = (v18 - v105) * v118.top / v11;
  a10->top = v105 + v109;
  v29 = (v10 + v25 - 1) / v10 + v111;
  a10->right = v29;
  v128 = (v18 - v105) * v118.bottom;
  a10->bottom = v105 + (v11 + v128 - 1) / v11;
  v30 = &a6[4 * v26 + 4 * v111 + a7 * (v105 + v109)];
  v31 = v24;
  v124 = v30;
  if ( a5 == D3DKMDT_VPPR_IDENTITY && v24 == v10 )
  {
    if ( v120 == v11 )
    {
      v87 = &v23[v21 * v118.top + v108 * v22];
      if ( v118.top < v118.bottom )
      {
        v88 = (unsigned int)(4 * (v27 - v108));
        v89 = (unsigned int)(right - v118.top);
        v90 = v21;
        do
        {
          memmove(v30, v87, v88);
          v30 += a7;
          v87 += v90;
          --v89;
        }
        while ( v89 );
      }
      return 0LL;
    }
  }
  else if ( v120 == v11 )
  {
    v99 = &v23[v21 * v19];
    if ( v19 < right )
    {
      v100 = (unsigned int)(right - v19);
      v126 = (struct _UFIXPOINT_PIXEL *)v21;
      do
      {
        DxgkpGetBilinearLineFromSource(v99, v22, v10, (struct _PIXEL *)v30, 0LL, v31, v108, v28);
        v99 = &v99[(_QWORD)v126];
        v30 += a7;
        v22 = v129;
        v31 = v24;
        --v100;
      }
      while ( v100 );
    }
    return 0LL;
  }
  v32 = (unsigned int)(v29 - v115);
  v33 = 16LL * (2 * (int)v32 + 2);
  if ( !is_mul_ok(2 * (int)v32 + 2, 0x10uLL) )
    v33 = -1LL;
  v34 = operator new[](v33, 0x4B677844u, 256LL, v32);
  v35 = 0;
  v125 = (struct _UFIXPOINT_PIXEL *)v34;
  if ( v34 )
  {
    v36 = a10->right - a10->left;
    v37 = v121;
    v119 = v34;
    v38 = (struct _UFIXPOINT_PIXEL *)(v34 + 16LL * (v36 + 1));
    *(_OWORD *)(v34 + 16LL * v36) = 0LL;
    *((_OWORD *)v38 + a10->right - a10->left) = 0LL;
    v39 = &v121[v114 * v19];
    v122 = v39;
    if ( v120 > v11 )
    {
      v40 = v19 * v120 % v11;
      if ( v40 )
      {
        DxgkpGetBilinearLineFromSource(&v39[-v114], v129, v10, 0LL, v38, v24, v108, v113);
        v39 = v122;
      }
      DxgkpGetBilinearLineFromSource(v39, v129, v10, 0LL, v125, v24, v108, v113);
      if ( v19 < right )
      {
        v41 = (struct _UFIXPOINT_PIXEL *)v119;
        while ( 1 )
        {
          if ( v40 && v40 < v11 )
          {
            v52 = (unsigned __int16)((v40 << 16) / (unsigned int)v11);
            if ( a10->right - a10->left > 0 )
            {
              v53 = (unsigned int *)((char *)v38 + 12);
              v54 = 0x10000 - v52;
              v55 = 0;
              v106 = v52 >> 8;
              v56 = v124 + 2;
              v57 = v54 >> 8;
              v58 = v41 - v38;
              do
              {
                v59 = *(unsigned int *)((char *)v53 + v58);
                ++v55;
                v60 = *v53;
                v53 += 4;
                v56[1] = (v57 * (v59 >> 8) + 0x8000 + v106 * (v60 >> 8)) >> 16;
                *v56 = (v57 * (*(unsigned int *)((char *)v53 + v58 - 20) >> 8) + 0x8000 + v106 * (*(v53 - 5) >> 8)) >> 16;
                v56 += 4;
                *(v56 - 5) = (v57 * (*(unsigned int *)((char *)v53 + v58 - 24) >> 8) + 0x8000 + v106 * (*(v53 - 6) >> 8)) >> 16;
                *(v56 - 6) = (v57 * (*(unsigned int *)((char *)v53 + v58 - 28) >> 8) + 0x8000 + v106 * (*(v53 - 7) >> 8)) >> 16;
              }
              while ( v55 < a10->right - a10->left );
              v41 = (struct _UFIXPOINT_PIXEL *)v119;
            }
          }
          else if ( a10->right - a10->left > 0 )
          {
            v42 = v124;
            v43 = (int *)((char *)v41 + 8);
            v44 = 0;
            v45 = v124 + 2;
            do
            {
              ++v44;
              v45[1] = (unsigned int)(v43[1] + 0x8000) >> 16;
              v46 = *v43;
              v43 += 4;
              *v45 = (unsigned int)(v46 + 0x8000) >> 16;
              v45 += 4;
              *(v45 - 5) = (unsigned int)(*(v43 - 5) + 0x8000) >> 16;
              *(v45 - 6) = (unsigned int)(*(v43 - 6) + 0x8000) >> 16;
            }
            while ( v44 < a10->right - a10->left );
            v41 = (struct _UFIXPOINT_PIXEL *)v119;
            goto LABEL_23;
          }
          v42 = v124;
LABEL_23:
          v47 = &v42[a7];
          v48 = v40 - v11 + v120;
          v124 = v47;
          v49 = v40 < v11;
          v40 -= v11;
          if ( v49 )
            v40 = v48;
          if ( v40 < v11 )
          {
            v51 = v38;
            ++v19;
            v119 = (__int64)v38;
            v38 = v41;
            if ( v19 < right || v40 )
            {
              v122 += v114;
              DxgkpGetBilinearLineFromSource(v122, v129, v10, 0LL, v51, v24, v108, v113);
              v47 = v124;
              v41 = (struct _UFIXPOINT_PIXEL *)v119;
            }
            else
            {
              v41 = v51;
            }
          }
          if ( v19 >= right )
            goto LABEL_27;
        }
      }
      v47 = &a6[4 * v115 + a7 * (v105 + v109)];
LABEL_27:
      if ( v40 )
      {
        v91 = (unsigned __int16)((v40 << 16) / v11);
        if ( a10->right - a10->left > 0 )
        {
          v92 = v47 + 2;
          v93 = (unsigned int *)((char *)v38 + 12);
          v94 = (0x10000 - v91) >> 8;
          v95 = v91 >> 8;
          v96 = v119 - (_QWORD)v38;
          do
          {
            v97 = *(unsigned int *)((char *)v93 + v96);
            ++v35;
            v98 = *v93;
            v93 += 4;
            v92[1] = (v94 * (v97 >> 8) + 0x8000 + v95 * (v98 >> 8)) >> 16;
            *v92 = (v94 * (*(unsigned int *)((char *)v93 + v96 - 20) >> 8) + 0x8000 + v95 * (*(v93 - 5) >> 8)) >> 16;
            v92 += 4;
            *(v92 - 5) = (v94 * (*(unsigned int *)((char *)v93 + v96 - 24) >> 8) + 0x8000 + v95 * (*(v93 - 6) >> 8)) >> 16;
            *(v92 - 6) = (v94 * (*(unsigned int *)((char *)v93 + v96 - 28) >> 8) + 0x8000 + v95 * (*(v93 - 7) >> 8)) >> 16;
          }
          while ( v35 < a10->right - a10->left );
        }
      }
      goto LABEL_28;
    }
    v123 = v120 << 16;
    v117 = (unsigned __int16)((v120 << 16) / v11);
    v112 = (v120 + v11 * v109 - 1) / v120;
    v127 = &v37[v112 * v114];
    v116 = (v11 + v128 - 1 - (v128 - 1) % v11) / v120;
    v110 = v120 * v112 % v11;
    v107 = v110 << 16;
    if ( v110 > 0 )
    {
      v61 = v113;
      v62 = v129;
      DxgkpGetBilinearLineFromSource(&v37[v112 * v114 - v114], v129, v10, 0LL, v38, v24, v108, v113);
      v101 = 0;
      if ( a10->right - a10->left > 0 )
      {
        v102 = (unsigned __int16)(v107 / v11) >> 8;
        v103 = (_DWORD *)((char *)v38 + 8);
        do
        {
          ++v101;
          v103[1] = v102 * (v103[1] >> 8);
          *v103 = v102 * (*v103 >> 8);
          v104 = *(v103 - 1);
          v103 += 4;
          *(v103 - 5) = v102 * (v104 >> 8);
          *(v103 - 6) = v102 * (*(v103 - 6) >> 8);
        }
        while ( v101 < a10->right - a10->left );
      }
    }
    else
    {
      memset(v38, 0, 16LL * (a10->right - a10->left));
      v61 = v113;
      v107 = v110 << 16;
      v62 = v129;
    }
    DxgkpGetBilinearLineFromSource(v127, v62, v10, 0LL, v125, v24, v108, v61);
    v63 = v112;
    if ( v112 >= v116 )
    {
LABEL_51:
      if ( v110 && a10->right - a10->left > 0 )
      {
        v77 = (_DWORD *)((char *)v38 + 12);
        v78 = (unsigned __int16)(((v11 - v110) << 16) / v11) >> 8;
        v79 = v30 + 2;
        v80 = v125 - v38;
        do
        {
          ++v35;
          v81 = *v77 + v78 * (*(_DWORD *)((char *)v77 + v80) >> 8) + 0x8000;
          v77 += 4;
          v79[1] = BYTE2(v81);
          *v79 = (unsigned int)(*(v77 - 5) + v78 * (*(_DWORD *)((char *)v77 + v80 - 20) >> 8) + 0x8000) >> 16;
          v79 += 4;
          *(v79 - 5) = (unsigned int)(*(v77 - 6) + v78 * (*(_DWORD *)((char *)v77 + v80 - 24) >> 8) + 0x8000) >> 16;
          *(v79 - 6) = (unsigned int)(*(v77 - 7) + v78 * (*(_DWORD *)((char *)v77 + v80 - 28) >> 8) + 0x8000) >> 16;
        }
        while ( v35 < a10->right - a10->left );
      }
LABEL_28:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v125);
      return 0LL;
    }
    v64 = v11 << 16;
    while ( 1 )
    {
      v65 = v120 + v110;
      v66 = v123 + v107;
      v67 = a10->right - a10->left;
      v110 = v65;
      v107 += v123;
      if ( v65 < v11 )
      {
        v49 = v67 <= 0;
        v68 = v125;
        if ( v49 )
          goto LABEL_49;
        v82 = (_DWORD *)((char *)v38 + 12);
        v83 = v117 >> 8;
        v84 = v125 - v38;
        v85 = 0;
        do
        {
          ++v85;
          *v82 += v83 * (*(_DWORD *)((char *)v82 + v84) >> 8);
          v86 = *(_DWORD *)((char *)v82 + v84 - 4);
          v82 += 4;
          *(v82 - 5) += v83 * (v86 >> 8);
          *(v82 - 6) += v83 * (*(_DWORD *)((char *)v82 + v84 - 24) >> 8);
          *(v82 - 7) += v83 * (*(_DWORD *)((char *)v82 + v84 - 28) >> 8);
        }
        while ( v85 < a10->right - a10->left );
        v61 = v113;
      }
      else
      {
        v110 = v65 - v11;
        v107 = v66 - v64;
        v49 = v67 <= 0;
        v68 = v125;
        v69 = (unsigned __int16)((v66 - v64) / v11);
        if ( !v49 )
        {
          v70 = v30 + 2;
          v71 = (_DWORD *)((char *)v38 + 12);
          v72 = (v117 - v69) >> 8;
          v73 = v69 >> 8;
          v74 = v125 - v38;
          v75 = 0;
          do
          {
            ++v75;
            v70[1] = (*v71 + 0x8000 + v72 * (*(_DWORD *)((char *)v71 + v74) >> 8)) >> 16;
            *v70 = (*(v71 - 1) + 0x8000 + v72 * (*(_DWORD *)((char *)v71 + v74 - 4) >> 8)) >> 16;
            v70 += 4;
            *(v70 - 5) = (*(v71 - 2) + 0x8000 + v72 * (*(_DWORD *)((char *)v71 + v74 - 8) >> 8)) >> 16;
            *(v70 - 6) = (*(v71 - 3) + 0x8000 + v72 * (*(_DWORD *)((char *)v71 + v74 - 12) >> 8)) >> 16;
            *v71 = v73 * (*(_DWORD *)((char *)v71 + v74) >> 8);
            v76 = *(_DWORD *)((char *)v71 + v74 - 4);
            v71 += 4;
            *(v71 - 5) = v73 * (v76 >> 8);
            *(v71 - 6) = v73 * (*(_DWORD *)((char *)v71 + v74 - 24) >> 8);
            *(v71 - 7) = v73 * (*(_DWORD *)((char *)v71 + v74 - 28) >> 8);
          }
          while ( v75 < a10->right - a10->left );
          v62 = v129;
          v61 = v113;
          v63 = v112;
        }
        v30 += a7;
      }
      v65 = v110;
LABEL_49:
      v112 = v63 + 1;
      if ( v63 + 1 < v116 || v65 )
      {
        v127 += v114;
        DxgkpGetBilinearLineFromSource(v127, v62, v10, 0LL, v68, v24, v108, v61);
        v63 = v112;
        v64 = v11 << 16;
        if ( v112 < v116 )
          continue;
      }
      goto LABEL_51;
    }
  }
  WdLogSingleEntry1(6LL, -1073741670LL);
  WdLogGlobalForLineNumber = 693;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Failed to allocate line buffer for DxgkpBlitA8R8R8G8, returning 0x%I64x!",
    -1073741670LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225626LL;
}
