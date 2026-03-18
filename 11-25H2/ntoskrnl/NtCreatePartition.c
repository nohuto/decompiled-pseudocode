/*
 * XREFs of NtCreatePartition @ 0x14076ADF0
 * Callers:
 *     <none>
 * Callees:
 *     PsCreatePartition @ 0x14076AEE0 (PsCreatePartition.c)
 */

__int64 __fastcall NtCreatePartition(int a1, int a2, int a3, int a4)
{
  return PsCreatePartition(a1, a2, a3, a4, KeGetCurrentThread()->PreviousMode, 0);
}
