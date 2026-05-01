/*
 * XREFs of ?HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180054148
 * Callers:
 *     ?HampPdcDamPhaseNotificationCallback@@YAJPEAXK@Z @ 0x180054BF0 (-HampPdcDamPhaseNotificationCallback@@YAJPEAXK@Z.c)
 *     ?HampPdcDamControlCallback@@YAJPEAXK@Z @ 0x18006A3C0 (-HampPdcDamControlCallback@@YAJPEAXK@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180081610 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000C030 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000D550 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002B184 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002B1E0 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x1800540A8 (-HampPdcBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z @ 0x1800558B0 (-ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z.c)
 */

void __fastcall HampPdcExitDamPhase(struct _HOST_ACTIVITY_MANAGER **a1, int a2)
{
  struct _HOST_ACTIVITY_MANAGER *v4; // rcx
  struct _HOST_ACTIVITY_MANAGER *v5; // rcx
  struct _HOST_ACTIVITY_MANAGER *v6; // rcx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  HampPdcBoostForPhaseExit(a1);
  v4 = *a1;
  *((_DWORD *)a1 + 28) = 0;
  HampManagerReleaseLockExclusive(v4);
  HampManagerAcquireLockShared(*a1);
  v5 = *a1;
  v7 = (*((_DWORD *)a1 + 28) != 0 ? 2 : 0) | (*((_DWORD *)a1 + 27) != 0);
  HampManagerReleaseLockShared(v5);
  ArManagerUpdateCsState((union _HAM_PDC_STATE_UPDATE *)&v7);
  HampManagerAcquireLockExclusive(*a1);
  v6 = *a1;
  a1[15] = (struct _HOST_ACTIVITY_MANAGER *)((char *)a1[15] + 1);
  HampManagerReleaseLockExclusive(v6);
  RtlWakeAddressAll(a1 + 15);
  TpWaitForWork(a1[10], 0LL);
  if ( a2 )
    TpPostWork(a1[11]);
}
