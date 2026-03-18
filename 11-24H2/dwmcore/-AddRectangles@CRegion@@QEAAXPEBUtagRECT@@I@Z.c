/*
 * XREFs of ?AddRectangles@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x18002EDA0
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18002F5A0 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x1800A600C (-AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z.c)
 *     ?SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x180207270 (-SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV-$span@$$CBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDS.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18002AFC0 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002B300 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x18002EC00 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CRegion::AddRectangles(
        struct FastRegion::Internal::CRgnData **this,
        const struct tagRECT *a2,
        unsigned int a3)
{
  unsigned int v3; // r11d
  unsigned int i; // r14d
  const struct FastRegion::Internal::CRgnData *v6; // rdi
  const struct tagRECT *v7; // rax
  LONG right; // r9d
  LONG left; // r10d
  LONG bottom; // edx
  int v11; // esp
  int v12; // ecx
  int v13; // eax
  int v14; // r8d
  int v15; // ecx
  int v16; // esi
  int v17; // eax
  int v18; // esp
  int v19; // edi
  int v20; // edi
  struct FastRegion::Internal::CRgnData *v21; // rbx
  int v22; // r10d
  int v23; // edx
  char *v24; // r11
  char *v25; // r8
  _DWORD *v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r11
  int v32; // ebx
  struct FastRegion::Internal::CRgnData *v33; // rbx
  _DWORD *v34; // rdi
  int v35; // r12d
  int *v36; // r15
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
  HANDLE ProcessHeap; // rax
  HANDLE v51; // rax
  int v52; // eax
  FastRegion::Internal::CRgnData *v53; // rcx
  struct FastRegion::Internal::CRgnData *v54; // rdi
  int v55; // r15d
  int v56; // eax
  FastRegion::Internal::CRgnData *v57; // rcx
  struct FastRegion::Internal::CRgnData *v58; // rbx
  _DWORD *v59; // rbx
  int v60; // r12d
  int v61; // esi
  int v62; // eax
  int v63; // ecx
  int v64; // r11d
  __int64 v65; // r9
  _DWORD *v66; // r8
  _DWORD *v67; // r10
  __int64 v68; // rax
  __int64 v69; // rcx
  unsigned __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r9
  int v73; // esi
  struct FastRegion::Internal::CRgnData *v74; // rdi
  FastRegion::Internal::CRgnData *v75; // rax
  struct FastRegion::Internal::CRgnData *v76; // rax
  void *v77; // rcx
  const struct tagRECT *v79; // [rsp+28h] [rbp-D8h]
  LPVOID lpMem; // [rsp+30h] [rbp-D0h] BYREF
  int v81; // [rsp+38h] [rbp-C8h] BYREF
  LONG v82; // [rsp+3Ch] [rbp-C4h]
  LONG v83; // [rsp+40h] [rbp-C0h]
  LONG top; // [rsp+44h] [rbp-BCh] BYREF
  int v85; // [rsp+48h] [rbp-B8h]
  LONG v86; // [rsp+4Ch] [rbp-B4h]
  int v87; // [rsp+50h] [rbp-B0h]
  LONG v88; // [rsp+54h] [rbp-ACh]
  LONG v89; // [rsp+58h] [rbp-A8h]
  struct FastRegion::Internal::CRgnData *v90; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v91[18]; // [rsp+88h] [rbp-78h] BYREF
  int v92; // [rsp+D0h] [rbp-30h]
  void *v93; // [rsp+D8h] [rbp-28h]
  _BYTE v94[256]; // [rsp+E0h] [rbp-20h] BYREF
  int v95; // [rsp+1E0h] [rbp+E0h]
  struct FastRegion::Internal::CRgnData *v96; // [rsp+1E8h] [rbp+E8h]
  _BYTE v97[256]; // [rsp+1F0h] [rbp+F0h] BYREF
  void *retaddr; // [rsp+328h] [rbp+228h]

  v90 = (struct FastRegion::Internal::CRgnData *)v91;
  v3 = a3;
  v79 = a2;
  v91[0] = 0;
  for ( i = 0; i < v3; ++i )
  {
    v6 = (const struct FastRegion::Internal::CRgnData *)&v81;
    v7 = &a2[i];
    lpMem = &v81;
    right = v7->right;
    left = v7->left;
    bottom = v7->bottom;
    if ( v7->left >= right || v7->top >= bottom )
    {
      v81 = 0;
      goto LABEL_19;
    }
    v12 = v11 + 84;
    top = v7->top;
    v13 = v11 + 68;
    v82 = left;
    v14 = v11 + 84 - v13;
    v83 = right;
    v85 = v14;
    v15 = v12 - (v11 + 76);
    v88 = left;
    v16 = 2;
    v89 = right;
    v81 = 2;
    v86 = bottom;
    v87 = v15 + 8;
    if ( *(_DWORD *)v90 )
    {
      v52 = FastRegion::Internal::CRgnData::EstimateSizeUnion(v90, (const struct FastRegion::Internal::CRgnData *)&v81);
      v53 = (FastRegion::Internal::CRgnData *)v94;
      v93 = v94;
      v92 = v52;
      if ( (unsigned __int64)v52 > 0x100 )
      {
        v75 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v52);
        v53 = v75;
        if ( !v75 )
        {
          v77 = v93;
          if ( v94 != v93 )
            goto LABEL_74;
          goto LABEL_75;
        }
        v6 = (const struct FastRegion::Internal::CRgnData *)lpMem;
        v93 = v75;
      }
      FastRegion::Internal::CRgnData::Union(v53, v90, v6);
      v54 = (struct FastRegion::Internal::CRgnData *)v93;
      v32 = 0;
      if ( *(_DWORD *)v93 )
      {
        if ( v94 != v93 )
        {
          v55 = v92;
          v93 = v94;
          v92 = 0;
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v90);
          v90 = v54;
          v91[0] = v55;
          goto LABEL_67;
        }
        v59 = v90;
        v60 = (_DWORD)v93 + 12;
        v61 = *((_DWORD *)v93 + 2 * *(_DWORD *)v93 + 2)
            + 8 * *(_DWORD *)v93
            - *((_DWORD *)v93 + 4)
            - 12
            + 8 * (*(_DWORD *)v93 - 1)
            + 24;
        v62 = v91[0];
        if ( v91 == (_DWORD *)v90 )
          v62 = 60;
        if ( v62 >= v61 )
        {
LABEL_60:
          v63 = *(_DWORD *)v54;
          v64 = 0;
          *v59 = *(_DWORD *)v54;
          v59[1] = *((_DWORD *)v54 + 1);
          v59[2] = *((_DWORD *)v54 + 2);
          v65 = (__int64)v54 + *((int *)v54 + 4) + 12;
          v66 = &v59[2 * v63 + 3];
          if ( v63 > 0 )
          {
            v67 = v59 + 3;
            do
            {
              *v67 = *(_DWORD *)((char *)v67 + v54 - (struct FastRegion::Internal::CRgnData *)v59);
              v67 += 2;
              v68 = v64++;
              v59[2 * v68 + 4] = (_DWORD)v54
                               + 8 * v68
                               + 4 * (((__int64)v66 - v65) >> 2)
                               + *((_DWORD *)v54 + 2 * v68 + 4)
                               - ((_DWORD)v59
                                + 8 * v68);
            }
            while ( v64 < *v59 );
          }
          v69 = (__int64)v54 + 8 * *(_DWORD *)v54 + 4;
          v70 = (unsigned __int64)((int)v69 + *(_DWORD *)(v69 + 4) - *((_DWORD *)v54 + 4) - v60) >> 2;
          v71 = (int)v70;
          if ( (int)v70 > 0 )
          {
            v72 = v65 - (_QWORD)v66;
            do
            {
              *v66 = *(_DWORD *)((char *)v66 + v72);
              ++v66;
              --v71;
            }
            while ( v71 );
          }
          v32 = 0;
          goto LABEL_67;
        }
        v59 = MIDL_user_allocate(v61);
        if ( v59 )
        {
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v90);
          v90 = (struct FastRegion::Internal::CRgnData *)v59;
          v91[0] = v61;
          goto LABEL_60;
        }
        v32 = -2147024882;
      }
      else
      {
        *(_DWORD *)v90 = 0;
      }
LABEL_67:
      if ( v94 != v93 )
        operator delete(v93);
      goto LABEL_17;
    }
    v17 = v91[0];
    v19 = v18 + 112;
    v20 = v15 - (unsigned int)&top - v14 + v19;
    if ( v91 == (_DWORD *)v90 )
      v17 = 60;
    if ( v17 >= v20 )
      goto LABEL_9;
    v58 = (struct FastRegion::Internal::CRgnData *)MIDL_user_allocate(v20);
    if ( v58 )
    {
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v90);
      v16 = v81;
      v90 = v58;
      v91[0] = v20;
LABEL_9:
      v21 = v90;
      v22 = 0;
      *(_DWORD *)v90 = v16;
      *((_DWORD *)v21 + 1) = v82;
      *((_DWORD *)v21 + 2) = v83;
      v23 = v85;
      v24 = (char *)&top + v85;
      v25 = (char *)v21 + 8 * v16 + 12;
      if ( v16 > 0 )
      {
        v26 = (_DWORD *)((char *)v21 + 12);
        do
        {
          *v26 = *(_DWORD *)((char *)v26 + (char *)&v81 - (char *)v21);
          v27 = v22;
          v26 += 2;
          v28 = (__int64)v21 + 8 * v22++ + 12;
          *(_DWORD *)(v28 + 4) = (unsigned int)(&top + 2 * v27) + 4 * ((v25 - v24) >> 2) + *(&top + 2 * v27 + 1) - v28;
        }
        while ( v22 < *(_DWORD *)v21 );
        v23 = v85;
      }
      v29 = (unsigned __int64)(int)(*(&top + 2 * v81 - 1) - v23 - (unsigned int)&top + (unsigned int)&top
                                                                                     + 8 * (v81 - 1)) >> 2;
      v30 = (int)v29;
      if ( (int)v29 > 0 )
      {
        v31 = v24 - v25;
        do
        {
          *(_DWORD *)v25 = *(_DWORD *)&v25[v31];
          v25 += 4;
          --v30;
        }
        while ( v30 );
      }
      v32 = 0;
      goto LABEL_17;
    }
    v32 = -2147024882;
LABEL_17:
    if ( v32 < 0 )
      goto LABEL_76;
    v6 = (const struct FastRegion::Internal::CRgnData *)lpMem;
    v3 = a3;
LABEL_19:
    if ( i == 5 * (i / 5) || i == v3 - 1 )
    {
      v33 = v90;
      if ( *(_DWORD *)v90 )
      {
        v34 = *this;
        if ( *(_DWORD *)*this )
        {
          v56 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*this, v90);
          v57 = (FastRegion::Internal::CRgnData *)v97;
          v96 = (struct FastRegion::Internal::CRgnData *)v97;
          v95 = v56;
          if ( (unsigned __int64)v56 > 0x100 )
          {
            v76 = (struct FastRegion::Internal::CRgnData *)MIDL_user_allocate(v56);
            v57 = v76;
            if ( !v76 )
            {
              v77 = v96;
              if ( v97 != (_BYTE *)v96 )
LABEL_74:
                operator delete(v77);
LABEL_75:
              v32 = -2147024882;
LABEL_76:
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&lpMem);
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v90);
              ModuleFailFastForHRESULT(v32, retaddr);
            }
            v96 = v76;
          }
          FastRegion::Internal::CRgnData::Union(v57, *this, v90);
          v32 = 0;
          if ( *(_DWORD *)v96 )
          {
            if ( v97 == (_BYTE *)v96 )
            {
              v32 = FastRegion::CRegion::CopyData(this, v96);
            }
            else
            {
              v73 = v95;
              v74 = v96;
              v95 = 0;
              v96 = (struct FastRegion::Internal::CRgnData *)v97;
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
              *this = v74;
              *((_DWORD *)this + 2) = v73;
            }
          }
          else
          {
            *(_DWORD *)*this = 0;
          }
          if ( v97 != (_BYTE *)v96 )
            operator delete(v96);
        }
        else
        {
          if ( this == &v90 )
            goto LABEL_32;
          v35 = (_DWORD)v90 + 12;
          v36 = (int *)(this + 1);
          v37 = *((_DWORD *)v90 + 2 * *(_DWORD *)v90 + 2)
              + 8 * *(_DWORD *)v90
              - *((_DWORD *)v90 + 4)
              - 12
              + 8 * (*(_DWORD *)v90 - 1)
              + 24;
          v38 = 60;
          if ( this + 1 != (struct FastRegion::Internal::CRgnData **)v34 )
            v38 = *v36;
          if ( v38 < v37 )
          {
            v34 = MIDL_user_allocate(v37);
            if ( v34 )
            {
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
              *this = (struct FastRegion::Internal::CRgnData *)v34;
              *v36 = v37;
              goto LABEL_26;
            }
            v32 = -2147024882;
          }
          else
          {
LABEL_26:
            v39 = *(_DWORD *)v33;
            v40 = 0;
            *v34 = *(_DWORD *)v33;
            v34[1] = *((_DWORD *)v33 + 1);
            v34[2] = *((_DWORD *)v33 + 2);
            v41 = (__int64)v33 + *((int *)v33 + 4) + 12;
            v42 = &v34[2 * v39 + 3];
            if ( v39 > 0 )
            {
              v43 = v34 + 3;
              do
              {
                *v43 = *(_DWORD *)((char *)v43 + v33 - (struct FastRegion::Internal::CRgnData *)v34);
                v43 += 2;
                v44 = v40++;
                v34[2 * v44 + 4] = (_DWORD)v33
                                 + 8 * v44
                                 + 4 * (((__int64)v42 - v41) >> 2)
                                 + *((_DWORD *)v33 + 2 * v44 + 4)
                                 - ((_DWORD)v34
                                  + 8 * v44);
              }
              while ( v40 < *v34 );
            }
            v45 = (__int64)v33 + 8 * *(_DWORD *)v33 + 4;
            v46 = (unsigned __int64)((int)v45 + *(_DWORD *)(v45 + 4) - *((_DWORD *)v33 + 4) - v35) >> 2;
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
            v32 = 0;
          }
        }
        if ( v32 < 0 )
          goto LABEL_76;
      }
      *(_DWORD *)v90 = 0;
      v6 = (const struct FastRegion::Internal::CRgnData *)lpMem;
    }
    if ( &v81 != (int *)v6 )
    {
      if ( v6 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v6);
      }
    }
    v3 = a3;
    a2 = v79;
  }
  v49 = v90;
  if ( v91 != (_DWORD *)v90 && v90 )
  {
    v51 = GetProcessHeap();
    HeapFree(v51, 0, v49);
  }
}
