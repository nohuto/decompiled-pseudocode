/*
 * XREFs of KiRequestSoftwareInterrupt @ 0x140297BA0
 * Callers:
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiSignalThreadForApc @ 0x140296870 (KiSignalThreadForApc.c)
 *     KiUpdateRunTime @ 0x14029BDF0 (KiUpdateRunTime.c)
 *     KeAccumulateTicks @ 0x14029C3C0 (KeAccumulateTicks.c)
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     KiUpdateThreadHgsFeedback @ 0x14034E8CC (KiUpdateThreadHgsFeedback.c)
 *     KiFlushQueuedDpcsWorker @ 0x140476570 (KiFlushQueuedDpcsWorker.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 */

void __fastcall KiRequestSoftwareInterrupt(struct _KPRCB *CurrentPrcb, __int64 a2)
{
  char v2; // r8
  char v3; // al
  __int64 v4; // r10
  int v5; // r9d
  char v6; // r11
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+24h] [rbp-24h]

  v2 = a2;
  if ( (_BYTE)a2 != 2 )
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
      v3 = HalpDisableInterrupts(CurrentPrcb, a2, (unsigned __int8)a2);
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
      v7 = 31LL;
      goto LABEL_10;
    }
LABEL_9:
    v7 = 47LL;
LABEL_10:
    v8 = 5;
    HalpInterruptSendIpi(&v8, v7);
    return;
  }
  CurrentPrcb->InterruptRequest = 1;
}
