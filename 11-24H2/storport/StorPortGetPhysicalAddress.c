/*
 * XREFs of StorPortGetPhysicalAddress @ 0x140011890
 * Callers:
 *     StorPortGetPhysicalAddressVrfy @ 0x1401C12B0 (StorPortGetPhysicalAddressVrfy.c)
 * Callees:
 *     IsDmarEnabled @ 0x140011E00 (IsDmarEnabled.c)
 */

PHYSICAL_ADDRESS __fastcall StorPortGetPhysicalAddress(__int64 a1, __int64 a2, void *a3, unsigned int *a4)
{
  PHYSICAL_ADDRESS PhysicalAddress; // r10
  unsigned int v6; // esi
  int **v7; // rax
  unsigned int v8; // r14d
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r12
  int *v13; // rbx
  int v14; // ecx
  __int64 *v15; // r9
  char v16; // r14
  int v17; // edi
  unsigned int v18; // ebp
  unsigned int *v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  int v22; // ecx
  unsigned __int64 v23; // rcx
  unsigned __int8 v24; // di
  unsigned int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // r8d
  unsigned int v28; // eax
  unsigned __int64 v30; // rcx
  unsigned int v31; // r12d
  unsigned int *v32; // rax
  int v33; // ecx
  unsigned int v34; // ecx
  int v35; // edx
  __int64 v36; // rdi
  __int64 v37; // rax
  unsigned int v38; // esi
  __int64 v39; // rdi
  unsigned int v40; // edi
  void *v41; // r8
  __int64 v42; // r11
  __int64 v43; // rdx
  unsigned int *v44; // rdx
  unsigned int v45; // edi
  unsigned int v46; // r8d
  __int64 v47; // rax
  unsigned int *v48; // rcx
  __int64 v49; // rax
  void *v50; // r8
  __int64 v51; // rax
  __int64 v52; // rsi
  unsigned int v53; // [rsp+20h] [rbp-78h]
  unsigned int v54; // [rsp+28h] [rbp-70h]
  __int64 v55; // [rsp+30h] [rbp-68h]
  unsigned __int64 v56; // [rsp+38h] [rbp-60h]
  int *v57; // [rsp+40h] [rbp-58h]
  int *v58; // [rsp+48h] [rbp-50h]
  unsigned __int8 v59; // [rsp+A0h] [rbp+8h]
  unsigned int v60; // [rsp+B8h] [rbp+20h]

  PhysicalAddress.QuadPart = 0LL;
  *a4 = 0;
  v6 = 0;
  v7 = *(int ***)(a1 - 16);
  v8 = 0;
  v53 = 0;
  v9 = 0LL;
  v59 = 0;
  v10 = 0LL;
  v56 = 0LL;
  v11 = 0LL;
  v57 = 0LL;
  v12 = 0LL;
  v58 = 0LL;
  if ( !v7 )
    return PhysicalAddress;
  v13 = *v7;
  if ( !*v7 )
    return PhysicalAddress;
  v14 = *v13;
  if ( ((_BYTE)v7[31] & 1) != 0 )
  {
    if ( v14 != 1314275652 )
      return PhysicalAddress;
    v58 = *v7;
    v15 = (__int64 *)(v13 + 330);
  }
  else
  {
    if ( v14 != 1094997074 )
      return PhysicalAddress;
    v57 = *v7;
    v15 = (__int64 *)(v13 + 228);
  }
  if ( !a2 )
  {
    v24 = 0;
    goto LABEL_24;
  }
  v16 = *(_BYTE *)(a2 + 2);
  if ( v16 == 40 )
  {
    v17 = *(_DWORD *)(a2 + 20);
    v9 = *(_QWORD *)(a2 + 64);
    v11 = *(_QWORD *)(a2 + 104);
    v60 = *(_DWORD *)(a2 + 60);
    if ( v17 )
      goto LABEL_33;
    v18 = *(_DWORD *)(a2 + 56);
    if ( !v18 )
      goto LABEL_32;
    v19 = (unsigned int *)(a2 + 120);
    while ( 1 )
    {
      v20 = *v19;
      if ( (unsigned int)v20 < 0x80 )
        goto LABEL_16;
      v21 = *(unsigned int *)(a2 + 16);
      if ( (unsigned int)v20 >= (unsigned int)v21 )
        goto LABEL_16;
      v22 = *(_DWORD *)(v20 + a2);
      if ( v22 == 64 )
        break;
      v33 = v22 - 65;
      if ( !v33 )
      {
        v23 = v20 + 56;
LABEL_15:
        if ( v23 <= v21 )
        {
          v30 = *(_QWORD *)(v20 + a2 + 16);
          goto LABEL_30;
        }
        goto LABEL_16;
      }
      if ( v33 == 1 && v20 + 40 <= v21 )
      {
        v30 = *(_QWORD *)(v20 + a2 + 24);
LABEL_30:
        v59 = *(_BYTE *)(v20 + a2 + 9);
        v56 = v30;
LABEL_31:
        v10 = 0LL;
LABEL_32:
        v9 = *(_QWORD *)(a2 + 64);
LABEL_33:
        if ( (*(_BYTE *)(a2 + 24) & 0xC0) == 0xC0 )
        {
          v31 = *(_DWORD *)(a2 + 56);
          v10 = 0LL;
          if ( v31 )
          {
            v32 = (unsigned int *)(a2 + 120);
            v55 = a2 + 120;
            while ( 1 )
            {
              v51 = *v32;
              if ( (unsigned int)v51 >= 0x80 )
              {
                v54 = *(_DWORD *)(a2 + 16);
                if ( (unsigned int)v51 <= v54 )
                {
                  v52 = v51 + a2;
                  if ( *(_DWORD *)(v51 + a2) == 1 && v51 + 24 <= (unsigned __int64)v54 )
                    break;
                }
              }
              LODWORD(v10) = v10 + 1;
              v32 = (unsigned int *)(v55 + 4);
              v55 += 4LL;
              if ( (unsigned int)v10 >= v31 )
                goto LABEL_20;
            }
            if ( !v52 )
            {
LABEL_20:
              v10 = 0LL;
              goto LABEL_21;
            }
            v10 = *(_QWORD *)(v52 + 16);
            v53 = *(_DWORD *)(v52 + 8);
          }
        }
LABEL_21:
        v25 = *(_DWORD *)(a2 + 60);
LABEL_22:
        v6 = v25;
        if ( v17 == 23 )
        {
          if ( v16 == 40 )
            v49 = *(_QWORD *)(a2 + 96);
          else
            v49 = *(_QWORD *)(a2 + 48);
          v8 = v60;
          v12 = v56;
          v24 = v59;
          if ( *(_DWORD *)(*(_QWORD *)(v49 + 104) + 40LL) > v60 )
            v6 = *(_DWORD *)(*(_QWORD *)(v49 + 104) + 40LL);
        }
        else
        {
          v12 = v56;
          v8 = v60;
          v24 = v59;
        }
        goto LABEL_24;
      }
LABEL_16:
      LODWORD(v10) = v10 + 1;
      ++v19;
      if ( (unsigned int)v10 >= v18 )
        goto LABEL_31;
    }
    v23 = v20 + 40;
    goto LABEL_15;
  }
  v25 = *(_DWORD *)(a2 + 16);
  v6 = v25;
  v9 = *(_QWORD *)(a2 + 24);
  v17 = *(unsigned __int8 *)(a2 + 2);
  v11 = *(_QWORD *)(a2 + 56);
  v60 = v25;
  if ( v16 )
    goto LABEL_22;
  v24 = *(_BYTE *)(a2 + 11);
  v8 = *(_DWORD *)(a2 + 16);
  v12 = *(_QWORD *)(a2 + 32);
  v59 = v24;
LABEL_24:
  v26 = *v15;
  if ( *v15 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v26 + (unsigned __int64)*((unsigned int *)v15 + 4) )
  {
    v27 = (_DWORD)a3 - v26;
    PhysicalAddress.QuadPart = v15[1] + v27;
    v28 = *((_DWORD *)v15 + 4) - v27;
LABEL_27:
    *a4 = v28;
    return PhysicalAddress;
  }
  if ( !a2 )
  {
    if ( *v13 == 1094997074 )
    {
      if ( *((_BYTE *)v13 + 888) && v13[227] == 3 )
        return PhysicalAddress;
    }
    else if ( *v13 == 1314275652 && *((_BYTE *)v13 + 1152) && v13[293] == 3 )
    {
      return PhysicalAddress;
    }
    v39 = 79LL;
    PhysicalAddress = MmGetPhysicalAddress(a3);
    if ( *v13 != 1314275652 )
      v39 = 131LL;
    v28 = (v13[v39] + 7) & 0xFFFFFFF8;
    goto LABEL_27;
  }
  if ( v9 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v9 + v6 )
  {
    v34 = v53;
LABEL_73:
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v43 = *(_QWORD *)(a2 + 96);
    else
      v43 = *(_QWORD *)(a2 + 48);
    if ( v9 > (unsigned __int64)a3 || (unsigned __int64)a3 >= v9 + v6 )
    {
      v44 = *(unsigned int **)(v43 + 152);
      v45 = (_DWORD)a3 - v10;
      v8 = v34;
    }
    else
    {
      v44 = *(unsigned int **)(v43 + 112);
      v45 = (_DWORD)a3 - v9;
    }
    if ( v44 )
    {
      v46 = *v44;
      v47 = 0LL;
      if ( *v44 )
      {
        v48 = v44 + 6;
        do
        {
          if ( v45 < *v48 )
            break;
          v45 -= *v48;
          v47 = (unsigned int)(v47 + 1);
          v48 += 6;
        }
        while ( (unsigned int)v47 < v46 );
      }
      if ( (unsigned int)v47 < v46 )
      {
        *a4 = v44[6 * v47 + 6] - v45;
        return (PHYSICAL_ADDRESS)(*(_QWORD *)&v44[6 * v47 + 4] + v45);
      }
    }
    else if ( (v57 && (*((_BYTE *)v57 + 4371) & 4) != 0 || v58) && !(unsigned __int8)IsDmarEnabled(v13) )
    {
      PhysicalAddress = MmGetPhysicalAddress(v50);
      *a4 = v8 - v45;
    }
    return PhysicalAddress;
  }
  if ( v10 <= (unsigned __int64)a3 )
  {
    v34 = v53;
    if ( (unsigned __int64)a3 < v53 + v10 )
      goto LABEL_73;
  }
  if ( v12 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v12 + v24 )
  {
    v40 = (_DWORD)a3 - v12;
    if ( (unsigned __int8)IsDmarEnabled(v13) )
      PhysicalAddress.QuadPart = *(_QWORD *)(v42 - 1160) + v40 + 928LL;
    else
      PhysicalAddress = MmGetPhysicalAddress(v41);
    v28 = v59 - v40;
    goto LABEL_27;
  }
  if ( v11 <= (unsigned __int64)a3 )
  {
    v35 = *v13;
    v36 = 79LL;
    v37 = 79LL;
    if ( *v13 != 1314275652 )
      v37 = 131LL;
    if ( (unsigned __int64)a3 < v11 + ((v13[v37] + 7) & 0xFFFFFFF8) )
    {
      v38 = (_DWORD)a3 - v11;
      if ( v35 == 1094997074 )
      {
        if ( *((_BYTE *)v13 + 888) && v13[227] == 3 )
        {
LABEL_66:
          PhysicalAddress.QuadPart = *(_QWORD *)(v11 - 1160) + v38 + 1184LL;
          goto LABEL_57;
        }
      }
      else if ( v35 == 1314275652 && *((_BYTE *)v13 + 1152) && v13[293] == 3 )
      {
        goto LABEL_66;
      }
      PhysicalAddress = MmGetPhysicalAddress(a3);
LABEL_57:
      if ( *v13 != 1314275652 )
        v36 = 131LL;
      v28 = ((v13[v36] + 7) & 0xFFFFFFF8) - v38;
      goto LABEL_27;
    }
  }
  return PhysicalAddress;
}
