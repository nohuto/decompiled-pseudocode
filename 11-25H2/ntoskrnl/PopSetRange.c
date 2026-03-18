/*
 * XREFs of PopSetRange @ 0x140472430
 * Callers:
 *     PoSetHiberRange @ 0x140472260 (PoSetHiberRange.c)
 *     RtlMarkHiberPhase @ 0x1405E5D10 (RtlMarkHiberPhase.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1405C8990 (PopInternalAddToDumpFile.c)
 *     PopSetBootPhaseRange @ 0x140B4E4FC (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x140B5A7E4 (PopDiscardRange.c)
 *     PopCloneRange @ 0x140B5D1C0 (PopCloneRange.c)
 */

__int64 __fastcall PopSetRange(ULONG_PTR BugCheckParameter3, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  if ( *(_BYTE *)(BugCheckParameter3 + 24) )
  {
    PopInternalAddToDumpFile(BugCheckParameter3, 496LL, 0LL);
    KeBugCheckEx(0xA0u, 0x104uLL, 0xAuLL, BugCheckParameter3, 0LL);
  }
  if ( (a2 & 0x8000) != 0 )
    return PopDiscardRange(BugCheckParameter3, a3, a4);
  if ( (a2 & 2) != 0 )
    return PopCloneRange(BugCheckParameter3, a3, a4, a5);
  if ( (a2 & 0x10000) == 0 )
  {
    PopInternalAddToDumpFile(BugCheckParameter3, 496LL, 0LL);
    KeBugCheckEx(0xA0u, 0x105uLL, 0xAuLL, BugCheckParameter3, 0LL);
  }
  return PopSetBootPhaseRange(BugCheckParameter3, a3, a4);
}
