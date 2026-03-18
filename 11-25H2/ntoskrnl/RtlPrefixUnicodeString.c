/*
 * XREFs of RtlPrefixUnicodeString @ 0x140871070
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x140360FB8 (SepPotentialGlobalTableAttribute.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14046C970 (RtlDeriveCapabilitySidsFromName.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140490CC8 (PopFxBuildDripsBlockingDeviceList.c)
 *     IoConfigureCrashDump @ 0x14058D584 (IoConfigureCrashDump.c)
 *     SepIsSystemAppTCB @ 0x1406E9498 (SepIsSystemAppTCB.c)
 *     IopValidateJunctionTarget @ 0x140707338 (IopValidateJunctionTarget.c)
 *     PiCreateRegistryPath @ 0x1407135D8 (PiCreateRegistryPath.c)
 *     PiOpenDirectoryWithRoot @ 0x140713C18 (PiOpenDirectoryWithRoot.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14071E608 (PiDevCfgMakeServiceBootStart.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14072BD14 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14072CD8C (PiDrvDbResolveKeyFilePaths.c)
 *     PspQueryAndCheckCpuPartitionName @ 0x14076733C (PspQueryAndCheckCpuPartitionName.c)
 *     CmpIsFileInSystemConfig @ 0x1407D2330 (CmpIsFileInSystemConfig.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1408080D8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408085FC (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14080993C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14080CD34 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     ExWnfHiveUnloaded @ 0x140864AFC (ExWnfHiveUnloaded.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C8BA0 (_CmOpenDeviceRegKeyWorker.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1408CE9C0 (PiPnpRtlEnumeratorFilterCallback.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140957BB0 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140959D88 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x14095B2D0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     SepValidateReferencedCachedHandles @ 0x140983B48 (SepValidateReferencedCachedHandles.c)
 *     PiNormalizeDeviceText @ 0x1409AFC94 (PiNormalizeDeviceText.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409B01F8 (IopQueryRegistryKeySystemPath.c)
 *     IopBuildFullDriverPath @ 0x1409B0AA8 (IopBuildFullDriverPath.c)
 *     SepIsMinTCB @ 0x1409BB9B4 (SepIsMinTCB.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x140A194AC (AuthzBasepIsCompareRelevantAttribute.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140A2B5D8 (RtlpProcessIFEOKeyFilter.c)
 *     ObCheckRefTraceProcess @ 0x140A4FAF4 (ObCheckRefTraceProcess.c)
 *     ObpIsUnsecureName @ 0x140A56F50 (ObpIsUnsecureName.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A7798C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A7DF78 (_CmOpenDevicePanelRegKeyWorker.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9DAA0 (PiCreateDriverSwDeviceCallback.c)
 *     PopDirectedDripsDiagSanitizeHardwareId @ 0x140AA5F08 (PopDirectedDripsDiagSanitizeHardwareId.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
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
