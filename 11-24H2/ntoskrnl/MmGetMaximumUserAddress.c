/*
 * XREFs of MmGetMaximumUserAddress @ 0x140435790
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumUserAddress()
{
  return *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].PrimaryGroup;
}
