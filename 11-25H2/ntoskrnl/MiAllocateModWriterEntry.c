/*
 * XREFs of MiAllocateModWriterEntry @ 0x1404704C0
 * Callers:
 *     MiAllocateMappedWriterMdls @ 0x14040AA5C (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x1407DE100 (MiCreatePagefile.c)
 * Callees:
 *     MiChargeForWriteInProgressPage @ 0x14022E660 (MiChargeForWriteInProgressPage.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void *__fastcall MiAllocateModWriterEntry(__int64 a1, __int64 a2, int a3)
{
  void *Pool; // rbx
  __int64 v6; // r8
  __int64 v7; // r9

  Pool = (void *)MiAllocatePool(0x40uLL, 8 * a2 + 152, 1700228429);
  if ( Pool )
  {
    if ( (unsigned int)MiChargeForWriteInProgressPage(a1, a3 != 0, v6, v7) )
      return Pool;
    ExFreePoolWithTag(Pool, 0);
  }
  return 0LL;
}
