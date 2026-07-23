/*
 * XREFs of KeUpdatePendingQosRequest @ 0x1402AD48C
 * Callers:
 *     KiCheckForPendingQosUpdate @ 0x1402AC93C (KiCheckForPendingQosUpdate.c)
 *     KeCheckAndApplyBamQos @ 0x1402ACA20 (KeCheckAndApplyBamQos.c)
 *     PpmPerfSetProcessorIdle @ 0x1404BF3F0 (PpmPerfSetProcessorIdle.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiSetNextClockTickDueTime @ 0x140317B60 (KiSetNextClockTickDueTime.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KiShouldRearmClockTimer @ 0x14043516C (KiShouldRearmClockTimer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1405C0728 (KiSetVirtualHeteroClockIntervalRequest.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall KeUpdatePendingQosRequest(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // rdx
  LARGE_INTEGER InterruptTimePrecise; // rsi
  __int64 v8; // r14
  char v9; // al
  signed __int32 v10; // eax
  char v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13; // [rsp+31h] [rbp-CFh] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  char v20[32]; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER *v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  int *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  __int64 *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  __int64 *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  int *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  char *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  char *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  char v37[32]; // [rsp+100h] [rbp+0h] BYREF
  int *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  char *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]

  v3 = 0;
  v4 = a1;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    v6 = 15LL;
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 15LL);
    }
    if ( (*(_DWORD *)(v4 + 236) & 0x100) != 0 )
    {
      if ( KiQosHysteresisTimerPeriod )
      {
        if ( KiClockTimerReducePreciseTimeQueries )
          InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
        else
          InterruptTimePrecise.QuadPart = 0LL;
        v8 = -(__int64)(unsigned int)KiQosHysteresisTimerPeriod;
        if ( !KiClockTimerReducePreciseTimeQueries )
          InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
        if ( (unsigned int)dword_140E07080 > 5 )
        {
          v17 = InterruptTimePrecise;
          v21 = &v17;
          v22 = 8LL;
          v23 = &v14;
          v14 = 6;
          v25 = &v18;
          v24 = 4LL;
          v18 = v8;
          v19 = -v8;
          v26 = 8LL;
          v27 = &v19;
          p_PerformanceCounter = &PerformanceCounter;
          v31 = &v15;
          v33 = &v12;
          v35 = &v13;
          v28 = 8LL;
          PerformanceCounter.QuadPart = InterruptTimePrecise.QuadPart - v8;
          v30 = 8LL;
          v15 = 0;
          v32 = 4LL;
          v12 = 0;
          v34 = 1LL;
          v13 = 1;
          v36 = 1LL;
          tlgWriteTransfer_EtwWriteTransfer(&dword_140E07080, &word_1400480C6, 0LL, 0LL, 10, v20);
        }
        LOBYTE(a3) = 1;
        v9 = *(_BYTE *)(v4 + 38404) & 0xFD;
        *(_QWORD *)(v4 + 38392) = InterruptTimePrecise.QuadPart - v8;
        *(_DWORD *)(v4 + 38400) = 0;
        *(_BYTE *)(v4 + 38404) = v9 | 1;
        if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))KiShouldRearmClockTimer)(
                                v4,
                                (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
                                a3) )
        {
          LOBYTE(v6) = 1;
          *(_DWORD *)(v4 + 38288) = 2;
          ((void (__fastcall *)(_QWORD, _QWORD))KiSetNextClockTickDueTime)(
            (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
            v6);
        }
      }
    }
    else
    {
      *(_BYTE *)(v4 + 38404) &= ~1u;
      if ( (unsigned int)dword_140E07080 > 5 )
      {
        v14 = 6;
        v39 = 4LL;
        v38 = &v14;
        v12 = 0;
        v40 = &v12;
        v41 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(&dword_140E07080, word_14004808A, 0LL, 0LL, 4, v37);
      }
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    }
    LOBYTE(v10) = CurrentIrql;
    __writecr8(CurrentIrql);
    return v10;
  }
  if ( (*(_DWORD *)(a1 + 236) & 0x100) != 0 )
  {
    v10 = _InterlockedIncrement(&KiPendingVirtualHeteroRequest);
    if ( v10 != 1 )
      return v10;
    if ( !*(_BYTE *)(a1 + 33) )
      goto LABEL_29;
LABEL_28:
    LOBYTE(a1) = v3;
    LOBYTE(v10) = KiSetVirtualHeteroClockIntervalRequest(a1);
    return v10;
  }
  v10 = _InterlockedExchangeAdd(&KiPendingVirtualHeteroRequest, 0xFFFFFFFF);
  if ( v10 != 1 )
    return v10;
  if ( *(_BYTE *)(a1 + 33) )
  {
    v3 = 1;
    goto LABEL_28;
  }
LABEL_29:
  if ( !KiSetVirtualHeteroClockIntervalRequestDpc.DpcData )
    KiSetVirtualHeteroClockIntervalRequestDpc.Number = KiClockTimerOwner + 2048;
  LOBYTE(v10) = KeInsertQueueDpc(&KiSetVirtualHeteroClockIntervalRequestDpc, 0LL, 0LL);
  return v10;
}
