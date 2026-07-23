/*
 * XREFs of IopResourceRequirementsListToReqList @ 0x140A65214
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1405A37AC (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopAllocateBootResourcesInternal @ 0x140722E38 (IopAllocateBootResourcesInternal.c)
 *     PnpRestoreResourcesInternal @ 0x1407327F0 (PnpRestoreResourcesInternal.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140978BD8 (PnpGetResourceRequirementsForAssignTable.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopFreeReqAlternative @ 0x1406F724C (IopFreeReqAlternative.c)
 *     IopFreeReqList @ 0x14071F4BC (IopFreeReqList.c)
 *     IopSetupArbiterAndTranslators @ 0x140A65728 (IopSetupArbiterAndTranslators.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopResourceRequirementsListToReqList(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // rax
  unsigned int v3; // edi
  unsigned int *v4; // r13
  int v5; // edx
  unsigned int *v6; // rbx
  unsigned int *v7; // r8
  int v8; // esi
  __int64 v9; // r12
  unsigned int v10; // edx
  _DWORD *v11; // r15
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned __int64 v20; // rsi
  unsigned int v21; // ebx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // ebp
  _QWORD *Pool2; // rax
  _QWORD *v26; // rdi
  __int64 *v27; // rbx
  int v28; // esi
  int v29; // eax
  int v30; // r14d
  int v31; // r12d
  int *v32; // rdx
  __int64 v33; // rbp
  unsigned int *v34; // rbx
  __int64 v35; // r13
  int **v36; // r8
  int v37; // ecx
  int **v38; // rax
  int v39; // edx
  int *v40; // rcx
  char v41; // al
  bool v42; // zf
  char v43; // al
  _BYTE *v44; // r8
  int v45; // eax
  __int64 v46; // r8
  int v47; // esi
  unsigned int v48; // esi
  int v49; // eax
  int *v50; // rax
  unsigned int *v51; // rcx
  unsigned int *v52; // r14
  char v53; // r11
  int v54; // ebp
  char v55; // r9
  int v56; // [rsp+20h] [rbp-98h]
  int v57; // [rsp+24h] [rbp-94h]
  int v58; // [rsp+28h] [rbp-90h]
  int v59; // [rsp+30h] [rbp-88h]
  __int64 v60; // [rsp+38h] [rbp-80h]
  __int64 *v61; // [rsp+40h] [rbp-78h]
  int *v62; // [rsp+50h] [rbp-68h]
  int **v63; // [rsp+58h] [rbp-60h]
  __int64 *v64; // [rsp+60h] [rbp-58h]
  int v67; // [rsp+D0h] [rbp+18h]
  int v68; // [rsp+D8h] [rbp+20h]

  *a2 = 0LL;
  v2 = *(unsigned int **)(a1 + 24);
  v67 = 0;
  v3 = v2[7];
  if ( !v3 )
    return 0LL;
  v4 = v2 + 8;
  v5 = 0;
  v6 = (unsigned int *)((char *)v2 + *v2);
  v7 = v2 + 8;
  v8 = 0;
  while ( (--v3 & 0x80000000) == 0 )
  {
    v51 = v7 + 2;
    v7 += 8 * v7[1] + 2;
    if ( v51 == v7 )
      return 0LL;
    if ( v51 > v7 || v51 > v6 || v7 > v6 )
      return 3221225485LL;
    if ( *((_BYTE *)v51 + 1) == 0x80 )
      v51 += 8;
    v52 = v51;
LABEL_71:
    v53 = 1;
    while ( 1 )
    {
      v54 = v5;
      if ( v51 >= v7 )
        break;
      v55 = *((_BYTE *)v51 + 1);
      if ( (unsigned __int8)v55 == 128 )
        return 3221225485LL;
      if ( *((unsigned __int8 *)v51 + 1) == 129 )
      {
        while ( v51 < v7 && *((_BYTE *)v51 + 1) == 0x81 )
        {
          if ( v51 == v52 )
            return 3221225485LL;
          ++v5;
          v51 += 8;
        }
        goto LABEL_71;
      }
      ++v5;
      if ( v55 < 0 )
      {
        if ( v55 == -16 )
          v5 = v54;
LABEL_84:
        *(_BYTE *)v51 = 1;
        v51 += 8;
        goto LABEL_71;
      }
      if ( !v55 )
        goto LABEL_84;
      if ( (*(_BYTE *)v51 & 8) != 0 )
      {
        if ( v53 )
          return 3221225485LL;
        ++v8;
      }
      else
      {
        v53 = 0;
      }
      v51 += 8;
    }
  }
  v9 = v2[7];
  v10 = v5 - v8;
  v11 = v2;
  v12 = 296LL * v10;
  v58 = -1073741823;
  if ( v12 > 0xFFFFFFFF )
    return 2147483653LL;
  if ( v10 <= 1 )
  {
    v14 = 0;
    v15 = 32;
    v16 = 32;
  }
  else
  {
    v13 = 8LL * (v10 - 1);
    if ( v13 > 0xFFFFFFFF )
      return 2147483653LL;
    v14 = 8 * (v10 - 1);
    v15 = v13 + 32;
    v16 = v14 + 32;
    if ( v14 + 32 < v14 )
      return 2147483653LL;
  }
  if ( v16 < v14 )
    return 2147483653LL;
  v20 = v9 * v15;
  if ( v20 > 0xFFFFFFFF )
    return 2147483653LL;
  if ( (unsigned int)v9 > 1 )
  {
    v17 = 8LL * (unsigned int)(v9 - 1);
    if ( v17 > 0xFFFFFFFF )
      return 2147483653LL;
    v18 = 8 * (v9 - 1);
    v21 = v17 + 48;
    v22 = v17 + 48;
    if ( v18 + 48 < v18 )
      return 2147483653LL;
  }
  else
  {
    v18 = 0;
    v21 = 48;
    v22 = 48;
  }
  if ( v22 < v18 )
    return 2147483653LL;
  v23 = v20 + v21;
  if ( (unsigned int)v20 + v21 < v21 || v23 + (unsigned int)v12 < v23 )
    return 2147483653LL;
  v24 = v23 + v12;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, v23 + (unsigned int)v12, 0x20207050u);
  v26 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset_0(Pool2, 0, v24);
  v60 = (__int64)v26 + v21;
  memset_0((void *)v60, 0, (unsigned int)v20);
  v62 = (int *)((unsigned int)v20 + v60);
  memset_0(v62, 0, (unsigned int)v12);
  v27 = v26 + 5;
  v61 = v26 + 5;
  v28 = v11[1];
  v29 = v11[2];
  if ( v28 == -1 )
    v28 = 1;
  v56 = v11[2];
  v26[2] = 0LL;
  v26[1] = a1;
  v68 = v28;
  *((_DWORD *)v26 + 8) = v9;
  *((_DWORD *)v26 + 1) = v29;
  *(_DWORD *)v26 = v28;
  memset_0(v26 + 5, 0, 8 * v9);
  v30 = 0;
  v31 = v9 - 1;
  if ( v31 < 0 )
    goto LABEL_50;
  do
  {
    v32 = (int *)v60;
    v64 = v27;
    v33 = v60;
    v34 = v4 + 2;
    v59 = v30;
    v35 = v4[1];
    v36 = (int **)(v60 + 24);
    *v61 = v60;
    *(_DWORD *)(v60 + 16) = v30;
    v4 = &v34[8 * v35];
    ++v30;
    *(_QWORD *)(v60 + 8) = v26;
    *(_DWORD *)(v60 + 20) = 0;
    v60 += 24LL;
    ++v61;
    if ( *((_BYTE *)v34 + 1) == 0x80 )
    {
      v50 = (int *)(v34 + 2);
      v34 += 8;
      v37 = *v50;
    }
    else
    {
      v37 = 12288;
    }
    *v32 = v37;
    v38 = v36;
    v39 = 0;
    while ( v34 < v4 )
    {
      if ( *((_BYTE *)v34 + 1) == 0xF0 )
      {
        v28 = v34[2];
        if ( v28 == -1 )
          v28 = 1;
        v56 = v34[3];
        v68 = v28;
LABEL_56:
        v34 += 8;
      }
      else
      {
        ++*(_DWORD *)(v33 + 20);
        v40 = v62;
        *v38 = v62;
        v63 = v38 + 1;
        v62[6] = v39;
        v62[1] = v56;
        *((_QWORD *)v62 + 2) = v33;
        *((_QWORD *)v62 + 4) = v62;
        v62[69] = 0;
        *((_QWORD *)v62 + 35) = 0LL;
        *v62 = v28;
        v41 = *((_BYTE *)v34 + 1);
        v62 += 74;
        v57 = v39 + 1;
        v42 = v41 == 0;
        if ( v41 < 0 || (v43 = 1, v42) )
          v43 = 0;
        *((_BYTE *)v40 + 8) = v43;
        *((_QWORD *)v40 + 6) = v40 + 10;
        *((_QWORD *)v40 + 5) = v40 + 10;
        v40[14] = 0;
        *((_QWORD *)v40 + 8) = v34;
        v60 = (__int64)(v36 + 1);
        *((_QWORD *)v40 + 9) = *(_QWORD *)a1;
        v44 = v40 + 34;
        v40[20] = *(_DWORD *)(a1 + 12);
        *((_QWORD *)v40 + 11) = 0LL;
        v40[24] = v28;
        v40[25] = v11[3];
        v45 = v11[2];
        v40[32] = -1;
        v40[26] = v45;
        *((_QWORD *)v40 + 14) = v40 + 34;
        v40[21] = 0;
        if ( !*((_BYTE *)v40 + 8) )
        {
          ++v39;
          *v44 = *((_BYTE *)v34 + 1);
          v36 = (int **)v60;
          *((_BYTE *)v40 + 137) = *((_BYTE *)v34 + 2);
          *((_WORD *)v40 + 69) = *((_WORD *)v34 + 2);
          v40[35] = v34[2];
          v40[36] = v34[3];
          v40[37] = v34[4];
          v49 = v67;
          if ( *((_BYTE *)v34 + 1) == 0x84 )
            v49 = 1;
          v67 = v49;
          v38 = v63;
          goto LABEL_56;
        }
        *v44 = 8;
        v46 = (unsigned int)++v40[14];
        v67 = 1;
        while ( 1 )
        {
          v34 += 8;
          if ( v34 >= v4 )
            break;
          if ( *((_BYTE *)v34 + 1) == 0x81 )
          {
            *((_QWORD *)v40 + 35) = v34;
            do
            {
              if ( *((_BYTE *)v34 + 1) != 0x81 )
                break;
              ++v40[69];
              v34 += 8;
            }
            while ( v34 < v4 );
            break;
          }
          if ( (*(_BYTE *)v34 & 8) == 0 )
            break;
          v46 = (unsigned int)(v46 + 1);
          v40[14] = v46;
        }
        v47 = IopSetupArbiterAndTranslators(v40, v40 + 10, v46);
        if ( v47 < 0 )
        {
          v27 = v64;
          --*((_DWORD *)v26 + 8);
          v30 = v59;
          v61 = v64;
          IopFreeReqAlternative(v33);
          v58 = v47;
          goto LABEL_42;
        }
        v28 = v68;
        v36 = (int **)v60;
        v38 = v63;
        v39 = v57;
      }
    }
    v27 = v61;
LABEL_42:
    --v31;
    v28 = v68;
  }
  while ( v31 >= 0 );
  if ( !v30 )
  {
LABEL_50:
    v48 = v58;
    IopFreeReqList(v26);
    return v48;
  }
  v48 = 0;
  if ( v67 )
    *a2 = v26;
  else
    IopFreeReqList(v26);
  return v48;
}
