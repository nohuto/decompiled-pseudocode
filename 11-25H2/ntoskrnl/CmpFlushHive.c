/*
 * XREFs of CmpFlushHive @ 0x140883A5C
 * Callers:
 *     CmpDoFlushAll @ 0x14032401C (CmpDoFlushAll.c)
 *     CmpLoadKeyCommon @ 0x140465264 (CmpLoadKeyCommon.c)
 *     CmShutdownSystem1 @ 0x14065C0A4 (CmShutdownSystem1.c)
 *     CmpFinishSystemHivesLoad @ 0x1407BAA30 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407BC620 (CmpMountPreloadedHives.c)
 *     CmFreezeRegistry @ 0x1407C8C7C (CmFreezeRegistry.c)
 *     CmReplaceKey @ 0x1407CAB24 (CmReplaceKey.c)
 *     CmpTransMgrSyncHive @ 0x140865CE8 (CmpTransMgrSyncHive.c)
 *     CmpTransMgrPrepare @ 0x14086632C (CmpTransMgrPrepare.c)
 *     CmpDoFlushNextHive @ 0x1408837F0 (CmpDoFlushNextHive.c)
 *     CmpCompleteUnloadKey @ 0x14088523C (CmpCompleteUnloadKey.c)
 *     CmpInitHiveFromFile @ 0x14090E4F0 (CmpInitHiveFromFile.c)
 *     CmpDoReconcileNextHive @ 0x140A44330 (CmpDoReconcileNextHive.c)
 *     NtFlushKey @ 0x140A73170 (NtFlushKey.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140349918 (CmpArmLazyWriter.c)
 *     RtlNumberOfSetBits @ 0x140395F40 (RtlNumberOfSetBits.c)
 *     EtwWriteTransfer @ 0x14041EDF0 (EtwWriteTransfer.c)
 *     HvUnCOWReconciledPages @ 0x140438F00 (HvUnCOWReconciledPages.c)
 *     RtlMergeBitMaps @ 0x140439210 (RtlMergeBitMaps.c)
 *     CmpIsWriteQueueActive @ 0x14048091C (CmpIsWriteQueueActive.c)
 *     HvMarkDirtyForFlush @ 0x1404895E8 (HvMarkDirtyForFlush.c)
 *     CmpAcquireWriteQueue @ 0x140494C0C (CmpAcquireWriteQueue.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     HvLockHiveWriter @ 0x140880B44 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140880F30 (HvUnlockHiveWriter.c)
 *     HvStoreModifiedData @ 0x14088302C (HvStoreModifiedData.c)
 *     CmpTraceHiveFlushStop @ 0x1408845BC (CmpTraceHiveFlushStop.c)
 *     CmpTraceHiveFlushStart @ 0x14088464C (CmpTraceHiveFlushStart.c)
 *     CmpLockRegistryFreezeAware @ 0x140884780 (CmpLockRegistryFreezeAware.c)
 *     CmpGenerateFlushControlData @ 0x140884868 (CmpGenerateFlushControlData.c)
 *     CmpReleaseWriteQueue @ 0x140884B7C (CmpReleaseWriteQueue.c)
 *     HvFreeUnreconciledData @ 0x140884F08 (HvFreeUnreconciledData.c)
 *     HvSwapLogFiles @ 0x1409F7174 (HvSwapLogFiles.c)
 *     HvWriteHivePrimaryFile @ 0x1409F7344 (HvWriteHivePrimaryFile.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1409F7648 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1409F76C8 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteLogFile @ 0x1409F77F4 (HvWriteLogFile.c)
 *     CmpFileFlushAndPurge @ 0x1409F83E8 (CmpFileFlushAndPurge.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1409F8638 (HvpLogTypeToLogArrayIndex.c)
 *     HvFoldBackDirtyData @ 0x140A2F230 (HvFoldBackDirtyData.c)
 *     HvFreeDirtyData @ 0x140A2F2C8 (HvFreeDirtyData.c)
 *     CmpLogFlushPhaseEnd @ 0x140A3C20C (CmpLogFlushPhaseEnd.c)
 *     CmpLogFlushPhaseStart @ 0x140A3D754 (CmpLogFlushPhaseStart.c)
 *     CmpWakeWriteQueueWaiters @ 0x140A4F73C (CmpWakeWriteQueueWaiters.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x140A64720 (HvTruncateAllLogFilesIfRequired.c)
 *     HvIsCurrentLogSwappable @ 0x140A6E358 (HvIsCurrentLogSwappable.c)
 *     HvResetLogFileStatusAll @ 0x140A828F4 (HvResetLogFileStatusAll.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A837E0 (CmpWaitOnHiveWriteQueue.c)
 *     HvFoldBackUnreconciledData @ 0x140AA54A8 (HvFoldBackUnreconciledData.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140AB7AC4 (HvExtendHivePrimaryFileValidDataLength.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BA9B20 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BA9B3C (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpFlushHive(ULONG_PTR a1, unsigned int a2)
{
  unsigned __int16 *v2; // rbx
  unsigned __int16 *v3; // rsi
  __int64 valid; // r15
  int v7; // ecx
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  __int64 v14; // rcx
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r14d
  char v19; // r12
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct _KEVENT *v29; // r13
  __int64 v30; // rcx
  _QWORD *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct _KEVENT *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // esi
  unsigned int v50; // eax
  PEVENT_DATA_DESCRIPTOR UserData_8[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+48h] [rbp-C0h]
  int v53; // [rsp+50h] [rbp-B8h]
  __int64 v54; // [rsp+58h] [rbp-B0h] BYREF
  PRKEVENT Event; // [rsp+60h] [rbp-A8h]
  unsigned int v56; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v57; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v58; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR v60; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR v61; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  char *v63; // [rsp+B8h] [rbp-50h]
  int v64; // [rsp+C0h] [rbp-48h]
  int v65; // [rsp+C4h] [rbp-44h]
  _DWORD *v66; // [rsp+C8h] [rbp-40h]
  int v67; // [rsp+D0h] [rbp-38h]
  int v68; // [rsp+D4h] [rbp-34h]
  __int64 v69; // [rsp+D8h] [rbp-30h]
  _DWORD v70[2]; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD *v71; // [rsp+E8h] [rbp-20h]
  int v72; // [rsp+F0h] [rbp-18h]
  int v73; // [rsp+F4h] [rbp-14h]
  __int64 v74; // [rsp+F8h] [rbp-10h]
  _DWORD v75[2]; // [rsp+100h] [rbp-8h] BYREF
  unsigned int *v76; // [rsp+108h] [rbp+0h]
  int v77; // [rsp+110h] [rbp+8h]
  int v78; // [rsp+114h] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+118h] [rbp+10h] BYREF
  char *v80; // [rsp+128h] [rbp+20h]
  int v81; // [rsp+130h] [rbp+28h]
  int v82; // [rsp+134h] [rbp+2Ch]
  __int64 *v83; // [rsp+138h] [rbp+30h]
  int v84; // [rsp+140h] [rbp+38h]
  int v85; // [rsp+144h] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+148h] [rbp+40h] BYREF
  void *v87; // [rsp+158h] [rbp+50h]
  int v88; // [rsp+160h] [rbp+58h]
  int v89; // [rsp+164h] [rbp+5Ch]
  int *v90; // [rsp+168h] [rbp+60h]
  int v91; // [rsp+170h] [rbp+68h]
  int v92; // [rsp+174h] [rbp+6Ch]
  unsigned int *v93; // [rsp+178h] [rbp+70h]
  int v94; // [rsp+180h] [rbp+78h]
  int v95; // [rsp+184h] [rbp+7Ch]

  v2 = (unsigned __int16 *)(a1 + 1856);
  LODWORD(v54) = 0;
  v3 = (unsigned __int16 *)(a1 + 1840);
  LODWORD(valid) = 0;
  v52 = 0LL;
  v53 = 0;
  *(_OWORD *)UserData_8 = 0LL;
  if ( (unsigned int)dword_140E09E08 > 4 )
  {
    v7 = *v2;
    v8 = *((_QWORD *)v2 + 1);
    v68 = 0;
    v70[1] = 0;
    v73 = 0;
    v75[1] = 0;
    v78 = 0;
    EventDescriptor.Keyword = 0LL;
    v69 = v8;
    v74 = *((_QWORD *)v3 + 1);
    v76 = &v57;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_140E09E10;
    v66 = v70;
    v70[0] = v7;
    v9 = *v3;
    v71 = v75;
    v75[0] = v9;
    v67 = 2;
    v72 = 2;
    v57 = a2;
    v77 = 4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_140E09E10;
    v63 = byte_140053339;
    UserData.Reserved = 2;
    v64 = 43;
    v65 = 1;
    LODWORD(Event) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_140E09E28, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
  CmpTraceHiveFlushStart(v3, v2, a2);
  if ( (*(_DWORD *)(a1 + 160) & 0x8001) == 0 )
  {
    if ( *(_QWORD *)(a1 + 1544) )
    {
      v11 = a2 | 0xC;
      if ( (*(_BYTE *)(a1 + 160) & 2) == 0 )
        v11 = a2;
      v12 = (v11 >> 4) & 1;
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= 2 )
          goto LABEL_13;
        if ( (v11 & 1) != 0 )
          CmpLockRegistry(v10);
        else
          CmpLockRegistryFreezeAware(0LL);
        HvLockHiveFlusherExclusive(a1);
        if ( (*(_BYTE *)(a1 + 164) & 4) != 0 && (v11 & 0x40) == 0 )
        {
          HvUnlockHiveFlusherExclusive(a1);
          CmpUnlockRegistry(v14);
          LODWORD(valid) = -1073741431;
          goto LABEL_13;
        }
        if ( (v11 & 2) != 0
          && (CmpIsWriteQueueActive((_QWORD *)(a1 + 4208))
           || CmpIsWriteQueueActive((_QWORD *)(a1 + 4192)) && (v11 & 4) == 0) )
        {
LABEL_107:
          HvUnlockHiveFlusherExclusive(a1);
          CmpUnlockRegistry(v48);
          LODWORD(valid) = 0;
          goto LABEL_13;
        }
        if ( (v11 & 4) != 0 && CmpIsWriteQueueActive((_QWORD *)(a1 + 4208)) )
          goto LABEL_82;
        if ( CmpIsWriteQueueActive((_QWORD *)(a1 + 4192)) )
        {
          if ( v17 )
          {
            v49 = 0;
          }
          else if ( *(_DWORD *)(a1 + 104) || (v49 = 2, *(_BYTE *)(a1 + 195)) )
          {
            v49 = 1;
          }
          LODWORD(valid) = CmpWaitOnHiveWriteQueue(a1, v16);
          if ( (int)valid >= 0 )
            v13 += v49;
        }
        else
        {
          CmpGenerateFlushControlData(a1, v11, UserData_8);
          if ( (unsigned int)dword_140E09E08 > 4 )
          {
            v92 = 0;
            v95 = 0;
            v60.Keyword = 0LL;
            v58 = (int)UserData_8[0];
            v90 = &v58;
            v56 = (unsigned int)UserData_8[1];
            v93 = &v56;
            *(_DWORD *)&v60.Level = 4;
            v86.Ptr = (ULONGLONG)off_140E09E10;
            v91 = 4;
            v94 = 4;
            *(_DWORD *)&v60.Id = 184549376;
            v86.Size = *(unsigned __int16 *)off_140E09E10;
            v87 = &unk_140053370;
            v86.Reserved = 2;
            v88 = 63;
            v89 = 1;
            LODWORD(Event) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            EtwWriteTransfer(qword_140E09E28, &v60, 0LL, 0LL, 4u, &v86);
          }
          v18 = (int)UserData_8[0];
          if ( ((__int64)UserData_8[0] & 0x358) == 0 )
            goto LABEL_107;
          if ( ((__int64)UserData_8[0] & 2) == 0 )
            goto LABEL_23;
          if ( !CmpIsWriteQueueActive((_QWORD *)(a1 + 4208)) )
          {
            CmpAcquireWriteQueue(v31);
LABEL_23:
            if ( (v18 & 1) != 0 )
              CmpAcquireWriteQueue((_QWORD *)(a1 + 4192));
            if ( (v18 & 8) != 0 )
            {
              HvLockHiveWriter(a1);
              v19 = 0;
              LODWORD(valid) = HvMarkDirtyForFlush(a1);
              if ( (int)valid >= 0 )
              {
                HvUnlockHiveWriter(a1);
                goto LABEL_27;
              }
              HvUnlockHiveWriter(a1);
              LODWORD(valid) = -1073741823;
            }
            else
            {
              v19 = 0;
LABEL_27:
              if ( (v18 & 0x158) == 0 || (v20 = HvStoreModifiedData(a1, (v18 & 0x110) != 0, (v18 & 0x40) != 0)) == 0 )
              {
LABEL_29:
                if ( (v18 & 0x80u) != 0 )
                {
                  v50 = *(_DWORD *)(a1 + 280);
                  if ( v50 > *(_DWORD *)(a1 + 4228) )
                  {
                    LODWORD(v52) = *(_DWORD *)(a1 + 4228);
                    HIDWORD(v52) = v50 + 4096;
                    *(_DWORD *)(a1 + 4228) = 0;
                  }
                  else
                  {
                    v18 &= ~0x80u;
                    LODWORD(UserData_8[0]) = v18;
                  }
                }
                HvUnlockHiveFlusherExclusive(a1);
                CmpUnlockRegistry(v22);
                HIDWORD(UserData_8[1]) = 1;
                if ( (v18 & 0x80u) == 0 )
                {
                  v24 = HIDWORD(UserData_8[0]);
                  goto LABEL_32;
                }
                CmpLogFlushPhaseStart(v23, 1LL);
                valid = (unsigned int)HvExtendHivePrimaryFileValidDataLength(a1, HIDWORD(v52), v12);
                CmpLogFlushPhaseEnd(v32, 1LL, valid);
                v24 = HIDWORD(UserData_8[0]);
                if ( (int)valid >= 0 )
                {
                  v24 = HIDWORD(UserData_8[0]) | 0x21;
                  HIDWORD(UserData_8[0]) |= 0x21u;
LABEL_32:
                  HIDWORD(UserData_8[1]) = 2;
                  if ( (v18 & 8) != 0 )
                  {
                    CmpLogFlushPhaseStart(v23, 2LL);
                    valid = (unsigned int)HvWriteLogFile(a1, v25, v26, &v54);
                    CmpLogFlushPhaseEnd(v27, 2LL, valid);
                    if ( (int)valid >= 0 )
                    {
                      HvTruncateCurrentLogFileIfRequired(a1);
                      v24 |= 2u;
                      HIDWORD(UserData_8[0]) = v24;
                      goto LABEL_35;
                    }
                  }
                  else
                  {
LABEL_35:
                    HIDWORD(UserData_8[1]) = 3;
                    if ( (v18 & 0x10) != 0 )
                    {
                      CmpLogFlushPhaseStart(v23, 3LL);
                      LOBYTE(v41) = 1;
                      valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(a1, 0LL, v41, v12);
                      CmpLogFlushPhaseEnd(v42, 3LL, valid);
                      if ( (int)valid < 0 )
                      {
                        v18 |= 0x400u;
                        LODWORD(UserData_8[0]) = v18;
                        goto LABEL_46;
                      }
                      v24 |= 0x20u;
                      HIDWORD(UserData_8[0]) = v24;
                    }
                    CmpLogFlushPhaseStart(v23, 4LL);
                    if ( (v18 & 0x448) == 0x48 )
                    {
                      RtlMergeBitMaps(a1 + 1736, (unsigned int *)(a1 + 1688));
                      HvFreeDirtyData(a1);
                      v24 |= 4u;
                      HIDWORD(UserData_8[0]) = v24;
                    }
                    CmpLogFlushPhaseEnd(v28, 4LL, (unsigned int)valid);
                    if ( (v18 & 0x20) != 0 )
                    {
                      v44 = LODWORD(UserData_8[1]) >> 2;
                      LOBYTE(v44) = ((__int64)UserData_8[1] & 4) != 0;
                      HvSwapLogFiles(a1, v44);
                      v24 |= 8u;
                      HIDWORD(UserData_8[0]) = v24;
                    }
                    if ( (v18 & 0x45) == 0x41 )
                    {
                      CmpLockRegistry(v23);
                      HvLockHiveFlusherExclusive(a1);
                      v46 = (struct _KEVENT *)CmpReleaseWriteQueue(v45, a1 + 4192);
                      CmpWakeWriteQueueWaiters(a1 + 4192, v46);
                      v24 |= 0x10u;
                      HIDWORD(UserData_8[0]) = v24;
                      HvUnlockHiveFlusherExclusive(a1);
                      CmpUnlockRegistry(v47);
                    }
                    HIDWORD(UserData_8[1]) = 5;
                    if ( (v18 & 0x40) != 0 )
                    {
                      CmpLogFlushPhaseStart(v23, 5LL);
                      LOBYTE(v36) = 1;
                      valid = (unsigned int)HvWriteHivePrimaryFile(a1, v36, v12);
                      CmpLogFlushPhaseEnd(v37, 5LL, valid);
                      if ( (int)valid < 0 )
                        goto LABEL_46;
                      v24 |= 0x20u;
                      HIDWORD(UserData_8[0]) = v24;
                    }
                    HIDWORD(UserData_8[1]) = 6;
                    if ( (v18 & 0x100) != 0 )
                    {
                      CmpLogFlushPhaseStart(v23, 6LL);
                      LOBYTE(v33) = 1;
                      LOBYTE(v34) = 1;
                      valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(a1, v34, v33, v12);
                      CmpLogFlushPhaseEnd(v35, 6LL, valid);
                      if ( (int)valid < 0 )
                        goto LABEL_46;
                      v24 |= 0x20u;
                      HIDWORD(UserData_8[0]) = v24;
                      HvTruncateAllLogFilesIfRequired(a1);
                    }
                    if ( (v18 & 0x200) != 0 && (v24 & 0x20) == 0 )
                    {
                      CmpLogFlushPhaseStart(v23, 7LL);
                      if ( (int)CmpFileFlushAndPurge(a1, 0LL) >= 0 )
                      {
                        v24 |= 0x20u;
                        HIDWORD(UserData_8[0]) = v24;
                      }
                      CmpLogFlushPhaseEnd(v38, 7LL, (v24 & 0x20) == 0 ? 0xC0000001 : 0);
                    }
                    LODWORD(valid) = 0;
                    HIDWORD(UserData_8[1]) = 8;
                  }
                }
LABEL_46:
                CmpLockRegistry(v23);
                HvLockHiveFlusherExclusive(a1);
                if ( (int)valid < 0 && (v18 & 0x80u) != 0 && (v24 & 1) == 0 )
                  *(_DWORD *)(a1 + 4228) = v52;
                if ( (v24 & 0x20) != 0 )
                {
                  *(_DWORD *)(a1 + 4224) |= 1u;
                  *(_DWORD *)(a1 + 4228) = 0;
                }
                if ( (int)valid < 0 )
                {
                  if ( (v24 & 2) != 0 && (v18 & 0x400) != 0 )
                  {
                    *(_DWORD *)(a1 + 180) -= v54;
                    --*(_DWORD *)(a1 + 172);
                    v24 &= ~2u;
                    HIDWORD(UserData_8[0]) = v24;
                  }
                }
                else
                {
                  if ( (v18 & 0x800) != 0 )
                  {
                    LOWORD(v18) = UserData_8[0];
                    v21 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
                    *(_QWORD *)(a1 + 4144) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
                    if ( (v18 & 0x1000) == 0 )
                      CmpArmLazyWriter(1, 0LL, 0);
                    LOBYTE(v24) = BYTE4(UserData_8[0]);
                  }
                  if ( (v18 & 0x1000) != 0 )
                    CmpArmLazyWriter(1, 0LL, 1);
                }
                if ( (v18 & 0x40) != 0 )
                {
                  if ( (int)valid >= 0 )
                  {
                    HvUnCOWReconciledPages(a1);
                    HvFreeUnreconciledData(a1);
                    if ( (v18 & 1) == 0 || (v24 & 0x10) != 0 )
                    {
                      v21 = *(unsigned int *)(a1 + 168);
                      if ( (unsigned int)(v21 - 4) <= 1 )
                      {
                        v21 = (unsigned int)HvpLogTypeToLogArrayIndex(5 - (unsigned int)((_DWORD)v21 != 4), v39, v40);
                        *(_BYTE *)(v21 + a1 + 192) = 0;
                      }
                    }
                    else
                    {
                      HvResetLogFileStatusAll(a1);
                      *(_DWORD *)(a1 + 180) = 0;
                      if ( (unsigned __int8)HvIsCurrentLogSwappable() )
                        HvSwapLogFiles(v21, 0LL);
                    }
                  }
                  else
                  {
                    HvFoldBackUnreconciledData(a1);
                  }
                }
                if ( (v18 & 0x110) != 0 )
                  HvFreeUnreconciledData(a1);
                if ( (v18 & 8) != 0 && (v24 & 4) == 0 )
                {
                  if ( (v24 & 2) != 0 )
                  {
                    if ( (v18 & 0x40) == 0 )
                    {
                      RtlMergeBitMaps(a1 + 112, (unsigned int *)(a1 + 1688));
                      *(_DWORD *)(a1 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 112));
                    }
                    HvFreeDirtyData(a1);
                  }
                  else
                  {
                    HvFoldBackDirtyData(a1);
                  }
                }
LABEL_62:
                Event = 0LL;
                v29 = 0LL;
                if ( (v18 & 1) != 0 && (v24 & 0x10) == 0 )
                  v19 = 1;
                if ( v19 )
                  Event = (PRKEVENT)CmpReleaseWriteQueue(v21, a1 + 4192);
                if ( (v18 & 2) != 0 )
                  v29 = (struct _KEVENT *)CmpReleaseWriteQueue(v21, a1 + 4208);
                HvUnlockHiveFlusherExclusive(a1);
                CmpUnlockRegistry(v30);
                if ( v19 )
                  CmpWakeWriteQueueWaiters(a1 + 4192, Event);
                if ( (v18 & 2) != 0 )
                  CmpWakeWriteQueueWaiters(a1 + 4208, v29);
                goto LABEL_13;
              }
              v43 = v20 - 1;
              if ( !v43 )
              {
                LODWORD(valid) = 0;
                LOBYTE(v24) = BYTE4(UserData_8[0]) | 2;
                HIDWORD(UserData_8[0]) |= 2u;
                goto LABEL_62;
              }
              LODWORD(valid) = -1073741823;
              if ( v43 != 1 )
                goto LABEL_29;
            }
            LOBYTE(v24) = BYTE4(UserData_8[0]);
            goto LABEL_62;
          }
LABEL_82:
          CmpWaitOnHiveWriteQueue(a1, v31);
        }
      }
    }
    LODWORD(valid) = -1073741811;
  }
LABEL_13:
  CmpTraceHiveFlushStop((unsigned int)valid);
  if ( (unsigned int)dword_140E09E08 > 4 )
  {
    v85 = 0;
    v61.Keyword = 0LL;
    v83 = &v54;
    *(_DWORD *)&v61.Level = 516;
    v79.Ptr = (ULONGLONG)off_140E09E10;
    LODWORD(v54) = valid;
    v84 = 4;
    *(_DWORD *)&v61.Id = 184549376;
    v79.Size = *(unsigned __int16 *)off_140E09E10;
    v80 = byte_1400532C1;
    v79.Reserved = 2;
    v81 = 23;
    v82 = 1;
    v56 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_140E09E28, &v61, 0LL, 0LL, 3u, &v79);
  }
  return (unsigned int)valid;
}
