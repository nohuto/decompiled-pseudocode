/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x1404F6F78
 * Callers:
 *     KdInitSystem @ 0x140B65E30 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_140E37310;
}
