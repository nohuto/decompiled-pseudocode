/*
 * XREFs of ExpSaInitialize @ 0x14065A654
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C40A64 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x14033E440 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     ExpSaAllocatorInitialize @ 0x14065A5EC (ExpSaAllocatorInitialize.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x140B746D0 (ExAllocatePool3.c)
 */

char ExpSaInitialize()
{
  char v0; // bl
  void *Pool2; // rax
  ULONG MaximumProcessorCount; // r14d
  unsigned int v3; // esi
  unsigned int i; // edi
  void *Pool3; // rcx
  __int64 Prcb; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rax

  v0 = 0;
  ExSaPageGroupDescriptorArray = 0LL;
  ExSaPageArrays = 0LL;
  ExSaNonPagedSlotAllocator = 0LL;
  ExSaPagedSlotAllocator = 0LL;
  ExSaPageGroupDescriptorArrayLock = 0LL;
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  ExSaPageGroupDescriptorArray = (__int64)Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0x80uLL);
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    ExSaPageArrays = ExAllocatePool2(0x40uLL);
    if ( ExSaPageArrays )
    {
      v3 = KeNumberProcessors_0;
      for ( i = 0; i < MaximumProcessorCount; ++i )
      {
        if ( i < v3 )
          KeGetPrcb(i);
        Pool3 = (void *)ExAllocatePool3(0x40uLL, 1);
        *(_QWORD *)(ExSaPageArrays + 8LL * i) = Pool3;
        if ( !Pool3 )
          return v0;
        memset_0(Pool3, 0, 0x80uLL);
        Prcb = KeGetPrcb(i);
        if ( Prcb )
          *(_QWORD *)(Prcb + 35760) = *(_QWORD *)(ExSaPageArrays + 8LL * i);
      }
      v7 = (_QWORD *)ExAllocatePool2(0x40uLL);
      ExSaNonPagedSlotAllocator = (__int64)v7;
      if ( v7 )
      {
        ExpSaAllocatorInitialize(v7, 0);
        v8 = (_QWORD *)ExAllocatePool2(0x100uLL);
        ExSaPagedSlotAllocator = (ULONG_PTR)v8;
        if ( v8 )
        {
          ExpSaAllocatorInitialize(v8, 1);
          return 1;
        }
      }
    }
  }
  return v0;
}
