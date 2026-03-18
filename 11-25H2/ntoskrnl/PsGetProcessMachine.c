/*
 * XREFs of PsGetProcessMachine @ 0x140A094F0
 * Callers:
 *     PspSelectMachineForProcess @ 0x140A09390 (PspSelectMachineForProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessMachine(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1772);
}
