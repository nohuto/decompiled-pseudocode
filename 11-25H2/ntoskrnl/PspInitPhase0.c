/*
 * XREFs of PspInitPhase0 @ 0x140C563A8
 * Callers:
 *     PsInitSystem @ 0x140BCD7F8 (PsInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     strcpy_s @ 0x140501B60 (strcpy_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406EFC30 (ObCreateObjectType.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     ExCreateHandleTable @ 0x1409718A8 (ExCreateHandleTable.c)
 *     PspValidateMitigationOptions @ 0x1409C0E9C (PspValidateMitigationOptions.c)
 *     PsChangeQuantumTable @ 0x1409C0FF8 (PsChangeQuantumTable.c)
 *     PsCreateSystemThread @ 0x140A17730 (PsCreateSystemThread.c)
 *     PspCreateProcess @ 0x140A8F360 (PspCreateProcess.c)
 *     PspValidateMitigationAuditOptions @ 0x140A96540 (PspValidateMitigationAuditOptions.c)
 *     CmSiRWLockInitialize @ 0x140ABABF0 (CmSiRWLockInitialize.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     PspInitializeCpuPartitionsPhase0 @ 0x140C243FC (PspInitializeCpuPartitionsPhase0.c)
 *     PspInitializeSiloStructures @ 0x140C246E8 (PspInitializeSiloStructures.c)
 *     PspInitializeJobStructures @ 0x140C24A2C (PspInitializeJobStructures.c)
 *     PspTlsInitialize @ 0x140C24B34 (PspTlsInitialize.c)
 *     PspIumInitialize @ 0x140C24B88 (PspIumInitialize.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140C24C6C (PspInitializeSystemPartitionPhase0.c)
 */

