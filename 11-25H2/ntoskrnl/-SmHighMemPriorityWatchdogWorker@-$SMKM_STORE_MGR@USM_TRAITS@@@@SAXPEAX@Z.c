/*
 * XREFs of ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140207B90
 * Callers:
 *     <none>
 * Callees:
 *     SmKmStoreReferenceEx @ 0x1402082A0 (SmKmStoreReferenceEx.c)
 *     SmKmStoreDereference @ 0x14034AECC (SmKmStoreDereference.c)
 *     SmQuerySystemInformation @ 0x140393568 (SmQuerySystemInformation.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x14044EB38 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // rcx
  unsigned int v6; // esi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v11[3]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v12; // [rsp+58h] [rbp-30h]

  v2 = a1 - 1960;
  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  if ( (int)SmQuerySystemInformation(a1 - 1960, a2, v11) >= 0 )
  {
    v5 = 128000LL;
    v6 = 0;
    if ( *(_QWORD *)&v11[0] <= 0x51400000uLL )
      v5 = 15360LL;
    v7 = 3 * (*(_QWORD *)&v11[0] / 0x14000uLL);
    if ( v7 >= v5 )
      v7 = v5;
    v10 = v7;
    do
    {
      v8 = SmKmStoreReferenceEx(v2, v6);
      v9 = v8;
      if ( v8 )
      {
        if ( *(_BYTE *)(v8 + 6839) != 1 )
          SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(v8, &v10);
        SmKmStoreDereference(v2, *(unsigned int *)(v9 + 6832));
      }
      ++v6;
    }
    while ( v6 < 0x400 );
  }
  _InterlockedExchange64((volatile __int64 *)(a1 + 24), 0LL);
  return guard_dispatch_icall_no_overrides(v2, 0LL);
}
