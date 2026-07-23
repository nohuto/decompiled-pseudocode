/*
 * XREFs of KeUpdatePendingQosRequest @ 0x1403E9444
 * Callers:
 *     KiCheckForPendingQosUpdate @ 0x14027556C (KiCheckForPendingQosUpdate.c)
 *     KeCheckAndApplyBamQos @ 0x1403E8B80 (KeCheckAndApplyBamQos.c)
 *     PpmPerfSetProcessorIdle @ 0x1404C693C (PpmPerfSetProcessorIdle.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiSetClockTimer @ 0x140274458 (KiSetClockTimer.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KiCancelClockTimer @ 0x1403E9910 (KiCancelClockTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1405BF078 (KiSetVirtualHeteroClockIntervalRequest.c)
 */

char __fastcall KeUpdatePendingQosRequest(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // rdx
  LARGE_INTEGER InterruptTimePrecise; // rax
  signed __int32 v6; // eax
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = a1;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    v4 = 15LL;
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    if ( (*(_DWORD *)(v2 + 236) & 0x100) != 0 )
    {
      if ( KiQosHysteresisTimerPeriod )
      {
        if ( KiClockTimerReducePreciseTimeQueries )
          InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
        else
          InterruptTimePrecise.QuadPart = 0LL;
        KiSetClockTimer(v2, InterruptTimePrecise, -(__int64)(unsigned int)KiQosHysteresisTimerPeriod, 0, 6, 0, 1);
      }
    }
    else
    {
      KiCancelClockTimer(v2, 6LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v4) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
    }
    LOBYTE(v6) = CurrentIrql;
    __writecr8(CurrentIrql);
    return v6;
  }
  if ( (*(_DWORD *)(a1 + 236) & 0x100) != 0 )
  {
    v6 = _InterlockedIncrement(&KiPendingVirtualHeteroRequest);
    if ( v6 != 1 )
      return v6;
    if ( !*(_BYTE *)(a1 + 33) )
      goto LABEL_23;
LABEL_22:
    LOBYTE(a1) = v1;
    LOBYTE(v6) = KiSetVirtualHeteroClockIntervalRequest(a1);
    return v6;
  }
  v6 = _InterlockedExchangeAdd(&KiPendingVirtualHeteroRequest, 0xFFFFFFFF);
  if ( v6 != 1 )
    return v6;
  if ( *(_BYTE *)(a1 + 33) )
  {
    v1 = 1;
    goto LABEL_22;
  }
LABEL_23:
  if ( !KiSetVirtualHeteroClockIntervalRequestDpc.DpcData )
    KiSetVirtualHeteroClockIntervalRequestDpc.Number = KiClockTimerOwner + 2048;
  LOBYTE(v6) = KeInsertQueueDpc(&KiSetVirtualHeteroClockIntervalRequestDpc, 0LL, 0LL);
  return v6;
}
