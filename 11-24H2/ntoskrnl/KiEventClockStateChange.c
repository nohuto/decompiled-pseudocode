/*
 * XREFs of KiEventClockStateChange @ 0x14044E99C
 * Callers:
 *     KeClockInterruptNotify @ 0x140319AC0 (KeClockInterruptNotify.c)
 *     KiResumeClockTimer @ 0x1404F3008 (KiResumeClockTimer.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B6AE0 (KePrepareClockTimerForPlatformIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B6F84 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KiEventClockStateChange(int a1, char a2, _QWORD *a3, __int64 *a4)
{
  int v4; // ecx
  __int64 result; // rax
  __int128 v6; // [rsp+30h] [rbp-30h] BYREF
  __int64 v7; // [rsp+40h] [rbp-20h]
  __int128 *v8; // [rsp+48h] [rbp-18h] BYREF
  int v9; // [rsp+50h] [rbp-10h]
  int v10; // [rsp+54h] [rbp-Ch]

  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v7 = 0LL;
    v6 = 0LL;
    LOBYTE(v6) = a1;
    BYTE1(v6) = a2;
    if ( a1 && (v4 = a1 - 1) != 0 )
    {
      if ( v4 == 1 )
        *((_QWORD *)&v6 + 1) = KiClockTimerNextTickTime;
    }
    else
    {
      *((_QWORD *)&v6 + 1) = *a3;
      v7 = *a4;
    }
    v10 = 0;
    v8 = &v6;
    v9 = 24;
    return EtwTraceKernelEvent((int)&v8, 1, 0x40100000u, 3927, 1538);
  }
  return result;
}
