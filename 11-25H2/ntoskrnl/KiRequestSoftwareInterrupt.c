/*
 * XREFs of KiRequestSoftwareInterrupt @ 0x1402F3D40
 * Callers:
 *     KiUpdateRunTime @ 0x140273230 (KiUpdateRunTime.c)
 *     KeAccumulateTicks @ 0x140273800 (KeAccumulateTicks.c)
 *     KiUpdateThreadHgsFeedback @ 0x14028C900 (KiUpdateThreadHgsFeedback.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x1402F1D40 (KiSignalThreadForApc.c)
 *     KiFlushQueuedDpcsWorker @ 0x1402F5AC0 (KiFlushQueuedDpcsWorker.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 */

void __fastcall KiRequestSoftwareInterrupt(struct _KPRCB *CurrentPrcb, char a2)
{
  char v2; // r8
  bool v3; // al
  __int64 v4; // r10
  int v5; // r9d
  bool v6; // r11
  unsigned int v7; // edx
  int v8; // [rsp+20h] [rbp-28h] BYREF
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
