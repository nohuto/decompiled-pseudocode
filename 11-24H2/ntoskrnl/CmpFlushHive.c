/*
 * XREFs of CmpFlushHive @ 0x140965AC4
 * Callers:
 *     CmpDoFlushAll @ 0x14020DA6C (CmpDoFlushAll.c)
 *     CmpLoadKeyCommon @ 0x14045ABA8 (CmpLoadKeyCommon.c)
 *     CmShutdownSystem1 @ 0x140666298 (CmShutdownSystem1.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA720 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     CmFreezeRegistry @ 0x1407D896C (CmFreezeRegistry.c)
 *     CmReplaceKey @ 0x1407DA838 (CmReplaceKey.c)
 *     CmpDoFlushNextHive @ 0x1408E2580 (CmpDoFlushNextHive.c)
 *     CmpInitHiveFromFile @ 0x140930D5C (CmpInitHiveFromFile.c)
 *     CmpDoReconcileNextHive @ 0x140963B00 (CmpDoReconcileNextHive.c)
 *     CmpCompleteUnloadKey @ 0x140965368 (CmpCompleteUnloadKey.c)
 *     CmpTransMgrPrepare @ 0x140A013B8 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x140A030DC (CmpTransMgrSyncHive.c)
 *     NtFlushKey @ 0x140A6F280 (NtFlushKey.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140230640 (CmpArmLazyWriter.c)
 *     RtlNumberOfSetBits @ 0x140377880 (RtlNumberOfSetBits.c)
 *     EtwWriteTransfer @ 0x140410100 (EtwWriteTransfer.c)
 *     HvUnCOWReconciledPages @ 0x140427EB0 (HvUnCOWReconciledPages.c)
 *     RtlMergeBitMaps @ 0x1404281C0 (RtlMergeBitMaps.c)
 *     CmpIsWriteQueueActive @ 0x14047CD10 (CmpIsWriteQueueActive.c)
 *     HvMarkDirtyForFlush @ 0x140483DA4 (HvMarkDirtyForFlush.c)
 *     CmpAcquireWriteQueue @ 0x14048E38C (CmpAcquireWriteQueue.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HvLockHiveWriter @ 0x1408868E8 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140886CD8 (HvUnlockHiveWriter.c)
 *     HvFoldBackDirtyData @ 0x140963288 (HvFoldBackDirtyData.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x140964880 (HvTruncateAllLogFilesIfRequired.c)
 *     CmpWakeWriteQueueWaiters @ 0x140964900 (CmpWakeWriteQueueWaiters.c)
 *     CmpLogFlushPhaseEnd @ 0x1409649B0 (CmpLogFlushPhaseEnd.c)
 *     CmpLogFlushPhaseStart @ 0x140964A9C (CmpLogFlushPhaseStart.c)
 *     HvFoldBackUnreconciledData @ 0x140964B78 (HvFoldBackUnreconciledData.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140964BD0 (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvFreeDirtyData @ 0x140964C50 (HvFreeDirtyData.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140964F30 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpTraceHiveFlushStop @ 0x140966624 (CmpTraceHiveFlushStop.c)
 *     CmpTraceHiveFlushStart @ 0x1409666B4 (CmpTraceHiveFlushStart.c)
 *     CmpLockRegistryFreezeAware @ 0x1409667E8 (CmpLockRegistryFreezeAware.c)
 *     CmpGenerateFlushControlData @ 0x1409668D0 (CmpGenerateFlushControlData.c)
 *     CmpReleaseWriteQueue @ 0x140966BE4 (CmpReleaseWriteQueue.c)
 *     HvStoreModifiedData @ 0x140966BFC (HvStoreModifiedData.c)
 *     HvFreeUnreconciledData @ 0x14096736C (HvFreeUnreconciledData.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140968B00 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteLogFile @ 0x140968C2C (HvWriteLogFile.c)
 *     CmpFileFlushAndPurge @ 0x140969824 (CmpFileFlushAndPurge.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140969A74 (HvpLogTypeToLogArrayIndex.c)
 *     HvWriteHivePrimaryFile @ 0x14096B444 (HvWriteHivePrimaryFile.c)
 *     HvSwapLogFiles @ 0x14096B748 (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x140A699F8 (HvIsCurrentLogSwappable.c)
 *     HvResetLogFileStatusAll @ 0x140A81EE4 (HvResetLogFileStatusAll.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A847CC (CmpWaitOnHiveWriteQueue.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BBBA98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BBBAB4 (HvLockHiveFlusherExclusive.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpFlushHive(ULONG_PTR a1, unsigned int a2)
{
  unsigned __int16 *v2; // rbx
  unsigned __int16 *v3; // rsi
  int valid; // r15d
  int v7; // ecx
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  __int64 v14; // rcx
  LONG v15; // r8d
  __int64 v17; // rcx
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r14d
  char v22; // r12
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  struct _KEVENT *v34; // r13
  __int64 v35; // rcx
  LONG v36; // r8d
  _QWORD *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r8
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct _KEVENT *v52; // rax
  LONG v53; // r8d
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // esi
  unsigned int v57; // eax
  PEVENT_DATA_DESCRIPTOR UserData_8[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v59; // [rsp+48h] [rbp-C0h]
  int v60; // [rsp+50h] [rbp-B8h]
  __int64 v61; // [rsp+58h] [rbp-B0h] BYREF
  PRKEVENT Event; // [rsp+60h] [rbp-A8h]
  unsigned int v63; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v64; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v65; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR v67; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR v68; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  char *v70; // [rsp+B8h] [rbp-50h]
  int v71; // [rsp+C0h] [rbp-48h]
  int v72; // [rsp+C4h] [rbp-44h]
  _DWORD *v73; // [rsp+C8h] [rbp-40h]
  int v74; // [rsp+D0h] [rbp-38h]
  int v75; // [rsp+D4h] [rbp-34h]
  __int64 v76; // [rsp+D8h] [rbp-30h]
  _DWORD v77[2]; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD *v78; // [rsp+E8h] [rbp-20h]
  int v79; // [rsp+F0h] [rbp-18h]
  int v80; // [rsp+F4h] [rbp-14h]
  __int64 v81; // [rsp+F8h] [rbp-10h]
  _DWORD v82[2]; // [rsp+100h] [rbp-8h] BYREF
  unsigned int *v83; // [rsp+108h] [rbp+0h]
  int v84; // [rsp+110h] [rbp+8h]
  int v85; // [rsp+114h] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+118h] [rbp+10h] BYREF
  int *v87; // [rsp+128h] [rbp+20h]
  int v88; // [rsp+130h] [rbp+28h]
  int v89; // [rsp+134h] [rbp+2Ch]
  __int64 *v90; // [rsp+138h] [rbp+30h]
  int v91; // [rsp+140h] [rbp+38h]
  int v92; // [rsp+144h] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v93; // [rsp+148h] [rbp+40h] BYREF
  char *v94; // [rsp+158h] [rbp+50h]
  int v95; // [rsp+160h] [rbp+58h]
  int v96; // [rsp+164h] [rbp+5Ch]
  int *v97; // [rsp+168h] [rbp+60h]
  int v98; // [rsp+170h] [rbp+68h]
  int v99; // [rsp+174h] [rbp+6Ch]
  unsigned int *v100; // [rsp+178h] [rbp+70h]
  int v101; // [rsp+180h] [rbp+78h]
  int v102; // [rsp+184h] [rbp+7Ch]

  v2 = (unsigned __int16 *)(a1 + 1856);
  LODWORD(v61) = 0;
  v3 = (unsigned __int16 *)(a1 + 1840);
  valid = 0;
  v59 = 0LL;
  v60 = 0;
  *(_OWORD *)UserData_8 = 0LL;
  if ( (unsigned int)dword_140E09F58 > 4 )
  {
    v7 = *v2;
    v8 = *((_QWORD *)v2 + 1);
    v75 = 0;
    v77[1] = 0;
    v80 = 0;
    v82[1] = 0;
    v85 = 0;
    EventDescriptor.Keyword = 0LL;
    v76 = v8;
    v81 = *((_QWORD *)v3 + 1);
    v83 = &v64;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_140E09F60;
    v73 = v77;
    v77[0] = v7;
    v9 = *v3;
    v78 = v82;
    v82[0] = v9;
    v74 = 2;
    v79 = 2;
    v64 = a2;
    v84 = 4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_140E09F60;
    v70 = byte_1400551E5;
    UserData.Reserved = 2;
    v71 = 43;
    v72 = 1;
    LODWORD(Event) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_140E09F78, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
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
          goto LABEL_16;
        if ( (v11 & 1) != 0 )
          CmpLockRegistry(v10);
        else
          CmpLockRegistryFreezeAware(0LL);
        HvLockHiveFlusherExclusive(a1);
        if ( (*(_BYTE *)(a1 + 164) & 4) != 0 && (v11 & 0x40) == 0 )
        {
          HvUnlockHiveFlusherExclusive(a1);
          CmpUnlockRegistry(v14);
          valid = -1073741431;
          goto LABEL_16;
        }
        if ( (v11 & 2) != 0
          && (CmpIsWriteQueueActive((_QWORD *)(a1 + 4208))
           || CmpIsWriteQueueActive((_QWORD *)(a1 + 4192)) && (v11 & 4) == 0) )
        {
LABEL_115:
          HvUnlockHiveFlusherExclusive(a1);
          CmpUnlockRegistry(v55);
          valid = 0;
          goto LABEL_16;
        }
        if ( (v11 & 4) != 0 && CmpIsWriteQueueActive((_QWORD *)(a1 + 4208)) )
          goto LABEL_86;
        if ( CmpIsWriteQueueActive((_QWORD *)(a1 + 4192)) )
        {
          if ( v18 )
          {
            v56 = 0;
          }
          else if ( *(_DWORD *)(a1 + 104) || (v56 = 2, *(_BYTE *)(a1 + 195)) )
          {
            v56 = 1;
          }
          valid = CmpWaitOnHiveWriteQueue(a1, v17);
          if ( valid >= 0 )
            v13 += v56;
        }
        else
        {
          CmpGenerateFlushControlData(a1, v11, UserData_8);
          if ( (unsigned int)dword_140E09F58 > 4 )
          {
            v99 = 0;
            v102 = 0;
            v67.Keyword = 0LL;
            v65 = (int)UserData_8[0];
            v97 = &v65;
            v63 = (unsigned int)UserData_8[1];
            v100 = &v63;
            *(_DWORD *)&v67.Level = 4;
            v93.Ptr = (ULONGLONG)off_140E09F60;
            v98 = 4;
            v101 = 4;
            *(_DWORD *)&v67.Id = 184549376;
            v93.Size = *(unsigned __int16 *)off_140E09F60;
            v94 = byte_14005524B;
            v93.Reserved = 2;
            v95 = 63;
            v96 = 1;
            LODWORD(Event) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            EtwWriteTransfer(qword_140E09F78, &v67, 0LL, 0LL, 4u, &v93);
          }
          v21 = (int)UserData_8[0];
          if ( ((__int64)UserData_8[0] & 0x358) == 0 )
            goto LABEL_115;
          if ( ((__int64)UserData_8[0] & 2) == 0 )
            goto LABEL_26;
          if ( !CmpIsWriteQueueActive((_QWORD *)(a1 + 4208)) )
          {
            CmpAcquireWriteQueue(v37);
LABEL_26:
            if ( (v21 & 1) != 0 )
              CmpAcquireWriteQueue((_QWORD *)(a1 + 4192));
            if ( (v21 & 8) != 0 )
            {
              HvLockHiveWriter(a1);
              v22 = 0;
              valid = HvMarkDirtyForFlush(a1);
              if ( valid >= 0 )
              {
                HvUnlockHiveWriter(a1);
                goto LABEL_30;
              }
              HvUnlockHiveWriter(a1);
              valid = -1073741823;
            }
            else
            {
              v22 = 0;
LABEL_30:
              if ( (v21 & 0x158) == 0
                || (LOBYTE(v20) = (v21 & 0x40) != 0,
                    LOBYTE(v19) = (v21 & 0x110) != 0,
                    (v23 = HvStoreModifiedData(a1, v19, v20)) == 0) )
              {
LABEL_32:
                if ( (v21 & 0x80u) != 0 )
                {
                  v57 = *(_DWORD *)(a1 + 280);
                  if ( v57 > *(_DWORD *)(a1 + 4228) )
                  {
                    LODWORD(v59) = *(_DWORD *)(a1 + 4228);
                    HIDWORD(v59) = v57 + 4096;
                    *(_DWORD *)(a1 + 4228) = 0;
                  }
                  else
                  {
                    v21 &= ~0x80u;
                    LODWORD(UserData_8[0]) = v21;
                  }
                }
                HvUnlockHiveFlusherExclusive(a1);
                CmpUnlockRegistry(v25);
                HIDWORD(UserData_8[1]) = 1;
                if ( (v21 & 0x80u) == 0 )
                {
                  v27 = HIDWORD(UserData_8[0]);
                  goto LABEL_35;
                }
                CmpLogFlushPhaseStart(v26, 1);
                valid = HvExtendHivePrimaryFileValidDataLength(a1);
                CmpLogFlushPhaseEnd(v38, 1, valid);
                v27 = HIDWORD(UserData_8[0]);
                if ( valid >= 0 )
                {
                  v27 = HIDWORD(UserData_8[0]) | 0x21;
                  HIDWORD(UserData_8[0]) |= 0x21u;
LABEL_35:
                  HIDWORD(UserData_8[1]) = 2;
                  if ( (v21 & 8) != 0 )
                  {
                    CmpLogFlushPhaseStart(v26, 2);
                    valid = HvWriteLogFile(a1, v28, v29, &v61);
                    CmpLogFlushPhaseEnd(v30, 2, valid);
                    if ( valid >= 0 )
                    {
                      HvTruncateCurrentLogFileIfRequired(a1, v31, v32);
                      v27 |= 2u;
                      HIDWORD(UserData_8[0]) = v27;
                      goto LABEL_38;
                    }
                  }
                  else
                  {
LABEL_38:
                    HIDWORD(UserData_8[1]) = 3;
                    if ( (v21 & 0x10) != 0 )
                    {
                      CmpLogFlushPhaseStart(v26, 3);
                      LOBYTE(v47) = 1;
                      valid = HvValidateOrInvalidatePrimaryFileHeader(a1, 0LL, v47, v12);
                      CmpLogFlushPhaseEnd(v48, 3, valid);
                      if ( valid < 0 )
                      {
                        v21 |= 0x400u;
                        LODWORD(UserData_8[0]) = v21;
                        goto LABEL_48;
                      }
                      v27 |= 0x20u;
                      HIDWORD(UserData_8[0]) = v27;
                    }
                    CmpLogFlushPhaseStart(v26, 4);
                    if ( (v21 & 0x448) == 0x48 )
                    {
                      RtlMergeBitMaps(a1 + 1736, (unsigned int *)(a1 + 1688));
                      HvFreeDirtyData(a1);
                      v27 |= 4u;
                      HIDWORD(UserData_8[0]) = v27;
                    }
                    CmpLogFlushPhaseEnd(v33, 4, valid);
                    if ( (v21 & 0x20) != 0 )
                    {
                      v50 = LODWORD(UserData_8[1]) >> 2;
                      LOBYTE(v50) = ((__int64)UserData_8[1] & 4) != 0;
                      HvSwapLogFiles(a1, v50);
                      v27 |= 8u;
                      HIDWORD(UserData_8[0]) = v27;
                    }
                    if ( (v21 & 0x45) == 0x41 )
                    {
                      CmpLockRegistry(v26);
                      HvLockHiveFlusherExclusive(a1);
                      v52 = (struct _KEVENT *)CmpReleaseWriteQueue(v51, a1 + 4192);
                      v53 = -1073741823;
                      if ( (v27 & 2) != 0 )
                        v53 = valid;
                      CmpWakeWriteQueueWaiters(a1 + 4192, v52, v53);
                      v27 |= 0x10u;
                      HIDWORD(UserData_8[0]) = v27;
                      HvUnlockHiveFlusherExclusive(a1);
                      CmpUnlockRegistry(v54);
                    }
                    HIDWORD(UserData_8[1]) = 5;
                    if ( (v21 & 0x40) != 0 )
                    {
                      CmpLogFlushPhaseStart(v26, 5);
                      LOBYTE(v42) = 1;
                      valid = HvWriteHivePrimaryFile(a1, v42, v12);
                      CmpLogFlushPhaseEnd(v43, 5, valid);
                      if ( valid < 0 )
                        goto LABEL_48;
                      v27 |= 0x20u;
                      HIDWORD(UserData_8[0]) = v27;
                    }
                    HIDWORD(UserData_8[1]) = 6;
                    if ( (v21 & 0x100) != 0 )
                    {
                      CmpLogFlushPhaseStart(v26, 6);
                      LOBYTE(v39) = 1;
                      LOBYTE(v40) = 1;
                      valid = HvValidateOrInvalidatePrimaryFileHeader(a1, v40, v39, v12);
                      CmpLogFlushPhaseEnd(v41, 6, valid);
                      if ( valid < 0 )
                        goto LABEL_48;
                      v27 |= 0x20u;
                      HIDWORD(UserData_8[0]) = v27;
                      HvTruncateAllLogFilesIfRequired(a1);
                    }
                    if ( (v21 & 0x200) != 0 && (v27 & 0x20) == 0 )
                    {
                      CmpLogFlushPhaseStart(v26, 7);
                      if ( (int)CmpFileFlushAndPurge(a1, 0LL) >= 0 )
                      {
                        v27 |= 0x20u;
                        HIDWORD(UserData_8[0]) = v27;
                      }
                      CmpLogFlushPhaseEnd(v44, 7, (v27 & 0x20) == 0 ? 0xC0000001 : 0);
                    }
                    valid = 0;
                    HIDWORD(UserData_8[1]) = 8;
                  }
                }
LABEL_48:
                CmpLockRegistry(v26);
                HvLockHiveFlusherExclusive(a1);
                if ( valid < 0 && (v21 & 0x80u) != 0 && (v27 & 1) == 0 )
                  *(_DWORD *)(a1 + 4228) = v59;
                if ( (v27 & 0x20) != 0 )
                {
                  *(_DWORD *)(a1 + 4224) |= 1u;
                  *(_DWORD *)(a1 + 4228) = 0;
                }
                if ( valid < 0 )
                {
                  if ( (v27 & 2) != 0 && (v21 & 0x400) != 0 )
                  {
                    *(_DWORD *)(a1 + 180) -= v61;
                    --*(_DWORD *)(a1 + 172);
                    v27 &= ~2u;
                    HIDWORD(UserData_8[0]) = v27;
                  }
                }
                else
                {
                  if ( (v21 & 0x800) != 0 )
                  {
                    LOWORD(v21) = UserData_8[0];
                    v24 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
                    *(_QWORD *)(a1 + 4144) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
                    if ( (v21 & 0x1000) == 0 )
                      CmpArmLazyWriter(1, 0LL, 0);
                    LOBYTE(v27) = BYTE4(UserData_8[0]);
                  }
                  if ( (v21 & 0x1000) != 0 )
                    CmpArmLazyWriter(1, 0LL, 1);
                }
                if ( (v21 & 0x40) != 0 )
                {
                  if ( valid >= 0 )
                  {
                    HvUnCOWReconciledPages(a1);
                    HvFreeUnreconciledData(a1);
                    if ( (v21 & 1) == 0 || (v27 & 0x10) != 0 )
                    {
                      v24 = *(unsigned int *)(a1 + 168);
                      if ( (unsigned int)(v24 - 4) <= 1 )
                      {
                        v24 = (unsigned int)HvpLogTypeToLogArrayIndex(5 - (unsigned int)((_DWORD)v24 != 4), v45, v46);
                        *(_BYTE *)(v24 + a1 + 192) = 0;
                      }
                    }
                    else
                    {
                      HvResetLogFileStatusAll(a1);
                      *(_DWORD *)(a1 + 180) = 0;
                      if ( (unsigned __int8)HvIsCurrentLogSwappable() )
                        HvSwapLogFiles(v24, 0LL);
                    }
                  }
                  else
                  {
                    HvFoldBackUnreconciledData(a1);
                  }
                }
                if ( (v21 & 0x110) != 0 )
                  HvFreeUnreconciledData(a1);
                if ( (v21 & 8) != 0 && (v27 & 4) == 0 )
                {
                  if ( (v27 & 2) != 0 )
                  {
                    if ( (v21 & 0x40) == 0 )
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
LABEL_64:
                Event = 0LL;
                v34 = 0LL;
                if ( (v21 & 1) != 0 && (v27 & 0x10) == 0 )
                  v22 = 1;
                if ( v22 )
                  Event = (PRKEVENT)CmpReleaseWriteQueue(v24, a1 + 4192);
                if ( (v21 & 2) != 0 )
                  v34 = (struct _KEVENT *)CmpReleaseWriteQueue(v24, a1 + 4208);
                HvUnlockHiveFlusherExclusive(a1);
                CmpUnlockRegistry(v35);
                if ( v22 )
                {
                  if ( (v27 & 2) != 0 )
                    v36 = 0;
                  else
                    v36 = -1073741823;
                  CmpWakeWriteQueueWaiters(a1 + 4192, Event, v36);
                }
                if ( (v21 & 2) != 0 )
                {
                  if ( (v21 & 0x40) != 0 )
                    v15 = valid;
                  else
                    v15 = -1073741823;
                  CmpWakeWriteQueueWaiters(a1 + 4208, v34, v15);
                }
                goto LABEL_16;
              }
              v49 = v23 - 1;
              if ( !v49 )
              {
                valid = 0;
                LOBYTE(v27) = BYTE4(UserData_8[0]) | 2;
                HIDWORD(UserData_8[0]) |= 2u;
                goto LABEL_64;
              }
              valid = -1073741823;
              if ( v49 != 1 )
                goto LABEL_32;
            }
            LOBYTE(v27) = BYTE4(UserData_8[0]);
            goto LABEL_64;
          }
LABEL_86:
          CmpWaitOnHiveWriteQueue(a1, v37);
        }
      }
    }
    valid = -1073741811;
  }
LABEL_16:
  CmpTraceHiveFlushStop((unsigned int)valid);
  if ( (unsigned int)dword_140E09F58 > 4 )
  {
    v92 = 0;
    v68.Keyword = 0LL;
    v90 = &v61;
    *(_DWORD *)&v68.Level = 516;
    v86.Ptr = (ULONGLONG)off_140E09F60;
    LODWORD(v61) = valid;
    v91 = 4;
    *(_DWORD *)&v68.Id = 184549376;
    v86.Size = *(unsigned __int16 *)off_140E09F60;
    v87 = &dword_1400552BC;
    v86.Reserved = 2;
    v88 = 23;
    v89 = 1;
    v63 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_140E09F78, &v68, 0LL, 0LL, 3u, &v86);
  }
  return (unsigned int)valid;
}
