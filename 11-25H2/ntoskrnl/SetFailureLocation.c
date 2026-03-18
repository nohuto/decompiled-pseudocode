/*
 * XREFs of SetFailureLocation @ 0x140465824
 * Callers:
 *     CmpLoadKeyCommon @ 0x140465264 (CmpLoadKeyCommon.c)
 *     CmpDoFileRead @ 0x140478FE0 (CmpDoFileRead.c)
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407BC620 (CmpMountPreloadedHives.c)
 *     CmpBuildMachineHiveCache @ 0x1407C94A4 (CmpBuildMachineHiveCache.c)
 *     CmpHiveCacheSubscribePnpNotifications @ 0x1407C9654 (CmpHiveCacheSubscribePnpNotifications.c)
 *     CmpMachineHiveCacheClaimEntry @ 0x1407C9724 (CmpMachineHiveCacheClaimEntry.c)
 *     CmpMachineHiveCachePopulateEntry @ 0x1407C97B0 (CmpMachineHiveCachePopulateEntry.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x1407CEE08 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1407CFB7C (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvpMapHiveImage @ 0x1407D0228 (HvpMapHiveImage.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407D3EFC (HvpBuildMapForMemoryBackedHive.c)
 *     CmpHiveCacheAcknowledgeOplockBreak @ 0x1407D538C (CmpHiveCacheAcknowledgeOplockBreak.c)
 *     CmpHiveCacheClaimHiveEntry @ 0x1407D54A0 (CmpHiveCacheClaimHiveEntry.c)
 *     CmpHiveCacheCreateHiveEntry @ 0x1407D5598 (CmpHiveCacheCreateHiveEntry.c)
 *     CmpHiveCachePnpNotificationCallback @ 0x1407D58B0 (CmpHiveCachePnpNotificationCallback.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1407D59E0 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407D5AF0 (CmpHiveCachePopulateHiveEntryThread.c)
 *     CmpRequestOplockOnHiveFile @ 0x1407D5F04 (CmpRequestOplockOnHiveFile.c)
 *     HvpEnlistFreeCells @ 0x140881C80 (HvpEnlistFreeCells.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408820A0 (HvpRemapAndEnlistHiveBins.c)
 *     CmpCheckRegistry2 @ 0x14088B690 (CmpCheckRegistry2.c)
 *     CmpCheckKey @ 0x14088BB2C (CmpCheckKey.c)
 *     CmpCheckValueList @ 0x14088DC10 (CmpCheckValueList.c)
 *     CmpInitHiveFromFile @ 0x14090E4F0 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFiles @ 0x14090EA84 (CmpOpenHiveFiles.c)
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 *     CmpOpenHiveFile @ 0x14090F91C (CmpOpenHiveFile.c)
 *     CmpGetCompleteFileName @ 0x14090FF8C (CmpGetCompleteFileName.c)
 *     CmLoadKey @ 0x140910E98 (CmLoadKey.c)
 *     CmpLinkHiveToMaster @ 0x140911D30 (CmpLinkHiveToMaster.c)
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14091C778 (CmpValidateHiveSecurityDescriptors.c)
 *     CmCheckRegistry @ 0x140995590 (CmCheckRegistry.c)
 *     HvCheckHive @ 0x140995810 (HvCheckHive.c)
 *     HvCheckBin @ 0x140995A70 (HvCheckBin.c)
 *     HvHiveStartFileBacked @ 0x1409F8934 (HvHiveStartFileBacked.c)
 *     HvLoadHive @ 0x1409F8C4C (HvLoadHive.c)
 *     HvpInitMap @ 0x1409F957C (HvpInitMap.c)
 *     HvpPerformLogFileRecovery @ 0x1409FA6B8 (HvpPerformLogFileRecovery.c)
 *     CmpCheckLeaf @ 0x140A18B3C (CmpCheckLeaf.c)
 *     CmpResolveHiveLoadConflict @ 0x140A82524 (CmpResolveHiveLoadConflict.c)
 *     HvHiveStartMemoryBacked @ 0x140A9F924 (HvHiveStartMemoryBacked.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
  int *v17; // [rsp+80h] [rbp-31h]
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

  if ( (unsigned int)dword_140E09E08 > 5 )
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
    UserData.Ptr = (ULONGLONG)off_140E09E10;
    v24 = 4;
    v27 = 4;
    v30 = 4;
    v12 = a3;
    v13 = a4;
    v11 = a2;
    v21 = 1;
    v14[0] = a5;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_140E09E10;
    v17 = &dword_14005447F;
    UserData.Reserved = 2;
    v18 = 74;
    v19 = 1;
    v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteEx(qword_140E09E28, &EventDescriptor, 0LL, 0, 0LL, 0LL, 6u, &UserData);
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
