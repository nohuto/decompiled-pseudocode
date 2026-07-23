/*
 * XREFs of CmFcManagerStartRuntimePhase @ 0x140C4F31C
 * Callers:
 *     CmFcInitSystem2 @ 0x140C4C3B8 (CmFcInitSystem2.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExAllocateTimer @ 0x1403ADEA0 (ExAllocateTimer.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1404705E0 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x140496128 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1404975C8 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcWriteHighLowHigh @ 0x1404B7E24 (RtlpFcWriteHighLowHigh.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x1404F8498 (CmFcpManagerArmFeatureUsageProviderFlushTimer.c)
 *     CmFcpManagerArmFeatureUsageProviderPublishTimer @ 0x140667030 (CmFcpManagerArmFeatureUsageProviderPublishTimer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmFcpSwapSectionState @ 0x1406F3934 (CmFcpSwapSectionState.c)
 *     RtlpFcInitializeDelayedUsageReportBuffer @ 0x14078D09C (RtlpFcInitializeDelayedUsageReportBuffer.c)
 *     RtlpFcSectionTypeToBufferType @ 0x14078D340 (RtlpFcSectionTypeToBufferType.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1407D1FA0 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmFcpManagerAddBufferIntoPublishListAndSetPublishState @ 0x1407E536C (CmFcpManagerAddBufferIntoPublishListAndSetPublishState.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x1407E53B4 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmSiRWLockReleaseExclusive @ 0x1409F6640 (CmSiRWLockReleaseExclusive.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x1409FF8F8 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmFcpCopySectionState @ 0x140A1AAD8 (CmFcpCopySectionState.c)
 *     CmFcpCleanupSectionState @ 0x140A1AB08 (CmFcpCleanupSectionState.c)
 *     CmFcpUnmapSection @ 0x140A2AFE4 (CmFcpUnmapSection.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140A2B208 (RtlpFcBufferManagerUpdateBuffers.c)
 *     RtlUpdateSwapReference @ 0x140A2B6A0 (RtlUpdateSwapReference.c)
 *     RtlIsStateSeparationEnabled @ 0x140A579B0 (RtlIsStateSeparationEnabled.c)
 *     RtlGetSwapReferenceIndex @ 0x140A86A58 (RtlGetSwapReferenceIndex.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140A8CF00 (CmFcpManagerPublishFeatureUsageData.c)
 *     CmFcpMapSection @ 0x140AA3BBC (CmFcpMapSection.c)
 *     CmFcpInitializeSectionState @ 0x140ABAE2C (CmFcpInitializeSectionState.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 CmFcManagerStartRuntimePhase()
{
  __int64 *v0; // rcx
  __int64 v1; // rsi
  char v2; // r15
  __int64 v3; // rcx
  __int64 v4; // rdx
  int SectionFromBuffer; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  __int64 i; // rdi
  unsigned int v15; // eax
  __int64 v16; // r10
  __int64 v17; // r10
  __int64 v18; // r11
  unsigned int j; // edi
  __int64 v20; // r15
  _OWORD *v21; // rbx
  _OWORD *Pool2; // rax
  __int64 v23; // r14
  __int64 v24; // rcx
  __int128 v25; // xmm1
  BOOLEAN IsStateSeparationEnabled; // al
  const WCHAR *v27; // rdx
  __int64 v28; // rbx
  void *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r14
  _DWORD *v32; // rdi
  void *v33; // rax
  __int64 v34; // rbx
  __int64 *v35; // rdi
  __int64 v36; // r14
  __int64 *v37; // rdi
  __int64 Buffer; // [rsp+48h] [rbp-C0h] BYREF
  __int64 DestinationString[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v41[12]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v42[3]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v43[24]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v44[3]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v45[3]; // [rsp+110h] [rbp+8h] BYREF

  Buffer = 0LL;
  v0 = v42;
  v1 = 4LL;
  *(_OWORD *)&DestinationString[1] = 0LL;
  v2 = 0;
  do
  {
    CmFcpInitializeSectionState((__int64)v0);
    v0 = (__int64 *)(v3 + 24);
  }
  while ( v4 != 1 );
  DestinationString[0] = 0LL;
  memset_0(v41, 0, sizeof(v41));
  byte_140EF72DA = 1;
  SectionFromBuffer = SeConvertStringSecurityDescriptorToSecurityDescriptor(
                        (__int64)L"O:SYG:SYD:(A;;GR;;;SY)(A;;GR;;;BA)(A;;GR;;;IU)(A;;GR;;;AU)(A;;GR;;;AC)(A;;GR;;;S-1-5-32"
                                  "-1045063015-423899465-3012769174-65638258-1865874412-2349348127-763856749-1075684855)("
                                  "A;;GR;;;S-1-15-3-1024-1045063015-423899465-3012769174-65638258-1865874412-2349348127-7"
                                  "63856749-1075684855)(A;;GR;;;S-1-5-80-2970612574-78537857-698502321-558674196-14516445"
                                  "82)(A;;GR;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-39683"
                                  "01570-1997628692-1435953622)(A;;GR;;;S-1-15-3-1024-1065365936-1281604716-3511738428-16"
                                  "54721687-432734479-3232135806-4053264122-3456934681)(A;;GR;;;S-1-15-3-1024-3153509613-"
                                  "960666767-3724611135-2725662640-12138253-543910227-1950414635-4190290187)",
                        1,
                        (__int64)CmFcSystemManager,
                        0LL);
  if ( SectionFromBuffer >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpVolumeManagerLockContextListExclusive((unsigned __int64 *)&stru_140EF7150);
    RtlpFcBufferManagerReferenceBuffers((__int64)qword_140EF71C8, (__int64)&Buffer, DestinationString);
    v7 = Buffer;
    v8 = v42;
    v9 = 4LL;
    do
    {
      *v8 = v7;
      v8 += 3;
      --v9;
    }
    while ( v9 );
    v10 = (_QWORD *)DestinationString[0];
    v11 = *(void **)(DestinationString[0] + 8);
    if ( v11 )
    {
      SectionFromBuffer = CmFcpManagerCreateSectionFromBuffer(
                            v11,
                            *(_QWORD *)(DestinationString[0] + 16),
                            v7,
                            CmFcSystemManager[0],
                            (__int64)v42);
      if ( SectionFromBuffer < 0 )
        goto LABEL_50;
      CmFcpCopySectionState((__int64)v43, (__int64)v42);
      v7 = Buffer;
    }
    v12 = (void *)v10[7];
    if ( v12 )
    {
      SectionFromBuffer = CmFcpManagerCreateSectionFromBuffer(v12, v10[8], v7, CmFcSystemManager[0], (__int64)v44);
      if ( SectionFromBuffer < 0 )
        goto LABEL_50;
      v7 = Buffer;
    }
    v13 = (void *)v10[10];
    if ( !v13
      || (SectionFromBuffer = CmFcpManagerCreateSectionFromBuffer(v13, v10[11], v7, CmFcSystemManager[0], (__int64)v45),
          SectionFromBuffer >= 0) )
    {
      RtlpFcBufferManagerDereferenceBuffers(qword_140EF71C8, (__int64)v10);
      DestinationString[0] = 0LL;
      for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
      {
        v15 = RtlpFcSectionTypeToBufferType(i);
        SectionFromBuffer = CmFcpMapSection(&v42[3 * i], &v41[3 * v15]);
        if ( SectionFromBuffer < 0 )
          goto LABEL_54;
      }
      CmpVolumeManagerLockContextListExclusive((unsigned __int64 *)&stru_140EF7148);
      v16 = 0LL;
      do
      {
        CmFcpSwapSectionState((__int64 *)((char *)&CmFcSystemManager[5] + v16), (_QWORD *)((char *)v42 + v16));
        v16 = v17 + 24;
      }
      while ( v18 != 1 );
      RtlpFcBufferManagerUpdateBuffers(qword_140EF71C8, Buffer, (__int64)v41);
      memset_0(v41, 0, sizeof(v41));
      RtlpFcWriteHighLowHigh(MmWriteableSharedUserData + 1824, Buffer);
      CmSiRWLockReleaseExclusive((volatile signed __int64 *)&stru_140EF7148);
      SectionFromBuffer = ZwUpdateWnfStateData(
                            &WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
                            &Buffer,
                            8u,
                            &CmFcpWnfTypeId,
                            0LL,
                            0,
                            0);
      if ( SectionFromBuffer < 0 )
        goto LABEL_54;
      for ( j = 0; j < 2; ++j )
      {
        v20 = ((unsigned __int8)RtlGetSwapReferenceIndex(qword_140EF72B8) - 1) & 1;
        v21 = (_OWORD *)CmFcSystemManager[v20 + 52];
        Pool2 = (_OWORD *)ExAllocatePool2(0x40uLL, 0x310uLL, 0x63466D43uLL);
        v23 = (__int64)Pool2;
        if ( !Pool2 )
          goto LABEL_30;
        if ( v21 )
        {
          v24 = 6LL;
          do
          {
            *Pool2 = *v21;
            Pool2[1] = v21[1];
            Pool2[2] = v21[2];
            Pool2[3] = v21[3];
            Pool2[4] = v21[4];
            Pool2[5] = v21[5];
            Pool2[6] = v21[6];
            Pool2 += 8;
            v25 = v21[7];
            v21 += 8;
            *(Pool2 - 1) = v25;
            --v24;
          }
          while ( v24 );
          *Pool2 = *v21;
        }
        else
        {
          RtlpFcInitializeDelayedUsageReportBuffer(Pool2);
        }
        CmFcSystemManager[v20 + 52] = v23;
        RtlUpdateSwapReference((__int64)qword_140EF72B8, v20);
      }
      qword_140EF7370 = ExAllocateTimer(
                          (__int64)CmFcpManagerRetryUsageNotificationsTimerRoutine,
                          (__int64)CmFcSystemManager,
                          8u);
      if ( !qword_140EF7370 )
        goto LABEL_30;
      IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
      v27 = L"\\REGISTRY\\MACHINE\\OSDATA";
      if ( !IsStateSeparationEnabled )
        v27 = L"\\REGISTRY\\MACHINE\\SOFTWARE";
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], v27);
      SectionFromBuffer = CmRegisterMachineHiveLoadedNotification(
                            (__int64)CmFcpManagerSoftwareHiveReady,
                            (__int64)CmFcSystemManager,
                            (const UNICODE_STRING *)&DestinationString[1],
                            &qword_140EF72B0);
      if ( SectionFromBuffer < 0 )
        goto LABEL_54;
      qword_140EF7788 = ExAllocateTimer((__int64)CmFcpManagerFlushUsageTimerRoutine, (__int64)CmFcSystemManager, 8u);
      if ( !qword_140EF7788
        || (qword_140EF7790 = ExAllocateTimer(
                                (__int64)CmFcpManagerPublishUsageTimerRoutine,
                                (__int64)CmFcSystemManager,
                                8u)) == 0 )
      {
LABEL_30:
        SectionFromBuffer = -1073741670;
        goto LABEL_54;
      }
      CmpVolumeManagerLockContextListExclusive((unsigned __int64 *)&stru_140EF7700);
      v2 = 1;
      v28 = ((unsigned __int8)RtlGetSwapReferenceIndex(qword_140EF74F0) - 1) & 1;
      v29 = (void *)ExAllocatePool2(0x40uLL, 0x1000uLL, 0x63466D43uLL);
      v30 = (__int64)v29;
      if ( !v29 )
        goto LABEL_38;
      memset_0(v29, 0, 0x1000uLL);
      *(_DWORD *)(v30 + 28) = 508;
      CmFcSystemManager[v28 + 174] = v30;
      RtlUpdateSwapReference((__int64)qword_140EF74F0, v28);
      v31 = ((_BYTE)v28 - 1) & 1;
      v32 = (_DWORD *)CmFcSystemManager[v31 + 174];
      if ( v32 )
      {
        if ( byte_140EF7880 && v32[4] )
        {
          v33 = (void *)ExAllocatePool2(0x40uLL, 0x1000uLL, 0x63466D43uLL);
          v34 = (__int64)v33;
          if ( !v33 )
          {
LABEL_38:
            SectionFromBuffer = -1073741670;
LABEL_53:
            CmSiRWLockReleaseExclusive((volatile signed __int64 *)&stru_140EF7700);
LABEL_54:
            CmSiRWLockReleaseExclusive((volatile signed __int64 *)&stru_140EF7150);
            KeLeaveCriticalRegion();
            goto LABEL_55;
          }
          memmove(v33, v32, 0x1000uLL);
          CmFcpManagerAddBufferIntoPublishListAndSetPublishState((__int64)CmFcSystemManager, v34);
          CmFcpManagerArmFeatureUsageProviderPublishTimer((__int64)CmFcSystemManager);
        }
        CmFcSystemManager[v31 + 174] = 0LL;
      }
      if ( _InterlockedExchange(&dword_140EF7888, 1) == 2 )
        CmFcpManagerPublishFeatureUsageData((__int64)CmFcSystemManager, 1);
      if ( (dword_140EF7858 & 2) != 0 )
        CmFcpManagerArmFeatureUsageProviderFlushTimer((__int64)CmFcSystemManager);
      v10 = (_QWORD *)DestinationString[0];
      SectionFromBuffer = 0;
    }
LABEL_50:
    if ( v10 )
      RtlpFcBufferManagerDereferenceBuffers(qword_140EF71C8, (__int64)v10);
    if ( !v2 )
      goto LABEL_54;
    goto LABEL_53;
  }
LABEL_55:
  v35 = v41;
  v36 = 4LL;
  do
  {
    CmFcpUnmapSection((__int64)v35);
    v35 += 3;
    --v36;
  }
  while ( v36 );
  v37 = v42;
  do
  {
    CmFcpCleanupSectionState((__int64)v37);
    v37 += 3;
    --v1;
  }
  while ( v1 );
  return (unsigned int)SectionFromBuffer;
}
