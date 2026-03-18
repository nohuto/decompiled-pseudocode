/*
 * XREFs of MiRefillPurgedExtents @ 0x14046FCD0
 * Callers:
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDereferenceControlArea @ 0x14046FD68 (MiDereferenceControlArea.c)
 *     MiAllocateFileExtents @ 0x140AA0C34 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiRefillPurgedExtents(__int64 *BugCheckParameter2, __int64 a2, int a3)
{
  __int64 v3; // rbp
  KIRQL v6; // al
  unsigned int FileExtents; // ebx

  v3 = *BugCheckParameter2;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  ++*(_QWORD *)(v3 + 40);
  ++*(_QWORD *)(v3 + 48);
  MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v6);
  FileExtents = MiAllocateFileExtents((ULONG_PTR)BugCheckParameter2, 2, a3);
  MiDereferenceControlArea(v3);
  return FileExtents;
}
