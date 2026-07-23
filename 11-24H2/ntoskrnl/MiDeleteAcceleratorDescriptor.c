/*
 * XREFs of MiDeleteAcceleratorDescriptor @ 0x140271A18
 * Callers:
 *     MiWaitForZeroWorkers @ 0x14027147C (MiWaitForZeroWorkers.c)
 *     MiZeroLargePage @ 0x140312ABC (MiZeroLargePage.c)
 *     MiRevertProcessorMove @ 0x1403149DC (MiRevertProcessorMove.c)
 *     MiFreeHardwareDescriptor @ 0x1404A6770 (MiFreeHardwareDescriptor.c)
 *     MiSoloZeroHugeRange @ 0x140686F44 (MiSoloZeroHugeRange.c)
 *     MiDrainEngineDescriptors @ 0x1406907E0 (MiDrainEngineDescriptors.c)
 *     MiZeroNodeExiting @ 0x1406912C4 (MiZeroNodeExiting.c)
 *     MiAllocateAcceleratorDescriptor @ 0x1406919E4 (MiAllocateAcceleratorDescriptor.c)
 *     MiZeroPageCalibrate @ 0x140694F5C (MiZeroPageCalibrate.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkAccelerator @ 0x140692120 (MiUnlinkAccelerator.c)
 */

__int64 __fastcall MiDeleteAcceleratorDescriptor(__int64 a1)
{
  _QWORD *v1; // rdi
  _DWORD *v2; // rbx
  KIRQL v3; // si
  __int64 v4; // rdx
  bool v5; // zf

  v1 = (_QWORD *)(a1 - 32);
  v2 = *(_DWORD **)(a1 - 32 + 24);
  if ( KeGetCurrentIrql() == 2 )
  {
    v3 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E375A8);
  }
  else
  {
    v3 = ExAcquireSpinLockExclusive(&dword_140E375A8);
  }
  v5 = v2[12]-- == 1;
  if ( v5 && (v2[13] & 1) != 0 )
    MiUnlinkAccelerator(v2);
  else
    v2 = 0LL;
  *v1 = qword_140E37598;
  qword_140E37598 = v1;
  if ( v2 )
  {
    *(_QWORD *)v2 = v1;
    qword_140E37598 = v2;
  }
  LOBYTE(v4) = v3;
  return MiReleaseSpinLockExclusive(&dword_140E375A8, v4);
}
