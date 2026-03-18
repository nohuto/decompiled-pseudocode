/*
 * XREFs of MmGetMaximumUserAddress @ 0x14043FB40
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumUserAddress()
{
  return *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].PrimaryGroup;
}
