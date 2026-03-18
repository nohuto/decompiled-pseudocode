/*
 * XREFs of KiLogClockIncrementUpdate @ 0x14045D324
 * Callers:
 *     KiRestoreClockTickRate @ 0x1404C89B0 (KiRestoreClockTickRate.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B94A0 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 */

char __fastcall KiLogClockIncrementUpdate(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 v6; // rbx
  char result; // al

  v6 = 32LL * *(unsigned int *)(a1 + 38416);
  *(_DWORD *)(a1 + 38416) = ((unsigned __int8)*(_DWORD *)(a1 + 38416) + 1) & 0xF;
  *(_DWORD *)(v6 + a1 + 39064) = a4;
  *(_DWORD *)(v6 + a1 + 39068) = a3;
  *(_QWORD *)(v6 + a1 + 39072) = a2;
  *(LARGE_INTEGER *)(v6 + a1 + 39080) = KeQueryPerformanceCounter(0LL);
  result = a5;
  *(_BYTE *)(v6 + a1 + 39088) = a5;
  return result;
}
