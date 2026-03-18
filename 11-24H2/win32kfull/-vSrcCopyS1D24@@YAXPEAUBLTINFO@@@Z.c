/*
 * XREFs of ?vSrcCopyS1D24@@YAXPEAUBLTINFO@@@Z @ 0x140197A90
 * Callers:
 *     EngCopyBits @ 0x14000DA80 (EngCopyBits.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1401227DC (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D24(struct BLTINFO *a1)
{
  int v1; // r8d
  struct BLTINFO *v2; // r9
  BOOL v3; // r13d
  int v4; // r10d
  unsigned int v5; // r11d
  unsigned int v6; // ebx
  int v7; // r15d
  __int64 v8; // r12
  unsigned int v9; // r14d
  char v10; // si
  int v11; // edx
  unsigned __int8 v12; // dl
  char v13; // r13
  int v14; // r11d
  __int64 v15; // rdx
  _BYTE *v16; // r8
  _BYTE *v17; // r10
  int v18; // eax
  __int64 v19; // r14
  __int64 v20; // r15
  unsigned __int8 v21; // al
  _BYTE *v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  _BYTE *v27; // r13
  unsigned int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // r10d
  _BYTE *v32; // r8
  __int64 v33; // rax
  _BYTE *v34; // rdx
  unsigned int v35; // ecx
  unsigned int v36; // eax
  bool v37; // cf
  unsigned int v38; // eax
  __int64 v39; // rbx
  _BYTE *v40; // rbx
  _BYTE *v41; // r11
  unsigned __int8 j; // r9
  unsigned __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r13
  unsigned __int8 v46; // r11
  _BYTE *k; // r9
  unsigned __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // r10d
  _BYTE *v51; // r8
  _BYTE *v52; // rdx
  __int64 v53; // r14
  _BYTE *v54; // r14
  _BYTE *v55; // rdi
  unsigned __int8 i; // r11
  unsigned __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // r13
  __int64 v60; // rax
  __int64 v61; // r15
  _BYTE *v62; // rdi
  unsigned __int8 v63; // r11
  unsigned __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // r9
  __int64 v67; // rax
  unsigned __int8 v68; // bl
  _BYTE *v69; // r11
  unsigned __int64 v70; // rcx
  __int64 v71; // rcx
  char v72; // [rsp+0h] [rbp-60h]
  char v73; // [rsp+4h] [rbp-5Ch]
  __int64 v74; // [rsp+8h] [rbp-58h]
  int v75; // [rsp+10h] [rbp-50h]
  struct BLTINFO *v76; // [rsp+18h] [rbp-48h]
  __int64 v77; // [rsp+18h] [rbp-48h]
  unsigned int v78; // [rsp+20h] [rbp-40h]
  __int64 v79; // [rsp+30h] [rbp-30h]
  struct BLTINFO *v80; // [rsp+38h] [rbp-28h]
  unsigned int v81; // [rsp+40h] [rbp-20h]
  __int64 v82; // [rsp+48h] [rbp-18h]

  v1 = *((_DWORD *)a1 + 14);
  v2 = a1;
  v3 = 1;
  v4 = *((_DWORD *)a1 + 12);
  v5 = *((_DWORD *)a1 + 7);
  v6 = v1 & 7;
  v7 = *((_DWORD *)a1 + 11);
  v8 = *((int *)a1 + 10);
  v9 = v4 & 7;
  v80 = a1;
  v81 = v5 + v1;
  v82 = **(_QWORD **)(*(_QWORD *)a1 + 16LL);
  v78 = v9;
  v75 = v7;
  v10 = (v4 & 7) - (v1 & 7) + 8;
  if ( v9 >= v6 )
    v10 = v9 - v6;
  v11 = (int)(v5 + v1) >> 3;
  v73 = 8 - v10;
  if ( v11 == v1 >> 3 )
  {
    v12 = 0;
    v72 = 0;
    v3 = (int)(v5 + v9) > 8;
  }
  else
  {
    v14 = *((_DWORD *)a1 + 8);
    v72 = 1;
    LODWORD(v15) = v11 - ((v1 + 7) >> 3);
    v16 = (_BYTE *)(*((_QWORD *)a1 + 2) + (int)(3 * ((v1 + 7) & 0xFFFFFFF8)));
    LODWORD(a1) = v7 - 24 * v15;
    v17 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)(int)(v4 + (-v6 & 7)) >> 3));
    v18 = v8 - v15;
    if ( v14 )
    {
      v15 = (int)v15;
      a1 = (struct BLTINFO *)(int)a1;
      v74 = (int)v15;
      v76 = (struct BLTINFO *)(int)a1;
      v79 = v18;
      if ( v10 )
      {
        v19 = (int)a1;
        v20 = v18;
        do
        {
          v21 = *v17 << v10;
          --v14;
          if ( v17 != &v17[v15] )
          {
            v22 = &v17[v15];
            do
            {
              v23 = v21 | ((unsigned __int64)(unsigned __int8)*++v17 >> v73);
              v24 = (v23 >> 5) & 4;
              *v16 = *((_BYTE *)&v82 + v24);
              v16[1] = *((_BYTE *)&v82 + v24 + 1);
              v16[2] = *((_BYTE *)&v82 + v24 + 2);
              v16[3] = *((_BYTE *)&v82 + ((v23 >> 4) & 4));
              v16[4] = *((_BYTE *)&v82 + ((v23 >> 4) & 4) + 1);
              v16[5] = *((_BYTE *)&v82 + ((v23 >> 4) & 4) + 2);
              v16[6] = *((_BYTE *)&v82 + ((v23 >> 3) & 4));
              v16[7] = *((_BYTE *)&v82 + ((v23 >> 3) & 4) + 1);
              v16[8] = *((_BYTE *)&v82 + ((v23 >> 3) & 4) + 2);
              v16[9] = *((_BYTE *)&v82 + ((v23 >> 2) & 4));
              v16[10] = *((_BYTE *)&v82 + ((v23 >> 2) & 4) + 1);
              v16[11] = *((_BYTE *)&v82 + ((v23 >> 2) & 4) + 2);
              v16[12] = *((_BYTE *)&v82 + ((v23 >> 1) & 4));
              v16[13] = *((_BYTE *)&v82 + ((v23 >> 1) & 4) + 1);
              v16[14] = *((_BYTE *)&v82 + ((v23 >> 1) & 4) + 2);
              v16[15] = *((_BYTE *)&v82 + (v23 & 4));
              v16[16] = *((_BYTE *)&v82 + (v23 & 4) + 1);
              v16[17] = *((_BYTE *)&v82 + (v23 & 4) + 2);
              v25 = v23 & 2;
              v26 = v23 & 1;
              v16[18] = *((_BYTE *)&v82 + 2 * v25);
              v16[19] = *((_BYTE *)&v82 + 2 * v25 + 1);
              v16[20] = *((_BYTE *)&v82 + 2 * v25 + 2);
              v16[21] = *((_BYTE *)&v82 + 4 * v26);
              v16[22] = *((_BYTE *)&v82 + 4 * v26 + 1);
              v16[23] = *((_BYTE *)&v82 + 4 * v26 + 2);
              v16 += 24;
              v21 = *v17 << v10;
            }
            while ( v17 != v22 );
            v20 = v79;
            v15 = v74;
          }
          v16 += v19;
          v17 += v20;
        }
        while ( v14 );
        v2 = v80;
        v7 = v75;
      }
      else
      {
        do
        {
          --v14;
          if ( v17 != &v17[v15] )
          {
            v27 = &v17[v15];
            do
            {
              v28 = (unsigned __int8)*v17++;
              *v16 = *((_BYTE *)&v82 + ((v28 >> 5) & 4));
              v16[1] = *((_BYTE *)&v82 + ((v28 >> 5) & 4) + 1);
              v16[2] = *((_BYTE *)&v82 + ((v28 >> 5) & 4) + 2);
              v16[3] = *((_BYTE *)&v82 + ((v28 >> 4) & 4));
              v16[4] = *((_BYTE *)&v82 + ((v28 >> 4) & 4) + 1);
              v16[5] = *((_BYTE *)&v82 + ((v28 >> 4) & 4) + 2);
              v16[6] = *((_BYTE *)&v82 + ((v28 >> 3) & 4));
              v16[7] = *((_BYTE *)&v82 + ((v28 >> 3) & 4) + 1);
              v16[8] = *((_BYTE *)&v82 + ((v28 >> 3) & 4) + 2);
              v16[9] = *((_BYTE *)&v82 + ((v28 >> 2) & 4));
              v16[10] = *((_BYTE *)&v82 + ((v28 >> 2) & 4) + 1);
              v16[11] = *((_BYTE *)&v82 + ((v28 >> 2) & 4) + 2);
              v16[12] = *((_BYTE *)&v82 + ((v28 >> 1) & 4));
              v16[13] = *((_BYTE *)&v82 + ((v28 >> 1) & 4) + 1);
              v16[14] = *((_BYTE *)&v82 + ((v28 >> 1) & 4) + 2);
              v16[15] = *((_BYTE *)&v82 + (v28 & 4));
              v16[16] = *((_BYTE *)&v82 + (v28 & 4) + 1);
              v16[17] = *((_BYTE *)&v82 + (v28 & 4) + 2);
              v29 = v28 & 2;
              v30 = v28 & 1;
              v16[18] = *((_BYTE *)&v82 + 2 * v29);
              v16[19] = *((_BYTE *)&v82 + 2 * v29 + 1);
              v16[20] = *((_BYTE *)&v82 + 2 * v29 + 2);
              v16[21] = *((_BYTE *)&v82 + 4 * v30);
              v16[22] = *((_BYTE *)&v82 + 4 * v30 + 1);
              v16[23] = *((_BYTE *)&v82 + 4 * v30 + 2);
              v16 += 24;
            }
            while ( v17 != v27 );
            a1 = v76;
            v15 = v74;
          }
          v16 = &v16[(_QWORD)a1];
          v17 += v18;
        }
        while ( v14 );
      }
      v3 = 1;
      v9 = v78;
    }
    v12 = 1;
    v5 = 8 - v6;
  }
  if ( !(v6 | v12 ^ 1) )
    goto LABEL_6;
  v50 = *((_DWORD *)v2 + 8);
  v51 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
  v52 = (_BYTE *)(*((_QWORD *)v2 + 2) + 3 * *((_DWORD *)v2 + 14));
  if ( !v50 )
  {
LABEL_59:
    v12 = v72;
LABEL_6:
    v13 = 8 - v10;
    goto LABEL_7;
  }
  if ( v9 <= v6 )
  {
    v66 = (int)(3 * v5);
    v67 = v8;
    do
    {
      --v50;
      v68 = *v51 << v9;
      v69 = v52;
      if ( v52 != &v52[v66] )
      {
        do
        {
          v70 = v68;
          v68 *= 2;
          v71 = (v70 >> 5) & 4;
          *v69 = *((_BYTE *)&v82 + v71);
          v69[1] = *((_BYTE *)&v82 + v71 + 1);
          v69[2] = *((_BYTE *)&v82 + v71 + 2);
          v69 += 3;
        }
        while ( v69 != &v52[v66] );
        v67 = v8;
      }
      v52 += v7;
      v51 += v67;
    }
    while ( v50 );
    goto LABEL_58;
  }
  if ( !v3 )
  {
    v59 = v7;
    v60 = v8;
    v61 = (int)(3 * v5);
    do
    {
      --v50;
      v62 = v52;
      v63 = *v51 << v10 << v6;
      if ( v52 != &v52[v61] )
      {
        do
        {
          v64 = v63;
          v63 *= 2;
          v65 = (v64 >> 5) & 4;
          *v62 = *((_BYTE *)&v82 + v65);
          v62[1] = *((_BYTE *)&v82 + v65 + 1);
          v62[2] = *((_BYTE *)&v82 + v65 + 2);
          v62 += 3;
        }
        while ( v62 != &v52[v61] );
        v60 = v8;
      }
      v52 += v59;
      v51 += v60;
    }
    while ( v50 );
    v7 = v75;
LABEL_58:
    v2 = v80;
    goto LABEL_59;
  }
  v13 = 8 - v10;
  v53 = (int)(3 * v5);
  v77 = v53;
  do
  {
    --v50;
    v54 = &v52[v53];
    v55 = v52;
    for ( i = ((unsigned __int8)(*v51 << v10) | (unsigned __int8)(v51[1] >> v73)) << v6; v55 != v54; v55 += 3 )
    {
      v57 = i;
      i *= 2;
      v58 = (v57 >> 5) & 4;
      *v55 = *((_BYTE *)&v82 + v58);
      v55[1] = *((_BYTE *)&v82 + v58 + 1);
      v55[2] = *((_BYTE *)&v82 + v58 + 2);
    }
    v53 = v77;
    v52 += v7;
    v51 += v8;
  }
  while ( v50 );
  v2 = v80;
  v7 = v75;
  v12 = v72;
LABEL_7:
  if ( (v81 & 7) != 0 )
  {
    if ( v12 )
    {
      v31 = *((_DWORD *)v2 + 8);
      v32 = (_BYTE *)(*((_QWORD *)v2 + 2) + (int)(3 * (v81 & 0xFFFFFFF8)));
      v33 = *((int *)v2 + 13);
      v34 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((v33 - 1) >> 3));
      v35 = ((_BYTE)v81 - 1) & 7;
      v36 = ((_BYTE)v33 - 1) & 7;
      if ( v31 )
      {
        v37 = v36 < v35;
        v38 = v35 + 1;
        if ( v37 )
        {
          v39 = 3 * v38;
          do
          {
            --v31;
            v40 = &v32[v39];
            v41 = v32;
            for ( j = (*v34 >> v13) | (*(v34 - 1) << v10); v41 != v40; v41 += 3 )
            {
              v43 = j;
              j *= 2;
              v44 = (v43 >> 5) & 4;
              *v41 = *((_BYTE *)&v82 + v44);
              v41[1] = *((_BYTE *)&v82 + v44 + 1);
              v41[2] = *((_BYTE *)&v82 + v44 + 2);
            }
            v39 = 3 * v38;
            v32 += v7;
            v34 += v8;
          }
          while ( v31 );
        }
        else
        {
          v45 = 3 * v38;
          do
          {
            --v31;
            v46 = *v34 << v10;
            for ( k = v32; k != &v32[v45]; k += 3 )
            {
              v48 = v46;
              v46 *= 2;
              v49 = (v48 >> 5) & 4;
              *k = *((_BYTE *)&v82 + v49);
              k[1] = *((_BYTE *)&v82 + v49 + 1);
              k[2] = *((_BYTE *)&v82 + v49 + 2);
            }
            v32 += v7;
            v34 += v8;
          }
          while ( v31 );
        }
      }
    }
  }
}
