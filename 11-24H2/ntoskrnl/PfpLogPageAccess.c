/*
 * XREFs of PfpLogPageAccess @ 0x140972190
 * Callers:
 *     PfpCopyEvent @ 0x140971B9C (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x140971DE0 (PfpFlushBuffers.c)
 * Callees:
 *     PfTReplaceCurrentBuffer @ 0x140972854 (PfTReplaceCurrentBuffer.c)
 */

unsigned __int64 __fastcall PfpLogPageAccess(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4, __int64 a5, int a6)
{
  unsigned __int64 v6; // rdi
  __int16 v7; // bp
  __int16 v12; // r12
  __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  __int64 v15; // r11
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  _DWORD *v19; // rdx
  char v20; // r10
  unsigned __int64 v21; // rdx
  int v22; // ebx
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v33; // rbx
  __int64 v34; // r8
  __int64 v35; // rcx
  unsigned __int64 v36; // r9
  _DWORD *v37; // rdx
  char v38; // r10
  unsigned __int64 v39; // r8
  __int16 v40; // ax
  __int64 v41; // rax
  __int64 v42; // r11
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int j; // ecx
  __int64 v46; // rax
  unsigned int v47; // eax
  unsigned int v48; // r10d
  unsigned int i; // ecx
  __int64 v50; // rax
  __int64 v51; // r8
  unsigned __int64 v52; // r8
  unsigned int v53; // [rsp+20h] [rbp-58h]
  unsigned __int16 v54; // [rsp+24h] [rbp-54h]
  unsigned int v55; // [rsp+24h] [rbp-54h]
  unsigned int v56; // [rsp+28h] [rbp-50h]
  unsigned __int64 v57; // [rsp+30h] [rbp-48h]
  unsigned __int64 v58; // [rsp+38h] [rbp-40h]
  __int64 v59; // [rsp+90h] [rbp+18h]
  unsigned __int16 v60; // [rsp+90h] [rbp+18h]
  int v61; // [rsp+90h] [rbp+18h]

  v6 = 0LL;
  v7 = -1;
  v12 = -1;
  if ( (*a3 & 0x1FF) == 0 )
    goto LABEL_2;
  v60 = 0;
  v58 = *(_QWORD *)(a5 - 8LL * (*a3 & 0x1FF));
  v33 = v58 & 0xFFFFFFFFFFFFFFFCuLL;
  while ( 1 )
  {
    v34 = *(_QWORD *)(a1 + 152);
    v35 = *(unsigned int *)(v34 + 16);
    v36 = (v34 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(v36 + 40 * v35) == v33 )
    {
      v37 = (_DWORD *)(v34 + 32);
    }
    else
    {
      v37 = (_DWORD *)(v34 + 32);
      v55 = *(_DWORD *)(v34 + 32);
      v57 = v58 & 0xFFFFFFFFFFFFFFFCuLL;
      v42 = (HIBYTE(v57)
           + 37
           * (BYTE6(v57)
            + 37
            * (BYTE5(v57)
             + 37
             * (BYTE4(v57)
              + 37 * (BYTE3(v57) + 37 * (BYTE2(v57) + 37 * (BYTE1(v57) + 37 * ((unsigned __int8)v33 + 11623883)))))))) & (v55 - 1);
      v43 = *(_QWORD *)(v36 + 40 * v42);
      if ( v43 != v33 )
      {
        if ( v43 )
        {
          v47 = *(_DWORD *)(v34 + 32);
          v48 = v42 + 1;
          for ( i = 0; i < 2; ++i )
          {
            while ( v48 < v47 )
            {
              v50 = *(_QWORD *)(v36 + 40LL * v48);
              if ( v50 == v33 )
              {
                *(_DWORD *)(v34 + 16) = v48;
                LOWORD(v35) = v48;
                goto LABEL_28;
              }
              if ( !v50 )
              {
                *(_DWORD *)(v34 + 16) = v48;
                v60 = v48;
                goto LABEL_59;
              }
              v47 = v55;
              ++v48;
            }
            v47 = v42;
            v55 = v42;
            v48 = 0;
          }
          v60 = -1;
        }
        else
        {
          *(_DWORD *)(v34 + 16) = v42;
          v60 = (HIBYTE(v57)
               + 37
               * (BYTE6(v57)
                + 37
                * (BYTE5(v57)
                 + 37
                 * (BYTE4(v57)
                  + 37 * (BYTE3(v57) + 37 * (BYTE2(v57) + 37 * (BYTE1(v57) + 37 * ((unsigned __int8)v33 + 24011)))))))) & (v55 - 1);
        }
        goto LABEL_59;
      }
      *(_DWORD *)(v34 + 16) = v42;
      LOWORD(v35) = (HIBYTE(v57)
                   + 37
                   * (BYTE6(v57)
                    + 37
                    * (BYTE5(v57)
                     + 37
                     * (BYTE4(v57)
                      + 37 * (BYTE3(v57) + 37 * (BYTE2(v57) + 37 * (BYTE1(v57) + 37 * ((unsigned __int8)v33 + 24011)))))))) & (v55 - 1);
    }
LABEL_28:
    if ( (_WORD)v35 != 0xFFFF )
    {
      v38 = 0;
      goto LABEL_30;
    }
LABEL_59:
    LODWORD(v35) = *(_DWORD *)(v34 + 28);
    if ( (unsigned int)v35 < 3 * (*v37 >> 2) )
      break;
    if ( (unsigned int)PfTReplaceCurrentBuffer(a1, a1 + 128) == -1073741823 )
      return v6;
  }
  *(_DWORD *)(v34 + 28) = v35 + 1;
  v38 = 1;
  *(_QWORD *)(v36 + 40LL * v60) = v33;
  LOWORD(v35) = v60;
LABEL_30:
  if ( !v34 )
    return v6;
  v12 = *(_WORD *)(v34 + 36) + v35;
  if ( v38 )
  {
    v39 = ((v34 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * (unsigned __int16)v35;
    v40 = *(_WORD *)(v39 + 16);
    *(_QWORD *)(v39 + 8) = (16 * v58) | *(_DWORD *)(v39 + 8) & 8 | 4;
    *(_WORD *)(v39 + 16) = v40 & 0xFFF0 | (v58 >> 60);
  }
LABEL_2:
  if ( a2 )
  {
    if ( !a6 )
    {
      v13 = (*(_QWORD *)(a2 + 464) ^ *(_QWORD *)(a2 + 504)) & 0x1FFFFFFFFFFFFFFFLL;
      goto LABEL_5;
    }
LABEL_34:
    v13 = a2;
LABEL_5:
    v54 = 0;
    v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    v15 = 4 * (v14 & 3) + 16;
    while ( 2 )
    {
      v16 = *(_QWORD *)(a1 + 152);
      v17 = *(unsigned int *)(v15 + v16);
      v18 = (v16 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( *(_QWORD *)(v18 + 40 * v17) == v14 )
      {
        v19 = (_DWORD *)(v16 + 32);
LABEL_8:
        if ( (_WORD)v17 != 0xFFFF )
        {
          v20 = 0;
          goto LABEL_10;
        }
      }
      else
      {
        v19 = (_DWORD *)(v16 + 32);
        v56 = *(_DWORD *)(v16 + 32);
        v53 = (HIBYTE(v14)
             + 37
             * (BYTE6(v14)
              + 37
              * (BYTE5(v14)
               + 37
               * (BYTE4(v14)
                + 37 * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 11623883)))))))) & (v56 - 1);
        v41 = *(_QWORD *)(v18 + 40LL * v53);
        if ( v41 == v14 )
        {
          LOWORD(v17) = (HIBYTE(v14)
                       + 37
                       * (BYTE6(v14)
                        + 37
                        * (BYTE5(v14)
                         + 37
                         * (BYTE4(v14)
                          + 37
                          * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 24011)))))))) & (v56 - 1);
          *(_DWORD *)(v15 + v16) = v53;
          goto LABEL_8;
        }
        if ( v41 )
        {
          v44 = v53 + 1;
          for ( j = 0; ; ++j )
          {
            v61 = v44;
            if ( j >= 2 )
              break;
            while ( (unsigned int)v44 < v56 )
            {
              v46 = *(_QWORD *)(v18 + 40 * v44);
              if ( v46 == v14 )
              {
                LOWORD(v17) = v61;
                *(_DWORD *)(v15 + v16) = v61;
                goto LABEL_8;
              }
              if ( !v46 )
              {
                *(_DWORD *)(v15 + v16) = v61;
                v54 = v61;
                goto LABEL_55;
              }
              v44 = (unsigned int)++v61;
            }
            v56 = v53;
            v44 = 0LL;
          }
          v54 = -1;
        }
        else
        {
          *(_DWORD *)(v15 + v16) = v53;
          v54 = (HIBYTE(v14)
               + 37
               * (BYTE6(v14)
                + 37
                * (BYTE5(v14)
                 + 37
                 * (BYTE4(v14)
                  + 37 * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 24011)))))))) & (v56 - 1);
        }
      }
