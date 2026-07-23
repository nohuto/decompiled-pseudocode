/*
 * XREFs of CmFcManagerStartRuntimePhase @ 0x140C3BE84
 * Callers:
 *     CmFcInitSystem2 @ 0x140C38F20 (CmFcInitSystem2.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAllocateTimer @ 0x14036F160 (ExAllocateTimer.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403B7F5C (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403B8688 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1404749A0 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     RtlpFcWriteHighLowHigh @ 0x1404BDC88 (RtlpFcWriteHighLowHigh.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x1404F8718 (CmFcpManagerArmFeatureUsageProviderFlushTimer.c)
 *     CmFcpManagerArmFeatureUsageProviderPublishTimer @ 0x14065CC70 (CmFcpManagerArmFeatureUsageProviderPublishTimer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmFcpSwapSectionState @ 0x1406E9FD8 (CmFcpSwapSectionState.c)
 *     RtlpFcInitializeDelayedUsageReportBuffer @ 0x14077DF94 (RtlpFcInitializeDelayedUsageReportBuffer.c)
 *     RtlpFcSectionTypeToBufferType @ 0x14077E15C (RtlpFcSectionTypeToBufferType.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1407C2370 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmFcpManagerAddBufferIntoPublishListAndSetPublishState @ 0x1407D4F28 (CmFcpManagerAddBufferIntoPublishListAndSetPublishState.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x1407D4F70 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x1409F4D94 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmSiRWLockReleaseExclusive @ 0x1409F4E3C (CmSiRWLockReleaseExclusive.c)
 *     CmFcpCopySectionState @ 0x140A1B078 (CmFcpCopySectionState.c)
 *     CmFcpCleanupSectionState @ 0x140A1B0A8 (CmFcpCleanupSectionState.c)
 *     RtlIsStateSeparationEnabled @ 0x140A28CA0 (RtlIsStateSeparationEnabled.c)
 *     CmFcpUnmapSection @ 0x140A30204 (CmFcpUnmapSection.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140A30428 (RtlpFcBufferManagerUpdateBuffers.c)
 *     RtlUpdateSwapReference @ 0x140A308D0 (RtlUpdateSwapReference.c)
 *     RtlGetSwapReferenceIndex @ 0x140A85DB0 (RtlGetSwapReferenceIndex.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140A8D96C (CmFcpManagerPublishFeatureUsageData.c)
 *     CmFcpMapSection @ 0x140AA3A88 (CmFcpMapSection.c)
 *     CmFcpInitializeSectionState @ 0x140ABB91C (CmFcpInitializeSectionState.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
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
  __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // r10
  __int64 v17; // r10
  __int64 v18; // r11
  unsigned int i; // edi
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
  byte_140EF6CFA = 1;
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
    CmpVolumeManagerLockContextListExclusive((unsigned __int64 *)&stru_140EF6B70);
    RtlpFcBufferManagerReferenceBuffers((__int64)qword_140EF6BE8, (__int64)&Buffer, DestinationString);
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
        goto LABEL_47;
      CmFcpCopySectionState((__int64)v43, (__int64)v42);
      v7 = Buffer;
    }
    v12 = (void *)v10[7];
    if ( v12 )
    {
      SectionFromBuffer = CmFcpManagerCreateSectionFromBuffer(v12, v10[8], v7, CmFcSystemManager[0], (__int64)v44);
      if ( SectionFromBuffer < 0 )
        goto LABEL_47;
      v7 = Buffer;
    }
    v13 = (void *)v10[10];
    if ( !v13
      || (SectionFromBuffer = CmFcpManagerCreateSectionFromBuffer(v13, v10[11], v7, CmFcSystemManager[0], (__int64)v45),
          SectionFromBuffer >= 0) )
    {
      RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140EF6BE8, (__int64)v10);
      DestinationString[0] = 0LL;
      v14 = 0LL;
      do
      {
        v15 = RtlpFcSectionTypeToBufferType(v14);
        SectionFromBuffer = CmFcpMapSection(&v42[3 * v14], &v41[3 * v15]);
        if ( SectionFromBuffer < 0 )
          goto LABEL_52;
        v14 = (unsigned int)(v14 + 1);
      }
      while ( (unsigned int)v14 < 4 );
      CmpVolumeManagerLockContextListExclusive((unsigned __int64 *)&stru_140EF6B68);
      v16 = 0LL;
      do
      {
        CmFcpSwapSectionState((__int64 *)((char *)&CmFcSystemManager[5] + v16), (_QWORD *)((char *)v42 + v16));
        v16 = v17 + 24;
      }
      while ( v18 != 1 );
      RtlpFcBufferManagerUpdateBuffers(qword_140EF6BE8, Buffer, (__int64)v41);
      memset_0(v41, 0, sizeof(v41));
      RtlpFcWriteHighLowHigh(MmWriteableSharedUserData + 1824, Buffer);
      CmSiRWLockReleaseExclusive((volatile signed __int64 *)&stru_140EF6B68);
      SectionFromBuffer = ZwUpdateWnfStateData(
                            &WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
                            &Buffer,
                            8u,
                            &CmFcpWnfTypeId,
                            0LL,
                            0,
                            0);
      if ( SectionFromBuffer < 0 )
        goto LABEL_52;
      for ( i = 0; i < 2; ++i )
      {
        v20 = ((unsigned __int8)RtlGetSwapReferenceIndex(qword_140EF6CD8) - 1) & 1;
        v21 = (_OWORD *)CmFcSystemManager[v20 + 52];
        Pool2 = (_OWORD *)ExAllocatePool2(0x40uLL, 0x310uLL, 0x63466D43uLL);
        v23 = (__int64)Pool2;
        if ( !Pool2 )
          goto LABEL_51;
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
        RtlUpdateSwapReference((__int64)qword_140EF6CD8, v20);
      }
      qword_140EF6D90 = ExAllocateTimer(
                          (__int64)CmFcpManagerRetryUsageNotificationsTimerRoutine,
                          (__int64)CmFcSystemManager,
                          8u);
      if ( qword_140EF6D90 )
      {
        IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
        v27 = L"\\REGISTRY\\MACHINE\\OSDATA";
        if ( !IsStateSeparationEnabled )
          v27 = L"\\REGISTRY\\MACHINE\\SOFTWARE";
        RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], v27);
        SectionFromBuffer = CmRegisterMachineHiveLoadedNotification(
                              (__int64)CmFcpManagerSoftwareHiveReady,
                              (__int64)CmFcSystemManager,
                              (const UNICODE_STRING *)&DestinationString[1],
                              &qword_140EF6CD0);
        if ( SectionFromBuffer < 0 )
          goto LABEL_52;
        qword_140EF7160 = ExAllocateTimer((__int64)CmFcpManagerFlushUsageTimerRoutine, (__int64)CmFcSystemManager, 8u);
        if ( qword_140EF7160 )
        {
          qword_140EF7168 = ExAllocateTimer(
                              (__int64)CmFcpManagerPublishUsageTimerRoutine,
                              (__int64)CmFcSystemManager,
                              8u);
          if ( qword_140EF7168 )
          {
            CmpVolumeManagerLockContextListExclusive((unsigned __int64 *)&stru_140EF70D8);
            v2 = 1;
            v28 = ((unsigned __int8)RtlGetSwapReferenceIndex(qword_140EF6F10) - 1) & 1;
            v29 = (void *)ExAllocatePool2(0x40uLL, 0x1000uLL, 0x63466D43uLL);
            v30 = (__int64)v29;
            if ( !v29 )
            {
LABEL_35:
              SectionFromBuffer = -1073741670;
              goto LABEL_50;
            }
            memset_0(v29, 0, 0x1000uLL);
            *(_DWORD *)(v30 + 28) = 508;
            CmFcSystemManager[v28 + 165] = v30;
            RtlUpdateSwapReference((__int64)qword_140EF6F10, v28);
            v31 = ((_BYTE)v28 - 1) & 1;
            v32 = (_DWORD *)CmFcSystemManager[v31 + 165];
            if ( v32 )
            {
              if ( byte_140EF7258 && v32[4] )
              {
                v33 = (void *)ExAllocatePool2(0x40uLL, 0x1000uLL, 0x63466D43uLL);
                v34 = (__int64)v33;
                if ( !v33 )
                  goto LABEL_35;
                memmove(v33, v32, 0x1000uLL);
                CmFcpManagerAddBufferIntoPublishListAndSetPublishState((__int64)CmFcSystemManager, v34);
                CmFcpManagerArmFeatureUsageProviderPublishTimer((__int64)CmFcSystemManager);
              }
              CmFcSystemManager[v31 + 165] = 0LL;
            }
            if ( _InterlockedExchange(&dword_140EF7260, 1) == 2 )
              CmFcpManagerPublishFeatureUsageData((__int64)CmFcSystemManager, 1);
            if ( (dword_140EF7230 & 2) != 0 )
              CmFcpManagerArmFeatureUsageProviderFlushTimer((__int64)CmFcSystemManager);
            v10 = (_QWORD *)DestinationString[0];
            SectionFromBuffer = 0;
            goto LABEL_47;
          }
        }
      }
LABEL_51:
      SectionFromBuffer = -1073741670;
LABEL_52:
      CmSiRWLockReleaseExclusive((volatile signed __int64 *)&stru_140EF6B70);
      KeLeaveCriticalRegion();
      goto LABEL_53;
    }
LABEL_47:
    if ( v10 )
      RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140EF6BE8, (__int64)v10);
    if ( v2 )
LABEL_50:
      CmSiRWLockReleaseExclusive((volatile signed __int64 *)&stru_140EF70D8);
    goto LABEL_52;
  }
LABEL_53:
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
