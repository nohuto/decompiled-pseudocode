/*
 * XREFs of MiRevertProcessorMove @ 0x14022559C
 * Callers:
 *     MiZeroInParallelWorker @ 0x140224150 (MiZeroInParallelWorker.c)
 *     MiZeroHugeRangeWorker @ 0x14067A800 (MiZeroHugeRangeWorker.c)
 * Callees:
 *     MiDereferencePageChains @ 0x1402259E4 (MiDereferencePageChains.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     KeSetIdealProcessorThreadEx @ 0x1403B3360 (KeSetIdealProcessorThreadEx.c)
 *     MiDeleteAcceleratorDescriptor @ 0x140418610 (MiDeleteAcceleratorDescriptor.c)
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
    PsDereferencePartition(v4, 1700425037LL);
  return MiDereferencePageChains(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL));
}
