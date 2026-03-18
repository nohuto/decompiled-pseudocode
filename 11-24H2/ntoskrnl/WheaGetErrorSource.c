/*
 * XREFs of WheaGetErrorSource @ 0x14042E2D0
 * Callers:
 *     WheaRemoveErrorSourceDeviceDriver @ 0x1407C6FD0 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     WheapGetErrorSource @ 0x14042E7A8 (WheapGetErrorSource.c)
 */

__int64 __fastcall WheaGetErrorSource(unsigned int a1)
{
  __int64 ErrorSource; // rax

  ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, a1);
  return (ErrorSource + 96) & -(__int64)(ErrorSource != 0);
}
