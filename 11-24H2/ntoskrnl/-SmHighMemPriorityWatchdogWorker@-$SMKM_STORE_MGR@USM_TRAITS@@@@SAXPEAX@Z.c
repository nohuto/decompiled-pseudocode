/*
 * XREFs of ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140247530
 * Callers:
 *     <none>
 * Callees:
 *     SmKmStoreReferenceEx @ 0x140246C10 (SmKmStoreReferenceEx.c)
 *     SmKmStoreDereference @ 0x14027A498 (SmKmStoreDereference.c)
 *     SmQuerySystemInformation @ 0x14044AA18 (SmQuerySystemInformation.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x14044FA74 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // r9
  unsigned __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // [rsp+20h] [rbp-68h] BYREF
  __int128 v12; // [rsp+28h] [rbp-60h] BYREF
  __int128 v13; // [rsp+38h] [rbp-50h]
  __int128 v14; // [rsp+48h] [rbp-40h]
  __int64 v15; // [rsp+58h] [rbp-30h]

  v2 = a1 - 1960;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( (int)SmQuerySystemInformation(a1 - 1960, a2, &v12) >= 0 )
  {
    v6 = 128000LL;
    v7 = 0;
    if ( (unsigned __int64)v12 <= 0x51400000 )
      v6 = 15360LL;
    v8 = 3 * ((unsigned __int64)v12 / 0x14000);
    if ( v8 >= v6 )
      v8 = v6;
    v11 = v8;
    do
    {
      v9 = SmKmStoreReferenceEx(v2, v7);
      v10 = v9;
      if ( v9 )
      {
        if ( *(_BYTE *)(v9 + 6839) != 1 )
          SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(v9, &v11);
        SmKmStoreDereference(v2, *(unsigned int *)(v10 + 6832));
      }
      ++v7;
    }
    while ( v7 < 0x400 );
  }
  _InterlockedExchange64((volatile __int64 *)(a1 + 24), 0LL);
  return guard_dispatch_icall_no_overrides(v2, 0LL, 9LL, v4, v11, v12, *((_QWORD *)&v12 + 1), v13);
}
