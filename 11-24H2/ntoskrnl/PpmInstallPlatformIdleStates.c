/*
 * XREFs of PpmInstallPlatformIdleStates @ 0x140A2E800
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeGetProcessorIndexFromNumber @ 0x140370440 (KeGetProcessorIndexFromNumber.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x1404564F0 (KeQueryActiveProcessorAffinity2.c)
 *     PpmIdleIsStateDisabled @ 0x1404F8ED0 (PpmIdleIsStateDisabled.c)
 *     PpmResetPlatformIdleAccounting @ 0x1405CC8C0 (PpmResetPlatformIdleAccounting.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PpmEnableCoordinatedIdleStates @ 0x1407481B0 (PpmEnableCoordinatedIdleStates.c)
 *     PpmIdleUpdatePlatformDependencies @ 0x140A2EAAC (PpmIdleUpdatePlatformDependencies.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmInstallPlatformIdleStates(__int64 a1)
{
  __int64 v1; // r15
  unsigned int v2; // esi
  char v3; // bp
  __int64 v4; // rdi
  unsigned int v6; // r12d
  unsigned int v7; // edx
  int v8; // r13d
  unsigned int i; // ebx
  __int64 v10; // rcx
  __int64 v11; // r14
  unsigned int v12; // r12d
  unsigned int v13; // r9d
  __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // r11
  unsigned int v17; // ecx
  __int64 v18; // r15
  __int64 v19; // rdi
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // rdx
  unsigned int m; // ebx
  unsigned int v24; // edi
  __int64 v25; // r13
  unsigned int v26; // eax
  __int64 v27; // rcx
  char v28; // al
  bool v29; // zf
  unsigned int v30; // r13d
  void *v31; // rbx
  __int64 v32; // rax
  int *v33; // rax
  unsigned int v34; // eax
  unsigned int j; // r12d
  __int64 v36; // rdi
  _QWORD *v37; // rax
  unsigned int v38; // r13d
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // r8
  __int64 v42; // rdx
  __int128 v43; // xmm0
  __int64 v44; // r15
  __int64 v45; // rsi
  unsigned int v46; // r13d
  __int64 v47; // rbx
  __int64 v48; // rcx
  int v49; // eax
  unsigned int k; // ebx
  __int64 Prcb; // rax
  unsigned int v52; // r9d
  __int64 v53; // r10
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rdx
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v58; // rbx
  __int64 v59; // rdi
  int v60; // edx
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // [rsp+20h] [rbp-68h]
  unsigned int v64; // [rsp+28h] [rbp-60h]
  int v65; // [rsp+2Ch] [rbp-5Ch]
  __int64 Pool2; // [rsp+30h] [rbp-58h]
  __int64 v67; // [rsp+30h] [rbp-58h]
  int *v68; // [rsp+38h] [rbp-50h]
  __int64 v70; // [rsp+98h] [rbp+10h]
  unsigned int v71; // [rsp+98h] [rbp+10h]
  int v72; // [rsp+98h] [rbp+10h]
  unsigned int v73; // [rsp+A0h] [rbp+18h]
  __int64 v74; // [rsp+A0h] [rbp+18h]
  unsigned int v75; // [rsp+A8h] [rbp+20h]

  v1 = a1;
  v2 = 0;
  Pool2 = 0LL;
  PopAcquireRwLockExclusive(&PpmIdlePolicyLock);
  v3 = 1;
  if ( PpmPlatformStates && !*(_BYTE *)(v1 + 40) )
  {
    v2 = -1073741431;
    goto LABEL_4;
  }
  v4 = *(unsigned int *)(v1 + 4);
  if ( !(_DWORD)v4 )
  {
LABEL_3:
    v2 = -1073741811;
LABEL_4:
    PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
    return v2;
  }
  PpmIdleUpdatePlatformDependencies(v1);
  v6 = KeNumberProcessors_0;
  v7 = 0;
  v73 = KeNumberProcessors_0;
  while ( v7 < *(_DWORD *)(v1 + 4) )
  {
    if ( *(_DWORD *)(v1 + 48LL * v7 + 64) > (unsigned int)KeNumberProcessors_0 )
      goto LABEL_3;
    ++v7;
  }
  v8 = 0;
  for ( i = 0; i < v6; ++i )
  {
    v10 = *(_QWORD *)(KeGetPrcb(i) + 34880);
    if ( !v10 )
      goto LABEL_3;
    v8 += *(_DWORD *)(v10 + 40);
  }
  v11 = PpmPlatformStates;
  if ( !PpmPlatformStates )
  {
    v75 = (448 * v4 + 71) & 0xFFFFFFF8;
    v63 = v75 + 24 * v6 * *(_DWORD *)(v1 + 4);
    v71 = v63 + 24 * *(_DWORD *)(v1 + 4) * (v6 + v8);
    v64 = (v71 + ((_DWORD)v4 << 10) + 47) & 0xFFFFFFF8;
    v65 = (4 * v4 + 15) & 0xFFFFFFF8;
    if ( PpmIdleVetoList )
    {
      v30 = *((_DWORD *)PpmIdleVetoList + 1);
      if ( v30 )
      {
        Pool2 = ExAllocatePool2(0x40uLL, (v4 * v30) << 6, 0x694D5050u);
        v31 = (void *)Pool2;
        if ( !Pool2 )
          goto LABEL_78;
        goto LABEL_51;
      }
    }
    else
    {
      v30 = 0;
    }
    v31 = 0LL;
LABEL_51:
    v32 = ExAllocatePool2(0x48uLL, v64 + v6 * ((4 * (_DWORD)v4 + 15) & 0xFFFFFFF8), 0x694D5050u);
    v11 = v32;
    if ( v32 )
    {
      *(_DWORD *)v32 = v4;
      *(_DWORD *)(v32 + 4) = v6;
      *(_QWORD *)(v32 + 16) = *(_QWORD *)(v1 + 8);
      *(_QWORD *)(v32 + 24) = *(_QWORD *)(v1 + 16);
      *(_QWORD *)(v32 + 32) = *(_QWORD *)(v1 + 24);
      *(_QWORD *)(v32 + 40) = *(_QWORD *)(v1 + 32);
      v33 = (int *)(v32 + v71);
      *(_QWORD *)(v11 + 48) = v33;
      v68 = v33;
      v33[1] = v4;
      PpmResetPlatformIdleAccounting(v33);
      v34 = *(_DWORD *)(v1 + 4);
      if ( v34 )
      {
        for ( j = 0; j < v34; ++j )
        {
          v36 = 448LL * j;
          *(_WORD *)(v36 + v11 + 121) = 257;
          *(_QWORD *)(v36 + v11 + 128) = 2097153LL;
          memset_0((void *)(v36 + v11 + 136), 0, 0x100uLL);
          KeQueryActiveProcessorAffinity2(v36 + v11 + 128);
          v37 = (_QWORD *)(v36 + v11 + 88);
          v37[1] = v37;
          *v37 = v37;
          *(_BYTE *)(v36 + v11 + 104) = 7;
          if ( PpmIdleIsStateDisabled(0, j) )
            *(_DWORD *)(v36 + v11 + 80) = 0x80000000;
          if ( v30 )
          {
            if ( j == *(_DWORD *)(v1 + 4) - 1 )
              *(_BYTE *)(v36 + v11 + 105) = 1;
            *(_QWORD *)(v36 + v11 + 112) = Pool2;
            *(_DWORD *)(v36 + v11 + 108) = v30;
            Pool2 += (unsigned __int64)v30 << 6;
            *(_QWORD *)&v68[256 * (unsigned __int64)j + 56] = v36 + v11 + 80;
          }
          v34 = *(_DWORD *)(v1 + 4);
        }
        v6 = v73;
      }
      v38 = 0;
      v39 = v11 + v75;
      v40 = v11 + v63;
      v72 = 0;
      if ( v34 )
      {
        v41 = 24LL * v6;
        do
        {
          v42 = 448LL * v38;
          v43 = *(_OWORD *)(v1 + 48LL * v38 + 72);
          *(_QWORD *)(v42 + v11 + 408) = v39;
          v39 += v41;
          *(_DWORD *)(v42 + v11 + 124) = v6;
          v67 = v39;
          *(_OWORD *)(v42 + v11 + 392) = v43;
          if ( v6 )
          {
            v44 = 0LL;
            v45 = 448LL * v38;
            v46 = 0;
            do
            {
              v47 = *(_QWORD *)(v45 + v11 + 408);
              v48 = *(_QWORD *)(KeGetPrcb(v46) + 34880);
              *(_DWORD *)(v44 + v47) = v46++;
              v44 += 24LL;
              v49 = *(_DWORD *)(v48 + 40);
              *(_QWORD *)(v44 + v47 - 8) = v40;
              *(_DWORD *)(v44 + v47 - 16) = v49;
              v40 += 24LL * *(unsigned int *)(v48 + 40);
            }
            while ( v46 < v6 );
            v1 = a1;
            v2 = 0;
            v38 = v72;
            v39 = v67;
            v41 = 24LL * v6;
          }
          v72 = ++v38;
        }
        while ( v38 < *(_DWORD *)(v1 + 4) );
      }
      for ( k = 0; k < v6; ++k )
      {
        Prcb = KeGetPrcb(k);
        v52 = 0;
        v53 = *(_QWORD *)(Prcb + 34880);
        *(_QWORD *)(v53 + 992) = v11 + v64 + k * v65;
        *(_DWORD *)(v53 + 1016) = *(_DWORD *)(v1 + 4);
        *(_QWORD *)(v53 + 1024) = v40;
        v54 = *(unsigned int *)(v1 + 4);
        v40 += 24 * v54;
        if ( (_DWORD)v54 )
        {
          do
          {
            v55 = 448LL * v52;
            v56 = 3LL * ((unsigned int)v54 - v52 - 1);
            v54 = *(_QWORD *)(v53 + 1024);
            *(_DWORD *)(v54 + 8 * v56 + 4) = v52++;
            *(_DWORD *)(v54 + 8 * v56 + 8) = *(_DWORD *)(v55 + v11 + 124);
            *(_QWORD *)(v54 + 8 * v56 + 16) = *(_QWORD *)(v55 + v11 + 408);
            LODWORD(v54) = *(_DWORD *)(v1 + 4);
          }
          while ( v52 < (unsigned int)v54 );
        }
      }
      goto LABEL_17;
    }
    ExFreePoolWithTag(v31, 0x694D5050u);
LABEL_78:
    v2 = -1073741670;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(PpmPlatformStates + 4) != v6 || *(_DWORD *)PpmPlatformStates != (_DWORD)v4 )
    goto LABEL_3;
LABEL_17:
  if ( *(_DWORD *)(v1 + 4) )
  {
    v12 = 0;
    do
    {
      v13 = 0;
      v14 = 448LL * v12;
      v15 = v1 + 48 * (v12 + 1LL);
      *(_DWORD *)(v14 + v11 + 72) = *(_DWORD *)(v15 + 8);
      *(_DWORD *)(v14 + v11 + 76) = *(_DWORD *)(v15 + 12);
      if ( *(_DWORD *)(v15 + 16) )
      {
        do
        {
          v16 = *(_QWORD *)(v15 + 40);
          v17 = 0;
          v18 = *(_QWORD *)(v14 + v11 + 408);
          v19 = 3LL * *(unsigned int *)(v16 + 8LL * v13);
          v20 = *(_DWORD *)(v18 + 24LL * *(unsigned int *)(v16 + 8LL * v13) + 8);
          if ( v20 )
          {
            do
            {
              v21 = *(_QWORD *)(v18 + 8 * v19 + 16);
              v22 = 3LL * (v20 - v17 - 1);
              *(_OWORD *)(v21 + 8 * v22) = 0LL;
              *(_QWORD *)(v21 + 8 * v22 + 16) = 0LL;
              *(_DWORD *)(v21 + 8 * v22 + 4) = v17;
              if ( !*(_BYTE *)(v15 + 4) && v17 == *(unsigned __int8 *)(v15 + 5) )
                *(_BYTE *)(v21 + 24LL * (v20 - v17 - 1) + 1) = 1;
              if ( v17 >= *(unsigned __int8 *)(v16 + 8LL * v13 + 4) )
              {
                *(_BYTE *)(v21 + 24LL * (v20 - v17 - 1) + 2) = 1;
                if ( !*(_BYTE *)(v16 + 8LL * v13 + 6) )
                  *(_BYTE *)(v21 + 24LL * (v20 - v17 - 1)) = 1;
              }
              v20 = *(_DWORD *)(v18 + 8 * v19 + 8);
              ++v17;
            }
            while ( v17 < v20 );
          }
          ++v13;
        }
        while ( v13 < *(_DWORD *)(v15 + 16) );
        v1 = a1;
      }
      if ( *(_BYTE *)(v15 + 4) )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)v15);
        v58 = *(_QWORD *)(v14 + v11 + 408);
        v59 = 3LL * ProcessorIndexFromNumber;
        memset_0(
          *(void **)(v58 + 24LL * ProcessorIndexFromNumber + 16),
          0,
          24LL * *(unsigned int *)(v58 + 24LL * ProcessorIndexFromNumber + 8));
        v60 = *(unsigned __int8 *)(v15 + 5);
        v61 = 3LL * (unsigned int)(*(_DWORD *)(v58 + 8 * v59 + 8) - v60 - 1);
        v62 = *(_QWORD *)(v58 + 8 * v59 + 16);
        *(_DWORD *)(v62 + 8 * v61 + 4) = v60;
        *(_BYTE *)(v62 + 8 * v61 + 1) = 1;
      }
      ++v12;
    }
    while ( v12 < *(_DWORD *)(v1 + 4) );
    v6 = v73;
  }
  for ( m = 0; m < v6; ++m )
  {
    v24 = 0;
    v25 = *(_QWORD *)(KeGetPrcb(m) + 34880);
    v26 = *(_DWORD *)(v25 + 1016);
    if ( v26 )
    {
      do
      {
        v70 = 3LL * (v26 - v24 - 1);
        v74 = *(_QWORD *)(v25 + 1024);
        v27 = v1 + 48 * (v24 + 1LL);
        if ( !*(_BYTE *)(v27 + 4) || (v29 = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)v27) == m, v28 = 0, v29) )
          v28 = 1;
        ++v24;
        *(_BYTE *)(v74 + 8 * v70 + 1) = v28;
        v26 = *(_DWORD *)(v25 + 1016);
      }
      while ( v24 < v26 );
    }
  }
  if ( !PpmPlatformStates )
  {
    PpmEnableCoordinatedIdleStates((int *)v11, 0);
    v3 = 0;
  }
  if ( v3 )
    goto LABEL_4;
  return v2;
}
