/*
 * XREFs of KiSetClockTimer @ 0x14043504C
 * Callers:
 *     KiUpdateRunTime @ 0x1402AA8E0 (KiUpdateRunTime.c)
 *     KiSetClockIntervalOneShot @ 0x1402AC34C (KiSetClockIntervalOneShot.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1402DBCD0 (KiTransitionSchedulingGroupGeneration.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140317E50 (KiSetClockTimerKTimerDeadlines.c)
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 *     KiResumeClockTimer @ 0x1404F3008 (KiResumeClockTimer.c)
 *     KePrepareClockTimerForIdle @ 0x1405B675C (KePrepareClockTimerForIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B6F84 (KeResumeClockTimerFromIdle.c)
 *     KeInitializeClock @ 0x140C624A0 (KeInitializeClock.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiSetNextClockTickDueTime @ 0x140317B60 (KiSetNextClockTickDueTime.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KiShouldRearmClockTimer @ 0x14043516C (KiShouldRearmClockTimer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall KiSetClockTimer(__int64 a1, LARGE_INTEGER a2, __int64 a3, int a4, int a5, char a6, char a7)
{
  int v7; // eax
  __int64 v9; // r8
  LARGE_INTEGER v12; // r15
  char result; // al
  LARGE_INTEGER InterruptTimePrecise; // rax
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+31h] [rbp-CFh] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h]
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  LONGLONG v23; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER *v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  int *v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  __int64 *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  LONGLONG *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  int *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  char *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  char *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]

  v7 = a5;
  v18 = a4;
  v17 = a5;
  v9 = 0LL;
  if ( !KiClockTimerReducePreciseTimeQueries )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    a4 = v18;
    a2 = InterruptTimePrecise;
    v7 = v17;
  }
  v12.QuadPart = a2.QuadPart - a3;
  if ( a3 > 0 )
    v12.QuadPart = a3;
  if ( (unsigned int)dword_140E07080 > 5 )
  {
    v17 = v7;
    v25 = &v21;
    v27 = &v17;
    v19 = a4;
    v29 = &v22;
    v21 = a2;
    v26 = 8LL;
    v23 = v12.QuadPart - a2.QuadPart;
    v28 = 4LL;
    v31 = &v23;
    v22 = a3;
    p_PerformanceCounter = &PerformanceCounter;
    v35 = &v19;
    v37 = &v15;
    v39 = &v16;
    v30 = 8LL;
    v32 = 8LL;
    PerformanceCounter = v12;
    v34 = 8LL;
    v36 = 4LL;
    v15 = a6;
    v38 = 1LL;
    v16 = a7;
    v40 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07080,
      (unsigned __int8 *)&word_1400480C6,
      0LL,
      0LL,
      0xAu,
      &v24);
  }
  *(_DWORD *)(a1 + 16LL * a5 + 38304) = v18;
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
      *(_DWORD *)(a1 + 38288) = 2;
      return KiSetNextClockTickDueTime(a2, 1u);
    }
  }
  return result;
}
