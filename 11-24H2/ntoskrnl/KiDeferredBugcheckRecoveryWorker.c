/*
 * XREFs of KiDeferredBugcheckRecoveryWorker @ 0x1405C6000
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     HalReturnToFirmware @ 0x140544920 (HalReturnToFirmware.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x140591FEC (IoSaveBugCheckRecoveryStatus.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405925BC (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     KiBugCheckWriteCrashDump @ 0x1405B30F8 (KiBugCheckWriteCrashDump.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405B4110 (KiInvokeBugCheckEntryCallbacks.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405C5ACC (KiBugCheckRecoveryCleanupFromCrashDump.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405C5E70 (KiBugCheckRecoveryPrepareForCrashDump.c)
 *     KiRecordRecoveryFailure @ 0x1405C6518 (KiRecordRecoveryFailure.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405C6550 (KiSaveBugcheckRecoveryProgress.c)
 *     KiSetBugCheckRecoveryProgressFlag @ 0x1405C66A8 (KiSetBugCheckRecoveryProgressFlag.c)
 *     ExRebootSystemForRecovery @ 0x14065396C (ExRebootSystemForRecovery.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 KiDeferredBugcheckRecoveryWorker()
{
  unsigned int v0; // ecx
  __int64 v1; // r8
  __int64 v2; // r9
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  bool v12; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int8 v13[7]; // [rsp+21h] [rbp-3Fh] BYREF
  int v14[4]; // [rsp+28h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-18h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (int)KiSaveBugcheckRecoveryProgress(199LL) >= 0 )
  {
    if ( (KiBugcheckRecoveryDumpPolicy & 0x10) == 0 && (int)IoWriteCapturedPristineTriageDumpToDedicatedDumpFile() >= 0 )
      KiSetBugCheckRecoveryProgressFlag(0x2000LL);
    v0 = *(_DWORD *)KiGlobalState;
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v0 >> 6);
    Affinity.Mask = 1LL << (v0 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    if ( !KeGetPcr()->Prcb.Number )
    {
      KiBugcheckRecoveryOwner = KeGetPcr()->Prcb.Number;
      KiRecoveryInProgress = 1;
      KiInvokeBugCheckEntryCallbacks(0x400u, (__int64)&KiBugcheckRecoveryInformation, 0x4Cu);
      v14[2] = 0;
      v14[1] = (unsigned __int8)byte_140F0FB04;
      v14[0] = 2;
      IoSaveBugCheckRecoveryStatus(v14);
      if ( (int)KiSaveBugcheckRecoveryProgress(196LL) >= 0 )
      {
        if ( !byte_140F0FB04 )
        {
          KiRecordRecoveryFailure(3LL);
          goto LABEL_14;
        }
        v12 = 0;
        v13[0] = 0;
        v3 = KiBugCheckRecoveryPrepareForCrashDump(v13, &v12, v1, v2);
        KiInvokeBugCheckEntryCallbacks(9u, 0LL, 0);
        if ( v3 )
        {
          KiBugCheckWriteCrashDump((__int64)&KiCrashDumpContext);
          LOBYTE(v4) = v12;
          LOBYTE(v5) = v13[0];
          KiBugCheckRecoveryCleanupFromCrashDump(v5, v4, v6, v7);
        }
        if ( !KiRecoveryCheckpointsFailure && (int)KiSaveBugcheckRecoveryProgress(4LL) >= 0 )
        {
          ExRebootSystemForRecovery();
LABEL_14:
          KiRecoveryInProgress = 0;
          goto LABEL_16;
        }
      }
    }
  }
  KiRecordRecoveryFailure(5LL);
LABEL_16:
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (byte_140F0FB17 & 2) != 0 )
  {
    KeSetEvent(&KiBugcheckBlockingEvent, 0, 0);
  }
  else if ( (byte_140F0FB17 & 4) != 0 )
  {
    KiSaveBugcheckRecoveryProgress(198LL);
    guard_dispatch_icall_no_overrides(0LL, v8, v9, v10);
    HalReturnToFirmware(3);
  }
  return KiSaveBugcheckRecoveryProgress(197LL);
}
