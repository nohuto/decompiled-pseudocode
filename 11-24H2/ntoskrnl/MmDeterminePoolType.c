/*
 * XREFs of MmDeterminePoolType @ 0x14035B710
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x140398994 (ExpFreeHeapSpecialPool.c)
 *     ExQueryPoolBlockSize @ 0x140652E50 (ExQueryPoolBlockSize.c)
 *     ExpSizeHeapPool @ 0x140658B18 (ExpSizeHeapPool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140B8DD84 (VfPtAddStackInfoIfNotExist.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140BA0100 (VfMiscMmBuildMdlForNonPagedPool_Entry.c)
 *     ExFreePoolSanityChecks @ 0x140BA64B0 (ExFreePoolSanityChecks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmDeterminePoolType(unsigned __int64 a1)
{
  if ( a1 >= 0xFFFF800000000000uLL && byte_140E38AE8[((a1 >> 39) & 0x1FF) - 256] == 5 )
    return 256LL;
  else
    return 64LL;
}
