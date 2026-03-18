/*
 * XREFs of MmGetMaximumUserAddress @ 0x14043F660
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumUserAddress()
{
  return *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].PrimaryGroup;
}
