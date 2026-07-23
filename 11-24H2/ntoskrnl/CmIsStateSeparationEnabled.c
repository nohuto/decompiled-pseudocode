/*
 * XREFs of CmIsStateSeparationEnabled @ 0x1404941EC
 * Callers:
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x14070E6B0 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopInitializeDumpPolicySettings @ 0x14070ECB4 (IopInitializeDumpPolicySettings.c)
 *     PiPnpRtlInit @ 0x1407247D4 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x140734FEC (PiDrvDbInit.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x140736F4C (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140737084 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbSetupNodeHive @ 0x140737564 (PiDrvDbSetupNodeHive.c)
 *     KIsSideloadingEnabled @ 0x1407CA2E8 (KIsSideloadingEnabled.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14094C14C (PiDevCfgEnumDeviceKeys.c)
 *     PiCMEnumerateSubKeys @ 0x14097D49C (PiCMEnumerateSubKeys.c)
 *     KIsUnlockSettingEnabled @ 0x140A515A4 (KIsUnlockSettingEnabled.c)
 *     RtlIsStateSeparationEnabled @ 0x140A579B0 (RtlIsStateSeparationEnabled.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A6B0FC (PopBcdSetDefaultResumeObjectElements.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationEnabled()
{
  return CmStateSeparationEnabled != 0;
}
