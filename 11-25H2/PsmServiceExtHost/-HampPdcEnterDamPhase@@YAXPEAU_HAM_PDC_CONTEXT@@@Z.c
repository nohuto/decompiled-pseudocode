/*
 * XREFs of ?HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180054D94
 * Callers:
 *     ?HampPdcDamPhaseNotificationCallback@@YAJPEAXK@Z @ 0x180054C70 (-HampPdcDamPhaseNotificationCallback@@YAJPEAXK@Z.c)
 * Callees:
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000C0B0 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000D5D0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002B204 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002B260 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C79C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?HampSystemCheckNotifyForPowerChange@@YAXE@Z @ 0x1800555F4 (-HampSystemCheckNotifyForPowerChange@@YAXE@Z.c)
 *     ?ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z @ 0x180055930 (-ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z.c)
 */

void __fastcall HampPdcEnterDamPhase(struct _HOST_ACTIVITY_MANAGER **a1)
{
  int UnbiasedInterruptTimeMs64; // eax
  struct _HOST_ACTIVITY_MANAGER *v3; // rcx
  struct _HOST_ACTIVITY_MANAGER *v4; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  HampSystemCheckNotifyForPowerChange(1u);
  HampManagerAcquireLockExclusive(*a1);
  UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
  v3 = *a1;
  *((_DWORD *)a1 + 28) = UnbiasedInterruptTimeMs64;
  HampManagerReleaseLockExclusive(v3);
  HampManagerAcquireLockShared(*a1);
  v4 = *a1;
  v5 = (*((_DWORD *)a1 + 28) != 0 ? 2 : 0) | (*((_DWORD *)a1 + 27) != 0);
  HampManagerReleaseLockShared(v4);
  ArManagerUpdateCsState((union _HAM_PDC_STATE_UPDATE *)&v5);
  TpWaitForWork(a1[11], 0LL);
  TpPostWork(a1[10]);
}
