/*
 * XREFs of SetFailureLocation @ 0x14045B110
 * Callers:
 *     CmpLoadKeyCommon @ 0x14045ABA8 (CmpLoadKeyCommon.c)
 *     CmpDoFileRead @ 0x14047546C (CmpDoFileRead.c)
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     CmpBuildMachineHiveCache @ 0x1407D91E4 (CmpBuildMachineHiveCache.c)
 *     CmpHiveCacheSubscribePnpNotifications @ 0x1407D939C (CmpHiveCacheSubscribePnpNotifications.c)
 *     CmpMachineHiveCacheClaimEntry @ 0x1407D946C (CmpMachineHiveCacheClaimEntry.c)
 *     CmpMachineHiveCachePopulateEntry @ 0x1407D94F8 (CmpMachineHiveCachePopulateEntry.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x1407DEC30 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1407DF9A4 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvpMapHiveImage @ 0x1407E0050 (HvpMapHiveImage.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407E3D2C (HvpBuildMapForMemoryBackedHive.c)
 *     CmpHiveCacheAcknowledgeOplockBreak @ 0x1407E57CC (CmpHiveCacheAcknowledgeOplockBreak.c)
 *     CmpHiveCacheClaimHiveEntry @ 0x1407E58E0 (CmpHiveCacheClaimHiveEntry.c)
 *     CmpHiveCacheCreateHiveEntry @ 0x1407E59D8 (CmpHiveCacheCreateHiveEntry.c)
 *     CmpHiveCachePnpNotificationCallback @ 0x1407E5CF0 (CmpHiveCachePnpNotificationCallback.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1407E5E24 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407E5F40 (CmpHiveCachePopulateHiveEntryThread.c)
 *     CmpRequestOplockOnHiveFile @ 0x1407E6358 (CmpRequestOplockOnHiveFile.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1408328B8 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckRegistry2 @ 0x140888A80 (CmpCheckRegistry2.c)
 *     CmpCheckKey @ 0x140888F1C (CmpCheckKey.c)
 *     CmpCheckValueList @ 0x14088B030 (CmpCheckValueList.c)
 *     CmLoadKey @ 0x14092D8C8 (CmLoadKey.c)
 *     CmpLinkHiveToMaster @ 0x14092E380 (CmpLinkHiveToMaster.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 *     CmpInitHiveFromFile @ 0x140930D5C (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFiles @ 0x1409312F0 (CmpOpenHiveFiles.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 *     CmpOpenHiveFile @ 0x140931FA4 (CmpOpenHiveFile.c)
 *     CmpGetCompleteFileName @ 0x140932664 (CmpGetCompleteFileName.c)
 *     HvHiveStartMemoryBacked @ 0x14093363C (HvHiveStartMemoryBacked.c)
 *     HvHiveStartFileBacked @ 0x140967C74 (HvHiveStartFileBacked.c)
 *     HvLoadHive @ 0x140969B4C (HvLoadHive.c)
 *     HvpInitMap @ 0x14096A47C (HvpInitMap.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14096A820 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCells @ 0x14096C4B0 (HvpEnlistFreeCells.c)
 *     HvCheckHive @ 0x1409740B0 (HvCheckHive.c)
 *     HvCheckBin @ 0x1409742F0 (HvCheckBin.c)
 *     CmpResolveHiveLoadConflict @ 0x140A8189C (CmpResolveHiveLoadConflict.c)
 *     HvpPerformLogFileRecovery @ 0x140AAB57C (HvpPerformLogFileRecovery.c)
 *     CmCheckRegistry @ 0x140AE4CC0 (CmCheckRegistry.c)
 *     CmpCheckLeaf @ 0x140AE4F1C (CmpCheckLeaf.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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

  if ( (unsigned int)dword_140E09F58 > 5 )
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
    UserData.Ptr = (ULONGLONG)off_140E09F60;
    v24 = 4;
    v27 = 4;
    v30 = 4;
    v12 = a3;
    v13 = a4;
    v11 = a2;
    v21 = 1;
    v14[0] = a5;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_140E09F60;
    v17 = byte_1400563A3;
    UserData.Reserved = 2;
    v18 = 74;
    v19 = 1;
    v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteEx(qword_140E09F78, &EventDescriptor, 0LL, 0, 0LL, 0LL, 6u, &UserData);
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
