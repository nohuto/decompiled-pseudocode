/*
 * XREFs of MiAllocateModWriterEntry @ 0x14046930C
 * Callers:
 *     MiAllocateMappedWriterMdls @ 0x140462D3C (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x1407EE570 (MiCreatePagefile.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiChargeForWriteInProgressPage @ 0x14033A660 (MiChargeForWriteInProgressPage.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
