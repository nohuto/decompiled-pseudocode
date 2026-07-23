/*
 * XREFs of PpmInstallCoordinatedIdleStates @ 0x140748780
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PpmIdleIsStateDisabled @ 0x1404F8ED0 (PpmIdleIsStateDisabled.c)
 *     PpmCheckCoordinatedStateInitiator @ 0x1405CB4DC (PpmCheckCoordinatedStateInitiator.c)
 *     PpmResetPlatformIdleAccounting @ 0x1405CC8C0 (PpmResetPlatformIdleAccounting.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PpmEnableCoordinatedIdleStates @ 0x1407481B0 (PpmEnableCoordinatedIdleStates.c)
 *     PpmIdleUpdateCoordinatedDependencies @ 0x140763904 (PpmIdleUpdateCoordinatedDependencies.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  unsigned int v16; // edi
  __int64 v17; // rax
  int *v18; // r13
  unsigned int i; // r10d
  __int64 v20; // r9
  int *v21; // rax
  __int64 v22; // r9
  int v23; // r10d
  __int64 v24; // r11
  char *v25; // r15
  unsigned int *v26; // r12
  char *v27; // r14
  char *v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int v32; // ebx
  char *v33; // r12
  __int64 Prcb; // rax
  unsigned int v35; // r9d
  __int64 v36; // r8
  _QWORD *v37; // r10
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  int *v42; // r8
  unsigned int *v43; // r14
  __int64 v44; // r10
  __int64 v45; // r13
  __int64 v46; // r9
  int v47; // eax
  __int64 v48; // r15
  unsigned int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // r11
  unsigned int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned int j; // ebx
  unsigned int v57; // r14d
  __int64 v58; // r9
  __int64 k; // r15
  char v60; // al
  __int64 v61; // r10
  __int64 v62; // r11
  unsigned int v64; // [rsp+20h] [rbp-58h]
  unsigned int v65; // [rsp+24h] [rbp-54h]
  int v66; // [rsp+28h] [rbp-50h]
  unsigned int v67; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v69; // [rsp+88h] [rbp+10h]
  unsigned int v70; // [rsp+90h] [rbp+18h]
  unsigned int v71; // [rsp+98h] [rbp+20h]
  __int64 v72; // [rsp+98h] [rbp+20h]

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
  v64 = v5;
  if ( !(_DWORD)v5 )
    goto LABEL_56;
  v6 = KeNumberProcessors_0;
  v7 = 0;
  v69 = KeNumberProcessors_0;
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
  v70 = (448 * v5 + 71) & 0xFFFFFFF8;
  v71 = v70 + 24 * v7;
  v65 = v71 + 24 * v8;
  v15 = (v65 + 4 * KeNumberProcessors_0 * v5 + 7) & 0xFFFFFFF8;
  v66 = (4 * v5 + 15) & 0xFFFFFFF8;
  v67 = (v15 + ((_DWORD)v5 << 10) + 47) & 0xFFFFFFF8;
  v16 = v67 + KeNumberProcessors_0 * v66;
  if ( PpmIdleVetoList )
  {
    v14 = *((_DWORD *)PpmIdleVetoList + 1);
    if ( v14 )
    {
      Pool2 = (char *)ExAllocatePool2(0x40uLL, ((unsigned int)v5 * (unsigned __int64)v14) << 6, 0x694D5050u);
      if ( !Pool2 )
        goto LABEL_14;
    }
  }
  v17 = ExAllocatePool2(0x48uLL, v16, 0x694D5050u);
  v13 = (int *)v17;
  if ( !v17 )
  {
    ExFreePoolWithTag(Pool2, 0x694D5050u);
LABEL_14:
    updated = -1073741670;
    goto LABEL_57;
  }
  *(_DWORD *)(v17 + 4) = v6;
  *(_DWORD *)v17 = v5;
  *(_BYTE *)(v17 + 8) = 1;
  *(_QWORD *)(v17 + 16) = *((_QWORD *)v1 + 1);
  *(_QWORD *)(v17 + 24) = *((_QWORD *)v1 + 2);
  *(_QWORD *)(v17 + 32) = *((_QWORD *)v1 + 3);
  *(_QWORD *)(v17 + 40) = *((_QWORD *)v1 + 4);
  v18 = (int *)(v17 + v15);
  *(_QWORD *)(v17 + 48) = v18;
  v18[1] = v5;
  PpmResetPlatformIdleAccounting(v18);
  for ( i = 0; i < *v1; i = v23 + 1 )
  {
    v20 = 112LL * i;
    v21 = &v13[v20 + 22];
    *((_QWORD *)v21 + 1) = v21;
    *(_QWORD *)v21 = v21;
    LOBYTE(v13[v20 + 26]) = 7;
    if ( PpmIdleIsStateDisabled(0, i) )
      *(int *)((char *)v13 + v22 + 80) = 0x80000000;
    if ( v14 )
    {
      if ( v23 == *v1 - 1 )
        *((_BYTE *)v13 + v22 + 105) = 1;
      *(_QWORD *)((char *)v13 + v22 + 112) = Pool2;
      Pool2 += 64 * (unsigned __int64)v14;
      *(int *)((char *)v13 + v22 + 108) = v14;
      *(_QWORD *)&v18[256 * v24 + 56] = (char *)v13 + v22 + 80;
    }
  }
  v25 = (char *)v13 + v71;
  v26 = v1 + 82;
  v27 = (char *)v13 + v70;
  v28 = (char *)v13 + 130;
  do
  {
    *(_OWORD *)(v28 + 262) = *((_OWORD *)v26 - 1);
    *(_QWORD *)(v28 - 66) = *(_QWORD *)v26;
    *(v28 - 8) = *((_BYTE *)v26 + 28);
    *(_DWORD *)(v28 + 2) = 0;
    *(_DWORD *)(v28 - 2) = 2097153;
    memset_0(v28 + 6, 0, 0x100uLL);
    KiCopyAffinityEx((struct _KAFFINITY_EX *)(v28 - 2), *(_WORD *)v28, (struct _KAFFINITY_EX *)(v26 - 70));
    v29 = 0LL;
    *(_DWORD *)(v28 - 6) = v26[5];
    *(_QWORD *)(v28 + 278) = v27;
    v30 = v26[5];
    v27 += 24 * v30;
    if ( (_DWORD)v30 )
    {
      do
      {
        v31 = 3 * v29;
        v29 = (unsigned int)(v29 + 1);
        *(_QWORD *)(*(_QWORD *)(v28 + 278) + 8 * v31 + 16) = v25;
        v25 += 24 * v26[4];
      }
      while ( (unsigned int)v29 < v26[5] );
    }
    v26 += 80;
    v28 += 448;
    --v5;
  }
  while ( v5 );
  LODWORD(v5) = v64;
  v1 = a1;
  v32 = 0;
  v6 = v69;
  v33 = (char *)v13 + v65;
  if ( v69 )
  {
    do
    {
      Prcb = KeGetPrcb(v32);
      v35 = 0;
      v36 = *(_QWORD *)(Prcb + 34880);
      *(_QWORD *)(v36 + 1024) = v25;
      v25 += 24 * v64;
      *(_QWORD *)(v36 + 1048) = v33;
      v33 += 4 * v64;
      *(_DWORD *)(v36 + 1016) = v64;
      *(_QWORD *)(v36 + 992) = (char *)v13 + v67 + v32 * v66;
      *(_DWORD *)(v36 + 1032) = v64;
      if ( v64 )
      {
        v37 = v13 + 102;
        do
        {
          v38 = *(_QWORD *)(v36 + 1024);
          v39 = 3LL * (v64 - v35 - 1);
          *(_DWORD *)(v38 + 8 * v39 + 4) = v35++;
          *(_DWORD *)(v38 + 8 * v39 + 8) = *((_DWORD *)v37 - 71);
          v40 = *v37;
          v37 += 56;
          *(_QWORD *)(v38 + 8 * v39 + 16) = v40;
        }
        while ( v35 < v64 );
      }
      ++v32;
    }
    while ( v32 < v69 );
    v1 = a1;
  }
LABEL_34:
  if ( (_DWORD)v5 )
  {
    v41 = (unsigned int)v5;
    v42 = v13 + 18;
    v72 = (unsigned int)v5;
    v43 = v1 + 85;
    do
    {
      v44 = 0LL;
      *v42 = *(v43 - 1);
      v42[1] = *v43;
      *((_BYTE *)v42 + 49) = *((_BYTE *)v43 + 12);
      if ( v43[2] )
      {
        do
        {
          v45 = *((_QWORD *)v42 + 42);
          v46 = *(_QWORD *)(v43 + 5) + 16LL * (unsigned int)v44;
          v47 = *(_DWORD *)v46;
          *(_DWORD *)(v45 + 24 * v44) = *(_DWORD *)v46;
          if ( v47 == -1 )
            *((_BYTE *)v42 + 51) = 1;
          v48 = 0LL;
          *(_DWORD *)(v45 + 24 * v44 + 8) = *(_DWORD *)(v46 + 4);
          v49 = *(_DWORD *)(v46 + 4);
          if ( v49 )
          {
            do
            {
              v50 = *(_QWORD *)(v46 + 8);
              v51 = *(_QWORD *)(v45 + 24 * v44 + 16);
              v52 = 3LL * (v49 - (unsigned int)v48 - 1);
              v53 = *(unsigned __int8 *)(v50 + 4 * v48);
              *(_DWORD *)(v51 + 8 * v52 + 4) = v53;
              *(_BYTE *)(v51 + 8 * v52) = *(_BYTE *)(v50 + 4 * v48 + 1) == 0;
              *(_BYTE *)(v51 + 8 * v52 + 1) = *(_BYTE *)(v50 + 4 * v48 + 2);
              *(_BYTE *)(v51 + 8 * v52 + 2) = *(_BYTE *)(v50 + 4 * v48 + 3);
              if ( *(_DWORD *)(v45 + 24 * v44) == -1 )
              {
                v54 = 112LL * v53;
                *(_DWORD *)(v51 + 8 * v52 + 8) = v13[v54 + 31];
                v55 = *(_QWORD *)&v13[v54 + 102];
              }
              else
              {
                *(_DWORD *)(v51 + 8 * v52 + 8) = 0;
                v55 = 0LL;
              }
              *(_QWORD *)(v51 + 8 * v52 + 16) = v55;
              v48 = (unsigned int)(v48 + 1);
              v49 = *(_DWORD *)(v46 + 4);
            }
            while ( (unsigned int)v48 < v49 );
          }
          v44 = (unsigned int)(v44 + 1);
        }
        while ( (unsigned int)v44 < v43[2] );
        v41 = v72;
      }
      v42 += 112;
      v43 += 80;
      v72 = --v41;
    }
    while ( v41 );
    v6 = v69;
  }
  for ( j = 0; j < v6; ++j )
  {
    v57 = 0;
    for ( k = *(_QWORD *)(KeGetPrcb(j) + 34880); v57 < (unsigned int)v5; *(_BYTE *)(v61 + 8 * v62 + 1) = v60 )
    {
      v60 = PpmCheckCoordinatedStateInitiator(
              j,
              *(_DWORD *)(*(_QWORD *)(k + 1024) + 24LL * ((unsigned int)v5 - v57 - 1) + 8),
              *(_QWORD *)(*(_QWORD *)(k + 1024) + 24LL * ((unsigned int)v5 - v57 - 1) + 16),
              v58);
      ++v57;
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
