/*
 * XREFs of SymCryptFatalEnvWindowsKernelmodeWin8_1nLater @ 0x14051AC34
 * Callers:
 *     SymCryptFatal @ 0x1405B1490 (SymCryptFatal.c)
 *     SymCryptCallbackRandom @ 0x1406A5864 (SymCryptCallbackRandom.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140493990 (xHalTimerWatchdogStop.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall __noreturn SymCryptFatalEnvWindowsKernelmodeWin8_1nLater(ULONG_PTR BugCheckParameter1)
{
  unsigned int v1; // ebx

  v1 = BugCheckParameter1;
  xHalTimerWatchdogStop();
  KeBugCheckEx(0x171u, v1, 0LL, 0LL, 0LL);
}
