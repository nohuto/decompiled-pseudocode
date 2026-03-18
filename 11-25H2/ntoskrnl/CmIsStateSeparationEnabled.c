/*
 * XREFs of CmIsStateSeparationEnabled @ 0x1404996EC
 * Callers:
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140704A20 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopInitializeDumpPolicySettings @ 0x140705024 (IopInitializeDumpPolicySettings.c)
 *     PiPnpRtlInit @ 0x14071ACC4 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x14072AE2C (PiDrvDbInit.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14072CD8C (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14072CEC4 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbSetupNodeHive @ 0x14072D3A4 (PiDrvDbSetupNodeHive.c)
 *     KIsSideloadingEnabled @ 0x1407BA5F8 (KIsSideloadingEnabled.c)
 *     PiCMEnumerateSubKeys @ 0x1409520BC (PiCMEnumerateSubKeys.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14095F65C (PiDevCfgEnumDeviceKeys.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A24DD4 (PopBcdSetDefaultResumeObjectElements.c)
 *     RtlIsStateSeparationEnabled @ 0x140A28CA0 (RtlIsStateSeparationEnabled.c)
 *     KIsUnlockSettingEnabled @ 0x140A564D4 (KIsUnlockSettingEnabled.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationEnabled()
{
  return CmStateSeparationEnabled != 0;
}
