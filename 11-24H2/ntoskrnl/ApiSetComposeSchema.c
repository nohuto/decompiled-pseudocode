/*
 * XREFs of ApiSetComposeSchema @ 0x14065EA7C
 * Callers:
 *     ApiSetpLoadSchemaExtension @ 0x1407C9EBC (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x1404A8708 (ApiSetpSearchForApiSet.c)
 *     ApiSetValidateSchemaFormat @ 0x14065E680 (ApiSetValidateSchemaFormat.c)
 *     AsiAddDataToSchema @ 0x14065F170 (AsiAddDataToSchema.c)
 *     AsiPopulateHashes @ 0x14065F208 (AsiPopulateHashes.c)
 *     AsiSortValueList @ 0x14065F350 (AsiSortValueList.c)
 *     ApiSetComposeSchema_V7 @ 0x14065FE98 (ApiSetComposeSchema_V7.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ApiSetComposeSchema(__int64 *a1, unsigned int *a2, _DWORD *a3)
{
  _BYTE *v3; // r12
  unsigned int v6; // edx
  unsigned int v7; // r13d
  __int64 v8; // rcx
  unsigned int v9; // r14d
  int v10; // ebx
  __int64 i; // rsi
  char *v12; // rdi
  int v13; // eax
  char v14; // r13
  __int64 j; // rax
  __int64 v16; // rcx
  char *v17; // rdx
  __int64 v18; // r8
  const WCHAR *v19; // r9
  _WORD *v20; // rax
  unsigned __int16 v21; // r8
  _DWORD *v22; // rax
  int v23; // edx
  int v24; // r13d
  _DWORD *Pool2; // rsi
  unsigned int v26; // ebx
  __int64 v27; // rdi
  __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  unsigned int v32; // r14d
  __int64 k; // r11
  char *v34; // rdx
  int v35; // eax
  int v36; // eax
  __int64 m; // r8
  char *v38; // r10
  int v39; // eax
  int v40; // eax
  unsigned int v41; // ecx
  __int64 n; // rdi
  __int64 v43; // r8
  char *v44; // r9
  int v45; // eax
  char *v46; // rbx
  unsigned int v47; // r11d
  char *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r10
  __int64 v51; // rax
  __int64 v52; // rcx
  char *v53; // rdx
  __int64 v54; // rbx
  const WCHAR *v55; // r13
  _WORD *v56; // rax
  __int64 v57; // rdi
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // r9
  char *v63; // rcx
  int v64; // edx
  int v65; // r13d
  _DWORD *v66; // rcx
  unsigned int v67; // eax
  void *v68; // rcx
  int v69; // [rsp+28h] [rbp-69h] BYREF
  int v70; // [rsp+2Ch] [rbp-65h]
  unsigned int v71; // [rsp+30h] [rbp-61h]
  unsigned int v72; // [rsp+34h] [rbp-5Dh]
  unsigned int v73; // [rsp+38h] [rbp-59h]
  unsigned int v74; // [rsp+3Ch] [rbp-55h]
  int v75; // [rsp+40h] [rbp-51h]
  char *v76; // [rsp+48h] [rbp-49h]
  __int64 v77; // [rsp+50h] [rbp-41h]
  __int64 v78; // [rsp+58h] [rbp-39h]
  char *v79; // [rsp+60h] [rbp-31h]
  char *v80; // [rsp+68h] [rbp-29h]
  __int64 v81; // [rsp+70h] [rbp-21h]
  char *v82; // [rsp+78h] [rbp-19h]
  __int64 v83; // [rsp+80h] [rbp-11h] BYREF
  int v84; // [rsp+88h] [rbp-9h]
  int v85; // [rsp+8Ch] [rbp-5h]
  unsigned int v86; // [rsp+90h] [rbp-1h]
  __int128 v87; // [rsp+98h] [rbp+7h] BYREF
  int v88; // [rsp+A8h] [rbp+17h]

  v3 = (_BYTE *)*a1;
  if ( *(_BYTE *)*a1 == 7 )
    return ApiSetComposeSchema_V7();
  if ( *(_DWORD *)v3 == 6 )
  {
    if ( *((_DWORD *)v3 + 4) <= 8u )
      goto LABEL_6;
    if ( v3[28] == 7 )
      return ApiSetComposeSchema_V7();
  }
  if ( *(_DWORD *)v3 < 5u )
    return 3221225659LL;
LABEL_6:
  if ( *a3 < 5u )
    return 3221225659LL;
  if ( (*((_DWORD *)v3 + 2) & 1) != 0 )
    return 3221225485LL;
  if ( !a3[3] )
    return 0LL;
  v6 = *((_DWORD *)v3 + 1);
  v7 = 0;
  v8 = *a1;
  v71 = 0;
  v9 = 0;
  v10 = ApiSetValidateSchemaFormat(v8, v6);
  if ( v10 >= 0 )
  {
    v10 = ApiSetValidateSchemaFormat((__int64)a3, a3[1]);
    if ( v10 >= 0 )
    {
      for ( i = 0LL; (unsigned int)i < a3[3]; i = (unsigned int)(i + 1) )
      {
        v12 = (char *)a3 + (unsigned int)a3[4];
        if ( (*(_DWORD *)&v12[24 * i] & 4) == 0 )
        {
          v14 = 0;
          for ( j = 0LL; ; j = v72 + 1 )
          {
            v72 = j;
            if ( (unsigned int)j >= *(_DWORD *)&v12[24 * i + 20] )
            {
              v7 = v71;
              goto LABEL_35;
            }
            v16 = 5 * j;
            v17 = (char *)a3 + *(unsigned int *)&v12[24 * i + 16];
            v77 = 5 * j;
            v76 = v17;
            v18 = *(unsigned int *)&v17[20 * j + 16];
            v19 = (const WCHAR *)((char *)a3 + *(unsigned int *)&v17[20 * j + 12]);
            v20 = (_WORD *)((char *)v19 + v18);
            do
            {
              if ( (unsigned int)v18 <= 1 )
                break;
              --v20;
              LODWORD(v18) = v18 - 2;
            }
            while ( *v20 != 45 );
            v21 = (unsigned __int16)v18 >> 1;
            if ( !v21 )
              break;
            v73 = *(_DWORD *)&v17[4 * v16 + 4];
            v22 = (_DWORD *)ApiSetpSearchForApiSet(v3, v19, v21);
            if ( v22 )
            {
              if ( (*v22 & 1) == 0 )
              {
                if ( !v14 )
                {
                  v14 = 1;
                  v9 += (*(_DWORD *)&v12[24 * i + 8] + 3) & 0xFFFFFFFC;
                }
                v23 = v22[5];
                if ( !v23 )
                  return (unsigned int)-1073741811;
                if ( *(_DWORD *)&v3[v22[4] + 16] && v73 )
                  v9 += 20 * v23 + 20;
              }
            }
            else
            {
              ++v71;
              v9 += ((*(_DWORD *)&v76[4 * v77 + 16] + 3) & 0xFFFFFFFC) + 20;
              if ( !v14 )
              {
                v14 = 1;
                v9 += (*(_DWORD *)&v12[24 * i + 8] + 3) & 0xFFFFFFFC;
              }
            }
          }
          return (unsigned int)-1073740670;
        }
        ++v7;
        v13 = *(_DWORD *)&v12[24 * i + 8] + 3;
        v71 = v7;
        v9 += v13 & 0xFFFFFFFC;
LABEL_35:
        ;
      }
      v24 = 24 * v7;
      v73 = v9 + v24 + *((_DWORD *)v3 + 1) + 8 * v71;
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, v73, 0x68635341u);
      if ( Pool2 )
      {
        v26 = *((_DWORD *)v3 + 4) + 24 * *((_DWORD *)v3 + 3);
        v27 = v26;
        memmove(Pool2, v3, v26);
        v28 = v26 + v24;
        v29 = *((_DWORD *)v3 + 5) - v26;
        v30 = v29 + v28;
        v70 = v29 + v28;
        v69 = v29 + v28;
        memmove((char *)Pool2 + v28, &v3[v27], v29);
        memset_0((char *)Pool2 + v30, 0, v9);
        v31 = v9 + v30;
        memmove((char *)Pool2 + v31, &v3[*((unsigned int *)v3 + 5)], (unsigned int)(8 * *((_DWORD *)v3 + 3)));
        v32 = v73;
        Pool2[1] = v73;
        Pool2[5] = v31;
        if ( v24 )
        {
          for ( k = 0LL; (unsigned int)k < Pool2[3]; k = (unsigned int)(k + 1) )
          {
            v34 = (char *)Pool2 + (unsigned int)Pool2[4];
            v35 = *(_DWORD *)&v34[24 * k + 4];
            if ( v35 )
              *(_DWORD *)&v34[24 * k + 4] = v24 + v35;
            v36 = *(_DWORD *)&v34[24 * k + 16];
            if ( v36 )
              *(_DWORD *)&v34[24 * k + 16] = v24 + v36;
            for ( m = 0LL; (unsigned int)m < *(_DWORD *)&v34[24 * k + 20]; m = (unsigned int)(m + 1) )
            {
              v38 = (char *)Pool2 + *(unsigned int *)&v34[24 * k + 16];
              v39 = *(_DWORD *)&v38[20 * m + 4];
              if ( v39 )
                *(_DWORD *)&v38[20 * m + 4] = v24 + v39;
              v40 = *(_DWORD *)&v38[20 * m + 12];
              if ( v40 )
                *(_DWORD *)&v38[20 * m + 12] = v24 + v40;
            }
          }
        }
        v10 = ApiSetValidateSchemaFormat((__int64)Pool2, v32);
        if ( v10 >= 0 )
        {
          v41 = 0;
          v72 = 0;
          for ( n = 0LL; ; n = (unsigned int)(n + 1) )
          {
            v73 = n;
            if ( (unsigned int)n >= a3[3] )
              break;
            v43 = 3 * n;
            v44 = (char *)a3 + (unsigned int)a3[4];
            v81 = 3 * n;
            v82 = v44;
            v45 = *(_DWORD *)&v44[24 * n];
            v46 = (char *)a3 + *(unsigned int *)&v44[24 * n + 4];
            v47 = *(_DWORD *)&v44[24 * n + 8];
            v74 = v47;
            v80 = v46;
            if ( (v45 & 4) == 0 )
            {
              v75 = 0;
              v51 = 0LL;
              while ( 1 )
              {
                LODWORD(v76) = v51;
                if ( (unsigned int)v51 >= *(_DWORD *)&v44[8 * v43 + 20] )
                {
                  LODWORD(n) = v73;
                  goto LABEL_85;
                }
                v52 = 5 * v51;
                v53 = (char *)a3 + *(unsigned int *)&v44[8 * v43 + 16];
                v78 = 5 * v51;
                v79 = v53;
                v54 = *(unsigned int *)&v53[20 * v51 + 16];
                v55 = (const WCHAR *)((char *)a3 + *(unsigned int *)&v53[20 * v51 + 12]);
                v56 = (_WORD *)((char *)v55 + v54);
                do
                {
                  if ( (unsigned int)v54 <= 1 )
                    break;
                  --v56;
                  LODWORD(v54) = v54 - 2;
                }
                while ( *v56 != 45 );
                if ( !((unsigned __int16)v54 >> 1) )
                  break;
                LODWORD(v77) = *(_DWORD *)&v53[4 * v52 + 4];
                v57 = ApiSetpSearchForApiSet(Pool2, v55, (unsigned __int16)v54 >> 1);
                if ( v57 )
                {
                  v64 = v70;
                }
                else
                {
                  if ( v72 >= v71 )
                    goto LABEL_86;
                  v58 = (unsigned int)Pool2[3];
                  v59 = (unsigned int)Pool2[4];
                  ++v72;
                  v60 = 3 * v58;
                  v61 = v58 + 1;
                  v62 = v78;
                  Pool2[3] = v61;
                  v57 = (__int64)&Pool2[2 * v60] + v59;
                  v63 = v79;
                  *(_OWORD *)v57 = 0LL;
                  *(_QWORD *)(v57 + 16) = 0LL;
                  *(_DWORD *)(v57 + 4) = v70;
                  *(_DWORD *)(v57 + 8) = *(_DWORD *)&v63[4 * v62 + 16];
                  *(_DWORD *)(v57 + 12) = v54;
                  v10 = AsiAddDataToSchema(Pool2, &v69, v55, *(unsigned int *)&v63[4 * v62 + 16]);
                  if ( v10 < 0 )
                    goto LABEL_87;
                  *(_DWORD *)(v57 + 20) = 1;
                  v88 = 0;
                  *(_DWORD *)(v57 + 16) = v69;
                  v87 = 0LL;
                  v10 = AsiAddDataToSchema(Pool2, &v69, &v87, 20LL);
                  if ( v10 < 0 )
                    goto LABEL_87;
                  v64 = v69;
                  v70 = v69;
                }
                if ( (*(_DWORD *)v57 & 1) == 0 )
                {
                  v65 = v75;
                  if ( !v75 )
                  {
                    v65 = v64;
                    v75 = v64;
                    v10 = AsiAddDataToSchema(Pool2, &v69, v80, v74);
                    if ( v10 < 0 )
                      goto LABEL_87;
                    v70 = v69;
                  }
                  if ( !*(_DWORD *)(v57 + 20) )
                  {
                    v10 = -1073741811;
                    goto LABEL_87;
                  }
                  v66 = (_DWORD *)((char *)Pool2 + *(unsigned int *)(v57 + 16));
                  if ( v66[4] && (_DWORD)v77 )
                  {
                    v66[2] = v74;
                    v66[1] = v65;
                    v10 = AsiAddDataToSchema(Pool2, &v69, v66, (unsigned int)(20 * *(_DWORD *)(v57 + 20)));
                    if ( v10 < 0 )
                      goto LABEL_87;
                    v83 = 0LL;
                    v84 = 0;
                    *(_DWORD *)(v57 + 16) = v70;
                    v86 = v74;
                    v85 = v65;
                    v10 = AsiAddDataToSchema(Pool2, &v69, &v83, 20LL);
                    if ( v10 < 0 )
                      goto LABEL_87;
                    ++*(_DWORD *)(v57 + 20);
                    AsiSortValueList(Pool2, v57);
                    v70 = v69;
                  }
                  else
                  {
                    v66[1] = 0;
                    v67 = v74;
                    v66[2] = 0;
                    v66[3] = v65;
                    v66[4] = v67;
                    *(_DWORD *)(v57 + 20) = 1;
                  }
                }
                v43 = v81;
                v51 = (unsigned int)((_DWORD)v76 + 1);
                v44 = v82;
              }
              v10 = -1073740670;
              goto LABEL_87;
            }
            if ( v41 >= v71 )
            {
LABEL_86:
              v10 = -2147483643;
              goto LABEL_87;
            }
            v48 = (char *)Pool2 + (unsigned int)Pool2[4];
            v72 = v41 + 1;
            v49 = (unsigned int)Pool2[3];
            v50 = 3 * v49;
            Pool2[3] = v49 + 1;
            *(_OWORD *)&v48[8 * v50] = 0LL;
            *(_QWORD *)&v48[8 * v50 + 16] = 0LL;
            *(_DWORD *)&v48[8 * v50] = *(_DWORD *)&v44[24 * n];
            *(_DWORD *)&v48[8 * v50 + 4] = v70;
            *(_DWORD *)&v48[8 * v50 + 8] = v47;
            *(_DWORD *)&v48[8 * v50 + 12] = v47;
            v10 = AsiAddDataToSchema(Pool2, &v69, v46, v47);
            if ( v10 < 0 )
              goto LABEL_87;
            v70 = v69;
LABEL_85:
            v41 = v72;
          }
          if ( v71 && !(unsigned int)AsiPopulateHashes(Pool2) )
          {
            v10 = -1073741823;
            goto LABEL_87;
          }
          v10 = ApiSetValidateSchemaFormat((__int64)Pool2, v32);
          if ( v10 >= 0 )
          {
            v68 = v3;
            *a1 = (__int64)Pool2;
            *a2 = v32;
            goto LABEL_88;
          }
        }
LABEL_87:
        v68 = Pool2;
LABEL_88:
        ExFreePoolWithTag(v68, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v10;
}
