/*
 * XREFs of ?vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z @ 0x140150820
 * Callers:
 *     EngCopyBits @ 0x14000DA80 (EngCopyBits.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1401227DC (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall vSrcCopyS1D1LtoR(struct BLTINFO *a1)
{
  int *v1; // r13
  int v2; // r8d
  _BYTE *v3; // r14
  int v4; // r15d
  int *v5; // r12
  int v6; // r9d
  unsigned int v7; // edx
  char v8; // bp
  int v9; // esi
  _QWORD *v10; // r10
  __int64 v11; // r14
  int v12; // esi
  _DWORD *v13; // r11
  char *v14; // rdi
  _BYTE *v15; // rbx
  int v16; // ecx
  __int64 v17; // rax
  int *v18; // r8
  _QWORD *v19; // rbp
  _DWORD *v20; // r15
  unsigned __int8 v21; // bl
  char v22; // r8
  int v23; // edi
  int v24; // eax
  int v25; // ebx
  int v26; // r15d
  int v27; // r9d
  __int64 v28; // rax
  unsigned int v29; // edx
  unsigned __int8 *v30; // r8
  unsigned int v31; // ecx
  int v32; // r10d
  char v33; // dl
  unsigned __int8 v34; // al
  unsigned __int8 v35; // dl
  char v36; // al
  _BYTE *v37; // rcx
  unsigned __int8 *v38; // r12
  int v39; // ebp
  _BYTE *v40; // rbx
  unsigned __int8 v41; // dl
  int v42; // r9d
  __int64 v43; // rdx
  char *v44; // r9
  char v45; // r8
  unsigned __int8 v46; // dl
  char v47; // al
  __int64 v48; // rdx
  char *v49; // r9
  char v50; // r8
  unsigned __int8 v51; // dl
  char v52; // al
  _BYTE *v53; // r15
  unsigned __int8 v54; // dl
  unsigned __int8 v55; // al
  int v56; // ebx
  char v57; // r9
  __int64 v58; // r9
  unsigned int i; // ecx
  char v60; // al
  unsigned __int8 v61; // r13
  _BYTE *v62; // r15
  unsigned __int8 v63; // dl
  unsigned __int8 v64; // al
  _BYTE *v65; // r15
  unsigned __int8 v66; // dl
  _BYTE *v67; // r15
  unsigned __int8 v68; // dl
  unsigned __int8 v69; // cl
  char v70; // di
  _BYTE *v71; // rsi
  unsigned __int8 v72; // dl
  unsigned __int8 v73; // dl
  char v74; // dl
  unsigned __int8 v75; // al
  char v76; // cl
  int v77; // [rsp+20h] [rbp-88h]
  char v78; // [rsp+24h] [rbp-84h]
  char v79; // [rsp+28h] [rbp-80h]
  int v80; // [rsp+2Ch] [rbp-7Ch]
  unsigned int Size; // [rsp+30h] [rbp-78h]
  _BYTE *Sizea; // [rsp+30h] [rbp-78h]
  char v83; // [rsp+38h] [rbp-70h]
  unsigned int v84; // [rsp+40h] [rbp-68h]
  BOOL v85; // [rsp+48h] [rbp-60h]
  unsigned int v86; // [rsp+50h] [rbp-58h]
  int v87; // [rsp+58h] [rbp-50h]
  int v89; // [rsp+B8h] [rbp+10h]
  char v90; // [rsp+B8h] [rbp+10h]
  int v91; // [rsp+C0h] [rbp+18h]
  int v92; // [rsp+C8h] [rbp+20h]

  v1 = (int *)a1;
  v2 = *((_DWORD *)a1 + 14);
  v3 = 0LL;
  v4 = *((_DWORD *)a1 + 11);
  v5 = (int *)((char *)a1 + 16);
  v85 = 1;
  v84 = *((_DWORD *)a1 + 12) & 7;
  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 4LL) | (2 * **(_DWORD **)(*(_QWORD *)a1 + 16LL));
  v7 = v2 & 7;
  v80 = v6;
  v86 = v7;
  v92 = v4;
  v8 = v84 - (v2 & 7) + 8;
  if ( v84 >= v7 )
    v8 = v84 - v7;
  v79 = v8;
  v83 = 8 - v8;
  v87 = *((_DWORD *)a1 + 7);
  v9 = v2 + v87;
  v77 = *((_DWORD *)a1 + 10);
  v78 = v2 + v87;
  if ( (((v2 + v87) ^ v2) & 0xFFFFFFF8) == 0 )
  {
    v19 = (_QWORD *)((char *)a1 + 8);
    v20 = (_DWORD *)((char *)a1 + 32);
    v22 = 0;
    v90 = 0;
    v21 = 0;
    v13 = (_DWORD *)((char *)a1 + 32);
    v10 = (_QWORD *)((char *)a1 + 8);
    LOBYTE(v23) = (-1 << (8 - (v9 & 7))) & (255 >> v7);
    v85 = (int)(v84 + v87) > 8;
    goto LABEL_11;
  }
  v10 = (_QWORD *)((char *)a1 + 8);
  v11 = v9;
  v12 = *((_DWORD *)a1 + 8);
  v13 = (_DWORD *)((char *)a1 + 32);
  v3 = (_BYTE *)(*(_QWORD *)v5 + (v11 >> 3));
  v14 = (char *)(*((_QWORD *)a1 + 1) + ((__int64)(int)(*((_DWORD *)a1 + 12) + (-v7 & 7)) >> 3));
  v15 = (_BYTE *)(*(_QWORD *)v5 + ((__int64)(v2 + 7) >> 3));
  v16 = (_DWORD)v3 - (_DWORD)v15;
  Size = (_DWORD)v3 - (_DWORD)v15;
  v91 = v4 - ((_DWORD)v3 - (_DWORD)v15);
  LODWORD(v17) = v77 - ((_DWORD)v3 - (_DWORD)v15);
  v89 = v17;
  if ( v8 && v6 && v6 != 3 )
  {
    v18 = v1 + 4;
    v19 = v1 + 2;
    v20 = v1 + 8;
    v42 = v6 - 1;
    if ( !v42 )
    {
      if ( v12 )
      {
        v48 = v16;
        v17 = (int)v17;
        do
        {
          v49 = &v14[v48];
          --v12;
          v50 = *v14 << v79;
          if ( v14 != &v14[v48] )
          {
            do
            {
              v51 = *++v14;
              *v15++ = v50 | (v51 >> v83);
              v50 = v51 << v79;
            }
            while ( v14 != v49 );
            v17 = v89;
            v48 = v16;
          }
          v15 += v91;
          v14 += v17;
        }
        while ( v12 );
        v1 = (int *)a1;
        goto LABEL_54;
      }
LABEL_55:
      v22 = 1;
      v20 = v13;
      v90 = 1;
      v21 = 1;
      v19 = v10;
      goto LABEL_10;
    }
    if ( v42 == 1 )
    {
      if ( v12 )
      {
        v43 = v16;
        v17 = (int)v17;
        do
        {
          v44 = &v14[v43];
          --v12;
          v45 = *v14 << v79;
          if ( v14 != &v14[v43] )
          {
            do
            {
              v46 = *++v14;
              v47 = v45 | (v46 >> v83);
              v45 = v46 << v79;
              *v15++ = ~v47;
            }
            while ( v14 != v44 );
            v17 = v89;
            v43 = v16;
          }
          v15 += v91;
          v14 += v17;
        }
        while ( v12 );
        v1 = (int *)a1;
LABEL_54:
        v7 = v86;
        goto LABEL_55;
      }
      goto LABEL_55;
    }
LABEL_9:
    v21 = 1;
    v5 = v18;
    v22 = 1;
    v90 = 1;
    v13 = v20;
    v10 = v19;
LABEL_10:
    LOBYTE(v9) = v78;
    v23 = 255 >> v7;
    goto LABEL_11;
  }
  v18 = v1 + 4;
  v19 = v1 + 2;
  v20 = v1 + 8;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      if ( !v12 )
        goto LABEL_55;
      do
      {
        memmove(v15, v14, (int)Size);
        v15 += v92;
        v14 += v77;
        --v12;
      }
      while ( v12 );
      v10 = v1 + 2;
      v13 = v1 + 8;
      v5 = v1 + 4;
      goto LABEL_54;
    }
    if ( v6 == 2 )
    {
      if ( v12 )
      {
        v58 = (int)v17;
        do
        {
          --v12;
          for ( i = Size; i; --i )
          {
            v60 = *v14++;
            *v15++ = ~v60;
          }
          v15 += v91;
          v14 += v58;
        }
        while ( v12 );
      }
      LOBYTE(v9) = v78;
      v22 = 1;
      v90 = 1;
      v23 = 255 >> v7;
      v19 = v1 + 2;
      v21 = 1;
      goto LABEL_11;
    }
    if ( v6 != 3 )
      goto LABEL_9;
  }
  if ( !v12 )
    goto LABEL_9;
  v61 = -(v6 != 0);
  do
  {
    --v12;
    if ( Size )
    {
      memset_0(v15, v61, Size);
      v15 += Size;
    }
    v15 += v91;
  }
  while ( v12 );
  v1 = (int *)a1;
  v22 = 1;
  v7 = v86;
  LOBYTE(v9) = v78;
  v90 = 1;
  v19 = (_QWORD *)((char *)a1 + 8);
  v23 = 255 >> v86;
  v20 = (_DWORD *)((char *)a1 + 32);
  v21 = 1;
  v13 = (_DWORD *)((char *)a1 + 32);
  v10 = (_QWORD *)((char *)a1 + 8);
LABEL_11:
  v24 = v21;
  v25 = v80;
  if ( !(v7 | v24 ^ 1) )
  {
LABEL_12:
    v26 = v92;
    goto LABEL_13;
  }
  v37 = (_BYTE *)(*(_QWORD *)v5 + ((__int64)v1[14] >> 3));
  v38 = (unsigned __int8 *)(*v19 + ((__int64)v1[12] >> 3));
  v39 = *v20;
  Sizea = v37;
  if ( v80 == 1 )
  {
    if ( !v39 )
      goto LABEL_12;
    if ( v84 > v7 )
    {
      if ( v85 )
      {
        v53 = v37;
        do
        {
          v54 = v38[1];
          v55 = *v38;
          v38 += v77;
          *v53 = ~(_BYTE)v23 & *v53 | v23 & ((v55 << v79) | (v54 >> v83));
          v53 += v92;
          --v39;
        }
        while ( v39 );
        v1 = (int *)a1;
        v22 = v90;
        LOBYTE(v9) = v78;
        v25 = v80;
      }
      else
      {
        v71 = v37;
        do
        {
          v72 = *v38;
          v38 += v77;
          *v71 = ~(_BYTE)v23 & *v71 | v23 & (v72 << v79);
          v71 += v92;
          --v39;
        }
        while ( v39 );
        v1 = (int *)a1;
        v22 = v90;
        LOBYTE(v9) = v78;
      }
      goto LABEL_12;
    }
    if ( v84 >= v7 )
    {
      do
      {
        v52 = *v38 & v23;
        v38 += v77;
        *Sizea = v52 | ~(_BYTE)v23 & *v37;
        v37 = &Sizea[v92];
        Sizea = v37;
        --v39;
      }
      while ( v39 );
    }
    else
    {
      v40 = v37;
      do
      {
        v41 = *v38;
        v38 += v77;
        *v40 = ~(_BYTE)v23 & *v40 | v23 & (v41 >> v83);
        v40 += v92;
        --v39;
      }
      while ( v39 );
      v1 = (int *)a1;
      v22 = v90;
    }
    goto LABEL_34;
  }
  if ( v80 )
  {
    if ( v80 == 2 )
    {
      if ( !v39 )
        goto LABEL_12;
      if ( v84 <= v7 )
      {
        v67 = v37;
        if ( v84 >= v7 )
        {
          do
          {
            v69 = *v38;
            v38 += v77;
            *v67 = ~(_BYTE)v23 & *v67 | v23 & ~v69;
            v67 += v92;
            --v39;
          }
          while ( v39 );
          v1 = (int *)a1;
          goto LABEL_35;
        }
        do
        {
          v68 = *v38;
          v38 += v77;
          *v67 = ~(_BYTE)v23 & *v67 | v23 & ~(v68 >> v83);
          v67 += v92;
          --v39;
        }
        while ( v39 );
        v1 = (int *)a1;
        v22 = v90;
      }
      else if ( v85 )
      {
        v62 = v37;
        do
        {
          v63 = v38[1];
          v64 = *v38;
          v38 += v77;
          *v62 = ~(_BYTE)v23 & *v62 | v23 & ~((v64 << v79) | (v63 >> v83));
          v62 += v92;
          --v39;
        }
        while ( v39 );
        v1 = (int *)a1;
        v22 = v90;
      }
      else
      {
        v65 = v37;
        do
        {
          v66 = *v38;
          v38 += v77;
          *v65 = ~(_BYTE)v23 & *v65 | v23 & ~(v66 << v79);
          v65 += v92;
          --v39;
        }
        while ( v39 );
        v22 = v90;
      }
LABEL_34:
      LOBYTE(v9) = v78;
LABEL_35:
      v25 = v80;
      goto LABEL_12;
    }
    if ( v80 != 3 || !v39 )
      goto LABEL_12;
    v26 = v92;
    do
    {
      *v37 |= v23;
      v37 += v92;
      --v39;
    }
    while ( v39 );
  }
  else
  {
    if ( !v39 )
      goto LABEL_12;
    v26 = v92;
    v70 = ~(_BYTE)v23;
    do
    {
      *v37 &= v70;
      v37 += v92;
      --v39;
    }
    while ( v39 );
  }
LABEL_13:
  v27 = 255 >> ((*((_BYTE *)v1 + 56) + v87) & 7);
  if ( (v9 & 7) != 0 && v22 )
  {
    v28 = v1[13];
    v29 = ((_BYTE)v9 - 1) & 7;
    v30 = (unsigned __int8 *)(*v10 + ((v28 - 1) >> 3));
    v31 = ((_BYTE)v28 - 1) & 7;
    v32 = *v13;
    if ( v25 == 1 )
    {
      if ( v32 )
      {
        if ( v31 > v29 )
        {
          do
          {
            v35 = *v30;
            v30 += v77;
            *v3 = v27 & *v3 | ~(_BYTE)v27 & (v35 << v79);
            v3 += v26;
            --v32;
          }
          while ( v32 );
        }
        else if ( v31 >= v29 )
        {
          do
          {
            v36 = *v30 & ~(_BYTE)v27;
            v30 += v77;
            *v3 = v36 | v27 & *v3;
            v3 += v26;
            --v32;
          }
          while ( v32 );
        }
        else
        {
          do
          {
            v33 = *(v30 - 1);
            v34 = *v30;
            v30 += v77;
            *v3 = v27 & *v3 | ~(_BYTE)v27 & ((v34 >> v83) | (v33 << v79));
            v3 += v26;
            --v32;
          }
          while ( v32 );
        }
      }
    }
    else if ( v25 )
    {
      v56 = v25 - 2;
      if ( v56 )
      {
        if ( v56 == 1 && v32 )
        {
          v57 = ~(_BYTE)v27;
          do
          {
            *v3 |= v57;
            v3 += v26;
            --v32;
          }
          while ( v32 );
        }
      }
      else if ( v32 )
      {
        if ( v31 <= v29 )
        {
          if ( v31 >= v29 )
          {
            do
            {
              v76 = ~(*v30 | v27);
              v30 += v77;
              *v3 = v27 & *v3 | v76;
              v3 += v26;
              --v32;
            }
            while ( v32 );
          }
          else
          {
            do
            {
              v74 = *(v30 - 1);
              v75 = *v30;
              v30 += v77;
              *v3 = v27 & *v3 | ~(v27 | (v75 >> v83) | (v74 << v79));
              v3 += v26;
              --v32;
            }
            while ( v32 );
          }
        }
        else
        {
          do
          {
            v73 = *v30;
            v30 += v77;
            *v3 = v27 & *v3 | ~(v27 | (v73 << v79));
            v3 += v26;
            --v32;
          }
          while ( v32 );
        }
      }
    }
    else
    {
      for ( ; v32; --v32 )
      {
        *v3 &= v27;
        v3 += v26;
      }
    }
  }
}
