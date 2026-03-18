/*
 * XREFs of ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x14020C8C4
 * Callers:
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14020C270 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 * Callees:
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14020CC0C (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x14020CDBC (SmKmStoreHelperCheckWaitCommand.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14020CE38 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14020CEB0 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x1404818F4 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     SmLogConsumedPoison @ 0x1404BC5DC (SmLogConsumedPoison.c)
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
  __int64 v17; // rdx
  LARGE_INTEGER v18; // rax
  __int128 v19; // xmm0
  int v20; // eax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  signed int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx
  signed __int32 v28; // eax
  __int64 v29; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-50h]
  __int128 v31; // [rsp+30h] [rbp-40h] BYREF
  __int128 v32; // [rsp+40h] [rbp-30h]
  __int128 v33; // [rsp+50h] [rbp-20h]
  __int64 v34; // [rsp+60h] [rbp-10h]
  LARGE_INTEGER v35; // [rsp+B0h] [rbp+40h] BYREF

  v7 = a2;
  if ( (__int64)*a3 < 0 )
  {
    v25 = a4;
    goto LABEL_23;
  }
  v9 = *(_QWORD *)(a1 + 7424);
  if ( v9 && !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v9, 0LL) )
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
  v34 = 0LL;
  *((_QWORD *)&v31 + 1) = *(unsigned int *)(a1 + 7016);
  *(_QWORD *)&v31 = a4;
  v32 = 0LL;
  LODWORD(v32) = v12;
  v33 = 0LL;
  if ( (v11 & 1) != 0 )
    DWORD1(v32) |= 1u;
  v14 = v11 & 0x20;
  if ( (unsigned int)SmKmStoreHelperCheckWaitCommand(a1 + 7184, 0LL) == -1073741650 )
  {
LABEL_28:
    *(_QWORD *)(a1 + 7424) = 0LL;
    return 0LL;
  }
  v15 = v31;
  v16 = v32;
  *(_WORD *)(a1 + 7242) = 4;
  *(_OWORD *)(a1 + 7248) = v15;
  *(_OWORD *)(a1 + 7264) = v16;
  *(_OWORD *)(a1 + 7280) = 0LL;
  *(_QWORD *)(a1 + 7296) = v34;
  KeSetEvent((PRKEVENT)(a1 + 7192), 0, 0);
  v18.QuadPart = -1000000LL;
  if ( *(_BYTE *)(a1 + 6838) > 1u )
    v18.QuadPart = -5000000LL;
  v35 = v18;
  if ( v14 )
  {
    v17 = v18.QuadPart % 4;
    v35.QuadPart = v18.QuadPart / 4;
  }
  SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(a1, v17);
  do
  {
    if ( !KeWaitForSingleObject((PVOID)(a1 + 7216), Executive, 0, 0, &v35) )
    {
      KeResetEvent((PRKEVENT)(a1 + 7216));
      v19 = *(_OWORD *)(a1 + 7248);
      v20 = *(_DWORD *)(a1 + 7240);
      v21 = *(_OWORD *)(a1 + 7264);
      *(_DWORD *)(a1 + 7240) = 0;
      v31 = v19;
      v22 = *(_OWORD *)(a1 + 7280);
      v32 = v21;
      *(_QWORD *)&v21 = *(_QWORD *)(a1 + 7296);
      v33 = v22;
      v23 = (v20 & 2) != 0 ? 0xC0000120 : 0;
      v34 = v21;
      goto LABEL_20;
    }
    v28 = *(_DWORD *)(a1 + 7240);
  }
  while ( (v28 & 1) != 0 || (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 7240), v28 | 2, v28) & 1) != 0 );
  v23 = -1073741536;
LABEL_20:
  SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  if ( v23 < 0 )
  {
    if ( v23 == -1073741536 )
      return 3LL;
    goto LABEL_28;
  }
  *(_QWORD *)(a1 + 7424) = 0LL;
  if ( (int)v34 >= 0 )
  {
    v24 = v33;
    *(_QWORD *)v13 = v33;
    v25 = *(_QWORD *)(v24 + 24);
LABEL_23:
    v26 = *(_QWORD *)(a1 + 7416);
    if ( (unsigned __int64)(v26 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      *(_BYTE *)(*(_QWORD *)(v26 + 16) + (v7 >> 3)) &= ~(1 << (v7 & 7));
    if ( (*(_BYTE *)(a1 + 6837) & 0x20) != 0 && (__int64)*a3 >= 0 )
    {
      v31 = 0LL;
      v34 = 0LL;
      v29 = *(unsigned int *)(a1 + 7016);
      *(_QWORD *)&v31 = a4;
      v32 = 0LL;
      *((_QWORD *)&v31 + 1) = v29;
      v33 = 0LL;
      SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 6LL, &v31, 8LL, Timeout);
    }
    return v25;
  }
  v25 = 0LL;
  if ( (_DWORD)v34 == -1073740749 )
  {
    v25 = 1LL;
    *(_WORD *)a3 |= 0x4000u;
  }
  else if ( (_DWORD)v34 == -1073740574 )
  {
    *(_WORD *)a3 |= 0x4000u;
    SmLogConsumedPoison(*a3, *(unsigned int *)(a1 + 7016), a1 + 88);
    return 4LL;
  }
  return v25;
}
