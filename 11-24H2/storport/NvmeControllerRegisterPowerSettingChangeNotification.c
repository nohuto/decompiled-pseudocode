/*
 * XREFs of NvmeControllerRegisterPowerSettingChangeNotification @ 0x140132810
 * Callers:
 *     NvmeControllerPowerInitialize @ 0x1400F2558 (NvmeControllerPowerInitialize.c)
 * Callees:
 *     RaidLogAllocationFailure @ 0x14008D748 (RaidLogAllocationFailure.c)
 */

__int64 __fastcall NvmeControllerRegisterPowerSettingChangeNotification(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  void *v4; // rbx
  __int64 v5; // r14
  __int64 Pool2; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx

  v2 = (*(_DWORD *)(*(_QWORD *)(a1 + 592) + 96LL) & 2 | 8u) >> 1;
  v3 = (unsigned int)v2;
  v4 = *(void **)(*(_QWORD *)(a1 + 128) + 8LL);
  v5 = 24 * (v2 + 1);
  Pool2 = ExAllocatePool2(64LL, v5, 1330667858LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = v3;
    *(_QWORD *)(Pool2 + 8) = Pool2 + 24;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 16 * v3 + 24;
    *(GUID *)(Pool2 + 24) = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1;
    *(GUID *)(Pool2 + 40) = GUID_NVME_POWER_IDLE_TIMEOUT1;
    *(GUID *)(*(_QWORD *)(Pool2 + 8) + 32LL) = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2;
    *(GUID *)(*(_QWORD *)(Pool2 + 8) + 48LL) = GUID_NVME_POWER_IDLE_TIMEOUT2;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 592) + 96LL) & 2) != 0 )
      *(GUID *)(*(_QWORD *)(Pool2 + 8) + 64LL) = GUID_NVME_POWER_NOPPME;
    v8 = 0LL;
    do
    {
      PoRegisterPowerSettingCallback(
        *(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 128) + 8LL),
        (LPCGUID)(*(_QWORD *)(v7 + 8) + 16LL * (unsigned int)v8),
        NvmePowerSettingCallback,
        *(PVOID *)(a1 + 128),
        (PVOID *)(*(_QWORD *)(v7 + 16) + 8 * v8));
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < (unsigned int)v3 );
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 312LL) = v7;
  }
  else if ( v4 )
  {
    RaidLogAllocationFailure(v4, 64LL, v5, 1330667858, 0x80000000);
  }
  return 0LL;
}
