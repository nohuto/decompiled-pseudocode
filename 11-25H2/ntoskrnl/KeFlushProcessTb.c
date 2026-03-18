/*
 * XREFs of KeFlushProcessTb @ 0x14045CF7C
 * Callers:
 *     MmOutSwapProcess @ 0x1402F1C40 (MmOutSwapProcess.c)
 *     KeSwapDirectoryTableBase @ 0x14045CCC0 (KeSwapDirectoryTableBase.c)
 *     MiDeleteFinalPageTables @ 0x14045CD60 (MiDeleteFinalPageTables.c)
 *     MiDeleteProcessShadow @ 0x14045CFAC (MiDeleteProcessShadow.c)
 * Callees:
 *     KiFlushAddressSpaceTb @ 0x14026F6A0 (KiFlushAddressSpaceTb.c)
 */

__int64 __fastcall KeFlushProcessTb(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
    return KiFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL, 0);
  return result;
}
