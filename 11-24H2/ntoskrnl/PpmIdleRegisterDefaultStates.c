/*
 * XREFs of PpmIdleRegisterDefaultStates @ 0x1407485F0
 * Callers:
 *     PopNewProcessorCallback @ 0x140746FE0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopExecuteOnTargetProcessors @ 0x140370234 (PopExecuteOnTargetProcessors.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PpmHvUseNativeAlgorithms @ 0x1404AE364 (PpmHvUseNativeAlgorithms.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 PpmIdleRegisterDefaultStates()
{
  bool v0; // di
  __int64 v1; // rsi
  __int64 Pool2; // rax
  __int64 v3; // rbx
  unsigned int v4; // edi

  v0 = 0;
  v1 = 1LL;
  if ( !PpmHvUseNativeAlgorithms() && (HvlEnlightenments & 0x10000000) == 0 )
    v0 = (HvlEnlightenments & 0x200) != 0;
  Pool2 = ExAllocatePool2(0x40uLL, 32 * ((unsigned int)v0 + 1) + 104, 0x694D5050u);
  v3 = Pool2;
  if ( Pool2 )
  {
    *(_BYTE *)(Pool2 + 19) = 1;
    *(_DWORD *)(Pool2 + 96) = v0 + 1;
    *(_DWORD *)(Pool2 + 104) = *(_DWORD *)(Pool2 + 104) & 0x7FFFFF00 | 0x8000008F;
    RtlInitUnicodeString((PUNICODE_STRING)(Pool2 + 120), L"HLT");
    *(_BYTE *)(v3 + 16) = 0;
    *(_QWORD *)(v3 + 64) = PpmIdleDefaultExecute;
    *(_QWORD *)(v3 + 72) = xHalTimerWatchdogStop;
    *(_QWORD *)(v3 + 80) = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator;
    *(_QWORD *)(v3 + 88) = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator;
    if ( v0 )
    {
      *(_QWORD *)(v3 + 24) = PpmIdleGuestPreselect;
      *(_QWORD *)(v3 + 32) = PpmIdleGuestTest;
      *(_QWORD *)(v3 + 48) = PpmIdleGuestPreExecute;
      *(_QWORD *)(v3 + 64) = PpmIdleGuestExecute;
      *(_QWORD *)(v3 + 72) = PpmIdleGuestComplete;
      *(_DWORD *)(v3 + 136) = *(_DWORD *)(v3 + 136) & 0x7FFFFF00 | 0x97;
      RtlInitUnicodeString((PUNICODE_STRING)(v3 + 152), L"Enlightened Idle");
      v1 = 2LL;
    }
    PopAcquireRwLockExclusive(&PpmIdlePolicyLock);
    v4 = PopExecuteOnTargetProcessors((__int64)&KeActiveProcessors, (__int64)PpmIdleInstallDefaultStates, v3, v1);
    PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
    ExFreePoolWithTag((PVOID)v3, 0x694D5050u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
