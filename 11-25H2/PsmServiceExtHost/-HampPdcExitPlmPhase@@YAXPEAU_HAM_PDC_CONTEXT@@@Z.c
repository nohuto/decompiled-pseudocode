/*
 * XREFs of ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180070770
 * Callers:
 *     ?HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z @ 0x180054290 (-HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z.c)
 *     ?HampPdcPlmControlCallback@@YAJPEAXK@Z @ 0x18006E230 (-HampPdcPlmControlCallback@@YAJPEAXK@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180081150 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000C0B0 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000D5D0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180054128 (-HampPdcBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180055894 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 */

void __fastcall HampPdcExitPlmPhase(struct _HOST_ACTIVITY_MANAGER **a1)
{
  struct _HOST_ACTIVITY_MANAGER *v2; // rcx
  struct _HOST_ACTIVITY_MANAGER *v3; // rcx

  HampPdcBoostForPhaseExit(a1);
  v2 = *a1;
  *((_DWORD *)a1 + 27) = 0;
  HampManagerReleaseLockExclusive(v2);
  HampPdcNotifyCsState(a1, 1);
  HampManagerAcquireLockExclusive(*a1);
  v3 = *a1;
  a1[15] = (struct _HOST_ACTIVITY_MANAGER *)((char *)a1[15] + 1);
  HampManagerReleaseLockExclusive(v3);
  RtlWakeAddressAll(a1 + 15);
  TpWaitForWork(a1[9], 0LL);
  HampPdcEndBoostForPhaseExit(a1);
}
