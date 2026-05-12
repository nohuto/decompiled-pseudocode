/*
 * XREFs of NvmeControllerFilterResourceRequirements @ 0x1400ED610
 * Callers:
 *     NvmeAdapterFilterResourceRequirementsIrp @ 0x140196B4C (NvmeAdapterFilterResourceRequirementsIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     IsPci3MsiInterrupt @ 0x1400DD66C (IsPci3MsiInterrupt.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeControllerFilterResourceRequirements(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r15d
  __int64 v3; // r11
  unsigned __int16 *v4; // rsi
  __int64 v6; // r9
  unsigned int v7; // ebp
  __int16 v8; // di
  unsigned int v9; // r13d
  void *v10; // r12
  char v11; // r14
  _BYTE *v12; // rdx
  _BYTE *v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // ecx
  unsigned int i; // edx
  int v17; // edx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // r10
  unsigned int v21; // r11d
  __int64 v22; // rax
  __int16 v23; // cx
  __int64 v24; // r8
  unsigned int v25; // r11d
  int v26; // edx
  __int64 v27; // r8
  char v28; // r9
  __int64 v29; // r10
  __int64 v30; // r8
  unsigned int v31; // r8d
  unsigned int v32; // edx
  int v33; // edx
  _OWORD *v34; // rcx
  unsigned int v35; // r9d
  unsigned int v36; // r10d
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 Pool; // rax
  unsigned int v40; // r15d
  unsigned int v41; // edi
  unsigned int v42; // r8d
  __int64 v43; // rcx
  __int64 v44; // rdx
  unsigned int v45; // r9d
  int v46; // r14d
  __int64 v47; // rbp
  __int64 v48; // r12
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v50; // r13
  unsigned int v51; // r12d
  int v52; // ebp
  unsigned int v53; // r12d
  __int64 v54; // r15
  __int64 v55; // r13
  ULONG v56; // eax
  __int64 v57; // r14
  unsigned int v58; // ebp
  unsigned int v59; // r15d
  __int64 v60; // r14
  unsigned int v61; // r11d
  ULONG v62; // eax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // rax
  unsigned int v66; // ecx
  unsigned int j; // edx
  __int64 v68; // r8
  __int64 v69; // rax
  unsigned int v70; // eax
  unsigned int v72; // [rsp+20h] [rbp-58h]
  unsigned int v73; // [rsp+24h] [rbp-54h]
  int v74; // [rsp+24h] [rbp-54h]
  unsigned int v75; // [rsp+28h] [rbp-50h]
  _BYTE *v76; // [rsp+38h] [rbp-40h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp+10h] BYREF
  int v78; // [rsp+90h] [rbp+18h]
  unsigned int v79; // [rsp+98h] [rbp+20h]

  v2 = a2[9];
  LODWORD(v3) = 0;
  v4 = (unsigned __int16 *)g_CpuInfo;
  v73 = 0;
  v6 = a1;
  v75 = 0;
  v7 = 0;
  v78 = v2;
  v8 = 4;
  v9 = 0;
  v10 = 0LL;
  v11 = 1;
  if ( v2 )
  {
    v12 = (char *)a2 + 41;
    do
    {
      if ( IsPci3MsiInterrupt((__int64)(v12 - 1)) )
      {
        ++v7;
      }
      else if ( *v13 == 1 && (v13[3] & 1) != 0 )
      {
        ++v9;
      }
      v12 = v13 + 32;
    }
    while ( v14 != 1 );
    v75 = v9;
  }
  v15 = *((_DWORD *)v4 + 3);
  if ( v7 <= v15 + 1 )
  {
    if ( g_HeterogenousCPU == (_BYTE)v3 )
      goto LABEL_111;
    if ( v7 <= 1 )
      goto LABEL_111;
    if ( v7 >= v15 )
      goto LABEL_111;
    v38 = *((unsigned int *)v4 + 3);
    ProcNumber = (struct _PROCESSOR_NUMBER)v3;
    v72 = v3;
    v79 = v3;
    Pool = RaidAllocatePool(64LL, v38, 1380147538LL, v6);
    LODWORD(v3) = 0;
    v76 = (_BYTE *)Pool;
    v10 = (void *)Pool;
    if ( !Pool )
      goto LABEL_111;
    v40 = *((_DWORD *)v4 + 11);
    if ( v40 >= v7 )
      v40 = v7 >> 1;
    v41 = 0;
    if ( v7 > 2 )
    {
      v42 = a2[9];
      do
      {
        if ( v41 >= v42 )
          goto LABEL_57;
        v43 = (__int64)&a2[8 * v41++ + 10];
      }
      while ( !IsPci3MsiInterrupt(v43) );
      *(unsigned int *)((char *)a2 + v44 + 48) = v45;
      *(_WORD *)((char *)a2 + v44 + 44) |= 4u;
      *(unsigned int *)((char *)a2 + v44 + 52) = v45;
      *(unsigned int *)((char *)a2 + v44 + 56) = v3;
      *(unsigned int *)((char *)a2 + v44 + 60) = 3;
      *(_QWORD *)((char *)a2 + v44 + 64) = v3;
    }
LABEL_57:
    v46 = v3;
    v47 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 8LL);
    while ( v41 < a2[9] && v40 )
    {
      if ( IsPci3MsiInterrupt((__int64)&a2[8 * v41 + 10]) )
      {
        do
        {
          if ( !v47 )
            goto LABEL_68;
          while ( 1 )
          {
            v48 = 1LL << v46;
            if ( ((1LL << v46) & v47) != 0 )
              break;
            ++v46;
          }
          ProcNumber.Group = v73;
          ProcNumber.Number = v46;
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          LODWORD(v3) = 0;
          if ( ProcessorIndexFromNumber == -1 )
            goto LABEL_109;
          v47 &= ~(1LL << v46++);
        }
        while ( *(_BYTE *)(*((_QWORD *)v4 + 4) + 56LL * ProcessorIndexFromNumber + 4) );
        ++v72;
        v50 = 8LL * v41;
        LOWORD(a2[v50 + 11]) |= 4u;
        a2[v50 + 12] = -2;
        a2[v50 + 13] = -2;
        HIWORD(a2[v50 + 14]) = v73;
        LOWORD(a2[v50 + 14]) = 4;
        a2[v50 + 15] = 3;
        *(_QWORD *)&a2[v50 + 16] = v48;
        v76[ProcessorIndexFromNumber] = 1;
        v47 &= ~*(_QWORD *)(*((_QWORD *)v4 + 4) + 56LL * ProcessorIndexFromNumber + 24);
        if ( --v40 )
        {
          if ( !v47 )
          {
LABEL_68:
            v51 = v73;
            if ( v73 >= (unsigned int)*v4 - 1 )
              goto LABEL_109;
            v46 = v3;
            ++v73;
            v47 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL * (v51 + 1) + 8);
          }
        }
      }
      ++v41;
    }
    v52 = v3;
    v74 = 1;
    v53 = v3;
    v54 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 8LL);
    while ( 1 )
    {
      if ( v41 >= a2[9] )
        goto LABEL_86;
      if ( !IsPci3MsiInterrupt((__int64)&a2[8 * v41 + 10]) )
        goto LABEL_85;
      while ( 1 )
      {
        if ( !v54 )
          goto LABEL_82;
        while ( 1 )
        {
          v55 = 1LL << v52;
          if ( ((1LL << v52) & v54) != 0 )
            break;
          ++v52;
        }
        ProcNumber.Group = v53;
        ProcNumber.Number = v52;
        v56 = KeGetProcessorIndexFromNumber(&ProcNumber);
        if ( v56 == -1 )
        {
LABEL_108:
          LODWORD(v3) = 0;
          goto LABEL_109;
        }
        v54 &= ~(1LL << v52++);
        if ( *(_BYTE *)(*((_QWORD *)v4 + 4) + 56LL * v56 + 4) == 1 )
          break;
        LODWORD(v3) = 0;
      }
      ++v79;
      v57 = 8LL * v41;
      LOWORD(a2[v57 + 11]) |= 4u;
      a2[v57 + 12] = -2;
      a2[v57 + 13] = -2;
      LOWORD(a2[v57 + 14]) = 4;
      HIWORD(a2[v57 + 14]) = v53;
      a2[v57 + 15] = 3;
      *(_QWORD *)&a2[v57 + 16] = v55;
      v76[v56] = 1;
      v54 &= ~*(_QWORD *)(56LL * v56 + *((_QWORD *)v4 + 4) + 24);
      if ( !v54 )
        break;
      LODWORD(v3) = 0;
LABEL_85:
      ++v41;
    }
    LODWORD(v3) = 0;
LABEL_82:
    if ( v53 < (unsigned int)*v4 - 1 )
    {
      ++v53;
      v52 = v3;
      v54 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL * v53 + 8);
      goto LABEL_85;
    }
LABEL_86:
    v58 = v3;
    v59 = v3;
    v60 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 8LL);
    if ( v41 < a2[9] )
    {
      while ( 2 )
      {
        if ( IsPci3MsiInterrupt((__int64)&a2[8 * v41 + 10]) )
        {
          while ( 1 )
          {
            if ( !v60 )
              goto LABEL_99;
            while ( ((1LL << v58) & v60) == 0 )
              ++v58;
            ProcNumber.Group = v59;
            ProcNumber.Number = v58;
            v62 = KeGetProcessorIndexFromNumber(&ProcNumber);
            if ( v62 == -1 )
              goto LABEL_108;
            v61 = 0;
            v63 = v62;
            v64 = 56LL * v62;
            v60 &= ~(1LL << v58);
            if ( *(unsigned __int8 *)(*((_QWORD *)v4 + 4) + v64 + 4) == v74 && !v76[v62] )
              break;
            ++v58;
          }
          v65 = 8LL * v41;
          LOWORD(a2[v65 + 11]) |= 4u;
          a2[v65 + 12] = -2;
          a2[v65 + 13] = -2;
          LOWORD(a2[v65 + 14]) = 4;
          HIWORD(a2[v65 + 14]) = v59;
          a2[v65 + 15] = 3;
          *(_QWORD *)&a2[v65 + 16] = 1LL << v58;
          v76[v63] = 1;
          if ( v74 == 1 )
            ++v79;
          else
            ++v72;
          ++v58;
          v60 &= ~*(_QWORD *)(*((_QWORD *)v4 + 4) + v64 + 24);
          if ( !v60 )
          {
LABEL_99:
            if ( v59 < (unsigned int)*v4 - 1 )
            {
              v60 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL * ++v59 + 8);
              goto LABEL_106;
            }
            if ( v41 < a2[9] - 1 )
            {
              if ( v79 >= *((_DWORD *)v4 + 14) )
              {
                if ( v72 >= *((_DWORD *)v4 + 13) )
                  goto LABEL_108;
                v74 = v61;
              }
              v59 = v61;
              v60 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 8LL);
LABEL_106:
              v58 = v61;
            }
          }
        }
        if ( ++v41 >= a2[9] )
          goto LABEL_108;
        continue;
      }
    }
LABEL_109:
    v10 = v76;
    goto LABEL_110;
  }
  v78 = v15 - v7 + v2 + 1;
  for ( i = 0; i < a2[9]; i = v17 + 1 )
  {
    if ( !IsPci3MsiInterrupt((__int64)&a2[8 * i + 10]) )
      continue;
    if ( v19 )
    {
      while ( ((1LL << v20) & v19) == 0 )
        ++v20;
    }
    if ( g_HeterogenousCPU )
    {
      if ( !v11 )
      {
        v8 = 4;
LABEL_26:
        v22 = 1LL << v20;
        v23 = v21;
        goto LABEL_21;
      }
      v8 = 0;
      v11 = 0;
    }
    else if ( v8 == 4 )
    {
      goto LABEL_26;
    }
    v22 = 0LL;
    v23 = 0;
LABEL_21:
    v24 = 8 * v18;
    LOWORD(a2[v24 + 11]) |= 4u;
    *(_QWORD *)&a2[v24 + 16] = v22;
    a2[v24 + 12] = -2;
    a2[v24 + 13] = -2;
    LOWORD(a2[v24 + 14]) = v8;
    HIWORD(a2[v24 + 14]) = v23;
    a2[v24 + 15] = 3;
    if ( (v19 & ~(1LL << v20)) == 0 && v21 >= (unsigned int)*v4 - 1 )
    {
      i = v17 + 1;
      break;
    }
  }
  v25 = a2[9];
  while ( 1 )
  {
    if ( i >= v25 )
    {
      LODWORD(v3) = 0;
      goto LABEL_37;
    }
    if ( IsPci3MsiInterrupt((__int64)&a2[8 * i + 10]) )
      break;
    i = v26 + 1;
  }
  LODWORD(v3) = 0;
  if ( v29 )
  {
    while ( ((1LL << v28) & v29) == 0 )
      ++v28;
  }
  v30 = 8 * v27;
  LOWORD(a2[v30 + 11]) |= 4u;
  i = v26 + 1;
  a2[v30 + 12] = -2;
  a2[v30 + 13] = -2;
  a2[v30 + 14] = 4;
  a2[v30 + 15] = 3;
  *(_QWORD *)&a2[v30 + 16] = 1LL << v28;
LABEL_37:
  v31 = a2[9];
  while ( i < v31 )
  {
    if ( IsPci3MsiInterrupt((__int64)&a2[8 * i + 10]) )
    {
      do
      {
        if ( !IsPci3MsiInterrupt((__int64)&a2[8 * v32 + 10]) && v33 != v35 )
        {
          v37 = 8LL * v35;
          *(_OWORD *)&a2[v37 + 10] = *v34;
          *(_OWORD *)&a2[v37 + 14] = v34[1];
          v36 = a2[9];
        }
        v32 = v33 + 1;
      }
      while ( v32 < v36 );
      break;
    }
    i = v32 + 1;
  }
  v10 = 0LL;
LABEL_110:
  v2 = v78;
LABEL_111:
  if ( v75 > (unsigned int)v3 )
  {
    v66 = v3;
    for ( j = v3; j < a2[9]; ++j )
    {
      v68 = 8LL * j;
      if ( BYTE1(a2[v68 + 10]) != 1 || (a2[v68 + 11] & 1) == 0 )
      {
        if ( j != v66 )
        {
          v69 = 8LL * v66;
          *(_OWORD *)&a2[v69 + 10] = *(_OWORD *)&a2[v68 + 10];
          *(_OWORD *)&a2[v69 + 14] = *(_OWORD *)&a2[v68 + 14];
        }
        ++v66;
      }
    }
    v2 += v66 - j;
  }
  memmove(&a2[8 * v2 + 10], &a2[8 * a2[9] + 10], *a2 - (32 * a2[9] + 40));
  v70 = a2[9];
  if ( v70 > v2 )
    memset_0((char *)a2 + *a2 - 32LL * (v70 - v2), 0, 32LL * (v70 - v2));
  a2[9] = v2;
  if ( v10 )
    ExFreePoolWithTag(v10, 0x52436152u);
  return 0LL;
}
