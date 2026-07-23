/*
 * XREFs of MiParseImageSectionHeaders @ 0x14098F6FC
 * Callers:
 *     MiBuildImageControlArea @ 0x14098F030 (MiBuildImageControlArea.c)
 * Callees:
 *     MiMakeSubsectionPte @ 0x1402FC49C (MiMakeSubsectionPte.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiParseImageSectionHeaders(int a1, __int64 *a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rdi
  __int64 *v7; // r11
  int v8; // r10d
  unsigned int *v11; // rbx
  __int64 v12; // r9
  __int64 v14; // rdx
  unsigned int v15; // r15d
  unsigned int v16; // r13d
  unsigned int v17; // ebp
  int v18; // eax
  __int64 v19; // r11
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // r15d
  unsigned int v23; // r9d
  unsigned int v24; // eax
  int v25; // r9d
  int v26; // r8d
  int v27; // edx
  unsigned int v28; // ecx
  __int64 v29; // rax
  char v30; // r15
  __int64 v31; // rdx
  __int64 DemandZeroPte; // rax
  int v33; // edx
  __int64 v34; // r8
  char v35; // cl
  unsigned int v36; // edx
  unsigned int v37; // r15d
  _QWORD *v38; // r12
  unsigned int *v40; // rcx
  unsigned int v41; // edx
  unsigned int v42; // r8d
  char v43; // [rsp+20h] [rbp-68h]
  unsigned int v44; // [rsp+24h] [rbp-64h]
  unsigned int v45; // [rsp+28h] [rbp-60h]
  unsigned int v46; // [rsp+2Ch] [rbp-5Ch]
  __int64 v47; // [rsp+30h] [rbp-58h]
  __int64 v48; // [rsp+38h] [rbp-50h]
  __int64 v49; // [rsp+40h] [rbp-48h]
  char v51; // [rsp+98h] [rbp+10h]
  unsigned int v52; // [rsp+B8h] [rbp+30h]

  v6 = *a2;
  v7 = a2 + 16;
  v8 = a1;
  v47 = a2[17] + 8LL * *((unsigned int *)a2 + 43);
  *(_BYTE *)(*a2 + 14) = *(_BYTE *)(*a2 + 14) & 0xE0 | 7;
  if ( (a1 & 0x100000) != 0 )
  {
    v40 = (unsigned int *)(a3 + 16);
    while ( a4 )
    {
      v41 = *(v40 - 2);
      if ( !v41 )
        v41 = *v40;
      v42 = v40[1];
      if ( v42 + *v40 < v42 )
      {
        dword_140E2D838 = 16;
        return 3221225595LL;
      }
      if ( v42 != *(v40 - 1) || v41 > *v40 )
      {
        dword_140E2D838 = 17;
        return 3221225595LL;
      }
      v40 += 10;
      --a4;
    }
    a2[15] = *(unsigned int *)(v6 + 8);
    return 0LL;
  }
  else
  {
    v11 = (unsigned int *)(a3 + 20);
    v12 = a5;
    v14 = *(_QWORD *)(v6 + 32) + (unsigned int)(*((_DWORD *)a2 + 43) << 12);
    v15 = *(_DWORD *)(a5 + 12);
    v16 = *(_DWORD *)(*(_QWORD *)(v6 + 56) + 56LL) + 1;
    v48 = v14;
    v46 = v15;
    v49 = *(_QWORD *)(v6 + 56);
    while ( a4 )
    {
      v17 = *(v11 - 3);
      if ( !v17 )
        v17 = *(v11 - 1);
      v18 = *(v11 - 1);
      if ( !v18 && *v11 )
      {
        if ( (v8 & 0x4000) != 0 && (v8 & 0x10000) == 0 )
        {
          dword_140E2D838 = 18;
          return 3221225595LL;
        }
        *v11 = 0;
      }
      if ( *v11 + v18 < *v11 )
      {
        dword_140E2D838 = 19;
        return 3221225595LL;
      }
      v7[2] = (__int64)(v7 + 7);
      v19 = (__int64)(v7 + 7);
      *(_QWORD *)v19 = a2;
      if ( v14 != *(_QWORD *)v12 + *(v11 - 2) || !v17 )
      {
        dword_140E2D838 = 20;
        return 3221225595LL;
      }
      if ( v15 + v17 - 1 <= v17 )
      {
        dword_140E2D838 = 21;
        return 3221225595LL;
      }
      v20 = ((v17 + (unsigned __int64)v15 - 1) >> 12) & (~((unsigned __int64)v15 - 1) >> 12);
      *(_DWORD *)(v19 + 44) = v20;
      if ( v20 > a6 )
      {
        dword_140E2D838 = 22;
        return 3221225595LL;
      }
      v21 = ((v17 + (unsigned __int64)v15 - 1) >> 12) & (~((unsigned __int64)v15 - 1) >> 12);
      if ( a4 == 1 && v20 != a6 )
      {
        *(_DWORD *)(v19 + 44) = a6;
        v21 = a6;
      }
      a6 -= v21;
      v22 = *v11 >> 9;
      *(_DWORD *)(v19 + 36) = v22;
      v52 = a6;
      v23 = -*(_DWORD *)(v12 + 8) & (*(_DWORD *)(v12 + 8) + *(v11 - 1) + *v11 - 1);
      if ( v23 < *v11 )
      {
        dword_140E2D838 = 23;
        return 3221225595LL;
      }
      v24 = v23;
      v25 = (v23 & 0x1FF) << 20;
      *(_DWORD *)(v19 + 40) = (v24 >> 9) - v22;
      *(_QWORD *)(v19 + 8) = v47;
      v26 = v11[4];
      v27 = ((unsigned int)v26 >> 29) & 1 | 2;
      if ( (v26 & 0x40000000) == 0 )
        v27 = (v11[4] >> 29) & 1;
      v28 = v27 | 4;
      if ( v26 >= 0 )
        v28 = v27;
      v29 = v28 | 8;
      if ( (v26 & 0x10000000) == 0 )
        v29 = v28;
      v30 = *((_BYTE *)MiImageProtectionArray + v29);
      if ( (v30 & 2) != 0 )
        *(_BYTE *)(v49 + 50) = 1;
      v31 = v25 | (2 * (v30 & 0x1Fu));
      *(_DWORD *)(v19 + 32) = v31;
      MiMakeSubsectionPte(v19, v31);
      DemandZeroPte = MiMakeDemandZeroPte(v30);
      if ( !*v11 )
        v34 = DemandZeroPte;
      v16 = *v11 + *(v11 - 1);
      v35 = 0;
      v51 = 0;
      v43 = 0;
      if ( (v30 & 4) != 0 )
      {
        if ( (v30 & 5) == 5 )
        {
          v43 = 1;
        }
        else
        {
          v35 = 1;
          v51 = 1;
          *((_DWORD *)v7 + 8) = v33 | 0x20000;
          *((_DWORD *)a2 + 14) |= 0x20000u;
        }
      }
      v36 = 0;
      v37 = 0;
      v45 = *(v11 - 1);
      v44 = 0;
      if ( *((_DWORD *)v7 + 11) )
      {
        v38 = (_QWORD *)v47;
        do
        {
          if ( v37 >= v17 )
          {
            *v38 = CLFS_LSN_NULL_EXT;
            v35 = v51;
            *((_DWORD *)v7 + 13) ^= (*((_DWORD *)v7 + 13) ^ (*((_DWORD *)v7 + 13) + 1)) & 0x3FFFFFFF;
            v36 = v44;
          }
          else
          {
            if ( v35 )
              ++*(_QWORD *)(v6 + 16);
            if ( v43 )
              ++*(_QWORD *)(v6 + 48);
            if ( v37 >= v45 )
            {
              *v38 = DemandZeroPte;
              v35 = v51;
              if ( !((unsigned __int8)v51 | (unsigned __int8)v43) )
                ++*(_QWORD *)(v6 + 16);
            }
            else
            {
              ++a2[15];
              *v38 = v34;
            }
          }
          v48 += 4096LL;
          ++v36;
          v37 += 4096;
          v44 = v36;
          ++v38;
        }
        while ( v36 < *((_DWORD *)v7 + 11) );
        v8 = a1;
        v47 = (__int64)v38;
        a6 = v52;
      }
      v14 = v48;
      v11 += 10;
      v12 = a5;
      --a4;
      v15 = v46;
    }
    if ( v16 > *(_DWORD *)(v49 + 56) )
    {
      dword_140E2D838 = 24;
    }
    else
    {
      if ( a6 < *(_DWORD *)(v12 + 12) >> 12 )
        return 0LL;
      dword_140E2D838 = 25;
    }
    return 3221225595LL;
  }
}
