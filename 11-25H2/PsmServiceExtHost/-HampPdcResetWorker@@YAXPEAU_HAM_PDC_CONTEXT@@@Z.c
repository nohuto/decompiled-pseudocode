/*
 * XREFs of ?HampPdcResetWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18003C258
 * Callers:
 *     ?HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003ADF0 (-HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18006F9E0 (-HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000D5D0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampPdcResetWorker(struct _HOST_ACTIVITY_MANAGER **a1)
{
  struct _HOST_ACTIVITY_MANAGER *v2; // rcx

  HampManagerAcquireLockExclusive(*a1);
  v2 = *a1;
  *((_DWORD *)a1 + 24) = 0;
  HampManagerReleaseLockExclusive(v2);
}
