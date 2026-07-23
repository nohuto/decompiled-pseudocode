/*
 * XREFs of TppUpdateSubQueueTimer @ 0x18003FA60
 * Callers:
 *     TpSetTimerEx @ 0x18003E670 (TpSetTimerEx.c)
 *     TppSetTimer @ 0x18003EB00 (TppSetTimer.c)
 *     TppSingleTimerExpiration @ 0x18003F720 (TppSingleTimerExpiration.c)
 *     TppCancelTimer @ 0x18003FCF0 (TppCancelTimer.c)
 *     TppWaitCompletion @ 0x180041270 (TppWaitCompletion.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     TppETWTimerSetNtTimer @ 0x18003EFC0 (TppETWTimerSetNtTimer.c)
 *     TppETWTimerCancelNtTimer @ 0x18011B770 (TppETWTimerCancelNtTimer.c)
 *     ZwCancelTimer2 @ 0x1801644D0 (ZwCancelTimer2.c)
 *     ZwSetTimer2 @ 0x180166A10 (ZwSetTimer2.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

void __fastcall TppUpdateSubQueueTimer(unsigned __int64 a1, char a2)
{
  __int64 v3; // rcx
  signed __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  LARGE_INTEGER DueTime; // [rsp+20h] [rbp-28h] BYREF
  _T2_SET_PARAMETERS_V0 Parameters; // [rsp+28h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  DueTime.QuadPart = 0LL;
  *(_QWORD *)&Parameters.Version = 0LL;
  if ( v3 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
    v6 = (*(_QWORD *)(v3 + 32) - v5) / 10000;
    if ( *(_QWORD *)a1 != v5 || *(_DWORD *)(a1 + 112) != (_DWORD)v6 )
    {
      *(_QWORD *)a1 = v5;
      Parameters.NoWakeTolerance = 10000LL * (unsigned int)v6;
      *(_DWORD *)(a1 + 112) = v6;
      if ( !a2 )
      {
        v7 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
        if ( v7 > v5 )
          v5 = 0LL;
        else
          v5 = v7 - v5;
      }
      DueTime.QuadPart = v5;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v9 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v9 = 2147353478LL;
      if ( *(_BYTE *)v9 )
        TppETWTimerSetNtTimer(a1, v5, v6);
      ZwSetTimer2(*(HANDLE *)(a1 + 24), &DueTime, 0LL, &Parameters);
    }
  }
  else if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v10 = 2147353478LL;
    if ( *(_BYTE *)v10 )
      TppETWTimerCancelNtTimer(a1);
    ZwCancelTimer2(*(HANDLE *)(a1 + 24), 0LL);
  }
}
