/*
 * XREFs of MiRevertProcessorMove @ 0x14030AAFC
 * Callers:
 *     MiZeroInParallelWorker @ 0x14030A090 (MiZeroInParallelWorker.c)
 *     MiZeroHugeRangeWorker @ 0x140686090 (MiZeroHugeRangeWorker.c)
 * Callees:
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     KeSetIdealProcessorThreadEx @ 0x1403B422C (KeSetIdealProcessorThreadEx.c)
 *     MiDeleteAcceleratorDescriptor @ 0x140415BB8 (MiDeleteAcceleratorDescriptor.c)
 *     MiDereferencePageChains @ 0x140491294 (MiDereferencePageChains.c)
 */

__int64 __fastcall MiRevertProcessorMove(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    MiDeleteAcceleratorDescriptor(v2);
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 != -1 )
    KeSetIdealProcessorThreadEx(KeGetCurrentThread(), v3);
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 8LL);
  if ( v4 )
    PsDereferencePartition(v4);
  return MiDereferencePageChains(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL));
}
