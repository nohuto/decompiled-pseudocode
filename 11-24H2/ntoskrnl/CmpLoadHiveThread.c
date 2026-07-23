/*
 * XREFs of CmpLoadHiveThread @ 0x1407CB550
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     RtlSetAllBits @ 0x140347620 (RtlSetAllBits.c)
 *     RtlNumberOfSetBits @ 0x140377880 (RtlNumberOfSetBits.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     RtlAreBitsClear @ 0x140442240 (RtlAreBitsClear.c)
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     ExIsSoftBoot @ 0x1404F7160 (ExIsSoftBoot.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x140665EF8 (CmpApplyAdminSdOnHiveFiles.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpMarkCurrentValueDirty @ 0x1407CC22C (CmpMarkCurrentValueDirty.c)
 *     CmpDiskFullWarning @ 0x1407D5EF0 (CmpDiskFullWarning.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407D8440 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407D84D0 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpMachineHiveCacheClaimEntry @ 0x1407D946C (CmpMachineHiveCacheClaimEntry.c)
 *     CmpInitBackupHive @ 0x1407DCBF4 (CmpInitBackupHive.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x1407DEC30 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpHiveCacheEntryCleanup @ 0x1407E5AA8 (CmpHiveCacheEntryCleanup.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     HvLockHiveWriter @ 0x1408868E8 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140886CD8 (HvUnlockHiveWriter.c)
 *     CmpInitHiveFromFile @ 0x140930D5C (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x140931FA4 (CmpOpenHiveFile.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     CmpDoFileSetSizeEx @ 0x1409696C4 (CmpDoFileSetSizeEx.c)
 *     CmpGetFileSize @ 0x14096B3AC (CmpGetFileSize.c)
 *     CmpLogFailureToGetFileSize @ 0x14096BDD8 (CmpLogFailureToGetFileSize.c)
 *     PsTerminateSystemThread @ 0x1409D16F0 (PsTerminateSystemThread.c)
 *     ExRaiseHardError @ 0x140A44F60 (ExRaiseHardError.c)
 *     HvpDropPagedBins @ 0x140A586B8 (HvpDropPagedBins.c)
 *     RtlAppendStringToString @ 0x140A7B170 (RtlAppendStringToString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BBBA98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BBBAB4 (HvLockHiveFlusherExclusive.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140BBBE48 (CmpIsHiveLoadUnloadRundownActive.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

NTSTATUS __fastcall CmpLoadHiveThread(ULONG_PTR BugCheckParameter3)
{
  int v1; // edi
  unsigned int v2; // r14d
  __int64 v3; // r15
  int FileSize; // ebx
  __int64 v5; // r8
  __int64 v6; // rdx
  wchar_t *v7; // rsi
  int v8; // eax
  _BYTE *v9; // rsi
  __int64 v10; // rcx
  wchar_t **v11; // r8
  wchar_t *v12; // rcx
  struct _KEVENT *v14; // r15
  __int64 v15; // r12
  int v16; // eax
  const UNICODE_STRING *v17; // r12
  int v18; // r15d
  __int64 v19; // r12
  int v20; // eax
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // r15
  int v24; // eax
  __int64 v25; // rcx
  int v26; // ebx
  __int128 v27; // xmm0
  __int64 v28; // rax
  int v29; // r15d
  unsigned int v30; // ebx
  int v31; // ebx
  ULONG v32; // ebx
  ULONG i; // r15d
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r15
  int v37; // eax
  int v38; // [rsp+38h] [rbp-D0h]
  int v39; // [rsp+40h] [rbp-C8h]
  __int64 v40; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A8h]
  unsigned __int64 Length; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+70h] [rbp-98h]
  unsigned __int64 v44; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR v45; // [rsp+80h] [rbp-88h] BYREF
  int v46; // [rsp+88h] [rbp-80h]
  int v47; // [rsp+8Ch] [rbp-7Ch]
  int v48; // [rsp+90h] [rbp-78h] BYREF
  __int64 v49; // [rsp+98h] [rbp-70h]
  __int64 v50; // [rsp+A0h] [rbp-68h]
  __int64 v51; // [rsp+A8h] [rbp-60h]
  __int64 v52; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v54; // [rsp+C8h] [rbp-40h] BYREF
  _KAFFINITY_EX v55; // [rsp+D8h] [rbp-30h] BYREF

  v1 = 0;
  v2 = BugCheckParameter3;
  v44 = 0LL;
  v48 = 0;
  v52 = 0LL;
  v46 = 0;
  memset(&v55, 0, 24);
  v47 = 0;
  LODWORD(v43) = 0;
  memset_0(&v55.StaticBitmap[3], 0, 0x1B0uLL);
  Length = 0LL;
  CmpInitializeThreadInfo(&v55);
  v3 = 23LL * v2;
  v53 = 0LL;
  v45 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  LOBYTE(v40) = 0;
  FileSize = 0;
  KeWaitForSingleObject(&CmpMachineHiveList[v3 + 8], Executive, 0, 0, 0LL);
  if ( v2 == CmpCheckHiveIndex )
  {
    KeWaitForSingleObject(&CmpLoadWorkerDebugEvent, Executive, 0, 0, 0LL);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v6 = 1LL;
  BYTE2(CmpMachineHiveList[v3 + 7]) = 1;
  v7 = CmpMachineHiveList[v3 + 3];
  if ( v7 )
  {
    v16 = *((_DWORD *)v7 + 40);
    v45 = (ULONG_PTR)CmpMachineHiveList[v3 + 3];
    if ( (v16 & 0x8001) != 0 )
    {
      if ( BYTE6(NlsMbOemCodePageTag) || CmpVolatileBoot )
      {
        if ( (v16 & 2) != 0 )
        {
          CmpLockRegistry();
          HvLockHiveFlusherExclusive(v7);
          *((_DWORD *)v7 + 40) &= ~2u;
          HvUnlockHiveFlusherExclusive(v7);
          CmpUnlockRegistry();
        }
        *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
        SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
        RtlAppendStringToString(&SystemHiveFullPathName, (const STRING *)((char *)&unk_140E09948 + 184 * v2));
      }
    }
    else
    {
      v17 = (const UNICODE_STRING *)&CmpMachineHiveList[v3 + 21];
      FileSize = CmpOpenHiveFile(v17, 7, 0LL, (__int64)&Length, 0LL, 0LL, (__int64)&v55.StaticBitmap[3]);
      if ( FileSize < 0 )
        goto LABEL_76;
      v18 = (16 * ((_DWORD)v43 == 2)) | 2;
      FileSize = CmpOpenHiveFile(v17, v18, 0LL, 0LL, 0LL, 0LL, (__int64)&v55.StaticBitmap[3]);
      if ( FileSize < 0 )
      {
        v1 = 16;
        goto LABEL_76;
      }
      FileSize = CmpOpenHiveFile(v17, v18, 0LL, 0LL, 0LL, 0LL, (__int64)&v55.StaticBitmap[3]);
      if ( FileSize < 0 )
      {
        v1 = 32;
        goto LABEL_76;
      }
      FileSize = CmpGetFileSize(v49, &v52);
      if ( FileSize < 0 )
      {
        v1 = 40;
        goto LABEL_76;
      }
      v19 = v50;
      v20 = CmpGetFileSize(v50, &v54);
      v22 = v20;
      if ( v20 < 0 )
      {
        CmpLogFailureToGetFileSize(v21, 4LL, (unsigned int)v20);
        *((_QWORD *)v7 + 7) = &v55.StaticBitmap[3];
        v55.StaticBitmap[3] = (unsigned __int64)v7;
        SetFailureLocation((__int64)&v55.StaticBitmap[3], 1, 22, v22, 43);
        *(_QWORD *)&v54 = 0LL;
      }
      v23 = v51;
      v24 = CmpGetFileSize(v51, (char *)&v54 + 8);
      v26 = v24;
      if ( v24 < 0 )
      {
        CmpLogFailureToGetFileSize(v25, 5LL, (unsigned int)v24);
        *((_QWORD *)v7 + 7) = &v55.StaticBitmap[3];
        v55.StaticBitmap[3] = (unsigned __int64)v7;
        SetFailureLocation((__int64)&v55.StaticBitmap[3], 1, 22, v26, 45);
        *((_QWORD *)&v54 + 1) = 0LL;
      }
      CmpBecomeActiveFlusherAndReconciler(v7);
      CmpLockRegistry();
      HvLockHiveFlusherExclusive(v7);
      v27 = v54;
      *((_QWORD *)v7 + 193) = v49;
      v28 = v52;
      *((_QWORD *)v7 + 197) = v19;
      *((_QWORD *)v7 + 198) = v23;
      *((_QWORD *)v7 + 225) = v28;
      *((_OWORD *)v7 + 113) = v27;
      *((_DWORD *)v7 + 40) &= ~2u;
      v29 = *((_DWORD *)v7 + 1028) & 0x8000;
      LODWORD(v41) = v29;
      *((_DWORD *)v7 + 1028) = HIDWORD(CmpMachineHiveList[23 * v2 + 4]);
      *((_DWORD *)v7 + 47) = HIDWORD(Length);
      v30 = *((_DWORD *)v7 + 70) + 4096;
      HvLockHiveWriter(v7);
      v31 = CmpDoFileSetSizeEx(v7, 0LL, v30, 1LL);
      HvUnlockHiveWriter(v7);
      if ( v31 < 0 )
        CmpCannotWriteConfiguration = 1;
      HvUnlockHiveFlusherExclusive(v7);
      CmpUnlockRegistry();
      if ( v29 )
      {
        FileSize = CmpRecoverFlushProtocolStateFromFiles((ULONG_PTR)v7);
        if ( FileSize < 0 )
        {
          v1 = 72;
          goto LABEL_76;
        }
      }
      CmpLockRegistry();
      HvLockHiveFlusherExclusive(v7);
      v32 = Length;
      if ( *((_DWORD *)v7 + 34) != (_DWORD)Length )
      {
        for ( i = 0; i < *((_DWORD *)v7 + 22); i += v32 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v7 + 44), i, v32) )
            RtlSetBits((PRTL_BITMAP)(v7 + 44), i, v32);
        }
        v29 = v41;
        *((_DWORD *)v7 + 26) = RtlNumberOfSetBits((PRTL_BITMAP)(v7 + 44));
        *((_DWORD *)v7 + 34) = v32;
      }
      v34 = *((_QWORD *)v7 + 8);
      if ( *(_DWORD *)(v34 + 4092) || (*(_DWORD *)(v34 + 4088) & 4) != 0 || v29 )
      {
        RtlSetAllBits((PRTL_BITMAP)(v7 + 44));
        *((_DWORD *)v7 + 26) = *((_DWORD *)v7 + 22);
      }
      HvUnlockHiveFlusherExclusive(v7);
      CmpUnlockRegistry();
      CmpLockRegistryExclusive();
      if ( v2 == 3 )
      {
        HvLockHiveFlusherShared(v7);
        CmpMarkCurrentValueDirty((ULONG_PTR)v7);
        HvUnlockHiveFlusherShared(v7);
      }
      CmpMachineHiveList[23 * v2 + 6] = v7;
      FileSize = HvpDropPagedBins((ULONG_PTR)v7);
      CmpUnlockRegistry();
      if ( FileSize < 0 )
      {
        v1 = 80;
LABEL_76:
        *((_QWORD *)v7 + 7) = &v55.StaticBitmap[3];
        v55.StaticBitmap[3] = (unsigned __int64)v7;
        SetFailureLocation((__int64)&v55.StaticBitmap[3], 0, 22, FileSize, v1);
        BYTE5(NlsMbOemCodePageTag) = 1;
        v44 = (unsigned __int64)&unk_140E09948 + 184 * v2;
        ExRaiseHardError(3221226008LL, 1LL, 1LL, &v44, 1, &v48);
        KeBugCheckEx(0x74u, 2uLL, 1uLL, v2, FileSize);
      }
      CmpFinishBeingActiveFlusherAndReconciler(v7);
      v35 = *((_QWORD *)v7 + 8);
      if ( *(_DWORD *)(v35 + 4092) || (*(_DWORD *)(v35 + 4088) & 4) != 0 )
      {
        if ( !ExIsSoftBoot() )
          CmpFlushHive(v7, 12LL);
        CmpLockRegistry();
        HvLockHiveFlusherExclusive(v7);
        *(_DWORD *)(*((_QWORD *)v7 + 8) + 4092LL) = 0;
        *(_DWORD *)(*((_QWORD *)v7 + 8) + 4088LL) &= ~4u;
        HvUnlockHiveFlusherExclusive(v7);
        CmpUnlockRegistry();
      }
      if ( CmpCannotWriteConfiguration )
        CmpDiskFullWarning();
      *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
      SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
      RtlAppendStringToString(&SystemHiveFullPathName, (const STRING *)((char *)&unk_140E09948 + 184 * v2));
      if ( CmpDoIdleProcessing && (int)CmpInitBackupHive(v7, CmpMachineHiveList[23 * v2]) < 0 )
        CmpDoIdleProcessing = 0;
    }
    *((_DWORD *)v7 + 1028) |= 4u;
    if ( v2 == 3 )
    {
      CmpLockRegistry();
      HvLockHiveFlusherShared(v7);
      *((_DWORD *)v7 + 40) |= 0x200u;
      HvUnlockHiveFlusherShared(v7);
      CmpUnlockRegistry();
    }
LABEL_94:
    if ( (unsigned __int8)CmpAcquireShutdownRundown() )
    {
      if ( (*((_DWORD *)v7 + 40) & 0x8001) == 0 )
      {
        if ( *((_QWORD *)v7 + 193) )
        {
          v36 = 23LL * v2;
          v37 = CmpApplyAdminSdOnHiveFiles((ULONG_PTR)v7, (ULONG_PTR)CmpMachineHiveList[v36]);
          FileSize = v37;
          if ( v37 < 0 )
            KeBugCheckEx(0x51u, 0x13uLL, (ULONG_PTR)v7, (ULONG_PTR)CmpMachineHiveList[v36], v37);
        }
      }
      CmpReleaseShutdownRundown();
    }
    else
    {
      FileSize = -1073741431;
    }
    v11 = CmpMachineHiveList;
    goto LABEL_20;
  }
  v41 = (unsigned int)Feature_MachineHiveCache__private_featureState;
  if ( (Feature_MachineHiveCache__private_featureState & 0x10) == 0 )
  {
    LODWORD(v41) = Feature_MachineHiveCache__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_MachineHiveCache__private_descriptor,
      Feature_MachineHiveCache__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v41,
      3,
      (__int64)&Feature_MachineHiveCache__private_descriptor);
  }
  v8 = CmpMachineHiveCacheClaimEntry((char *)&CmpMachineHiveCacheList + 832 * v2, v6, v5, &v53);
  FileSize = v8;
  if ( v8 >= 0 )
  {
    v9 = (char *)&CmpMachineHiveList[v3 + 7] + 3;
    *v9 = BYTE9(v53);
    v45 = v53;
    LOBYTE(v40) = BYTE8(v53);
  }
  else
  {
    SetFailureLocation((__int64)&v55.StaticBitmap[3], 1, 22, v8, 8);
    v9 = (char *)&CmpMachineHiveList[v3 + 7] + 3;
  }
  v10 = (unsigned int)Feature_MachineHiveCache__private_featureState;
  v41 = (unsigned int)Feature_MachineHiveCache__private_featureState;
  if ( (Feature_MachineHiveCache__private_featureState & 0x10) == 0 )
  {
    LODWORD(v41) = Feature_MachineHiveCache__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_MachineHiveCache__private_descriptor,
      Feature_MachineHiveCache__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v41,
      3,
      (__int64)&Feature_MachineHiveCache__private_descriptor);
  }
  if ( FileSize < 0 )
    FileSize = CmpInitHiveFromFile(
                 (unsigned int)(v3 * 8) + (unsigned int)&CmpMachineHiveList[21],
                 (int)CmpMachineHiveList[v3 + 4],
                 (int)&v45,
                 (int)v9,
                 22609921,
                 0LL,
                 v38,
                 v39,
                 (__int64)&v40,
                 &v55.StaticBitmap[3]);
  v11 = CmpMachineHiveList;
  if ( v2 == 6 && !BYTE4(CmpMachineHiveList[v3 + 7]) && (FileSize == -1073741772 || FileSize == -1073741765)
    || _bittest((const signed __int32 *)&CmpMachineHiveList[v3 + 4], 0xFu)
    && !BYTE4(CmpMachineHiveList[23 * v2 + 7])
    && FileSize == -1073741772 )
  {
    FileSize = 0;
    goto LABEL_20;
  }
  if ( FileSize != -1073741431 )
  {
    if ( FileSize < 0
      || (v7 = (wchar_t *)v45, !_bittest((const signed __int32 *)&CmpMachineHiveList[v3 + 4], 0xFu))
      && (!*(_QWORD *)(v45 + 1576) || !*(_QWORD *)(v45 + 1584)) )
    {
LABEL_33:
      BYTE5(NlsMbOemCodePageTag) = 1;
      KeBugCheckEx(0x74u, 2uLL, (ULONG_PTR)&v55.StaticBitmap[3], v2, FileSize);
    }
    *(_DWORD *)(v45 + 4112) = HIDWORD(CmpMachineHiveList[23 * v2 + 4]) | 4;
    CmpMachineHiveList[23 * v2 + 6] = v7;
    if ( (_BYTE)v40 )
    {
      CmpInitRmLogOnLoad = 1;
      v14 = &stru_140E098E0;
      v15 = 7LL;
      do
      {
        KeSetEvent(v14, 0, 0);
        v14 = (struct _KEVENT *)((char *)v14 + 184);
        --v15;
      }
      while ( v15 );
    }
    if ( (*((_DWORD *)v7 + 40) & 0x8001) == 0
      && CmpDoIdleProcessing
      && (int)CmpInitBackupHive(v7, CmpMachineHiveList[23 * v2]) < 0 )
    {
      CmpDoIdleProcessing = 0;
    }
    goto LABEL_94;
  }
  if ( !(unsigned __int8)CmpIsHiveLoadUnloadRundownActive(v10) )
    goto LABEL_33;
LABEL_20:
  BYTE1(v11[23 * v2 + 7]) = 1;
  KeSetEvent((PRKEVENT)((char *)&unk_140E098F8 + 184 * v2), 0, 0);
  if ( _InterlockedIncrement(&CmpLoadWorkerIncrement) == 6 && (unsigned int)CmpCheckHiveIndex < 7 )
    KeSetEvent(&CmpLoadWorkerDebugEvent, 0, 0);
  v12 = CmpMachineHiveList[23 * v2 + 22];
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *(_OWORD *)((char *)&unk_140E09948 + 184 * v2) = 0LL;
  }
  v44 = (unsigned int)Feature_MachineHiveCache__private_featureState;
  if ( (Feature_MachineHiveCache__private_featureState & 0x10) == 0 )
  {
    Length = __PAIR64__(HIDWORD(v44), Feature_MachineHiveCache__private_featureState | 1u);
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_MachineHiveCache__private_descriptor,
      Feature_MachineHiveCache__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      Length,
      3,
      (__int64)&Feature_MachineHiveCache__private_descriptor);
  }
  CmpHiveCacheEntryCleanup((char *)&CmpMachineHiveCacheList + 832 * v2, 6LL);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v55);
  return PsTerminateSystemThread(FileSize);
}
