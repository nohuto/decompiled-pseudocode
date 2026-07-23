/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x1404F6278
 * Callers:
 *     KdInitSystem @ 0x140B77E30 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_140E37690;
}
