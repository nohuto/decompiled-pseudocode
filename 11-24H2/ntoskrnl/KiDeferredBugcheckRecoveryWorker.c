/*
 * XREFs of KiDeferredBugcheckRecoveryWorker @ 0x1405C3730
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     HalReturnToFirmware @ 0x1405421E0 (HalReturnToFirmware.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x14058F00C (IoSaveBugCheckRecoveryStatus.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14058F5E0 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     KiBugCheckWriteCrashDump @ 0x1405B0068 (KiBugCheckWriteCrashDump.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405B1088 (KiInvokeBugCheckEntryCallbacks.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405C31FC (KiBugCheckRecoveryCleanupFromCrashDump.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405C35A0 (KiBugCheckRecoveryPrepareForCrashDump.c)
 *     KiRecordRecoveryFailure @ 0x1405C3C48 (KiRecordRecoveryFailure.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405C3C80 (KiSaveBugcheckRecoveryProgress.c)
 *     KiSetBugCheckRecoveryProgressFlag @ 0x1405C3DD8 (KiSetBugCheckRecoveryProgressFlag.c)
 *     ExRebootSystemForRecovery @ 0x1406520CC (ExRebootSystemForRecovery.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 KiDeferredBugcheckRecoveryWorker()
{
  unsigned int v0; // ecx
  char v1; // bl
  __int64 v2; // rdx
  char v4; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int8 v5[7]; // [rsp+21h] [rbp-3Fh] BYREF
  int v6[4]; // [rsp+28h] [rbp-38h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-18h] BYREF

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
      KiInvokeBugCheckEntryCallbacks(0x400u);
      v6[2] = 0;
      v6[1] = (unsigned __int8)byte_140F0FDA4;
      v6[0] = 2;
      IoSaveBugCheckRecoveryStatus(v6);
      if ( (int)KiSaveBugcheckRecoveryProgress(196LL) >= 0 )
      {
        if ( !byte_140F0FDA4 )
        {
          KiRecordRecoveryFailure(3LL);
          goto LABEL_14;
        }
        v4 = 0;
        v5[0] = 0;
        v1 = KiBugCheckRecoveryPrepareForCrashDump(v5, (bool *)&v4);
        KiInvokeBugCheckEntryCallbacks(9u);
        if ( v1 )
        {
          KiBugCheckWriteCrashDump((__int64)&KiCrashDumpContext);
          KiBugCheckRecoveryCleanupFromCrashDump(v5[0], v4);
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
  if ( (byte_140F0FDB7 & 2) != 0 )
  {
    KeSetEvent(&KiBugcheckBlockingEvent, 0, 0);
  }
  else if ( (byte_140F0FDB7 & 4) != 0 )
  {
    KiSaveBugcheckRecoveryProgress(198LL);
    guard_dispatch_icall_no_overrides(0LL, v2);
    HalReturnToFirmware(3);
  }
  return KiSaveBugcheckRecoveryProgress(197LL);
}
