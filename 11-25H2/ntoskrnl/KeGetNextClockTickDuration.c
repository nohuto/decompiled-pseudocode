/*
 * XREFs of KeGetNextClockTickDuration @ 0x1405B5190
 * Callers:
 *     HalpTimerClockPowerChange @ 0x140544180 (HalpTimerClockPowerChange.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall KeGetNextClockTickDuration(bool *a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int8 ClockActive; // dl
  unsigned __int64 NextTickDueTime; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 InterruptTimePrecise; // rax
  bool v7; // al
  bool v8; // zf
  bool v10; // [rsp+38h] [rbp-39h] BYREF
  bool v11; // [rsp+39h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+58h] [rbp-19h] BYREF
  bool *v15; // [rsp+78h] [rbp+7h]
  int v16; // [rsp+80h] [rbp+Fh]
  int v17; // [rsp+84h] [rbp+13h]
  unsigned __int64 *v18; // [rsp+88h] [rbp+17h]
  int v19; // [rsp+90h] [rbp+1Fh]
  int v20; // [rsp+94h] [rbp+23h]
  unsigned __int64 *v21; // [rsp+98h] [rbp+27h]
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
      NextTickDueTime = CurrentPrcb->ClockTimerState.NextTickDueTime;
    else
      NextTickDueTime = 0LL;
    v5 = 0LL;
    *a1 = ClockActive == 0;
    if ( !ClockActive )
      goto LABEL_10;
  }
  else
  {
    NextTickDueTime = KiClockTimerNextTickTime;
    v5 = 0LL;
    *a1 = 0;
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v12);
  if ( NextTickDueTime > InterruptTimePrecise )
    v5 = NextTickDueTime - InterruptTimePrecise;
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
    v21 = &v12;
    v19 = 8;
    v22 = 8;
    v13 = v5;
    v12 = NextTickDueTime;
    v8 = (_DWORD)KiClockTimerOwner == KeGetPcr()->Prcb.Number;
    v24 = &v11;
    v11 = v8;
    v25 = 1;
    v26 = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07080,
      (unsigned __int8 *)&dword_140047564,
      0LL,
      0LL,
      6u,
      &v14);
  }
  return v5;
}