LABEL_55:
      LODWORD(v17) = *(_DWORD *)(v16 + 28);
      if ( (unsigned int)v17 < 3 * (*v19 >> 2) )
      {
        *(_DWORD *)(v16 + 28) = v17 + 1;
        v20 = 1;
        *(_QWORD *)(v18 + 40LL * v54) = v14;
        LOWORD(v17) = v54;
LABEL_10:
        if ( v16 )
        {
          v7 = *(_WORD *)(v16 + 36) + v17;
          v59 = 2LL;
          v21 = ((v16 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * (unsigned __int16)v17;
          if ( v20 || (*(_BYTE *)(v21 + 8) & 4) != 0 )
          {
            v51 = *(_QWORD *)(v21 + 8);
            if ( a6 )
            {
              *(_QWORD *)(v21 + 8) = v51 & 0xFFFFFFFFFFFFFFF8uLL | 5;
            }
            else
            {
              v52 = v51 & 0xFFFFFFFFFFFFFFF8uLL | 1;
              *(_QWORD *)(v21 + 8) = v52;
              *(_QWORD *)(v21 + 8) = v52 & 7 | (8LL * (*(_QWORD *)(a2 + 464) ^ *(_QWORD *)(a2 + 504)));
              *(_DWORD *)(v21 + 20) = *(_DWORD *)(a2 + 900);
              *(_DWORD *)(v21 + 16) = *(_DWORD *)(a2 + 464);
            }
          }
          goto LABEL_13;
        }
        return v6;
      }
      if ( (unsigned int)PfTReplaceCurrentBuffer(a1, a1 + 128) == -1073741823 )
        return v6;
      v15 = 4 * (v14 & 3) + 16;
      continue;
    }
  }
  if ( a6 )
    goto LABEL_34;
  v59 = 0LL;
