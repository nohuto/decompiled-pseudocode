/*
 * XREFs of ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180036B70
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B244 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180035260 (-HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180038178 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTryEnterModsPlmPhase@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18007E25C (-HampHostTryEnterModsPlmPhase@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupRemoveHostForMerge@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800830C0 (-HampDepGroupRemoveHostForMerge@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x18008515C (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x1800850F8 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall HampHostIsSuspendWaiter(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  bool v4; // zf
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0;
  if ( (*((_QWORD *)a1 + 83) & 0x10000000000LL) != 0 )
    return 0LL;
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v5, (union _RM_OPTIMIZATION_STATE *)&v6);
  if ( (v5 & 0x80u) != 0 && (v6 & 0x80u) == 0 )
    return 0LL;
  if ( (v5 & 0x100) != 0 && (v6 & 0x100) == 0 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 83);
  if ( (v3 & 0x800000000LL) != 0 )
    return 0LL;
  if ( (v3 & 0x40000000000LL) == 0 )
    return 1LL;
  v4 = (v3 & 0x30000) == 0;
  result = 0LL;
  if ( v4 )
    return 1LL;
  return result;
}
