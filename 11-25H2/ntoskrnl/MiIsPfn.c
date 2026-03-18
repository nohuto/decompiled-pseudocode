/*
 * XREFs of MiIsPfn @ 0x1403F2190
 * Callers:
 *     MiIsExtentDangling @ 0x1407E0570 (MiIsExtentDangling.c)
 *     MiMapViewOfPhysicalSection @ 0x1408B6998 (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408F8DEC (MiMapLockedPagesInUserSpace.c)
 *     MiRotateToFrameBuffer @ 0x140A28F1C (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A29238 (MiRotateToFrameBufferNoCopy.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A62AD8 (MiReplaceRotateWithDemandZero.c)
 *     MmRelocatePfnList @ 0x140ABD000 (MmRelocatePfnList.c)
 *     MiMarkHiberNotCachedPte @ 0x140B525D0 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140B52790 (MiMarkNonPagedHiberPhasePte.c)
 *     MiConvertHiberPhasePte @ 0x140B5A800 (MiConvertHiberPhasePte.c)
 *     MmIsMdlPageLocked @ 0x140B94718 (MmIsMdlPageLocked.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfn(unsigned __int64 a1)
{
  return a1 <= qword_140E2D9A0 && (*(_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0;
}
