/*
 * XREFs of CmpMountPreloadedHives @ 0x1407BC620
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x1407BAA30 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     RtlSetBits @ 0x140339430 (RtlSetBits.c)
 *     RtlSetAllBits @ 0x1403397C0 (RtlSetAllBits.c)
 *     RtlNumberOfSetBits @ 0x140395F40 (RtlNumberOfSetBits.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     RtlAppendUnicodeToString @ 0x140404370 (RtlAppendUnicodeToString.c)
 *     RtlAreBitsClear @ 0x14044C370 (RtlAreBitsClear.c)
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     ExIsSoftBoot @ 0x1404F7080 (ExIsSoftBoot.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     TmEnableCallbacks @ 0x1404F9C90 (TmEnableCallbacks.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpDiskFullWarning @ 0x1407C62B4 (CmpDiskFullWarning.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407C8754 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407C87E4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x1407CEE08 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     HvLockHiveWriter @ 0x140880B44 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140880F30 (HvUnlockHiveWriter.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     CmpOpenHiveFile @ 0x14090F91C (CmpOpenHiveFile.c)
 *     CmpQueryHiveRedirectionFileList @ 0x14091175C (CmpQueryHiveRedirectionFileList.c)
 *     HvpDropPagedBins @ 0x1409F6F54 (HvpDropPagedBins.c)
 *     CmpDoFileSetSizeEx @ 0x1409F8288 (CmpDoFileSetSizeEx.c)
 *     CmpGetFileSize @ 0x1409F9ABC (CmpGetFileSize.c)
 *     CmpLogFailureToGetFileSize @ 0x1409FA084 (CmpLogFailureToGetFileSize.c)
 *     ExRaiseHardError @ 0x140A4BC70 (ExRaiseHardError.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140A5100C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     SyspartGetSystemPartition @ 0x140A7CCCC (SyspartGetSystemPartition.c)
 *     CmRmFinalizeRecovery @ 0x140AA384C (CmRmFinalizeRecovery.c)
 *     CmpInitCmRM @ 0x140AD3ED8 (CmpInitCmRM.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BA9B20 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BA9B3C (HvLockHiveFlusherExclusive.c)
 */

