/*
 * XREFs of KiRequestSoftwareInterrupt @ 0x1402DC510
 * Callers:
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiUpdateRunTime @ 0x1402AA8E0 (KiUpdateRunTime.c)
 *     KeAccumulateTicks @ 0x1402AAEB0 (KeAccumulateTicks.c)
 *     KiSignalThreadForApc @ 0x1402DD8B0 (KiSignalThreadForApc.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     KiUpdateThreadHgsFeedback @ 0x14036CDAC (KiUpdateThreadHgsFeedback.c)
 *     KiFlushQueuedDpcsWorker @ 0x140472610 (KiFlushQueuedDpcsWorker.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 */

void __fastcall KiRequestSoftwareInterrupt(struct _KPRCB *CurrentPrcb, char a2)
{
  char v2; // r8
  bool v3; // al
  __int64 v4; // r10
  int v5; // r9d
  bool v6; // r11
  unsigned int v7; // edx
  unsigned int v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+24h] [rbp-24h]

  v2 = a2;
  if ( a2 != 2 )
    goto LABEL_2;
  if ( !CurrentPrcb )
    CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->NestingLevel )
  {
LABEL_2:
    v9 = 0LL;
    if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
    {
      if ( (unsigned __int8)(a2 - 1) > 1u )
        goto LABEL_9;
      v3 = HalpDisableInterrupts();
      v5 = *(_DWORD *)(v4 + 168);
      v6 = v3;
      *(_DWORD *)(v4 + 168) = v5 | (1 << v2);
      if ( !v5 )
        __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
      if ( v6 )
        _enable();
    }
    if ( v2 == 1 )
    {
      v7 = 31;
      goto LABEL_10;
    }
LABEL_9:
    v7 = 47;
LABEL_10:
    v8 = 5;
    HalpInterruptSendIpi(&v8, v7);
    return;
  }
  CurrentPrcb->InterruptRequest = 1;
}
