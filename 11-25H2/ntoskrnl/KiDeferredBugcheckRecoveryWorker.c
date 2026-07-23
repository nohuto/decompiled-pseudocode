/*
 * XREFs of KiDeferredBugcheckRecoveryWorker @ 0x1405C1C60
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     HalReturnToFirmware @ 0x140542060 (HalReturnToFirmware.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x14058E7BC (IoSaveBugCheckRecoveryStatus.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14058ED8C (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     KiBugCheckWriteCrashDump @ 0x1405AF768 (KiBugCheckWriteCrashDump.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405B0764 (KiInvokeBugCheckEntryCallbacks.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405C172C (KiBugCheckRecoveryCleanupFromCrashDump.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405C1AD0 (KiBugCheckRecoveryPrepareForCrashDump.c)
 *     KiRecordRecoveryFailure @ 0x1405C2178 (KiRecordRecoveryFailure.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405C21B0 (KiSaveBugcheckRecoveryProgress.c)
 *     KiSetBugCheckRecoveryProgressFlag @ 0x1405C2308 (KiSetBugCheckRecoveryProgressFlag.c)
 *     ExRebootSystemForRecovery @ 0x140647A6C (ExRebootSystemForRecovery.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 KiDeferredBugcheckRecoveryWorker()
{
  unsigned int v0; // ecx
  char v1; // bl
  __int64 v2; // rcx
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
      v6[1] = (unsigned __int8)byte_140F0F344;
      v6[0] = 2;
      IoSaveBugCheckRecoveryStatus(v6);
      if ( (int)KiSaveBugcheckRecoveryProgress(196LL) >= 0 )
      {
        if ( !byte_140F0F344 )
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
          LOBYTE(v2) = v5[0];
          KiBugCheckRecoveryCleanupFromCrashDump(v2, v4);
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
  if ( (byte_140F0F357 & 2) != 0 )
  {
    KeSetEvent(&KiBugcheckBlockingEvent, 0, 0);
  }
  else if ( (byte_140F0F357 & 4) != 0 )
  {
    KiSaveBugcheckRecoveryProgress(198LL);
    guard_dispatch_icall_no_overrides(0LL);
    HalReturnToFirmware(3);
  }
  return KiSaveBugcheckRecoveryProgress(197LL);
}
