/*
 * XREFs of ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x140314110
 * Callers:
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x140313DA4 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

void __fastcall vPatCpyRect1_6x6(struct _PATBLTFRAME *a1, int a2)
{
  int v2; // r10d
  int *v3; // r14
  struct _PATBLTFRAME *v4; // r9
  int v5; // r11d
  int v6; // esi
  int v7; // r13d
  __int64 v8; // rdx
  int v9; // edi
  int v10; // r15d
  int v11; // r12d
  int v12; // r8d
  int v13; // esi
  int *v14; // rbx
  __int64 v15; // r8
  char v16; // r8
  int v17; // eax
  int v18; // edx
  __int64 v19; // r11
  char v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // esi
  char *v24; // r13
  int v25; // ecx
  int v26; // r14d
  unsigned int v27; // edi
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // r9d
  int v32; // ecx
  int v33; // edx
  int v34; // esi
  int v35; // r8d
  int v36; // edi
  int v37; // r8d
  int v38; // esi
  int *v39; // rsi
  _DWORD *v40; // rdi
  unsigned __int64 m; // rcx
  __int64 v42; // rbx
  char *v43; // rdi
  int n; // r14d
  __int64 v45; // rsi
  int v46; // r12d
  int *v47; // rsi
  _DWORD *v48; // rdi
  unsigned __int64 k; // rcx
  char *v50; // rdi
  int v51; // r14d
  int v52; // esi
  _DWORD *v53; // rsi
  _DWORD *v54; // rdi
  unsigned __int64 j; // rcx
  int *v56; // rdi
  int v57; // r14d
  int v58; // ecx
  int v59; // r9d
  __int64 v60; // rdi
  int v61; // esi
  _DWORD *v62; // rsi
  _DWORD *v63; // rdi
  unsigned __int64 ii; // rcx
  int *v65; // rdi
  int v66; // r14d
  size_t v67; // rdx
  bool v68; // zf
  int v69; // [rsp+28h] [rbp-89h]
  int v70; // [rsp+28h] [rbp-89h]
  int v71; // [rsp+28h] [rbp-89h]
  int v72; // [rsp+2Ch] [rbp-85h]
  char v73; // [rsp+30h] [rbp-81h]
  int v74; // [rsp+40h] [rbp-71h]
  int v75; // [rsp+44h] [rbp-6Dh]
  int v76; // [rsp+48h] [rbp-69h]
  unsigned int Size; // [rsp+4Ch] [rbp-65h]
  int Size_4; // [rsp+50h] [rbp-61h]
  int v79; // [rsp+54h] [rbp-5Dh]
  int v80; // [rsp+58h] [rbp-59h]
  int v81; // [rsp+5Ch] [rbp-55h]
  int v82; // [rsp+60h] [rbp-51h]
  int v83; // [rsp+64h] [rbp-4Dh]
  int v84; // [rsp+68h] [rbp-49h]
  unsigned __int8 *v86; // [rsp+70h] [rbp-41h]
  int *v87; // [rsp+78h] [rbp-39h]
  int v88; // [rsp+80h] [rbp-31h]
  char i; // [rsp+84h] [rbp-2Dh]
  int v90; // [rsp+88h] [rbp-29h]
  int v91; // [rsp+90h] [rbp-21h]
  __int64 v92; // [rsp+98h] [rbp-19h]
  int *v93; // [rsp+A0h] [rbp-11h]
  __int64 v94; // [rsp+B0h] [rbp-1h]
  unsigned __int8 *v96; // [rsp+C0h] [rbp+Fh]
  _BYTE Src[12]; // [rsp+C8h] [rbp+17h] BYREF
  int v98; // [rsp+D4h] [rbp+23h]

  v2 = 0;
  v3 = (int *)*((_QWORD *)a1 + 3);
  v4 = a1;
  v84 = *((_DWORD *)a1 + 4);
  v88 = 6 * v84;
  v93 = v3;
  do
  {
    v5 = *v3;
    v6 = v3[2];
    v7 = v3[1];
    v8 = *v3;
    v82 = v7;
    v9 = *((_DWORD *)&aulMsk + (*v3 & 0x1F));
    v74 = v9;
    v10 = ~v9;
    v83 = ~v9;
    v11 = *((_DWORD *)&aulMsk + (v6 & 0x1F));
    if ( v11 == -1 )
      v11 = 0;
    v12 = ~v11;
    Size_4 = v11;
    v81 = ~v11;
    v13 = (v6 >> 5) - ((v5 + 31) >> 5);
    v14 = (int *)(*(_QWORD *)v4 + *((_DWORD *)v4 + 4) * v7 + 4 * (v8 >> 5));
    v87 = v14;
    if ( v13 == -1 )
      goto LABEL_12;
    if ( v13 )
    {
      if ( v9 == -1 )
        v2 = 3 - (v11 != 0);
      else
        LOBYTE(v2) = v11 == 0;
      goto LABEL_13;
    }
    if ( v9 == -1 || !v11 )
    {
LABEL_12:
      v2 = 9;
      v74 = v12 & v9;
      v10 = ~(v12 & v9);
      v83 = v10;
    }
    else
    {
      v2 = 8;
    }
LABEL_13:
    v15 = *((_QWORD *)v4 + 1);
    v79 = v2;
    if ( v7 == *((_DWORD *)v4 + 9) )
    {
      v86 = (unsigned __int8 *)*((_QWORD *)v4 + 1);
    }
    else
    {
      v86 = (unsigned __int8 *)(v15 + 8LL * ((6 - 6 * ((v7 - *((_DWORD *)v4 + 9)) / 6) + v7 - *((_DWORD *)v4 + 9)) % 6));
      v14 = (int *)(*(_QWORD *)v4 + *((_DWORD *)v4 + 4) * v7 + 4 * (v8 >> 5));
    }
    v96 = (unsigned __int8 *)(v15 + 48);
    v75 = v13 / 3;
    Size = 4 * v13;
    v16 = *((_BYTE *)v4 + 32);
    v76 = v13 % 3;
    v73 = v16;
    v72 = (v5 >> 5) % 3;
    v17 = v3[3] - v7;
    v18 = 6;
    if ( v17 >= 6 || (v18 = v3[3] - v7, v17) )
    {
      v19 = v88;
      v20 = 6 - v16;
      v21 = v84;
      v92 = v13 % 3;
      v22 = v13;
      v23 = v72;
      v94 = v22;
      for ( i = 6 - v16; ; v20 = i )
      {
        v24 = (char *)v87;
        v91 = v18 - 1;
        v87 = (int *)((char *)v87 + v21);
        v25 = v3[3] - v82++ + 5;
        v26 = v25 / 6;
        v27 = *v86 >> 2;
        if ( v16 )
          v27 = (((unsigned int)(*v86 >> 2) >> v16) | (unsigned __int8)(v27 << v20)) & 0x3F;
        v28 = v27 | ((v27 | ((v27 | ((v27 | (v27 << 6)) << 6)) << 6)) << 6);
        if ( v2 != 9 )
          break;
        if ( v23 )
        {
          if ( v23 == 1 )
          {
            v29 = 16 * v28;
            v27 >>= 2;
          }
          else
          {
            v29 = v28 << 6;
          }
        }
        else
        {
          v29 = 4 * v28;
          v27 >>= 4;
        }
        v30 = v27 | v29;
        HIBYTE(v69) = v30;
        LOBYTE(v69) = HIBYTE(v30);
        BYTE1(v69) = BYTE2(v30);
        BYTE2(v69) = BYTE1(v30);
        *(_DWORD *)Src = v69;
        do
        {
          *v14 = v74 & v69 | v10 & *v14;
          v14 = (int *)((char *)v14 + v19);
          --v26;
        }
        while ( v26 );
LABEL_88:
        v4 = a1;
        v86 += 8;
        if ( v86 == v96 )
          v86 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
        v18 = v91;
        v2 = v79;
        v3 = v93;
        v14 = v87;
        v16 = v73;
        v21 = v84;
        if ( !v91 )
          goto LABEL_91;
      }
      HIBYTE(v70) = (v27 >> 4) | (4 * v28);
      LOBYTE(v70) = ((v27 >> 4) | (4 * v28)) >> 24;
      BYTE1(v70) = ((v27 >> 4) | (4 * v28)) >> 16;
      BYTE2(v70) = (unsigned __int16)((v27 >> 4) | (4 * v28)) >> 8;
      v31 = v70;
      v32 = (v27 >> 2) | (16 * v28);
      v33 = v27 | (v28 << 6);
      HIBYTE(v70) = v32;
      LOBYTE(v70) = HIBYTE(v32);
      BYTE1(v70) = BYTE2(v32);
      BYTE2(v70) = BYTE1(v32);
      v34 = v70;
      v35 = v70;
      LOBYTE(v71) = HIBYTE(v33);
      BYTE1(v71) = BYTE2(v33);
      BYTE2(v71) = BYTE1(v33);
      HIBYTE(v71) = v33;
      v36 = v71;
      *(_DWORD *)&Src[8] = v71;
      *(_DWORD *)&Src[4] = v34;
      if ( v72 == 1 )
      {
        v34 = v71;
        *(_DWORD *)&Src[4] = v71;
        v36 = v31;
        *(_DWORD *)&Src[8] = v31;
        goto LABEL_35;
      }
      *(_DWORD *)Src = v31;
      v35 = v31;
      if ( v72 == 2 )
      {
        v35 = v71;
        v36 = v34;
        *(_DWORD *)&Src[8] = v34;
        v34 = v31;
        *(_DWORD *)&Src[4] = v31;
LABEL_35:
        *(_DWORD *)Src = v35;
      }
      v98 = v35;
      if ( v2 )
      {
        switch ( v2 )
        {
          case 1:
            v52 = v74 & v35;
            *v14 = v74 & v35 | *v14 & v10;
            if ( v75 > 0 )
            {
              v53 = v14 + 1;
              *(_QWORD *)(v14 + 1) = *(_QWORD *)&Src[4];
              v54 = v14 + 4;
              v14[3] = v35;
              for ( j = (12 * (unsigned __int64)(unsigned int)v75 - 12) >> 2; j; --j )
                *v54++ = *v53++;
              v52 = v74 & v35;
              v14 += 3 * (unsigned int)v75;
            }
            if ( v76 )
              memmove(v14 + 1, &Src[4], (unsigned int)(4 * v76));
            v42 = v88;
            v56 = (int *)&v24[v88];
            v57 = v26 - 1;
            if ( v57 )
            {
              do
              {
                *v56 = v52 | v10 & *v56;
                memmove(v56 + 1, v24 + 4, Size);
                v56 = (int *)((char *)v56 + v88);
                --v57;
              }
              while ( v57 );
              v11 = Size_4;
            }
            break;
          case 2:
            v45 = 4 * v92;
            v46 = v81 & *(_DWORD *)&Src[4 * v92];
            if ( v75 > 0 )
            {
              *(_QWORD *)v14 = *(_QWORD *)Src;
              v47 = v14;
              v14[2] = v36;
              v48 = v14 + 3;
              for ( k = (12 * (unsigned __int64)(unsigned int)v75 - 12) >> 2; k; --k )
                *v48++ = *v47++;
              v45 = 4 * v92;
              v14 += 3 * (unsigned int)v75;
            }
            if ( v76 )
            {
              memmove(v14, Src, (unsigned int)(4 * v76));
              v14 = (int *)((char *)v14 + v45);
            }
            *v14 = v46 | Size_4 & *v14;
            v42 = v88;
            v50 = &v24[v88];
            v51 = v26 - 1;
            if ( v51 )
            {
              do
              {
                memmove(v50, v24, Size);
                *(_DWORD *)&v50[4 * v94] = v46 | Size_4 & *(_DWORD *)&v50[4 * v94];
                v50 += v88;
                --v51;
              }
              while ( v51 );
              v10 = v83;
            }
            v11 = Size_4;
            break;
          case 3:
            if ( v75 > 0 )
            {
              *(_QWORD *)v14 = *(_QWORD *)Src;
              v39 = v14;
              v14[2] = v36;
              v40 = v14 + 3;
              for ( m = (12 * (unsigned __int64)(unsigned int)v75 - 12) >> 2; m; --m )
                *v40++ = *v39++;
              v14 += 3 * (unsigned int)v75;
            }
            if ( v76 )
              memmove(v14, Src, (unsigned int)(4 * v76));
            v42 = v88;
            v43 = &v24[v88];
            for ( n = v26 - 1; n; --n )
            {
              memmove(v43, v24, Size);
              v43 += v88;
            }
            break;
          case 8:
            v37 = v74 & v35;
            v38 = v81 & v34;
            do
            {
              *v14 = v37 | v10 & *v14;
              v14[1] = v38 | v14[1] & v11;
              v14 = (int *)((char *)v14 + v19);
              --v26;
            }
            while ( v26 );
            goto LABEL_87;
          default:
            v23 = v72;
            goto LABEL_88;
        }
      }
      else
      {
        v58 = v92;
        v59 = v74 & v35;
        v80 = v74 & v35;
        v60 = 4 * v92;
        *v14 = v74 & v35 | *v14 & v10;
        v61 = v81 & *(_DWORD *)&Src[4 * v92 + 4];
        v90 = v61;
        if ( v75 > 0 )
        {
          v62 = v14 + 1;
          *(_QWORD *)(v14 + 1) = *(_QWORD *)&Src[4];
          v63 = v14 + 4;
          v14[3] = v35;
          for ( ii = (12 * (unsigned __int64)(unsigned int)v75 - 12) >> 2; ii; --ii )
            *v63++ = *v62++;
          v61 = v90;
          v14 += 3 * (unsigned int)v75;
          v60 = 4 * v92;
          v58 = v92;
        }
        if ( v76 )
        {
          memmove(v14 + 1, &Src[4], (unsigned int)(4 * v58));
          v59 = v80;
          v14 = (int *)((char *)v14 + v60);
        }
        v14[1] = v61 | v14[1] & v11;
        v42 = v88;
        v65 = (int *)&v24[v88];
        v66 = v26 - 1;
        if ( v66 )
        {
          v67 = Size;
          do
          {
            *v65 = v59 | v10 & *v65;
            memmove(v65 + 1, v24 + 4, v67);
            v59 = v80;
            v67 = Size;
            v65[v94 + 1] = v61 | v11 & v65[v94 + 1];
            v65 = (int *)((char *)v65 + v88);
            --v66;
          }
          while ( v66 );
        }
      }
      v19 = v42;
LABEL_87:
      v23 = v72;
      goto LABEL_88;
    }
LABEL_91:
    v3 += 4;
    v68 = a2-- == 1;
    v2 = 0;
    v93 = v3;
  }
  while ( !v68 );
}
