/*
 * XREFs of SmQuerySystemInformation @ 0x140375D70
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402F5830 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140375DFC (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1406A7A70 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall SmQuerySystemInformation(__int64 a1, __int64 a2, void *a3)
{
  unsigned int SystemInformation; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  if ( (a1 & 1) != 0 )
    a1 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFFFEuLL) + 7576);
  KeStackAttachProcess(*(PRKPROCESS *)(a1 + 2168), &ApcState);
  SystemInformation = ZwQuerySystemInformation(SystemMemoryUsageInformation, a3, 0x38u, 0LL);
  KiUnstackDetachProcess((__int64)&ApcState, 0, v5, v6);
  return SystemInformation;
}
