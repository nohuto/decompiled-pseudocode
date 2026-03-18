/*
 * XREFs of KiCancelClockTimer @ 0x140469F60
 * Callers:
 *     KiResetClockIntervalOneShot @ 0x14029EB4C (KiResetClockIntervalOneShot.c)
 *     PpmIdleExecuteTransition @ 0x1403B4CA0 (PpmIdleExecuteTransition.c)
 *     KiCancelClockTimerKTimerDeadlines @ 0x1405BA1B8 (KiCancelClockTimerKTimerDeadlines.c)
 * Callees:
 *     KiShouldRearmClockTimer @ 0x14029F97C (KiShouldRearmClockTimer.c)
 *     KiSetNextClockTickDueTime @ 0x1402A01F0 (KiSetNextClockTickDueTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

char __fastcall KiCancelClockTimer(__int64 a1, int a2, char a3)
{
  char result; // al
  __int64 InterruptTimePrecise; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // [rsp+30h] [rbp-9h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp+7h] BYREF
  unsigned __int64 *v12; // [rsp+60h] [rbp+27h]
  int v13; // [rsp+68h] [rbp+2Fh]
  int v14; // [rsp+6Ch] [rbp+33h]
  char *v15; // [rsp+70h] [rbp+37h]
  int v16; // [rsp+78h] [rbp+3Fh]
  int v17; // [rsp+7Ch] [rbp+43h]

  result = 2 * a2;
  *(_BYTE *)(a1 + 16LL * a2 + 38308) &= ~1u;
  if ( (unsigned int)dword_140E070B8 > 5 )
  {
    v14 = 0;
    v17 = 0;
    v12 = &v10;
    LODWORD(v10) = a2;
    v15 = &v9;
    v13 = 4;
    v9 = a3;
    v16 = 1;
    result = tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E070B8,
               (unsigned __int8 *)word_140047BFA,
               0LL,
               0LL,
               4u,
               &v11);
  }
  if ( a3 )
  {
    if ( KiClockTimerReducePreciseTimeQueries )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v10);
    else
      InterruptTimePrecise = 0LL;
    result = KiShouldRearmClockTimer(a1, InterruptTimePrecise, 1);
    if ( result )
    {
      LOBYTE(v7) = 1;
      *(_DWORD *)(a1 + 38288) = 2;
      return KiSetNextClockTickDueTime(InterruptTimePrecise, v7, v8);
    }
  }
  return result;
}
