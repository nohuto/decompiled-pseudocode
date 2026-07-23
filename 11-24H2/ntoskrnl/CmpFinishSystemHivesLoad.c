/*
 * XREFs of CmpFinishSystemHivesLoad @ 0x1407CA720
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpRecheckHiveVolumePolicy @ 0x14045AFD0 (CmpRecheckHiveVolumePolicy.c)
 *     RtlUnicodeStringCopyString @ 0x14045D760 (RtlUnicodeStringCopyString.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     TmEnableCallbacks @ 0x1404F9CD0 (TmEnableCallbacks.c)
 *     CmpNotifyMachineHiveLoaded @ 0x140666178 (CmpNotifyMachineHiveLoaded.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsBootPhaseComplete @ 0x1407719D8 (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x1407B6CB4 (ExpRefreshSystemTime.c)
 *     CmpCreatePerfKeys @ 0x1407CA480 (CmpCreatePerfKeys.c)
 *     CmpInterlockedFunction @ 0x1407CB280 (CmpInterlockedFunction.c)
 *     CmpLinkKeyToHive @ 0x1407CB440 (CmpLinkKeyToHive.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     CmpLoadSystemVersionData @ 0x1407D76DC (CmpLoadSystemVersionData.c)
 *     CmpSetVersionData @ 0x1407D7E74 (CmpSetVersionData.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD764 (CmpHiveRootSecurityDescriptor.c)
 *     CmpUnlockHiveList @ 0x140840614 (CmpUnlockHiveList.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     CmpLinkHiveToMaster @ 0x14092E380 (CmpLinkHiveToMaster.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     CmpLockHiveListExclusive @ 0x140A52D38 (CmpLockHiveListExclusive.c)
 *     CmpAddToHiveFileList @ 0x140A63874 (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x140AA3958 (CmRmFinalizeRecovery.c)
 *     CmpInitCmRM @ 0x140AE6674 (CmpInitCmRM.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140BBBE48 (CmpIsHiveLoadUnloadRundownActive.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

_KAFFINITY_EX *__fastcall CmpFinishSystemHivesLoad(PRKEVENT Event)
{
  unsigned int v2; // edi
  char v3; // r12
  struct _KWAIT_BLOCK *WaitBlockArray; // rbx
  PVOID *v5; // r14
  char *v6; // rdx
  PVOID *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int i; // r15d
  __int64 v13; // rbx
  const WCHAR *v14; // rdx
  char v15; // si
  int v16; // r9d
  wchar_t *v17; // r8
  PVOID v18; // r14
  int v19; // eax
  wchar_t **v20; // rcx
  wchar_t *v21; // rax
  PVOID v22; // rcx
  wchar_t *v23; // rdx
  wchar_t *v24; // rcx
  char v25; // r14
  volatile signed __int32 *v26; // rdi
  char *v27; // rax
  char *v28; // rsi
  signed __int64 v29; // rax
  signed __int64 v30; // rdx
  signed __int64 v31; // rtt
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  volatile signed __int32 *v35; // rdi
  char *v36; // rax
  char *v37; // rsi
  signed __int64 v38; // rax
  signed __int64 v39; // rdx
  signed __int64 v40; // rtt
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  const WCHAR *v44; // rdx
  const WCHAR *v45; // rcx
  volatile signed __int32 *v46; // rdi
  char *v47; // rax
  char *v48; // rsi
  signed __int64 v49; // rax
  signed __int64 v50; // rdx
  signed __int64 v51; // rtt
  ULONG_PTR v52; // rcx
  unsigned int v53; // edi
  unsigned __int64 *v54; // rbx
  char *v55; // rax
  char *v56; // rsi
  signed __int64 v57; // rax
  signed __int64 v58; // rdx
  unsigned __int64 v59; // rtt
  char v60; // al
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 *v64; // rbx
  char *v65; // rax
  char *v66; // rsi
  signed __int64 v67; // rax
  signed __int64 v68; // rdx
  unsigned __int64 v69; // rtt
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  char *v75; // [rsp+78h] [rbp-90h]
  PVOID P; // [rsp+80h] [rbp-88h]
  HANDLE KeyHandle; // [rsp+88h] [rbp-80h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+90h] [rbp-78h]
  PPRIVILEGE_SET Pool; // [rsp+98h] [rbp-70h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  _KAFFINITY_EX v81; // [rsp+D0h] [rbp-38h] BYREF
  char v82; // [rsp+2C8h] [rbp+1C0h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(&v81, 0, 72);
  CmpInitializeThreadInfo(&v81);
  v3 = 0;
  memset_0(&v81.StaticBitmap[8], 0, 0x1B0uLL);
  BYTE1(NlsMbOemCodePageTag) = 0;
  CmpMountThread = (__int64)KeGetCurrentThread();
  DestinationString.Buffer = (wchar_t *)0x800000;
  v75 = &v82;
  RtlUnicodeStringCopyString((PUNICODE_STRING)&DestinationString.Buffer, L"\\REGISTRY\\");
  DestinationString.MaximumLength = (unsigned __int16)DestinationString.Buffer;
  Privileges = (PPRIVILEGE_SET)CmpAllocatePool(0x40uLL, 0x150uLL, 0x20204D43u);
  WaitBlockArray = (struct _KWAIT_BLOCK *)Privileges;
  if ( !Privileges )
    KeBugCheckEx(0x74u, 2uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  Pool = (PPRIVILEGE_SET)CmpAllocatePool(0x40uLL, 0x38uLL, 0x20204D43u);
  v5 = (PVOID *)Pool;
  if ( !Pool )
    KeBugCheckEx(0x74u, 2uLL, 6uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  P = (PVOID)CmpHiveRootSecurityDescriptor();
  v6 = (char *)&unk_140E098F8;
  v7 = v5;
  v8 = 7LL;
  do
  {
    *v7 = v6;
    v6 += 184;
    ++v7;
    --v8;
  }
  while ( v8 );
  if ( !Event )
  {
    KeWaitForSingleObject(&stru_140E09B20, Executive, 0, 0, 0LL);
    KeSetEvent(&stru_140E09B20, 0, 0);
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v81.StaticBitmap[2]);
    LOBYTE(v9) = CmpInitRmLogOnLoad;
    CmpInitCmRM(0LL, v9);
    KiUnstackDetachProcess((__int64)&v81.StaticBitmap[2], 0, v10, v11);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery(CmRmSystem);
    }
  }
  while ( 2 )
  {
    KeWaitForMultipleObjects(7u, v5, WaitAny, Executive, 0, 0, 0LL, WaitBlockArray);
    LOBYTE(DestinationString.Length) = 0;
    for ( i = 0; i < 7; ++i )
    {
      v13 = 23LL * i;
      if ( LOBYTE(CmpMachineHiveList[v13 + 7]) )
        goto LABEL_15;
      if ( !BYTE1(CmpMachineHiveList[v13 + 7]) )
      {
        LOBYTE(DestinationString.Length) = 1;
LABEL_15:
        v2 = 0;
        continue;
      }
      v14 = CmpMachineHiveList[v13 + 1];
      v15 = 0;
      LOWORD(DestinationString.Buffer) = DestinationString.MaximumLength;
      RtlAppendUnicodeToString((PUNICODE_STRING)&DestinationString.Buffer, v14);
      RtlAppendUnicodeToString((PUNICODE_STRING)&DestinationString.Buffer, CmpMachineHiveList[v13 + 2]);
      CmpLockRegistryExclusive();
      if ( CmpMachineHiveList[v13 + 3] || (v17 = CmpMachineHiveList[v13 + 6]) == 0LL )
      {
        v2 = 0;
      }
      else
      {
        LOBYTE(v16) = BYTE3(CmpMachineHiveList[v13 + 7]);
        v18 = P;
        v19 = CmpLinkHiveToMaster(
                (int)&DestinationString.Buffer,
                0,
                (int)v17,
                v16,
                (int)CmpMachineHiveList[v13 + 5],
                0,
                0LL,
                (__int64)P,
                0LL,
                0LL,
                1,
                (__int64)&v81.StaticBitmap[8]);
        if ( v19 < 0 )
        {
          if ( !(unsigned __int8)CmpIsHiveLoadUnloadRundownActive(v19) )
            KeBugCheckEx(0x73u, 1uLL, v52, i, (ULONG_PTR)&DestinationString.Buffer);
          CmpLoadingSystemHivesActive = 0;
          CmpMountThread = 0LL;
          CmpUnlockRegistry();
          v53 = 0;
          v54 = &qword_140E09928;
          do
          {
            if ( *((_DWORD *)v54 - 17) && !*((_BYTE *)v54 - 80) )
            {
              if ( !*((_BYTE *)v54 - 79) )
                KeWaitForSingleObject(v54 - 6, Executive, 0, 0, 0LL);
              v55 = (char *)KeAbPreAcquire((__int64)v54, 0LL);
              v56 = v55;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v54, 0LL) )
                ExfAcquirePushLockExclusiveEx(v54, v55, (__int64)v54);
              if ( v56 )
                v56[10] = 1;
              KeSetEvent((PRKEVENT)v54 - 1, 0, 0);
              CmpNotifyMachineHiveLoaded(v53);
              _m_prefetchw(v54);
              v57 = *v54;
              v58 = *v54 - 16;
              if ( (*v54 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v58 = 0LL;
              if ( (v57 & 2) != 0
                || (v59 = *v54, v59 != _InterlockedCompareExchange64((volatile signed __int64 *)v54, v58, v57)) )
              {
                ExfReleasePushLock(v54);
              }
              KeAbPostRelease((ULONG_PTR)v54);
            }
            ++v53;
            v54 += 23;
          }
          while ( v53 < 7 );
          goto LABEL_132;
        }
        CmpLockHiveListExclusive(v19);
        v20 = (wchar_t **)qword_140FD9D18;
        v21 = CmpMachineHiveList[v13 + 6] + 804;
        if ( *(__int64 **)qword_140FD9D18 != &CmpHiveListHead )
          __fastfail(3u);
        *(_QWORD *)v21 = &CmpHiveListHead;
        *((_QWORD *)v21 + 1) = v20;
        *v20 = v21;
        qword_140FD9D18 = (__int64)v21;
        CmpUnlockHiveList();
        CmpRecheckHiveVolumePolicy((__int64)CmpMachineHiveList[v13 + 6]);
        v2 = 0;
        if ( BYTE3(CmpMachineHiveList[v13 + 7]) )
        {
          *((_DWORD *)CmpMachineHiveList[v13 + 6] + 40) |= 0x20u;
          *((_QWORD *)CmpMachineHiveList[v13 + 6] + 521) = KeGetCurrentThread();
          CmpUnlockRegistry();
          CmpFlushHive(CmpMachineHiveList[v13 + 6], 4LL);
          CmpLockRegistryExclusive();
          *((_DWORD *)CmpMachineHiveList[v13 + 6] + 40) &= ~0x20u;
          *((_QWORD *)CmpMachineHiveList[v13 + 6] + 521) = 0LL;
        }
        v22 = CmRmSystem;
        if ( CmRmSystem )
        {
          v23 = CmpMachineHiveList[v13 + 6];
          if ( (*((_DWORD *)v23 + 40) & 2) == 0 && !*((_QWORD *)v23 + 519) )
          {
            ++*((_DWORD *)CmRmSystem + 16);
            *((_QWORD *)CmpMachineHiveList[v13 + 6] + 519) = v22;
          }
        }
      }
      v24 = CmpMachineHiveList[v13 + 6];
      if ( v24 )
        CmpAddToHiveFileList(v24);
      LOBYTE(CmpMachineHiveList[v13 + 7]) = 1;
      if ( i == 3 )
      {
        if ( !Event )
        {
          CmpUnlockRegistry();
          CmpMountPreloadedHives();
          CmpLockRegistryExclusive();
          v25 = 1;
          CmpInterlockedFunction();
          v26 = (volatile signed __int32 *)&CmpMachineHiveList[v13 + 17];
          v27 = (char *)KeAbPreAcquire((__int64)v26, 0LL);
          v28 = v27;
          if ( _interlockedbittestandset64(v26, 0LL) )
            ExfAcquirePushLockExclusiveEx(
              (unsigned __int64 *)&CmpMachineHiveList[v13 + 17],
              v27,
              (__int64)&CmpMachineHiveList[v13 + 17]);
          if ( v28 )
            v28[10] = 1;
          KeSetEvent((PRKEVENT)&CmpMachineHiveList[v13 + 14], 0, 0);
          CmpNotifyMachineHiveLoaded(3u);
          _m_prefetchw((const void *)v26);
          v29 = *(_QWORD *)v26;
          v30 = *(_QWORD *)v26 - 16LL;
          if ( (*(_QWORD *)v26 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v30 = 0LL;
          if ( (v29 & 2) != 0
            || (v31 = *(_QWORD *)v26, v31 != _InterlockedCompareExchange64((volatile signed __int64 *)v26, v30, v29)) )
          {
            ExfReleasePushLock(&CmpMachineHiveList[v13 + 17]);
          }
          KeAbPostRelease((ULONG_PTR)&CmpMachineHiveList[v13 + 17]);
          v2 = 0;
          if ( byte_140E09A48 && CmFastBoot )
          {
            CmpUnlockRegistry();
            v25 = 0;
            ExpRefreshSystemTime();
            if ( !v3 )
            {
              CmpLoadSystemVersionData();
              CmpSetVersionData();
              v3 = 1;
            }
            PsBootPhaseComplete(v33, v32, v34);
          }
          if ( !v3 )
            CmpLoadSystemVersionData();
          v15 = 1;
          if ( !v25 )
            continue;
        }
        goto LABEL_73;
      }
      if ( i != 2 )
      {
        if ( i == 1 )
        {
          v44 = L"\\Registry\\Machine\\SAM\\SAM";
          v45 = L"\\Registry\\Machine\\Security\\SAM";
          goto LABEL_72;
        }
        if ( i == 4 )
        {
          v44 = L"\\Registry\\User\\.Default";
          v45 = L"\\Registry\\User\\S-1-5-18";
LABEL_72:
          CmpLinkKeyToHive(v45, v44);
        }
LABEL_73:
        CmpUnlockRegistry();
        goto LABEL_74;
      }
      CmpUnlockRegistry();
      if ( !Event )
      {
        v35 = (volatile signed __int32 *)&CmpMachineHiveList[v13 + 17];
        v36 = (char *)KeAbPreAcquire((__int64)v35, 0LL);
        v37 = v36;
        if ( _interlockedbittestandset64(v35, 0LL) )
          ExfAcquirePushLockExclusiveEx(
            (unsigned __int64 *)&CmpMachineHiveList[v13 + 17],
            v36,
            (__int64)&CmpMachineHiveList[v13 + 17]);
        if ( v37 )
          v37[10] = 1;
        KeSetEvent((PRKEVENT)&CmpMachineHiveList[v13 + 14], 0, 0);
        v15 = 1;
        CmpNotifyMachineHiveLoaded(2u);
        _m_prefetchw((const void *)v35);
        v38 = *(_QWORD *)v35;
        v39 = *(_QWORD *)v35 - 16LL;
        if ( (*(_QWORD *)v35 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v39 = 0LL;
        if ( (v38 & 2) != 0
          || (v40 = *(_QWORD *)v35, v40 != _InterlockedCompareExchange64((volatile signed __int64 *)v35, v39, v38)) )
        {
          ExfReleasePushLock(v35);
        }
        KeAbPostRelease((ULONG_PTR)v35);
        v2 = 0;
        if ( byte_140E09B00 && CmFastBoot )
        {
          ExpRefreshSystemTime();
          if ( !v3 )
          {
            CmpLoadSystemVersionData();
            CmpSetVersionData();
            v3 = 1;
          }
          PsBootPhaseComplete(v42, v41, v43);
        }
        else if ( !v3 )
        {
          CmpSetVersionData();
        }
      }
      CmpCreatePerfKeys();
LABEL_74:
      if ( !Event && !v15 )
      {
        v46 = (volatile signed __int32 *)&CmpMachineHiveList[v13 + 17];
        v47 = (char *)KeAbPreAcquire((__int64)v46, 0LL);
        v48 = v47;
        if ( _interlockedbittestandset64(v46, 0LL) )
          ExfAcquirePushLockExclusiveEx(
            (unsigned __int64 *)&CmpMachineHiveList[v13 + 17],
            v47,
            (__int64)&CmpMachineHiveList[v13 + 17]);
        if ( v48 )
          v48[10] = 1;
        KeSetEvent((PRKEVENT)&CmpMachineHiveList[v13 + 14], 0, 0);
        CmpNotifyMachineHiveLoaded(i);
        _m_prefetchw((const void *)v46);
        v49 = *(_QWORD *)v46;
        v50 = *(_QWORD *)v46 - 16LL;
        if ( (*(_QWORD *)v46 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v50 = 0LL;
        if ( (v49 & 2) != 0
          || (v51 = *(_QWORD *)v46, v51 != _InterlockedCompareExchange64((volatile signed __int64 *)v46, v50, v49)) )
        {
          ExfReleasePushLock(v46);
        }
        KeAbPostRelease((ULONG_PTR)v46);
        goto LABEL_15;
      }
    }
    if ( LOBYTE(DestinationString.Length) )
    {
      v5 = (PVOID *)Pool;
      WaitBlockArray = (struct _KWAIT_BLOCK *)Privileges;
      continue;
    }
    break;
  }
  CmpLockRegistryExclusive();
  CmpSpecialBootCondition = 0;
  if ( BYTE4(NlsMbOemCodePageTag) || (v60 = 1, CmVEEnabled != 1) )
    v60 = 0;
  CmpVEEnabled = v60;
  CmpUnlockRegistry();
  if ( Event )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v81.StaticBitmap[2]);
    LOBYTE(v61) = CmpInitRmLogOnLoad;
    CmpInitCmRM(0LL, v61);
    KiUnstackDetachProcess((__int64)&v81.StaticBitmap[2], 0, v62, v63);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery(CmRmSystem);
    }
    CmpMountPreloadedHives();
    CmpLockRegistryExclusive();
    CmpInterlockedFunction();
    CmpUnlockRegistry();
    v64 = &qword_140E09928;
    do
    {
      v65 = (char *)KeAbPreAcquire((__int64)v64, 0LL);
      v66 = v65;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v64, 0LL) )
        ExfAcquirePushLockExclusiveEx(v64, v65, (__int64)v64);
      if ( v66 )
        v66[10] = 1;
      KeSetEvent((PRKEVENT)v64 - 1, 0, 0);
      CmpNotifyMachineHiveLoaded(v2);
      _m_prefetchw(v64);
      v67 = *v64;
      v68 = *v64 - 16;
      if ( (*v64 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v68 = 0LL;
      if ( (v67 & 2) != 0
        || (v69 = *v64, v69 != _InterlockedCompareExchange64((volatile signed __int64 *)v64, v68, v67)) )
      {
        ExfReleasePushLock(v64);
      }
      KeAbPostRelease((ULONG_PTR)v64);
      ++v2;
      v64 += 23;
    }
    while ( v2 < 7 );
    if ( CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete(v71, v70, v72);
    }
    CmpLoadSystemVersionData();
    CmpSetVersionData();
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpConfigurationManagerKeyName;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
    ZwClose(KeyHandle);
  v18 = P;
LABEL_132:
  CmpSpecialBootCondition = 0;
  CmpLoadingSystemHivesActive = 0;
  CmpMountThread = 0LL;
  if ( Event )
    KeSetEvent(Event, 0, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  CmSiFreeMemory(Privileges);
  CmSiFreeMemory(Pool);
  return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v81);
}
