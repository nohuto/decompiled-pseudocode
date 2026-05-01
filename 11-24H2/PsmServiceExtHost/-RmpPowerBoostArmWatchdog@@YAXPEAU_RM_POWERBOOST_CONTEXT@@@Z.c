/*
 * XREFs of ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x1800553E4
 * Callers:
 *     ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180055244 (-RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180089520 (-RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C71C (CempQueryUnbiasedInterruptTimeMs64.c)
 */

void __fastcall RmpPowerBoostArmWatchdog(struct _RM_POWERBOOST_CONTEXT *a1)
{
  unsigned int v2; // eax
  int v3; // edx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = CempQueryUnbiasedInterruptTimeMs64() - *((_DWORD *)a1 + 2);
  v3 = *((_DWORD *)a1 + 16);
  if ( v2 >= 0xBB8 )
  {
    *((_DWORD *)a1 + 16) = v3 & 0xFFFFFFFE;
  }
  else
  {
    *((_DWORD *)a1 + 16) = v3 | 1;
    v4 = -10000LL * (3000 - v2);
    TpSetTimer(*((_QWORD *)a1 + 3), &v4, 0LL, 0LL);
  }
}
