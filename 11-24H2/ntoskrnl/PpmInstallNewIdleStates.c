/*
 * XREFs of PpmInstallNewIdleStates @ 0x140436C00
 * Callers:
 *     PpmIdleInstallDefaultStates @ 0x1405CBEA0 (PpmIdleInstallDefaultStates.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     PpmUpdateProcessorIdleAccounting @ 0x1404371A8 (PpmUpdateProcessorIdleAccounting.c)
 *     PpmDeepestHardwareIdleState @ 0x140437278 (PpmDeepestHardwareIdleState.c)
 *     PpmResetIdlePolicy @ 0x1404372B8 (PpmResetIdlePolicy.c)
 *     PpmIdleIsStateDisabled @ 0x1404F8ED0 (PpmIdleIsStateDisabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmInstallNewIdleStates(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r15
  __int64 v8; // rsi
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  unsigned int v11; // ecx
  __int64 Pool2; // rax
  __int64 v13; // rdi
  __int64 v14; // r14
  unsigned int v15; // r13d
  unsigned int *v16; // r12
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // rbp
  __int64 v20; // rcx
  unsigned int *v21; // rcx
  __int64 v22; // r14
  bool v23; // zf
  _DWORD *v24; // rbp
  unsigned int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned int v28; // r8d
  __int64 v29; // rax
  __int64 v30; // r13
  unsigned int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _DWORD *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // eax
  char v44; // [rsp+20h] [rbp-188h]
  unsigned int v45; // [rsp+34h] [rbp-174h]
  __int64 v47; // [rsp+40h] [rbp-168h]
  __int64 v48; // [rsp+48h] [rbp-160h]
  __int64 v49; // [rsp+50h] [rbp-158h] BYREF
  _QWORD v50[33]; // [rsp+58h] [rbp-150h] BYREF

  memset_0(v50, 0, 0x100uLL);
  v6 = 0;
  v7 = a1 + 34880;
  v48 = a1 + 34880;
  if ( a3 == 1 && *(_QWORD *)v7 )
    return v6;
  if ( *(_QWORD *)v7 )
  {
    v44 = *(_BYTE *)(*(_QWORD *)v7 + 1LL);
    PpmUpdateProcessorIdleAccounting(v7);
  }
  else
  {
    v44 = 0;
  }
  v8 = *(unsigned int *)(a2 + 96);
  if ( !(_DWORD)v8 )
    return (unsigned int)-1073741811;
  v9 = 0;
  v37 = (_DWORD *)(a2 + 104);
  v38 = *(unsigned int *)(a2 + 96);
  do
  {
    v43 = v9 + 1;
    if ( (*v37 & 0x100) != 0 )
      v43 = v9;
    v37 += 8;
    v9 = v43;
    --v38;
  }
  while ( v38 );
  v10 = (344 * v8 + 1063) & 0xFFFFFFF8;
  v45 = v10 + 24 * v43;
  v11 = (((v45 + 1016 * v8 + 47) & 0xFFFFFFF8) + 4 * v8 + 15) & 0xFFFFFFF8;
  if ( PpmIdleVetoList )
    v11 += (*((_DWORD *)PpmIdleVetoList + 1) * (_DWORD)v8) << 6;
  Pool2 = ExAllocatePool2(0x40uLL, v11, 0x694D5050u);
  v47 = Pool2;
  v13 = Pool2;
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
    v39 = Pool2 + v10;
    *(_DWORD *)(Pool2 + 1000) = v9;
    *(_QWORD *)(Pool2 + 1008) = v39;
    v14 = v39 + 24LL * v9;
  }
  else
  {
    v14 = 0LL;
  }
  *(_QWORD *)(Pool2 + 72) = 2097184LL;
  memset_0((void *)(Pool2 + 80), 0, 0x100uLL);
  v15 = 0;
  v16 = (unsigned int *)(v14 + 4);
  v17 = v13 + ((((v45 + 1016 * (_DWORD)v8 + 47) & 0xFFFFFFF8) + 4 * (_DWORD)v8 + 15) & 0xFFFFFFF8);
  v18 = a2 + 104;
  v19 = v13 + 1320;
  do
  {
    *(_OWORD *)v19 = *(_OWORD *)(v18 + 16);
    *(_QWORD *)(v19 - 264) = 2097153LL;
    memset_0((void *)(v19 - 256), 0, 0x100uLL);
    *(_BYTE *)(v19 + 72) = (*(_DWORD *)v18 >> 3) & 0xF;
    *(_BYTE *)(v19 + 74) = *(_BYTE *)v18 & 1;
    *(_BYTE *)(v19 + 75) = (*(_DWORD *)v18 & 4) != 0;
    *(_BYTE *)(v19 + 76) = (*(_DWORD *)v18 & 2) != 0;
    if ( *(int *)v18 < 0 )
    {
      *(_DWORD *)(v19 + 28) = 1;
      *(_BYTE *)(v19 + 73) = 1;
    }
    LOBYTE(v20) = 1;
    *(_BYTE *)(v19 + 77) = (*(_DWORD *)v18 & 0x80) != 0;
    *(_BYTE *)(v19 + 78) = BYTE1(*(_DWORD *)v18) & 1;
    *(_BYTE *)(v19 + 79) = (*(_DWORD *)v18 & 0x40000000) != 0;
    *(_DWORD *)(v19 + 16) = *(_DWORD *)(v18 + 4);
    *(_DWORD *)(v19 + 24) = *(_DWORD *)(v18 + 12);
    *(_DWORD *)(v19 + 20) = *(_DWORD *)(v18 + 8);
    *(_QWORD *)(v19 + 48) = v19 + 40;
    *(_QWORD *)(v19 + 40) = v19 + 40;
    if ( (unsigned __int8)PpmIdleIsStateDisabled(v20, v15) )
      *(_DWORD *)(v19 + 32) = 0x80000000;
    v21 = (unsigned int *)PpmIdleVetoList;
    if ( PpmIdleVetoList )
    {
      *(_DWORD *)(v19 + 60) = *((_DWORD *)PpmIdleVetoList + 1);
      *(_QWORD *)(v19 + 64) = v17;
      v17 += (unsigned __int64)v21[1] << 6;
    }
    if ( v16 != (unsigned int *)4 && (*(_DWORD *)v18 & 0x100) == 0 )
    {
      v16 -= 6;
      *((_BYTE *)v16 - 3) = 1;
      *v16 = v15;
    }
    ++v15;
    v19 += 344LL;
    v18 += 32LL;
  }
  while ( v15 < (unsigned int)v8 );
  v22 = v47 + v45;
  v23 = PpmIdleVetoList == 0LL;
  *(_QWORD *)(v47 + 984) = v47 + ((v45 + 1016 * (_DWORD)v8 + 47) & 0xFFFFFFF8);
  *(_DWORD *)v22 = v8;
  if ( !v23 )
  {
    v40 = (__int64 *)(v22 + 216);
    v41 = v8;
    v42 = v47 + 1352;
    do
    {
      *v40 = v42;
      v42 += 344LL;
      v40 += 127;
      --v41;
    }
    while ( v41 );
  }
  KxAcquireSpinLock(&PpmIdleVetoLock);
  v24 = *(_DWORD **)v48;
  *(_QWORD *)v48 = v47;
  KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
  if ( v44 )
    *(_DWORD *)(v47 + 36) = v24[9];
  if ( !v24 || (v25 = v24[6], v25 >= (unsigned int)v8) )
    v25 = 0;
  *(_DWORD *)(v47 + 24) = v25;
  *(_BYTE *)(v47 + 1) = v44;
  v26 = *(_QWORD *)(v48 + 8);
  *(_QWORD *)(v48 + 8) = v22;
  if ( v26 )
  {
    v27 = *(_QWORD *)(v26 + 24);
    v28 = 0;
    for ( *(_QWORD *)(v22 + 24) = v27; v28 < *(_DWORD *)v26; *(_QWORD *)(v22 + 24) = v27 )
    {
      v29 = v28++;
      v27 += *(_QWORD *)(1016 * v29 + v26 + 40);
    }
    v30 = a1;
  }
  else
  {
    v30 = a1;
    *(_QWORD *)(v22 + 24) = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 24) + 652LL);
  }
  PpmResetIdlePolicy(v48);
  if ( v26 )
    *(_DWORD *)(v22 + 8) = *(_DWORD *)(v26 + 8) + 1;
  v49 = 2097153LL;
  memset_0(v50, 0, 0x100uLL);
  v31 = *((_DWORD *)KiGlobalState + *(unsigned int *)(v30 + 36)) & 0x3F;
  v32 = *((_DWORD *)KiGlobalState + *(unsigned int *)(v30 + 36)) >> 6;
  if ( !(_DWORD)v32 )
    goto LABEL_34;
  if ( WORD1(v49) > (unsigned int)v32 )
  {
    LOWORD(v49) = v32 + 1;
LABEL_34:
    v33 = (unsigned int)v32;
    v34 = v50[v32];
    _bittestandset64(&v34, v31);
    v50[v33] = v34;
  }
  LOBYTE(v35) = PpmDeepestHardwareIdleState(v47);
  guard_dispatch_icall_no_overrides(v35, &v49);
  if ( *(_DWORD *)(v47 + 44) != 1 && *(_BYTE *)v47 )
    PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
  if ( v24 )
    ExFreePoolWithTag(v24, 0x694D5050u);
  return v6;
}
