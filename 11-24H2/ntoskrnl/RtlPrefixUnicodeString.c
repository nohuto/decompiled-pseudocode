/*
 * XREFs of RtlPrefixUnicodeString @ 0x1408726F0
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x1403B86D8 (SepPotentialGlobalTableAttribute.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x140463B10 (RtlDeriveCapabilitySidsFromName.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x14048AB44 (PopFxBuildDripsBlockingDeviceList.c)
 *     IoConfigureCrashDump @ 0x14058DDD4 (IoConfigureCrashDump.c)
 *     IopValidateJunctionTarget @ 0x140710FC8 (IopValidateJunctionTarget.c)
 *     PiCreateRegistryPath @ 0x14071D268 (PiCreateRegistryPath.c)
 *     PiOpenDirectoryWithRoot @ 0x14071D8A8 (PiOpenDirectoryWithRoot.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1407281D8 (PiDevCfgMakeServiceBootStart.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140735ED4 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x140736F4C (PiDrvDbResolveKeyFilePaths.c)
 *     PspQueryAndCheckCpuPartitionName @ 0x140776F2C (PspQueryAndCheckCpuPartitionName.c)
 *     CmpIsFileInSystemConfig @ 0x1407E2160 (CmpIsFileInSystemConfig.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140818718 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140818C3C (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140819F7C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14081D374 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1408B5110 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C4460 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1408C679C (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1408C88C8 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1408CEA40 (PiPnpRtlEnumeratorFilterCallback.c)
 *     SepValidateReferencedCachedHandles @ 0x140913DDC (SepValidateReferencedCachedHandles.c)
 *     ExWnfHiveUnloaded @ 0x14092D110 (ExWnfHiveUnloaded.c)
 *     IopBuildFullDriverPath @ 0x1409B78C8 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409B81B0 (IopQueryRegistryKeySystemPath.c)
 *     PiNormalizeDeviceText @ 0x1409B8420 (PiNormalizeDeviceText.c)
 *     SepIsMinTCB @ 0x1409FA28C (SepIsMinTCB.c)
 *     SepIsSystemAppTCB @ 0x1409FA5A0 (SepIsSystemAppTCB.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x140A17EB0 (AuthzBasepIsCompareRelevantAttribute.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140A25DA8 (RtlpProcessIFEOKeyFilter.c)
 *     ObCheckRefTraceProcess @ 0x140A4B068 (ObCheckRefTraceProcess.c)
 *     ObpIsUnsecureName @ 0x140A523B0 (ObpIsUnsecureName.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A73AFC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A7C058 (_CmOpenDevicePanelRegKeyWorker.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9E6B0 (PiCreateDriverSwDeviceCallback.c)
 *     PopDirectedDripsDiagSanitizeHardwareId @ 0x140AA66F8 (PopDirectedDripsDiagSanitizeHardwareId.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

BOOLEAN __stdcall RtlPrefixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v4; // rdx
  unsigned __int16 *v5; // r9
  char v6; // r10
  unsigned __int16 *v7; // rcx
  struct _LIST_ENTRY *Flink; // rdi
  __int64 v9; // rax
  unsigned __int16 *v10; // r11
  __int64 v11; // rbx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = (unsigned __int16 *)*((_QWORD *)v5 + 1);
  Flink = CurrentServerSiloGlobals[75].Flink;
  v9 = *v5;
  if ( *(_WORD *)v4 < (unsigned __int16)v9 )
    return 0;
  v10 = (unsigned __int16 *)((char *)v7 + v9);
  if ( !v6 )
    return memcmp(v7, *(const void **)(v4 + 8), *v5) == 0;
  v11 = *(_QWORD *)(v4 + 8) - (_QWORD)v7;
  while ( v7 < v10 )
  {
    v12 = *v7;
    v13 = *(unsigned __int16 *)((char *)v7 + v11);
    if ( (_WORD)v12 != (_WORD)v13 )
    {
      if ( (unsigned int)v12 >= 0x61 )
      {
        if ( (unsigned int)v12 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v12 >= 0xC0u )
            LOWORD(v12) = *((_WORD *)&Flink->Flink
                          + (v12 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v12 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v12 >> 8))))
                        + v12;
        }
        else
        {
          LOWORD(v12) = v12 - 32;
        }
      }
      if ( (unsigned int)v13 >= 0x61 )
      {
        if ( (unsigned int)v13 > 0x7A )
        {
          if ( Flink )
          {
            if ( (unsigned __int16)v13 >= 0xC0u )
              LOWORD(v13) = *((_WORD *)&Flink->Flink
                            + (v13 & 0xF)
                            + *((unsigned __int16 *)&Flink->Flink
                              + ((unsigned __int8)v13 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v13 >> 8))))
                          + v13;
          }
        }
        else
        {
          LOWORD(v13) = v13 - 32;
        }
      }
      if ( (_WORD)v12 != (_WORD)v13 )
        return 0;
    }
    ++v7;
  }
  return 1;
}
