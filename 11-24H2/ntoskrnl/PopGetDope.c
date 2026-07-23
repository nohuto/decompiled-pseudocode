/*
 * XREFs of PopGetDope @ 0x1403E6628
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x1403E5A70 (PoRegisterDeviceForIdleDetection.c)
 *     PopAssociatePowerLimitRequest @ 0x1407493A8 (PopAssociatePowerLimitRequest.c)
 *     PopFreePowerLimitRequest @ 0x140749974 (PopFreePowerLimitRequest.c)
 *     PopOrphanPowerLimitExtension @ 0x140749BB8 (PopOrphanPowerLimitExtension.c)
 *     PopAssociateThermalRequest @ 0x14074A358 (PopAssociateThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x14074A6E8 (PopOrphanCoolingExtension.c)
 *     PoVolumeDevice @ 0x140AAC408 (PoVolumeDevice.c)
 *     PopDeactiveThermalRequest @ 0x140AB2D98 (PopDeactiveThermalRequest.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
    Pool2 = ExAllocatePool2(0x40uLL, 0x68uLL, 0x45504F44u);
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
