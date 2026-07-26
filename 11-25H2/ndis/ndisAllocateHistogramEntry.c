/*
 * XREFs of ndisAllocateHistogramEntry @ 0x1401438A8
 * Callers:
 *     ndisDmaAllocationHistogramAddEntry @ 0x140140300 (ndisDmaAllocationHistogramAddEntry.c)
 * Callees:
 *     ?reset@?$unique_ptr@VKHistogram@@U?$default_delete@VKHistogram@@@wistd@@@wistd@@QEAAXPEAVKHistogram@@@Z @ 0x1400AB33C (-reset@-$unique_ptr@VKHistogram@@U-$default_delete@VKHistogram@@@wistd@@@wistd@@QEAAXPEAVKHistog.c)
 *     ??_GNdisHistogramEntry@@QEAAPEAXI@Z @ 0x1401437B0 (--_GNdisHistogramEntry@@QEAAPEAXI@Z.c)
 *     ?Create@KHistogram@@SAPEAV1@_K0K@Z @ 0x1401437F0 (-Create@KHistogram@@SAPEAV1@_K0K@Z.c)
 */

void **ndisAllocateHistogramEntry()
{
  void **PoolWithTag; // rax
  void **v1; // rdi
  unsigned int *v2; // r8
  struct KHistogram *v3; // rax

  PoolWithTag = (void **)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x6568444Eu);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  *PoolWithTag = 0LL;
  v2 = (unsigned int *)qword_140126FE8;
  PoolWithTag[1] = 0LL;
  *((_OWORD *)PoolWithTag + 1) = 0LL;
  PoolWithTag[4] = 0LL;
  v3 = KHistogram::Create(v2[7], v2[9], v2[8]);
  wistd::unique_ptr<KHistogram,wistd::default_delete<KHistogram>>::reset(v1 + 4, v3);
  if ( !v1[4] )
  {
    NdisHistogramEntry::`scalar deleting destructor'(v1);
    return 0LL;
  }
  return v1;
}
