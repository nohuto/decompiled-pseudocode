/*
 * XREFs of ExCreatePoolTagTable @ 0x1407A884C
 * Callers:
 *     KiStartDynamicProcessor @ 0x14072F1E8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8508C (MmAllocateIndependentPagesEx.c)
 */

void *__fastcall ExCreatePoolTagTable(unsigned int a1, unsigned __int16 a2)
{
  __int64 v2; // rdi
  void *IndependentPages; // rax
  void *v5; // rbx

  v2 = a1;
  if ( (unsigned __int64)PoolTrackTableSize >= 0x333333333333332LL )
    return 0LL;
  IndependentPages = (void *)MmAllocateIndependentPagesEx(80 * (PoolTrackTableSize + 1), a2, 0LL, 0LL);
  v5 = IndependentPages;
  if ( IndependentPages )
  {
    memset_0(IndependentPages, 0, 80 * PoolTrackTableSize);
    *(&ExPoolTagTables + v2) = v5;
  }
  return v5;
}
