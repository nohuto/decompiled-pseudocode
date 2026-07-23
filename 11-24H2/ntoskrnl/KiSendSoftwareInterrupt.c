/*
 * XREFs of KiSendSoftwareInterrupt @ 0x14040F180
 * Callers:
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRequestTimer2Expiration @ 0x14040F090 (KiRequestTimer2Expiration.c)
 *     KeUpdateThreadTag @ 0x14046E3F0 (KeUpdateThreadTag.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140484B24 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KiSynchronizeIdleIsolationDomainExit @ 0x1405BC6A8 (KiSynchronizeIdleIsolationDomainExit.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
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
  return HalpInterruptSendIpi((unsigned int *)&v6, v4);
}
