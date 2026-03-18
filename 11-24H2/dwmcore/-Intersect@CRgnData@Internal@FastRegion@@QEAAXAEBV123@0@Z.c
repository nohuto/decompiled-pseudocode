/*
 * XREFs of ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180030720
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18002F954 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x18003023C (-Intersect@CRegion@@QEAAXAEBV1@@Z.c)
 * Callees:
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1801C3660 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1801CE460 (-Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Intersect(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  FastRegion::Internal::CRgnData *v4; // rdi
  FastRegion::Internal::CStripe *v5; // rbx
  const struct FastRegion::Internal::CStripe *v6; // rcx
  _DWORD *v7; // rsi
  __int64 v8; // rdx
  const struct FastRegion::Internal::CStripe *v9; // r12
  const struct FastRegion::Internal::CStripe *v10; // r10
  const struct FastRegion::Internal::CStripe *v11; // r13
  int v12; // eax
  int v13; // edx
  __int64 v14; // r9
  int v15; // eax
  const struct FastRegion::Internal::CStripe *v16; // r14
  const struct FastRegion::Internal::CStripe *v17; // rsi
  char *v18; // r15
  int *v19; // rdx
  int *v20; // rbp
  char *v21; // rax
  _DWORD *v22; // rcx
  int v23; // ecx
  FastRegion::Internal::CRgnData *v24; // rbp
  int v25; // eax
  int v26; // ecx
  const struct FastRegion::Internal::CStripe *v27; // r9
  int *v28; // rdx
  __int64 v29; // rcx
  _DWORD *v30; // rcx
  int *v31; // r8
  int *v32; // rax
  int *v33; // rdi
  int *v34; // r11
  FastRegion::Internal::CRgnData *v35; // rdx
  int v36; // ecx
  _DWORD *v37; // rdx
  __int64 v38; // r10
  __int64 j; // rcx
  __int64 v40; // rax
  _DWORD *v41; // rbx
  _DWORD *v42; // rax
  unsigned __int64 k; // rbx
  _DWORD *v44; // rdx
  int v45; // ecx
  int v46; // ecx
  const struct FastRegion::Internal::CStripe *v47; // r8
  int *v48; // rdx
  int *v49; // rbp
  int *v50; // rcx
  int *v51; // r10
  _DWORD *v52; // rax
  const struct FastRegion::Internal::CStripe *v53; // r8
  FastRegion::Internal::CRgnData *v54; // rax
  int *v55; // r8
  int *v56; // rdx
  int *v57; // r11
  int *v58; // rdi
  _DWORD *v59; // rcx
  int v60; // ecx
  _DWORD *v61; // r8
  __int64 v62; // r10
  __int64 i; // rcx
  FastRegion::Internal::CRgnData *v64; // r8
  FastRegion::Internal::CStripe *v65; // r9
  int v66; // r10d
  int v67; // r11d
  int *v68; // rax
  int *v69; // rdx
  _DWORD *v70; // rcx
  int v71; // r10d
  int v72; // r11d
  int v73; // r11d
  FastRegion::Internal::CRgnData *v74; // r10
  int v75; // edx
  int v76; // r9d
  int *v77; // r8
  int *v78; // rax
  _DWORD *v79; // rcx
  int v80; // edx
  int v81; // r9d
  int v82; // edx
  int v83; // r9d
  int v84; // r15d
  FastRegion::Internal::CStripe *v85; // r15
  FastRegion::Internal::CRgnData *v86; // r8
  FastRegion::Internal::CStripe *v87; // r9
  int v88; // r11d
  int v89; // ebx
  int *v90; // rdx
  int *v91; // rcx
  _DWORD *v92; // rax
  int v93; // r11d
  int v94; // ebx
  int v95; // r15d
  FastRegion::Internal::CStripe *v96; // r10
  FastRegion::Internal::CRgnData *v97; // r9
  int v98; // eax
  int v99; // r10d
  int *v100; // r8
  int *v101; // rdx
  _DWORD *v102; // rcx
  int v103; // eax
  int v104; // r10d
  int v105; // eax
  int v106; // r10d
  int v107; // r15d
  FastRegion::Internal::CStripe *v108; // r10

  v3 = *(int *)a2;
  v4 = this;
  v5 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v6 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v7 = (_DWORD *)((char *)a2 + 12);
  v8 = *(int *)a3;
  v9 = (const struct FastRegion::Internal::CStripe *)&v7[2 * v3];
  v10 = (const struct FastRegion::Internal::CStripe *)v7;
  v11 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 8 * v8 + 12);
  v12 = 8 * (v8 + v3);
  *((_DWORD *)v4 + 4) = v12;
  v13 = *((_DWORD *)a3 + 3);
  v14 = v12;
  v15 = *v7;
  if ( *v7 < v13 )
  {
    v17 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
    while ( 1 )
    {
      v53 = v17;
      if ( *(_DWORD *)v17 >= v13 )
        break;
      v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
      if ( v17 == v9 )
        goto LABEL_24;
    }
    v16 = (const struct FastRegion::Internal::CStripe *)((char *)v6 + 8);
    if ( *(_DWORD *)v17 <= v13 )
    {
      v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
      if ( v17 == v9 )
        goto LABEL_24;
    }
    else
    {
      v53 = (const struct FastRegion::Internal::CStripe *)((char *)v17 - 8);
    }
    FastRegion::Internal::CStripe::Intersect((FastRegion::Internal::CRgnData *)((char *)v4 + 12), v6, v53);
LABEL_45:
    if ( *((_DWORD *)v5 + 3) - *((_DWORD *)v5 + 1) != -8 )
      v5 = (FastRegion::Internal::CStripe *)((char *)v5 + 8);
    goto LABEL_8;
  }
  v16 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
  if ( v15 > v13 )
  {
    while ( 1 )
    {
      v46 = *(_DWORD *)v16;
      v47 = v16;
      if ( v15 < *(_DWORD *)v16 )
        break;
      v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
      if ( v15 <= v46 )
      {
        v17 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
        if ( v16 == v11 )
          goto LABEL_24;
        FastRegion::Internal::CStripe::Intersect((FastRegion::Internal::CRgnData *)((char *)v4 + 12), v10, v47);
        goto LABEL_45;
      }
      if ( v16 == v11 )
        goto LABEL_24;
    }
    *(_DWORD *)v5 = v15;
    v17 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
    v48 = (int *)((char *)v16 + *((int *)v16 - 1) - 8);
    v49 = (int *)((char *)v16 + *((int *)v16 + 1));
    v50 = (int *)((char *)v17 + *((int *)v17 - 1) - 8);
    v51 = (int *)((char *)v17 + *((int *)v17 + 1));
    v52 = (_DWORD *)((char *)v4 + *((int *)v4 + 4) + 12);
    if ( v48 != v49 && v50 != v51 )
    {
LABEL_106:
      while ( 2 )
      {
        v86 = v4;
        v87 = v5;
        while ( 1 )
        {
          v88 = *v50;
          v89 = *v48;
          if ( *v50 < *v48 )
          {
            v91 = v50 + 1;
            goto LABEL_114;
          }
          v90 = v48 + 1;
          if ( v89 < v88 )
          {
            v5 = v87;
            v4 = v86;
            goto LABEL_118;
          }
LABEL_109:
          v91 = v50 + 1;
LABEL_110:
          *v52 = v88;
          v92 = v52 + 1;
          v93 = *v91;
          v4 = v86;
          v94 = *v90;
          if ( *v91 < *v90 )
          {
            *v92 = v93;
            v50 = v91 + 1;
            v52 = v92 + 1;
            v5 = v87;
            if ( v50 != v51 )
              goto LABEL_118;
            goto LABEL_44;
          }
          v48 = v90 + 1;
          if ( v94 < v93 )
            break;
          *v92 = v93;
          v50 = v91 + 1;
          v52 = v92 + 1;
          v5 = v87;
          if ( v50 == v51 || v48 == v49 )
            goto LABEL_44;
        }
        *v92 = v94;
        v52 = v92 + 1;
        v5 = v87;
        if ( v48 != v49 )
        {
          while ( 1 )
          {
LABEL_114:
            v88 = *v48;
            if ( *v91 < *v48 )
            {
              v50 = v91 + 1;
              v5 = v87;
              v4 = v86;
              if ( v50 != v51 )
                goto LABEL_106;
              goto LABEL_44;
            }
            v90 = v48 + 1;
            if ( v88 < *v91 )
              goto LABEL_110;
            v50 = v91 + 1;
            v5 = v87;
            v4 = v86;
            if ( v50 == v51 )
              goto LABEL_44;
LABEL_118:
            v88 = *v50;
            v95 = *v90;
            if ( *v50 < *v90 )
              goto LABEL_109;
            v48 = v90 + 1;
            if ( v95 < v88 )
              break;
            v91 = v50 + 1;
            if ( v48 == v49 )
              goto LABEL_44;
          }
          if ( v48 != v49 )
            continue;
        }
        break;
      }
    }
LABEL_44:
    *((_DWORD *)v5 + 3) = (_DWORD)v52 - ((_DWORD)v5 + 8);
    if ( v5 != (FastRegion::Internal::CRgnData *)((char *)v4 + 12) )
    {
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v5) )
        v5 = v108;
      goto LABEL_8;
    }
    goto LABEL_45;
  }
  v17 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
  *(_DWORD *)v5 = v15;
  v18 = (char *)a3 + *((int *)a3 + 6) + 20;
  v19 = (int *)((char *)v17 + *((int *)v17 - 1) - 8);
  v20 = (int *)((char *)v17 + *((int *)v17 + 1));
  v21 = (char *)a3 + *((int *)a3 + 4) + 12;
  v22 = (_DWORD *)((char *)v5 + v14);
  if ( v21 != v18 && v19 != v20 )
  {
LABEL_63:
    while ( 2 )
    {
      v64 = v4;
      v65 = v5;
      while ( 1 )
      {
        v66 = *v19;
        v67 = *(_DWORD *)v21;
        if ( *v19 < *(_DWORD *)v21 )
        {
          v69 = v19 + 1;
          goto LABEL_71;
        }
        v68 = (int *)(v21 + 4);
        if ( v67 < v66 )
        {
          v5 = v65;
          v4 = v64;
          goto LABEL_75;
        }
LABEL_66:
        v69 = v19 + 1;
LABEL_67:
        *v22 = v66;
        v70 = v22 + 1;
        v71 = *v69;
        v5 = v65;
        v72 = *v68;
        v4 = v64;
        if ( *v69 < *v68 )
        {
          *v70 = v71;
          v19 = v69 + 1;
          v22 = v70 + 1;
          if ( v19 != v20 )
            goto LABEL_75;
          goto LABEL_5;
        }
        v21 = (char *)(v68 + 1);
        if ( v72 < v71 )
          break;
        *v70 = v71;
        v19 = v69 + 1;
        v22 = v70 + 1;
        if ( v19 == v20 || v21 == v18 )
          goto LABEL_5;
      }
      *v70 = v72;
      v22 = v70 + 1;
      if ( v21 != v18 )
      {
        while ( 1 )
        {
LABEL_71:
          v66 = *(_DWORD *)v21;
          if ( *v69 < *(_DWORD *)v21 )
          {
            v19 = v69 + 1;
            v5 = v65;
            v4 = v64;
            if ( v19 != v20 )
              goto LABEL_63;
            goto LABEL_5;
          }
          v68 = (int *)(v21 + 4);
          if ( v66 < *v69 )
            goto LABEL_67;
          v19 = v69 + 1;
          v5 = v65;
          v4 = v64;
          if ( v19 == v20 )
            goto LABEL_5;
LABEL_75:
          v66 = *v19;
          v73 = *v68;
          if ( *v19 < *v68 )
            goto LABEL_66;
          v21 = (char *)(v68 + 1);
          if ( v73 < v66 )
            break;
          v69 = v19 + 1;
          if ( v21 == v18 )
            goto LABEL_5;
        }
        if ( v21 != v18 )
          continue;
      }
      break;
    }
  }
LABEL_5:
  v23 = (_DWORD)v22 - ((_DWORD)v5 + 8);
  *((_DWORD *)v5 + 3) = v23;
  if ( v5 != (FastRegion::Internal::CRgnData *)((char *)v4 + 12) )
  {
    v61 = (_DWORD *)((char *)v5 + *((int *)v5 + 1));
    v62 = (int)((*((int *)v5 + 1) - (*((int *)v5 - 1) - 8LL)) >> 2);
    if ( v62 == (v23 - (__int64)*((int *)v5 + 1) + 8) >> 2 )
    {
      for ( i = 0LL; i < v62; ++i )
      {
        if ( *v61 != *(_DWORD *)((char *)v61 + *((int *)v5 - 1) - 8LL - *((int *)v5 + 1)) )
          goto LABEL_7;
        ++v61;
      }
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  if ( v23 - *((_DWORD *)v5 + 1) != -8 )
LABEL_7:
    v5 = (FastRegion::Internal::CStripe *)((char *)v5 + 8);
LABEL_8:
  v24 = v4;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v25 = *(_DWORD *)v17;
        v26 = *(_DWORD *)v16;
        v27 = v17;
        v28 = (int *)v16;
        if ( *(_DWORD *)v17 >= *(_DWORD *)v16 )
          break;
        v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
        *(_DWORD *)v5 = v25;
        if ( v17 == v9 )
        {
          if ( v5 != (FastRegion::Internal::CRgnData *)((char *)v24 + 12)
            && (char *)v5 + *((int *)v5 + 1) != (char *)v5 + *((int *)v5 - 1) - 8 )
          {
            v5 = (FastRegion::Internal::CStripe *)((char *)v5 + 8);
          }
          v4 = v24;
          goto LABEL_24;
        }
        v54 = v24;
        v55 = (int *)((char *)v16 + *((int *)v16 - 1) - 8);
        v56 = (int *)((char *)v27 + *((int *)v27 + 1));
        v57 = (int *)((char *)v17 + *((int *)v17 + 1));
        v58 = (int *)((char *)v16 + *((int *)v16 + 1));
        v59 = (_DWORD *)((char *)v5 + *((int *)v5 + 1));
        if ( v55 == v58 || v56 == v57 )
          goto LABEL_55;
LABEL_133:
        while ( 2 )
        {
          v97 = v54;
LABEL_134:
          v98 = *v56;
          v99 = *v55;
          if ( *v56 >= *v55 )
          {
            v100 = v55 + 1;
            if ( v99 < v98 )
            {
              v54 = v97;
              goto LABEL_146;
            }
            *v59 = v98;
            goto LABEL_137;
          }
          v101 = v56 + 1;
          while ( 1 )
          {
            v105 = *v55;
            if ( *v101 < *v55 )
              break;
            v100 = v55 + 1;
            if ( v105 < *v101 )
            {
              *v59 = v105;
LABEL_138:
              v102 = v59 + 1;
              v103 = *v101;
              v104 = *v100;
              if ( *v101 < *v100 )
              {
                *v102 = v103;
                v56 = v101 + 1;
                v59 = v102 + 1;
                v54 = v97;
                if ( v56 == v57 )
                  goto LABEL_55;
                goto LABEL_146;
              }
              v55 = v100 + 1;
              if ( v104 >= v103 )
              {
                *v102 = v103;
                v56 = v101 + 1;
                v59 = v102 + 1;
                v54 = v97;
                if ( v56 == v57 || v55 == v58 )
                  goto LABEL_55;
                goto LABEL_134;
              }
              *v102 = v104;
              v54 = v97;
              v59 = v102 + 1;
              if ( v55 == v58 )
                goto LABEL_55;
            }
            else
            {
              v56 = v101 + 1;
              v54 = v97;
              if ( v56 == v57 )
                goto LABEL_55;
LABEL_146:
              v106 = *v56;
              v107 = *v100;
              if ( *v56 < *v100 )
              {
                *v59 = v106;
LABEL_137:
                v101 = v56 + 1;
                goto LABEL_138;
              }
              v55 = v100 + 1;
              if ( v107 < v106 )
              {
                if ( v55 == v58 )
                  goto LABEL_55;
                goto LABEL_133;
              }
              v101 = v56 + 1;
              if ( v55 == v58 )
                goto LABEL_55;
            }
          }
          v56 = v101 + 1;
          v54 = v97;
          if ( v56 != v57 )
            continue;
          break;
        }
LABEL_55:
        v60 = (_DWORD)v59 - ((_DWORD)v5 + 8);
        *((_DWORD *)v5 + 3) = v60;
        if ( v5 == (FastRegion::Internal::CRgnData *)((char *)v54 + 12) )
        {
          if ( v60 - *((_DWORD *)v5 + 1) != -8 )
            v5 = (FastRegion::Internal::CStripe *)((char *)v5 + 8);
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v5) )
        {
          v5 = v96;
        }
      }
      v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
      if ( v25 > v26 )
        break;
      v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
      if ( v17 == v9 || v16 == v11 )
      {
        *(_DWORD *)v5 = v25;
        v4 = v24;
        if ( v5 != (FastRegion::Internal::CRgnData *)((char *)v24 + 12)
          && (char *)v5 + *((int *)v5 + 1) != (char *)v5 + *((int *)v5 - 1) - 8 )
        {
          goto LABEL_197;
        }
        goto LABEL_24;
      }
      v29 = *((int *)v5 + 1);
      *(_DWORD *)v5 = v25;
      v30 = (_DWORD *)((char *)v5 + v29);
      v31 = (int *)((char *)v28 + v28[1]);
      v32 = (int *)((char *)v27 + *((int *)v27 + 1));
      v33 = (int *)((char *)v17 + *((int *)v17 + 1));
      v34 = (int *)((char *)v16 + *((int *)v16 + 1));
      v35 = v24;
      if ( v31 != v34 && v32 != v33 )
      {
        do
        {
          while ( 1 )
          {
            v74 = v35;
LABEL_84:
            v75 = *v32;
            v76 = *v31;
            if ( *v32 >= *v31 )
            {
              v77 = v31 + 1;
              if ( v76 < v75 )
              {
                v35 = v74;
                goto LABEL_96;
              }
              *v30 = v75;
              goto LABEL_87;
            }
            v78 = v32 + 1;
LABEL_92:
            v82 = *v31;
            if ( *v78 >= *v31 )
              break;
            v32 = v78 + 1;
            v35 = v74;
            if ( v32 == v33 )
              goto LABEL_15;
          }
          v77 = v31 + 1;
          if ( v82 < *v78 )
          {
            *v30 = v82;
LABEL_88:
            v79 = v30 + 1;
            v80 = *v78;
            v81 = *v77;
            if ( *v78 < *v77 )
            {
              *v79 = v80;
              v32 = v78 + 1;
              v30 = v79 + 1;
              v35 = v74;
              if ( v32 == v33 )
                break;
              goto LABEL_96;
            }
            v31 = v77 + 1;
            if ( v81 < v80 )
            {
              *v79 = v81;
              v35 = v74;
              v30 = v79 + 1;
              if ( v31 == v34 )
                break;
              goto LABEL_92;
            }
            *v79 = v80;
            v32 = v78 + 1;
            v30 = v79 + 1;
            v35 = v74;
            if ( v32 == v33 || v31 == v34 )
              break;
            goto LABEL_84;
          }
          v32 = v78 + 1;
          v35 = v74;
          if ( v32 == v33 )
            break;
LABEL_96:
          v83 = *v32;
          v84 = *v77;
          if ( *v32 < *v77 )
          {
            *v30 = v83;
LABEL_87:
            v78 = v32 + 1;
            goto LABEL_88;
          }
          v31 = v77 + 1;
          if ( v84 >= v83 )
          {
            v78 = v32 + 1;
            if ( v31 == v34 )
              break;
            goto LABEL_92;
          }
        }
        while ( v31 != v34 );
      }
LABEL_15:
      v36 = (_DWORD)v30 - ((_DWORD)v5 + 8);
      *((_DWORD *)v5 + 3) = v36;
      if ( v5 == (FastRegion::Internal::CRgnData *)((char *)v35 + 12) )
      {
        if ( v36 - *((_DWORD *)v5 + 1) != -8 )
LABEL_38:
          v5 = (FastRegion::Internal::CStripe *)((char *)v5 + 8);
      }
      else
      {
        v37 = (_DWORD *)((char *)v5 + *((int *)v5 + 1));
        v38 = (int)((*((int *)v5 + 1) - (*((int *)v5 - 1) - 8LL)) >> 2);
        if ( v38 != (v36 - (__int64)*((int *)v5 + 1) + 8) >> 2 )
          goto LABEL_38;
        for ( j = 0LL; j < v38; ++j )
        {
          if ( *v37 != *(_DWORD *)((char *)v37 + *((int *)v5 - 1) - 8LL - *((int *)v5 + 1)) )
            goto LABEL_38;
          ++v37;
        }
      }
    }
    v85 = (FastRegion::Internal::CRgnData *)((char *)v24 + 12);
    if ( v16 == v11 )
      break;
    FastRegion::Internal::CStripe::Intersect(
      v5,
      (const struct FastRegion::Internal::CStripe *)v28,
      (const struct FastRegion::Internal::CStripe *)((char *)v17 - 8));
    if ( v5 == v85 )
    {
      if ( *((_DWORD *)v5 + 3) - *((_DWORD *)v5 + 1) != -8 )
        v5 = (FastRegion::Internal::CStripe *)((char *)v5 + 8);
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v5) )
    {
      v5 = (FastRegion::Internal::CStripe *)((char *)v5 + 8);
    }
  }
  *(_DWORD *)v5 = v26;
  v4 = v24;
  if ( v5 != v85 && (char *)v5 + *((int *)v5 + 1) != (char *)v5 + *((int *)v5 - 1) - 8 )
LABEL_197:
    v5 = (FastRegion::Internal::CStripe *)((char *)v5 + 8);
LABEL_24:
  v40 = (v5 - v4 - 12) >> 3;
  *(_DWORD *)v4 = v40;
  if ( (_DWORD)v40 )
  {
    v41 = (_DWORD *)((char *)v5 - 8);
    *((_DWORD *)v4 + 1) = 0x7FFFFFFF;
    *((_DWORD *)v4 + 2) = 0x80000000;
    v42 = (_DWORD *)((char *)v41 + (int)v41[1]);
    for ( k = (unsigned __int64)(v41 - 2); k >= (unsigned __int64)v4 + 12; k -= 8LL )
    {
      v44 = v42;
      v42 = (_DWORD *)(k + *(int *)(k + 4));
      if ( v42 != v44 )
      {
        if ( *((_DWORD *)v4 + 1) > *v42 )
          *((_DWORD *)v4 + 1) = *v42;
        v45 = *(v44 - 1);
        if ( *((_DWORD *)v4 + 2) < v45 )
          *((_DWORD *)v4 + 2) = v45;
      }
    }
  }
}
