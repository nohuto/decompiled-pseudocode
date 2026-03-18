/*
 * XREFs of CmIsStateSeparationEnabled @ 0x14049985C
 * Callers:
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140710B20 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopInitializeDumpPolicySettings @ 0x140711124 (IopInitializeDumpPolicySettings.c)
 *     PiPnpRtlInit @ 0x140726C44 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x1407370BC (PiDrvDbInit.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14073901C (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140739154 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbSetupNodeHive @ 0x140739634 (PiDrvDbSetupNodeHive.c)
 *     KIsSideloadingEnabled @ 0x1407C9DF8 (KIsSideloadingEnabled.c)
 *     RtlIsStateSeparationEnabled @ 0x14085F810 (RtlIsStateSeparationEnabled.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140964374 (PiDevCfgEnumDeviceKeys.c)
 *     PiCMEnumerateSubKeys @ 0x14099245C (PiCMEnumerateSubKeys.c)
 *     KIsUnlockSettingEnabled @ 0x140A59CE4 (KIsUnlockSettingEnabled.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A71D1C (PopBcdSetDefaultResumeObjectElements.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationEnabled()
{
  return CmStateSeparationEnabled != 0;
}
