/*
 * XREFs of KiSendSoftwareInterrupt @ 0x14041E140
 * Callers:
 *     KeUpdateThreadTag @ 0x140202F10 (KeUpdateThreadTag.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140355570 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KiRequestTimer2Expiration @ 0x14041E04C (KiRequestTimer2Expiration.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSynchronizeIdleIsolationDomainExit @ 0x1405BB244 (KiSynchronizeIdleIsolationDomainExit.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 */

__int64 __fastcall KiSendSoftwareInterrupt(int a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v4; // edx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+2Ch] [rbp-1Ch]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 31;
  v7 = a1;
  v6 = 6LL;
  ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
  v8 = 0LL;
  if ( a2 != 1 )
    v4 = 47;
  return HalpInterruptSendIpi(&v6, v4);
}
