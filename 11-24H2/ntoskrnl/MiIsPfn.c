/*
 * XREFs of MiIsPfn @ 0x14045A380
 * Callers:
 *     MiIsExtentDangling @ 0x1407F0410 (MiIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x140932988 (MmRelocatePfnList.c)
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A135A0 (MiMapViewOfPhysicalSection.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9A4 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A2ECC0 (MiRotateToFrameBufferNoCopy.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A64CA8 (MiReplaceRotateWithDemandZero.c)
 *     MiMarkHiberNotCachedPte @ 0x140B62700 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140B628C0 (MiMarkNonPagedHiberPhasePte.c)
 *     MiConvertHiberPhasePte @ 0x140B6A300 (MiConvertHiberPhasePte.c)
 *     MmIsMdlPageLocked @ 0x140BA46F8 (MmIsMdlPageLocked.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfn(unsigned __int64 a1)
{
  if ( a1 > qword_140E2DBE0 )
    return 0LL;
  else
    return (*(_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL) >> 54) & 1LL;
}
