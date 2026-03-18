/*
 * XREFs of MiDeleteAcceleratorDescriptor @ 0x140415BB8
 * Callers:
 *     MiZeroLargePage @ 0x140308BDC (MiZeroLargePage.c)
 *     MiRevertProcessorMove @ 0x14030AAFC (MiRevertProcessorMove.c)
 *     MiWaitForZeroWorkers @ 0x14041561C (MiWaitForZeroWorkers.c)
 *     MiFreeHardwareDescriptor @ 0x1404AC318 (MiFreeHardwareDescriptor.c)
 *     MiSoloZeroHugeRange @ 0x140685E14 (MiSoloZeroHugeRange.c)
 *     MiDrainEngineDescriptors @ 0x14068F710 (MiDrainEngineDescriptors.c)
 *     MiZeroNodeExiting @ 0x1406901F4 (MiZeroNodeExiting.c)
 *     MiAllocateAcceleratorDescriptor @ 0x140690914 (MiAllocateAcceleratorDescriptor.c)
 *     MiZeroPageCalibrate @ 0x140693E8C (MiZeroPageCalibrate.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiUnlinkAccelerator @ 0x140691050 (MiUnlinkAccelerator.c)
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
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E37468);
  }
  else
  {
    v3 = ExAcquireSpinLockExclusive(&dword_140E37468);
  }
  v4 = v2[12]-- == 1;
  if ( v4 && (v2[13] & 1) != 0 )
    MiUnlinkAccelerator(v2);
  else
    v2 = 0LL;
  *v1 = qword_140E37458;
  qword_140E37458 = v1;
  if ( v2 )
  {
    *(_QWORD *)v2 = v1;
    qword_140E37458 = v2;
  }
  return MiReleaseSpinLockExclusive(&dword_140E37468, v3);
}
