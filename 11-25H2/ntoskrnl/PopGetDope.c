/*
 * XREFs of PopGetDope @ 0x1404C0F1C
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x1402FDCA0 (PoRegisterDeviceForIdleDetection.c)
 *     PopAssociatePowerLimitRequest @ 0x14073EFA8 (PopAssociatePowerLimitRequest.c)
 *     PopFreePowerLimitRequest @ 0x14073F574 (PopFreePowerLimitRequest.c)
 *     PopOrphanPowerLimitExtension @ 0x14073F7B8 (PopOrphanPowerLimitExtension.c)
 *     PopAssociateThermalRequest @ 0x14073FF58 (PopAssociateThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1407402E8 (PopOrphanCoolingExtension.c)
 *     PoVolumeDevice @ 0x140AABF98 (PoVolumeDevice.c)
 *     PopDeactiveThermalRequest @ 0x140AB450C (PopDeactiveThermalRequest.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopGetDope(__int64 a1)
{
  __int64 v1; // rdi
  __int64 Pool2; // rax
  void *v4; // rbx
  KIRQL v5; // al

  v1 = *(_QWORD *)(a1 + 312);
  if ( !*(_QWORD *)(v1 + 24) )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v4 = (void *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 52) = 0;
      *(_DWORD *)(Pool2 + 56) = 0;
      *(_QWORD *)(Pool2 + 24) = a1;
      *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
      *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
      v5 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
      if ( !*(_QWORD *)(v1 + 24) )
      {
        *(_QWORD *)(v1 + 24) = v4;
        v4 = 0LL;
      }
      KeReleaseSpinLock(&PopDopeGlobalLock, v5);
      if ( v4 )
        ExFreePoolWithTag(v4, 0x45504F44u);
    }
  }
  return *(_QWORD *)(v1 + 24);
}
