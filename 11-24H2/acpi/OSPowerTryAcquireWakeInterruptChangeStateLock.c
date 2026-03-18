/*
 * XREFs of OSPowerTryAcquireWakeInterruptChangeStateLock @ 0x1400344A0
 * Callers:
 *     ACPIAssociateWakeInterrupt @ 0x140033F48 (ACPIAssociateWakeInterrupt.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x140034330 (ACPIDelayedFreeWakeInterrupt.c)
 * Callees:
 *     <none>
 */

bool __fastcall OSPowerTryAcquireWakeInterruptChangeStateLock(__int64 a1)
{
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  return KeWaitForSingleObject((PVOID)(a1 + 64), Executive, 0, 0, &Timeout) == 0;
}
