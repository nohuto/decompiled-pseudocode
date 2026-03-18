/*
 * XREFs of SmQuerySystemInformation @ 0x14044AA18
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140247530 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14044A5E8 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 * Callees:
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1406A6AD0 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall SmQuerySystemInformation(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int SystemInformation; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  if ( (a1 & 1) != 0 )
    a1 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFFFEuLL) + 7576);
  KeStackAttachProcess(*(PRKPROCESS *)(a1 + 2168), &ApcState);
  SystemInformation = ZwQuerySystemInformation(182LL, a3);
  KiUnstackDetachProcess((__int64)&ApcState, 0);
  return SystemInformation;
}
