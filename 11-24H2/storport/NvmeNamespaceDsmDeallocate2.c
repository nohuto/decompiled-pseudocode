/*
 * XREFs of NvmeNamespaceDsmDeallocate2 @ 0x1400FECF0
 * Callers:
 *     NvmeNamespaceDataSetManagementIoctl @ 0x1401A15F8 (NvmeNamespaceDataSetManagementIoctl.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeNamespaceIsDeallocateSupported @ 0x1401051A0 (NvmeNamespaceIsDeallocateSupported.c)
 *     BuildNvmeDeallocateCommand @ 0x140119254 (BuildNvmeDeallocateCommand.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceDsmDeallocate2(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v4; // r13d
  _QWORD *ExtendedCommand; // r12
  __int64 v6; // rdi
  __int64 v7; // r8
  char IsDeallocateSupported; // al
  unsigned __int64 v9; // r8
  _DWORD *v10; // r10
  unsigned int v11; // edx
  int v13; // ecx
  __int64 v14; // rax
  __int128 *v15; // r11
  unsigned int v16; // r14d
  __int64 v17; // rdi
  __int64 v18; // r8
  unsigned int v19; // r15d
  unsigned int v20; // ecx
  unsigned int v21; // esi
  _QWORD *v22; // r10
  __int64 v23; // r11
  __int64 v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int128 *v30; // rcx
  __int64 v31; // rax
  int DmaBuffer; // edi
  __int64 v33; // rcx
  unsigned __int64 v34; // r11
  unsigned int v35; // edx
  char v36; // cl
  unsigned __int16 v37; // di
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // r10
  __int64 v40; // rax
  char v41; // cl
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // r8
  __int64 v44; // rax
  _DWORD *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rax
  char v48; // al
  int v49; // r10d
  __int64 v50; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  __int64 v55; // r8
  char v56; // [rsp+30h] [rbp-49h]
  char v57; // [rsp+31h] [rbp-48h]
  int v58; // [rsp+34h] [rbp-45h]
  unsigned int v59; // [rsp+34h] [rbp-45h]
  __int64 v60; // [rsp+38h] [rbp-41h]
  unsigned __int64 v61; // [rsp+40h] [rbp-39h]
  __int128 v62; // [rsp+48h] [rbp-31h] BYREF
  int v63; // [rsp+58h] [rbp-21h]
  __int64 v64; // [rsp+60h] [rbp-19h]
  __int128 *v65; // [rsp+68h] [rbp-11h]
  void *v66; // [rsp+70h] [rbp-9h]
  __int128 v67; // [rsp+80h] [rbp+7h] BYREF

  v2 = *(unsigned int *)(a1 + 64);
  v4 = 0;
  v67 = 0LL;
  ExtendedCommand = 0LL;
  v6 = (unsigned int)(v2 - 1);
  v58 = 1;
  v7 = *(_QWORD *)(a1 + 432) * v2;
  v62 = 0LL;
  IsDeallocateSupported = NvmeNamespaceIsDeallocateSupported(a1, a2, v7);
  v11 = 0;
  if ( !IsDeallocateSupported )
    return 3221225659LL;
  v13 = v10[2];
  if ( (v13 & 0xC0000000) == 0 )
  {
    v14 = *(_QWORD *)(a1 + 176);
    if ( v14 )
    {
      if ( (*(_BYTE *)(v14 + 33) & 7) != 1 && (v13 & 0x40000000) == 0 )
        return 3221226610LL;
    }
  }
  if ( (v13 & 1) != 0 )
  {
    v15 = &v67;
    *((_QWORD *)&v67 + 1) = v9;
    v65 = &v67;
    v16 = 1;
  }
  else
  {
    v15 = (__int128 *)((char *)v10 + (unsigned int)v10[5]);
    v16 = v10[6] >> 4;
    v65 = v15;
    if ( v16 )
    {
      v30 = v15;
      do
      {
        if ( (v6 & *(_QWORD *)v30) != 0
          || (v31 = *((_QWORD *)v30 + 1), (v6 & v31) != 0)
          || !v31
          || *(_QWORD *)v30 + v31 > v9 )
        {
          DmaBuffer = -1073741811;
          goto LABEL_92;
        }
        ++v11;
        ++v30;
      }
      while ( v11 < v16 );
    }
  }
  v17 = *(_QWORD *)(a1 + 16);
  v18 = *(_QWORD *)(v17 + 600);
  if ( !v18 || (v19 = *(_DWORD *)(v18 + 4)) == 0 )
    v19 = -1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 176) + 24LL) & 0x10) != 0 )
  {
    v20 = *(_DWORD *)(a1 + 84);
    if ( v20 )
    {
      if ( v19 >= v20 )
        v19 -= v19 % v20;
    }
  }
  v21 = 0;
  if ( v16 )
  {
    v22 = (_QWORD *)v15 + 1;
    v23 = v16;
    do
    {
      v24 = *v22 >> *(_BYTE *)(a1 + 61);
      if ( v24 )
        v21 += (v24 - 1) / (unsigned __int64)v19 + 1;
      v22 += 2;
      --v23;
    }
    while ( v23 );
  }
  if ( !v18 || (v25 = *(unsigned __int8 *)(v18 + 3), !(_BYTE)v25) )
  {
    v26 = *(_DWORD *)(v17 + 620);
    v25 = 256;
    if ( v26 )
    {
      v27 = v26 >> 4;
      if ( v27 <= 0x100 )
        v25 = v27;
    }
  }
  if ( v21 >= v25 )
    v21 = v25;
  if ( v18 && (v28 = *(_QWORD *)(v18 + 8)) != 0 )
  {
    v29 = 0xFFFFFFFFLL;
    if ( v28 < 0xFFFFFFFF )
      v29 = *(_QWORD *)(v18 + 8);
    v64 = v29;
  }
  else
  {
    v64 = 0x40000000 >> *(_BYTE *)(a1 + 61) << 6;
  }
  while ( 1 )
  {
    v4 = 16 * v21;
    DmaBuffer = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 16), 16 * v21, v18, (void **)&v62, (_QWORD *)&v62 + 1, 0);
    if ( DmaBuffer >= 0 )
      break;
    if ( !v58 )
      goto LABEL_92;
    --v58;
    v21 >>= 1;
  }
  v33 = *(_QWORD *)(a1 + 16);
  v66 = (void *)v62;
  ExtendedCommand = (_QWORD *)NvmeControllerGetExtendedCommand(v33);
  if ( !ExtendedCommand )
  {
    DmaBuffer = -1073741670;
    goto LABEL_92;
  }
  v34 = v64;
  v35 = 0;
  v59 = 0;
  v36 = 1;
  v37 = 0;
  v60 = 0LL;
  v38 = 0LL;
  v61 = 0LL;
  v39 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v36 )
      {
        v40 = v35++;
        v40 *= 2LL;
        v59 = v35;
        v39 = *((_QWORD *)v65 + v40 + 1);
        v60 = *((_QWORD *)v65 + v40);
        v61 = v39;
      }
      if ( v39 )
      {
        while ( v37 < v21 )
        {
          if ( v38 >= v34 )
          {
            v35 = v59;
            goto LABEL_64;
          }
          v41 = *(_BYTE *)(a1 + 61);
          v42 = v19;
          if ( v39 >> v41 <= v19 )
            v42 = v39 >> v41;
          v43 = v34 - v38;
          if ( v42 + v38 <= v34 )
            v43 = v42;
          v44 = v60 >> v41;
          v45 = v66;
          v38 += v43;
          v46 = 2LL * v37;
          *((_QWORD *)v66 + v46 + 1) = v44;
          v45[2 * v46 + 1] = v43;
          v47 = v43 << *(_BYTE *)(a1 + 61);
          v60 += v47;
          v39 -= v47;
          v48 = 1;
          v61 = v39;
          ++v37;
          if ( !v39 )
          {
            v35 = v59;
            goto LABEL_65;
          }
        }
        v35 = v59;
      }
      else
      {
LABEL_64:
        v48 = 1;
LABEL_65:
        if ( !v39 )
        {
          v57 = 1;
          v36 = 1;
          if ( v35 == v16 )
            goto LABEL_71;
          goto LABEL_70;
        }
      }
      v36 = 0;
      v57 = 0;
LABEL_70:
      v48 = 0;
LABEL_71:
      v56 = v48;
      if ( v37 == v21 || v38 == v34 || v48 )
        break;
      v39 = v61;
    }
    if ( 16 * (unsigned int)v37 > v4 )
      break;
    BuildNvmeDeallocateCommand(*(unsigned int *)(a1 + 56), v37, *ExtendedCommand + 4096LL, (char *)&v62 + 8);
    *(_DWORD *)(*ExtendedCommand + 4256LL) &= ~1u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 2u;
    *(_QWORD *)(*ExtendedCommand + 4184LL) = 0LL;
    *(_QWORD *)(*ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*ExtendedCommand + 4200LL) = ExtendedCommand;
    *(_OWORD *)(*ExtendedCommand + 4160LL) = v62;
    *(_DWORD *)(*ExtendedCommand + 4248LL) = v49;
    v50 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1048LL);
    if ( v50 && (*(_DWORD *)(v50 + 24) & 0x10000000) != 0 )
      *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x100u;
    DmaBuffer = NvmeControllerProcessCommandSync(*(_QWORD *)(a1 + 16), ExtendedCommand, 0);
    if ( DmaBuffer < 0 )
      goto LABEL_92;
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v52 = *(_QWORD *)(a1 + 608);
    if ( v52 )
    {
      v53 = ExtendedCommand[10];
      if ( PerformanceCounter.QuadPart >= v53 )
      {
        v54 = PerformanceCounter.QuadPart - v53;
        if ( !IsQpcInUnitOf100Ns && UseQPCTime )
          v54 = (__int64)(10000000 * v54) / QpcFrequency.QuadPart;
        if ( *(_QWORD *)(v52 + 96) < v54 )
          *(_QWORD *)(v52 + 96) = v54;
      }
    }
    v63 = 0;
    memset_0(v66, 0, v4);
    v34 = v64;
    v38 = 0LL;
    v39 = v61;
    v35 = v59;
    v36 = v57;
    if ( v56 )
      goto LABEL_92;
    v37 = v63;
  }
  DmaBuffer = -1073741789;
LABEL_92:
  NvmeControllerReclaimExtendedCommand(*(_QWORD *)(a1 + 16), ExtendedCommand);
  if ( (_QWORD)v62 )
    NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), v4, v55, v62, *((__int64 *)&v62 + 1));
  return (unsigned int)DmaBuffer;
}
