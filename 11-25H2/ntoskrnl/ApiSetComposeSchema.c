/*
 * XREFs of ApiSetComposeSchema @ 0x1406540FC
 * Callers:
 *     ApiSetpLoadSchemaExtension @ 0x1407BA22C (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x1404AC7B8 (ApiSetpSearchForApiSet.c)
 *     ApiSetValidateSchemaFormat @ 0x140653D04 (ApiSetValidateSchemaFormat.c)
 *     AsiAddDataToSchema @ 0x14065482C (AsiAddDataToSchema.c)
 *     AsiPopulateHashes @ 0x1406548C4 (AsiPopulateHashes.c)
 *     AsiSortValueList @ 0x140654A10 (AsiSortValueList.c)
 *     ApiSetComposeSchema_V7 @ 0x1406555B4 (ApiSetComposeSchema_V7.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ApiSetComposeSchema(__int64 *a1, unsigned int *a2, _DWORD *a3)
{
  _DWORD *v3; // r12
  unsigned int v6; // edx
  unsigned int v7; // r13d
  __int64 v8; // rcx
  unsigned int v9; // r15d
  int v10; // ebx
  __int64 v11; // rsi
  char *v12; // rdi
  int v13; // eax
  __int64 v14; // rax
  char v15; // r13
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
  unsigned int v32; // r15d
  unsigned int i; // r11d
  char *v34; // rdx
  int v35; // eax
  int v36; // eax
  unsigned int j; // r8d
  char *v38; // r10
  int v39; // eax
  int v40; // eax
  unsigned int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // r13
  char *v44; // r8
  __int64 v45; // r11
  int v46; // eax
  char *v47; // r11
  __int64 v48; // r9
  char *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r10
  __int64 v52; // rax
  __int64 v53; // rdx
  char *v54; // r9
  __int64 v55; // rbx
  const WCHAR *v56; // rcx
  _WORD *v57; // rax
  __int64 v58; // rdi
  __int64 v59; // r9
  const WCHAR *v60; // r8
  char *v61; // rcx
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // r9
  char *v65; // rcx
  int v66; // edx
  int v67; // r10d
  _DWORD *v68; // rcx
  unsigned int v69; // eax
  void *v70; // rcx
  int v71; // [rsp+28h] [rbp-69h] BYREF
  unsigned int v72; // [rsp+2Ch] [rbp-65h]
  int v73; // [rsp+30h] [rbp-61h]
  unsigned int v74; // [rsp+34h] [rbp-5Dh]
  unsigned int k; // [rsp+38h] [rbp-59h]
  unsigned int v76; // [rsp+3Ch] [rbp-55h]
  int v77; // [rsp+40h] [rbp-51h]
  char *v78; // [rsp+48h] [rbp-49h]
  __int64 v79; // [rsp+50h] [rbp-41h]
  __int64 v80; // [rsp+58h] [rbp-39h]
  char *v81; // [rsp+60h] [rbp-31h]
  const WCHAR *v82; // [rsp+68h] [rbp-29h]
  char *v83; // [rsp+70h] [rbp-21h]
  char *v84; // [rsp+78h] [rbp-19h]
  __int64 v85; // [rsp+80h] [rbp-11h] BYREF
  int v86; // [rsp+88h] [rbp-9h]
  int v87; // [rsp+8Ch] [rbp-5h]
  unsigned int v88; // [rsp+90h] [rbp-1h]
  __int128 v89; // [rsp+98h] [rbp+7h] BYREF
  int v90; // [rsp+A8h] [rbp+17h]

  v3 = (_DWORD *)*a1;
  if ( *(_BYTE *)*a1 == 7 )
    return ApiSetComposeSchema_V7();
  if ( *v3 == 6 )
  {
    if ( v3[4] <= 8u )
      goto LABEL_6;
    if ( *((_BYTE *)v3 + 28) == 7 )
      return ApiSetComposeSchema_V7();
  }
  if ( *v3 < 5u )
    return 3221225659LL;
LABEL_6:
  if ( *a3 < 5u )
    return 3221225659LL;
  if ( (v3[2] & 1) != 0 )
    return 3221225485LL;
  if ( !a3[3] )
    return 0LL;
  v6 = v3[1];
  v7 = 0;
  v8 = *a1;
  v72 = 0;
  v9 = 0;
  v10 = ApiSetValidateSchemaFormat(v8, v6);
  if ( v10 < 0 )
    return (unsigned int)v10;
  v10 = ApiSetValidateSchemaFormat((__int64)a3, a3[1]);
  if ( v10 < 0 )
    return (unsigned int)v10;
  v11 = 0LL;
  if ( !a3[3] )
  {
LABEL_34:
    v24 = 24 * v7;
    k = v9 + v24 + v3[1] + 8 * v72;
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v26 = v3[4] + 24 * v3[3];
      v27 = v26;
      memmove(Pool2, v3, v26);
      v28 = v26 + v24;
      v29 = v3[5] - v26;
      v30 = v29 + v28;
      v73 = v29 + v28;
      v71 = v29 + v28;
      memmove((char *)Pool2 + v28, (char *)v3 + v27, v29);
      memset_0((char *)Pool2 + v30, 0, v9);
      v31 = v9 + v30;
      memmove((char *)Pool2 + v31, (char *)v3 + (unsigned int)v3[5], (unsigned int)(8 * v3[3]));
      v32 = k;
      Pool2[1] = k;
      Pool2[5] = v31;
      if ( v24 )
      {
        for ( i = 0; i < Pool2[3]; ++i )
        {
          v34 = (char *)Pool2 + (unsigned int)Pool2[4];
          v35 = *(_DWORD *)&v34[24 * i + 4];
          if ( v35 )
            *(_DWORD *)&v34[24 * i + 4] = v24 + v35;
          v36 = *(_DWORD *)&v34[24 * i + 16];
          if ( v36 )
            *(_DWORD *)&v34[24 * i + 16] = v24 + v36;
          for ( j = 0; j < *(_DWORD *)&v34[24 * i + 20]; ++j )
          {
            v38 = (char *)Pool2 + *(unsigned int *)&v34[24 * i + 16];
            v39 = *(_DWORD *)&v38[20 * j + 4];
            if ( v39 )
              *(_DWORD *)&v38[20 * j + 4] = v24 + v39;
            v40 = *(_DWORD *)&v38[20 * j + 12];
            if ( v40 )
              *(_DWORD *)&v38[20 * j + 12] = v24 + v40;
          }
        }
      }
      v10 = ApiSetValidateSchemaFormat((__int64)Pool2, v32);
      if ( v10 < 0 )
        goto LABEL_85;
      v41 = 0;
      v42 = 0LL;
      v76 = 0;
      for ( k = 0; (unsigned int)v42 < a3[3]; k = v42 )
      {
        v43 = 3 * v42;
        v44 = (char *)a3 + (unsigned int)a3[4];
        v84 = v44;
        v45 = *(unsigned int *)&v44[24 * v42 + 4];
        v46 = *(_DWORD *)&v44[24 * v42];
        v47 = (char *)a3 + v45;
        v48 = *(unsigned int *)&v44[8 * v43 + 8];
        v74 = *(_DWORD *)&v44[8 * v43 + 8];
        v83 = v47;
        if ( (v46 & 4) != 0 )
        {
          if ( v41 >= v72 )
          {
LABEL_88:
            v10 = -2147483643;
            goto LABEL_85;
          }
          v49 = (char *)Pool2 + (unsigned int)Pool2[4];
          v76 = v41 + 1;
          v50 = (unsigned int)Pool2[3];
          v51 = 3 * v50;
          Pool2[3] = v50 + 1;
          *(_OWORD *)&v49[8 * v51] = 0LL;
          *(_QWORD *)&v49[8 * v51 + 16] = 0LL;
          *(_DWORD *)&v49[8 * v51] = *(_DWORD *)&v44[8 * v43];
          *(_DWORD *)&v49[8 * v51 + 4] = v73;
          *(_DWORD *)&v49[8 * v51 + 8] = v48;
          *(_DWORD *)&v49[8 * v51 + 12] = v48;
          v10 = AsiAddDataToSchema(Pool2, &v71, v47, v48);
          if ( v10 < 0 )
            goto LABEL_85;
          v73 = v71;
LABEL_80:
          v41 = v76;
        }
        else
        {
          v52 = 0LL;
          LODWORD(v78) = 0;
          v77 = 0;
          if ( *(_DWORD *)&v44[8 * v43 + 20] )
          {
            while ( 1 )
            {
              v53 = 5 * v52;
              v54 = (char *)a3 + *(unsigned int *)&v44[8 * v43 + 16];
              v80 = 5 * v52;
              v81 = v54;
              v55 = *(unsigned int *)&v54[20 * v52 + 16];
              v56 = (const WCHAR *)((char *)a3 + *(unsigned int *)&v54[20 * v52 + 12]);
              v82 = v56;
              v57 = (_WORD *)((char *)v56 + v55);
              do
              {
                if ( (unsigned int)v55 <= 1 )
                  break;
                LODWORD(v55) = v55 - 2;
                --v57;
              }
              while ( *v57 != 45 );
              if ( !((unsigned __int16)v55 >> 1) )
                break;
              LODWORD(v79) = *(_DWORD *)&v54[4 * v53 + 4];
              v58 = ApiSetpSearchForApiSet(Pool2, v56, (unsigned __int16)v55 >> 1);
              if ( v58 )
              {
                v66 = v73;
              }
              else
              {
                if ( v76 >= v72 )
                  goto LABEL_88;
                v59 = (unsigned int)Pool2[3];
                v60 = v82;
                v61 = (char *)Pool2 + (unsigned int)Pool2[4];
                ++v76;
                v62 = 3 * v59;
                v63 = v59 + 1;
                v64 = v80;
                Pool2[3] = v63;
                v58 = (__int64)&v61[8 * v62];
                v65 = v81;
                *(_OWORD *)v58 = 0LL;
                *(_QWORD *)(v58 + 16) = 0LL;
                *(_DWORD *)(v58 + 4) = v73;
                *(_DWORD *)(v58 + 8) = *(_DWORD *)&v65[4 * v64 + 16];
                *(_DWORD *)(v58 + 12) = v55;
                v10 = AsiAddDataToSchema(Pool2, &v71, v60, *(unsigned int *)&v65[4 * v64 + 16]);
                if ( v10 < 0 )
                  goto LABEL_85;
                *(_DWORD *)(v58 + 20) = 1;
                v90 = 0;
                *(_DWORD *)(v58 + 16) = v71;
                v89 = 0LL;
                v10 = AsiAddDataToSchema(Pool2, &v71, &v89, 20LL);
                if ( v10 < 0 )
                  goto LABEL_85;
                v66 = v71;
                v73 = v71;
              }
              if ( (*(_DWORD *)v58 & 1) == 0 )
              {
                v67 = v77;
                if ( !v77 )
                {
                  v77 = v66;
                  v10 = AsiAddDataToSchema(Pool2, &v71, v83, v74);
                  if ( v10 < 0 )
                    goto LABEL_85;
                  v67 = v77;
                  v73 = v71;
                }
                if ( !*(_DWORD *)(v58 + 20) )
                {
                  v10 = -1073741811;
                  goto LABEL_85;
                }
                v68 = (_DWORD *)((char *)Pool2 + *(unsigned int *)(v58 + 16));
                if ( v68[4] && (_DWORD)v79 )
                {
                  v68[2] = v74;
                  v68[1] = v67;
                  v10 = AsiAddDataToSchema(Pool2, &v71, v68, (unsigned int)(20 * *(_DWORD *)(v58 + 20)));
                  if ( v10 < 0 )
                    goto LABEL_85;
                  v85 = 0LL;
                  v86 = 0;
                  *(_DWORD *)(v58 + 16) = v73;
                  v87 = v77;
                  v88 = v74;
                  v10 = AsiAddDataToSchema(Pool2, &v71, &v85, 20LL);
                  if ( v10 < 0 )
                    goto LABEL_85;
                  ++*(_DWORD *)(v58 + 20);
                  AsiSortValueList(Pool2, v58);
                  v73 = v71;
                }
                else
                {
                  v68[1] = 0;
                  v69 = v74;
                  v68[2] = 0;
                  v68[3] = v67;
                  v68[4] = v69;
                  *(_DWORD *)(v58 + 20) = 1;
                }
              }
              v44 = v84;
              v52 = (unsigned int)((_DWORD)v78 + 1);
              LODWORD(v78) = v52;
              if ( (unsigned int)v52 >= *(_DWORD *)&v84[8 * v43 + 20] )
                goto LABEL_80;
            }
            v10 = -1073740670;
            goto LABEL_85;
          }
        }
        v42 = k + 1;
      }
      if ( v72 && !(unsigned int)AsiPopulateHashes(Pool2) )
      {
        v10 = -1073741823;
        goto LABEL_85;
      }
      v10 = ApiSetValidateSchemaFormat((__int64)Pool2, v32);
      if ( v10 < 0 )
      {
LABEL_85:
        v70 = Pool2;
      }
      else
      {
        v70 = v3;
        *a1 = (__int64)Pool2;
        *a2 = v32;
      }
      ExFreePoolWithTag(v70, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return (unsigned int)v10;
  }
  while ( 1 )
  {
    v12 = (char *)a3 + (unsigned int)a3[4];
    if ( (*(_DWORD *)&v12[24 * v11] & 4) == 0 )
      break;
    ++v7;
    v13 = *(_DWORD *)&v12[24 * v11 + 8] + 3;
    v72 = v7;
    v9 += v13 & 0xFFFFFFFC;
LABEL_33:
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= a3[3] )
      goto LABEL_34;
  }
  v14 = 0LL;
  v15 = 0;
  v74 = 0;
  if ( !*(_DWORD *)&v12[24 * v11 + 20] )
  {
LABEL_32:
    v7 = v72;
    goto LABEL_33;
  }
  while ( 1 )
  {
    v16 = 5 * v14;
    v17 = (char *)a3 + *(unsigned int *)&v12[24 * v11 + 16];
    v79 = 5 * v14;
    v78 = v17;
    v18 = *(unsigned int *)&v17[20 * v14 + 16];
    v19 = (const WCHAR *)((char *)a3 + *(unsigned int *)&v17[20 * v14 + 12]);
    v20 = (_WORD *)((char *)v19 + v18);
    do
    {
      if ( (unsigned int)v18 <= 1 )
        break;
      LODWORD(v18) = v18 - 2;
      --v20;
    }
    while ( *v20 != 45 );
    v21 = (unsigned __int16)v18 >> 1;
    if ( !v21 )
      break;
    k = *(_DWORD *)&v17[4 * v16 + 4];
    v22 = (_DWORD *)ApiSetpSearchForApiSet(v3, v19, v21);
    if ( v22 )
    {
      if ( (*v22 & 1) == 0 )
      {
        if ( !v15 )
        {
          v15 = 1;
          v9 += (*(_DWORD *)&v12[24 * v11 + 8] + 3) & 0xFFFFFFFC;
        }
        v23 = v22[5];
        if ( !v23 )
          return (unsigned int)-1073741811;
        if ( *(_DWORD *)((char *)v3 + (unsigned int)v22[4] + 16) && k )
          v9 += 20 * v23 + 20;
      }
    }
    else
    {
      ++v72;
      v9 += ((*(_DWORD *)&v78[4 * v79 + 16] + 3) & 0xFFFFFFFC) + 20;
      if ( !v15 )
      {
        v15 = 1;
        v9 += (*(_DWORD *)&v12[24 * v11 + 8] + 3) & 0xFFFFFFFC;
      }
    }
    v14 = v74 + 1;
    v74 = v14;
    if ( (unsigned int)v14 >= *(_DWORD *)&v12[24 * v11 + 20] )
      goto LABEL_32;
  }
  return (unsigned int)-1073740670;
}