LABEL_13:
  v22 = ((*a4 & 3) == 2) + 1;
  while ( 1 )
  {
    v23 = *(_QWORD *)(a1 + 112);
    v24 = *(_DWORD *)(v23 + 16);
    if ( v22 + v24 <= *(_DWORD *)(v23 + 20) )
      break;
    if ( (unsigned int)PfTReplaceCurrentBuffer(a1, a1 + 88) == -1073741823 )
      return v6;
  }
  *(_DWORD *)(v23 + 16) = v22 + v24;
  if ( v23 )
  {
    v6 = ((v23 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * v24;
    if ( (*a4 & 3) == 2 )
    {
      *(_OWORD *)v6 = *(_OWORD *)a4;
      *(_QWORD *)v6 = *(_QWORD *)v6 & 0xFFFFFFFFFFFFF003uLL | 8;
      v6 += 16LL;
    }
    v25 = *(_QWORD *)v6;
    if ( (*a3 & 0x1FF) != 0 )
    {
      v28 = v25 & 0xFFFFFFFFFFFFFFFCuLL;
      *(_QWORD *)v6 = v28;
      v29 = ((unsigned __int64)(unsigned int)*a3 >> 7) ^ (((unsigned __int64)(unsigned int)*a3 >> 7) ^ v28) & 0xFFFFFFFFFFFFFFFBuLL;
      *(_QWORD *)v6 = v29;
      v30 = ((unsigned __int64)(unsigned int)*a3 >> 7) ^ (((unsigned __int64)(unsigned int)*a3 >> 7) ^ v29) & 0xFFFFFFFFFFFFFFF7uLL;
      *(_QWORD *)v6 = v30;
      v31 = v30 & 0xF | (16LL * (unsigned int)(*(_QWORD *)a3 >> 12));
      *(_WORD *)(v6 + 10) = v7;
      *(_QWORD *)v6 = v31;
      *(_WORD *)(v6 + 8) = v12;
    }
    else
    {
      v26 = v25 & 0xFFFFFFFFFFFFFFFCuLL | 1;
      *(_QWORD *)v6 = v26;
      v27 = (8 * v59) | (((unsigned __int64)(unsigned int)*a3 >> 7) ^ (((unsigned __int64)(unsigned int)*a3 >> 7) ^ v26) & 0xFFFFFFFFFFFFFFFBuLL) & 0xFFFFFFFFFFFFFFE7uLL;
      *(_QWORD *)v6 = v27;
      *(_QWORD *)v6 = v27 ^ (*(_QWORD *)a3 ^ v27) & 0xFFFFFFFFFFFFF000uLL;
      if ( v59 == 2 )
        *(_WORD *)(v6 + 10) = v7;
      else
        *(_DWORD *)(v6 + 8) = -1;
    }
  }
  return v6;
}
