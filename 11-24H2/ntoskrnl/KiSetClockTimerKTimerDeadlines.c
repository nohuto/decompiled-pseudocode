/*
 * XREFs of KiSetClockTimerKTimerDeadlines @ 0x140317E50
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x140317740 (ExpUpdateTimerConfigurationWorker.c)
 *     KeClockInterruptNotify @ 0x140319AC0 (KeClockInterruptNotify.c)
 *     KiSetClockInterval @ 0x140463DB4 (KiSetClockInterval.c)
 *     KiResumeClockTimer @ 0x1404F3008 (KiResumeClockTimer.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B6F84 (KeResumeClockTimerFromIdle.c)
 *     KiResetClockInterval @ 0x1405B7B04 (KiResetClockInterval.c)
 *     KeInitializeClock @ 0x140C624A0 (KeInitializeClock.c)
 * Callees:
 *     Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline @ 0x1402ABB08 (Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KiSetClockTimer @ 0x14043504C (KiSetClockTimer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall KiSetClockTimerKTimerDeadlines(__int64 a1, LARGE_INTEGER a2, char a3)
{
  __int64 v4; // rdi
  int IsEnabledNoReportingNoInline; // eax
  int v8; // r12d
  LARGE_INTEGER InterruptTimePrecise; // rcx
  char v10; // r14
  LARGE_INTEGER v11; // rbx
  char v12; // al
  char result; // al
  char v14; // [rsp+40h] [rbp-C0h] BYREF
  char v15; // [rsp+41h] [rbp-BFh] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  LONGLONG v21; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  int *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  __int64 *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  LONGLONG *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  int *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  char *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  char *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]

  v4 = KiLastPseudoHrTimerExpiration + KePseudoHrTimeIncrement;
  IsEnabledNoReportingNoInline = Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline();
  v8 = KeMinimumIncrement;
  InterruptTimePrecise = a2;
  v10 = IsEnabledNoReportingNoInline == 0;
  if ( !KiClockTimerReducePreciseTimeQueries )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  if ( v4 > 0 )
    v11.QuadPart = v4;
  else
    v11.QuadPart = InterruptTimePrecise.QuadPart - v4;
  if ( (unsigned int)dword_140E07080 > 5 )
  {
    v19 = InterruptTimePrecise;
    v23 = &v19;
    v15 = 0;
    v25 = &v16;
    v24 = 8LL;
    v27 = &v20;
    v16 = 1;
    v26 = 4LL;
    v21 = v11.QuadPart - InterruptTimePrecise.QuadPart;
    v20 = v4;
    v29 = &v21;
    p_PerformanceCounter = &PerformanceCounter;
    v33 = &v17;
    v35 = &v14;
    v37 = &v15;
    v28 = 8LL;
    v30 = 8LL;
    PerformanceCounter = v11;
    v32 = 8LL;
    v17 = v8;
    v34 = 4LL;
    v14 = v10;
    v36 = 1LL;
    v38 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07080,
      (unsigned __int8 *)&word_1400480C6,
      0LL,
      0LL,
      0xAu,
      &v22);
  }
  v12 = *(_BYTE *)(a1 + 38324);
  *(LARGE_INTEGER *)(a1 + 38312) = v11;
  result = v12 & 0xFD;
  *(_DWORD *)(a1 + 38320) = v8;
  *(_BYTE *)(a1 + 38324) = result | (2 * v10) | 1;
  if ( a3 )
  {
    if ( KiClockOwnerOneShotRequest )
      return KiSetClockTimer(a1, a2.LowPart, KiClockOwnerOneShotRequest, 0, 2, v10, 0);
  }
  return result;
}
