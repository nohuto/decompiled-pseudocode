/*
 * XREFs of RtlPrefixUnicodeString @ 0x14086E3C0
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x1403592C8 (SepPotentialGlobalTableAttribute.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14046B090 (RtlDeriveCapabilitySidsFromName.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140490504 (PopFxBuildDripsBlockingDeviceList.c)
 *     IoConfigureCrashDump @ 0x140590DB4 (IoConfigureCrashDump.c)
 *     IopValidateJunctionTarget @ 0x140713438 (IopValidateJunctionTarget.c)
 *     PiCreateRegistryPath @ 0x14071F6D8 (PiCreateRegistryPath.c)
 *     PiOpenDirectoryWithRoot @ 0x14071FD18 (PiOpenDirectoryWithRoot.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14072A588 (PiDevCfgMakeServiceBootStart.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140737FA4 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14073901C (PiDrvDbResolveKeyFilePaths.c)
 *     PspQueryAndCheckCpuPartitionName @ 0x140776D0C (PspQueryAndCheckCpuPartitionName.c)
 *     CmpIsFileInSystemConfig @ 0x1407E1C10 (CmpIsFileInSystemConfig.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140817FD8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408184FC (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14081983C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14081CC34 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1408B77A0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C6A30 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1408C8D6C (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1408CAE98 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1408D1050 (PiPnpRtlEnumeratorFilterCallback.c)
 *     SepValidateReferencedCachedHandles @ 0x1408F2790 (SepValidateReferencedCachedHandles.c)
 *     ExWnfHiveUnloaded @ 0x14092AFD0 (ExWnfHiveUnloaded.c)
 *     PiNormalizeDeviceText @ 0x1409C8004 (PiNormalizeDeviceText.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409C8568 (IopQueryRegistryKeySystemPath.c)
 *     IopBuildFullDriverPath @ 0x1409C8E18 (IopBuildFullDriverPath.c)
 *     SepIsMinTCB @ 0x140A1BD1C (SepIsMinTCB.c)
 *     SepIsSystemAppTCB @ 0x140A1C030 (SepIsSystemAppTCB.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x140A23AA0 (AuthzBasepIsCompareRelevantAttribute.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140A31E38 (RtlpProcessIFEOKeyFilter.c)
 *     ObCheckRefTraceProcess @ 0x140A53078 (ObCheckRefTraceProcess.c)
 *     ObpIsUnsecureName @ 0x140A5AAF0 (ObpIsUnsecureName.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A797FC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A815F8 (_CmOpenDevicePanelRegKeyWorker.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140AA3320 (PiCreateDriverSwDeviceCallback.c)
 *     PopDirectedDripsDiagSanitizeHardwareId @ 0x140AAB4C8 (PopDirectedDripsDiagSanitizeHardwareId.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
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