void CmpMountPreloadedHives()
{
  int v0; // esi
  wchar_t *v1; // rbx
  __int64 i; // rax
  __int64 *v3; // rax
  int v4; // r14d
  ULONG_PTR v5; // rdi
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  const WCHAR *v9; // rdx
  int SystemPartition; // ebx
  int v11; // r13d
  int FileSize; // eax
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r13
  int v16; // eax
  __int64 v17; // rcx
  int v18; // ebx
  __int128 v19; // xmm0
  ULONG v20; // eax
  unsigned int v21; // ebx
  int v22; // ebx
  ULONG v23; // ebx
  ULONG j; // r12d
  int v25; // r13d
  int v26; // ebx
  __int64 v27; // rdx
  PKRESOURCEMANAGER *v28; // rcx
  _QWORD *v29; // rcx
  UNICODE_STRING Destination_8; // [rsp+58h] [rbp-B0h] BYREF
  int v31; // [rsp+68h] [rbp-A0h]
  int v32; // [rsp+6Ch] [rbp-9Ch]
  WCHAR Source[4]; // [rsp+70h] [rbp-98h] BYREF
  __int64 **p_Destination_8; // [rsp+78h] [rbp-90h] BYREF
  int v35; // [rsp+80h] [rbp-88h]
  int v36; // [rsp+84h] [rbp-84h]
  int v37; // [rsp+88h] [rbp-80h]
  int v38; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v39; // [rsp+90h] [rbp-78h]
  __int64 v40; // [rsp+98h] [rbp-70h]
  ULONG Length[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-60h]
  __int64 v43; // [rsp+B0h] [rbp-58h] BYREF
  __int64 Pool2; // [rsp+B8h] [rbp-50h]
  __int128 v45; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v46[54]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v47[3]; // [rsp+288h] [rbp+180h] BYREF

  v0 = 0;
  v35 = 0;
  v38 = 0;
  v43 = 0LL;
  Destination_8 = 0LL;
  memset_0(v46, 0, sizeof(v46));
  v36 = 0;
  v40 = 0LL;
  v37 = 0;
  v42 = 0LL;
  v31 = 0;
  memset(v47, 0, sizeof(v47));
  v39 = 0LL;
  *(_DWORD *)Source = 0;
  *(_QWORD *)Length = 0LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  v1 = (wchar_t *)Pool2;
  if ( !Pool2 )
    KeBugCheckEx(0x74u, 2uLL, 1uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  CmpLockRegistryExclusive();
  for ( i = CmpPreloadedHivesList; (__int64 *)i != &CmpPreloadedHivesList; i = *(_QWORD *)i )
    *(_DWORD *)(i + 2488) |= 4u;
  CmpUnlockRegistry();
  v3 = (__int64 *)CmpPreloadedHivesList;
  v4 = 22;
  while ( 1 )
  {
    p_Destination_8 = (__int64 **)v3;
    if ( v3 == &CmpPreloadedHivesList )
      break;
    v5 = (ULONG_PTR)(v3 - 203);
    v6 = *((_DWORD *)v3 - 366);
    v32 = v6 & 0x1000000;
    if ( (v6 & 1) != 0 )
      goto LABEL_58;
    *(_QWORD *)&Destination_8.Length = 0x10000000LL;
    Destination_8.Buffer = v1;
    if ( !(unsigned __int8)CmpQueryHiveRedirectionFileList((PUNICODE_STRING)(v5 + 1856), &Destination_8)
      || Destination_8.Length == 2 )
    {
      *(_QWORD *)&Destination_8.Length = 0x10000000LL;
      Destination_8.Buffer = v1;
      v7 = *(_DWORD *)(v5 + 160);
      if ( (v7 & 0x1000) != 0 )
      {
        v8 = PdcCreateWatchdogAroundClientCall();
        Source[0] = **((_WORD **)PsGetServerSiloGlobals(v8) + 155);
        RtlAppendUnicodeToString(&Destination_8, L"\\??\\");
        RtlAppendUnicodeToString(&Destination_8, Source);
        v9 = L":";
        goto LABEL_18;
      }
      if ( (v7 & 0x2000) != 0 )
      {
        SystemPartition = SyspartGetSystemPartition(v1);
        if ( SystemPartition < 0 )
          goto LABEL_65;
      }
      else if ( (v7 & 0x200000) != 0 )
      {
        v9 = L"\\OSDataRoot";
LABEL_18:
        RtlAppendUnicodeToString(&Destination_8, v9);
      }
      RtlAppendUnicodeToString(&Destination_8, *(PCWSTR *)(v5 + 1832));
    }
    ExFreePoolWithTag(*(PVOID *)(v5 + 1832), 0);
    *(_OWORD *)(v5 + 1824) = 0LL;
    *(_WORD *)(v5 + 1826) = 0;
    *(_QWORD *)(v5 + 1832) = 0LL;
    SystemPartition = CmpOpenHiveFile(&Destination_8, 7, 0LL, (__int64)Length, 0LL, 0LL, (__int64)v46);
    if ( SystemPartition < 0 )
    {
      v0 = 16;
      goto LABEL_65;
    }
    v11 = 2;
    if ( v31 == 2 )
      v11 = 18;
    SystemPartition = CmpOpenHiveFile(&Destination_8, v11, 0LL, 0LL, 0LL, 0LL, (__int64)v46);
    if ( SystemPartition < 0 )
    {
      v0 = 32;
LABEL_65:
      *(_QWORD *)(v5 + 56) = v46;
      v4 = 21;
      v46[0] = v5;
      v29 = *(_QWORD **)(v5 + 56);
LABEL_66:
      SetFailureLocation((__int64)v29, 0, v4, SystemPartition, v0);
      BYTE6(NlsMbOemCodePageTag) = 1;
      p_Destination_8 = (__int64 **)&Destination_8;
      ExRaiseHardError(3221226008LL, 1LL, 1LL, &p_Destination_8, 1, &v38);
      KeBugCheckEx(0x74u, 2uLL, 1uLL, v5, SystemPartition);
    }
    SystemPartition = CmpOpenHiveFile(&Destination_8, v11, 0LL, 0LL, 0LL, 0LL, (__int64)v46);
    if ( SystemPartition < 0 )
    {
      v0 = 48;
      goto LABEL_65;
    }
    SystemPartition = CmpGetFileSize(v39, &v43);
    if ( SystemPartition < 0 )
    {
      v0 = 40;
      *(_QWORD *)(v5 + 56) = v46;
      v29 = v46;
      v46[0] = v5;
      goto LABEL_66;
    }
    FileSize = CmpGetFileSize(v40, &v45);
    v14 = FileSize;
    if ( FileSize < 0 )
    {
      CmpLogFailureToGetFileSize(v13, 4LL, (unsigned int)FileSize);
      *(_QWORD *)(v5 + 56) = v46;
      v46[0] = v5;
      SetFailureLocation((__int64)v46, 1, 22, v14, 43);
      *(_QWORD *)&v45 = 0LL;
    }
    v15 = v42;
    v16 = CmpGetFileSize(v42, (char *)&v45 + 8);
    v18 = v16;
    if ( v16 < 0 )
    {
      CmpLogFailureToGetFileSize(v17, 5LL, (unsigned int)v16);
      *(_QWORD *)(v5 + 56) = v46;
      v46[0] = v5;
      SetFailureLocation((__int64)v46, 1, 22, v18, 45);
      *((_QWORD *)&v45 + 1) = 0LL;
    }
    CmpBecomeActiveFlusherAndReconciler(v5);
    CmpLockRegistry();
    HvLockHiveFlusherExclusive(v5);
    v19 = v45;
    *(_QWORD *)(v5 + 1544) = v39;
    *(_QWORD *)(v5 + 1576) = v40;
    *(_QWORD *)(v5 + 1800) = v43;
    v20 = Length[1];
    *(_QWORD *)(v5 + 1584) = v15;
    *(_OWORD *)(v5 + 1808) = v19;
    *(_DWORD *)(v5 + 160) &= ~2u;
    v21 = *(_DWORD *)(v5 + 280) + 4096;
    *(_DWORD *)(v5 + 188) = v20;
    HvLockHiveWriter(v5);
    v22 = CmpDoFileSetSizeEx(v5, 0LL, v21, 1LL);
    HvUnlockHiveWriter(v5);
    if ( v22 < 0 )
      CmpCannotWriteConfiguration = 1;
    if ( (*(_DWORD *)(v5 + 4112) & 0x8000) != 0 )
    {
LABEL_36:
      HvUnlockHiveFlusherExclusive(v5);
      CmpUnlockRegistry();
      SystemPartition = CmpRecoverFlushProtocolStateFromFiles(v5);
      if ( SystemPartition < 0 )
      {
        v0 = 72;
        *(_QWORD *)(v5 + 56) = v46;
        v29 = v46;
        v46[0] = v5;
        goto LABEL_66;
      }
      CmpLockRegistry();
      HvLockHiveFlusherExclusive(v5);
      goto LABEL_38;
    }
    if ( v32 )
    {
      if ( v31 != 2 )
        goto LABEL_36;
      *(_QWORD *)(*(_QWORD *)(v5 + 64) + 12LL) = MEMORY[0xFFFFF78000000014];
      HvLockHiveWriter(v5);
      HvCheckAndUpdateHiveBackupTimeStamp(v5);
      HvUnlockHiveWriter(v5);
    }
LABEL_38:
    v23 = Length[0];
    if ( *(_DWORD *)(v5 + 136) != Length[0] )
    {
      for ( j = 0; j < *(_DWORD *)(v5 + 88); j += v23 )
      {
        if ( !RtlAreBitsClear((PRTL_BITMAP)(v5 + 88), j, v23) )
          RtlSetBits((PRTL_BITMAP)(v5 + 88), j, v23);
      }
      *(_DWORD *)(v5 + 104) = RtlNumberOfSetBits((PRTL_BITMAP)(v5 + 88));
      *(_DWORD *)(v5 + 136) = v23;
    }
    v25 = v32;
    if ( *(_DWORD *)(*(_QWORD *)(v5 + 64) + 4092LL) || v32 )
    {
      RtlSetAllBits((PRTL_BITMAP)(v5 + 88));
      *(_DWORD *)(v5 + 104) = *(_DWORD *)(v5 + 88);
    }
    HvUnlockHiveFlusherExclusive(v5);
    CmpUnlockRegistry();
    CmpLockRegistryExclusive();
    SystemPartition = HvpDropPagedBins(v5);
    CmpUnlockRegistry();
    if ( SystemPartition < 0 )
    {
      v0 = 96;
      goto LABEL_65;
    }
    CmpFinishBeingActiveFlusherAndReconciler(v5);
    if ( *(_DWORD *)(*(_QWORD *)(v5 + 64) + 4092LL) || v25 )
    {
      if ( !ExIsSoftBoot() )
        CmpFlushHive(v5, 12LL);
      CmpLockRegistry();
      HvLockHiveFlusherExclusive(v5);
      *(_DWORD *)(*(_QWORD *)(v5 + 64) + 4092LL) = 0;
      HvUnlockHiveFlusherExclusive(v5);
      CmpUnlockRegistry();
    }
    if ( CmpCannotWriteConfiguration )
      CmpDiskFullWarning();
    CmpLockRegistry();
    HvLockHiveFlusherExclusive(v5);
    v26 = *(_DWORD *)(v5 + 160);
    *(_DWORD *)(v5 + 160) = v26 & 0xFFFFF7FF;
    HvUnlockHiveFlusherExclusive(v5);
    CmpUnlockRegistry();
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v47);
    LOBYTE(v27) = (v26 & 0x800) != 0;
    CmpInitCmRM(v5, v27);
    KiUnstackDetachProcess((__int64)v47, 0LL);
    v28 = *(PKRESOURCEMANAGER **)(v5 + 4152);
    *(_DWORD *)(v5 + 4112) |= 8u;
    if ( v28 )
    {
      TmEnableCallbacks(v28[7], CmKtmNotification, v28);
      CmRmFinalizeRecovery(*(_QWORD *)(v5 + 4152));
    }
    v1 = (wchar_t *)Pool2;
LABEL_58:
    v3 = *p_Destination_8;
  }
  ExFreePoolWithTag(v1, 0);
}
