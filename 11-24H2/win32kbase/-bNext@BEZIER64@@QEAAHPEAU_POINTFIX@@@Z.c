/*
 * XREFs of ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x14013EA30
 * Callers:
 *     pprFlattenRec @ 0x14008E470 (pprFlattenRec.c)
 * Callees:
 *     ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x14008ED6C (-vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?vParentError@HFDBASIS64@@QEBAXPEA_J@Z @ 0x14013F014 (-vParentError@HFDBASIS64@@QEBAXPEA_J@Z.c)
 *     ?vInit@HFDBASIS64@@QEAAXJJJJ@Z @ 0x14013F220 (-vInit@HFDBASIS64@@QEAAXJJJJ@Z.c)
 *     ?vUntransform@HFDBASIS64@@QEAAXPEAJ@Z @ 0x14013F298 (-vUntransform@HFDBASIS64@@QEAAXPEAJ@Z.c)
 *     ?bIntersect@@YA_NPEAU_RECTFX@@0@Z @ 0x1401C3904 (-bIntersect@@YA_NPEAU_RECTFX@@0@Z.c)
 */

__int64 __fastcall BEZIER64::bNext(BEZIER64 *this, struct _POINTFIX *a2)
{
  bool v2; // zf
  __int64 v5; // r11
  struct _RECTFX *v6; // r11
  __int64 v7; // r8
  int v8; // r12d
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // r11
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 *v33; // rdi
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rax
  _QWORD *v44; // r10
  __int64 v45; // rax
  __int64 *v46; // r8
  __int64 *v47; // r9
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v52; // rdi
  __int64 v53; // r11
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 *v57; // rdi
  __int64 *v58; // r12
  __int64 *v59; // r13
  __int64 v60; // r14
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 *v64; // rsi
  __int64 *v65; // r15
  _QWORD *v66; // r14
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rcx
  _RECTFX v76; // [rsp+30h] [rbp-38h] BYREF
  struct _POINTFIX v77; // [rsp+40h] [rbp-28h] BYREF
  int v78; // [rsp+48h] [rbp-20h]
  int v79; // [rsp+4Ch] [rbp-1Ch]
  int v80; // [rsp+50h] [rbp-18h]
  int v81; // [rsp+54h] [rbp-14h]
  int v82; // [rsp+58h] [rbp-10h]
  int v83; // [rsp+5Ch] [rbp-Ch]
  int v84; // [rsp+B0h] [rbp+48h]
  __int64 v85; // [rsp+B0h] [rbp+48h]
  __int64 v86; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v87; // [rsp+C0h] [rbp+58h]
  __int64 v88; // [rsp+C8h] [rbp+60h]

  v2 = *((_DWORD *)this + 41) == 0;
  v76 = 0LL;
  if ( v2 )
  {
    HFDBASIS64::vUntransform((BEZIER64 *)((char *)this + 64), (int *)&v77);
    HFDBASIS64::vUntransform((BEZIER64 *)((char *)this + 96), &v77.y);
    HFDBASIS64::vInit(this, v77.x, v78, v80, v82);
    HFDBASIS64::vInit((BEZIER64 *)((char *)this + 32), v77.y, v79, v81, v83);
    v5 = *((_QWORD *)this + 17);
    *((_DWORD *)this + 41) = 1;
    if ( !v5 || (vBoundBox(&v77, &v76), bIntersect(&v76, v6)) )
    {
      v7 = *((_QWORD *)this + 6);
      v8 = 1;
      v9 = *((_QWORD *)this + 7);
      while ( 1 )
      {
        v10 = *((_QWORD *)this + 2);
        v11 = *((_QWORD *)this + 3);
        v12 = -v10;
        v13 = -v10;
        v14 = -v11;
        if ( v11 >= 0 )
          v14 = *((_QWORD *)this + 3);
        if ( v10 >= 0 )
          v13 = *((_QWORD *)this + 2);
        if ( v13 <= v14 )
        {
          v12 = *((_QWORD *)this + 3);
          if ( v11 < 0 )
            v12 = -*((_QWORD *)this + 3);
        }
        else if ( v10 >= 0 )
        {
          v12 = *((_QWORD *)this + 2);
        }
        v15 = *((_QWORD *)this + 16);
        if ( v12 <= v15 )
        {
          v16 = -v9;
          v17 = -v7;
          if ( v9 >= 0 )
            v16 = v9;
          if ( v7 >= 0 )
            v17 = v7;
          if ( v17 <= v16 )
          {
            v18 = v9;
            if ( v9 < 0 )
              v18 = -v9;
          }
          else
          {
            v18 = v7;
            if ( v7 < 0 )
              v18 = -v7;
          }
          if ( v18 <= v15 )
            break;
        }
        v8 *= 2;
        *((_DWORD *)this + 41) = v8;
        v19 = (v11 + v10) >> 3;
        v20 = *((_QWORD *)this + 1) - v19;
        *((_QWORD *)this + 2) = v19;
        *((_QWORD *)this + 1) = v20 >> 1;
        v7 = (v9 + v7) >> 3;
        *((_QWORD *)this + 3) = v11 >> 2;
        v21 = *((_QWORD *)this + 5) - v7;
        *((_QWORD *)this + 6) = v7;
        v9 >>= 2;
        *((_QWORD *)this + 7) = v9;
        *((_QWORD *)this + 5) = v21 >> 1;
      }
    }
    v2 = (*((_DWORD *)this + 40))-- == 1;
    if ( !v2 )
    {
      v22 = *((_QWORD *)this + 10);
      v23 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 8) += v23;
      *((_QWORD *)this + 9) = v22 + v23;
      *((_QWORD *)this + 10) = 2 * v22 - *((_QWORD *)this + 11);
      *((_QWORD *)this + 11) = v22;
      v24 = *((_QWORD *)this + 14);
      v25 = *((_QWORD *)this + 13);
      *((_QWORD *)this + 12) += v25;
      *((_QWORD *)this + 13) = v24 + v25;
      v26 = 2 * v24 - *((_QWORD *)this + 15);
      *((_QWORD *)this + 15) = v24;
      *((_QWORD *)this + 14) = v26;
      v27 = *((_QWORD *)this + 10);
      v28 = *((_QWORD *)this + 11);
      v29 = -v27;
      v30 = -v27;
      v31 = -v28;
      if ( v28 >= 0 )
        v31 = *((_QWORD *)this + 11);
      if ( v27 >= 0 )
        v30 = *((_QWORD *)this + 10);
      if ( v30 <= v31 )
      {
        v29 = *((_QWORD *)this + 11);
        if ( v28 < 0 )
          v29 = -*((_QWORD *)this + 11);
      }
      else if ( v27 >= 0 )
      {
        v29 = *((_QWORD *)this + 10);
      }
      v86 = v29;
      if ( v29 > 0x300000000000LL )
      {
        v33 = (__int64 *)((char *)this + 120);
      }
      else
      {
        v32 = v26;
        if ( v26 < 0 )
          v32 = -v26;
        v33 = (__int64 *)((char *)this + 120);
        v34 = *((_QWORD *)this + 15);
        v35 = -v34;
        if ( v34 >= 0 )
          v35 = *((_QWORD *)this + 15);
        if ( v32 <= v35 )
        {
          v26 = *((_QWORD *)this + 15);
          if ( v34 < 0 )
            v26 = -*((_QWORD *)this + 15);
        }
        else if ( v26 < 0 )
        {
          v26 = -v26;
        }
        v86 = v26;
        if ( v26 <= 0x300000000000LL )
          goto LABEL_57;
      }
      *((_DWORD *)this + 40) *= 2;
      v36 = (v28 + v27) >> 3;
      v37 = *((_QWORD *)this + 9) - v36;
      *((_QWORD *)this + 10) = v36;
      *((_QWORD *)this + 9) = v37 >> 1;
      *((_QWORD *)this + 11) = v28 >> 2;
      v38 = *v33;
      v39 = (*v33 + *((_QWORD *)this + 14)) >> 3;
      v40 = *((_QWORD *)this + 13) - v39;
      *((_QWORD *)this + 14) = v39;
      *v33 = v38 >> 2;
      *((_QWORD *)this + 13) = v40 >> 1;
LABEL_57:
      while ( (*((_DWORD *)this + 40) & 1) == 0 )
      {
        HFDBASIS64::vParentError((BEZIER64 *)((char *)this + 64), &v86);
        if ( v86 > 0x300000000000LL )
          break;
        HFDBASIS64::vParentError((BEZIER64 *)((char *)this + 96), &v86);
        if ( v86 > 0x300000000000LL )
          break;
        v41 = *((_QWORD *)this + 10);
        *((_QWORD *)this + 11) *= 4LL;
        *((_QWORD *)this + 9) = v41 + 2LL * *((_QWORD *)this + 9);
        *((_QWORD *)this + 10) = 8 * v41 - *((_QWORD *)this + 11);
        v42 = *((_QWORD *)this + 14);
        v43 = *((_QWORD *)this + 13);
        *v33 *= 4LL;
        *((_QWORD *)this + 13) = v42 + 2 * v43;
        *((_QWORD *)this + 14) = 8 * v42 - *v33;
        *((int *)this + 40) >>= 1;
      }
    }
  }
  v44 = (_QWORD *)((char *)this + 8);
  v45 = *((_QWORD *)this + 1);
  v46 = (__int64 *)((char *)this + 16);
  *(_QWORD *)this += v45;
  v47 = (__int64 *)((char *)this + 24);
  v48 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 1) = v48 + v45;
  *((_QWORD *)this + 2) = 2 * v48 - *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v48;
  v49 = *((_QWORD *)this + 6);
  v50 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 4) += v50;
  *((_QWORD *)this + 5) = v49 + v50;
  *((_QWORD *)this + 6) = 2 * v49 - *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v49;
  a2->x = (*(_QWORD *)this + 0x8000000LL) >> 28;
  a2->y = (*((_QWORD *)this + 4) + 0x8000000LL) >> 28;
  v84 = *((_DWORD *)this + 41) - 1;
  *((_DWORD *)this + 41) = v84;
  if ( !v84 && !*((_DWORD *)this + 40) )
    return 0LL;
  v52 = *v46;
  v53 = *v47;
  v54 = -*v46;
  v88 = *v46;
  v55 = v54;
  v56 = -v53;
  if ( v53 >= 0 )
    v56 = v53;
  if ( v52 >= 0 )
    v55 = v52;
  if ( v55 <= v56 )
  {
    v54 = -v53;
    if ( v53 >= 0 )
      v54 = v53;
  }
  else
  {
    v47 = (__int64 *)((char *)this + 24);
    v46 = (__int64 *)((char *)this + 16);
    if ( v52 >= 0 )
      v54 = v52;
    v44 = (_QWORD *)((char *)this + 8);
  }
  v57 = (__int64 *)((char *)this + 128);
  v86 = v54;
  v58 = (__int64 *)((char *)this + 48);
  v87 = *((_QWORD *)this + 16);
  v59 = (__int64 *)((char *)this + 56);
  if ( v54 > v87 )
  {
    v66 = v44;
    v64 = v47;
    v65 = v46;
  }
  else
  {
    v60 = *v58;
    v61 = -*v58;
    v62 = v61;
    v63 = -*v59;
    if ( *v59 >= 0 )
      v63 = *v59;
    if ( v60 >= 0 )
      v62 = *v58;
    if ( v62 <= v63 )
    {
      v66 = v44;
      v61 = -*v59;
      if ( *v59 >= 0 )
        v61 = *v59;
      v65 = v46;
      v64 = v47;
    }
    else
    {
      v57 = (__int64 *)((char *)this + 128);
      v64 = (__int64 *)((char *)this + 24);
      if ( v60 >= 0 )
        v61 = *v58;
      v65 = (__int64 *)((char *)this + 16);
      v66 = (_QWORD *)((char *)this + 8);
    }
    v86 = v61;
    if ( v61 <= v87 )
      goto LABEL_87;
  }
  v67 = v88;
  *((_DWORD *)this + 41) = 2 * v84;
  v68 = (v53 + v67) >> 3;
  v69 = *v44 - v68;
  *v46 = v68;
  *v44 = v69 >> 1;
  *v47 = v53 >> 2;
  v70 = *v59;
  v71 = (*v59 + *v58) >> 3;
  v72 = *((_QWORD *)this + 5) - v71;
  *v58 = v71;
  *v59 = v70 >> 2;
  *((_QWORD *)this + 5) = v72 >> 1;
LABEL_87:
  while ( (*((_DWORD *)this + 41) & 1) == 0 )
  {
    HFDBASIS64::vParentError(this, &v86);
    v85 = *v57;
    if ( v86 > *v57 )
      break;
    HFDBASIS64::vParentError((BEZIER64 *)((char *)this + 32), &v86);
    if ( v86 > v85 )
      break;
    *v64 *= 4LL;
    v73 = *v65;
    *v66 = *v65 + 2LL * *v66;
    *v65 = 8 * v73 - *v64;
    v74 = *v58;
    *v59 *= 4LL;
    v75 = v74 + 2LL * *((_QWORD *)this + 5);
    *v58 = 8 * v74 - *v59;
    *((_QWORD *)this + 5) = v75;
    *((int *)this + 41) >>= 1;
  }
  return 1LL;
}
