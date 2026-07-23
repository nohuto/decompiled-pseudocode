/*
 * XREFs of ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x1402F9274
 * Callers:
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402F8C30 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x1402F5284 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1402F95BC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x1402F976C (SmKmStoreHelperCheckWaitCommand.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402F97E8 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402F9860 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     SmLogConsumedPoison @ 0x1404B664C (SmLogConsumedPoison.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStLockVirtualRegion(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v7; // r12
  __int64 v9; // rdx
  __int64 v10; // rdx
  char v11; // r15
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  int v14; // r15d
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  LARGE_INTEGER v17; // rax
  __int128 v18; // xmm0
  int v19; // eax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  signed int v22; // r14d
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  signed __int32 v27; // eax
  __int64 v28; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-50h]
  __int128 v30; // [rsp+30h] [rbp-40h] BYREF
  __int128 v31; // [rsp+40h] [rbp-30h]
  __int128 v32; // [rsp+50h] [rbp-20h]
  __int64 v33; // [rsp+60h] [rbp-10h]
  LARGE_INTEGER v34; // [rsp+B0h] [rbp+40h] BYREF

  v7 = a2;
  if ( (__int64)*a3 < 0 )
  {
    v24 = a4;
    goto LABEL_23;
  }
  v9 = *(_QWORD *)(a1 + 7424);
  if ( v9 && !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v9, 0) )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 7032);
  v11 = a5;
  v12 = (a5 >> 8) & 7;
  v13 = v10 + 8 * v12;
  while ( v13 < v10 + 80 )
  {
    if ( !*(_QWORD *)v13 || !*(_QWORD *)(*(_QWORD *)v13 + 32LL) )
      goto LABEL_10;
    if ( v13 < v10 + 64 )
      v13 = v10 + 64;
    else
      v13 += 8LL;
  }
  v13 = 0LL;
LABEL_10:
  *(_QWORD *)(a1 + 7424) = a3;
  v33 = 0LL;
  *((_QWORD *)&v30 + 1) = *(unsigned int *)(a1 + 7016);
  *(_QWORD *)&v30 = a4;
  v31 = 0LL;
  LODWORD(v31) = v12;
  v32 = 0LL;
  if ( (v11 & 1) != 0 )
    DWORD1(v31) |= 1u;
  v14 = v11 & 0x20;
  if ( (unsigned int)SmKmStoreHelperCheckWaitCommand(a1 + 7184, 0LL) == -1073741650 )
  {
LABEL_28:
    *(_QWORD *)(a1 + 7424) = 0LL;
    return 0LL;
  }
  v15 = v30;
  v16 = v31;
  *(_WORD *)(a1 + 7242) = 4;
  *(_OWORD *)(a1 + 7248) = v15;
  *(_OWORD *)(a1 + 7264) = v16;
  *(_OWORD *)(a1 + 7280) = 0LL;
  *(_QWORD *)(a1 + 7296) = v33;
  KeSetEvent((PRKEVENT)(a1 + 7192), 0, 0);
  v17.QuadPart = -1000000LL;
  if ( *(_BYTE *)(a1 + 6838) > 1u )
    v17.QuadPart = -5000000LL;
  v34 = v17;
  if ( v14 )
    v34.QuadPart = v17.QuadPart / 4;
  SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(a1);
  do
  {
    if ( !KeWaitForSingleObject((PVOID)(a1 + 7216), Executive, 0, 0, &v34) )
    {
      KeResetEvent((PRKEVENT)(a1 + 7216));
      v18 = *(_OWORD *)(a1 + 7248);
      v19 = *(_DWORD *)(a1 + 7240);
      v20 = *(_OWORD *)(a1 + 7264);
      *(_DWORD *)(a1 + 7240) = 0;
      v30 = v18;
      v21 = *(_OWORD *)(a1 + 7280);
      v31 = v20;
      *(_QWORD *)&v20 = *(_QWORD *)(a1 + 7296);
      v32 = v21;
      v22 = (v19 & 2) != 0 ? 0xC0000120 : 0;
      v33 = v20;
      goto LABEL_20;
    }
    v27 = *(_DWORD *)(a1 + 7240);
  }
  while ( (v27 & 1) != 0 || (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 7240), v27 | 2, v27) & 1) != 0 );
  v22 = -1073741536;
LABEL_20:
  SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  if ( v22 < 0 )
  {
    if ( v22 == -1073741536 )
      return 3LL;
    goto LABEL_28;
  }
  *(_QWORD *)(a1 + 7424) = 0LL;
  if ( (int)v33 >= 0 )
  {
    v23 = v32;
    *(_QWORD *)v13 = v32;
    v24 = *(_QWORD *)(v23 + 24);
LABEL_23:
    v25 = *(_QWORD *)(a1 + 7416);
    if ( (unsigned __int64)(v25 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      *(_BYTE *)(*(_QWORD *)(v25 + 16) + (v7 >> 3)) &= ~(1 << (v7 & 7));
    if ( (*(_BYTE *)(a1 + 6837) & 0x20) != 0 && (__int64)*a3 >= 0 )
    {
      v30 = 0LL;
      v33 = 0LL;
      v28 = *(unsigned int *)(a1 + 7016);
      *(_QWORD *)&v30 = a4;
      v31 = 0LL;
      *((_QWORD *)&v30 + 1) = v28;
      v32 = 0LL;
      SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 6LL, &v30, 8LL, Timeout);
    }
    return v24;
  }
  v24 = 0LL;
  if ( (_DWORD)v33 == -1073740749 )
  {
    v24 = 1LL;
    *(_WORD *)a3 |= 0x4000u;
  }
  else if ( (_DWORD)v33 == -1073740574 )
  {
    *(_WORD *)a3 |= 0x4000u;
    SmLogConsumedPoison(*a3, *(unsigned int *)(a1 + 7016), a1 + 88);
    return 4LL;
  }
  return v24;
}
