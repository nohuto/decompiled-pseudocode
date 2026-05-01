/*
 * XREFs of ?RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z @ 0x180065424
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x180084C9C (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpSystemResourceTimerReset(struct _RM_HAM_ACTIVITY_HOST *a1, void *a2, unsigned int a3)
{
  __int64 v3; // r9

  v3 = 48LL;
  if ( a1 )
    v3 = (__int64)a1 - 16;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)(*(_QWORD *)v3 + 40LL) + 192LL))(a2, a3);
}
