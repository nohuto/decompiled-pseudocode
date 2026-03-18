/*
 * XREFs of HalpInitializePmcCounterSetInfo @ 0x140C0E7E4
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140B4C570 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x1403BC0C0 (HalQueryMaximumProcessorCount.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x140542DE8 (HalpMmAllocatePerProcessorMemory.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *HalpInitializePmcCounterSetInfo()
{
  __int64 MaximumProcessorCount; // rdi
  __int64 v1; // rdx
  __int64 v2; // r8
  _QWORD *v3; // rcx
  void *PerProcessorMemory; // rax
  ULONG_PTR v5; // rbx

  MaximumProcessorCount = (unsigned int)HalQueryMaximumProcessorCount();
  HalpCounterSetInfo = (__int64)HalpMmAllocatePerProcessorMemory(24);
  if ( !HalpCounterSetInfo )
    KeBugCheckEx(
      0xACu,
      24 * MaximumProcessorCount,
      0x2200uLL,
      (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\profile.c",
      0xBA7uLL);
  if ( (_DWORD)MaximumProcessorCount )
  {
    v1 = 0LL;
    v2 = (unsigned int)MaximumProcessorCount;
    do
    {
      v3 = (_QWORD *)(v1 + HalpCounterSetInfo);
      v1 += 24LL;
      v3[1] = v3;
      *v3 = v3;
      v3[2] = MEMORY[0xFFFFF78000000008];
      --v2;
    }
    while ( v2 );
  }
  PerProcessorMemory = HalpMmAllocatePerProcessorMemory(16);
  v5 = 16LL * (unsigned int)MaximumProcessorCount;
  HalpProfileTimeInfo = (__int64)PerProcessorMemory;
  if ( !PerProcessorMemory )
    KeBugCheckEx(0xACu, v5, 0x2200uLL, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\profile.c", 0xBBBuLL);
  return memset_0(PerProcessorMemory, 0, v5);
}
