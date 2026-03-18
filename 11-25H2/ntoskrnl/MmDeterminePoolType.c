/*
 * XREFs of MmDeterminePoolType @ 0x1402DAA10
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1402F7C14 (ExpFreeHeapSpecialPool.c)
 *     ExQueryPoolBlockSize @ 0x140648850 (ExQueryPoolBlockSize.c)
 *     ExpSizeHeapPool @ 0x14064E514 (ExpSizeHeapPool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140B7BDA4 (VfPtAddStackInfoIfNotExist.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140B8E120 (VfMiscMmBuildMdlForNonPagedPool_Entry.c)
 *     ExFreePoolSanityChecks @ 0x140B944D0 (ExFreePoolSanityChecks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmDeterminePoolType(unsigned __int64 a1)
{
  if ( a1 >= 0xFFFF800000000000uLL && byte_140E38768[((a1 >> 39) & 0x1FF) - 256] == 5 )
    return 256LL;
  else
    return 64LL;
}
