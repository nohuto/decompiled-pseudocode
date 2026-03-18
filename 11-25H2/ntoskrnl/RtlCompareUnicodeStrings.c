/*
 * XREFs of RtlCompareUnicodeStrings @ 0x1408694A0
 * Callers:
 *     EtwpAvlCompareKeyNames @ 0x1404AA250 (EtwpAvlCompareKeyNames.c)
 *     ApiSetpSearchForApiSet @ 0x1404AC7B8 (ApiSetpSearchForApiSet.c)
 *     ApiSetpSearchForApiSetHost @ 0x140654044 (ApiSetpSearchForApiSetHost.c)
 *     AsiSortValueList @ 0x140654A10 (AsiSortValueList.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x140656508 (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14071D504 (PiDevCfgFindDeviceMigrationNode.c)
 *     PnpCompareMultiSz @ 0x140726D3C (PnpCompareMultiSz.c)
 *     IopExecuteHardwareProfileChange @ 0x14072DB44 (IopExecuteHardwareProfileChange.c)
 *     KsepCacheDeviceEqual @ 0x140734460 (KsepCacheDeviceEqual.c)
 *     PopConnectToPolicyDevice @ 0x14074DE04 (PopConnectToPolicyDevice.c)
 *     PopDirectedDripsUmTestDeviceCompare @ 0x140755010 (PopDirectedDripsUmTestDeviceCompare.c)
 *     WmipCheckSMBiosSysInfoString @ 0x140794CFC (WmipCheckSMBiosSysInfoString.c)
 *     sub_1407A9880 @ 0x1407A9880 (sub_1407A9880.c)
 *     CmpLoadSystemVersionData @ 0x1407C7A08 (CmpLoadSystemVersionData.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x14081DD38 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14081E0AC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     CmpFindSubKeyInRoot @ 0x140846440 (CmpFindSubKeyInRoot.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140854730 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     PiCompareDDBCacheEntries @ 0x1408677C0 (PiCompareDDBCacheEntries.c)
 *     PnpCheckDeviceIdsChanged @ 0x140868014 (PnpCheckDeviceIdsChanged.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140868404 (SepCaptureTokenSecurityAttributesInformation.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x1408689E0 (PiSwBusRelationsCompareInstancePath.c)
 *     SshpCacheDatabaseCompare @ 0x140869290 (SshpCacheDatabaseCompare.c)
 *     CmpFindNameInListWithStatus @ 0x14086B314 (CmpFindNameInListWithStatus.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x140875D60 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpWalkOneLevel @ 0x140876200 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x140877170 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpDoCompareKeyName @ 0x140878B80 (CmpDoCompareKeyName.c)
 *     CmpFindNameInListCellWithStatus @ 0x140879440 (CmpFindNameInListCellWithStatus.c)
 *     CmpCompareInIndex @ 0x14087A510 (CmpCompareInIndex.c)
 *     CmpCheckLexicographicalOrder @ 0x14088D830 (CmpCheckLexicographicalOrder.c)
 *     SeExamineGlobalSacl @ 0x14092EC88 (SeExamineGlobalSacl.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140977970 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 *     SepAdtStagingEvent @ 0x1409858B0 (SepAdtStagingEvent.c)
 *     PiGetServiceNameInfo @ 0x1409B2394 (PiGetServiceNameInfo.c)
 *     SepRmGlobalSaclFind @ 0x140A08700 (SepRmGlobalSaclFind.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140A09EA8 (RtlpCapabilityCheckSystemCapability.c)
 *     MiResolveImageReferences @ 0x140A1286C (MiResolveImageReferences.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140A2B5D8 (RtlpProcessIFEOKeyFilter.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140A6A02C (SeMaximumAuditMaskFromGlobalSacl.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A8C530 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 */

LONG __stdcall RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  int v5; // r14d
  int v7; // ebp
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  SIZE_T v10; // r9
  SIZE_T v11; // rdx
  SIZE_T v12; // rsi
  struct _LIST_ENTRY *Flink; // r11
  const WCHAR *v14; // r10
  SIZE_T v15; // rcx
  signed __int64 v17; // rdi
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9

  v5 = String2Length;
  v7 = String1Length;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v12 = v11;
  if ( v11 > v10 )
    v12 = v10;
  Flink = CurrentServerSiloGlobals[75].Flink;
  v14 = &String1[v12];
  if ( CaseInSensitive )
  {
    v17 = (char *)String2 - (char *)String1;
    while ( String1 < v14 )
    {
      v18 = *String1;
      v19 = *(PCWCH)((char *)String1 + v17);
      if ( (_WORD)v18 != (_WORD)v19 )
      {
        if ( (unsigned int)v18 >= 0x61 )
        {
          if ( (unsigned int)v18 > 0x7A )
          {
            if ( Flink && (unsigned __int16)v18 >= 0xC0u )
              LOWORD(v18) = *((_WORD *)&Flink->Flink
                            + (v18 & 0xF)
                            + *((unsigned __int16 *)&Flink->Flink
                              + ((unsigned __int8)v18 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v18 >> 8))))
                          + v18;
          }
          else
          {
            LOWORD(v18) = v18 - 32;
          }
        }
        if ( (unsigned int)v19 >= 0x61 )
        {
          if ( (unsigned int)v19 > 0x7A )
          {
            if ( Flink )
            {
              if ( (unsigned __int16)v19 >= 0xC0u )
                LOWORD(v19) = *((_WORD *)&Flink->Flink
                              + (v19 & 0xF)
                              + *((unsigned __int16 *)&Flink->Flink
                                + ((unsigned __int8)v19 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v19 >> 8))))
                            + v19;
            }
          }
          else
          {
            LOWORD(v19) = v19 - 32;
          }
        }
        if ( (_WORD)v18 != (_WORD)v19 )
          return (unsigned __int16)v18 - (unsigned __int16)v19;
      }
      ++String1;
    }
  }
  else
  {
    v15 = RtlCompareMemory(String1, String2, 2 * v12) >> 1;
    if ( v15 < v12 )
      return String1[v15] - String2[v15];
  }
  return v7 - v5;
}
