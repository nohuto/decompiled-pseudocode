/*
 * XREFs of MiAllocateModWriterEntry @ 0x14046EBF8
 * Callers:
 *     MiAllocateMappedWriterMdls @ 0x140469E0C (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x1407EDFA0 (MiCreatePagefile.c)
 * Callees:
 *     MiChargeForWriteInProgressPage @ 0x140211300 (MiChargeForWriteInProgressPage.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void *__fastcall MiAllocateModWriterEntry(__int64 a1, __int64 a2, int a3)
{
  void *Pool; // rbx

  Pool = (void *)MiAllocatePool(0x40uLL, 8 * a2 + 152, 1700228429);
  if ( Pool )
  {
    if ( (unsigned int)MiChargeForWriteInProgressPage(a1, a3 != 0) )
      return Pool;
    ExFreePoolWithTag(Pool, 0);
  }
  return 0LL;
}
