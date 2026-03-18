/*
 * XREFs of ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800630A0
 * Callers:
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800615B8 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x180061F10 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180101BC0 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180064300 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180064640 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CRegion::TryAddRectangles(
        struct FastRegion::Internal::CRgnData **this,
        const struct tagRECT *a2,
        unsigned int a3)
{
  int v3; // edi
  unsigned int v4; // r15d
  unsigned int v5; // r11d
  const struct FastRegion::Internal::CRgnData *v7; // rsi
  const struct tagRECT *v8; // rax
  LONG right; // r9d
  LONG left; // r10d
  LONG bottom; // edx
  int v12; // esp
  int v13; // ecx
  int v14; // eax
  int v15; // r8d
  int v16; // ecx
  int v17; // r14d
  int v18; // eax
  int v19; // esp
  int v20; // edi
  int v21; // edi
  struct FastRegion::Internal::CRgnData *v22; // rbx
  int v23; // r10d
  int v24; // r8d
  char *v25; // r11
  char *v26; // rax
  _DWORD *v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r11
  _DWORD *v33; // rbx
  struct FastRegion::Internal::CRgnData *v34; // rdi
  int v35; // r12d
  int *v36; // r14
  int v37; // esi
  int v38; // eax
  int v39; // ecx
  int v40; // r9d
  __int64 v41; // rsi
  _DWORD *v42; // r8
  _DWORD *v43; // r10
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rsi
  struct FastRegion::Internal::CRgnData *v49; // rbx
  HANDLE v51; // rax
  HANDLE v52; // rax
  int v53; // eax
  FastRegion::Internal::CRgnData *v54; // rcx
  int *v55; // rbx
  int v56; // r14d
  int v57; // eax
  FastRegion::Internal::CRgnData *v58; // rcx
  int *v59; // rbx
  _DWORD *v60; // rdi
  int v61; // r12d
  int *v62; // r14
  int v63; // esi
  int v64; // eax
  int v65; // ecx
  int v66; // r11d
  __int64 v67; // r9
  _DWORD *v68; // r8
  _DWORD *v69; // r10
  __int64 v70; // rax
  __int64 v71; // rcx
  unsigned __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r9
  void *v75; // rbx
  HANDLE v76; // rax
  struct FastRegion::Internal::CRgnData *v77; // rbx
  _DWORD *v78; // rdi
  int v79; // r12d
  int v80; // esi
  int v81; // eax
  int v82; // ecx
  int v83; // r11d
  __int64 v84; // r9
  _DWORD *v85; // r8
  _DWORD *v86; // r10
  __int64 v87; // rax
  __int64 v88; // rcx
  unsigned __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // r9
  void *v92; // rbx
  HANDLE ProcessHeap; // rax
  int v94; // r14d
  FastRegion::Internal::CRgnData *v95; // rax
  FastRegion::Internal::CRgnData *v96; // rax
  void *v97; // rcx
  const struct tagRECT *v99; // [rsp+28h] [rbp-D8h]
  LPVOID lpMem; // [rsp+30h] [rbp-D0h] BYREF
  int v101; // [rsp+38h] [rbp-C8h] BYREF
  LONG v102; // [rsp+3Ch] [rbp-C4h]
  LONG v103; // [rsp+40h] [rbp-C0h]
  LONG top; // [rsp+44h] [rbp-BCh] BYREF
  int v105; // [rsp+48h] [rbp-B8h]
  LONG v106; // [rsp+4Ch] [rbp-B4h]
  int v107; // [rsp+50h] [rbp-B0h]
  LONG v108; // [rsp+54h] [rbp-ACh]
  LONG v109; // [rsp+58h] [rbp-A8h]
  struct FastRegion::Internal::CRgnData *v110; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v111[18]; // [rsp+88h] [rbp-78h] BYREF
  int v112; // [rsp+D0h] [rbp-30h]
  LPVOID v113; // [rsp+D8h] [rbp-28h]
  _BYTE v114[256]; // [rsp+E0h] [rbp-20h] BYREF
  int v115; // [rsp+1E0h] [rbp+E0h]
  LPVOID v116; // [rsp+1E8h] [rbp+E8h]
  _BYTE v117[256]; // [rsp+1F0h] [rbp+F0h] BYREF

  v3 = 0;
  v111[0] = 0;
  v110 = (struct FastRegion::Internal::CRgnData *)v111;
  v4 = 0;
  v5 = a3;
  v99 = a2;
  while ( v4 < v5 )
  {
    v7 = (const struct FastRegion::Internal::CRgnData *)&v101;
    v8 = &a2[v4];
    lpMem = &v101;
    right = v8->right;
    left = v8->left;
    bottom = v8->bottom;
    if ( v8->left >= right || v8->top >= bottom )
    {
      v101 = 0;
      v3 = 0;
      goto LABEL_19;
    }
    v13 = v12 + 84;
    top = v8->top;
    v14 = v12 + 68;
    v102 = left;
    v15 = v12 + 84 - v14;
    v103 = right;
    v105 = v15;
    v16 = v13 - (v12 + 76);
    v108 = left;
    v17 = 2;
    v109 = right;
    v101 = 2;
    v106 = bottom;
    v107 = v16 + 8;
    if ( *(_DWORD *)v110 )
    {
      v53 = FastRegion::Internal::CRgnData::EstimateSizeUnion(
              v110,
              (const struct FastRegion::Internal::CRgnData *)&v101);
      v54 = (FastRegion::Internal::CRgnData *)v114;
      v113 = v114;
      v112 = v53;
      if ( (unsigned __int64)v53 > 0x100 )
      {
        v95 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v53);
        v54 = v95;
        if ( !v95 )
        {
          v97 = v113;
          if ( v114 != v113 )
            goto LABEL_85;
          goto LABEL_86;
        }
        v7 = (const struct FastRegion::Internal::CRgnData *)lpMem;
        v113 = v95;
      }
      FastRegion::Internal::CRgnData::Union(v54, v110, v7);
      v55 = (int *)v113;
      v3 = 0;
      if ( *(_DWORD *)v113 )
      {
        if ( v114 == v113 )
        {
          v78 = v110;
          v79 = (_DWORD)v113 + 12;
          v80 = *((_DWORD *)v113 + 2 * *(_DWORD *)v113 + 2)
              + 8 * *(_DWORD *)v113
              - *((_DWORD *)v113 + 4)
              - 12
              + 8 * (*(_DWORD *)v113 - 1)
              + 24;
          v81 = v111[0];
          if ( v111 == (_DWORD *)v110 )
            v81 = 60;
          if ( v81 < v80 )
          {
            v78 = MIDL_user_allocate(v80);
            if ( !v78 )
            {
              v3 = -2147024882;
              goto LABEL_77;
            }
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v110);
            v110 = (struct FastRegion::Internal::CRgnData *)v78;
            v111[0] = v80;
          }
          v82 = *v55;
          v83 = 0;
          *v78 = *v55;
          v78[1] = v55[1];
          v78[2] = v55[2];
          v84 = (__int64)v55 + v55[4] + 12;
          v85 = &v78[2 * v82 + 3];
          if ( v82 > 0 )
          {
            v86 = v78 + 3;
            do
            {
              *v86 = *(_DWORD *)((char *)v86 + (char *)v55 - (char *)v78);
              v86 += 2;
              v87 = v83++;
              v78[2 * v87 + 4] = 4 * (((__int64)v85 - v84) >> 2)
                               + (_DWORD)v55
                               + 8 * v87
                               + v55[2 * v87 + 4]
                               - ((_DWORD)v78
                                + 8 * v87);
            }
            while ( v83 < *v78 );
          }
          v88 = (__int64)&v55[2 * *v55 + 1];
          v89 = (unsigned __int64)((int)v88 + *(_DWORD *)(v88 + 4) - v55[4] - v79) >> 2;
          v90 = (int)v89;
          if ( (int)v89 > 0 )
          {
            v91 = v84 - (_QWORD)v85;
            do
            {
              *v85 = *(_DWORD *)((char *)v85 + v91);
              ++v85;
              --v90;
            }
            while ( v90 );
          }
          v3 = 0;
          goto LABEL_77;
        }
        v56 = v112;
        v113 = v114;
        v112 = 0;
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v110);
        v110 = (struct FastRegion::Internal::CRgnData *)v55;
        v111[0] = v56;
      }
      else
      {
        *(_DWORD *)v110 = 0;
      }
LABEL_77:
      v92 = v113;
      if ( v114 != v113 && v113 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v92);
      }
      goto LABEL_17;
    }
    v18 = v111[0];
    v20 = v19 + 112;
    v21 = v16 - (unsigned int)&top - v15 + v20;
    if ( v111 == (_DWORD *)v110 )
      v18 = 60;
    if ( v18 >= v21 )
      goto LABEL_9;
    v77 = (struct FastRegion::Internal::CRgnData *)MIDL_user_allocate(v21);
    if ( v77 )
    {
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v110);
      v17 = v101;
      v110 = v77;
      v111[0] = v21;
LABEL_9:
      v22 = v110;
      v23 = 0;
      *(_DWORD *)v110 = v17;
      *((_DWORD *)v22 + 1) = v102;
      *((_DWORD *)v22 + 2) = v103;
      v24 = v105;
      v25 = (char *)&top + v105;
      v26 = (char *)v22 + 8 * v17 + 12;
      if ( v17 > 0 )
      {
        v27 = (_DWORD *)((char *)v22 + 12);
        do
        {
          *v27 = *(_DWORD *)((char *)v27 + (char *)&v101 - (char *)v22);
          v28 = v23;
          v27 += 2;
          v29 = (__int64)v22 + 8 * v23++ + 12;
          *(_DWORD *)(v29 + 4) = (unsigned int)(&top + 2 * v28) + 4 * ((v26 - v25) >> 2) + *(&top + 2 * v28 + 1) - v29;
        }
        while ( v23 < *(_DWORD *)v22 );
        v24 = v105;
      }
      v30 = (unsigned __int64)(int)((unsigned int)&top
                                  + 8 * (v101 - 1)
                                  + *(&top + 2 * v101 - 1)
                                  - (unsigned int)&top
                                  - v24) >> 2;
      v31 = (int)v30;
      if ( (int)v30 > 0 )
      {
        v32 = v25 - v26;
        do
        {
          *(_DWORD *)v26 = *(_DWORD *)&v26[v32];
          v26 += 4;
          --v31;
        }
        while ( v31 );
      }
      v3 = 0;
      goto LABEL_17;
    }
    v3 = -2147024882;
LABEL_17:
    if ( v3 < 0 )
      goto LABEL_87;
    v7 = (const struct FastRegion::Internal::CRgnData *)lpMem;
    v5 = a3;
LABEL_19:
    if ( v4 == 5 * (v4 / 5) || v4 == v5 - 1 )
    {
      if ( !*(_DWORD *)v110 )
      {
        v3 = 0;
        goto LABEL_34;
      }
      v33 = *this;
      if ( !*(_DWORD *)*this )
      {
        if ( this == &v110 )
          goto LABEL_32;
        v34 = v110;
        v35 = (_DWORD)v110 + 12;
        v36 = (int *)(this + 1);
        v37 = *((_DWORD *)v110 + 2 * *(_DWORD *)v110 + 2)
            + 8 * *(_DWORD *)v110
            - *((_DWORD *)v110 + 4)
            - 12
            + 8 * (*(_DWORD *)v110 - 1)
            + 24;
        v38 = 60;
        if ( this + 1 != (struct FastRegion::Internal::CRgnData **)v33 )
          v38 = *v36;
        if ( v38 < v37 )
        {
          v33 = MIDL_user_allocate(v37);
          if ( v33 )
          {
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
            *this = (struct FastRegion::Internal::CRgnData *)v33;
            *v36 = v37;
            goto LABEL_26;
          }
          v3 = -2147024882;
        }
        else
        {
LABEL_26:
          v39 = *(_DWORD *)v34;
          v40 = 0;
          *v33 = *(_DWORD *)v34;
          v33[1] = *((_DWORD *)v34 + 1);
          v33[2] = *((_DWORD *)v34 + 2);
          v41 = (__int64)v34 + *((int *)v34 + 4) + 12;
          v42 = &v33[2 * v39 + 3];
          if ( v39 > 0 )
          {
            v43 = v33 + 3;
            do
            {
              *v43 = *(_DWORD *)((char *)v43 + v34 - (struct FastRegion::Internal::CRgnData *)v33);
              v43 += 2;
              v44 = v40++;
              v33[2 * v44 + 4] = 4 * (((__int64)v42 - v41) >> 2)
                               + (_DWORD)v34
                               + 8 * v44
                               + *((_DWORD *)v34 + 2 * v44 + 4)
                               - ((_DWORD)v33
                                + 8 * v44);
            }
            while ( v40 < *v33 );
          }
          v45 = (__int64)v34 + 8 * *(_DWORD *)v34 + 4;
          v46 = (unsigned __int64)((int)v45 + *(_DWORD *)(v45 + 4) - *((_DWORD *)v34 + 4) - v35) >> 2;
          v47 = (int)v46;
          if ( (int)v46 > 0 )
          {
            v48 = v41 - (_QWORD)v42;
            do
            {
              *v42 = *(_DWORD *)((char *)v42 + v48);
              ++v42;
              --v47;
            }
            while ( v47 );
          }
LABEL_32:
          v3 = 0;
        }
LABEL_33:
        if ( v3 < 0 )
          goto LABEL_87;
LABEL_34:
        *(_DWORD *)v110 = 0;
        v7 = (const struct FastRegion::Internal::CRgnData *)lpMem;
        goto LABEL_35;
      }
      v57 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*this, v110);
      v58 = (FastRegion::Internal::CRgnData *)v117;
      v116 = v117;
      v115 = v57;
      if ( (unsigned __int64)v57 > 0x100 )
      {
        v96 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v57);
        v58 = v96;
        if ( !v96 )
        {
          v97 = v116;
          if ( v117 != v116 )
LABEL_85:
            operator delete(v97);
LABEL_86:
          v3 = -2147024882;
LABEL_87:
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&lpMem);
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v110);
          return (unsigned int)v3;
        }
        v116 = v96;
      }
      FastRegion::Internal::CRgnData::Union(v58, *this, v110);
      v59 = (int *)v116;
      v3 = 0;
      if ( *(_DWORD *)v116 )
      {
        if ( v117 == v116 )
        {
          v60 = *this;
          v61 = (_DWORD)v116 + 12;
          v62 = (int *)(this + 1);
          v63 = *((_DWORD *)v116 + 2 * *(_DWORD *)v116 + 2)
              + 8 * *(_DWORD *)v116
              - *((_DWORD *)v116 + 4)
              - 12
              + 8 * (*(_DWORD *)v116 - 1)
              + 24;
          v64 = 60;
          if ( this + 1 != (struct FastRegion::Internal::CRgnData **)*this )
            v64 = *v62;
          if ( v64 < v63 )
          {
            v60 = MIDL_user_allocate(v63);
            if ( v60 )
            {
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
              *this = (struct FastRegion::Internal::CRgnData *)v60;
              *v62 = v63;
              goto LABEL_55;
            }
            v3 = -2147024882;
          }
          else
          {
LABEL_55:
            v65 = *v59;
            v66 = 0;
            *v60 = *v59;
            v60[1] = v59[1];
            v60[2] = v59[2];
            v67 = (__int64)v59 + v59[4] + 12;
            v68 = &v60[2 * v65 + 3];
            if ( v65 > 0 )
            {
              v69 = v60 + 3;
              do
              {
                *v69 = *(_DWORD *)((char *)v69 + (char *)v59 - (char *)v60);
                v69 += 2;
                v70 = v66++;
                v60[2 * v70 + 4] = 4 * (((__int64)v68 - v67) >> 2)
                                 + (_DWORD)v59
                                 + 8 * v70
                                 + v59[2 * v70 + 4]
                                 - ((_DWORD)v60
                                  + 8 * v70);
              }
              while ( v66 < *v60 );
            }
            v71 = (__int64)&v59[2 * *v59 + 1];
            v72 = (unsigned __int64)((int)v71 + *(_DWORD *)(v71 + 4) - v59[4] - v61) >> 2;
            v73 = (int)v72;
            if ( (int)v72 > 0 )
            {
              v74 = v67 - (_QWORD)v68;
              do
              {
                *v68 = *(_DWORD *)((char *)v68 + v74);
                ++v68;
                --v73;
              }
              while ( v73 );
            }
            v3 = 0;
          }
        }
        else
        {
          v94 = v115;
          v116 = v117;
          v115 = 0;
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
          *this = (struct FastRegion::Internal::CRgnData *)v59;
          *((_DWORD *)this + 2) = v94;
        }
      }
      else
      {
        *(_DWORD *)*this = 0;
      }
      v75 = v116;
      if ( v117 != v116 && v116 )
      {
        v76 = GetProcessHeap();
        HeapFree(v76, 0, v75);
      }
      goto LABEL_33;
    }
LABEL_35:
    if ( &v101 != (int *)v7 )
    {
      if ( v7 )
      {
        v51 = GetProcessHeap();
        HeapFree(v51, 0, v7);
      }
    }
    v5 = a3;
    ++v4;
    a2 = v99;
  }
  v49 = v110;
  if ( v111 != (_DWORD *)v110 && v110 )
  {
    v52 = GetProcessHeap();
    HeapFree(v52, 0, v49);
  }
  return (unsigned int)v3;
}
