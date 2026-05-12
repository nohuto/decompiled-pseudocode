/*
 * XREFs of NvmeNamespaceDsmDeallocate @ 0x1400FE7D0
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

__int64 __fastcall NvmeNamespaceDsmDeallocate(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // r13d
  __int64 v5; // rcx
  __int128 *v7; // r15
  unsigned int v8; // r14d
  __int64 v9; // r11
  __int64 v10; // r8
  unsigned int v11; // r12d
  unsigned int v12; // ecx
  unsigned int v13; // esi
  unsigned __int64 v14; // rdi
  _QWORD *v15; // r9
  __int64 v16; // r10
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // r8d
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r9
  int DmaBuffer; // edi
  __int64 v26; // rcx
  __int64 ExtendedCommand; // rax
  char v28; // r9
  _QWORD *v29; // rdi
  unsigned __int64 v30; // r10
  int v31; // ecx
  unsigned __int64 v32; // rdx
  char v33; // al
  unsigned int v34; // r8d
  unsigned __int64 v35; // r11
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r8
  __int64 v39; // rcx
  _DWORD *v40; // rdx
  unsigned __int64 v41; // rax
  int v42; // r11d
  __int64 v43; // rax
  __int64 v44; // r8
  char v45; // [rsp+30h] [rbp-49h]
  char v46; // [rsp+31h] [rbp-48h]
  int v47; // [rsp+34h] [rbp-45h]
  unsigned int v48; // [rsp+34h] [rbp-45h]
  int v49; // [rsp+38h] [rbp-41h]
  unsigned __int64 v50; // [rsp+40h] [rbp-39h]
  unsigned __int64 v51; // [rsp+48h] [rbp-31h]
  __int64 v52; // [rsp+50h] [rbp-29h]
  __int128 v53; // [rsp+58h] [rbp-21h] BYREF
  __int64 v54; // [rsp+68h] [rbp-11h]
  _QWORD *v55; // [rsp+70h] [rbp-9h]
  void *v56; // [rsp+78h] [rbp-1h]
  __int128 v57; // [rsp+80h] [rbp+7h] BYREF

  v55 = 0LL;
  v4 = 0;
  v57 = 0LL;
  v47 = 1;
  v53 = 0LL;
  if ( !(unsigned __int8)NvmeNamespaceIsDeallocateSupported() )
    return 3221225659LL;
  if ( (a2[2] & 1) != 0 )
  {
    v7 = &v57;
    v8 = 1;
    *((_QWORD *)&v57 + 1) = *(_QWORD *)(v5 + 432) * *(unsigned int *)(v5 + 64);
  }
  else
  {
    v22 = 0;
    v7 = (__int128 *)((char *)a2 + (unsigned int)a2[5]);
    v8 = a2[6] >> 4;
    if ( v8 )
    {
      v23 = *(unsigned int *)(v5 + 64);
      do
      {
        if ( *(_QWORD *)&v7[v22] % (__int64)v23
          || (v24 = *((_QWORD *)&v7[v22] + 1), v24 % v23)
          || !v24
          || v24 + *(_QWORD *)&v7[v22] > *(_QWORD *)(a1 + 432) * v23 )
        {
          DmaBuffer = -1073741811;
          goto LABEL_75;
        }
        ++v22;
      }
      while ( v22 < v8 );
    }
  }
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_QWORD *)(v9 + 600);
  if ( !v10 || (v11 = *(_DWORD *)(v10 + 4)) == 0 )
    v11 = -1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 176) + 24LL) & 0x10) != 0 )
  {
    v12 = *(_DWORD *)(a1 + 84);
    if ( v12 )
    {
      if ( v11 >= v12 )
        v11 -= v11 % v12;
    }
  }
  v13 = 0;
  if ( v8 )
  {
    v14 = *(unsigned int *)(a1 + 64);
    v15 = (_QWORD *)v7 + 1;
    v16 = v8;
    do
    {
      if ( *v15 / v14 )
        v13 += (*v15 / v14 - 1) / v11 + 1;
      v15 += 2;
      --v16;
    }
    while ( v16 );
  }
  if ( !v10 || (v17 = *(unsigned __int8 *)(v10 + 3), !(_BYTE)v17) )
  {
    v18 = *(_DWORD *)(v9 + 620);
    v17 = 256;
    if ( v18 )
    {
      v19 = v18 >> 4;
      if ( v19 <= 0x100 )
        v17 = v19;
    }
  }
  if ( v13 >= v17 )
    v13 = v17;
  if ( v10 && (v20 = *(_QWORD *)(v10 + 8)) != 0 )
  {
    v21 = 0xFFFFFFFFLL;
    if ( v20 < 0xFFFFFFFF )
      v21 = *(_QWORD *)(v10 + 8);
    v54 = v21;
  }
  else
  {
    v54 = (0x40000000u / *(_DWORD *)(a1 + 64)) << 6;
  }
  while ( 1 )
  {
    v4 = 16 * v13;
    DmaBuffer = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 16), 16 * v13, v10, (void **)&v53, (_QWORD *)&v53 + 1, 0);
    if ( DmaBuffer >= 0 )
      break;
    if ( !v47 )
      goto LABEL_75;
    v13 >>= 1;
    --v47;
  }
  v26 = *(_QWORD *)(a1 + 16);
  v56 = (void *)v53;
  ExtendedCommand = NvmeControllerGetExtendedCommand(v26);
  v28 = 0;
  v55 = (_QWORD *)ExtendedCommand;
  v29 = (_QWORD *)ExtendedCommand;
  if ( !ExtendedCommand )
  {
    DmaBuffer = -1073741670;
    goto LABEL_75;
  }
  v30 = v54;
  LOWORD(v31) = 0;
  v32 = 0LL;
  v49 = 0;
  v51 = 0LL;
  v33 = 1;
  v34 = 0;
  v48 = 0;
  v35 = 0LL;
  v50 = 0LL;
  v52 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v33 )
      {
        v36 = v34++;
        v48 = v34;
        v52 = *(_QWORD *)&v7[v36];
        v32 = *((_QWORD *)&v7[v36] + 1);
        v51 = v32;
      }
      if ( v32 )
      {
        while ( (unsigned __int16)v31 < v13 )
        {
          if ( v35 >= v30 )
          {
            v34 = v48;
            goto LABEL_59;
          }
          v37 = v11;
          if ( v51 / *(unsigned int *)(a1 + 64) <= v11 )
            v37 = v51 / *(unsigned int *)(a1 + 64);
          v38 = v30 - v35;
          if ( v37 + v35 <= v30 )
            v38 = v37;
          v39 = 2LL * (unsigned __int16)v49;
          v35 += v38;
          v40 = v56;
          v28 = 0;
          v50 = v35;
          *((_QWORD *)v56 + v39 + 1) = v52 / *(unsigned int *)(a1 + 64);
          v40[2 * v39 + 1] = v38;
          HIWORD(v31) = HIWORD(v49);
          v41 = v38 * *(unsigned int *)(a1 + 64);
          v52 += v41;
          v32 = v51 - v41;
          v51 = v32;
          LOWORD(v31) = v49 + 1;
          v49 = v31;
          if ( !v32 )
          {
            v34 = v48;
            goto LABEL_59;
          }
        }
        v34 = v48;
LABEL_63:
        v45 = 0;
        goto LABEL_64;
      }
LABEL_59:
      if ( v32 )
        goto LABEL_63;
      v45 = 1;
      if ( v34 == v8 )
        v28 = 1;
LABEL_64:
      v46 = v28;
      if ( (unsigned __int16)v31 == v13 )
        break;
      if ( v50 == v30 )
        break;
      v33 = v45;
      if ( v28 )
        break;
      v35 = v50;
      v28 = 0;
    }
    if ( 16 * (unsigned int)(unsigned __int16)v31 > v4 )
      break;
    BuildNvmeDeallocateCommand(*(unsigned int *)(a1 + 56), (unsigned __int16)v31, *v29 + 4096LL, (char *)&v53 + 8);
    *(_DWORD *)(*v29 + 4256LL) &= ~1u;
    *(_DWORD *)(*v29 + 4256LL) |= 0x20u;
    *(_DWORD *)(*v29 + 4256LL) |= 2u;
    *(_QWORD *)(*v29 + 4184LL) = 0LL;
    *(_QWORD *)(*v29 + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*v29 + 4200LL) = v29;
    *(_OWORD *)(*v29 + 4160LL) = v53;
    *(_DWORD *)(*v29 + 4248LL) = v42;
    v43 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1048LL);
    if ( v43 && (*(_DWORD *)(v43 + 24) & 0x10000000) != 0 )
      *(_DWORD *)(*v29 + 4256LL) |= 0x100u;
    DmaBuffer = NvmeControllerProcessCommandSync(*(_QWORD *)(a1 + 16), v29, 0);
    if ( DmaBuffer < 0 )
      goto LABEL_75;
    v49 = 0;
    v50 = 0LL;
    memset_0(v56, 0, v4);
    v30 = v54;
    v28 = 0;
    v35 = 0LL;
    LOWORD(v31) = 0;
    v32 = v51;
    v34 = v48;
    v33 = v45;
    if ( v46 )
      goto LABEL_75;
    v29 = v55;
  }
  DmaBuffer = -1073741789;
LABEL_75:
  NvmeControllerReclaimExtendedCommand(*(_QWORD *)(a1 + 16), v55);
  if ( (_QWORD)v53 )
    NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), v4, v44, v53, *((__int64 *)&v53 + 1));
  return (unsigned int)DmaBuffer;
}
