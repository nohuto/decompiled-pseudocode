/*
 * XREFs of HalpTimerInitializeClock @ 0x1405445B4
 * Callers:
 *     HalpTimerInitSystem @ 0x1405387E0 (HalpTimerInitSystem.c)
 *     HalpTimerInitializeClock @ 0x1405445B4 (HalpTimerInitializeClock.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     HalpSetTimer @ 0x140375A30 (HalpSetTimer.c)
 *     HalpTimerSetProblemEx @ 0x1404F71C4 (HalpTimerSetProblemEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpTimerInitializeClock @ 0x1405445B4 (HalpTimerInitializeClock.c)
 *     HalpTimerConfigureInterrupt @ 0x140544C40 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerUnmapInterrupt @ 0x1405462D0 (HalpTimerUnmapInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x140558090 (HalpInterruptSetIdtEntry.c)
 */

__int64 __fastcall HalpTimerInitializeClock(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _DWORD *v4; // rbx
  int v5; // r8d
  int v6; // ecx
  int v7; // r9d
  int v8; // r8d
  int v9; // r9d
  int v10; // r10d
  unsigned __int64 v11; // rax
  unsigned int i; // edi
  int v13; // eax
  __int128 v15; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0LL;
  v4 = (_DWORD *)HalpClockTimer;
  v15 = 0LL;
  HalpInterruptSetIdtEntry(210, (unsigned int)HalpTimerClockIpiRoutine, 13, a4, -3LL);
  LOBYTE(v5) = 13;
  v6 = *(_DWORD *)KiGlobalState;
  *((_QWORD *)&v15 + 1) = (unsigned __int16)(*(_DWORD *)KiGlobalState >> 6);
  *(_QWORD *)&v15 = 1LL << (v6 & 0x3F);
  v10 = HalpTimerConfigureInterrupt(
          (_DWORD)v4,
          209,
          v5,
          v7,
          -3LL,
          0,
          (__int64)&v15,
          (__int64)HalpTimerClockInterruptStub);
  if ( v10 < 0 )
    goto LABEL_6;
  if ( HalpAlwaysOnTimer )
  {
    LOBYTE(v8) = 13;
    v10 = HalpTimerConfigureInterrupt(
            HalpAlwaysOnTimer,
            211,
            v8,
            v9,
            -3LL,
            4,
            (__int64)&v15,
            (__int64)HalpTimerAlwaysOnClockInterrupt);
    if ( v10 < 0 )
      goto LABEL_6;
  }
  if ( (v4[56] & 0x50) == 0 )
  {
    v10 = -1073741637;
    goto LABEL_6;
  }
  v10 = HalpSetTimer((__int64)v4, 2u, 0x2625AuLL, 1, &v16);
  if ( v10 < 0 )
    goto LABEL_6;
  v4[16] = 0;
  v11 = __readcr2();
  __writecr2(v11);
  for ( i = 0; ; i += 10 )
  {
    v13 = v4[16];
    if ( i >= 0xBB8 )
      break;
    if ( v13 )
      return 0;
    KeStallExecutionProcessor(0x2710u);
  }
  if ( v13 )
    return 0;
  if ( (v4[46] & 0x10) != 0 )
  {
    v4[56] &= ~0x400u;
    if ( (v4[56] & 0xF00) != 0 )
    {
      HalpTimerUnmapInterrupt(v4, 209LL, 0LL, 0LL);
      HalpTimerInitializeClock();
    }
  }
  HalpTimerSetProblemEx((__int64)v4, 25, 0, (__int64)"minkernel\\hals\\lib\\timers\\common\\clockint.c", 0x113u);
  if ( v10 < 0 )
LABEL_6:
    KeBugCheckEx(0x5Cu, 0x110uLL, (ULONG_PTR)v4, HalpTimerLastProblem, v10);
  return (unsigned int)v10;
}
