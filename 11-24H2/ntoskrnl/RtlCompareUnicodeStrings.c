/*
 * XREFs of RtlCompareUnicodeStrings @ 0x14088C7D0
 * Callers:
 *     EtwpAvlCompareKeyNames @ 0x1404A5D00 (EtwpAvlCompareKeyNames.c)
 *     ApiSetpSearchForApiSet @ 0x1404A8708 (ApiSetpSearchForApiSet.c)
 *     ApiSetpSearchForApiSetHost @ 0x14065E9C4 (ApiSetpSearchForApiSetHost.c)
 *     AsiSortValueList @ 0x14065F350 (AsiSortValueList.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x140661074 (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1407270E0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PnpCompareMultiSz @ 0x140730F5C (PnpCompareMultiSz.c)
 *     IopExecuteHardwareProfileChange @ 0x140737D04 (IopExecuteHardwareProfileChange.c)
 *     KsepCacheDeviceEqual @ 0x14073E3B0 (KsepCacheDeviceEqual.c)
 *     PopConnectToPolicyDevice @ 0x140758ACC (PopConnectToPolicyDevice.c)
 *     PopDirectedDripsUmTestDeviceCompare @ 0x1407644A0 (PopDirectedDripsUmTestDeviceCompare.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1407A41DC (WmipCheckSMBiosSysInfoString.c)
 *     sub_1407B9180 @ 0x1407B9180 (sub_1407B9180.c)
 *     CmpLoadSystemVersionData @ 0x1407D76DC (CmpLoadSystemVersionData.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x14082E2A8 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14082E61C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     CmpFindSubKeyInRoot @ 0x14083EC40 (CmpFindSubKeyInRoot.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtStagingEvent @ 0x140863120 (SepAdtStagingEvent.c)
 *     CmpFindNameInListWithStatus @ 0x140870840 (CmpFindNameInListWithStatus.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408764B0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpWalkOneLevel @ 0x140876890 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408777E0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1408789C0 (CmpDoCompareKeyName.c)
 *     CmpFindNameInListCellWithStatus @ 0x140879AE0 (CmpFindNameInListCellWithStatus.c)
 *     CmpCompareInIndex @ 0x140888330 (CmpCompareInIndex.c)
 *     CmpCheckLexicographicalOrder @ 0x14088AC50 (CmpCheckLexicographicalOrder.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14088BFA8 (SepCaptureTokenSecurityAttributesInformation.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x14088C580 (PiSwBusRelationsCompareInstancePath.c)
 *     SshpCacheDatabaseCompare @ 0x14088C5C0 (SshpCacheDatabaseCompare.c)
 *     PnpCheckDeviceIdsChanged @ 0x14088C928 (PnpCheckDeviceIdsChanged.c)
 *     PiCompareDDBCacheEntries @ 0x14088D380 (PiCompareDDBCacheEntries.c)
 *     SeExamineGlobalSacl @ 0x14088DC88 (SeExamineGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x14088DDC4 (SepRmGlobalSaclFind.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x14088E1C0 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     PiGetServiceNameInfo @ 0x1409B595C (PiGetServiceNameInfo.c)
 *     PiDevCfgConfigureDevice @ 0x1409CA478 (PiDevCfgConfigureDevice.c)
 *     MiResolveImageReferences @ 0x140A10E04 (MiResolveImageReferences.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140A1D050 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140A25DA8 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140A5B4CC (RtlpCapabilityCheckSystemCapability.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A8DDE0 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
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
