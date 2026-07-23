/*
 * XREFs of EtwpGetCpuSpeed @ 0x1800F1F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __fastcall EtwpGetCpuSpeed(_DWORD *a1)
{
  return EtwpGetCpuSpeedFromRegistry(a1);
}
