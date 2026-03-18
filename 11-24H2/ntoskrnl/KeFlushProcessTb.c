/*
 * XREFs of KeFlushProcessTb @ 0x14045BC40
 * Callers:
 *     MmOutSwapProcess @ 0x14042D50C (MmOutSwapProcess.c)
 *     KeSwapDirectoryTableBase @ 0x14045B984 (KeSwapDirectoryTableBase.c)
 *     MiDeleteFinalPageTables @ 0x14045BA24 (MiDeleteFinalPageTables.c)
 *     MiDeleteProcessShadow @ 0x14045BC70 (MiDeleteProcessShadow.c)
 * Callees:
 *     KiFlushAddressSpaceTb @ 0x1403AFCAC (KiFlushAddressSpaceTb.c)
 */

__int64 __fastcall KeFlushProcessTb(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
    return KiFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL, 0);
  return result;
}
