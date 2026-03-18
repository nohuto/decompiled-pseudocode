/*
 * XREFs of MmDeterminePoolType @ 0x1402B2B50
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402B0E50 (ExFreeHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1403A8B6C (ExpFreeHeapSpecialPool.c)
 *     ExQueryPoolBlockSize @ 0x140654750 (ExQueryPoolBlockSize.c)
 *     ExpSizeHeapPool @ 0x14065A448 (ExpSizeHeapPool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140B8BD84 (VfPtAddStackInfoIfNotExist.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140B9E100 (VfMiscMmBuildMdlForNonPagedPool_Entry.c)
 *     ExFreePoolSanityChecks @ 0x140BA44B0 (ExFreePoolSanityChecks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmDeterminePoolType(unsigned __int64 a1)
{
  if ( a1 >= 0xFFFF800000000000uLL && byte_140E389A8[((a1 >> 39) & 0x1FF) - 256] == 5 )
    return 256LL;
  else
    return 64LL;
}
