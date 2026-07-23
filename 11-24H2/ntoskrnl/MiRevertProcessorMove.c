/*
 * XREFs of MiRevertProcessorMove @ 0x1403149DC
 * Callers:
 *     MiZeroInParallelWorker @ 0x140313F70 (MiZeroInParallelWorker.c)
 *     MiZeroHugeRangeWorker @ 0x1406871C0 (MiZeroHugeRangeWorker.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MiDereferencePageChains @ 0x140270AC0 (MiDereferencePageChains.c)
 *     MiDeleteAcceleratorDescriptor @ 0x140271A18 (MiDeleteAcceleratorDescriptor.c)
 *     KeSetIdealProcessorThreadEx @ 0x140370A64 (KeSetIdealProcessorThreadEx.c)
 */

void __fastcall MiRevertProcessorMove(__int64 a1)
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
  MiDereferencePageChains(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 24) + 32LL));
}
