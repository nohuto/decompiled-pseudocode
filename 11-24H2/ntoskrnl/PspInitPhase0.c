/*
 * XREFs of PspInitPhase0 @ 0x140C676AC
 * Callers:
 *     PsInitSystem @ 0x140BE07F8 (PsInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     wcslen @ 0x1404FD790 (wcslen.c)
 *     strcpy_s @ 0x140501BA0 (strcpy_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x1408F8C00 (PsCreateSystemThread.c)
 *     ExCreateHandleTable @ 0x14094D1CC (ExCreateHandleTable.c)
 *     PspCreateProcess @ 0x1409F98C4 (PspCreateProcess.c)
 *     PspValidateMitigationOptions @ 0x140A175FC (PspValidateMitigationOptions.c)
 *     PsChangeQuantumTable @ 0x140A261A0 (PsChangeQuantumTable.c)
 *     PspValidateMitigationAuditOptions @ 0x140A979C0 (PspValidateMitigationAuditOptions.c)
 *     CmSiRWLockInitialize @ 0x140AB8200 (CmSiRWLockInitialize.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     PspInitializeCpuPartitionsPhase0 @ 0x140C37808 (PspInitializeCpuPartitionsPhase0.c)
 *     PspInitializeSiloStructures @ 0x140C37AF4 (PspInitializeSiloStructures.c)
 *     PspInitializeJobStructures @ 0x140C37E38 (PspInitializeJobStructures.c)
 *     PspTlsInitialize @ 0x140C37F40 (PspTlsInitialize.c)
 *     PspIumInitialize @ 0x140C37F94 (PspIumInitialize.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140C38078 (PspInitializeSystemPartitionPhase0.c)
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
  size_t v21; // rax
  __int64 *v22; // rdi
  int v23; // ebx
  _QWORD *v24; // rbx
  void *v25; // rcx
  NTSTATUS v26; // eax
  PVOID v27; // rcx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v30; // [rsp+60h] [rbp-A0h] BYREF
  char v31; // [rsp+62h] [rbp-9Eh]
  __int64 v32; // [rsp+64h] [rbp-9Ch]
  __int128 v33; // [rsp+6Ch] [rbp-94h]
  int v34; // [rsp+7Ch] [rbp-84h]
  int v35; // [rsp+80h] [rbp-80h]
  int v36; // [rsp+84h] [rbp-7Ch]
  int v37; // [rsp+88h] [rbp-78h]
  int v38; // [rsp+8Ch] [rbp-74h]
  void *v39; // [rsp+98h] [rbp-68h]
  void *v40; // [rsp+A0h] [rbp-60h]
  void *v41; // [rsp+A8h] [rbp-58h]
  int v42; // [rsp+D8h] [rbp-28h]
  PVOID Object; // [rsp+E0h] [rbp-20h] BYREF
  HANDLE ThreadHandle; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v45; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v46; // [rsp+100h] [rbp+0h]
  __int128 v47; // [rsp+110h] [rbp+10h] BYREF
  __int64 v48; // [rsp+120h] [rbp+20h]
  int v49; // [rsp+130h] [rbp+30h]
  char v50; // [rsp+134h] [rbp+34h] BYREF
  int v51; // [rsp+138h] [rbp+38h]
  char v52; // [rsp+13Ch] [rbp+3Ch]
  int v53; // [rsp+140h] [rbp+40h]
  char v54; // [rsp+144h] [rbp+44h]
  int v55; // [rsp+148h] [rbp+48h]
  char v56; // [rsp+14Ch] [rbp+4Ch]
  int v57; // [rsp+150h] [rbp+50h]
  char v58; // [rsp+154h] [rbp+54h]
  int v59; // [rsp+158h] [rbp+58h]
  char v60; // [rsp+15Ch] [rbp+5Ch]
  _OWORD v61[2]; // [rsp+160h] [rbp+60h] BYREF

  v1 = &v50;
  PspMinimumWorkingSet += 30LL;
  PspMaximumWorkingSet += 300LL;
  v61[0] = _mm_load_si128((const __m128i *)&_xmm);
  ThreadHandle = 0LL;
  v49 = 0;
  v57 = 4;
  v50 = 1;
  v51 = 2;
  v52 = 3;
  qword_140FC75B8 = 0LL;
  v3 = 6LL;
  v53 = 3;
  v54 = 1;
  v55 = 1;
  v56 = 1;
  v58 = 1;
  v59 = 5;
  v60 = 1;
  v61[1] = _mm_load_si128((const __m128i *)&_xmm);
  PspHardenedMitigationOptionsMap = 0LL;
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
      (void *)(0x140000000LL + (unsigned int)PspSystemMitigationOptionsLength + 16544064LL),
      0,
      24LL - (unsigned int)PspSystemMitigationOptionsLength);
  v45 = PspSystemMitigationOptions;
  PspSystemMitigationOptionsLength = 24;
  v46 = qword_140FC7150;
  if ( (int)PspValidateMitigationOptions((__m128i *)&v45, 1) < 0 )
  {
    PspSystemMitigationOptions = 0LL;
    qword_140FC7150 = 0LL;
  }
  v7 = (int *)v61;
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
  v47 = PspSystemMitigationAuditOptions;
  v48 = qword_140FC73C0;
  if ( (int)PspValidateMitigationAuditOptions(&v47) < 0 )
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
  qword_140F05BD8 = (__int64)&PsActiveProcessHead;
  PsActiveProcessHead = (__int64)&PsActiveProcessHead;
  qword_140F05C28 = (__int64)&PsActiveSessionHead;
  PsActiveSessionHead = (__int64)&PsActiveSessionHead;
  Process = KeGetCurrentThread()->ApcState.Process;
  PsIdleProcess = Process;
  *(_QWORD *)&Process[1].Header.Lock = 0LL;
  Process[1].ProfileListHead.Blink = 0LL;
  Process->KernelTime = 0LL;
  PspSessionIdBitmap.SizeOfBitMap = 128;
  PspSessionIdBitmap.Buffer = (unsigned int *)&PspSessionIdBuffer;
  PspSessionIdBuffer = 0LL;
  PspSessionIdNodes = 0LL;
  if ( (unsigned __int8)Win32kAsyncProcessFreezeThawSupportIsActive() )
  {
    PsFreezeWorkGlobals = 0LL;
    qword_140F05C58 = (__int64)&qword_140F05C50;
    qword_140F05C50 = (__int64)&qword_140F05C50;
    stru_140F05C60.WorkerRoutine = (void (__fastcall *)(void *))PspPostFreezeOperationWorker;
    stru_140F05C60.Parameter = &PsFreezeWorkGlobals;
    stru_140F05C60.List.Blink = 0LL;
    qword_140F05C48 = 0LL;
    stru_140F05C60.List.Flink = 0LL;
  }
  memset_0(&v30, 0, 0x80uLL);
  DestinationString.Buffer = (wchar_t *)L"Session";
  v30 = 128;
  v36 = 512;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v21 = 2 * wcslen(L"Session");
  v38 = 40;
  v34 = 983043;
  if ( v21 >= 0xFFFE )
    LOWORD(v21) = -4;
  DestinationString.Length = v21;
  DestinationString.MaximumLength = v21 + 2;
  v31 |= 0xCu;
  v41 = PsSessionObjectDelete;
  v33 = PspSessionMapping;
  if ( (int)ObCreateObjectType(&DestinationString, &v30, 0LL, (__int64)&MmSessionObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Job");
  v31 &= 0x7Bu;
  v41 = PspJobDelete;
  v32 = 2048LL;
  v40 = PspJobClose;
  v37 = 0;
  v38 = 1832;
  v34 = 2031679;
  v33 = PspJobMapping;
  v42 = 1;
  if ( (int)ObCreateObjectType(&DestinationString, &v30, 0LL, (__int64)&PsJobType) < 0 )
    return 0;
  HIDWORD(v32) = 176;
  RtlInitUnicodeString(&DestinationString, L"Process");
  v31 |= 0xC2u;
  v41 = PspProcessDelete;
  LODWORD(v32) = 32;
  v39 = PspProcessOpen;
  v37 = 4096;
  v40 = PspProcessClose;
  v38 = 2112;
  v34 = 0x1FFFFF;
  v35 = 1052672;
  v33 = PspProcessMapping;
  v42 = 3;
  if ( (int)ObCreateObjectType(&DestinationString, &v30, 0LL, (__int64)&PsProcessType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Thread");
  v31 |= 0x80u;
  v41 = PspThreadDelete;
  LODWORD(v32) = 4;
  v39 = PspThreadOpen;
  v37 = 0;
  v38 = 1944;
  v40 = 0LL;
  v34 = 0x1FFFFF;
  v35 = 1054720;
  v33 = PspThreadMapping;
  v42 = 3;
  if ( (int)ObCreateObjectType(&DestinationString, &v30, 0LL, (__int64)&PsThreadType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Partition");
  memset_0(&v30, 0, 0x80uLL);
  v31 |= 0xCu;
  v39 = PspOpenPartitionHandle;
  v30 = 128;
  v40 = PspClosePartitionHandle;
  HIDWORD(v32) = 16;
  v41 = PspDeletePartition;
  v34 = 2031619;
  v36 = 512;
  v33 = PspPartitionMapping;
  v38 = 144;
  if ( (int)ObCreateObjectType(&DestinationString, &v30, 0LL, (__int64)&PsPartitionType) < 0 )
    return 0;
  memset_0(&v30, 0, 0x80uLL);
  HIDWORD(v32) = 176;
  v36 = 512;
  v31 = v31 & 0x7D | 2;
  v22 = PspMemoryReserveObjectSizes;
  v30 = 128;
  v23 = 0;
  v33 = PspMemReserveMapping;
  v34 = 983043;
  while ( v23 < 2 )
  {
    v38 = *(_DWORD *)v22;
    if ( (int)ObCreateObjectType(
                (const UNICODE_STRING *)&PspMemoryReserveObjectNames[2 * v23],
                &v30,
                0LL,
                (__int64)(&PspMemoryReserveObjectTypes + v23)) < 0 )
      return 0;
    ++v23;
    ++v22;
  }
  RtlInitUnicodeString(&DestinationString, L"ActivityReference");
  memset_0(&v30, 0, 0x80uLL);
  v31 |= 4u;
  v30 = 128;
  v36 = 1;
  v37 = 8;
  HIDWORD(v32) = 402;
  v33 = PspActivityReferenceMapping;
  v34 = 2031616;
  v40 = PspCloseActivityReference;
  if ( (int)ObCreateObjectType(&DestinationString, &v30, 0LL, (__int64)&PspActivityReferenceObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"ProcessStateChange");
  memset_0(&v30, 0, 0x80uLL);
  v31 |= 6u;
  v30 = 128;
  HIDWORD(v32) = 146;
  v34 = 983041;
  v36 = 1;
  v37 = 24;
  v39 = 0LL;
  v33 = PspProcessStateChangeMapping;
  v40 = 0LL;
  v41 = PspDeleteProcessStateChange;
  if ( (int)ObCreateObjectType(&DestinationString, &v30, 0LL, (__int64)&PspProcessStateChangeType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"ThreadStateChange");
  memset_0(&v30, 0, 0x80uLL);
  v31 |= 6u;
  v30 = 128;
  HIDWORD(v32) = 146;
  v34 = 983041;
  v36 = 1;
  v33 = PspThreadStateChangeMapping;
  v37 = 24;
  v39 = 0LL;
  v40 = 0LL;
  v41 = PspDeleteThreadStateChange;
  if ( (int)ObCreateObjectType(&DestinationString, &v30, 0LL, (__int64)&PspThreadStateChangeType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"CpuPartition");
  memset_0(&v30, 0, 0x80uLL);
  v31 |= 4u;
  v30 = 128;
  v34 = 983047;
  v36 = 512;
  v38 = 32;
  v33 = PspCpuPartitionMapping;
  v39 = 0LL;
  v40 = 0LL;
  v41 = PspDeleteCpuPartition;
  if ( (int)ObCreateObjectType(&DestinationString, &v30, 0LL, (__int64)&PsCpuPartitionType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"SchedulerSharedData");
  memset_0(&v30, 0, 0x80uLL);
  v31 |= 6u;
  v30 = 128;
  HIDWORD(v32) = 146;
  v34 = 983041;
  v36 = 512;
  v33 = PspSchedulerSharedDataMapping;
  v37 = 248;
  v39 = 0LL;
  v40 = 0LL;
  v41 = PspSchedulerSharedDataRegionDelete;
  if ( (int)ObCreateObjectType(&DestinationString, &v30, 0LL, (__int64)&PspSchedulerSharedDataType) < 0 )
    return 0;
  if ( !PspInitializeJobStructures() )
    return 0;
  if ( !PspInitializeSiloStructures() )
    return 0;
  qword_140FC70E8 = 0LL;
  qword_140FC70E0 = (__int64)&PspWorkingSetChangeHead;
  PspWorkingSetChangeHead = (__int64)&PspWorkingSetChangeHead;
  PspAffinityUpdateLock = 0LL;
  PspCidTable = ExCreateHandleTable(0LL, 0);
  if ( !PspCidTable )
    return 0;
  CmSiRWLockInitialize(&PsWin32CallBack);
  CmSiRWLockInitialize(&PsWin32NullCallBack);
  *(_BYTE *)(PspCidTable + 44) |= 1u;
  qword_140F05BB0 = (__int64)PspReaper;
  qword_140F05C10 = (__int64)PspProcessRundownWorker;
  PspProcessRundownCacheWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspProcessRundownWorkerSingle;
  PsReaperListHead = 0LL;
  qword_140F05BB8 = 0LL;
  PsReaperWorkItem = 0LL;
  qword_140F05C18 = 0LL;
  PspProcessRundownWorkItem = 0LL;
  PspProcessRundownCacheWorkItem.Parameter = 0LL;
  PspProcessRundownCacheWorkItem.List.Flink = 0LL;
  if ( (int)PspTlsInitialize() < 0 )
    return 0;
  PspBootAccessToken = *((_QWORD *)PsIdleProcess + 73) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (int)PspInitializeSystemPartitionPhase0() < 0 )
    return 0;
  v24 = PspSystemPartition;
  if ( (int)PspInitializeCpuPartitionsPhase0() < 0 )
    return 0;
  if ( PspCreateProcess(v24 + 16, 0x1FFFFF, 0LL, 0LL, 0, 0, 0LL, 0LL, 0LL) < 0 )
    return 0;
  v25 = (void *)v24[16];
  Object = 0LL;
  v26 = ObReferenceObjectByHandle(v25, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
  v27 = Object;
  v24[15] = Object;
  if ( v26 < 0 )
    return 0;
  PsInitialSystemProcess = (PEPROCESS)v27;
  _InterlockedOr((volatile signed __int32 *)v27 + 468, 0x40000000u);
  _InterlockedOr((volatile signed __int32 *)&PsInitialSystemProcess[4].ThreadListHead.Flink + 1, 0x2000u);
  _InterlockedOr((volatile signed __int32 *)&PsInitialSystemProcess[3].ActiveGroupsMask.Masks[1] + 1, 0x1000u);
  strcpy_s((char *)PsIdleProcess + 824, 0xFuLL, "Idle");
  strcpy_s((char *)&PsInitialSystemProcess[1].SecureState, 0xFuLL, "System");
  PsInitialSystemProcess[1].LastRebalanceQpc = ExAllocatePool2(0x40uLL, 0x10uLL, 0x61506553uLL);
  if ( !PsInitialSystemProcess[1].LastRebalanceQpc )
    return 0;
  if ( PsCreateSystemThread(
         &ThreadHandle,
         0x1FFFFFu,
         0LL,
         0LL,
         0LL,
         (PKSTART_ROUTINE)Phase1Initialization,
         StartContext) < 0 )
    return 0;
  ObCloseHandle(ThreadHandle, 0);
  if ( !PspIumInitialize() )
    return 0;
  PsVmProcessorHostTransitionEvent = 0LL;
  return 1;
}
