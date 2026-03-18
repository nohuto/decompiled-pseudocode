/*
 * XREFs of KiSetClockTimerKTimerDeadlines @ 0x1402A04E0
 * Callers:
 *     KiSetClockInterval @ 0x14029F358 (KiSetClockInterval.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14029FDD0 (ExpUpdateTimerConfigurationWorker.c)
 *     KeClockInterruptNotify @ 0x14033A5E0 (KeClockInterruptNotify.c)
 *     KiResumeClockTimer @ 0x1404F5708 (KiResumeClockTimer.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B9944 (KeResumeClockTimerFromIdle.c)
 *     KiResetClockInterval @ 0x1405BA4D4 (KiResetClockInterval.c)
 *     KeInitializeClock @ 0x140C60350 (KeInitializeClock.c)
 * Callees:
 *     Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline @ 0x14029D018 (Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline.c)
 *     KiSetClockTimer @ 0x14029F85C (KiSetClockTimer.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

char __fastcall KiSetClockTimerKTimerDeadlines(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  int IsEnabledNoReportingNoInline; // eax
  int v8; // r12d
  __int64 InterruptTimePrecise; // rcx
  char v10; // r14
  __int64 v11; // rbx
  char v12; // al
  char result; // al
  char v14; // [rsp+40h] [rbp-C0h] BYREF
  char v15; // [rsp+41h] [rbp-BFh] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  char v22[32]; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  int *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  __int64 *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  __int64 *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  __int64 *v31; // [rsp+D0h] [rbp-30h]
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
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v18);
  if ( v4 > 0 )
    v11 = v4;
  else
    v11 = InterruptTimePrecise - v4;
  if ( (unsigned int)dword_140E070B8 > 5 )
  {
    v19 = InterruptTimePrecise;
    v23 = &v19;
    v15 = 0;
    v25 = &v16;
    v24 = 8LL;
    v27 = &v20;
    v16 = 1;
    v26 = 4LL;
    v21 = v11 - InterruptTimePrecise;
    v20 = v4;
    v29 = &v21;
    v31 = &v18;
    v33 = &v17;
    v35 = &v14;
    v37 = &v15;
    v28 = 8LL;
    v30 = 8LL;
    v18 = v11;
    v32 = 8LL;
    v17 = v8;
    v34 = 4LL;
    v14 = v10;
    v36 = 1LL;
    v38 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140E070B8, word_140047B72, 0LL, 0LL, 10, v22);
  }
  v12 = *(_BYTE *)(a1 + 38324);
  *(_QWORD *)(a1 + 38312) = v11;
  result = v12 & 0xFD;
  *(_DWORD *)(a1 + 38320) = v8;
  *(_BYTE *)(a1 + 38324) = result | (2 * v10) | 1;
  if ( a3 )
  {
    if ( KiClockOwnerOneShotRequest )
      return KiSetClockTimer(a1, a2, KiClockOwnerOneShotRequest, 0, 2, v10, 0);
  }
  return result;
}
