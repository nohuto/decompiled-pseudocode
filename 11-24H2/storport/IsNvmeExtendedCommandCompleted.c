/*
 * XREFs of IsNvmeExtendedCommandCompleted @ 0x1400BE974
 * Callers:
 *     WaitForNVMeCommandCompleteWithCustomTimeout @ 0x1400BFF70 (WaitForNVMeCommandCompleteWithCustomTimeout.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsNvmeExtendedCommandCompleted(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)a1 + 4256LL) & 0x4000) != 0 && (*(_DWORD *)(*(_QWORD *)a1 + 4256LL) & 8) == 0;
}
