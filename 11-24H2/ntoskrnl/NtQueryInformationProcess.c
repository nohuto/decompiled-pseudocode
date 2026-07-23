/*
 * XREFs of NtQueryInformationProcess @ 0x140995530
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExUnlockUserBuffer @ 0x14025FDEC (ExUnlockUserBuffer.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     PspUnlockProcessShared @ 0x14028E8F0 (PspUnlockProcessShared.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsQueryProcessCommandLine @ 0x1402E1810 (PsQueryProcessCommandLine.c)
 *     PspLockProcessShared @ 0x14031DC40 (PspLockProcessShared.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeIsEmptyGroupMask @ 0x14032FF20 (KeIsEmptyGroupMask.c)
 *     KeFindFirstSetRightGroupMask @ 0x140330524 (KeFindFirstSetRightGroupMask.c)
 *     KeQuerySystemTimePrecise @ 0x14036D140 (KeQuerySystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     KeQueryAffinityProcess @ 0x14039FD80 (KeQueryAffinityProcess.c)
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     PsGetEffectiveServerSilo @ 0x1403C3570 (PsGetEffectiveServerSilo.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     MmQueryWorkingSetInformation @ 0x1404103B0 (MmQueryWorkingSetInformation.c)
 *     KeTestBitGroupMask @ 0x14041C6B0 (KeTestBitGroupMask.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     PsGetWin32KFilterSet @ 0x140447960 (PsGetWin32KFilterSet.c)
 *     ExQueryHandleExceptionsPermanency @ 0x1404479A4 (ExQueryHandleExceptionsPermanency.c)
 *     KeClearBitGroupMask @ 0x140454108 (KeClearBitGroupMask.c)
 *     MmQueryCommitReleaseState @ 0x140478DE4 (MmQueryCommitReleaseState.c)
 *     KeQueryGroupMaskProcess @ 0x14047EEAC (KeQueryGroupMaskProcess.c)
 *     KeQueryCpuSetsProcess @ 0x1404CD5EC (KeQueryCpuSetsProcess.c)
 *     xKdEnumerateDebuggingDevices @ 0x1404F82D0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x1406A9E70 (ZwQueryInformationJobObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x1406F699C (EtwQueryProcessTelemetryCoverage.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     PsQueryStatisticsProcess @ 0x14085E140 (PsQueryStatisticsProcess.c)
 *     ObGetProcessHandleCount @ 0x14085E360 (ObGetProcessHandleCount.c)
 *     PsQueryProcessEnergyValues @ 0x14085EE30 (PsQueryProcessEnergyValues.c)
 *     ExEnumHandleTable @ 0x140861190 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x140894BB0 (ObReferenceProcessHandleTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PspGetRedirectionTrustPolicy @ 0x1408EB35C (PspGetRedirectionTrustPolicy.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408EF7A4 (EtwQueryProcessTelemetryInfo.c)
 *     PsGetProcessDeepFreezeStats @ 0x1408F3CEC (PsGetProcessDeepFreezeStats.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140912870 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PsReferenceProcessFilePointer @ 0x140922040 (PsReferenceProcessFilePointer.c)
 *     ExLockUserBuffer @ 0x14094F5B8 (ExLockUserBuffer.c)
 *     IoQueryFileDosDeviceName @ 0x140950990 (IoQueryFileDosDeviceName.c)
 *     ObQueryDeviceMapInformation @ 0x14096D0C0 (ObQueryDeviceMapInformation.c)
 *     MiCopyVirtualMemory @ 0x140993190 (MiCopyVirtualMemory.c)
 *     PspQueryQuotaLimits @ 0x1409AF220 (PspQueryQuotaLimits.c)
 *     PsQueryRuntimeProcess @ 0x1409AF430 (PsQueryRuntimeProcess.c)
 *     PsQueryProcessAttributes @ 0x1409C65D0 (PsQueryProcessAttributes.c)
 *     ExQueryProcessHandleInformation @ 0x1409C6748 (ExQueryProcessHandleInformation.c)
 *     ExReferenceHandleDebugInfo @ 0x1409E16F8 (ExReferenceHandleDebugInfo.c)
 *     MmGetSectionInformation @ 0x1409E9C60 (MmGetSectionInformation.c)
 *     PsQueryFullProcessImageName @ 0x1409F8B50 (PsQueryFullProcessImageName.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x1409F8BE0 (PsQueryProcessSignatureMitigationPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140A00208 (PspGetNoChildProcessRestrictedPolicy.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A00380 (ExDereferenceHandleDebugInfo.c)
 *     PspQueryWorkingSetWatch @ 0x140A0D6C8 (PspQueryWorkingSetWatch.c)
 *     ExIsRestrictedCaller @ 0x140A0DA38 (ExIsRestrictedCaller.c)
 *     KeGetExecuteOptions @ 0x140A0DB30 (KeGetExecuteOptions.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140A150F0 (PsQueryTotalCycleTimeProcess.c)
 *     VslGetSecurePebAddress @ 0x140A52760 (VslGetSecurePebAddress.c)
 *     PsGetSiloIdentifier @ 0x140A61590 (PsGetSiloIdentifier.c)
 *     DbgkOpenProcessDebugPort @ 0x140A64974 (DbgkOpenProcessDebugPort.c)
 *     VslLiveDumpCaptureProcess @ 0x140A894A4 (VslLiveDumpCaptureProcess.c)
 *     PoQueryProcessEnergyTrackingState @ 0x140A91254 (PoQueryProcessEnergyTrackingState.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x140AAD744 (PsIumGetOnDemandDebugChallenge.c)
 *     PspQueryPooledQuotaLimits @ 0x140AAE674 (PspQueryPooledQuotaLimits.c)
 *     PspFindFirstThreadByTebValue @ 0x140ABA85C (PspFindFirstThreadByTebValue.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  size_t v5; // r14
  unsigned __int64 v6; // rsi
  void *Ptr; // rbx
  unsigned __int8 PreviousMode; // r13
  struct _KTHREAD *CurrentThread; // r10
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // edi
  NTSTATUS result; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // edi
  int v19; // r14d
  _KPROCESS *v20; // rdi
  unsigned __int64 v21; // r15
  unsigned __int16 v22; // dx
  POBJECT_NAME_INFORMATION v23; // rdx
  _DWORD *v24; // r8
  unsigned int v25; // ecx
  __int16 v26; // ax
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // ecx
  int v36; // ecx
  int v37; // eax
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int NoChildProcessRestrictedPolicy; // eax
  int v42; // eax
  int v43; // eax
  _QWORD *v44; // rbx
  NTSTATUS DeviceMapInformation; // edi
  __int64 v46; // rax
  __int64 v47; // rcx
  PVOID v48; // rcx
  NTSTATUS v49; // r14d
  NTSTATUS v50; // esi
  _QWORD *v51; // rbx
  __int64 v52; // r8
  __int64 v53; // r9
  NTSTATUS v54; // r14d
  PVOID v55; // r14
  NTSTATUS v56; // edi
  unsigned int v57; // edi
  struct _EX_RUNDOWN_REF *v58; // rdi
  char v59; // r14
  NTSTATUS SectionInformation; // r15d
  struct _EX_RUNDOWN_REF *v61; // r13
  struct _FILE_OBJECT *v62; // r15
  POBJECT_NAME_INFORMATION v63; // r15
  ULONG v64; // r13d
  PVOID v65; // rdi
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 *v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rcx
  unsigned __int16 v72; // r13
  ULONG v73; // eax
  int v74; // ebx
  int SessionId; // ebx
  void **v76; // rax
  void *Process; // r10
  void *v78; // r10
  int ProcessTelemetryCoverage; // eax
  _DWORD *p_LockNV; // rcx
  int v81; // eax
  NTSTATUS ProcessCommandLine; // eax
  NTSTATUS v83; // ebx
  _DWORD *v84; // r8
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // r13
  __int64 v87; // rax
  __int64 v88; // r14
  __int64 v89; // rdi
  struct _EX_RUNDOWN_REF *v90; // rbx
  unsigned __int64 v91; // rax
  NTSTATUS ProcessHandleInformation; // r15d
  PVOID v93; // rdi
  NTSTATUS v94; // edi
  struct _EX_RUNDOWN_REF *v95; // rdi
  unsigned int *v96; // rax
  _DWORD *v97; // rcx
  void *v98; // rdi
  int v99; // eax
  int v100; // eax
  __int64 v101; // rbx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rax
  __int64 v105; // rax
  int RedirectionTrustPolicy; // eax
  int v107; // eax
  int v108; // eax
  unsigned int v109; // ecx
  __int64 v110; // rax
  unsigned int v111; // eax
  int v112; // ecx
  __int64 v113; // rax
  int v114; // eax
  int v115; // edx
  __int64 v116; // rdx
  __int128 *v117; // rdi
  int FirstThreadByTebValue; // eax
  NTSTATUS v119; // ecx
  int ProcessHandleCount; // edi
  int v121; // ebx
  __int64 v122; // rbx
  int v123; // ebx
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  int v129; // ecx
  unsigned __int64 v130; // rax
  _QWORD *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // r15
  __int64 v134; // r13
  int v135; // edx
  HANDLE v136; // r14
  int v137; // ebx
  char v138; // r9
  __int64 v139; // rdx
  unsigned int v140; // r10d
  _OWORD *v141; // rax
  __int64 v142; // r11
  int v143; // r8d
  POBJECT_NAME_INFORMATION v144; // rcx
  unsigned int v145; // r8d
  __int64 v146; // r11
  ULONG_PTR v147; // rdi
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // r14
  PVOID v149; // rdi
  SECTION_OBJECT_POINTERS *v150; // rsi
  NTSTATUS v151; // r15d
  unsigned __int64 v152; // rdx
  PVOID v153; // r15
  unsigned __int16 FirstSetRightGroupMask; // dx
  ULONG v155; // edi
  size_t v156; // r8
  __int64 EffectiveServerSilo; // rax
  __int32 SiloIdentifier; // ebx
  unsigned __int64 v159; // rax
  unsigned __int64 v160; // rax
  NTSTATUS v161; // ebx
  PVOID *v162; // rcx
  _KPROCESS *v163; // rcx
  struct _LIST_ENTRY *Blink; // r8
  __int64 v165; // rax
  __int64 *ReadyTime; // rdx
  signed __int32 v167[8]; // [rsp+0h] [rbp-A08h] BYREF
  PVOID Object; // [rsp+40h] [rbp-9C8h] BYREF
  NTSTATUS i; // [rsp+48h] [rbp-9C0h]
  char v170; // [rsp+4Ch] [rbp-9BCh]
  char v171; // [rsp+4Dh] [rbp-9BBh] BYREF
  char v172; // [rsp+4Eh] [rbp-9BAh] BYREF
  char v173; // [rsp+4Fh] [rbp-9B9h] BYREF
  NTSTATUS v174; // [rsp+50h] [rbp-9B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-9B0h] BYREF
  unsigned __int16 v176; // [rsp+60h] [rbp-9A8h] BYREF
  HANDLE v177; // [rsp+68h] [rbp-9A0h]
  __int64 v178; // [rsp+90h] [rbp-978h]
  __int16 v179; // [rsp+98h] [rbp-970h]
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+A0h] [rbp-968h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp-960h] BYREF
  PVOID v182; // [rsp+B0h] [rbp-958h] BYREF
  unsigned int v183; // [rsp+B8h] [rbp-950h]
  struct _KTHREAD *v184; // [rsp+C0h] [rbp-948h]
  int v185; // [rsp+C8h] [rbp-940h]
  __m128i v186; // [rsp+D0h] [rbp-938h] BYREF
  unsigned __int64 v187; // [rsp+E0h] [rbp-928h] BYREF
  int v188; // [rsp+E8h] [rbp-920h]
  int v189; // [rsp+ECh] [rbp-91Ch] BYREF
  int v190; // [rsp+F0h] [rbp-918h] BYREF
  unsigned __int64 v191; // [rsp+F8h] [rbp-910h] BYREF
  __m128i v192; // [rsp+100h] [rbp-908h] BYREF
  __int128 v193; // [rsp+110h] [rbp-8F8h] BYREF
  HANDLE Handle[4]; // [rsp+120h] [rbp-8E8h] BYREF
  __m256i Src; // [rsp+140h] [rbp-8C8h] BYREF
  __int128 v196; // [rsp+160h] [rbp-8A8h] BYREF
  __int64 v197; // [rsp+170h] [rbp-898h]
  __int64 v198; // [rsp+178h] [rbp-890h]
  __int64 v199; // [rsp+180h] [rbp-888h]
  __int64 v200; // [rsp+188h] [rbp-880h]
  __int64 v201; // [rsp+190h] [rbp-878h]
  __int64 v202; // [rsp+198h] [rbp-870h]
  _QWORD v203[2]; // [rsp+1A0h] [rbp-868h] BYREF
  int v204; // [rsp+1B0h] [rbp-858h]
  int v205; // [rsp+1B4h] [rbp-854h]
  int v206; // [rsp+1B8h] [rbp-850h] BYREF
  unsigned int v207; // [rsp+1BCh] [rbp-84Ch]
  __int64 v208; // [rsp+1C0h] [rbp-848h] BYREF
  unsigned __int64 v209; // [rsp+1C8h] [rbp-840h] BYREF
  int v210; // [rsp+1D0h] [rbp-838h]
  ULONG v211; // [rsp+1D8h] [rbp-830h]
  int v212; // [rsp+1E0h] [rbp-828h]
  __int64 v213; // [rsp+1E8h] [rbp-820h] BYREF
  HANDLE v214; // [rsp+1F0h] [rbp-818h] BYREF
  PVOID v215; // [rsp+1F8h] [rbp-810h] BYREF
  int v216; // [rsp+288h] [rbp-780h]
  unsigned __int64 v217[3]; // [rsp+2C0h] [rbp-748h] BYREF
  __int128 v218; // [rsp+2D8h] [rbp-730h] BYREF
  __int128 v219; // [rsp+2E8h] [rbp-720h]
  POBJECT_NAME_INFORMATION v220; // [rsp+2F8h] [rbp-710h]
  ULONG_PTR v221; // [rsp+300h] [rbp-708h]
  __int128 v222; // [rsp+308h] [rbp-700h] BYREF
  unsigned __int64 v223; // [rsp+318h] [rbp-6F0h]
  _QWORD v224[5]; // [rsp+320h] [rbp-6E8h] BYREF
  __m256i v225; // [rsp+348h] [rbp-6C0h]
  __int128 v226; // [rsp+368h] [rbp-6A0h]
  __int128 v227; // [rsp+390h] [rbp-678h]
  __int128 v228; // [rsp+3A0h] [rbp-668h]
  _OWORD v229[8]; // [rsp+3B0h] [rbp-658h]
  __int128 v230; // [rsp+430h] [rbp-5D8h] BYREF
  __int64 v231; // [rsp+440h] [rbp-5C8h] BYREF
  int v232; // [rsp+448h] [rbp-5C0h]
  __int128 v233; // [rsp+450h] [rbp-5B8h] BYREF
  _OWORD v234[3]; // [rsp+460h] [rbp-5A8h] BYREF
  __int128 JobObjectInformation; // [rsp+490h] [rbp-578h] BYREF
  __int128 v236; // [rsp+4A0h] [rbp-568h]
  __int64 v237; // [rsp+4B0h] [rbp-558h]
  struct _KAFFINITY_EX v238; // [rsp+4C0h] [rbp-548h] BYREF
  _BYTE v239[16]; // [rsp+5D0h] [rbp-438h] BYREF
  int v240; // [rsp+5E0h] [rbp-428h]
  __int64 v241; // [rsp+648h] [rbp-3C0h]
  __int64 v242; // [rsp+660h] [rbp-3A8h]
  _BYTE v243[144]; // [rsp+670h] [rbp-398h] BYREF
  _OWORD v244[28]; // [rsp+700h] [rbp-308h] BYREF
  _BYTE v245[256]; // [rsp+8C0h] [rbp-148h] BYREF

  v5 = ProcessInformationLength;
  v6 = (unsigned __int64)ProcessInformation;
  v177 = ProcessHandle;
  Handle[1] = ProcessInformation;
  v211 = ProcessInformationLength;
  Handle[2] = ReturnLength;
  memset(v234, 0, sizeof(v234));
  Ptr = 0LL;
  v174 = 0;
  Handle[0] = 0LL;
  v189 = 0;
  memset_0(&v238, 0, sizeof(v238));
  FileObject = 0LL;
  v230 = 0LL;
  v206 = 0;
  v205 = 0;
  memset_0(v239, 0, 0x98uLL);
  v222 = 0LL;
  v208 = 0LL;
  JobObjectInformation = 0LL;
  v236 = 0LL;
  v237 = 0LL;
  v209 = 0LL;
  ObjectNameInformation = 0LL;
  v176 = 0;
  v179 = 0;
  Object = 0LL;
  v213 = 0LL;
  v191 = 0LL;
  memset_0(v224, 0, 0x68uLL);
  memset_0(&Src, 0, 0x70uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v170 = PreviousMode;
  CurrentThread = KeGetCurrentThread();
  v184 = CurrentThread;
  if ( !PreviousMode )
  {
    v12 = 1LL;
    v178 = 3LL;
    v13 = 0x7FFFFFFF0000LL;
    goto LABEL_3;
  }
  if ( ProcessInformationClass == ProcessPriorityClass || ProcessInformationClass == ProcessProtectionInformation )
    goto LABEL_84;
  if ( ProcessInformationClass == ProcessCommitReleaseInformation )
  {
    v28 = 7LL;
    v12 = 1LL;
    v178 = 3LL;
    goto LABEL_74;
  }
  if ( ((ProcessInformationClass - 70) & 0xFFFFFFFB) == 0 )
    goto LABEL_84;
  if ( ProcessInformationClass == ProcessSequenceNumber )
  {
    v28 = 7LL;
    v12 = 1LL;
    v178 = 3LL;
    goto LABEL_74;
  }
  if ( ProcessInformationClass != ProcessSecurityDomainInformation )
  {
    if ( ProcessInformationClass != ProcessEnableReadWriteVmLogging )
    {
      if ( ProcessInformationClass == ProcessGroupInformation )
      {
        v12 = 1LL;
        v28 = 1LL;
        v178 = 3LL;
      }
      else
      {
        v178 = 3LL;
        v27 = 3;
        if ( ProcessInformationClass == ProcessFindFirstThreadByTebValue )
          v27 = 7;
        v28 = v27;
        v12 = 1LL;
      }
      goto LABEL_74;
    }
LABEL_84:
    v28 = 0LL;
    v12 = 1LL;
    v178 = 3LL;
    goto LABEL_74;
  }
  v28 = 7LL;
  v12 = 1LL;
  v178 = 3LL;
LABEL_74:
  if ( (_DWORD)v5 )
  {
    if ( (v6 & v28) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = 0x7FFFFFFF0000LL;
  }
  else
  {
    v13 = 0x7FFFFFFF0000LL;
  }
  if ( ReturnLength )
  {
    v29 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      v29 = (__int64)ReturnLength;
    *(_DWORD *)v29 = *(_DWORD *)v29;
  }
LABEL_3:
  if ( ProcessInformationClass == ProcessMitigationPolicy )
  {
    v190 = 0;
    v172 = 0;
    v173 = 0;
    if ( (_DWORD)v5 != 8 )
      return -1073741820;
    v14 = *(_DWORD *)v6;
    v204 = *(_DWORD *)v6;
    if ( ProcessHandle == (HANDLE)-1LL )
    {
      Object = KeGetCurrentThread()->ApcState.Process;
      v14 = v204;
    }
    else
    {
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
    }
    switch ( v14 )
    {
      case 1:
        i = 0;
        *(_DWORD *)(v6 + 4) = 0;
        if ( (*((_DWORD *)Object + 468) & 0x40) == 0 )
          *(_DWORD *)(v6 + 4) |= 1u;
        if ( (*((_DWORD *)Object + 468) & 0x10) != 0 )
          *(_DWORD *)(v6 + 4) |= 2u;
        if ( (*((_DWORD *)Object + 468) & 0x20) != 0 )
          *(_DWORD *)(v6 + 4) |= 4u;
        if ( (*((_DWORD *)Object + 468) & 8) != 0 )
          *(_DWORD *)(v6 + 4) |= 8u;
        goto LABEL_17;
      case 2:
        i = 0;
        *(_DWORD *)(v6 + 4) = 0;
        v16 = *((_DWORD *)Object + 468);
        if ( (v16 & 0x100) != 0 )
        {
          v17 = *(_DWORD *)(v6 + 4) | 1;
        }
        else
        {
          if ( (v16 & 0x800) == 0 )
          {
LABEL_10:
            if ( (*((_DWORD *)Object + 468) & 0x200) != 0 )
              *(_DWORD *)(v6 + 4) |= 2u;
            if ( (*((_DWORD *)Object + 468) & 0x400) != 0 )
              *(_DWORD *)(v6 + 4) |= 4u;
            goto LABEL_17;
          }
          v17 = *(_DWORD *)(v6 + 4) | 8;
        }
        *(_DWORD *)(v6 + 4) = v17;
        goto LABEL_10;
      case 3:
        i = 0;
        v30 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        if ( v30 )
        {
          ExQueryHandleExceptionsPermanency(v30, &v172, &v173);
          *(_DWORD *)(v6 + 4) = 0;
          if ( v172 )
            *(_DWORD *)(v6 + 4) |= 1u;
          if ( v173 )
            *(_DWORD *)(v6 + 4) |= 2u;
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 61);
        }
        else
        {
          i = -1073741558;
        }
        goto LABEL_17;
      case 4:
        i = 0;
        *(_DWORD *)(v6 + 4) = 0;
        v31 = *((_DWORD *)Object + 468);
        if ( (v31 & 0x1000) != 0 )
        {
          v34 = *(_DWORD *)(v6 + 4) | 1;
        }
        else
        {
          if ( (v31 & 0x2000) == 0 )
            goto LABEL_139;
          v34 = *(_DWORD *)(v6 + 4) | 2;
        }
        *(_DWORD *)(v6 + 4) = v34;
LABEL_139:
        v32 = *((_DWORD *)Object + 502);
        if ( (v32 & 2) != 0 )
        {
          v33 = *(_DWORD *)(v6 + 4) | 4;
        }
        else
        {
          if ( (v32 & 4) == 0 )
            goto LABEL_17;
          v33 = *(_DWORD *)(v6 + 4) | 8;
        }
        *(_DWORD *)(v6 + 4) = v33;
LABEL_17:
        if ( ProcessHandle != (HANDLE)-1LL )
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return i;
      case 6:
        i = 0;
        *(_DWORD *)(v6 + 4) = 0;
        if ( (*((_DWORD *)Object + 468) & 0x80u) != 0 )
          *(_DWORD *)(v6 + 4) |= 1u;
        goto LABEL_17;
      case 7:
        i = 0;
        *(_DWORD *)(v6 + 4) = 0;
        if ( (*((_DWORD *)Object + 468) & 1) != 0 )
          *(_DWORD *)(v6 + 4) |= 1u;
        if ( (*((_DWORD *)Object + 468) & 2) != 0 )
          *(_DWORD *)(v6 + 4) |= 2u;
        if ( (*((_DWORD *)Object + 468) & 4) != 0 )
          *(_DWORD *)(v6 + 4) |= 4u;
        goto LABEL_17;
      case 8:
        i = 0;
        PsQueryProcessSignatureMitigationPolicy(Object, &v190);
        *(_DWORD *)(v6 + 4) = v190;
        goto LABEL_17;
      case 9:
        i = 0;
        *(_DWORD *)(v6 + 4) = 0;
        v39 = *((_DWORD *)Object + 468);
        if ( (v39 & 0x10000) != 0 )
        {
          v40 = *(_DWORD *)(v6 + 4) | 1;
        }
        else
        {
          if ( (v39 & 0x20000) == 0 )
            goto LABEL_17;
          v40 = *(_DWORD *)(v6 + 4) | 2;
        }
        *(_DWORD *)(v6 + 4) = v40;
        goto LABEL_17;
      case 10:
        i = 0;
        *(_DWORD *)(v6 + 4) = 0;
        v35 = *((_DWORD *)Object + 468);
        if ( (v35 & 0x80000) != 0 )
        {
          v38 = *(_DWORD *)(v6 + 4) | 1;
        }
        else
        {
          if ( (v35 & 0x100000) == 0 )
            goto LABEL_150;
          v38 = *(_DWORD *)(v6 + 4) | 8;
        }
        *(_DWORD *)(v6 + 4) = v38;
LABEL_150:
        v36 = *((_DWORD *)Object + 468);
        if ( (v36 & 0x200000) != 0 )
        {
          v37 = *(_DWORD *)(v6 + 4) | 2;
        }
        else
        {
          if ( (v36 & 0x400000) == 0 )
            goto LABEL_152;
          v37 = *(_DWORD *)(v6 + 4) | 0x10;
        }
        *(_DWORD *)(v6 + 4) = v37;
LABEL_152:
        if ( (*((_DWORD *)Object + 468) & 0x40000) != 0 )
          *(_DWORD *)(v6 + 4) |= 4u;
        goto LABEL_17;
      case 11:
        i = 0;
        *(_DWORD *)(v6 + 4) = 0;
        *(_DWORD *)(v6 + 4) ^= ((unsigned __int8)PsGetWin32KFilterSet() ^ (unsigned __int8)*(_DWORD *)(v6 + 4)) & 0xF;
        goto LABEL_17;
      case 12:
        i = 0;
        *(_DWORD *)(v6 + 4) = 0;
        if ( (*((_DWORD *)Object + 469) & 1) != 0 )
          *(_DWORD *)(v6 + 4) |= 1u;
        if ( (*((_DWORD *)Object + 469) & 4) != 0 )
          *(_DWORD *)(v6 + 4) |= 4u;
        if ( (*((_DWORD *)Object + 469) & 0x400) != 0 )
          *(_DWORD *)(v6 + 4) |= 0x10u;
        if ( (*((_DWORD *)Object + 469) & 0x10) != 0 )
          *(_DWORD *)(v6 + 4) |= 0x40u;
        if ( (*((_DWORD *)Object + 469) & 0x40) != 0 )
          *(_DWORD *)(v6 + 4) |= 0x100u;
        if ( (*((_DWORD *)Object + 469) & 0x100) != 0 )
          *(_DWORD *)(v6 + 4) |= 0x400u;
        if ( (*((_DWORD *)Object + 469) & 2) != 0 )
          *(_DWORD *)(v6 + 4) |= 2u;
        if ( (*((_DWORD *)Object + 469) & 8) != 0 )
          *(_DWORD *)(v6 + 4) |= 8u;
        if ( (*((_DWORD *)Object + 469) & 0x800) != 0 )
          *(_DWORD *)(v6 + 4) |= 0x20u;
        if ( (*((_DWORD *)Object + 469) & 0x20) != 0 )
          *(_DWORD *)(v6 + 4) |= 0x80u;
        if ( (*((_DWORD *)Object + 469) & 0x80u) != 0 )
          *(_DWORD *)(v6 + 4) |= 0x200u;
        if ( (*((_DWORD *)Object + 469) & 0x200) != 0 )
          *(_DWORD *)(v6 + 4) |= 0x800u;
        goto LABEL_17;
      case 13:
        i = 0;
        NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(Object);
        *(_DWORD *)(v6 + 4) = 0;
        v42 = NoChildProcessRestrictedPolicy - 1;
        if ( !v42 )
          goto LABEL_176;
        v43 = v42 - 1;
        if ( v43 )
        {
          if ( v43 == 1 )
            *(_DWORD *)(v6 + 4) |= 2u;
        }
        else
        {
          *(_DWORD *)(v6 + 4) |= 4u;
LABEL_176:
          *(_DWORD *)(v6 + 4) |= 1u;
        }
        goto LABEL_17;
      case 14:
        i = 0;
        *(_DWORD *)(v6 + 4) = 0;
        if ( (*((_DWORD *)Object + 468) & 0x40000000) != 0 )
          *(_DWORD *)(v6 + 4) |= 1u;
        if ( *((int *)Object + 468) < 0 )
          *(_DWORD *)(v6 + 4) |= 2u;
        if ( (*((_DWORD *)Object + 469) & 0x1000) != 0 )
          *(_DWORD *)(v6 + 4) |= 4u;
        if ( (*((_DWORD *)Object + 469) & 0x2000) != 0 )
          *(_DWORD *)(v6 + 4) |= 8u;
        if ( (*((_DWORD *)Object + 502) & 1) != 0 )
          *(_DWORD *)(v6 + 4) |= 0x10u;
        goto LABEL_17;
      case 15:
        i = 0;
        *(_DWORD *)(v6 + 4) = 0;
        if ( (*((_DWORD *)Object + 469) & 0x4000) != 0 )
          *(_DWORD *)(v6 + 4) |= 1u;
        if ( (*((_DWORD *)Object + 469) & 0x8000) != 0 )
          *(_DWORD *)(v6 + 4) |= 2u;
        if ( (*((_DWORD *)Object + 469) & 0x20000) != 0 )
          *(_DWORD *)(v6 + 4) |= 4u;
        if ( (*((_DWORD *)Object + 469) & 0x40000) != 0 )
          *(_DWORD *)(v6 + 4) |= 8u;
        if ( (*((_DWORD *)Object + 469) & 0x100000) != 0 )
          *(_DWORD *)(v6 + 4) |= 0x10u;
        if ( (*((_DWORD *)Object + 469) & 0x200000) != 0 )
          *(_DWORD *)(v6 + 4) |= 0x20u;
        if ( (*((_DWORD *)Object + 469) & 0x400000) != 0 )
          *(_DWORD *)(v6 + 4) |= 0x40u;
        if ( (*((_DWORD *)Object + 469) & 0x800000) != 0 )
          *(_DWORD *)(v6 + 4) |= 0x80u;
        if ( (*((_DWORD *)Object + 469) & 0x40000000) != 0 )
          *(_DWORD *)(v6 + 4) |= 0x100u;
        if ( *((int *)Object + 469) < 0 )
          *(_DWORD *)(v6 + 4) |= 0x200u;
        goto LABEL_17;
      case 16:
        i = 0;
        RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((__int64)Object);
        *(_DWORD *)(v6 + 4) = 0;
        v107 = RedirectionTrustPolicy - 1;
        if ( v107 )
        {
          if ( v107 != 1 )
            goto LABEL_17;
          v108 = *(_DWORD *)(v6 + 4) | 2;
        }
        else
        {
          v108 = *(_DWORD *)(v6 + 4) | 1;
        }
        *(_DWORD *)(v6 + 4) = v108;
        goto LABEL_17;
      default:
        i = -1073741637;
        goto LABEL_17;
    }
  }
  switch ( ProcessInformationClass )
  {
    case ProcessBasicInformation:
      v171 = 0;
      if ( (_DWORD)v5 == 64 )
      {
        ObjectNameInformation = (POBJECT_NAME_INFORMATION)v6;
        v18 = 64;
        FileObject = (PFILE_OBJECT)64;
        *(_QWORD *)v6 = 64LL;
        v6 += 8LL;
      }
      else
      {
        if ( (_DWORD)v5 != 48 )
          return -1073741820;
        ObjectNameInformation = 0LL;
        v18 = 48;
        FileObject = (PFILE_OBJECT)48;
      }
      v174 = v18;
      v187 = v6;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v19 = result;
      i = result;
      if ( result < 0 )
        return result;
      v20 = (_KPROCESS *)Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 341);
      *(_QWORD *)(v6 + 8) = v20[1].ProcessListEntry.Blink;
      if ( (v20->SecureState.SecureHandle & 1) != 0 )
        VslGetSecurePebAddress(v20);
      if ( v19 < 0 )
        goto LABEL_62;
      v21 = 0LL;
      if ( (*(_DWORD *)&v20->0 & 0x1000) != 0 && v20 != v184->Process )
        goto LABEL_33;
      *(_QWORD *)&v238.Count = 2097153LL;
      memset_0(&v238.8, 0, sizeof(v238.8));
      KeQueryAffinityProcess((__int64)v20, &v238, &v230, 0LL, &v176);
      if ( v20 == v184->Process )
      {
        if ( !(unsigned int)KeTestBitGroupMask((const signed __int64 *)&v230, v184->UserAffinityPrimaryGroup) )
          goto LABEL_33;
      }
      else
      {
        v22 = v176;
      }
      if ( v22 != 32 )
        v21 = v238.Bitmap[v22];
LABEL_33:
      v23 = ObjectNameInformation;
      if ( ObjectNameInformation )
      {
        PsQueryProcessAttributes(v20, &v171, 0LL);
        v23 = ObjectNameInformation;
      }
      *(_QWORD *)(v6 + 16) = v21;
      *(_DWORD *)(v6 + 24) = v20->BasePriority;
      *(_QWORD *)(v6 + 32) = v20[1].Header.WaitListHead.Flink;
      *(_QWORD *)(v6 + 40) = *(_QWORD *)&v20[1].StackCount.Value;
      if ( v23 )
      {
        LODWORD(v23[3].Name.Buffer) = 0;
        if ( (v20[3].ActiveGroupsMask.Masks[1] & 0x70000) != 0 )
          LODWORD(v23[3].Name.Buffer) = 1;
        else
          LODWORD(v178) = 2;
        if ( v20[1].ReadyTime )
        {
          v26 = WORD2(v20[3].PerProcessorCycleTimes);
          if ( v26 == 332 || v26 == 452 )
            LODWORD(v23[3].Name.Buffer) = v178;
        }
        if ( (v20[1].DirectoryTableBase & 0x4000000800000000LL) != 0 )
          LODWORD(v23[3].Name.Buffer) |= 4u;
        v24 = Object;
        v25 = (__int64)v23[3].Name.Buffer & 0xFFFFFFF7 | (*((_DWORD *)Object + 124) >> 4) & 8;
        LODWORD(v23[3].Name.Buffer) = v25;
        if ( v24[84] + ((v24[34] >> 3) & 1) )
          LODWORD(v23[3].Name.Buffer) = v25 | 0x10;
        if ( *((_QWORD *)v24 + 84) && *(_DWORD *)(*((_QWORD *)Object + 84) + 1072LL) )
          LODWORD(v23[3].Name.Buffer) |= 0x20u;
        if ( v171 )
          LODWORD(v23[3].Name.Buffer) |= 0x40u;
        v20 = (_KPROCESS *)Object;
        if ( (*((_BYTE *)Object + 368) & 1) != 0 )
          LODWORD(v23[3].Name.Buffer) |= 0x80u;
        if ( (v20->SecureState.SecureHandle & 2) != 0 )
          LODWORD(v23[3].Name.Buffer) |= 0x200u;
        if ( v20[3].Padding[5] )
          LODWORD(v23[3].Name.Buffer) |= 0x100u;
        v19 = i;
      }
      if ( ReturnLength )
        *ReturnLength = (unsigned int)FileObject;
LABEL_62:
      ObfDereferenceObjectWithTag(v20, 0x79517350u);
      return v19;
    case ProcessQuotaLimits:
      return PspQueryQuotaLimits((ULONG_PTR)ProcessHandle, (__int64)ReturnLength, PreviousMode);
    case ProcessIoCounters:
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        PsQueryStatisticsProcess(Object, v224);
        Src = v225;
        v196 = v226;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(__m256i *)v6 = Src;
        *(_OWORD *)(v6 + 32) = v196;
        if ( ReturnLength )
          *ReturnLength = 48;
        return DeviceMapInformation;
      }
      return result;
    case ProcessVmCounters:
      if ( (_DWORD)v5 != 112 && (_DWORD)v5 != 88 && (_DWORD)v5 != 96 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        *(_OWORD *)Src.m256i_i8 = *((_OWORD *)Object + 34);
        Src.m256i_i32[4] = *((_DWORD *)Object + 257);
        v51 = Object;
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v234);
        i = MmQueryWorkingSetInformation(&Src.m256i_i64[3], &v196, v203, &v209, &v208, &v206);
        KiUnstackDetachProcess((__int64)v234, 0, v52, v53);
        v197 = v51[65];
        *((_QWORD *)&v196 + 1) = *((_QWORD *)Object + 67);
        v199 = *((_QWORD *)Object + 64);
        v198 = *((_QWORD *)Object + 66);
        v200 = *((_QWORD *)Object + 123) << 12;
        v201 = *((_QWORD *)Object + 124) << 12;
        v203[1] = *((_QWORD *)Object + 213) << 12;
        v202 = v200;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        result = i;
        if ( i >= 0 )
        {
          memmove((void *)v6, &Src, v5);
          if ( ReturnLength )
            *ReturnLength = v5;
          return 0;
        }
      }
      return result;
    case ProcessTimes:
      if ( (_DWORD)v5 != 32 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        v44 = Object;
        v46 = PsQueryRuntimeProcess(Object, &v191);
        v47 = KeMaximumIncrement;
        *(_QWORD *)(v6 + 16) = KeMaximumIncrement * v46;
        *(_QWORD *)(v6 + 24) = v47 * v191;
        *(_QWORD *)v6 = v44[63];
        *(_QWORD *)(v6 + 8) = v44[184];
        if ( ReturnLength )
          *ReturnLength = 32;
        goto LABEL_192;
      }
      return result;
    case ProcessDebugPort:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v101 = -(__int64)(*((_QWORD *)Object + 97) != 0LL);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)v6 = v101;
        if ( ReturnLength )
          *ReturnLength = 8;
        return 0;
      }
      return result;
    case ProcessLdtInformation:
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1040,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        ProcessTelemetryCoverage = xKdEnumerateDebuggingDevices();
        goto LABEL_333;
      }
      return result;
    case ProcessDefaultHardErrorMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v74 = *((_DWORD *)Object + 226);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v74;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
      return result;
    case ProcessPooledUsageAndLimits:
      return PspQueryPooledQuotaLimits((ULONG_PTR)ProcessHandle, PreviousMode);
    case ProcessWorkingSetWatch:
    case ProcessWorkingSetWatchEx:
      return PspQueryWorkingSetWatch((ULONG_PTR)ProcessHandle, (__int64)ReturnLength, PreviousMode);
    case ProcessPriorityClass:
      if ( (_DWORD)v5 != 2 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        HIBYTE(v179) = *((_BYTE *)Object + 839);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_WORD *)v6 = v179;
        if ( ReturnLength )
          *ReturnLength = 2;
        return 0;
      }
      return result;
    case ProcessWx86Information:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               (ULONG_PTR)ProcessHandle,
                               1024,
                               (__int64)PsProcessType,
                               PreviousMode,
                               0x79517350u,
                               &Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation >= 0 )
      {
        v123 = *((_BYTE *)Object + 503) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v123;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return DeviceMapInformation;
    case ProcessHandleCount:
      LODWORD(P) = 0;
      if ( (((_DWORD)v5 - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessHandleCount = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)Object, &P);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = ProcessHandleCount;
      if ( (_DWORD)v5 != 4 )
        *(_DWORD *)(v6 + 4) = (_DWORD)P;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessAffinityMask:
      if ( (((_DWORD)v5 - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      SectionInformation = result;
      if ( result < 0 )
        return result;
      v65 = Object;
      if ( (*((_DWORD *)Object + 34) & 0x1000) != 0 )
      {
        SectionInformation = -1073741811;
      }
      else
      {
        *(_QWORD *)&v238.Count = 2097153LL;
        memset_0(&v238.8, 0, sizeof(v238.8));
        KeQueryAffinityProcess((__int64)v65, &v238, &v230, 0LL, &v176);
        v152 = v238.Bitmap[v176];
        if ( (_DWORD)v5 == 16 )
          *(_WORD *)(v6 + 8) = v176;
        *(_QWORD *)v6 = v152;
        if ( ReturnLength )
          *ReturnLength = v5;
      }
      goto LABEL_299;
    case ProcessPriorityBoost:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               (ULONG_PTR)ProcessHandle,
                               4096,
                               (__int64)PsProcessType,
                               PreviousMode,
                               0x79517350u,
                               &Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation >= 0 )
      {
        v137 = (*((_DWORD *)Object + 34) >> 1) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v137;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return DeviceMapInformation;
    case ProcessDeviceMap:
      if ( (unsigned int)v5 < 0x24 )
        return -1073741820;
      if ( (_DWORD)v5 == 48 )
      {
        v183 = *(_DWORD *)(v6 + 40);
        v57 = v183;
        if ( (v183 & 0xFFFFFFFE) != 0 )
          return -1073741811;
      }
      else
      {
        if ( (_DWORD)v5 != 36 )
          return -1073741820;
        v57 = 0;
      }
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = ObQueryDeviceMapInformation((_KPROCESS *)Object, v6, v57);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && ReturnLength )
        *ReturnLength = v5;
      return DeviceMapInformation;
    case ProcessSessionInformation:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      SessionId = PsGetSessionId((__int64)Object);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = SessionId;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessWow64Information:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v76 = (void **)*((_QWORD *)Object + 98);
      if ( v76 )
        Ptr = *v76;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = Ptr;
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessImageFileName:
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (unsigned int)v5 < 0x10 )
      {
        v6 = (unsigned __int64)&v222;
        v49 = 0;
      }
      else
      {
        Ptr = (void *)(v6 + 16);
        v49 = v5 - 16;
      }
      v174 = v49;
      v50 = PsQueryFullProcessImageName(Object, v6, Ptr, &v174);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( v50 >= 0 && !Ptr )
        v50 = -1073741820;
      if ( ReturnLength && ((int)(v50 + 0x80000000) < 0 || v50 == -1073741820) )
        *ReturnLength = v174 + 16;
      return v50;
    case ProcessLUIDDeviceMapsEnabled:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      *(_DWORD *)v6 = 1;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessBreakOnTermination:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v121 = (*((_DWORD *)Object + 125) >> 13) & 1;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v121;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessDebugObjectHandle:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      SectionInformation = DbgkOpenProcessDebugPort(Object, PreviousMode, Handle);
      v136 = Handle[0];
      if ( SectionInformation < 0 )
        v136 = 0LL;
      Handle[0] = v136;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v136;
      if ( ReturnLength )
        *ReturnLength = 8;
      return SectionInformation;
    case ProcessDebugFlags:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      LODWORD(Ptr) = result;
      if ( result < 0 )
        return result;
      v97 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 125) & 2) == 0;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_423;
    case ProcessHandleTracing:
      LODWORD(P) = 0;
      if ( (unsigned int)v5 < 0x10 )
        return -1073741820;
      if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, &P) )
        return -1073741790;
      v191 = (unsigned int)(v5 - 16) / 0xA0uLL;
      ObjectNameInformation = (POBJECT_NAME_INFORMATION)(v6 + 16);
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      SectionInformation = result;
      if ( result < 0 )
        return result;
      v65 = Object;
      v85 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      v86 = v85;
      v209 = v85;
      if ( !v85 )
        goto LABEL_536;
      v87 = ExReferenceHandleDebugInfo(v85);
      v88 = v87;
      v208 = v87;
      if ( v87 )
      {
        v138 = 0;
        v170 = 0;
        if ( (*(_DWORD *)(v87 + 8) & 3) != 0 )
        {
          ExAcquireFastMutex((PKGUARDED_MUTEX)(v87 + 16));
          v138 = 1;
          v170 = 1;
        }
        *(_DWORD *)(v6 + 8) = 0;
        v139 = (unsigned int)(*(_DWORD *)(v88 + 72) % *(_DWORD *)(v88 + 4));
        v188 = v139;
        v140 = 0;
        v210 = 0;
        while ( v140 < *(_DWORD *)(v88 + 4) )
        {
          v141 = (_OWORD *)(v88 + 160 * v139);
          v227 = v141[5];
          v228 = v141[6];
          v229[0] = v141[7];
          v229[1] = v141[8];
          v229[2] = v141[9];
          v229[3] = v141[10];
          v229[4] = v141[11];
          v229[5] = v141[12];
          v229[6] = v141[13];
          v229[7] = v141[14];
          v142 = v228;
          if ( *(_QWORD *)v6 == (_QWORD)v228 || !*(_QWORD *)v6 )
          {
            v143 = DWORD2(v228);
            if ( DWORD2(v228) )
            {
              ++*(_DWORD *)(v6 + 8);
              if ( (_DWORD)v191 )
              {
                v191 = (unsigned int)(v191 - 1);
                v216 = v191;
                v144 = ObjectNameInformation;
                *(_QWORD *)&ObjectNameInformation->Name.Length = v142;
                *(_OWORD *)&v144->Name.Buffer = v227;
                LODWORD(v144[1].Name.Buffer) = v143;
                v145 = 0;
                v207 = 0;
                while ( v145 < 0x10 )
                {
                  if ( (_DWORD)P )
                    v146 = 0LL;
                  else
                    v146 = *((_QWORD *)v229 + v145);
                  *((_QWORD *)&v144[2].Name.Length + v145++) = v146;
                  v207 = v145;
                }
                ObjectNameInformation = v144 + 10;
                v220 = v144 + 10;
              }
              else
              {
                SectionInformation = -1073741820;
                i = -1073741820;
              }
            }
          }
          if ( !(_DWORD)v139 )
            LODWORD(v139) = *(_DWORD *)(v88 + 4);
          v139 = (unsigned int)(v139 - 1);
          v188 = v139;
          v210 = ++v140;
        }
        if ( ReturnLength )
          *ReturnLength = (_DWORD)ObjectNameInformation - v6;
        if ( v138 )
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v88 + 16));
        ExDereferenceHandleDebugInfo(v86, v88);
        v65 = Object;
      }
      else
      {
        SectionInformation = -1073741811;
      }
      goto LABEL_298;
    case ProcessIoPriority:
    case ProcessEffectiveIoPriority:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      LODWORD(Ptr) = result;
      i = result;
      if ( result < 0 )
        return result;
      v112 = (*((_DWORD *)Object + 125) >> 27) & 7;
      if ( ProcessInformationClass == ProcessIoPriority )
      {
        *(_DWORD *)v6 = v112;
      }
      else
      {
        v113 = *((_QWORD *)Object + 84);
        if ( v113 )
        {
          v114 = *(_DWORD *)(v113 + 1084);
          if ( v112 >= v114 )
            v112 = v114;
        }
        *(_DWORD *)v6 = v112;
        LODWORD(Ptr) = i;
      }
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_334;
    case ProcessExecuteFlags:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   1024,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        Process = Object;
      }
      LODWORD(Ptr) = KeGetExecuteOptions(Process, &v189, v13, v12);
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v78, 0x79517350u);
      if ( (int)Ptr >= 0 )
      {
        *(_DWORD *)v6 = v189;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return (int)Ptr;
    case ProcessCookie:
      v187 = 0LL;
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        p_LockNV = &KeGetCurrentThread()->ApcState.Process->Header.LockNV;
        Object = p_LockNV;
      }
      else
      {
        v215 = 0LL;
        result = ObReferenceObjectByHandle(ProcessHandle, 0x20u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v215, 0LL);
        p_LockNV = v215;
        Object = v215;
        if ( result < 0 )
          return result;
      }
      for ( i = 0; ; LODWORD(Ptr) = i )
      {
        v81 = p_LockNV[174];
        if ( v81 )
          break;
        KeQuerySystemTimePrecise(&v187);
        CurrentPrcb = KeGetCurrentPrcb();
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        v129 = ExGenRandom(1, v126, v127, v128);
        v130 = __rdtsc();
        _InterlockedCompareExchange(
          (volatile signed __int32 *)Object + 174,
          v187 ^ HIDWORD(v187) ^ v130 ^ v129 ^ CurrentPrcb->MmPageFaultCount ^ LowPart ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
          0);
        p_LockNV = Object;
      }
      *(_DWORD *)v6 = v81;
      if ( ReturnLength )
        *ReturnLength = 4;
      if ( ProcessHandle != (HANDLE)-1LL )
      {
        ObfDereferenceObject(p_LockNV);
        return (int)Ptr;
      }
      return (int)Ptr;
    case ProcessImageInformation:
      if ( (_DWORD)v5 != 64 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v174 = result;
      if ( result < 0 )
        return result;
      v58 = (struct _EX_RUNDOWN_REF *)Object;
      if ( Object == v184->Process )
      {
        Ptr = (void *)*((_QWORD *)Object + 85);
        if ( !Ptr )
          result = -1073741558;
        v174 = result;
        v59 = 0;
        SectionInformation = result;
      }
      else
      {
        v59 = 1;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
        {
          Ptr = v58[85].Ptr;
          if ( Ptr )
          {
            PsReferenceSiloContext(v58[85].Ptr);
            SectionInformation = v174;
          }
          else
          {
            SectionInformation = -1073741811;
          }
          ExReleaseRundownProtection_0(v58 + 61);
        }
        else
        {
          SectionInformation = -1073741558;
        }
      }
      ObfDereferenceObjectWithTag(v58, 0x79517350u);
      if ( SectionInformation >= 0 )
      {
        SectionInformation = MmGetSectionInformation(Ptr, 1LL, v6);
        if ( v59 )
          ObfDereferenceObject(Ptr);
        if ( SectionInformation >= 0 && ReturnLength )
          *ReturnLength = 64;
      }
      return SectionInformation;
    case ProcessCycleTime:
      if ( (_DWORD)v5 != 16 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v44 = Object;
      *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess(Object, &v213);
      *(_QWORD *)(v6 + 8) = v213;
      if ( ReturnLength )
        *ReturnLength = 16;
      goto LABEL_192;
    case ProcessPagePriority:
    case ProcessEffectivePagePriority:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      LODWORD(Ptr) = result;
      i = result;
      if ( result < 0 )
        return result;
      v109 = (*((_DWORD *)Object + 124) >> 12) & 7;
      if ( ProcessInformationClass == ProcessPagePriority )
      {
        *(_DWORD *)v6 = v109;
      }
      else
      {
        v110 = *((_QWORD *)Object + 84);
        if ( v110 )
        {
          v111 = *(_DWORD *)(v110 + 1092);
          if ( v109 >= v111 )
            v109 = v111;
        }
        *(_DWORD *)v6 = v109;
        LODWORD(Ptr) = i;
      }
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_334;
    case ProcessImageFileNameWin32:
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v61 = (struct _EX_RUNDOWN_REF *)Object;
      v62 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 102);
      FileObject = v62;
      if ( v62 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
        {
          PsReferenceSiloContext(v62);
          ExReleaseRundownProtection_0(v61 + 61);
        }
        else
        {
          DeviceMapInformation = -1073741558;
        }
      }
      else
      {
        DeviceMapInformation = PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)Object, (__int64 *)&FileObject);
        v62 = FileObject;
      }
      ObfDereferenceObjectWithTag(v61, 0x79517350u);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      DeviceMapInformation = IoQueryFileDosDeviceName(v62, &ObjectNameInformation);
      ObfDereferenceObject(v62);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v63 = ObjectNameInformation;
      v64 = ObjectNameInformation->Name.MaximumLength + 16;
      if ( v64 > (unsigned int)v5 )
      {
        DeviceMapInformation = -1073741820;
        i = -1073741820;
      }
      else
      {
        *(_WORD *)v6 = ObjectNameInformation->Name.Length;
        *(_WORD *)(v6 + 2) = v63->Name.MaximumLength;
        if ( v63->Name.MaximumLength )
        {
          Ptr = (void *)(v6 + 16);
          memmove((void *)(v6 + 16), v63->Name.Buffer, v63->Name.MaximumLength);
        }
        *(_QWORD *)(v6 + 8) = Ptr;
      }
      if ( ReturnLength )
        *ReturnLength = v64;
      ExFreePoolWithTag(v63, 0);
      return DeviceMapInformation;
    case ProcessImageFileMapping:
      P = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v147 = *(_QWORD *)v6;
      v221 = *(_QWORD *)v6;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               v147,
                               1048608,
                               (__int64)IoFileObjectType,
                               PreviousMode,
                               0x79517350u,
                               &FileObject,
                               0LL,
                               0LL);
      v48 = Object;
      if ( DeviceMapInformation < 0 )
        goto LABEL_193;
      v50 = PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)Object, (__int64 *)&P);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( v50 < 0 )
      {
        ObfDereferenceObject(FileObject);
        return v50;
      }
      else
      {
        SectionObjectPointer = FileObject->SectionObjectPointer;
        v149 = P;
        v150 = (SECTION_OBJECT_POINTERS *)*((_QWORD *)P + 5);
        v151 = 0;
        if ( SectionObjectPointer != v150 )
          v151 = -1073741823;
        ObfDereferenceObject(FileObject);
        ObfDereferenceObject(v149);
        result = v151;
        if ( SectionObjectPointer == v150 && ReturnLength )
          *ReturnLength = 0;
      }
      return result;
    case ProcessAffinityUpdateMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v183 = *((_DWORD *)Object + 124);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( (v183 & 0x80000) != 0 )
        LODWORD(Ptr) = 1;
      if ( (v183 & 0x40000) != 0 )
        LODWORD(Ptr) = (unsigned int)Ptr | 2;
      *(_DWORD *)v6 = (_DWORD)Ptr;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessMemoryAllocationMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v183 = *((_DWORD *)Object + 125);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( (v183 & 0x200000) != 0 )
        LODWORD(Ptr) = 1;
      *(_DWORD *)v6 = (_DWORD)Ptr;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessGroupInformation:
      if ( !ReturnLength || (v5 & 1) != 0 )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v153 = Object;
        v230 = *KeQueryGroupMaskProcess(&v192, (__int64)Object);
        do
        {
          FirstSetRightGroupMask = KeFindFirstSetRightGroupMask((__int64 *)&v230);
          v205 = FirstSetRightGroupMask;
          v155 = (_DWORD)Ptr + 2;
          v174 = (_DWORD)Ptr + 2;
          if ( (int)Ptr + 2 <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = FirstSetRightGroupMask;
            v6 += 2LL;
            v223 = v6;
          }
          KeClearBitGroupMask((signed __int64 *)&v230, FirstSetRightGroupMask);
          LODWORD(Ptr) = (_DWORD)Ptr + 2;
        }
        while ( !(unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)&v230) );
        *ReturnLength = v155;
        i = (unsigned int)v5 < v155 ? 0xC0000023 : 0;
        ObfDereferenceObjectWithTag(v153, 0x79517350u);
        return (unsigned int)v5 < v155 ? 0xC0000023 : 0;
      }
      return result;
    case ProcessConsoleHostProcess:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v122 = *((_QWORD *)Object + 91);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v122;
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessWindowInformation:
      v185 = 0;
      v186 = 0LL;
      v217[0] = 0LL;
      P = 0LL;
      if ( PreviousMode != 1 )
        return -1073741823;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 1,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      i = result;
      if ( result >= 0 )
      {
        v65 = Object;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
        {
          KiStackAttachProcess((_KPROCESS *)v65, 0, (__int64)v234);
          v68 = 0LL;
          v69 = (__int64 *)*((_QWORD *)v65 + 98);
          if ( v69 )
            v68 = *v69;
          if ( v68 )
          {
            v182 = (PVOID)*(unsigned int *)(v68 + 16);
            v185 = *((_DWORD *)v182 + 26);
            RtlCopyVolatileMemory(&P, (char *)v182 + 112, 8uLL);
            v72 = (unsigned __int16)P;
            v186.m128i_i32[0] = (int)P;
            v186.m128i_i64[1] = HIDWORD(P);
          }
          else
          {
            v182 = *(PVOID *)(*((_QWORD *)v65 + 92) + 32LL);
            v70 = (__int64)v182 + 164;
            if ( (unsigned __int64)v182 + 164 >= 0x7FFFFFFF0000LL )
              v70 = 0x7FFFFFFF0000LL;
            v185 = *(_DWORD *)v70;
            v192 = 0LL;
            v71 = (__int64)v182 + 176;
            if ( (unsigned __int64)v182 + 176 >= 0x7FFFFFFF0000LL )
              v71 = 0x7FFFFFFF0000LL;
            v192.m128i_i32[0] = *(_DWORD *)v71;
            v192.m128i_i64[1] = *(_QWORD *)(v71 + 8);
            v186 = v192;
            v72 = _mm_cvtsi128_si32(v192);
          }
          SectionInformation = i;
          KiUnstackDetachProcess((__int64)v234, 0, v66, v67);
          if ( SectionInformation < 0 )
            goto LABEL_297;
          v73 = v72 + 6;
          if ( ReturnLength )
            *ReturnLength = v73;
          if ( (unsigned int)v5 < v73 )
          {
            SectionInformation = -1073741820;
            i = -1073741820;
          }
          else
          {
            *(_DWORD *)v6 = v185;
            *(_WORD *)(v6 + 4) = v72;
          }
          if ( SectionInformation >= 0 && v72 )
          {
            v65 = Object;
            SectionInformation = MiCopyVirtualMemory(
                                   (__int64)Object,
                                   (char *)v186.m128i_i64[1],
                                   (__int64)KeGetCurrentThread()->ApcState.Process,
                                   (void *)(v6 + 6),
                                   v186.m128i_u16[0],
                                   1,
                                   v217,
                                   0);
          }
          else
          {
LABEL_297:
            v65 = Object;
          }
LABEL_298:
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v65 + 61);
        }
        else
        {
LABEL_536:
          SectionInformation = -1073741558;
        }
LABEL_299:
        ObfDereferenceObjectWithTag(v65, 0x79517350u);
        return SectionInformation;
      }
      return result;
    case ProcessHandleInformation:
      if ( (unsigned int)v5 >= 0x10 )
      {
        v182 = 0LL;
        result = ObReferenceObjectByHandle(ProcessHandle, 0x400u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v182, 0LL);
        if ( result >= 0 )
        {
          v89 = (__int64)v184;
          --v184->KernelApcDisable;
          v90 = (struct _EX_RUNDOWN_REF *)v182;
          v91 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v182);
          if ( v91 )
          {
            ProcessHandleInformation = ExQueryProcessHandleInformation(v91, v6, (unsigned int)v5, ReturnLength);
            ExReleaseRundownProtection_0(v90 + 61);
          }
          else
          {
            ProcessHandleInformation = -1073741558;
          }
          KiLeaveCriticalRegionUnsafe(v89);
          ObfDereferenceObject(v90);
          return ProcessHandleInformation;
        }
        return result;
      }
      if ( ReturnLength )
        *ReturnLength = 16;
      return -1073741820;
    case ProcessHandleCheckingMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      SectionInformation = result;
      i = result;
      if ( result < 0 )
        return result;
      v65 = Object;
      v159 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v159 )
        goto LABEL_536;
      LOBYTE(Ptr) = (*(_BYTE *)(v159 + 44) & 2) != 0;
      *(_DWORD *)v6 = (_DWORD)Ptr;
      goto LABEL_298;
    case ProcessKeepAliveCount:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      LODWORD(Ptr) = result;
      if ( result < 0 )
        return result;
      v97 = Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 459) & 0x7FFFFFFF;
      *(_DWORD *)(v6 + 4) = v97[467] & 0x7FFFFFFF;
      goto LABEL_423;
    case ProcessHandleTable:
      v182 = 0LL;
      P = 0LL;
      if ( (unsigned int)v5 < 4 )
        return -1073741820;
      result = ExLockUserBuffer(v6, v5, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v182, (struct _MDL **)&P);
      if ( result >= 0 )
      {
        v94 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)ProcessHandle,
                1088,
                (__int64)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL,
                0LL);
        if ( v94 < 0 )
        {
          ExUnlockUserBuffer((struct _MDL *)P);
          return v94;
        }
        else
        {
          v186 = 0LL;
          v95 = (struct _EX_RUNDOWN_REF *)Object;
          v96 = (unsigned int *)ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
          if ( v96 )
          {
            v186.m128i_i64[0] = (__int64)v182;
            v186.m128i_i64[1] = (unsigned int)v5 >> 2;
            ExEnumHandleTable(
              v96,
              (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PspHandleTableWalker,
              (__int64)&v186,
              0LL);
            ExReleaseRundownProtection_0(v95 + 61);
          }
          else
          {
            LODWORD(Ptr) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v95, 0x79517350u);
          if ( ReturnLength )
            *ReturnLength = 4 * v186.m128i_i32[3];
          ExUnlockUserBuffer((struct _MDL *)P);
          return (int)Ptr;
        }
      }
      return result;
    case ProcessCheckStackExtentsMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      LODWORD(Ptr) = result;
      if ( result < 0 )
        return result;
      v97 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 34) >> 5) & 1;
      goto LABEL_423;
    case ProcessCommandLineInformation:
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               (ULONG_PTR)ProcessHandle,
                               4096,
                               (__int64)PsProcessType,
                               PreviousMode,
                               0x79517350u,
                               &Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v44 = Object;
      ProcessCommandLine = PsQueryProcessCommandLine((PRKPROCESS)Object, v6, v5, PreviousMode, ReturnLength);
      goto LABEL_361;
    case ProcessProtectionInformation:
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               (ULONG_PTR)ProcessHandle,
                               4096,
                               (__int64)PsProcessType,
                               PreviousMode,
                               0x79517350u,
                               &Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      if ( !(_DWORD)v5 )
      {
LABEL_516:
        DeviceMapInformation = -1073741820;
        goto LABEL_358;
      }
      v48 = Object;
      *(_BYTE *)v6 = *((_BYTE *)Object + 1530);
      if ( ReturnLength )
        *ReturnLength = 1;
      DeviceMapInformation = 0;
      goto LABEL_210;
    case ProcessTelemetryIdInformation:
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               (ULONG_PTR)ProcessHandle,
                               4096,
                               (__int64)PsProcessType,
                               PreviousMode,
                               0x79517350u,
                               &Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v44 = Object;
      ProcessCommandLine = EtwQueryProcessTelemetryInfo(
                             (__int64)Object,
                             (char *)v6,
                             (unsigned int)v5,
                             PreviousMode,
                             ReturnLength);
LABEL_361:
      DeviceMapInformation = ProcessCommandLine;
      if ( !v44 )
        return DeviceMapInformation;
      goto LABEL_192;
    case ProcessCommitReleaseInformation:
      LODWORD(P) = 0;
      if ( (_DWORD)v5 != 32 )
        goto LABEL_516;
      v192 = *(__m128i *)v6;
      v193 = *(_OWORD *)(v6 + 16);
      if ( v192.m128i_i32[0] == 3 )
      {
        if ( v192.m128i_i32[1] >= 8u || v192.m128i_i64[1] )
        {
          DeviceMapInformation = -1073741811;
          v48 = Object;
        }
        else
        {
          DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                                   (ULONG_PTR)ProcessHandle,
                                   4096,
                                   (__int64)PsProcessType,
                                   PreviousMode,
                                   0x79517350u,
                                   &Object,
                                   0LL,
                                   0LL);
          if ( DeviceMapInformation >= 0 )
          {
            MmQueryCommitReleaseState((__int64)Object, &P, &v192.m128i_i64[1], &v193, (_QWORD *)&v193 + 1);
            v192.m128i_i32[1] = (unsigned __int8)P & 1 | v192.m128i_i32[1] & 0xFFFFFFFE;
            v192.m128i_i64[1] <<= 12;
            *(_QWORD *)&v193 = (_QWORD)v193 << 12;
            *((_QWORD *)&v193 + 1) <<= 12;
            *(__m128i *)v6 = v192;
            *(_OWORD *)(v6 + 16) = v193;
            DeviceMapInformation = 0;
          }
LABEL_358:
          v48 = Object;
        }
      }
      else
      {
        DeviceMapInformation = -1073741735;
        v48 = Object;
      }
LABEL_210:
      if ( v48 )
        goto LABEL_193;
      return DeviceMapInformation;
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (v5 & 7) != 0 || (unsigned int)v5 > 0x100 )
        return -1073741820;
      SectionInformation = ObpReferenceObjectByHandleWithTag(
                             (ULONG_PTR)ProcessHandle,
                             4096,
                             (__int64)PsProcessType,
                             PreviousMode,
                             0x79517350u,
                             &Object,
                             0LL,
                             0LL);
      i = SectionInformation;
      if ( SectionInformation >= 0 )
      {
        LOBYTE(Ptr) = ProcessInformationClass == ProcessAllowedCpuSetsInformation;
        LODWORD(Ptr) = 8 * KeQueryCpuSetsProcess((__int64)Object, (__int64)v245, 32LL, (unsigned int)Ptr);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v212 = (int)Ptr;
        if ( ReturnLength )
          *ReturnLength = (unsigned int)Ptr;
        if ( (unsigned int)Ptr >= (unsigned int)v5 )
          LODWORD(Ptr) = v5;
        v212 = (int)Ptr;
        memmove((void *)v6, v245, (unsigned int)Ptr);
      }
      return SectionInformation;
    case ProcessJobMemoryInformation:
      if ( (_DWORD)v5 != 40 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      if ( *((_QWORD *)Object + 84) )
      {
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v234);
        ZwQueryInformationJobObject(0LL, JobObjectMemoryUsageInformation, &JobObjectInformation, 0x28u, 0LL);
        ZwQueryInformationJobObject(0LL, JobObjectExtendedLimitInformation, v239, 0x98u, 0LL);
        KiUnstackDetachProcess((__int64)v234, 0, v102, v103);
        *(_OWORD *)&Src.m256i_u64[1] = JobObjectInformation;
        Src.m256i_i64[0] = v236;
        v104 = v196;
        if ( (v240 & 0x200000) != 0 )
          v104 = v242;
        *(_QWORD *)&v196 = v104;
        v105 = Src.m256i_i64[3];
        if ( (v240 & 0x200) != 0 )
          v105 = v241;
        Src.m256i_i64[3] = v105;
        *(__m256i *)v6 = Src;
        *(_QWORD *)(v6 + 32) = v196;
        if ( ReturnLength )
          *ReturnLength = 40;
      }
      else
      {
        LODWORD(Ptr) = -1073741394;
      }
      goto LABEL_334;
    case ProcessInPrivate:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      LODWORD(Ptr) = result;
      if ( result < 0 )
        return result;
      v97 = Object;
      *(_BYTE *)v6 = *((int *)Object + 124) < 0;
      goto LABEL_423;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      SectionInformation = result;
      i = result;
      if ( result < 0 )
        return result;
      v65 = Object;
      v160 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v160 )
        goto LABEL_536;
      LOBYTE(Ptr) = (*(_BYTE *)(v160 + 44) & 0x10) != 0;
      *(_DWORD *)v6 = (_DWORD)Ptr;
      goto LABEL_298;
    case ProcessIumChallengeResponse:
      return PsIumGetOnDemandDebugChallenge(ProcessHandle, v6, (unsigned int)v5, ReturnLength);
    case ProcessChildProcessInformation:
      if ( (_DWORD)v5 != 3 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v98 = KeGetCurrentThread()->ApcState.Process;
        Object = v98;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   1024,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v98 = Object;
      }
      v99 = PspGetNoChildProcessRestrictedPolicy(v98);
      *(_WORD *)v6 = 0;
      *(_BYTE *)(v6 + 2) = 0;
      if ( v99 == 2 )
      {
        *(_BYTE *)(v6 + 1) = 1;
        goto LABEL_434;
      }
      v100 = v99 - 1;
      if ( !v100 )
      {
LABEL_434:
        *(_BYTE *)v6 = 1;
        goto LABEL_431;
      }
      if ( v100 == 2 )
        *(_BYTE *)(v6 + 2) = 1;
LABEL_431:
      if ( ReturnLength )
        *ReturnLength = 3;
      if ( ProcessHandle != (HANDLE)-1LL )
      {
LABEL_436:
        ObfDereferenceObjectWithTag(v98, 0x79517350u);
        return (int)Ptr;
      }
      return (int)Ptr;
    case ProcessHighGraphicsPriorityInformation:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      LODWORD(Ptr) = result;
      if ( result < 0 )
        return result;
      v97 = Object;
      *(_BYTE *)v6 = (*((_DWORD *)Object + 383) & 0x200) != 0;
      goto LABEL_423;
    case ProcessSubsystemInformation:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v48 = Object;
      if ( *((_QWORD *)Object + 200) )
        LODWORD(Ptr) = qword_140F05A70;
      *(_DWORD *)v6 = (_DWORD)Ptr;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_193;
    case ProcessEnergyValues:
      memset_0(v244, 0, 0x1B8uLL);
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      LODWORD(Ptr) = result;
      i = result;
      if ( result < 0 )
        return result;
      v98 = Object;
      PsQueryProcessEnergyValues(Object, v244);
      v156 = 432LL;
      if ( (unsigned int)v5 <= 0x1B0 )
        v156 = (unsigned int)v5;
      memmove((void *)v6, v244, v156);
      if ( ReturnLength )
        *ReturnLength = 432;
      goto LABEL_436;
    case ProcessPowerThrottlingState:
      v231 = 0LL;
      v232 = 0;
      if ( (_DWORD)v5 != 12 )
        return -1073741820;
      if ( !ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost) )
        return -1073741822;
      v54 = ObpReferenceObjectByHandleWithTag(
              (ULONG_PTR)ProcessHandle,
              4096,
              (__int64)PsProcessType,
              PreviousMode,
              0x79517350u,
              &Object,
              0LL,
              0LL);
      if ( v54 < 0 )
      {
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        return v54;
      }
      else
      {
        v55 = Object;
        v56 = guard_dispatch_icall_no_overrides(Object, &v231);
        i = v56;
        if ( v56 >= 0 )
        {
          *(_QWORD *)v6 = v231;
          *(_DWORD *)(v6 + 8) = v232;
          if ( ReturnLength )
            *ReturnLength = 12;
          v56 = 0;
          i = 0;
        }
        ObfDereferenceObjectWithTag(v55, 0x79517350u);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        return v56;
      }
    case ProcessWin32kSyscallFilterInformation:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v97 = &KeGetCurrentThread()->ApcState.Process->Header.LockNV;
        Object = v97;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   1024,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v97 = Object;
        LODWORD(v12) = 1;
      }
      *(_DWORD *)v6 = 0;
      v115 = 0;
      if ( (v97[468] & 0x4000) != 0 )
      {
        *(_DWORD *)v6 = v12;
        v115 = v12;
      }
      if ( (v97[468] & 0x8000) != 0 )
        *(_DWORD *)v6 = v115 | 2;
      *(_DWORD *)(v6 + 4) = v97[442];
      if ( ReturnLength )
        *ReturnLength = 8;
      if ( ProcessHandle != (HANDLE)-1LL )
      {
LABEL_423:
        ObfDereferenceObjectWithTag(v97, 0x79517350u);
        return (int)Ptr;
      }
      return (int)Ptr;
    case ProcessWakeInformation:
      if ( PreviousMode )
        return -1073741790;
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 0,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v44 = Object;
      DeviceMapInformation = PspAllocateAndQueryProcessNotificationChannel((__int64)v184, (__int64)Object, v6);
      if ( DeviceMapInformation >= 0 && ReturnLength )
      {
        *ReturnLength = 48;
        ObfDereferenceObjectWithTag(v44, 0x79517350u);
        return DeviceMapInformation;
      }
      else
      {
LABEL_192:
        v48 = v44;
LABEL_193:
        ObfDereferenceObjectWithTag(v48, 0x79517350u);
        return DeviceMapInformation;
      }
    case ProcessEnergyTrackingState:
      memset_0(v243, 0, sizeof(v243));
      if ( (unsigned int)v5 < 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      i = result;
      if ( result < 0 )
        return result;
      v98 = Object;
      PoQueryProcessEnergyTrackingState(Object, v243);
      if ( (unsigned int)v5 >= 0x90 )
        LODWORD(v5) = 144;
      memmove((void *)v6, v243, (unsigned int)v5);
      if ( ReturnLength )
        *ReturnLength = v5;
      i = 0;
      goto LABEL_436;
    case ProcessCaptureTrustletLiveDump:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1048,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v93 = Object;
      if ( *((_QWORD *)Object + 46) )
      {
        v161 = VslLiveDumpCaptureProcess(Object);
        ObfDereferenceObjectWithTag(v93, 0x79517350u);
        return v161;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741790;
      }
    case ProcessTelemetryCoverage:
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessTelemetryCoverage = EtwQueryProcessTelemetryCoverage((_KPROCESS *)Object, (char *)v6, v5, ReturnLength);
LABEL_333:
      LODWORD(Ptr) = ProcessTelemetryCoverage;
      goto LABEL_334;
    case ProcessEnableReadWriteVmLogging:
    case ProcessEnableLogging:
      if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging && !(_DWORD)v5
        || ProcessInformationClass == ProcessEnableLogging && (unsigned int)v5 < 4 )
      {
        return -1073741820;
      }
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v83 = result;
      if ( result >= 0 )
      {
        v84 = Object;
        *(_BYTE *)v6 = HIBYTE(*((_DWORD *)Object + 124)) & 3;
        if ( ProcessInformationClass == ProcessEnableLogging )
          *(_DWORD *)v6 |= (v84[383] & 0x80000 | v84[383] & 0x100000 | ((v84[383] & 0x10000000 | (v84[383] >> 2) & 0x8000000u) >> 6)) >> 17;
        ObfDereferenceObjectWithTag(v84, 0x79517350u);
        return v83;
      }
      return result;
    case ProcessUptimeInformation:
      v218 = 0LL;
      v219 = 0LL;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      i = result;
      if ( result < 0 )
        return result;
      v131 = Object;
      PspLockProcessShared((__int64)Object, (__int64)v184);
      v132 = v131[212] >> 61;
      if ( v132 == 4 || v132 == 3 )
      {
        v133 = v131[212] & 0x1FFFFFFFFFFFFFFFLL;
        *(_QWORD *)&v196 = v133;
        Src.m256i_i64[2] = v131[211];
        v134 = Src.m256i_i64[2] - v131[208];
        Src.m256i_i64[3] = v134;
        if ( v132 == 3 )
        {
          v135 = v197 | 0x200;
LABEL_550:
          LODWORD(v197) = v135 & 0xFFFFFE00 | *((_BYTE *)v131 + 1531) & 7 | (unsigned __int8)(2
                                                                                            * (*((_BYTE *)v131 + 1531) & 0x38)) | ((*((_DWORD *)v131 + 383) & 4) << 6);
          PspUnlockProcessShared((__int64)v131);
          PsGetProcessDeepFreezeStats((__int64)v131, &v218);
          *(_OWORD *)Src.m256i_i8 = v218;
          *((_QWORD *)&v196 + 1) = v219;
          if ( !v134 )
            Src.m256i_i64[3] = v218 - v131[208];
          if ( !v133 )
            *(_QWORD *)&v196 = *((_QWORD *)&v218 + 1) - v131[209] - v219;
          if ( (unsigned int)v5 >= 0x38 )
            LODWORD(v5) = 56;
          memmove((void *)v6, &Src, (unsigned int)v5);
          if ( ReturnLength )
            *ReturnLength = v5;
          i = 0;
          ObfDereferenceObjectWithTag(v131, 0x79517350u);
          return 0;
        }
      }
      else
      {
        v133 = v196;
        v134 = Src.m256i_i64[3];
      }
      v135 = v197;
      goto LABEL_550;
    case ProcessImageSection:
      v214 = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( PreviousMode )
      {
        if ( v6 < 0x7FFFFFFF0000LL )
          v13 = v6;
        *(_QWORD *)v13 = *(_QWORD *)v13;
      }
      v162 = (PVOID *)KeGetCurrentThread()->ApcState.Process;
      Object = v162;
      if ( ProcessHandle != (HANDLE)-1LL || v162 != (PVOID *)CurrentThread->Process )
        return -1073741790;
      result = ObOpenObjectByPointer(v162[85], 0, 0LL, 5u, MmSectionObjectType, PreviousMode, &v214);
      i = result;
      if ( result >= 0 )
      {
        *(_QWORD *)v6 = v214;
        if ( ReturnLength )
          *ReturnLength = 8;
      }
      return result;
    case ProcessSequenceNumber:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      LODWORD(Ptr) = result;
      if ( result < 0 )
        return result;
      v97 = Object;
      *(_QWORD *)v6 = *((_QWORD *)Object + 207);
      if ( ReturnLength )
        *ReturnLength = 8;
      goto LABEL_423;
    case ProcessSecurityDomainInformation:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      i = result;
      if ( result < 0 )
        return result;
      if ( (*((_DWORD *)Object + 124) & 0x8000) == 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741700;
      }
      _InterlockedOr(v167, 0);
      *(_QWORD *)v6 = *((_QWORD *)Object + 236);
      if ( ReturnLength )
        *ReturnLength = 8;
      i = 0;
LABEL_334:
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return (int)Ptr;
    case ProcessLeapSecondInformation:
      if ( (_DWORD)v5 != 8 )
      {
        if ( ReturnLength )
          *ReturnLength = 8;
        return -1073741820;
      }
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v163 = KeGetCurrentThread()->ApcState.Process;
      Object = v163;
      i = 0;
      Blink = v163[1].ProcessListEntry.Blink;
      if ( !Blink )
        goto LABEL_787;
      v165 = 0LL;
      ReadyTime = (__int64 *)v163[1].ReadyTime;
      if ( ReadyTime )
        v165 = *ReadyTime;
      if ( v165 )
      {
        if ( (*(_DWORD *)(v165 + 1140) & 1) == 0 )
          goto LABEL_787;
      }
      else if ( ((__int64)Blink[124].Flink & 1) == 0 )
      {
        goto LABEL_787;
      }
      Src.m256i_i32[0] |= 1u;
LABEL_787:
      *(_QWORD *)v6 = Src.m256i_i64[0];
      if ( ReturnLength )
        *ReturnLength = 8;
      return (int)Ptr;
    case ProcessAltPrefetchParam:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      Src.m256i_i32[0] = 16;
      *(_DWORD *)v6 = 16;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessMembershipInformation:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      if ( PsIsCurrentThreadInServerSilo() )
      {
        SiloIdentifier = Src.m256i_i32[0];
      }
      else
      {
        EffectiveServerSilo = PsGetEffectiveServerSilo(*((_QWORD *)Object + 84));
        SiloIdentifier = PsGetSiloIdentifier(EffectiveServerSilo);
      }
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = SiloIdentifier;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessNetworkIoCounters:
      if ( (_DWORD)v5 != 16 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      LODWORD(Ptr) = result;
      if ( result < 0 )
        return result;
      *(_OWORD *)Src.m256i_i8 = *(_OWORD *)*((_QWORD *)Object + 254);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_OWORD *)v6 = *(_OWORD *)Src.m256i_i8;
      if ( ReturnLength )
        *ReturnLength = 16;
      return (int)Ptr;
    case ProcessFindFirstThreadByTebValue:
      v233 = 0LL;
      if ( (_DWORD)v5 != 16 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( PreviousMode )
      {
        RtlCopyVolatileMemory(&v233, (const void *)v6, 0x10uLL);
        if ( (v6 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v116 = 0x7FFFFFFF0000LL;
        if ( v6 < 0x7FFFFFFF0000LL )
          v116 = v6;
        *(_DWORD *)v116 = *(_DWORD *)v116;
        v117 = &v233;
      }
      else
      {
        v117 = (__int128 *)v6;
      }
      FirstThreadByTebValue = PspFindFirstThreadByTebValue((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
      v119 = FirstThreadByTebValue;
      if ( FirstThreadByTebValue == -1073741275 )
      {
        *(_DWORD *)v117 = 0;
        v119 = 0;
      }
      else if ( FirstThreadByTebValue < 0 )
      {
        return v119;
      }
      if ( PreviousMode )
      {
        *(_DWORD *)v6 = *(_DWORD *)v117;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      else if ( ReturnLength )
      {
        *ReturnLength = 4;
      }
      return v119;
    default:
      return -1073741821;
  }
}
