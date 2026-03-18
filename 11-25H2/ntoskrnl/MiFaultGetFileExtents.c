/*
 * XREFs of MiFaultGetFileExtents @ 0x14046FAA0
 * Callers:
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 * Callees:
 *     MiGetSessionIdForVa @ 0x140208E10 (MiGetSessionIdForVa.c)
 *     MiFreeInPageSupportBlock @ 0x14023B4B0 (MiFreeInPageSupportBlock.c)
 *     MiReleaseFaultState @ 0x1402B9970 (MiReleaseFaultState.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSharedProtos @ 0x140322970 (MiGetSharedProtos.c)
 *     MiRetainSubsection @ 0x14046FBAC (MiRetainSubsection.c)
 *     MiReleaseFaultCharges @ 0x14046FC10 (MiReleaseFaultCharges.c)
 *     MiDereferenceControlArea @ 0x14046FD68 (MiDereferenceControlArea.c)
 *     MiAllocateFileExtents @ 0x140AA0C34 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiFaultGetFileExtents(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rsi
  __int64 v5; // r14
  unsigned int SessionIdForVa; // r15d
  unsigned int FileExtents; // ebx

  v2 = *(_QWORD *)(a2 + 208);
  v5 = *(_QWORD *)v2;
  if ( (*(_DWORD *)(v2 + 32) & 0x20000) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(*(_QWORD *)(a2 + 224));
    MiGetSharedProtos(v5, SessionIdForVa, v2);
  }
  else
  {
    SessionIdForVa = 0;
  }
  MiRetainSubsection(v2);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  ++*(_QWORD *)(v5 + 40);
  ++*(_QWORD *)(v5 + 48);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  MiReleaseFaultState(a1 + 56, 0x11u, 0LL);
  FileExtents = MiAllocateFileExtents(v2, 2, SessionIdForVa);
  MiFreeInPageSupportBlock((PSLIST_ENTRY)a2);
  MiDereferenceControlArea(v5);
  MiReleaseFaultCharges(v2);
  return FileExtents;
}
