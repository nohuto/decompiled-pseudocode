/*
 * XREFs of MiRefillPurgedExtents @ 0x1404276E4
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiDereferenceControlArea @ 0x14042777C (MiDereferenceControlArea.c)
 *     MiAllocateFileExtents @ 0x140AA0BF4 (MiAllocateFileExtents.c)
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
