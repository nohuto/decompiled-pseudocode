/*
 * XREFs of PpmInstallNewIdleStates @ 0x14032C8F0
 * Callers:
 *     PpmIdleInstallDefaultStates @ 0x1405CE780 (PpmIdleInstallDefaultStates.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     PpmUpdateProcessorIdleAccounting @ 0x14032CE98 (PpmUpdateProcessorIdleAccounting.c)
 *     PpmDeepestHardwareIdleState @ 0x14032CF68 (PpmDeepestHardwareIdleState.c)
 *     PpmResetIdlePolicy @ 0x14032CFA8 (PpmResetIdlePolicy.c)
 *     PpmIdleIsStateDisabled @ 0x1404FB60C (PpmIdleIsStateDisabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmInstallNewIdleStates(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r15
  __int64 v8; // rsi
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  __int64 Pool2; // rax
  __int64 v12; // rdi
  __int64 v13; // r14
  unsigned int v14; // r13d
  unsigned int *v15; // r12
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rbp
  __int64 v19; // rcx
  unsigned int *v20; // rcx
  __int64 v21; // r14
  bool v22; // zf
  _DWORD *v23; // rbp
  unsigned int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rdx
  unsigned int v27; // r8d
  __int64 v28; // rax
  __int64 v29; // r13
  unsigned int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _DWORD *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // eax
  char v45; // [rsp+20h] [rbp-188h]
  unsigned int v46; // [rsp+34h] [rbp-174h]
  __int64 v48; // [rsp+40h] [rbp-168h]
  __int64 v49; // [rsp+48h] [rbp-160h]
  __int64 v50; // [rsp+50h] [rbp-158h] BYREF
  _QWORD v51[33]; // [rsp+58h] [rbp-150h] BYREF

  memset_0(v51, 0, 0x100uLL);
  v6 = 0;
  v7 = a1 + 34880;
  v49 = a1 + 34880;
  if ( a3 == 1 && *(_QWORD *)v7 )
    return v6;
  if ( *(_QWORD *)v7 )
  {
    v45 = *(_BYTE *)(*(_QWORD *)v7 + 1LL);
    PpmUpdateProcessorIdleAccounting(v7);
  }
  else
  {
    v45 = 0;
  }
  v8 = *(unsigned int *)(a2 + 96);
  if ( !(_DWORD)v8 )
    return (unsigned int)-1073741811;
  v9 = 0;
  v38 = (_DWORD *)(a2 + 104);
  v39 = *(unsigned int *)(a2 + 96);
  do
  {
    v44 = v9 + 1;
    if ( (*v38 & 0x100) != 0 )
      v44 = v9;
    v38 += 8;
    v9 = v44;
    --v39;
  }
  while ( v39 );
  v10 = (344 * v8 + 1063) & 0xFFFFFFF8;
  v46 = v10 + 24 * v44;
  Pool2 = ExAllocatePool2(0x40uLL);
  v48 = Pool2;
  v12 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *(_DWORD *)(Pool2 + 44) = a3;
  *(_QWORD *)(Pool2 + 48) = *(_QWORD *)(a2 + 56);
  *(_BYTE *)Pool2 = *(_BYTE *)(a2 + 19);
  *(_BYTE *)(Pool2 + 2) = *(_BYTE *)(a2 + 16);
  *(_BYTE *)(Pool2 + 16) = *(_BYTE *)(a2 + 18);
  *(_DWORD *)(Pool2 + 60) = 0;
  *(_DWORD *)(Pool2 + 40) = v8;
  *(_QWORD *)(Pool2 + 616) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(Pool2 + 624) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(Pool2 + 632) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(Pool2 + 608) = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(Pool2 + 600) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(Pool2 + 640) = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(Pool2 + 648) = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(Pool2 + 656) = *(_QWORD *)(a2 + 88);
  *(_QWORD *)(Pool2 + 664) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(Pool2 + 1048) = Pool2 + 1040;
  *(_DWORD *)(Pool2 + 1032) = 1;
  if ( v9 )
  {
    v40 = Pool2 + v10;
    *(_DWORD *)(Pool2 + 1000) = v9;
    *(_QWORD *)(Pool2 + 1008) = v40;
    v13 = v40 + 24LL * v9;
  }
  else
  {
    v13 = 0LL;
  }
  *(_QWORD *)(Pool2 + 72) = 2097184LL;
  memset_0((void *)(Pool2 + 80), 0, 0x100uLL);
  v14 = 0;
  v15 = (unsigned int *)(v13 + 4);
  v16 = v12 + ((((v46 + 1016 * (_DWORD)v8 + 47) & 0xFFFFFFF8) + 4 * (_DWORD)v8 + 15) & 0xFFFFFFF8);
  v17 = a2 + 104;
  v18 = v12 + 1320;
  do
  {
    *(_OWORD *)v18 = *(_OWORD *)(v17 + 16);
    *(_QWORD *)(v18 - 264) = 2097153LL;
    memset_0((void *)(v18 - 256), 0, 0x100uLL);
    *(_BYTE *)(v18 + 72) = (*(_DWORD *)v17 >> 3) & 0xF;
    *(_BYTE *)(v18 + 74) = *(_BYTE *)v17 & 1;
    *(_BYTE *)(v18 + 75) = (*(_DWORD *)v17 & 4) != 0;
    *(_BYTE *)(v18 + 76) = (*(_DWORD *)v17 & 2) != 0;
    if ( *(int *)v17 < 0 )
    {
      *(_DWORD *)(v18 + 28) = 1;
      *(_BYTE *)(v18 + 73) = 1;
    }
    LOBYTE(v19) = 1;
    *(_BYTE *)(v18 + 77) = (*(_DWORD *)v17 & 0x80) != 0;
    *(_BYTE *)(v18 + 78) = BYTE1(*(_DWORD *)v17) & 1;
    *(_BYTE *)(v18 + 79) = (*(_DWORD *)v17 & 0x40000000) != 0;
    *(_DWORD *)(v18 + 16) = *(_DWORD *)(v17 + 4);
    *(_DWORD *)(v18 + 24) = *(_DWORD *)(v17 + 12);
    *(_DWORD *)(v18 + 20) = *(_DWORD *)(v17 + 8);
    *(_QWORD *)(v18 + 48) = v18 + 40;
    *(_QWORD *)(v18 + 40) = v18 + 40;
    if ( (unsigned __int8)PpmIdleIsStateDisabled(v19, v14) )
      *(_DWORD *)(v18 + 32) = 0x80000000;
    v20 = (unsigned int *)PpmIdleVetoList;
    if ( PpmIdleVetoList )
    {
      *(_DWORD *)(v18 + 60) = *((_DWORD *)PpmIdleVetoList + 1);
      *(_QWORD *)(v18 + 64) = v16;
      v16 += (unsigned __int64)v20[1] << 6;
    }
    if ( v15 != (unsigned int *)4 && (*(_DWORD *)v17 & 0x100) == 0 )
    {
      v15 -= 6;
      *((_BYTE *)v15 - 3) = 1;
      *v15 = v14;
    }
    ++v14;
    v18 += 344LL;
    v17 += 32LL;
  }
  while ( v14 < (unsigned int)v8 );
  v21 = v48 + v46;
  v22 = PpmIdleVetoList == 0LL;
  *(_QWORD *)(v48 + 984) = v48 + ((v46 + 1016 * (_DWORD)v8 + 47) & 0xFFFFFFF8);
  *(_DWORD *)v21 = v8;
  if ( !v22 )
  {
    v41 = (__int64 *)(v21 + 216);
    v42 = v8;
    v43 = v48 + 1352;
    do
    {
      *v41 = v43;
      v43 += 344LL;
      v41 += 127;
      --v42;
    }
    while ( v42 );
  }
  KxAcquireSpinLock(&PpmIdleVetoLock);
  v23 = *(_DWORD **)v49;
  *(_QWORD *)v49 = v48;
  KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
  if ( v45 )
    *(_DWORD *)(v48 + 36) = v23[9];
  if ( !v23 || (v24 = v23[6], v24 >= (unsigned int)v8) )
    v24 = 0;
  *(_DWORD *)(v48 + 24) = v24;
  *(_BYTE *)(v48 + 1) = v45;
  v25 = *(_QWORD *)(v49 + 8);
  *(_QWORD *)(v49 + 8) = v21;
  if ( v25 )
  {
    v26 = *(_QWORD *)(v25 + 24);
    v27 = 0;
    for ( *(_QWORD *)(v21 + 24) = v26; v27 < *(_DWORD *)v25; *(_QWORD *)(v21 + 24) = v26 )
    {
      v28 = v27++;
      v26 += *(_QWORD *)(1016 * v28 + v25 + 40);
    }
    v29 = a1;
  }
  else
  {
    v29 = a1;
    *(_QWORD *)(v21 + 24) = (unsigned int)KeMaximumIncrement
                          * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 24) + 652LL);
  }
  PpmResetIdlePolicy(v49);
  if ( v25 )
    *(_DWORD *)(v21 + 8) = *(_DWORD *)(v25 + 8) + 1;
  v50 = 2097153LL;
  memset_0(v51, 0, 0x100uLL);
  v30 = *((_DWORD *)KiGlobalState + *(unsigned int *)(v29 + 36)) & 0x3F;
  v31 = *((_DWORD *)KiGlobalState + *(unsigned int *)(v29 + 36)) >> 6;
  if ( !(_DWORD)v31 )
    goto LABEL_32;
  if ( WORD1(v50) > (unsigned int)v31 )
  {
    LOWORD(v50) = v31 + 1;
LABEL_32:
    v32 = (unsigned int)v31;
    v33 = v51[v31];
    _bittestandset64(&v33, v30);
    v51[v32] = v33;
  }
  LOBYTE(v34) = PpmDeepestHardwareIdleState(v48);
  guard_dispatch_icall_no_overrides(v34, &v50, v35, v36);
  if ( *(_DWORD *)(v48 + 44) != 1 && *(_BYTE *)v48 )
    PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
  if ( v23 )
    ExFreePoolWithTag(v23, 0x694D5050u);
  return v6;
}
