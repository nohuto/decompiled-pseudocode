/*
 * XREFs of TppUpdateSubQueueTimer @ 0x180088FE0
 * Callers:
 *     TppWaitCompletion @ 0x18004C800 (TppWaitCompletion.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     TppSetTimer @ 0x180087CF0 (TppSetTimer.c)
 *     TppSingleTimerExpiration @ 0x180088760 (TppSingleTimerExpiration.c)
 *     TppCancelTimer @ 0x180088C90 (TppCancelTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     TppETWTimerSetNtTimer @ 0x1800891B8 (TppETWTimerSetNtTimer.c)
 *     TppETWTimerCancelNtTimer @ 0x180113660 (TppETWTimerCancelNtTimer.c)
 *     ZwCancelTimer2 @ 0x180161300 (ZwCancelTimer2.c)
 *     ZwSetTimer2 @ 0x180163840 (ZwSetTimer2.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

void __fastcall TppUpdateSubQueueTimer(__int64 a1, char a2)
{
  __int64 v3; // rcx
  LARGE_INTEGER v5; // r9
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
    v5 = *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 8) + 32LL);
    v6 = (*(_QWORD *)(v3 + 32) - v5.QuadPart) / 10000;
    if ( *(_QWORD *)a1 != v5.QuadPart || *(_DWORD *)(a1 + 112) != (_DWORD)v6 )
    {
      *(LARGE_INTEGER *)a1 = v5;
      Parameters.NoWakeTolerance = 10000LL * (unsigned int)v6;
      *(_DWORD *)(a1 + 112) = v6;
      if ( !a2 )
      {
        v7 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
        if ( v7 > v5.QuadPart )
          v5.QuadPart = 0LL;
        else
          v5.QuadPart = v7 - v5.QuadPart;
      }
      DueTime = v5;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v9 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v9 = 2147353478LL;
      if ( *(_BYTE *)v9 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))TppETWTimerSetNtTimer)(
          a1,
          (LARGE_INTEGER)v5.QuadPart,
          (unsigned int)v6);
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
