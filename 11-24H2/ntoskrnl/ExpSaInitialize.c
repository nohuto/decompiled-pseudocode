/*
 * XREFs of ExpSaInitialize @ 0x140658D24
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C42BB4 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14031D920 (KeQueryMaximumProcessorCountEx.c)
 *     ExpSaAllocatorInitialize @ 0x140658CBC (ExpSaAllocatorInitialize.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
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
  Pool2 = (void *)ExAllocatePool2(0x40uLL, 0x80uLL, 0x61537845u);
  ExSaPageGroupDescriptorArray = (__int64)Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0x80uLL);
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    ExSaPageArrays = ExAllocatePool2(0x40uLL, 8LL * MaximumProcessorCount, 0x61537845u);
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
      v7 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x48uLL, 0x61537845u);
      ExSaNonPagedSlotAllocator = (__int64)v7;
      if ( v7 )
      {
        ExpSaAllocatorInitialize(v7, 0);
        v8 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x48uLL, 0x61537845u);
        ExSaPagedSlotAllocator = (__int64)v8;
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
