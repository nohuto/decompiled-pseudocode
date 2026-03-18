/*
 * XREFs of CmpFinishSystemHivesLoad @ 0x1407CA230
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     RtlAppendUnicodeToString @ 0x14040BAE0 (RtlAppendUnicodeToString.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1404648A0 (CmpRecheckHiveVolumePolicy.c)
 *     RtlUnicodeStringCopyString @ 0x140465D3C (RtlUnicodeStringCopyString.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     TmEnableCallbacks @ 0x1404FC410 (TmEnableCallbacks.c)
 *     CmpNotifyMachineHiveLoaded @ 0x140667888 (CmpNotifyMachineHiveLoaded.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwCreateKey @ 0x1406A67B0 (ZwCreateKey.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PsBootPhaseComplete @ 0x1407717B8 (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x1407B6864 (ExpRefreshSystemTime.c)
 *     CmpCreatePerfKeys @ 0x1407C9F90 (CmpCreatePerfKeys.c)
 *     CmpInterlockedFunction @ 0x1407CAD90 (CmpInterlockedFunction.c)
 *     CmpLinkKeyToHive @ 0x1407CAF50 (CmpLinkKeyToHive.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     CmpLoadSystemVersionData @ 0x1407D7168 (CmpLoadSystemVersionData.c)
 *     CmpSetVersionData @ 0x1407D7920 (CmpSetVersionData.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD214 (CmpHiveRootSecurityDescriptor.c)
 *     CmpUnlockHiveList @ 0x140844354 (CmpUnlockHiveList.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     CmpLinkHiveToMaster @ 0x14092C240 (CmpLinkHiveToMaster.c)
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 *     CmpLockHiveListExclusive @ 0x140A5B428 (CmpLockHiveListExclusive.c)
 *     CmpAddToHiveFileList @ 0x140A6A4C4 (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x140AA88D4 (CmRmFinalizeRecovery.c)
 *     CmpInitCmRM @ 0x140AE4D94 (CmpInitCmRM.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140BB9E48 (CmpIsHiveLoadUnloadRundownActive.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
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
  unsigned int i; // r15d
  __int64 v11; // rbx
  const WCHAR *v12; // rdx
  char v13; // si
  int v14; // r9d
  wchar_t *v15; // r8
  PVOID v16; // r14
  int v17; // eax
  wchar_t **v18; // rcx
  wchar_t *v19; // rax
  PVOID v20; // rcx
  wchar_t *v21; // rdx
  wchar_t *v22; // rcx
  char v23; // r14
  volatile signed __int32 *v24; // rdi
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  signed __int64 v27; // rax
  signed __int64 v28; // rdx
  signed __int64 v29; // rtt
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  volatile signed __int32 *v33; // rdi
  _QWORD *v34; // rax
  _QWORD *v35; // rsi
  signed __int64 v36; // rax
  signed __int64 v37; // rdx
  signed __int64 v38; // rtt
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  const WCHAR *v42; // rdx
  const WCHAR *v43; // rcx
  volatile signed __int32 *v44; // rdi
  _QWORD *v45; // rax
  _QWORD *v46; // rsi
  signed __int64 v47; // rax
  signed __int64 v48; // rdx
  signed __int64 v49; // rtt
  ULONG_PTR v50; // rcx
  unsigned int v51; // edi
  unsigned __int64 *v52; // rbx
  _QWORD *v53; // rax
  _QWORD *v54; // rsi
  signed __int64 v55; // rax
  signed __int64 v56; // rdx
  unsigned __int64 v57; // rtt
  char v58; // al
  __int64 v59; // rdx
  unsigned __int64 *v60; // rbx
  _QWORD *v61; // rax
  _QWORD *v62; // rsi
  signed __int64 v63; // rax
  signed __int64 v64; // rdx
  unsigned __int64 v65; // rtt
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  char *v71; // [rsp+78h] [rbp-90h]
  PVOID P; // [rsp+80h] [rbp-88h]
  HANDLE KeyHandle; // [rsp+88h] [rbp-80h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+90h] [rbp-78h]
  PPRIVILEGE_SET Pool; // [rsp+98h] [rbp-70h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  _KAFFINITY_EX v77; // [rsp+D0h] [rbp-38h] BYREF
  char v78; // [rsp+2C8h] [rbp+1C0h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(&v77, 0, 72);
  CmpInitializeThreadInfo(&v77);
  v3 = 0;
  memset_0(&v77.StaticBitmap[8], 0, 0x1B0uLL);
  BYTE1(NlsMbOemCodePageTag) = 0;
  CmpMountThread = (__int64)KeGetCurrentThread();
  DestinationString.Buffer = (wchar_t *)0x800000;
  v71 = &v78;
  RtlUnicodeStringCopyString((PUNICODE_STRING)&DestinationString.Buffer, L"\\REGISTRY\\");
  DestinationString.MaximumLength = (unsigned __int16)DestinationString.Buffer;
  Privileges = (PPRIVILEGE_SET)CmpAllocatePool(0x40uLL);
  WaitBlockArray = (struct _KWAIT_BLOCK *)Privileges;
  if ( !Privileges )
    KeBugCheckEx(0x74u, 2uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  Pool = (PPRIVILEGE_SET)CmpAllocatePool(0x40uLL);
  v5 = (PVOID *)Pool;
  if ( !Pool )
    KeBugCheckEx(0x74u, 2uLL, 6uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  P = (PVOID)CmpHiveRootSecurityDescriptor();
  v6 = (char *)&unk_140E09888;
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
    KeWaitForSingleObject(&stru_140E09AB0, Executive, 0, 0, 0LL);
    KeSetEvent(&stru_140E09AB0, 0, 0);
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v77.StaticBitmap[2]);
    LOBYTE(v9) = CmpInitRmLogOnLoad;
    CmpInitCmRM(0LL, v9);
    KiUnstackDetachProcess((__int64)&v77.StaticBitmap[2], 0);
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
      v11 = 23LL * i;
      if ( LOBYTE(CmpMachineHiveList[v11 + 7]) )
        goto LABEL_15;
      if ( !BYTE1(CmpMachineHiveList[v11 + 7]) )
      {
        LOBYTE(DestinationString.Length) = 1;
LABEL_15:
        v2 = 0;
        continue;
      }
      v12 = CmpMachineHiveList[v11 + 1];
      v13 = 0;
      LOWORD(DestinationString.Buffer) = DestinationString.MaximumLength;
      RtlAppendUnicodeToString((PUNICODE_STRING)&DestinationString.Buffer, v12);
      RtlAppendUnicodeToString((PUNICODE_STRING)&DestinationString.Buffer, CmpMachineHiveList[v11 + 2]);
      CmpLockRegistryExclusive();
      if ( CmpMachineHiveList[v11 + 3] || (v15 = CmpMachineHiveList[v11 + 6]) == 0LL )
      {
        v2 = 0;
      }
      else
      {
        LOBYTE(v14) = BYTE3(CmpMachineHiveList[v11 + 7]);
        v16 = P;
        v17 = CmpLinkHiveToMaster(
                (int)&DestinationString.Buffer,
                0,
                (int)v15,
                v14,
                (int)CmpMachineHiveList[v11 + 5],
                0,
                0LL,
                (__int64)P,
                0LL,
                0LL,
                1,
                (__int64)&v77.StaticBitmap[8]);
        if ( v17 < 0 )
        {
          if ( !(unsigned __int8)CmpIsHiveLoadUnloadRundownActive(v17) )
            KeBugCheckEx(0x73u, 1uLL, v50, i, (ULONG_PTR)&DestinationString.Buffer);
          CmpLoadingSystemHivesActive = 0;
          CmpMountThread = 0LL;
          CmpUnlockRegistry();
          v51 = 0;
          v52 = &qword_140E098B8;
          do
          {
            if ( *((_DWORD *)v52 - 17) && !*((_BYTE *)v52 - 80) )
            {
              if ( !*((_BYTE *)v52 - 79) )
                KeWaitForSingleObject(v52 - 6, Executive, 0, 0, 0LL);
              v53 = KeAbPreAcquire((__int64)v52, 0LL);
              v54 = v53;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v52, 0LL) )
                ExfAcquirePushLockExclusiveEx(v52, (__int64)v53, (__int64)v52);
              if ( v54 )
                *((_BYTE *)v54 + 10) = 1;
              KeSetEvent((PRKEVENT)v52 - 1, 0, 0);
              CmpNotifyMachineHiveLoaded(v51);
              _m_prefetchw(v52);
              v55 = *v52;
              v56 = *v52 - 16;
              if ( (*v52 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v56 = 0LL;
              if ( (v55 & 2) != 0
                || (v57 = *v52, v57 != _InterlockedCompareExchange64((volatile signed __int64 *)v52, v56, v55)) )
              {
                ExfReleasePushLock(v52);
              }
              KeAbPostRelease((ULONG_PTR)v52);
            }
            ++v51;
            v52 += 23;
          }
          while ( v51 < 7 );
          goto LABEL_132;
        }
        CmpLockHiveListExclusive(v17);
        v18 = (wchar_t **)qword_140FD8D08;
        v19 = CmpMachineHiveList[v11 + 6] + 804;
        if ( *(__int64 **)qword_140FD8D08 != &CmpHiveListHead )
          __fastfail(3u);
        *(_QWORD *)v19 = &CmpHiveListHead;
        *((_QWORD *)v19 + 1) = v18;
        *v18 = v19;
        qword_140FD8D08 = (__int64)v19;
        CmpUnlockHiveList();
        CmpRecheckHiveVolumePolicy((__int64)CmpMachineHiveList[v11 + 6]);
        v2 = 0;
        if ( BYTE3(CmpMachineHiveList[v11 + 7]) )
        {
          *((_DWORD *)CmpMachineHiveList[v11 + 6] + 40) |= 0x20u;
          *((_QWORD *)CmpMachineHiveList[v11 + 6] + 521) = KeGetCurrentThread();
          CmpUnlockRegistry();
          CmpFlushHive(CmpMachineHiveList[v11 + 6], 4LL);
          CmpLockRegistryExclusive();
          *((_DWORD *)CmpMachineHiveList[v11 + 6] + 40) &= ~0x20u;
          *((_QWORD *)CmpMachineHiveList[v11 + 6] + 521) = 0LL;
        }
        v20 = CmRmSystem;
        if ( CmRmSystem )
        {
          v21 = CmpMachineHiveList[v11 + 6];
          if ( (*((_DWORD *)v21 + 40) & 2) == 0 && !*((_QWORD *)v21 + 519) )
          {
            ++*((_DWORD *)CmRmSystem + 16);
            *((_QWORD *)CmpMachineHiveList[v11 + 6] + 519) = v20;
          }
        }
      }
      v22 = CmpMachineHiveList[v11 + 6];
      if ( v22 )
        CmpAddToHiveFileList(v22);
      LOBYTE(CmpMachineHiveList[v11 + 7]) = 1;
      if ( i == 3 )
      {
        if ( !Event )
        {
          CmpUnlockRegistry();
          CmpMountPreloadedHives();
          CmpLockRegistryExclusive();
          v23 = 1;
          CmpInterlockedFunction();
          v24 = (volatile signed __int32 *)&CmpMachineHiveList[v11 + 17];
          v25 = KeAbPreAcquire((__int64)v24, 0LL);
          v26 = v25;
          if ( _interlockedbittestandset64(v24, 0LL) )
            ExfAcquirePushLockExclusiveEx(
              (unsigned __int64 *)&CmpMachineHiveList[v11 + 17],
              (__int64)v25,
              (__int64)&CmpMachineHiveList[v11 + 17]);
          if ( v26 )
            *((_BYTE *)v26 + 10) = 1;
          KeSetEvent((PRKEVENT)&CmpMachineHiveList[v11 + 14], 0, 0);
          CmpNotifyMachineHiveLoaded(3u);
          _m_prefetchw((const void *)v24);
          v27 = *(_QWORD *)v24;
          v28 = *(_QWORD *)v24 - 16LL;
          if ( (*(_QWORD *)v24 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v28 = 0LL;
          if ( (v27 & 2) != 0
            || (v29 = *(_QWORD *)v24, v29 != _InterlockedCompareExchange64((volatile signed __int64 *)v24, v28, v27)) )
          {
            ExfReleasePushLock(&CmpMachineHiveList[v11 + 17]);
          }
          KeAbPostRelease((ULONG_PTR)&CmpMachineHiveList[v11 + 17]);
          v2 = 0;
          if ( byte_140E099D8 && CmFastBoot )
          {
            CmpUnlockRegistry();
            v23 = 0;
            ExpRefreshSystemTime();
            if ( !v3 )
            {
              CmpLoadSystemVersionData();
              CmpSetVersionData();
              v3 = 1;
            }
            PsBootPhaseComplete(v31, v30, v32);
          }
          if ( !v3 )
            CmpLoadSystemVersionData();
          v13 = 1;
          if ( !v23 )
            continue;
        }
        goto LABEL_73;
      }
      if ( i != 2 )
      {
        if ( i == 1 )
        {
          v42 = L"\\Registry\\Machine\\SAM\\SAM";
          v43 = L"\\Registry\\Machine\\Security\\SAM";
          goto LABEL_72;
        }
        if ( i == 4 )
        {
          v42 = L"\\Registry\\User\\.Default";
          v43 = L"\\Registry\\User\\S-1-5-18";
LABEL_72:
          CmpLinkKeyToHive(v43, v42);
        }
LABEL_73:
        CmpUnlockRegistry();
        goto LABEL_74;
      }
      CmpUnlockRegistry();
      if ( !Event )
      {
        v33 = (volatile signed __int32 *)&CmpMachineHiveList[v11 + 17];
        v34 = KeAbPreAcquire((__int64)v33, 0LL);
        v35 = v34;
        if ( _interlockedbittestandset64(v33, 0LL) )
          ExfAcquirePushLockExclusiveEx(
            (unsigned __int64 *)&CmpMachineHiveList[v11 + 17],
            (__int64)v34,
            (__int64)&CmpMachineHiveList[v11 + 17]);
        if ( v35 )
          *((_BYTE *)v35 + 10) = 1;
        KeSetEvent((PRKEVENT)&CmpMachineHiveList[v11 + 14], 0, 0);
        v13 = 1;
        CmpNotifyMachineHiveLoaded(2u);
        _m_prefetchw((const void *)v33);
        v36 = *(_QWORD *)v33;
        v37 = *(_QWORD *)v33 - 16LL;
        if ( (*(_QWORD *)v33 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v37 = 0LL;
        if ( (v36 & 2) != 0
          || (v38 = *(_QWORD *)v33, v38 != _InterlockedCompareExchange64((volatile signed __int64 *)v33, v37, v36)) )
        {
          ExfReleasePushLock(v33);
        }
        KeAbPostRelease((ULONG_PTR)v33);
        v2 = 0;
        if ( byte_140E09A90 && CmFastBoot )
        {
          ExpRefreshSystemTime();
          if ( !v3 )
          {
            CmpLoadSystemVersionData();
            CmpSetVersionData();
            v3 = 1;
          }
          PsBootPhaseComplete(v40, v39, v41);
        }
        else if ( !v3 )
        {
          CmpSetVersionData();
        }
      }
      CmpCreatePerfKeys();
LABEL_74:
      if ( !Event && !v13 )
      {
        v44 = (volatile signed __int32 *)&CmpMachineHiveList[v11 + 17];
        v45 = KeAbPreAcquire((__int64)v44, 0LL);
        v46 = v45;
        if ( _interlockedbittestandset64(v44, 0LL) )
          ExfAcquirePushLockExclusiveEx(
            (unsigned __int64 *)&CmpMachineHiveList[v11 + 17],
            (__int64)v45,
            (__int64)&CmpMachineHiveList[v11 + 17]);
        if ( v46 )
          *((_BYTE *)v46 + 10) = 1;
        KeSetEvent((PRKEVENT)&CmpMachineHiveList[v11 + 14], 0, 0);
        CmpNotifyMachineHiveLoaded(i);
        _m_prefetchw((const void *)v44);
        v47 = *(_QWORD *)v44;
        v48 = *(_QWORD *)v44 - 16LL;
        if ( (*(_QWORD *)v44 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v48 = 0LL;
        if ( (v47 & 2) != 0
          || (v49 = *(_QWORD *)v44, v49 != _InterlockedCompareExchange64((volatile signed __int64 *)v44, v48, v47)) )
        {
          ExfReleasePushLock(v44);
        }
        KeAbPostRelease((ULONG_PTR)v44);
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
  if ( BYTE4(NlsMbOemCodePageTag) || (v58 = 1, CmVEEnabled != 1) )
    v58 = 0;
  CmpVEEnabled = v58;
  CmpUnlockRegistry();
  if ( Event )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v77.StaticBitmap[2]);
    LOBYTE(v59) = CmpInitRmLogOnLoad;
    CmpInitCmRM(0LL, v59);
    KiUnstackDetachProcess((__int64)&v77.StaticBitmap[2], 0);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery(CmRmSystem);
    }
    CmpMountPreloadedHives();
    CmpLockRegistryExclusive();
    CmpInterlockedFunction();
    CmpUnlockRegistry();
    v60 = &qword_140E098B8;
    do
    {
      v61 = KeAbPreAcquire((__int64)v60, 0LL);
      v62 = v61;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v60, 0LL) )
        ExfAcquirePushLockExclusiveEx(v60, (__int64)v61, (__int64)v60);
      if ( v62 )
        *((_BYTE *)v62 + 10) = 1;
      KeSetEvent((PRKEVENT)v60 - 1, 0, 0);
      CmpNotifyMachineHiveLoaded(v2);
      _m_prefetchw(v60);
      v63 = *v60;
      v64 = *v60 - 16;
      if ( (*v60 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v64 = 0LL;
      if ( (v63 & 2) != 0
        || (v65 = *v60, v65 != _InterlockedCompareExchange64((volatile signed __int64 *)v60, v64, v63)) )
      {
        ExfReleasePushLock(v60);
      }
      KeAbPostRelease((ULONG_PTR)v60);
      ++v2;
      v60 += 23;
    }
    while ( v2 < 7 );
    if ( CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete(v67, v66, v68);
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
  v16 = P;
LABEL_132:
  CmpSpecialBootCondition = 0;
  CmpLoadingSystemHivesActive = 0;
  CmpMountThread = 0LL;
  if ( Event )
    KeSetEvent(Event, 0, 0);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  CmSiFreeMemory(Privileges);
  CmSiFreeMemory(Pool);
  return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v77);
}
