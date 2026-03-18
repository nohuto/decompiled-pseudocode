/*
 * XREFs of PpmInstallCoordinatedIdleStates @ 0x14073E380
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PpmIdleIsStateDisabled @ 0x1404F8F00 (PpmIdleIsStateDisabled.c)
 *     PpmCheckCoordinatedStateInitiator @ 0x1405C970C (PpmCheckCoordinatedStateInitiator.c)
 *     PpmResetPlatformIdleAccounting @ 0x1405CAAF0 (PpmResetPlatformIdleAccounting.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PpmEnableCoordinatedIdleStates @ 0x14073DE00 (PpmEnableCoordinatedIdleStates.c)
 *     PpmIdleUpdateCoordinatedDependencies @ 0x140754474 (PpmIdleUpdateCoordinatedDependencies.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmInstallCoordinatedIdleStates(unsigned int *a1)
{
  unsigned int *v1; // r14
  char *Pool2; // r15
  char v3; // si
  int updated; // ebx
  __int64 v5; // rbp
  unsigned int v6; // r13d
  int v7; // r9d
  int v8; // r10d
  _DWORD *v9; // rcx
  __int64 v10; // r11
  int v11; // eax
  int v12; // eax
  int *v13; // rdi
  unsigned int v14; // ebx
  unsigned int v15; // r12d
  __int64 v16; // rax
  int *v17; // r13
  unsigned int i; // r10d
  __int64 v19; // r9
  int *v20; // rax
  __int64 v21; // r9
  int v22; // r10d
  __int64 v23; // r11
  char *v24; // r15
  unsigned int *v25; // r12
  char *v26; // r14
  char *v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // ebx
  char *v32; // r12
  __int64 Prcb; // rax
  unsigned int v34; // r9d
  __int64 v35; // r8
  _QWORD *v36; // r10
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  int *v41; // r8
  unsigned int *v42; // r14
  __int64 v43; // r10
  __int64 v44; // r13
  __int64 v45; // r9
  int v46; // eax
  __int64 v47; // r15
  unsigned int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // r11
  unsigned int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int j; // ebx
  unsigned int v56; // r14d
  __int64 v57; // r9
  __int64 k; // r15
  char v59; // al
  __int64 v60; // r10
  __int64 v61; // r11
  unsigned int v63; // [rsp+20h] [rbp-58h]
  unsigned int v64; // [rsp+24h] [rbp-54h]
  int v65; // [rsp+28h] [rbp-50h]
  unsigned int v66; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v68; // [rsp+88h] [rbp+10h]
  unsigned int v69; // [rsp+90h] [rbp+18h]
  unsigned int v70; // [rsp+98h] [rbp+20h]
  __int64 v71; // [rsp+98h] [rbp+20h]

  v1 = a1;
  Pool2 = 0LL;
  PopAcquireRwLockExclusive(&PpmIdlePolicyLock);
  v3 = 1;
  if ( PpmPlatformStates && !*((_BYTE *)v1 + 40) )
  {
    updated = -1073741431;
LABEL_57:
    PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
    return (unsigned int)updated;
  }
  updated = PpmIdleUpdateCoordinatedDependencies(v1);
  if ( updated < 0 )
    goto LABEL_57;
  v5 = *v1;
  v63 = v5;
  if ( !(_DWORD)v5 )
    goto LABEL_56;
  v6 = KeNumberProcessors_0;
  v7 = 0;
  v68 = KeNumberProcessors_0;
  v8 = KeNumberProcessors_0 * v5;
  v9 = v1 + 86;
  v10 = (unsigned int)v5;
  do
  {
    v11 = v9[1];
    v7 += v11;
    v12 = *v9 * v11;
    v9 += 80;
    v8 += v12;
    --v10;
  }
  while ( v10 );
  v13 = (int *)PpmPlatformStates;
  if ( PpmPlatformStates )
  {
    if ( *(_QWORD *)PpmPlatformStates == __PAIR64__(KeNumberProcessors_0, v5) )
      goto LABEL_34;
LABEL_56:
    updated = -1073741811;
    goto LABEL_57;
  }
  v14 = (unsigned int)PpmIdleVetoList;
  v69 = (448 * v5 + 71) & 0xFFFFFFF8;
  v70 = v69 + 24 * v7;
  v64 = v70 + 24 * v8;
  v15 = (v64 + 4 * KeNumberProcessors_0 * v5 + 7) & 0xFFFFFFF8;
  v65 = (4 * v5 + 15) & 0xFFFFFFF8;
  v66 = (v15 + ((_DWORD)v5 << 10) + 47) & 0xFFFFFFF8;
  if ( PpmIdleVetoList )
  {
    v14 = *((_DWORD *)PpmIdleVetoList + 1);
    if ( v14 )
    {
      Pool2 = (char *)ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
        goto LABEL_14;
    }
  }
  v16 = ExAllocatePool2(0x48uLL);
  v13 = (int *)v16;
  if ( !v16 )
  {
    ExFreePoolWithTag(Pool2, 0x694D5050u);
LABEL_14:
    updated = -1073741670;
    goto LABEL_57;
  }
  *(_DWORD *)(v16 + 4) = v6;
  *(_DWORD *)v16 = v5;
  *(_BYTE *)(v16 + 8) = 1;
  *(_QWORD *)(v16 + 16) = *((_QWORD *)v1 + 1);
  *(_QWORD *)(v16 + 24) = *((_QWORD *)v1 + 2);
  *(_QWORD *)(v16 + 32) = *((_QWORD *)v1 + 3);
  *(_QWORD *)(v16 + 40) = *((_QWORD *)v1 + 4);
  v17 = (int *)(v16 + v15);
  *(_QWORD *)(v16 + 48) = v17;
  v17[1] = v5;
  PpmResetPlatformIdleAccounting(v17);
  for ( i = 0; i < *v1; i = v22 + 1 )
  {
    v19 = 112LL * i;
    v20 = &v13[v19 + 22];
    *((_QWORD *)v20 + 1) = v20;
    *(_QWORD *)v20 = v20;
    LOBYTE(v13[v19 + 26]) = 7;
    if ( PpmIdleIsStateDisabled(0, i) )
      *(int *)((char *)v13 + v21 + 80) = 0x80000000;
    if ( v14 )
    {
      if ( v22 == *v1 - 1 )
        *((_BYTE *)v13 + v21 + 105) = 1;
      *(_QWORD *)((char *)v13 + v21 + 112) = Pool2;
      Pool2 += 64 * (unsigned __int64)v14;
      *(int *)((char *)v13 + v21 + 108) = v14;
      *(_QWORD *)&v17[256 * v23 + 56] = (char *)v13 + v21 + 80;
    }
  }
  v24 = (char *)v13 + v70;
  v25 = v1 + 82;
  v26 = (char *)v13 + v69;
  v27 = (char *)v13 + 130;
  do
  {
    *(_OWORD *)(v27 + 262) = *((_OWORD *)v25 - 1);
    *(_QWORD *)(v27 - 66) = *(_QWORD *)v25;
    *(v27 - 8) = *((_BYTE *)v25 + 28);
    *(_DWORD *)(v27 + 2) = 0;
    *(_DWORD *)(v27 - 2) = 2097153;
    memset_0(v27 + 6, 0, 0x100uLL);
    KiCopyAffinityEx((struct _KAFFINITY_EX *)(v27 - 2), *(_WORD *)v27, (struct _KAFFINITY_EX *)(v25 - 70));
    v28 = 0LL;
    *(_DWORD *)(v27 - 6) = v25[5];
    *(_QWORD *)(v27 + 278) = v26;
    v29 = v25[5];
    v26 += 24 * v29;
    if ( (_DWORD)v29 )
    {
      do
      {
        v30 = 3 * v28;
        v28 = (unsigned int)(v28 + 1);
        *(_QWORD *)(*(_QWORD *)(v27 + 278) + 8 * v30 + 16) = v24;
        v24 += 24 * v25[4];
      }
      while ( (unsigned int)v28 < v25[5] );
    }
    v25 += 80;
    v27 += 448;
    --v5;
  }
  while ( v5 );
  LODWORD(v5) = v63;
  v1 = a1;
  v31 = 0;
  v6 = v68;
  v32 = (char *)v13 + v64;
  if ( v68 )
  {
    do
    {
      Prcb = KeGetPrcb(v31);
      v34 = 0;
      v35 = *(_QWORD *)(Prcb + 34880);
      *(_QWORD *)(v35 + 1024) = v24;
      v24 += 24 * v63;
      *(_QWORD *)(v35 + 1048) = v32;
      v32 += 4 * v63;
      *(_DWORD *)(v35 + 1016) = v63;
      *(_QWORD *)(v35 + 992) = (char *)v13 + v66 + v31 * v65;
      *(_DWORD *)(v35 + 1032) = v63;
      if ( v63 )
      {
        v36 = v13 + 102;
        do
        {
          v37 = *(_QWORD *)(v35 + 1024);
          v38 = 3LL * (v63 - v34 - 1);
          *(_DWORD *)(v37 + 8 * v38 + 4) = v34++;
          *(_DWORD *)(v37 + 8 * v38 + 8) = *((_DWORD *)v36 - 71);
          v39 = *v36;
          v36 += 56;
          *(_QWORD *)(v37 + 8 * v38 + 16) = v39;
        }
        while ( v34 < v63 );
      }
      ++v31;
    }
    while ( v31 < v68 );
    v1 = a1;
  }
LABEL_34:
  if ( (_DWORD)v5 )
  {
    v40 = (unsigned int)v5;
    v41 = v13 + 18;
    v71 = (unsigned int)v5;
    v42 = v1 + 85;
    do
    {
      v43 = 0LL;
      *v41 = *(v42 - 1);
      v41[1] = *v42;
      *((_BYTE *)v41 + 49) = *((_BYTE *)v42 + 12);
      if ( v42[2] )
      {
        do
        {
          v44 = *((_QWORD *)v41 + 42);
          v45 = *(_QWORD *)(v42 + 5) + 16LL * (unsigned int)v43;
          v46 = *(_DWORD *)v45;
          *(_DWORD *)(v44 + 24 * v43) = *(_DWORD *)v45;
          if ( v46 == -1 )
            *((_BYTE *)v41 + 51) = 1;
          v47 = 0LL;
          *(_DWORD *)(v44 + 24 * v43 + 8) = *(_DWORD *)(v45 + 4);
          v48 = *(_DWORD *)(v45 + 4);
          if ( v48 )
          {
            do
            {
              v49 = *(_QWORD *)(v45 + 8);
              v50 = *(_QWORD *)(v44 + 24 * v43 + 16);
              v51 = 3LL * (v48 - (unsigned int)v47 - 1);
              v52 = *(unsigned __int8 *)(v49 + 4 * v47);
              *(_DWORD *)(v50 + 8 * v51 + 4) = v52;
              *(_BYTE *)(v50 + 8 * v51) = *(_BYTE *)(v49 + 4 * v47 + 1) == 0;
              *(_BYTE *)(v50 + 8 * v51 + 1) = *(_BYTE *)(v49 + 4 * v47 + 2);
              *(_BYTE *)(v50 + 8 * v51 + 2) = *(_BYTE *)(v49 + 4 * v47 + 3);
              if ( *(_DWORD *)(v44 + 24 * v43) == -1 )
              {
                v53 = 112LL * v52;
                *(_DWORD *)(v50 + 8 * v51 + 8) = v13[v53 + 31];
                v54 = *(_QWORD *)&v13[v53 + 102];
              }
              else
              {
                *(_DWORD *)(v50 + 8 * v51 + 8) = 0;
                v54 = 0LL;
              }
              *(_QWORD *)(v50 + 8 * v51 + 16) = v54;
              v47 = (unsigned int)(v47 + 1);
              v48 = *(_DWORD *)(v45 + 4);
            }
            while ( (unsigned int)v47 < v48 );
          }
          v43 = (unsigned int)(v43 + 1);
        }
        while ( (unsigned int)v43 < v42[2] );
        v40 = v71;
      }
      v41 += 112;
      v42 += 80;
      v71 = --v40;
    }
    while ( v40 );
    v6 = v68;
  }
  for ( j = 0; j < v6; ++j )
  {
    v56 = 0;
    for ( k = *(_QWORD *)(KeGetPrcb(j) + 34880); v56 < (unsigned int)v5; *(_BYTE *)(v60 + 8 * v61 + 1) = v59 )
    {
      v59 = PpmCheckCoordinatedStateInitiator(
              j,
              *(_DWORD *)(*(_QWORD *)(k + 1024) + 24LL * ((unsigned int)v5 - v56 - 1) + 8),
              *(_QWORD *)(*(_QWORD *)(k + 1024) + 24LL * ((unsigned int)v5 - v56 - 1) + 16),
              v57);
      ++v56;
    }
  }
  if ( !PpmPlatformStates )
  {
    PpmEnableCoordinatedIdleStates(v13, 1);
    v3 = 0;
  }
  updated = 0;
  if ( v3 )
    goto LABEL_57;
  return (unsigned int)updated;
}
