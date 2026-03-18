/*
 * XREFs of RtlCompareUnicodeStrings @ 0x140888920
 * Callers:
 *     EtwpAvlCompareKeyNames @ 0x1404AB670 (EtwpAvlCompareKeyNames.c)
 *     ApiSetpSearchForApiSet @ 0x1404ADDF8 (ApiSetpSearchForApiSet.c)
 *     ApiSetpSearchForApiSetHost @ 0x1406601F4 (ApiSetpSearchForApiSetHost.c)
 *     AsiSortValueList @ 0x140660B80 (AsiSortValueList.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x140662790 (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140729484 (PiDevCfgFindDeviceMigrationNode.c)
 *     PnpCompareMultiSz @ 0x140732F4C (PnpCompareMultiSz.c)
 *     IopExecuteHardwareProfileChange @ 0x140739DD4 (IopExecuteHardwareProfileChange.c)
 *     KsepCacheDeviceEqual @ 0x140740480 (KsepCacheDeviceEqual.c)
 *     PopConnectToPolicyDevice @ 0x14075A3DC (PopConnectToPolicyDevice.c)
 *     PopDirectedDripsUmTestDeviceCompare @ 0x140764AD0 (PopDirectedDripsUmTestDeviceCompare.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1407A40CC (WmipCheckSMBiosSysInfoString.c)
 *     sub_1407B8D30 @ 0x1407B8D30 (sub_1407B8D30.c)
 *     CmpLoadSystemVersionData @ 0x1407D7168 (CmpLoadSystemVersionData.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x14082DA78 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14082DDEC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     CmpFindSubKeyInRoot @ 0x140842980 (CmpFindSubKeyInRoot.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1408508E0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpFindNameInListWithStatus @ 0x14086C510 (CmpFindNameInListWithStatus.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x140872180 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpWalkOneLevel @ 0x140872560 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408734B0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpDoCompareKeyName @ 0x140874690 (CmpDoCompareKeyName.c)
 *     CmpFindNameInListCellWithStatus @ 0x1408757B0 (CmpFindNameInListCellWithStatus.c)
 *     CmpCompareInIndex @ 0x140884480 (CmpCompareInIndex.c)
 *     CmpCheckLexicographicalOrder @ 0x140886DA0 (CmpCheckLexicographicalOrder.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1408880F8 (SepCaptureTokenSecurityAttributesInformation.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x1408886D0 (PiSwBusRelationsCompareInstancePath.c)
 *     SshpCacheDatabaseCompare @ 0x140888710 (SshpCacheDatabaseCompare.c)
 *     PnpCheckDeviceIdsChanged @ 0x140888A78 (PnpCheckDeviceIdsChanged.c)
 *     PiCompareDDBCacheEntries @ 0x1408894D0 (PiCompareDDBCacheEntries.c)
 *     SeExamineGlobalSacl @ 0x140889DD8 (SeExamineGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x140889F14 (SepRmGlobalSaclFind.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x14088A310 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepAdtStagingEvent @ 0x1408F1920 (SepAdtStagingEvent.c)
 *     PiDevCfgConfigureDevice @ 0x140997CFC (PiDevCfgConfigureDevice.c)
 *     PiGetServiceNameInfo @ 0x1409CA714 (PiGetServiceNameInfo.c)
 *     MiResolveImageReferences @ 0x140A17C94 (MiResolveImageReferences.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140A285D0 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140A31E38 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140A62BCC (RtlpCapabilityCheckSystemCapability.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A91630 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
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
