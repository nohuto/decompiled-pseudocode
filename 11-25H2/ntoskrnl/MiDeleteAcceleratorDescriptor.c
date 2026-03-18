/*
 * XREFs of MiDeleteAcceleratorDescriptor @ 0x140418610
 * Callers:
 *     MiZeroLargePage @ 0x140223DEC (MiZeroLargePage.c)
 *     MiRevertProcessorMove @ 0x14022559C (MiRevertProcessorMove.c)
 *     MiWaitForZeroWorkers @ 0x140418074 (MiWaitForZeroWorkers.c)
 *     MiSoloZeroHugeRange @ 0x14067A584 (MiSoloZeroHugeRange.c)
 *     MiDrainEngineDescriptors @ 0x140683EE4 (MiDrainEngineDescriptors.c)
 *     MiFreeHardwareDescriptor @ 0x140684100 (MiFreeHardwareDescriptor.c)
 *     MiZeroNodeExiting @ 0x140684D94 (MiZeroNodeExiting.c)
 *     MiAllocateAcceleratorDescriptor @ 0x1406854B4 (MiAllocateAcceleratorDescriptor.c)
 *     MiZeroPageCalibrate @ 0x140688A2C (MiZeroPageCalibrate.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiUnlinkAccelerator @ 0x140685BF0 (MiUnlinkAccelerator.c)
 */

__int64 __fastcall MiDeleteAcceleratorDescriptor(__int64 a1)
{
  _QWORD *v1; // rdi
  _DWORD *v2; // rbx
  KIRQL v3; // si
  bool v4; // zf

  v1 = (_QWORD *)(a1 - 32);
  v2 = *(_DWORD **)(a1 - 32 + 24);
  if ( KeGetCurrentIrql() == 2 )
  {
    v3 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E37228);
  }
  else
  {
    v3 = ExAcquireSpinLockExclusive(&dword_140E37228);
  }
  v4 = v2[12]-- == 1;
  if ( v4 && (v2[13] & 1) != 0 )
    MiUnlinkAccelerator(v2);
  else
    v2 = 0LL;
  *v1 = qword_140E37218;
  qword_140E37218 = v1;
  if ( v2 )
  {
    *(_QWORD *)v2 = v1;
    qword_140E37218 = v2;
  }
  return MiReleaseSpinLockExclusive(&dword_140E37228, v3);
}
