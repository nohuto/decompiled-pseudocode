/*
 * XREFs of MiRefillPurgedExtents @ 0x14036F3FC
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiPfPrepareReadList @ 0x1409557EC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiDereferenceControlArea @ 0x14036F494 (MiDereferenceControlArea.c)
 *     MiAllocateFileExtents @ 0x140AA5B84 (MiAllocateFileExtents.c)
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
