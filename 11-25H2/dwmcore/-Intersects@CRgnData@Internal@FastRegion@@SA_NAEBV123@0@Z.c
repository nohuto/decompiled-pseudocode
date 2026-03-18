/*
 * XREFs of ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18009DC10
 * Callers:
 *     ?NodeIntersectsOcclusionRegion@COcclusionContext@@AEAA_NPEBVCVisual@@PEAVCOcclusionInfo@@PEAM@Z @ 0x18009C510 (-NodeIntersectsOcclusionRegion@COcclusionContext@@AEAA_NPEBVCVisual@@PEAVCOcclusionInfo@@PEAM@Z.c)
 *     ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18009E960 (-IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUn.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x18023C6A8 (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FastRegion::Internal::CRgnData::Intersects(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // rax
  char *v3; // r8
  int v4; // r9d
  char *v5; // rcx
  char *v6; // rsi
  __int64 v7; // rax
  int v8; // edx
  char *v9; // rdi
  _DWORD *v10; // r8
  int *v11; // rax
  int *v12; // r11
  char *v13; // rdx
  int *v14; // rbx
  __int64 v15; // r10
  _DWORD *v16; // r9
  int v17; // edx
  _DWORD *v18; // r10
  int *v19; // rbx
  int *v20; // rdx
  int *v21; // r10
  int *v22; // r11
  int v23; // ecx
  int v24; // r9d
  int *v25; // rdx
  int v26; // ecx
  int v27; // ecx
  int *v28; // rdx
  int *v29; // r11
  int *v30; // r10
  int *v31; // rbx
  int v32; // r9d
  int v33; // ecx
  int *v34; // rdx
  int v35; // r9d
  int v37; // ecx
  int v38; // r9d
  _DWORD *v39; // rdx
  int v40; // ecx
  char *v41; // rdx
  __int64 v42; // r10
  int *v43; // r11
  int *v44; // rbx
  int v45; // ecx
  int v46; // r9d
  _DWORD *v47; // rdx
  int v48; // ecx
  int *v49; // r11
  int *v50; // rdx
  int *v51; // rbx
  int *v52; // r9
  int v53; // ecx
  int v54; // r10d
  int *v55; // rdx
  int v56; // ecx
  int *v57; // r11
  int *v58; // rdx
  int *v59; // rbx
  int *v60; // r10
  int v61; // r9d
  int v62; // ecx
  int *v63; // rdx
  int v64; // r9d
  int *v65; // r11
  __int64 v66; // rbx
  int *v67; // rdx
  int *v68; // r10
  int v69; // ecx
  int v70; // r9d
  int *v71; // rdx
  int v72; // ecx
  int *v73; // r11
  char *v74; // rdx
  int *v75; // rbx
  __int64 v76; // r10
  int v77; // ecx
  int v78; // r9d
  _DWORD *v79; // rdx
  int v80; // ecx

  v2 = *(int *)a1;
  v3 = (char *)a1 + 12;
  v4 = *((_DWORD *)a1 + 3);
  v5 = (char *)a2 + 12;
  v6 = &v3[8 * v2];
  v7 = *(int *)a2;
  v8 = *((_DWORD *)a2 + 3);
  v9 = &v5[8 * v7];
  if ( v4 >= v8 )
  {
    v11 = (int *)(v5 + 8);
    if ( v4 <= v8 )
    {
      v10 = v3 + 8;
      v41 = &v5[*((int *)v5 + 1)];
      v42 = (__int64)&v5[*((int *)v5 + 3) + 8];
      v43 = (_DWORD *)((char *)v10 + *(v10 - 1) - 8);
      v44 = (_DWORD *)((char *)v10 + (int)v10[1]);
      if ( v41 == (char *)v42 || v43 == v44 )
      {
        do
        {
LABEL_6:
          while ( 1 )
          {
            v16 = v10;
            v17 = *v11;
            v18 = v10;
            if ( *v10 < *v11 )
              break;
            v11 += 2;
            if ( *v10 > v17 )
            {
              if ( v11 == (int *)v9 )
                return 0;
              v49 = (_DWORD *)((char *)v10 + *(v10 - 1) - 8);
              v50 = (int *)((char *)v11 + *(v11 - 1) - 8);
              v51 = (_DWORD *)((char *)v10 + (int)v10[1]);
              v52 = (int *)((char *)v11 + v11[1]);
              if ( v50 != v52 && v49 != v51 )
              {
LABEL_76:
                v53 = *v50;
LABEL_77:
                v54 = *v49;
                if ( *v49 < v53 )
                {
                  while ( 1 )
                  {
                    v53 = *v50;
                    if ( v49[1] > *v50 )
                      break;
                    if ( v49[1] < v53 )
                    {
                      v49 += 2;
                      if ( v49 == v51 )
                        goto LABEL_6;
                      goto LABEL_77;
                    }
                    v49 += 2;
                    v55 = v50 + 1;
                    if ( v49 == v51 )
                      goto LABEL_6;
                    v54 = *v49;
LABEL_80:
                    v56 = *v55;
                    if ( v54 < *v55 )
                      return 1;
                    v50 = v55 + 1;
                    if ( v56 < v54 )
                    {
                      if ( v50 != v52 )
                        goto LABEL_76;
                      goto LABEL_6;
                    }
                    if ( v50 == v52 )
                      goto LABEL_6;
                  }
                }
                else if ( v54 > v53 )
                {
                  v55 = v50 + 1;
                  goto LABEL_80;
                }
                return 1;
              }
            }
            else
            {
              v10 += 2;
              if ( v10 == (_DWORD *)v6 || v11 == (int *)v9 )
                return 0;
              v19 = (_DWORD *)((char *)v16 + v16[3] + 8);
              v20 = (int *)((char *)v11 + *(v11 - 1) - 8);
              v21 = (_DWORD *)((char *)v16 + (int)v18[1]);
              v22 = (int *)((char *)v11 + v11[1]);
              if ( v20 != v22 && v21 != v19 )
              {
LABEL_12:
                v23 = *v20;
                while ( 1 )
                {
                  v24 = *v21;
                  if ( *v21 >= v23 )
                    break;
                  while ( 1 )
                  {
                    v23 = *v20;
                    if ( v21[1] < *v20 )
                      break;
                    if ( v21[1] > v23 )
                      return 1;
                    v21 += 2;
                    v25 = v20 + 1;
                    if ( v21 == v19 )
                      goto LABEL_6;
                    v24 = *v21;
LABEL_16:
                    v26 = *v25;
                    if ( v24 < *v25 )
                      return 1;
                    v20 = v25 + 1;
                    if ( v26 < v24 )
                    {
                      if ( v20 != v22 )
                        goto LABEL_12;
                      goto LABEL_6;
                    }
                    if ( v20 == v22 )
                      goto LABEL_6;
                  }
                  v21 += 2;
                  if ( v21 == v19 )
                    goto LABEL_6;
                }
                if ( v24 > v23 )
                {
                  v25 = v20 + 1;
                  goto LABEL_16;
                }
                return 1;
              }
            }
          }
          v10 += 2;
          if ( v10 == (_DWORD *)v6 )
            return 0;
          v65 = (_DWORD *)((char *)v18 + (int)v18[1]);
          v66 = (__int64)v18 + v18[3] + 8;
          v67 = (int *)((char *)v11 + *(v11 - 1) - 8);
          v68 = (int *)((char *)v11 + v11[1]);
        }
        while ( v67 == v68 || v65 == (int *)v66 );
LABEL_107:
        v69 = *v67;
LABEL_108:
        v70 = *v65;
        if ( *v65 < v69 )
        {
          while ( 1 )
          {
            v69 = *v67;
            if ( v65[1] > *v67 )
              break;
            if ( v65[1] < v69 )
            {
              v65 += 2;
              if ( v65 == (int *)v66 )
                goto LABEL_6;
              goto LABEL_108;
            }
            v65 += 2;
            v71 = v67 + 1;
            if ( v65 == (int *)v66 )
              goto LABEL_6;
            v70 = *v65;
LABEL_111:
            v72 = *v71;
            if ( v70 < *v71 )
              return 1;
            v67 = v71 + 1;
            if ( v72 < v70 )
            {
              if ( v67 != v68 )
                goto LABEL_107;
              goto LABEL_6;
            }
            if ( v67 == v68 )
              goto LABEL_6;
          }
        }
        else if ( v70 > v69 )
        {
          v71 = v67 + 1;
          goto LABEL_111;
        }
      }
      else
      {
LABEL_52:
        v45 = *(_DWORD *)v41;
LABEL_53:
        v46 = *v43;
        if ( *v43 < v45 )
        {
          while ( 1 )
          {
            v45 = *(_DWORD *)v41;
            if ( v43[1] > *(_DWORD *)v41 )
              break;
            if ( v43[1] < v45 )
            {
              v43 += 2;
              if ( v43 == v44 )
                goto LABEL_6;
              goto LABEL_53;
            }
            v43 += 2;
            v47 = v41 + 4;
            if ( v43 == v44 )
              goto LABEL_6;
            v46 = *v43;
LABEL_56:
            v48 = *v47;
            if ( v46 < *v47 )
              return 1;
            v41 = (char *)(v47 + 1);
            if ( v48 < v46 )
            {
              if ( v41 == (char *)v42 )
                goto LABEL_6;
              goto LABEL_52;
            }
            if ( v41 == (char *)v42 )
              goto LABEL_6;
          }
        }
        else if ( v46 > v45 )
        {
          v47 = v41 + 4;
          goto LABEL_56;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v27 = *v11;
        if ( v4 < *v11 )
        {
          v10 = v3 + 8;
          v28 = (int *)((char *)v11 + *(v11 - 1) - 8);
          v29 = (int *)((char *)v11 + v11[1]);
          v30 = (_DWORD *)((char *)v10 + *(v10 - 1) - 8);
          v31 = (_DWORD *)((char *)v10 + (int)v10[1]);
          if ( v28 == v29 || v30 == v31 )
            goto LABEL_6;
LABEL_24:
          v32 = *v28;
LABEL_25:
          v33 = *v30;
          if ( *v30 < v32 )
          {
            while ( 1 )
            {
              v32 = *v28;
              if ( v30[1] > *v28 )
                break;
              if ( v30[1] < v32 )
              {
                v30 += 2;
                if ( v30 == v31 )
                  goto LABEL_6;
                goto LABEL_25;
              }
              v30 += 2;
              v34 = v28 + 1;
              if ( v30 == v31 )
                goto LABEL_6;
              v33 = *v30;
LABEL_28:
              v35 = *v34;
              if ( v33 < *v34 )
                return 1;
              v28 = v34 + 1;
              if ( v35 < v33 )
              {
                if ( v28 == v29 )
                  goto LABEL_6;
                goto LABEL_24;
              }
              if ( v28 == v29 )
                goto LABEL_6;
            }
          }
          else if ( v33 > v32 )
          {
            v34 = v28 + 1;
            goto LABEL_28;
          }
          return 1;
        }
        v11 += 2;
        if ( v4 <= v27 )
          break;
        if ( v11 == (int *)v9 )
          return 0;
      }
      v10 = v3 + 8;
      if ( v11 == (int *)v9 )
        return 0;
      v57 = (_DWORD *)((char *)v10 + *(v10 - 1) - 8);
      v58 = (int *)((char *)v11 + *(v11 - 1) - 8);
      v59 = (_DWORD *)((char *)v10 + (int)v10[1]);
      v60 = (int *)((char *)v11 + v11[1]);
      if ( v58 == v60 || v57 == v59 )
        goto LABEL_6;
LABEL_91:
      v61 = *v58;
LABEL_92:
      v62 = *v57;
      if ( *v57 < v61 )
      {
        while ( 1 )
        {
          v61 = *v58;
          if ( v57[1] > *v58 )
            break;
          if ( v57[1] < v61 )
          {
            v57 += 2;
            if ( v57 == v59 )
              goto LABEL_6;
            goto LABEL_92;
          }
          v57 += 2;
          v63 = v58 + 1;
          if ( v57 == v59 )
            goto LABEL_6;
          v62 = *v57;
LABEL_95:
          v64 = *v63;
          if ( v62 < *v63 )
            return 1;
          v58 = v63 + 1;
          if ( v64 < v62 )
          {
            if ( v58 == v60 )
              goto LABEL_6;
            goto LABEL_91;
          }
          if ( v58 == v60 )
            goto LABEL_6;
        }
      }
      else if ( v62 > v61 )
      {
        v63 = v58 + 1;
        goto LABEL_95;
      }
    }
    return 1;
  }
  v10 = v3 + 8;
  while ( *v10 < v8 )
  {
    v10 += 2;
    if ( v10 == (_DWORD *)v6 )
      return 0;
  }
  v11 = (int *)(v5 + 8);
  if ( *v10 > v8 )
  {
    v12 = (_DWORD *)((char *)v10 + *(v10 - 1) - 8);
    v13 = &v5[*((int *)v5 + 1)];
    v14 = (_DWORD *)((char *)v10 + (int)v10[1]);
    v15 = (__int64)&v5[*((int *)v5 + 3) + 8];
    if ( v13 == (char *)v15 || v12 == v14 )
      goto LABEL_6;
LABEL_37:
    v37 = *(_DWORD *)v13;
LABEL_38:
    v38 = *v12;
    if ( *v12 < v37 )
    {
      while ( 1 )
      {
        v37 = *(_DWORD *)v13;
        if ( v12[1] > *(_DWORD *)v13 )
          break;
        if ( v12[1] < v37 )
        {
          v12 += 2;
          if ( v12 == v14 )
            goto LABEL_6;
          goto LABEL_38;
        }
        v12 += 2;
        v39 = v13 + 4;
        if ( v12 == v14 )
          goto LABEL_6;
        v38 = *v12;
LABEL_41:
        v40 = *v39;
        if ( v38 < *v39 )
          return 1;
        v13 = (char *)(v39 + 1);
        if ( v40 < v38 )
        {
          if ( v13 == (char *)v15 )
            goto LABEL_6;
          goto LABEL_37;
        }
        if ( v13 == (char *)v15 )
          goto LABEL_6;
      }
    }
    else if ( v38 > v37 )
    {
      v39 = v13 + 4;
      goto LABEL_41;
    }
    return 1;
  }
  v10 += 2;
  if ( v10 != (_DWORD *)v6 )
  {
    v73 = (_DWORD *)((char *)v10 + *(v10 - 1) - 8);
    v74 = &v5[*((int *)v5 + 1)];
    v75 = (_DWORD *)((char *)v10 + (int)v10[1]);
    v76 = (__int64)&v5[*((int *)v5 + 3) + 8];
    if ( v74 == (char *)v76 || v73 == v75 )
      goto LABEL_6;
LABEL_131:
    v77 = *(_DWORD *)v74;
LABEL_132:
    v78 = *v73;
    if ( *v73 < v77 )
    {
      while ( 1 )
      {
        v77 = *(_DWORD *)v74;
        if ( v73[1] > *(_DWORD *)v74 )
          break;
        if ( v73[1] < v77 )
        {
          v73 += 2;
          if ( v73 == v75 )
            goto LABEL_6;
          goto LABEL_132;
        }
        v73 += 2;
        v79 = v74 + 4;
        if ( v73 == v75 )
          goto LABEL_6;
        v78 = *v73;
LABEL_135:
        v80 = *v79;
        if ( v78 < *v79 )
          return 1;
        v74 = (char *)(v79 + 1);
        if ( v80 < v78 )
        {
          if ( v74 == (char *)v76 )
            goto LABEL_6;
          goto LABEL_131;
        }
        if ( v74 == (char *)v76 )
          goto LABEL_6;
      }
    }
    else if ( v78 > v77 )
    {
      v79 = v74 + 4;
      goto LABEL_135;
    }
    return 1;
  }
  return 0;
}
