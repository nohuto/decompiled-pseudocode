/*
 * XREFs of EtwpGetCpuSpeed @ 0x1800F77D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall EtwpGetCpuSpeed(_DWORD *a1)
{
  return EtwpGetCpuSpeedFromRegistry(a1);
}
