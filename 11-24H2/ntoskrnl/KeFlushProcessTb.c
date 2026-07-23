/*
 * XREFs of KeFlushProcessTb @ 0x140450FD8
 * Callers:
 *     MmOutSwapProcess @ 0x1402DDEEC (MmOutSwapProcess.c)
 *     KeSwapDirectoryTableBase @ 0x140450D1C (KeSwapDirectoryTableBase.c)
 *     MiDeleteFinalPageTables @ 0x140450DBC (MiDeleteFinalPageTables.c)
 *     MiDeleteProcessShadow @ 0x140451008 (MiDeleteProcessShadow.c)
 * Callees:
 *     KiFlushAddressSpaceTb @ 0x14039E4BC (KiFlushAddressSpaceTb.c)
 */

__int64 __fastcall KeFlushProcessTb(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
    return KiFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL, 0);
  return result;
}
