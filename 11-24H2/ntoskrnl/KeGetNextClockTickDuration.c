/*
 * XREFs of KeGetNextClockTickDuration @ 0x1405B6610
 * Callers:
 *     HalpTimerClockPowerChange @ 0x140544330 (HalpTimerClockPowerChange.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

LONGLONG __fastcall KeGetNextClockTickDuration(bool *a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int8 ClockActive; // dl
  LARGE_INTEGER NextTickDueTime; // rdi
  LONGLONG v5; // rbx
  LARGE_INTEGER InterruptTimePrecise; // rax
  bool v7; // al
  bool v8; // zf
  bool v10; // [rsp+38h] [rbp-39h] BYREF
  bool v11; // [rsp+39h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp-31h] BYREF
  LONGLONG v13; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+58h] [rbp-19h] BYREF
  bool *v15; // [rsp+78h] [rbp+7h]
  int v16; // [rsp+80h] [rbp+Fh]
  int v17; // [rsp+84h] [rbp+13h]
  LONGLONG *v18; // [rsp+88h] [rbp+17h]
  int v19; // [rsp+90h] [rbp+1Fh]
  int v20; // [rsp+94h] [rbp+23h]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+98h] [rbp+27h]
  int v22; // [rsp+A0h] [rbp+2Fh]
  int v23; // [rsp+A4h] [rbp+33h]
  bool *v24; // [rsp+A8h] [rbp+37h]
  int v25; // [rsp+B0h] [rbp+3Fh]
  int v26; // [rsp+B4h] [rbp+43h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( KiClockTimerPerCpuTickScheduling )
  {
    ClockActive = CurrentPrcb->ClockTimerState.ClockActive;
    if ( ClockActive )
      NextTickDueTime = (LARGE_INTEGER)CurrentPrcb->ClockTimerState.NextTickDueTime;
    else
      NextTickDueTime.QuadPart = 0LL;
    v5 = 0LL;
    *a1 = ClockActive == 0;
    if ( !ClockActive )
      goto LABEL_10;
  }
  else
  {
    NextTickDueTime.QuadPart = KiClockTimerNextTickTime;
    v5 = 0LL;
    *a1 = 0;
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  if ( NextTickDueTime.QuadPart > (unsigned __int64)InterruptTimePrecise.QuadPart )
    v5 = NextTickDueTime.QuadPart - InterruptTimePrecise.QuadPart;
LABEL_10:
  if ( (unsigned int)dword_140E07080 > 5 )
  {
    v7 = *a1;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v10 = v7;
    v16 = 1;
    v15 = &v10;
    v18 = &v13;
    p_PerformanceCounter = &PerformanceCounter;
    v19 = 8;
    v22 = 8;
    v13 = v5;
    PerformanceCounter = NextTickDueTime;
    v8 = (_DWORD)KiClockTimerOwner == KeGetPcr()->Prcb.Number;
    v24 = &v11;
    v11 = v8;
    v25 = 1;
    v26 = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07080, (unsigned __int8 *)&word_14004814E, 0LL, 0LL, 6u, &v14);
  }
  return v5;
}
