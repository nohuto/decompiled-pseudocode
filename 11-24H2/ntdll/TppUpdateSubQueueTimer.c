/*
 * XREFs of TppUpdateSubQueueTimer @ 0x18006C700
 * Callers:
 *     TppWaitCompletion @ 0x18001FE00 (TppWaitCompletion.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 *     TppSetTimer @ 0x18006B410 (TppSetTimer.c)
 *     TppSingleTimerExpiration @ 0x18006BE80 (TppSingleTimerExpiration.c)
 *     TppCancelTimer @ 0x18006C3B0 (TppCancelTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     TppETWTimerSetNtTimer @ 0x18006C8D8 (TppETWTimerSetNtTimer.c)
 *     TppETWTimerCancelNtTimer @ 0x1801186F0 (TppETWTimerCancelNtTimer.c)
 *     ZwCancelTimer2 @ 0x180162F40 (ZwCancelTimer2.c)
 *     ZwSetTimer2 @ 0x180165480 (ZwSetTimer2.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

void __fastcall TppUpdateSubQueueTimer(__int64 a1, char a2)
{
  __int64 v3; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v12[2]; // [rsp+28h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v11 = 0LL;
  v12[0] = 0LL;
  if ( v3 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
    v6 = (*(_QWORD *)(v3 + 32) - v5) / 10000;
    if ( *(_QWORD *)a1 != v5 || *(_DWORD *)(a1 + 112) != (_DWORD)v6 )
    {
      *(_QWORD *)a1 = v5;
      v12[1] = 10000LL * (unsigned int)v6;
      *(_DWORD *)(a1 + 112) = v6;
      if ( !a2 )
      {
        v7 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
        if ( v7 > v5 )
          v5 = 0LL;
        else
          v5 = v7 - v5;
      }
      v11 = v5;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v9 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v9 = 2147353478LL;
      if ( *(_BYTE *)v9 )
        TppETWTimerSetNtTimer(a1, v5, (unsigned int)v6);
      ZwSetTimer2(*(_QWORD *)(a1 + 24), &v11, 0LL, v12);
    }
  }
  else if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v10 = 2147353478LL;
    if ( *(_BYTE *)v10 )
      TppETWTimerCancelNtTimer(a1);
    ZwCancelTimer2(*(_QWORD *)(a1 + 24), 0LL);
  }
}
