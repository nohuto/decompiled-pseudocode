/*
 * XREFs of ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BBE8
 * Callers:
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180026E70 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800277F0 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002A900 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003B170 (-HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostGetStateSummary@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_HOST_STATE_SUMMARY@@@Z @ 0x18007D904 (-HampHostGetStateSummary@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_HOST_STATE_SUMMARY@@@Z.c)
 * Callees:
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180084C38 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall HampHostIsResumed(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned int v1; // ebx
  int v3; // [rsp+38h] [rbp+10h] BYREF
  int v4; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  v3 = 0;
  v4 = 0;
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v3, (union _RM_OPTIMIZATION_STATE *)&v4);
  if ( (v3 & 0x180) != 0 )
    return 0LL;
  LOBYTE(v1) = (v4 & 0x180) == 0;
  return v1;
}