char __fastcall PspInitPhase0(PVOID StartContext)
{
  char *v1; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  char v6; // cl
  int *v7; // r8
  __int64 v8; // r9
  int v9; // eax
  size_t v10; // rbx
  _RTL_RUN_ONCE *v11; // rcx
  _RTL_RUN_ONCE *v12; // rcx
  __int64 v13; // rax
  _RTL_RUN_ONCE *v14; // rcx
  _RTL_RUN_ONCE *v15; // rcx
  __int64 v16; // rax
  _RTL_RUN_ONCE *v17; // rcx
  _RTL_RUN_ONCE *v18; // rcx
  __int64 v19; // rax
  _KPROCESS *Process; // rcx
  int v21; // ebx
  __int64 *v22; // rdi
  _QWORD *v23; // rbx
  void *v24; // rcx
  NTSTATUS v25; // eax
  PVOID v26; // rcx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v29; // [rsp+60h] [rbp-A0h] BYREF
  char v30; // [rsp+62h] [rbp-9Eh]
  __int64 v31; // [rsp+64h] [rbp-9Ch]
  __int128 v32; // [rsp+6Ch] [rbp-94h]
  int v33; // [rsp+7Ch] [rbp-84h]
  int v34; // [rsp+80h] [rbp-80h]
  int v35; // [rsp+84h] [rbp-7Ch]
  int v36; // [rsp+88h] [rbp-78h]
  int v37; // [rsp+8Ch] [rbp-74h]
  void *v38; // [rsp+98h] [rbp-68h]
  void *v39; // [rsp+A0h] [rbp-60h]
  void *v40; // [rsp+A8h] [rbp-58h]
  int v41; // [rsp+D8h] [rbp-28h]
  PVOID Object; // [rsp+E0h] [rbp-20h] BYREF
  HANDLE ThreadHandle; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v44; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v45; // [rsp+100h] [rbp+0h]
  __int128 v46; // [rsp+110h] [rbp+10h] BYREF
  __int64 v47; // [rsp+120h] [rbp+20h]
  int v48; // [rsp+130h] [rbp+30h]
  char v49; // [rsp+134h] [rbp+34h] BYREF
  int v50; // [rsp+138h] [rbp+38h]
  char v51; // [rsp+13Ch] [rbp+3Ch]
  int v52; // [rsp+140h] [rbp+40h]
  char v53; // [rsp+144h] [rbp+44h]
  int v54; // [rsp+148h] [rbp+48h]
  char v55; // [rsp+14Ch] [rbp+4Ch]
  int v56; // [rsp+150h] [rbp+50h]
  char v57; // [rsp+154h] [rbp+54h]
  int v58; // [rsp+158h] [rbp+58h]
  char v59; // [rsp+15Ch] [rbp+5Ch]
  _OWORD v60[2]; // [rsp+160h] [rbp+60h] BYREF

  PspMinimumWorkingSet += 30LL;
  v1 = &v49;
  PspMaximumWorkingSet += 300LL;
  ThreadHandle = 0LL;
  DestinationString = 0LL;
  v48 = 0;
  v60[0] = _mm_load_si128((const __m128i *)&_xmm);
  v49 = 1;
  v3 = 6LL;
  v50 = 2;
  PspHardenedMitigationOptionsMap = 0LL;
  v51 = 3;
  v52 = 3;
  v53 = 1;
  v54 = 1;
  v55 = 1;
  v56 = 4;
  v57 = 1;
  v58 = 5;
  v59 = 1;
  v60[1] = _mm_load_si128((const __m128i *)&_xmm);
  qword_140FC6578 = 0LL;
  do
  {
    v4 = (unsigned int)(4 * *((_DWORD *)v1 - 1));
    v5 = (unsigned __int8)*v1;
    v6 = (4 * *(v1 - 4)) & 0x3F;
    v1 += 8;
    *((_QWORD *)&PspHardenedMitigationOptionsMap + (v4 >> 6)) = (v5 << v6) | *((_QWORD *)&PspHardenedMitigationOptionsMap
                                                                             + (v4 >> 6)) & ~(3LL << v6);
    --v3;
  }
  while ( v3 );
  if ( (unsigned int)PspSystemMitigationOptionsLength < 0x18 )
    memset_0(
      (void *)(0x140000000LL + (unsigned int)PspSystemMitigationOptionsLength + 16539920LL),
      0,
      24LL - (unsigned int)PspSystemMitigationOptionsLength);
  v44 = PspSystemMitigationOptions;
  PspSystemMitigationOptionsLength = 24;
  v45 = qword_140FC6120;
  if ( (int)PspValidateMitigationOptions((__m128i *)&v44, 1) < 0 )
  {
    PspSystemMitigationOptions = 0LL;
    qword_140FC6120 = 0LL;
  }
  v7 = (int *)v60;
  v8 = 8LL;
  do
  {
    v9 = *v7++;
    *((_QWORD *)&PspSystemMitigationOptions + ((unsigned __int64)(unsigned int)(4 * v9) >> 6)) &= ~(3LL << ((4 * v9) & 0x3F));
    --v8;
  }
  while ( v8 );
  v10 = (unsigned int)PspSystemMitigationAuditOptionsLength;
  if ( (unsigned int)PspSystemMitigationAuditOptionsLength < 0x18 )
    memset_0(
      (char *)&PspSystemMitigationAuditOptions + (unsigned int)PspSystemMitigationAuditOptionsLength,
      0,
      24LL - (unsigned int)PspSystemMitigationAuditOptionsLength);
  v46 = PspSystemMitigationAuditOptions;
  v47 = qword_140FC6380;
  if ( (int)PspValidateMitigationAuditOptions(&v46) < 0 )
    memset_0(&PspSystemMitigationAuditOptions, 0, v10);
  v11 = &PspCreateThreadNotifyRoutine;
  do
  {
    CmSiRWLockInitialize(v11);
    v11 = v12 + 1;
  }
  while ( v13 != 1 );
  v14 = &PspCreateProcessNotifyRoutine;
  do
  {
    CmSiRWLockInitialize(v14);
    v14 = v15 + 1;
  }
  while ( v16 != 1 );
  v17 = &PspLoadImageNotifyRoutine;
  do
  {
    CmSiRWLockInitialize(v17);
    v17 = v18 + 1;
  }
  while ( v19 != 1 );
  PsChangeQuantumTable(0, PsRawPrioritySeparation);
  PspActiveProcessLock = 0LL;
  qword_140F054D8 = (__int64)&PsActiveProcessHead;
  PsActiveProcessHead = (__int64)&PsActiveProcessHead;
  qword_140F05528 = (__int64)&PsActiveSessionHead;
  PsActiveSessionHead = (__int64)&PsActiveSessionHead;
  Process = KeGetCurrentThread()->ApcState.Process;
  PsIdleProcess = Process;
  *(_QWORD *)&Process[1].Header.Lock = 0LL;
  Process[1].ProfileListHead.Blink = 0LL;
  Process->KernelTime = 0LL;
  PspSessionIdBitmap.Buffer = (unsigned int *)&PspSessionIdBuffer;
  qword_140F05598 = (__int64)&qword_140F05590;
  qword_140F05590 = (__int64)&qword_140F05590;
  stru_140F055A0.WorkerRoutine = (void (__fastcall *)(void *))PspPostFreezeOperationWorker;
  stru_140F055A0.Parameter = &PsFreezeWorkGlobals;
  PspSessionIdBitmap.SizeOfBitMap = 128;
  PspSessionIdBuffer = 0LL;
  PspSessionIdNodes = 0LL;
  PsFreezeWorkGlobals = 0LL;
  stru_140F055A0.List.Blink = 0LL;
  qword_140F05588 = 0LL;
  stru_140F055A0.List.Flink = 0LL;
  memset_0(&v29, 0, 0x80uLL);
  v29 = 128;
  v35 = 512;
  RtlInitUnicodeString(&DestinationString, L"Session");
  v30 |= 0xCu;
  v37 = 40;
  v33 = 983043;
  v40 = PsSessionObjectDelete;
  v32 = PspSessionMapping;
  if ( (int)ObCreateObjectType(&DestinationString, &v29, 0LL, (__int64)&MmSessionObjectType) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Job");
    v30 &= 0x7Bu;
    v40 = PspJobDelete;
    v31 = 2048LL;
    v39 = PspJobClose;
    v36 = 0;
    v37 = 1832;
    v33 = 2031679;
    v32 = PspJobMapping;
    v41 = 1;
    if ( (int)ObCreateObjectType(&DestinationString, &v29, 0LL, (__int64)&PsJobType) >= 0 )
    {
      HIDWORD(v31) = 176;
      RtlInitUnicodeString(&DestinationString, L"Process");
      v30 |= 0xC2u;
      v40 = PspProcessDelete;
      LODWORD(v31) = 32;
      v38 = PspProcessOpen;
      v36 = 4096;
      v39 = PspProcessClose;
      v37 = 2112;
      v33 = 0x1FFFFF;
      v34 = 1052672;
      v32 = PspProcessMapping;
      v41 = 3;
      if ( (int)ObCreateObjectType(&DestinationString, &v29, 0LL, (__int64)&PsProcessType) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Thread");
        v30 |= 0x80u;
        v40 = PspThreadDelete;
        LODWORD(v31) = 4;
        v38 = PspThreadOpen;
        v36 = 0;
        v37 = 1944;
        v39 = 0LL;
        v33 = 0x1FFFFF;
        v34 = 1054720;
        v32 = PspThreadMapping;
        v41 = 3;
        if ( (int)ObCreateObjectType(&DestinationString, &v29, 0LL, (__int64)&PsThreadType) >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"Partition");
          memset_0(&v29, 0, 0x80uLL);
          v30 |= 0xCu;
          v38 = PspOpenPartitionHandle;
          v29 = 128;
          v39 = PspClosePartitionHandle;
          HIDWORD(v31) = 16;
          v40 = PspDeletePartition;
          v33 = 2031619;
          v32 = PspPartitionMapping;
          v35 = 512;
          v37 = 144;
          if ( (int)ObCreateObjectType(&DestinationString, &v29, 0LL, (__int64)&PsPartitionType) >= 0 )
          {
            memset_0(&v29, 0, 0x80uLL);
            v21 = 0;
            v35 = 512;
            v29 = 128;
            v30 = v30 & 0x7D | 2;
            v22 = PspMemoryReserveObjectSizes;
            HIDWORD(v31) = 176;
            v32 = PspMemReserveMapping;
            v33 = 983043;
            while ( 1 )
            {
              v37 = *(_DWORD *)v22;
              if ( (int)ObCreateObjectType(
                          (const UNICODE_STRING *)&PspMemoryReserveObjectNames[2 * v21],
                          &v29,
                          0LL,
                          (__int64)(&PspMemoryReserveObjectTypes + v21)) < 0 )
                break;
              ++v21;
              ++v22;
              if ( v21 >= 2 )
              {
                RtlInitUnicodeString(&DestinationString, L"ActivityReference");
                memset_0(&v29, 0, 0x80uLL);
                v30 |= 4u;
                v29 = 128;
                v35 = 1;
                v36 = 8;
                HIDWORD(v31) = 402;
                v32 = PspActivityReferenceMapping;
                v33 = 2031616;
                v39 = PspCloseActivityReference;
                if ( (int)ObCreateObjectType(&DestinationString, &v29, 0LL, (__int64)&PspActivityReferenceObjectType) >= 0 )
                {
                  RtlInitUnicodeString(&DestinationString, L"ProcessStateChange");
                  memset_0(&v29, 0, 0x80uLL);
                  v30 |= 6u;
                  v29 = 128;
                  HIDWORD(v31) = 146;
                  v33 = 983041;
                  v35 = 1;
                  v36 = 24;
                  v38 = 0LL;
                  v32 = PspProcessStateChangeMapping;
                  v39 = 0LL;
                  v40 = PspDeleteProcessStateChange;
                  if ( (int)ObCreateObjectType(&DestinationString, &v29, 0LL, (__int64)&PspProcessStateChangeType) >= 0 )
                  {
                    RtlInitUnicodeString(&DestinationString, L"ThreadStateChange");
                    memset_0(&v29, 0, 0x80uLL);
                    v30 |= 6u;
                    v29 = 128;
                    HIDWORD(v31) = 146;
                    v33 = 983041;
                    v35 = 1;
                    v32 = PspThreadStateChangeMapping;
                    v36 = 24;
                    v38 = 0LL;
                    v39 = 0LL;
                    v40 = PspDeleteThreadStateChange;
                    if ( (int)ObCreateObjectType(&DestinationString, &v29, 0LL, (__int64)&PspThreadStateChangeType) >= 0 )
                    {
                      RtlInitUnicodeString(&DestinationString, L"CpuPartition");
                      memset_0(&v29, 0, 0x80uLL);
                      v30 |= 4u;
                      v29 = 128;
                      v33 = 983047;
                      v35 = 512;
                      v37 = 32;
                      v32 = PspCpuPartitionMapping;
                      v38 = 0LL;
                      v39 = 0LL;
                      v40 = PspDeleteCpuPartition;
                      if ( (int)ObCreateObjectType(&DestinationString, &v29, 0LL, (__int64)&PsCpuPartitionType) >= 0 )
                      {
                        RtlInitUnicodeString(&DestinationString, L"SchedulerSharedData");
                        memset_0(&v29, 0, 0x80uLL);
                        v30 |= 6u;
                        v29 = 128;
                        HIDWORD(v31) = 146;
                        v33 = 983041;
                        v35 = 512;
                        v32 = PspSchedulerSharedDataMapping;
                        v36 = 248;
                        v38 = 0LL;
                        v39 = 0LL;
                        v40 = PspSchedulerSharedDataRegionDelete;
                        if ( (int)ObCreateObjectType(
                                    &DestinationString,
                                    &v29,
                                    0LL,
                                    (__int64)&PspSchedulerSharedDataType) >= 0 )
                        {
                          if ( PspInitializeJobStructures() )
                          {
                            if ( PspInitializeSiloStructures() )
                            {
                              qword_140FC60B8 = 0LL;
                              qword_140FC60B0 = (__int64)&PspWorkingSetChangeHead;
                              PspWorkingSetChangeHead = (__int64)&PspWorkingSetChangeHead;
                              PspAffinityUpdateLock = 0LL;
                              PspCidTable = ExCreateHandleTable(0LL, 0);
                              if ( PspCidTable )
                              {
                                CmSiRWLockInitialize(&PsWin32CallBack);
                                CmSiRWLockInitialize(&PsWin32NullCallBack);
                                *(_BYTE *)(PspCidTable + 44) |= 1u;
                                qword_140F05510 = (__int64)PspReaper;
                                qword_140F05570 = (__int64)PspProcessRundownWorker;
                                PspProcessRundownCacheWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspProcessRundownWorkerSingle;
                                PsReaperListHead = 0LL;
                                qword_140F05518 = 0LL;
                                PsReaperWorkItem = 0LL;
                                qword_140F05578 = 0LL;
                                PspProcessRundownWorkItem = 0LL;
                                PspProcessRundownCacheWorkItem.Parameter = 0LL;
                                PspProcessRundownCacheWorkItem.List.Flink = 0LL;
                                if ( (int)PspTlsInitialize() >= 0 )
                                {
                                  PspBootAccessToken = *((_QWORD *)PsIdleProcess + 73) & 0xFFFFFFFFFFFFFFF0uLL;
                                  if ( (int)PspInitializeSystemPartitionPhase0() >= 0 )
                                  {
                                    v23 = PspSystemPartition;
                                    if ( (int)PspInitializeCpuPartitionsPhase0() >= 0
                                      && PspCreateProcess(v23 + 16, 0x1FFFFF, 0LL, 0LL, 0, 0, 0LL, 0LL, 0LL) >= 0 )
                                    {
                                      v24 = (void *)v23[16];
                                      Object = 0LL;
                                      v25 = ObReferenceObjectByHandle(
                                              v24,
                                              0,
                                              (POBJECT_TYPE)PsProcessType,
                                              0,
                                              &Object,
                                              0LL);
                                      v26 = Object;
                                      v23[15] = Object;
                                      if ( v25 >= 0 )
                                      {
                                        PsInitialSystemProcess = (PEPROCESS)v26;
                                        _InterlockedOr((volatile signed __int32 *)v26 + 468, 0x40000000u);
                                        _InterlockedOr(
                                          (volatile signed __int32 *)&PsInitialSystemProcess[4].ThreadListHead.Flink + 1,
                                          0x2000u);
                                        _InterlockedOr(
                                          (volatile signed __int32 *)&PsInitialSystemProcess[3].ActiveGroupsMask.Masks[1]
                                        + 1,
                                          0x1000u);
                                        strcpy_s((char *)PsIdleProcess + 824, 0xFuLL, "Idle");
                                        strcpy_s((char *)&PsInitialSystemProcess[1].SecureState, 0xFuLL, "System");
                                        PsInitialSystemProcess[1].LastRebalanceQpc = ExAllocatePool2(
                                                                                       0x40uLL,
                                                                                       0x10uLL,
                                                                                       0x61506553uLL);
                                        if ( PsInitialSystemProcess[1].LastRebalanceQpc )
                                        {
                                          if ( PsCreateSystemThread(
                                                 &ThreadHandle,
                                                 0x1FFFFFu,
                                                 0LL,
                                                 0LL,
                                                 0LL,
                                                 (PKSTART_ROUTINE)Phase1Initialization,
                                                 StartContext) >= 0 )
                                          {
                                            ObCloseHandle(ThreadHandle, 0);
                                            if ( PspIumInitialize() )
                                            {
                                              PsVmProcessorHostTransitionEvent = 0LL;
                                              return 1;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
