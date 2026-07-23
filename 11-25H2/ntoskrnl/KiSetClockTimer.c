/*
 * XREFs of KiSetClockTimer @ 0x140274458
 * Callers:
 *     KiUpdateTime @ 0x140272C80 (KiUpdateTime.c)
 *     KiUpdateRunTime @ 0x140273230 (KiUpdateRunTime.c)
 *     KiSetClockIntervalOneShot @ 0x140274DA0 (KiSetClockIntervalOneShot.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140275710 (KiTransitionSchedulingGroupGeneration.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140277BC0 (KiSetClockTimerKTimerDeadlines.c)
 *     KeUpdatePendingQosRequest @ 0x1403E9444 (KeUpdatePendingQosRequest.c)
 *     PpmIdleExecuteTransition @ 0x1404E92D8 (PpmIdleExecuteTransition.c)
 *     KiResumeClockTimer @ 0x1404F2E04 (KiResumeClockTimer.c)
 *     KePrepareClockTimerForIdle @ 0x1405B52DC (KePrepareClockTimerForIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B5B04 (KeResumeClockTimerFromIdle.c)
 *     KeInitializeClock @ 0x140C4ECE8 (KeInitializeClock.c)
 * Callees:
 *     KiShouldRearmClockTimer @ 0x140276050 (KiShouldRearmClockTimer.c)
 *     KiSetNextClockTickDueTime @ 0x140277974 (KiSetNextClockTickDueTime.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall KiSetClockTimer(__int64 a1, LARGE_INTEGER a2, __int64 a3, int a4, int a5, char a6, char a7)
{
  int v7; // eax
  __int64 v9; // r8
  LARGE_INTEGER v12; // r15
  char result; // al
  __int64 v14; // rdx
  LARGE_INTEGER InterruptTimePrecise; // rax
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17; // [rsp+31h] [rbp-CFh] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h]
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  LONGLONG v24; // [rsp+58h] [rbp-A8h] BYREF
  char v25[32]; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  int *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  __int64 *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  LONGLONG *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  int *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  char *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  char *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]

  v7 = a5;
  v19 = a4;
  v18 = a5;
  v9 = 0LL;
  if ( !KiClockTimerReducePreciseTimeQueries )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    a4 = v19;
    a2 = InterruptTimePrecise;
    v7 = v18;
  }
  v12.QuadPart = a2.QuadPart - a3;
  if ( a3 > 0 )
    v12.QuadPart = a3;
  if ( (unsigned int)dword_140E07080 > 5 )
  {
    v18 = v7;
    v26 = &v22;
    v28 = &v18;
    v20 = a4;
    v30 = &v23;
    v22 = a2;
    v27 = 8LL;
    v24 = v12.QuadPart - a2.QuadPart;
    v29 = 4LL;
    v32 = &v24;
    v23 = a3;
    p_PerformanceCounter = &PerformanceCounter;
    v36 = &v20;
    v38 = &v16;
    v40 = &v17;
    v31 = 8LL;
    v33 = 8LL;
    PerformanceCounter = v12;
    v35 = 8LL;
    v37 = 4LL;
    v16 = a6;
    v39 = 1LL;
    v17 = a7;
    v41 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140E07080, byte_1400475BB, 0LL, 0LL, 10, v25);
  }
  *(_DWORD *)(a1 + 16LL * a5 + 38304) = v19;
  result = *(_BYTE *)(a1 + 16LL * a5 + 38308) | 1;
  *(LARGE_INTEGER *)(a1 + 16LL * a5 + 38296) = v12;
  *(_BYTE *)(a1 + 16LL * a5 + 38308) = result ^ (result ^ (2 * a6)) & 2;
  if ( a7 )
  {
    LOBYTE(v9) = 1;
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))KiShouldRearmClockTimer)(
               a1,
               (LARGE_INTEGER)a2.QuadPart,
               v9);
    if ( result )
    {
      LOBYTE(v14) = 1;
      *(_DWORD *)(a1 + 38288) = 2;
      return ((__int64 (__fastcall *)(_QWORD, _QWORD))KiSetNextClockTickDueTime)((LARGE_INTEGER)a2.QuadPart, v14);
    }
  }
  return result;
}
