/*
 * XREFs of ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400CF118
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140043A80 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A3128 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?RegionCore_subtract@Win32kRS@@YAHPEAVREGION_CORE@@PEBU_RECTL@@1_K@Z @ 0x1400A3930 (-RegionCore_subtract@Win32kRS@@YAHPEAVREGION_CORE@@PEBU_RECTL@@1_K@Z.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400BB03C (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400CE8CC (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??$IsBaseRustExportsEnabled@$00@@YA_NXZ @ 0x1400CFC10 (--$IsBaseRustExportsEnabled@$00@@YA_NXZ.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400CFC34 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x1401AA1FC (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall RGNOBJAPI::bSubtract(RGNOBJAPI *this, struct _RECTL *a2, struct _RECTL *a3, int a4)
{
  const struct _RECTL *v4; // r15
  __int64 v8; // r14
  LONG top; // r9d
  LONG bottom; // r10d
  LONG left; // r11d
  LONG right; // ecx
  LONG v13; // edx
  LONG v14; // r15d
  LONG v15; // r8d
  bool v16; // cc
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v27; // ebx
  unsigned int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  const struct _RECTL *v35; // rdx
  struct SCAN *v36; // rax
  _DWORD *v37; // rdx
  __int64 v38; // rcx
  struct SCAN *v39; // rax
  __int64 v40; // rdx
  LONG v41; // eax
  struct SCAN *v42; // rax
  _DWORD *v43; // rdx
  LONG v44; // eax
  LONG v45; // eax
  struct SCAN *pScan; // rax
  _DWORD *v47; // rdx
  __int64 v48; // rcx
  struct SCAN *v49; // rax
  _DWORD *v50; // rdx
  LONG v51; // eax
  __int64 v52; // rcx
  struct SCAN *v53; // rax
  struct SCAN *v54; // rax
  char *v55; // rdx
  __int64 v56; // rcx
  struct SCAN *v57; // rax
  struct SCAN *v58; // rax
  struct SCAN *v59; // rax
  struct SCAN *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // [rsp+20h] [rbp-28h] BYREF
  __int128 v63; // [rsp+28h] [rbp-20h] BYREF

  v4 = (const struct _RECTL *)a4;
  if ( (unsigned __int8)IsBaseRustExportsEnabled<1>() )
    return Win32kRS::RegionCore_subtract(
             (Win32kRS *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)),
             (struct REGION_CORE *)a2,
             a3,
             v4);
  v8 = *(_QWORD *)this;
  if ( (unsigned int)ERECTL::bEmpty((ERECTL *)a2) )
    goto LABEL_63;
  if ( (_DWORD)v4 == 1 )
  {
    top = a3->top;
    bottom = a2->bottom;
    if ( top >= bottom
      || (left = a3->left, right = a2->right, a3->left >= right)
      || (v13 = a3->bottom, v14 = a2->top, v13 <= v14)
      || (v15 = a3->right, v15 <= a2->left) )
    {
      v35 = a2;
      goto LABEL_39;
    }
    v16 = left <= a2->left;
    v63 = 0LL;
    v17 = v15 >= right;
    if ( !v16 )
      v17 += 2;
    if ( top > v14 )
    {
      v18 = 8;
      if ( v13 >= bottom )
        v18 = 12;
    }
    else
    {
      v18 = 0;
      if ( v13 >= bottom )
        v18 = 4;
    }
    v19 = v17 + v18;
    if ( v19 > 8 )
    {
      v20 = v19 - 9;
      if ( !v20 )
      {
        REGION_CORE::set_sizeScan((REGION_CORE *)(v8 + 24), (struct REGION_CORE *)0x60);
        *(_DWORD *)(v8 + 48) = 5;
        *(struct _RECTL *)(v8 + 52) = *a2;
        pScan = REGION_CORE::get_pScan((REGION_CORE *)(v8 + 24));
        *(_DWORD *)pScan = 0;
        *((_DWORD *)pScan + 1) = 0x80000000;
        *((_DWORD *)pScan + 2) = a2->top;
        *((_DWORD *)pScan + 3) = 0;
        *((_DWORD *)pScan + 4) = 2;
        *((_DWORD *)pScan + 5) = a2->top;
        *((_DWORD *)pScan + 6) = a3->top;
        *((_DWORD *)pScan + 7) = a2->left;
        *((_DWORD *)pScan + 8) = a2->right;
        *((_DWORD *)pScan + 9) = 2;
        v47 = (_DWORD *)((char *)pScan + (unsigned int)(4 * *((_DWORD *)pScan + 4) + 16) + 16);
        *v47 = 0;
        v47[1] = a3->top;
        v47[2] = a3->bottom;
        v47[3] = 0;
        v47[4] = 2;
        v47[5] = a3->bottom;
        v47[6] = a2->bottom;
        v47[7] = a2->left;
        v47[8] = a2->right;
        v47[9] = 2;
        v48 = (unsigned int)(4 * v47[4] + 16);
        *(_DWORD *)((char *)v47 + v48 + 16) = 0;
        *(_DWORD *)((char *)v47 + v48 + 20) = a2->bottom;
        *(_QWORD *)((char *)v47 + v48 + 24) = 0x7FFFFFFFLL;
        return 1LL;
      }
      v21 = v20 - 1;
      if ( !v21 )
      {
        REGION_CORE::set_sizeScan((REGION_CORE *)(v8 + 24), (struct REGION_CORE *)0x70);
        *(_DWORD *)(v8 + 48) = 5;
        *(struct _RECTL *)(v8 + 52) = *a2;
        v36 = REGION_CORE::get_pScan((REGION_CORE *)(v8 + 24));
        *(_DWORD *)v36 = 0;
        *((_DWORD *)v36 + 1) = 0x80000000;
        *((_DWORD *)v36 + 2) = a2->top;
        *((_DWORD *)v36 + 3) = 0;
        *((_DWORD *)v36 + 4) = 2;
        *((_DWORD *)v36 + 5) = a2->top;
        *((_DWORD *)v36 + 6) = a3->top;
        *((_DWORD *)v36 + 7) = a2->left;
        *((_DWORD *)v36 + 8) = a2->right;
        *((_DWORD *)v36 + 9) = 2;
        v37 = (_DWORD *)((char *)v36 + (unsigned int)(4 * *((_DWORD *)v36 + 4) + 16) + 16);
        *v37 = 4;
        v37[1] = a3->top;
        v37[2] = a3->bottom;
        v37[3] = a2->left;
        v37[4] = a3->left;
        v37[5] = a3->right;
        v37[6] = a2->right;
        v37[7] = 4;
        v37[8] = 2;
        v37[9] = a3->bottom;
        v37[10] = a2->bottom;
        v37[11] = a2->left;
        v37[12] = a2->right;
        v37[13] = 2;
        v38 = (unsigned int)(4 * v37[8] + 16);
        *(_DWORD *)((char *)v37 + v38 + 32) = 0;
        *(_DWORD *)((char *)v37 + v38 + 36) = a2->bottom;
        *(_QWORD *)((char *)v37 + v38 + 40) = 0x7FFFFFFFLL;
        return 1LL;
      }
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( !v25 )
            {
              REGION_CORE::set_sizeScan((REGION_CORE *)(v8 + 24), (struct REGION_CORE *)0x58);
              *(_DWORD *)(v8 + 48) = 4;
              *(struct _RECTL *)(v8 + 52) = *a2;
              v60 = REGION_CORE::get_pScan((REGION_CORE *)(v8 + 24));
              *(_DWORD *)v60 = 0;
              *((_DWORD *)v60 + 1) = 0x80000000;
              *((_DWORD *)v60 + 2) = a2->top;
              *((_DWORD *)v60 + 3) = 0;
              *((_DWORD *)v60 + 4) = 2;
              *((_DWORD *)v60 + 5) = a2->top;
              *((_DWORD *)v60 + 6) = a3->top;
              *((_DWORD *)v60 + 7) = a2->left;
              *((_DWORD *)v60 + 8) = a2->right;
              *((_DWORD *)v60 + 9) = 2;
              v61 = (__int64)v60 + (unsigned int)(4 * *((_DWORD *)v60 + 4) + 16) + 16;
              *(_DWORD *)v61 = 4;
              *(_DWORD *)(v61 + 4) = a3->top;
              *(_DWORD *)(v61 + 8) = a2->bottom;
              *(_DWORD *)(v61 + 12) = a2->left;
              *(_DWORD *)(v61 + 16) = a3->left;
              *(_DWORD *)(v61 + 20) = a3->right;
              *(_DWORD *)(v61 + 24) = a2->right;
              *(_QWORD *)(v61 + 28) = 4LL;
              *(_DWORD *)(v61 + 36) = a2->bottom;
              *(_QWORD *)(v61 + 40) = 0x7FFFFFFFLL;
              return 1LL;
            }
            if ( v25 != 1 )
              return 1LL;
            REGION_CORE::set_sizeScan((REGION_CORE *)(v8 + 24), (struct REGION_CORE *)0x50);
            *(_DWORD *)(v8 + 48) = 4;
            *(struct _RECTL *)(v8 + 52) = *a2;
            v57 = REGION_CORE::get_pScan((REGION_CORE *)(v8 + 24));
            *(_DWORD *)v57 = 0;
            *((_DWORD *)v57 + 1) = 0x80000000;
            *((_DWORD *)v57 + 2) = a2->top;
            *((_DWORD *)v57 + 3) = 0;
            *((_DWORD *)v57 + 4) = 2;
            *((_DWORD *)v57 + 5) = a2->top;
            *((_DWORD *)v57 + 6) = a3->top;
            *((_DWORD *)v57 + 7) = a2->left;
            *((_DWORD *)v57 + 8) = a2->right;
            *((_DWORD *)v57 + 9) = 2;
            v40 = (__int64)v57 + (unsigned int)(4 * *((_DWORD *)v57 + 4) + 16) + 16;
            *(_DWORD *)v40 = 2;
            *(_DWORD *)(v40 + 4) = a3->top;
            *(_DWORD *)(v40 + 8) = a2->bottom;
            *(_DWORD *)(v40 + 12) = a2->left;
            v45 = a3->left;
LABEL_51:
            *(_DWORD *)(v40 + 16) = v45;
            *(_QWORD *)(v40 + 20) = 2LL;
            *(_DWORD *)(v40 + 28) = a2->bottom;
            *(_QWORD *)(v40 + 32) = 0x7FFFFFFFLL;
            return 1LL;
          }
          v63 = (__int128)*a2;
          HIDWORD(v63) = top;
          goto LABEL_38;
        }
        REGION_CORE::set_sizeScan((REGION_CORE *)(v8 + 24), (struct REGION_CORE *)0x50);
        *(_DWORD *)(v8 + 48) = 4;
        *(struct _RECTL *)(v8 + 52) = *a2;
        v39 = REGION_CORE::get_pScan((REGION_CORE *)(v8 + 24));
        *(_DWORD *)v39 = 0;
        *((_DWORD *)v39 + 1) = 0x80000000;
        *((_DWORD *)v39 + 2) = a2->top;
        *((_DWORD *)v39 + 3) = 0;
        *((_DWORD *)v39 + 4) = 2;
        *((_DWORD *)v39 + 5) = a2->top;
        *((_DWORD *)v39 + 6) = a3->top;
        *((_DWORD *)v39 + 7) = a2->left;
        *((_DWORD *)v39 + 8) = a2->right;
        *((_DWORD *)v39 + 9) = 2;
        v40 = (__int64)v39 + (unsigned int)(4 * *((_DWORD *)v39 + 4) + 16) + 16;
        *(_DWORD *)v40 = 2;
        *(_DWORD *)(v40 + 4) = a3->top;
        *(_DWORD *)(v40 + 8) = a2->bottom;
        v41 = a3->right;
LABEL_50:
        *(_DWORD *)(v40 + 12) = v41;
        v45 = a2->right;
        goto LABEL_51;
      }
      REGION_CORE::set_sizeScan((REGION_CORE *)(v8 + 24), (struct REGION_CORE *)0x68);
      *(_DWORD *)(v8 + 48) = 5;
      *(struct _RECTL *)(v8 + 52) = *a2;
      v49 = REGION_CORE::get_pScan((REGION_CORE *)(v8 + 24));
      *(_DWORD *)v49 = 0;
      *((_DWORD *)v49 + 1) = 0x80000000;
      *((_DWORD *)v49 + 2) = a2->top;
      *((_DWORD *)v49 + 3) = 0;
      *((_DWORD *)v49 + 4) = 2;
      *((_DWORD *)v49 + 5) = a2->top;
      *((_DWORD *)v49 + 6) = a3->top;
      *((_DWORD *)v49 + 7) = a2->left;
      *((_DWORD *)v49 + 8) = a2->right;
      *((_DWORD *)v49 + 9) = 2;
      v50 = (_DWORD *)((char *)v49 + (unsigned int)(4 * *((_DWORD *)v49 + 4) + 16) + 16);
      *v50 = 2;
      v50[1] = a3->top;
      v50[2] = a3->bottom;
      v50[3] = a2->left;
      v51 = a3->left;
LABEL_54:
      v50[4] = v51;
      v50[5] = 2;
      v50[6] = 2;
      v50[7] = a3->bottom;
      v50[8] = a2->bottom;
      v50[9] = a2->left;
      v50[10] = a2->right;
      v50[11] = 2;
      v52 = (unsigned int)(4 * v50[6] + 16);
      *(_DWORD *)((char *)v50 + v52 + 24) = 0;
      *(_DWORD *)((char *)v50 + v52 + 28) = a2->bottom;
      *(_QWORD *)((char *)v50 + v52 + 32) = 0x7FFFFFFFLL;
      return 1LL;
    }
    if ( v19 == 8 )
    {
      REGION_CORE::set_sizeScan((REGION_CORE *)(v8 + 24), (struct REGION_CORE *)0x68);
      *(_DWORD *)(v8 + 48) = 5;
      *(struct _RECTL *)(v8 + 52) = *a2;
      v58 = REGION_CORE::get_pScan((REGION_CORE *)(v8 + 24));
      *(_DWORD *)v58 = 0;
      *((_DWORD *)v58 + 1) = 0x80000000;
      *((_DWORD *)v58 + 2) = a2->top;
      *((_DWORD *)v58 + 3) = 0;
      *((_DWORD *)v58 + 4) = 2;
      *((_DWORD *)v58 + 5) = a2->top;
      *((_DWORD *)v58 + 6) = a3->top;
      *((_DWORD *)v58 + 7) = a2->left;
      *((_DWORD *)v58 + 8) = a2->right;
      *((_DWORD *)v58 + 9) = 2;
      v50 = (_DWORD *)((char *)v58 + (unsigned int)(4 * *((_DWORD *)v58 + 4) + 16) + 16);
      *v50 = 2;
      v50[1] = a3->top;
      v50[2] = a3->bottom;
      v50[3] = a3->right;
      v51 = a2->right;
      goto LABEL_54;
    }
    if ( v19 )
    {
      v29 = v19 - 1;
      if ( !v29 )
      {
        v63 = (__int128)*a2;
        DWORD1(v63) = v13;
        goto LABEL_38;
      }
      v30 = v29 - 1;
      if ( !v30 )
      {
        REGION_CORE::set_sizeScan((REGION_CORE *)(v8 + 24), (struct REGION_CORE *)0x58);
        *(_DWORD *)(v8 + 48) = 4;
        *(struct _RECTL *)(v8 + 52) = *a2;
        v53 = REGION_CORE::get_pScan((REGION_CORE *)(v8 + 24));
        *(_DWORD *)v53 = 0;
        v43 = (_DWORD *)((char *)v53 + 16);
        *((_DWORD *)v53 + 1) = 0x80000000;
        *((_DWORD *)v53 + 2) = a2->top;
        *((_DWORD *)v53 + 3) = 0;
        *((_DWORD *)v53 + 4) = 4;
        *((_DWORD *)v53 + 5) = a2->top;
        *((_DWORD *)v53 + 6) = a3->bottom;
        *((_DWORD *)v53 + 7) = a2->left;
        *((_DWORD *)v53 + 8) = a3->left;
        *((_DWORD *)v53 + 9) = a3->right;
        *((_DWORD *)v53 + 10) = a2->right;
        *((_DWORD *)v53 + 11) = 4;
        goto LABEL_49;
      }
      v31 = v30 - 1;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            v34 = v33 - 1;
            if ( !v34 )
            {
              REGION_CORE::set_sizeScan((REGION_CORE *)(v8 + 24), (struct REGION_CORE *)0x40);
              *(_DWORD *)(v8 + 48) = 3;
              *(struct _RECTL *)(v8 + 52) = *a2;
              v54 = REGION_CORE::get_pScan((REGION_CORE *)(v8 + 24));
              *(_DWORD *)v54 = 0;
              v55 = (char *)v54 + 16;
              *((_DWORD *)v54 + 1) = 0x80000000;
              *((_DWORD *)v54 + 2) = a2->top;
              *((_DWORD *)v54 + 3) = 0;
              *((_DWORD *)v54 + 4) = 4;
              *((_DWORD *)v54 + 5) = a2->top;
              *((_DWORD *)v54 + 6) = a2->bottom;
              *((_DWORD *)v54 + 7) = a2->left;
              *((_DWORD *)v54 + 8) = a3->left;
              *((_DWORD *)v54 + 9) = a3->right;
              *((_DWORD *)v54 + 10) = a2->right;
              *((_DWORD *)v54 + 11) = 4;
              v56 = (unsigned int)(4 * *((_DWORD *)v54 + 4) + 16);
              *(_DWORD *)&v55[v56] = 0;
              *(_DWORD *)&v55[v56 + 4] = a2->bottom;
              *(_QWORD *)&v55[v56 + 8] = 0x7FFFFFFFLL;
              return 1LL;
            }
            if ( v34 != 1 )
              return 1LL;
            v63 = (__int128)*a2;
            DWORD2(v63) = left;
            goto LABEL_38;
          }
LABEL_63:
          RGNOBJ::vSet(this);
          return 1LL;
        }
        v63 = (__int128)*a2;
        LODWORD(v63) = v15;
LABEL_38:
        v35 = (const struct _RECTL *)&v63;
LABEL_39:
        RGNOBJ::vSet(this, v35);
        return 1LL;
      }
      REGION_CORE::set_sizeScan((REGION_CORE *)(v8 + 24), (struct REGION_CORE *)0x50);
      *(_DWORD *)(v8 + 48) = 4;
      *(struct _RECTL *)(v8 + 52) = *a2;
      v42 = REGION_CORE::get_pScan((REGION_CORE *)(v8 + 24));
      *(_DWORD *)v42 = 0;
      v43 = (_DWORD *)((char *)v42 + 16);
      *((_DWORD *)v42 + 1) = 0x80000000;
      *((_DWORD *)v42 + 2) = a2->top;
      *((_DWORD *)v42 + 3) = 0;
      *((_DWORD *)v42 + 4) = 2;
      *((_DWORD *)v42 + 5) = a2->top;
      *((_DWORD *)v42 + 6) = a3->bottom;
      *((_DWORD *)v42 + 7) = a2->left;
      v44 = a3->left;
    }
    else
    {
      REGION_CORE::set_sizeScan((REGION_CORE *)(v8 + 24), (struct REGION_CORE *)0x50);
      *(_DWORD *)(v8 + 48) = 4;
      *(struct _RECTL *)(v8 + 52) = *a2;
      v59 = REGION_CORE::get_pScan((REGION_CORE *)(v8 + 24));
      *(_DWORD *)v59 = 0;
      v43 = (_DWORD *)((char *)v59 + 16);
      *((_DWORD *)v59 + 1) = 0x80000000;
      *((_DWORD *)v59 + 2) = a2->top;
      *((_DWORD *)v59 + 3) = 0;
      *((_DWORD *)v59 + 4) = 2;
      *((_DWORD *)v59 + 5) = a2->top;
      *((_DWORD *)v59 + 6) = a3->bottom;
      *((_DWORD *)v59 + 7) = a3->right;
      v44 = a2->right;
    }
    v43[4] = v44;
    v43[5] = 2;
LABEL_49:
    v40 = (__int64)v43 + (unsigned int)(4 * *v43 + 16);
    *(_DWORD *)v40 = 2;
    *(_DWORD *)(v40 + 4) = a3->bottom;
    *(_DWORD *)(v40 + 8) = a2->bottom;
    v41 = a2->left;
    goto LABEL_50;
  }
  REGION_CORE::get_sizeScan((REGION_CORE *)(v8 + 24));
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v62);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v62, v28);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v62);
  if ( v62
    && (RGNOBJ::vCopy((RGNOBJ *)&v62, this), (unsigned int)RGNOBJ::bSubtractComplex((RGNOBJ *)&v62, a2, a3, (int)v4)) )
  {
    v27 = RGNOBJAPI::bSwap(this, (struct RGNOBJ *)&v62);
  }
  else
  {
    v27 = 0;
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v62);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v62);
  return v27;
}
