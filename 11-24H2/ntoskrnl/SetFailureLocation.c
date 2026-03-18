/*
 * XREFs of SetFailureLocation @ 0x1404649E0
 * Callers:
 *     CmpLoadKeyCommon @ 0x140464478 (CmpLoadKeyCommon.c)
 *     CmpDoFileRead @ 0x140479BDC (CmpDoFileRead.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     CmpBuildMachineHiveCache @ 0x1407D8C94 (CmpBuildMachineHiveCache.c)
 *     CmpHiveCacheSubscribePnpNotifications @ 0x1407D8E4C (CmpHiveCacheSubscribePnpNotifications.c)
 *     CmpMachineHiveCacheClaimEntry @ 0x1407D8F1C (CmpMachineHiveCacheClaimEntry.c)
 *     CmpMachineHiveCachePopulateEntry @ 0x1407D8FA8 (CmpMachineHiveCachePopulateEntry.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x1407DE6E0 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1407DF454 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvpMapHiveImage @ 0x1407DFB00 (HvpMapHiveImage.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407E37DC (HvpBuildMapForMemoryBackedHive.c)
 *     CmpHiveCacheAcknowledgeOplockBreak @ 0x1407E51FC (CmpHiveCacheAcknowledgeOplockBreak.c)
 *     CmpHiveCacheClaimHiveEntry @ 0x1407E5310 (CmpHiveCacheClaimHiveEntry.c)
 *     CmpHiveCacheCreateHiveEntry @ 0x1407E5408 (CmpHiveCacheCreateHiveEntry.c)
 *     CmpHiveCachePnpNotificationCallback @ 0x1407E5720 (CmpHiveCachePnpNotificationCallback.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1407E5854 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407E5970 (CmpHiveCachePopulateHiveEntryThread.c)
 *     CmpRequestOplockOnHiveFile @ 0x1407E5D88 (CmpRequestOplockOnHiveFile.c)
 *     CmpCheckRegistry2 @ 0x140884BD0 (CmpCheckRegistry2.c)
 *     CmpCheckKey @ 0x14088506C (CmpCheckKey.c)
 *     CmpCheckValueList @ 0x140887180 (CmpCheckValueList.c)
 *     CmLoadKey @ 0x14092B788 (CmLoadKey.c)
 *     CmpLinkHiveToMaster @ 0x14092C240 (CmpLinkHiveToMaster.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 *     CmpInitHiveFromFile @ 0x14092EC1C (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFiles @ 0x14092F1B0 (CmpOpenHiveFiles.c)
 *     CmpCreateHive @ 0x14092F538 (CmpCreateHive.c)
 *     CmpOpenHiveFile @ 0x14092FE64 (CmpOpenHiveFile.c)
 *     CmpGetCompleteFileName @ 0x140930524 (CmpGetCompleteFileName.c)
 *     HvHiveStartMemoryBacked @ 0x1409314FC (HvHiveStartMemoryBacked.c)
 *     HvHiveStartFileBacked @ 0x14097F464 (HvHiveStartFileBacked.c)
 *     HvLoadHive @ 0x14098133C (HvLoadHive.c)
 *     HvpInitMap @ 0x140981C6C (HvpInitMap.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140982010 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCells @ 0x140983CA0 (HvpEnlistFreeCells.c)
 *     HvCheckHive @ 0x14098A9C0 (HvCheckHive.c)
 *     HvCheckBin @ 0x14098AC00 (HvCheckBin.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1409A0BDC (CmpValidateHiveSecurityDescriptors.c)
 *     CmpResolveHiveLoadConflict @ 0x140A86DC4 (CmpResolveHiveLoadConflict.c)
 *     HvpPerformLogFileRecovery @ 0x140AB060C (HvpPerformLogFileRecovery.c)
 *     CmCheckRegistry @ 0x140AE33E0 (CmCheckRegistry.c)
 *     CmpCheckLeaf @ 0x140AE363C (CmpCheckLeaf.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall SetFailureLocation(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // [rsp+40h] [rbp-71h] BYREF
  int v12; // [rsp+44h] [rbp-6Dh] BYREF
  int v13; // [rsp+48h] [rbp-69h] BYREF
  _DWORD v14[3]; // [rsp+4Ch] [rbp-65h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-41h] BYREF
  char *v17; // [rsp+80h] [rbp-31h]
  int v18; // [rsp+88h] [rbp-29h]
  int v19; // [rsp+8Ch] [rbp-25h]
  char *v20; // [rsp+90h] [rbp-21h]
  int v21; // [rsp+98h] [rbp-19h]
  int v22; // [rsp+9Ch] [rbp-15h]
  int *v23; // [rsp+A0h] [rbp-11h]
  int v24; // [rsp+A8h] [rbp-9h]
  int v25; // [rsp+ACh] [rbp-5h]
  int *v26; // [rsp+B0h] [rbp-1h]
  int v27; // [rsp+B8h] [rbp+7h]
  int v28; // [rsp+BCh] [rbp+Bh]
  _DWORD *v29; // [rsp+C0h] [rbp+Fh]
  int v30; // [rsp+C8h] [rbp+17h]
  int v31; // [rsp+CCh] [rbp+1Bh]

  if ( (unsigned int)dword_140E09EE8 > 5 )
  {
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    EventDescriptor.Keyword = 0LL;
    v20 = &v11;
    v23 = &v12;
    v26 = &v13;
    v29 = v14;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_140E09EF0;
    v24 = 4;
    v27 = 4;
    v30 = 4;
    v12 = a3;
    v13 = a4;
    v11 = a2;
    v21 = 1;
    v14[0] = a5;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_140E09EF0;
    v17 = byte_1400558A9;
    UserData.Reserved = 2;
    v18 = 74;
    v19 = 1;
    v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteEx(qword_140E09F08, &EventDescriptor, 0LL, 0, 0LL, 0LL, 6u, &UserData);
  }
  if ( a1 )
  {
    if ( a2 )
    {
      v10 = *(unsigned __int16 *)(a1 + 10);
      if ( (unsigned int)v10 < 8 )
      {
        *(_DWORD *)(a1 + 12 * (v10 + 9)) = a3;
        *(_DWORD *)(a1 + 12LL * *(unsigned __int16 *)(a1 + 10) + 112) = a4;
        *(_DWORD *)(a1 + 12LL * (unsigned __int16)(*(_WORD *)(a1 + 10))++ + 116) = a5;
      }
    }
    else
    {
      v9 = *(unsigned __int16 *)(a1 + 8);
      if ( (unsigned int)v9 < 8 )
      {
        *(_DWORD *)(a1 + 12 * (v9 + 1)) = a3;
        *(_DWORD *)(a1 + 12LL * *(unsigned __int16 *)(a1 + 8) + 16) = a4;
        *(_DWORD *)(a1 + 12LL * (unsigned __int16)(*(_WORD *)(a1 + 8))++ + 20) = a5;
      }
    }
  }
}
