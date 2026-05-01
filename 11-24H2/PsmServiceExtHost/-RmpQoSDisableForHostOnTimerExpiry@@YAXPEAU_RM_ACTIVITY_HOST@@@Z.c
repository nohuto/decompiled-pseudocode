/*
 * XREFs of ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18006C498
 * Callers:
 *     ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800893E4 (-RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800090C0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800286D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA04 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpQoSDisableForHostOnTimerExpiry(struct _RM_ACTIVITY_HOST *a1)
{
  char *v1; // rbx

  v1 = (char *)a1 + 64;
  HampHostAcquireLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64), 0);
  *((_QWORD *)v1 + 83) |= 0x4000000000000uLL;
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v1, 0);
  HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)v1);
  RmpQoSDisableWatchdogForHost(a1);
}
