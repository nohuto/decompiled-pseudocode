/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x1404F8998
 * Callers:
 *     KdInitSystem @ 0x140B75E30 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_140E37550;
}
