/*
 * XREFs of NtQueryInformationProcess @ 0x1409D2880
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeQueryAffinityProcess @ 0x140270FC0 (KeQueryAffinityProcess.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     PspUnlockProcessShared @ 0x14029BF00 (PspUnlockProcessShared.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     MmQueryWorkingSetInformation @ 0x1402BB410 (MmQueryWorkingSetInformation.c)
 *     ExUnlockUserBuffer @ 0x1402D31E0 (ExUnlockUserBuffer.c)
 *     RtlNumberOfSetBitsEx @ 0x140305240 (RtlNumberOfSetBitsEx.c)
 *     KeFindFirstSetRightGroupMask @ 0x140305380 (KeFindFirstSetRightGroupMask.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetEffectiveServerSilo @ 0x140310610 (PsGetEffectiveServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     KeQuerySystemTimePrecise @ 0x14031ABA0 (KeQuerySystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExQueryHandleExceptionsPermanency @ 0x1403D772C (ExQueryHandleExceptionsPermanency.c)
 *     PspLockProcessShared @ 0x1403F8E70 (PspLockProcessShared.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     PsGetSessionId @ 0x140433C80 (PsGetSessionId.c)
 *     KeTestBitGroupMask @ 0x1404362B0 (KeTestBitGroupMask.c)
 *     PsGetWin32KFilterSet @ 0x1404509F0 (PsGetWin32KFilterSet.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     PsQueryProcessCommandLine @ 0x140461E70 (PsQueryProcessCommandLine.c)
 *     KeClearBitGroupMask @ 0x14046509C (KeClearBitGroupMask.c)
 *     MmQueryCommitReleaseState @ 0x14047CE80 (MmQueryCommitReleaseState.c)
 *     KeQueryGroupMaskProcess @ 0x140488E54 (KeQueryGroupMaskProcess.c)
 *     KeQueryCpuSetsProcess @ 0x1404D4504 (KeQueryCpuSetsProcess.c)
 *     xKdEnumerateDebuggingDevices @ 0x1404F8540 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x14069DC00 (ZwQueryInformationJobObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x1406ED118 (EtwQueryProcessTelemetryCoverage.c)
 *     ExLockUserBuffer @ 0x140823168 (ExLockUserBuffer.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ObReferenceProcessHandleTable @ 0x1408ADC40 (ObReferenceProcessHandleTable.c)
 *     MmGetSectionInformation @ 0x1408B6660 (MmGetSectionInformation.c)
 *     PspGetRedirectionTrustPolicy @ 0x1408BA06C (PspGetRedirectionTrustPolicy.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408BE0D4 (EtwQueryProcessTelemetryInfo.c)
 *     IoQueryFileDosDeviceName @ 0x1408BF2A0 (IoQueryFileDosDeviceName.c)
 *     PsQueryStatisticsProcess @ 0x1408DD540 (PsQueryStatisticsProcess.c)
 *     ObGetProcessHandleCount @ 0x1408DD7C0 (ObGetProcessHandleCount.c)
 *     PsQueryProcessEnergyValues @ 0x1408DE290 (PsQueryProcessEnergyValues.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     PsReferenceProcessFilePointer @ 0x14090B800 (PsReferenceProcessFilePointer.c)
 *     PsGetProcessDeepFreezeStats @ 0x14091FE1C (PsGetProcessDeepFreezeStats.c)
 *     ExQueryProcessHandleInformation @ 0x140971498 (ExQueryProcessHandleInformation.c)
 *     ObQueryDeviceMapInformation @ 0x14097E7F0 (ObQueryDeviceMapInformation.c)
 *     ExEnumHandleTable @ 0x1409864C0 (ExEnumHandleTable.c)
 *     PsQueryProcessAttributes @ 0x1409BE6C0 (PsQueryProcessAttributes.c)
 *     MiCopyVirtualMemory @ 0x1409C5370 (MiCopyVirtualMemory.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1409CD200 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspQueryQuotaLimits @ 0x1409CDB50 (PspQueryQuotaLimits.c)
 *     PsQueryRuntimeProcess @ 0x1409CE740 (PsQueryRuntimeProcess.c)
 *     ExReferenceHandleDebugInfo @ 0x1409EC71C (ExReferenceHandleDebugInfo.c)
 *     PsQueryFullProcessImageName @ 0x140A01874 (PsQueryFullProcessImageName.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x140A046B0 (PsQueryProcessSignatureMitigationPolicy.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A0488C (ExDereferenceHandleDebugInfo.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140A0902C (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspQueryWorkingSetWatch @ 0x140A0AC88 (PspQueryWorkingSetWatch.c)
 *     ExIsRestrictedCaller @ 0x140A0AFF8 (ExIsRestrictedCaller.c)
 *     KeGetExecuteOptions @ 0x140A0BA94 (KeGetExecuteOptions.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140A152C0 (PsQueryTotalCycleTimeProcess.c)
 *     VslGetSecurePebAddress @ 0x140A5759C (VslGetSecurePebAddress.c)
 *     PsGetSiloIdentifier @ 0x140A655F0 (PsGetSiloIdentifier.c)
 *     DbgkOpenProcessDebugPort @ 0x140A689A0 (DbgkOpenProcessDebugPort.c)
 *     VslLiveDumpCaptureProcess @ 0x140A87F74 (VslLiveDumpCaptureProcess.c)
 *     PoQueryProcessEnergyTrackingState @ 0x140A90964 (PoQueryProcessEnergyTrackingState.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x140AAD734 (PsIumGetOnDemandDebugChallenge.c)
 *     PspQueryPooledQuotaLimits @ 0x140AAE718 (PspQueryPooledQuotaLimits.c)
 *     PspFindFirstThreadByTebValue @ 0x140ABB5E0 (PspFindFirstThreadByTebValue.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  size_t v5; // r15
  unsigned __int64 v6; // rsi
  __int64 Count; // r14
  __int64 v10; // rdx
  unsigned __int8 PreviousMode; // r10
  struct _KTHREAD *CurrentThread; // r8
  __int64 v13; // r9
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rcx
  NTSTATUS result; // eax
  NTSTATUS DeviceMapInformation; // edi
  struct _EX_RUNDOWN_REF *v20; // rbx
  unsigned __int64 v21; // r12
  unsigned __int16 v22; // dx
  POBJECT_NAME_INFORMATION v23; // rdx
  _DWORD *v24; // r8
  unsigned int v25; // ecx
  __int16 v26; // ax
  int v27; // ebx
  int v28; // ecx
  int v29; // eax
  int v30; // r15d
  struct _EX_RUNDOWN_REF *v31; // rbx
  _QWORD *v32; // rbx
  unsigned int v33; // ebx
  __int64 v34; // r9
  struct _EX_RUNDOWN_REF *v35; // rbx
  struct _FILE_OBJECT *v36; // r12
  NTSTATUS ExecuteOptions; // ebx
  POBJECT_NAME_INFORMATION v38; // rdi
  ULONG v39; // r12d
  struct _EX_RUNDOWN_REF *v40; // rbx
  char v41; // r12
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  NTSTATUS v46; // edi
  _QWORD *v47; // r14
  __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // ecx
  int v51; // eax
  int v52; // ecx
  int v53; // eax
  int v54; // ebx
  int v55; // ecx
  int v56; // eax
  unsigned __int64 v57; // rax
  int SessionId; // ebx
  _DWORD *v59; // rcx
  int NoChildProcessRestrictedPolicy; // eax
  int v61; // eax
  int v62; // eax
  __int64 *v63; // rax
  void *Process; // r10
  void *v65; // r10
  NTSTATUS v66; // edi
  PVOID v67; // rdi
  NTSTATUS v68; // ebx
  PVOID v69; // rdi
  _DWORD *p_LockNV; // rcx
  int v71; // eax
  __int64 v72; // rax
  __int64 *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rcx
  unsigned __int16 v76; // r12
  ULONG v77; // eax
  NTSTATUS v78; // edi
  _DWORD *v79; // r8
  __int64 v80; // rbx
  NTSTATUS ProcessCommandLine; // eax
  NTSTATUS v82; // edi
  struct _EX_RUNDOWN_REF *v83; // r12
  void *v84; // rax
  __int64 v85; // rax
  __int64 v86; // r15
  __int64 v87; // r14
  struct _EX_RUNDOWN_REF *v88; // rbx
  unsigned int *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  NTSTATUS ProcessHandleInformation; // edi
  NTSTATUS v94; // ebx
  struct _EX_RUNDOWN_REF *v95; // rbx
  unsigned int *v96; // rax
  void *v97; // rbx
  int v98; // eax
  int v99; // eax
  unsigned int v100; // r9d
  unsigned int v101; // r8d
  int v102; // edx
  _OWORD *v103; // rax
  __int64 v104; // r11
  int v105; // ecx
  POBJECT_NAME_INFORMATION v106; // r10
  unsigned int i; // ecx
  __int64 v108; // r11
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rbx
  NTSTATUS v112; // edi
  unsigned int v113; // ecx
  __int64 v114; // rax
  unsigned int v115; // eax
  int v116; // ecx
  __int64 v117; // rax
  int v118; // eax
  _DWORD *v119; // rcx
  int v120; // edx
  __int128 *v121; // rbx
  int FirstThreadByTebValue; // eax
  NTSTATUS v123; // ecx
  int RedirectionTrustPolicy; // eax
  int v125; // eax
  int v126; // eax
  int ProcessHandleCount; // edi
  NTSTATUS ProcessTelemetryCoverage; // eax
  int v129; // ebx
  __int64 v130; // rax
  __int64 v131; // rdi
  __int64 v132; // r12
  int v133; // edx
  struct _KPRCB *CurrentPrcb; // rbx
  ULONG LowPart; // edi
  int v136; // ecx
  unsigned __int64 v137; // rax
  int v138; // ebx
  NTSTATUS v139; // r15d
  HANDLE v140; // rdi
  int v141; // ebx
  PFILE_OBJECT v142; // rcx
  ULONG_PTR v143; // rbx
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rsi
  PVOID v145; // rbx
  SECTION_OBJECT_POINTERS *v146; // rdi
  NTSTATUS v147; // r15d
  unsigned __int64 v148; // rdx
  unsigned __int16 FirstSetRightGroupMask; // dx
  size_t v150; // r8
  unsigned __int64 v151; // rax
  __int64 EffectiveServerSilo; // rax
  __int32 SiloIdentifier; // ebx
  unsigned __int64 v154; // rax
  NTSTATUS v155; // r12d
  ULONG v156; // ebx
  PVOID *v157; // rcx
  _KPROCESS *v158; // rcx
  struct _LIST_ENTRY *Blink; // r8
  __int64 v160; // rax
  __int64 *ReadyTime; // rdx
  signed __int32 v162[8]; // [rsp+0h] [rbp-A08h] BYREF
  PVOID Object; // [rsp+40h] [rbp-9C8h] BYREF
  NTSTATUS j; // [rsp+48h] [rbp-9C0h]
  unsigned __int8 v165; // [rsp+4Ch] [rbp-9BCh]
  char v166; // [rsp+4Dh] [rbp-9BBh]
  char v167; // [rsp+4Eh] [rbp-9BAh] BYREF
  char v168; // [rsp+4Fh] [rbp-9B9h] BYREF
  _BYTE v169[8]; // [rsp+50h] [rbp-9B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-9B0h] BYREF
  unsigned __int16 v171; // [rsp+60h] [rbp-9A8h] BYREF
  HANDLE v172; // [rsp+68h] [rbp-9A0h]
  int v173; // [rsp+88h] [rbp-980h] BYREF
  __int64 v174; // [rsp+90h] [rbp-978h]
  __int16 v175; // [rsp+98h] [rbp-970h]
  PFILE_OBJECT FileObject; // [rsp+A0h] [rbp-968h] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+A8h] [rbp-960h] BYREF
  PVOID v178; // [rsp+B0h] [rbp-958h] BYREF
  unsigned int v179; // [rsp+B8h] [rbp-950h]
  __m128i v180; // [rsp+C0h] [rbp-948h] BYREF
  struct _KTHREAD *v181; // [rsp+D0h] [rbp-938h]
  int v182; // [rsp+D8h] [rbp-930h]
  unsigned __int64 v183; // [rsp+E0h] [rbp-928h] BYREF
  unsigned int v184; // [rsp+E8h] [rbp-920h]
  int v185; // [rsp+ECh] [rbp-91Ch] BYREF
  _DWORD v186[4]; // [rsp+F0h] [rbp-918h] BYREF
  __m128i v187; // [rsp+100h] [rbp-908h] BYREF
  __int128 v188; // [rsp+110h] [rbp-8F8h] BYREF
  HANDLE Handle[3]; // [rsp+120h] [rbp-8E8h] BYREF
  HANDLE v190; // [rsp+138h] [rbp-8D0h] BYREF
  __m256i Src; // [rsp+140h] [rbp-8C8h] BYREF
  __int128 v192; // [rsp+160h] [rbp-8A8h] BYREF
  __int64 v193; // [rsp+170h] [rbp-898h]
  __int64 v194; // [rsp+178h] [rbp-890h]
  __int64 v195; // [rsp+180h] [rbp-888h]
  __int64 v196; // [rsp+188h] [rbp-880h]
  __int64 v197; // [rsp+190h] [rbp-878h]
  __int64 v198; // [rsp+198h] [rbp-870h]
  _QWORD v199[2]; // [rsp+1A0h] [rbp-868h] BYREF
  int v200; // [rsp+1B0h] [rbp-858h]
  _DWORD v201[2]; // [rsp+1B4h] [rbp-854h] BYREF
  int v202; // [rsp+1BCh] [rbp-84Ch]
  __int64 v203; // [rsp+1C0h] [rbp-848h] BYREF
  unsigned __int64 v204; // [rsp+1C8h] [rbp-840h] BYREF
  ULONG v205; // [rsp+1D0h] [rbp-838h]
  ULONG v206; // [rsp+1D8h] [rbp-830h]
  int v207; // [rsp+1DCh] [rbp-82Ch]
  __int64 v208; // [rsp+1E0h] [rbp-828h] BYREF
  __int64 v209; // [rsp+1E8h] [rbp-820h] BYREF
  PVOID v210; // [rsp+1F0h] [rbp-818h] BYREF
  int v211; // [rsp+280h] [rbp-788h]
  unsigned __int64 v212[3]; // [rsp+2B8h] [rbp-750h] BYREF
  __int128 v213; // [rsp+2D0h] [rbp-738h] BYREF
  __int128 v214; // [rsp+2E0h] [rbp-728h]
  POBJECT_NAME_INFORMATION v215; // [rsp+2F0h] [rbp-718h]
  ULONG_PTR v216; // [rsp+2F8h] [rbp-710h]
  __int128 v217; // [rsp+300h] [rbp-708h] BYREF
  unsigned __int64 v218; // [rsp+310h] [rbp-6F8h]
  _QWORD v219[5]; // [rsp+320h] [rbp-6E8h] BYREF
  __m256i v220; // [rsp+348h] [rbp-6C0h]
  __int128 v221; // [rsp+368h] [rbp-6A0h]
  __int128 v222; // [rsp+390h] [rbp-678h]
  __int128 v223; // [rsp+3A0h] [rbp-668h]
  _OWORD v224[8]; // [rsp+3B0h] [rbp-658h]
  __int128 v225; // [rsp+430h] [rbp-5D8h] BYREF
  __int64 v226; // [rsp+440h] [rbp-5C8h]
  int v227; // [rsp+448h] [rbp-5C0h]
  __int128 v228; // [rsp+450h] [rbp-5B8h] BYREF
  _OWORD v229[3]; // [rsp+460h] [rbp-5A8h] BYREF
  __int128 JobObjectInformation; // [rsp+490h] [rbp-578h] BYREF
  __int128 v231; // [rsp+4A0h] [rbp-568h]
  __int64 v232; // [rsp+4B0h] [rbp-558h]
  struct _KAFFINITY_EX v233; // [rsp+4C0h] [rbp-548h] BYREF
  _BYTE v234[16]; // [rsp+5D0h] [rbp-438h] BYREF
  int v235; // [rsp+5E0h] [rbp-428h]
  __int64 v236; // [rsp+648h] [rbp-3C0h]
  __int64 v237; // [rsp+660h] [rbp-3A8h]
  _BYTE v238[144]; // [rsp+670h] [rbp-398h] BYREF
  _OWORD v239[28]; // [rsp+700h] [rbp-308h] BYREF
  _BYTE v240[256]; // [rsp+8C0h] [rbp-148h] BYREF

  v5 = ProcessInformationLength;
  v6 = (unsigned __int64)ProcessInformation;
  v172 = ProcessHandle;
  Handle[1] = ProcessInformation;
  v205 = ProcessInformationLength;
  Handle[2] = ReturnLength;
  memset(v229, 0, sizeof(v229));
  Count = 0LL;
  v173 = 0;
  Handle[0] = 0LL;
  v185 = 0;
  memset_0(&v233, 0, sizeof(v233));
  FileObject = 0LL;
  v225 = 0LL;
  v201[0] = 0;
  v202 = 0;
  memset_0(v234, 0, 0x98uLL);
  v217 = 0LL;
  v203 = 0LL;
  JobObjectInformation = 0LL;
  v231 = 0LL;
  v232 = 0LL;
  v204 = 0LL;
  ObjectNameInformation = 0LL;
  v171 = 0;
  v175 = 0;
  Object = 0LL;
  v208 = 0LL;
  v209 = 0LL;
  memset_0(v219, 0, 0x68uLL);
  memset_0(&Src, 0, 0x70uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v165 = PreviousMode;
  v166 = PreviousMode;
  CurrentThread = KeGetCurrentThread();
  v181 = CurrentThread;
  if ( !PreviousMode )
  {
    v13 = 1LL;
    v174 = 3LL;
    v16 = 0x7FFFFFFF0000LL;
    goto LABEL_27;
  }
  if ( ProcessInformationClass == ProcessPriorityClass || ProcessInformationClass == ProcessProtectionInformation )
    goto LABEL_22;
  if ( ProcessInformationClass == ProcessCommitReleaseInformation )
  {
    v15 = 7LL;
    v13 = 1LL;
    v174 = 3LL;
    goto LABEL_13;
  }
  if ( ((ProcessInformationClass - 70) & 0xFFFFFFFB) == 0 )
    goto LABEL_22;
  if ( ProcessInformationClass == ProcessSequenceNumber )
  {
    v15 = 7LL;
    v13 = 1LL;
    v174 = 3LL;
    goto LABEL_13;
  }
  if ( ProcessInformationClass != ProcessSecurityDomainInformation )
  {
    if ( ProcessInformationClass != ProcessEnableReadWriteVmLogging )
    {
      v13 = 1LL;
      if ( ProcessInformationClass == ProcessGroupInformation )
      {
        v15 = 1LL;
        v174 = 3LL;
      }
      else
      {
        v174 = 3LL;
        v14 = 3;
        if ( ProcessInformationClass == ProcessFindFirstThreadByTebValue )
          v14 = 7;
        v15 = v14;
        CurrentThread = v181;
      }
      goto LABEL_13;
    }
LABEL_22:
    v15 = 0LL;
    v13 = 1LL;
    v174 = 3LL;
    goto LABEL_13;
  }
  v15 = 7LL;
  v13 = 1LL;
  v174 = 3LL;
LABEL_13:
  if ( (_DWORD)v5 )
  {
    if ( (v15 & v6) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = 0x7FFFFFFF0000LL;
  }
  else
  {
    v16 = 0x7FFFFFFF0000LL;
  }
  if ( ReturnLength )
  {
    v17 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      v17 = (__int64)ReturnLength;
    *(_DWORD *)v17 = *(_DWORD *)v17;
  }
LABEL_27:
  switch ( ProcessInformationClass )
  {
    case ProcessMitigationPolicy:
      v186[0] = 0;
      v168 = 0;
      v169[0] = 0;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v27 = *(_DWORD *)v6;
      v207 = *(_DWORD *)v6;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        Object = KeGetCurrentThread()->ApcState.Process;
        v27 = v207;
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
      if ( v27 != 2 )
      {
        if ( v27 == 7 )
        {
          j = 0;
          *(_DWORD *)(v6 + 4) = 0;
          if ( (*((_DWORD *)Object + 468) & 1) != 0 )
            *(_DWORD *)(v6 + 4) |= 1u;
          if ( (*((_DWORD *)Object + 468) & 2) != 0 )
            *(_DWORD *)(v6 + 4) |= 2u;
          if ( (*((_DWORD *)Object + 468) & 4) != 0 )
            *(_DWORD *)(v6 + 4) |= 4u;
          goto LABEL_100;
        }
        switch ( v27 )
        {
          case 1:
            j = 0;
            *(_DWORD *)(v6 + 4) = 0;
            if ( (*((_DWORD *)Object + 468) & 0x40) == 0 )
              *(_DWORD *)(v6 + 4) |= 1u;
            if ( (*((_DWORD *)Object + 468) & 0x10) != 0 )
              *(_DWORD *)(v6 + 4) |= 2u;
            if ( (*((_DWORD *)Object + 468) & 0x20) != 0 )
              *(_DWORD *)(v6 + 4) |= 4u;
            if ( (*((_DWORD *)Object + 468) & 8) != 0 )
              *(_DWORD *)(v6 + 4) |= 8u;
            goto LABEL_100;
          case 3:
            j = 0;
            v57 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
            if ( v57 )
            {
              ExQueryHandleExceptionsPermanency(v57, &v168, v169);
              *(_DWORD *)(v6 + 4) = 0;
              if ( v168 )
                *(_DWORD *)(v6 + 4) |= 1u;
              if ( v169[0] )
                *(_DWORD *)(v6 + 4) |= 2u;
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 61);
            }
            else
            {
              j = -1073741558;
            }
            goto LABEL_100;
          case 4:
            j = 0;
            *(_DWORD *)(v6 + 4) = 0;
            v42 = *((_DWORD *)Object + 468);
            if ( (v42 & 0x1000) != 0 )
            {
              v43 = *(_DWORD *)(v6 + 4) | 1;
            }
            else
            {
              if ( (v42 & 0x2000) == 0 )
              {
LABEL_205:
                v44 = *((_DWORD *)Object + 502);
                if ( (v44 & 2) != 0 )
                {
                  v45 = *(_DWORD *)(v6 + 4) | 4;
                }
                else
                {
                  if ( (v44 & 4) == 0 )
                    goto LABEL_100;
                  v45 = *(_DWORD *)(v6 + 4) | 8;
                }
                *(_DWORD *)(v6 + 4) = v45;
LABEL_100:
                if ( ProcessHandle != (HANDLE)-1LL )
                  ObfDereferenceObjectWithTag(Object, 0x79517350u);
                return j;
              }
              v43 = *(_DWORD *)(v6 + 4) | 2;
            }
            *(_DWORD *)(v6 + 4) = v43;
            goto LABEL_205;
          case 6:
            j = 0;
            *(_DWORD *)(v6 + 4) = 0;
            if ( (*((_DWORD *)Object + 468) & 0x80u) != 0 )
              *(_DWORD *)(v6 + 4) |= 1u;
            goto LABEL_100;
          case 8:
            j = 0;
            PsQueryProcessSignatureMitigationPolicy(Object, v186, CurrentThread, v13);
            *(_DWORD *)(v6 + 4) = v186[0];
            goto LABEL_100;
          case 9:
            j = 0;
            *(_DWORD *)(v6 + 4) = 0;
            v55 = *((_DWORD *)Object + 468);
            if ( (v55 & 0x10000) != 0 )
            {
              v56 = *(_DWORD *)(v6 + 4) | 1;
            }
            else
            {
              if ( (v55 & 0x20000) == 0 )
                goto LABEL_100;
              v56 = *(_DWORD *)(v6 + 4) | 2;
            }
            *(_DWORD *)(v6 + 4) = v56;
            goto LABEL_100;
          case 10:
            j = 0;
            *(_DWORD *)(v6 + 4) = 0;
            v50 = *((_DWORD *)Object + 468);
            if ( (v50 & 0x80000) != 0 )
            {
              v51 = *(_DWORD *)(v6 + 4) | 1;
            }
            else
            {
              if ( (v50 & 0x100000) == 0 )
              {
LABEL_227:
                v52 = *((_DWORD *)Object + 468);
                if ( (v52 & 0x200000) != 0 )
                {
                  v53 = *(_DWORD *)(v6 + 4) | 2;
                }
                else
                {
                  if ( (v52 & 0x400000) == 0 )
                  {
LABEL_230:
                    if ( (*((_DWORD *)Object + 468) & 0x40000) != 0 )
                      *(_DWORD *)(v6 + 4) |= 4u;
                    goto LABEL_100;
                  }
                  v53 = *(_DWORD *)(v6 + 4) | 0x10;
                }
                *(_DWORD *)(v6 + 4) = v53;
                goto LABEL_230;
              }
              v51 = *(_DWORD *)(v6 + 4) | 8;
            }
            *(_DWORD *)(v6 + 4) = v51;
            goto LABEL_227;
          case 11:
            j = 0;
            *(_DWORD *)(v6 + 4) = 0;
            *(_DWORD *)(v6 + 4) ^= ((unsigned __int8)PsGetWin32KFilterSet() ^ (unsigned __int8)*(_DWORD *)(v6 + 4)) & 0xF;
            goto LABEL_100;
          case 12:
            j = 0;
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
            goto LABEL_100;
          case 13:
            j = 0;
            NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(Object);
            *(_DWORD *)(v6 + 4) = 0;
            v61 = NoChildProcessRestrictedPolicy - 1;
            if ( !v61 )
              goto LABEL_271;
            v62 = v61 - 1;
            if ( v62 )
            {
              if ( v62 == 1 )
                *(_DWORD *)(v6 + 4) |= 2u;
            }
            else
            {
              *(_DWORD *)(v6 + 4) |= 4u;
LABEL_271:
              *(_DWORD *)(v6 + 4) |= 1u;
            }
            goto LABEL_100;
          case 14:
            j = 0;
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
            goto LABEL_100;
          case 15:
            j = 0;
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
            goto LABEL_100;
          case 16:
            j = 0;
            RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((__int64)Object);
            *(_DWORD *)(v6 + 4) = 0;
            v125 = RedirectionTrustPolicy - 1;
            if ( v125 )
            {
              if ( v125 != 1 )
                goto LABEL_100;
              v126 = *(_DWORD *)(v6 + 4) | 2;
            }
            else
            {
              v126 = *(_DWORD *)(v6 + 4) | 1;
            }
            *(_DWORD *)(v6 + 4) = v126;
            goto LABEL_100;
          default:
            j = -1073741637;
            goto LABEL_100;
        }
      }
      j = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v28 = *((_DWORD *)Object + 468);
      if ( (v28 & 0x100) != 0 )
      {
        v29 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v28 & 0x800) == 0 )
          goto LABEL_94;
        v29 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v29;
LABEL_94:
      if ( (*((_DWORD *)Object + 468) & 0x200) != 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      if ( (*((_DWORD *)Object + 468) & 0x400) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_100;
    case ProcessAltPrefetchParam:
      if ( (_DWORD)v5 == 4 )
      {
        Src.m256i_i32[0] = 16;
        *(_DWORD *)v6 = 16;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
      return -1073741820;
    case ProcessQuotaLimits:
      return PspQueryQuotaLimits((ULONG_PTR)ProcessHandle, v10, (void *)v6, v5, ReturnLength, PreviousMode);
  }
  if ( ProcessInformationClass != ProcessImageFileName )
  {
    switch ( ProcessInformationClass )
    {
      case ProcessBasicInformation:
        v167 = 0;
        if ( (_DWORD)v5 == 64 )
        {
          ObjectNameInformation = (POBJECT_NAME_INFORMATION)v6;
          LODWORD(v5) = 64;
          FileObject = (PFILE_OBJECT)64;
          *(_QWORD *)v6 = 64LL;
          v6 += 8LL;
        }
        else
        {
          if ( (_DWORD)v5 != 48 )
            return -1073741820;
          ObjectNameInformation = 0LL;
          FileObject = (PFILE_OBJECT)v5;
        }
        v173 = v5;
        v183 = v6;
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
        j = result;
        if ( result < 0 )
          return result;
        v20 = (struct _EX_RUNDOWN_REF *)Object;
        *(_DWORD *)v6 = *((_DWORD *)Object + 341);
        *(struct _EX_RUNDOWN_REF *)(v6 + 8) = v20[92];
        if ( (v20[46].Count & 1) != 0 )
          VslGetSecurePebAddress(v20);
        if ( DeviceMapInformation < 0 )
          goto LABEL_73;
        v21 = 0LL;
        if ( (v20[17].Count & 0x1000) != 0 && v20 != (struct _EX_RUNDOWN_REF *)v181->Process )
          goto LABEL_44;
        *(_QWORD *)&v233.Count = 2097153LL;
        memset_0(&v233.8, 0, sizeof(v233.8));
        KeQueryAffinityProcess((__int64)v20, &v233, &v225, 0LL, &v171);
        if ( v20 == (struct _EX_RUNDOWN_REF *)v181->Process )
        {
          if ( !(unsigned int)KeTestBitGroupMask((const signed __int64 *)&v225, v181->UserAffinityPrimaryGroup) )
            goto LABEL_44;
        }
        else
        {
          v22 = v171;
        }
        if ( v22 != 32 )
          v21 = v233.Bitmap[v22];
LABEL_44:
        v23 = ObjectNameInformation;
        if ( ObjectNameInformation )
        {
          PsQueryProcessAttributes((__int64)v20, &v167, 0LL);
          v23 = ObjectNameInformation;
        }
        *(_QWORD *)(v6 + 16) = v21;
        *(_DWORD *)(v6 + 24) = SLOBYTE(v20[18].Count);
        *(struct _EX_RUNDOWN_REF *)(v6 + 32) = v20[58];
        *(struct _EX_RUNDOWN_REF *)(v6 + 40) = v20[90];
        if ( v23 )
        {
          LODWORD(v23[3].Name.Buffer) = 0;
          if ( (BYTE2(v20[191].Ptr) & 7) != 0 )
            LODWORD(v23[3].Name.Buffer) = 1;
          else
            LODWORD(v174) = 2;
          if ( v20[98].Count )
          {
            v26 = WORD2(v20[221].Ptr);
            if ( v26 == 332 || v26 == 452 )
              LODWORD(v23[3].Name.Buffer) = v174;
          }
          if ( (HIDWORD(v20[62].Ptr) & 0x40000008) != 0 )
            LODWORD(v23[3].Name.Buffer) |= 4u;
          v24 = Object;
          v25 = (__int64)v23[3].Name.Buffer & 0xFFFFFFF7 | (*((_DWORD *)Object + 124) >> 4) & 8;
          LODWORD(v23[3].Name.Buffer) = v25;
          if ( v24[84] + ((v24[34] >> 3) & 1) )
            LODWORD(v23[3].Name.Buffer) = v25 | 0x10;
          if ( *((_QWORD *)v24 + 84) && *(_DWORD *)(*((_QWORD *)Object + 84) + 1072LL) )
            LODWORD(v23[3].Name.Buffer) |= 0x20u;
          if ( v167 )
            LODWORD(v23[3].Name.Buffer) |= 0x40u;
          v20 = (struct _EX_RUNDOWN_REF *)Object;
          if ( (*((_BYTE *)Object + 368) & 1) != 0 )
            LODWORD(v23[3].Name.Buffer) |= 0x80u;
          if ( (v20[46].Count & 2) != 0 )
            LODWORD(v23[3].Name.Buffer) |= 0x200u;
          if ( v20[200].Count )
            LODWORD(v23[3].Name.Buffer) |= 0x100u;
          DeviceMapInformation = j;
        }
        if ( ReturnLength )
          *ReturnLength = (unsigned int)FileObject;
        goto LABEL_73;
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
        if ( result < 0 )
          return result;
        PsQueryStatisticsProcess(Object, v219);
        Src = v220;
        v192 = v221;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(__m256i *)v6 = Src;
        *(_OWORD *)(v6 + 32) = v192;
        if ( ReturnLength )
          *ReturnLength = 48;
        return DeviceMapInformation;
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
        if ( result < 0 )
          return result;
        *(_OWORD *)Src.m256i_i8 = *((_OWORD *)Object + 34);
        Src.m256i_i32[4] = *((_DWORD *)Object + 257);
        v32 = Object;
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v229);
        j = MmQueryWorkingSetInformation(&Src.m256i_i64[3], &v192, v199, &v204, &v203, v201);
        KiUnstackDetachProcess((__int64)v229, 0LL);
        v193 = v32[65];
        *((_QWORD *)&v192 + 1) = *((_QWORD *)Object + 67);
        v195 = *((_QWORD *)Object + 64);
        v194 = *((_QWORD *)Object + 66);
        v196 = *((_QWORD *)Object + 123) << 12;
        v197 = *((_QWORD *)Object + 124) << 12;
        v199[1] = *((_QWORD *)Object + 213) << 12;
        v198 = v196;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        result = j;
        if ( j < 0 )
          return result;
        memmove((void *)v6, &Src, v5);
        if ( ReturnLength )
          *ReturnLength = v5;
        return 0;
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
        v46 = result;
        if ( result >= 0 )
        {
          v47 = Object;
          v48 = PsQueryRuntimeProcess(Object, &v209);
          v49 = KeMaximumIncrement;
          *(_QWORD *)(v6 + 16) = KeMaximumIncrement * v48;
          *(_QWORD *)(v6 + 24) = v49 * v209;
          *(_QWORD *)v6 = v47[63];
          *(_QWORD *)(v6 + 8) = v47[184];
          if ( ReturnLength )
            *ReturnLength = 32;
          ObfDereferenceObjectWithTag(v47, 0x79517350u);
          return v46;
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
        if ( result < 0 )
          return result;
        v111 = -(__int64)(*((_QWORD *)Object + 97) != 0LL);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)v6 = v111;
        if ( ReturnLength )
          *ReturnLength = 8;
        return 0;
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
        if ( result < 0 )
          return result;
        ProcessTelemetryCoverage = xKdEnumerateDebuggingDevices();
        goto LABEL_546;
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
        if ( result < 0 )
          return result;
        v54 = *((_DWORD *)Object + 226);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v54;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
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
        if ( result < 0 )
          return result;
        HIBYTE(v175) = *((_BYTE *)Object + 839);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_WORD *)v6 = v175;
        if ( ReturnLength )
          *ReturnLength = 2;
        return 0;
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
          v129 = *((_BYTE *)Object + 503) & 1;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          *(_DWORD *)v6 = v129;
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
        v82 = result;
        if ( result < 0 )
          return result;
        v83 = (struct _EX_RUNDOWN_REF *)Object;
        if ( (*((_DWORD *)Object + 34) & 0x1000) != 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741811;
        }
        else
        {
          *(_QWORD *)&v233.Count = 2097153LL;
          memset_0(&v233.8, 0, sizeof(v233.8));
          KeQueryAffinityProcess((__int64)v83, &v233, &v225, 0LL, &v171);
          v148 = v233.Bitmap[v171];
          if ( (_DWORD)v5 == 16 )
            *(_WORD *)(v6 + 8) = v171;
          *(_QWORD *)v6 = v148;
          if ( ReturnLength )
            *ReturnLength = v5;
LABEL_461:
          ObfDereferenceObjectWithTag(v83, 0x79517350u);
          return v82;
        }
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
          v141 = (*((_DWORD *)Object + 34) >> 1) & 1;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          *(_DWORD *)v6 = v141;
          if ( ReturnLength )
            *ReturnLength = 4;
        }
        return DeviceMapInformation;
      case ProcessDeviceMap:
        if ( (unsigned int)v5 < 0x24 )
          return -1073741820;
        if ( (_DWORD)v5 == 48 )
        {
          v179 = *(_DWORD *)(v6 + 40);
          v33 = v179;
          if ( (v179 & 0xFFFFFFFE) != 0 )
            return -1073741811;
        }
        else
        {
          if ( (_DWORD)v5 != 36 )
            return -1073741820;
          v33 = 0;
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
        DeviceMapInformation = ObQueryDeviceMapInformation((_KPROCESS *)Object, v6, v33, v34);
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
        v63 = (__int64 *)*((_QWORD *)Object + 98);
        if ( v63 )
          Count = *v63;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)v6 = Count;
        if ( ReturnLength )
          *ReturnLength = 8;
        return 0;
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
        v138 = (*((_DWORD *)Object + 125) >> 13) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v138;
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
        if ( result >= 0 )
        {
          v139 = DbgkOpenProcessDebugPort(Object, v165, Handle);
          v140 = Handle[0];
          if ( v139 < 0 )
            v140 = 0LL;
          Handle[0] = v140;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          *(_QWORD *)v6 = v140;
          if ( ReturnLength )
            *ReturnLength = 8;
          return v139;
        }
        return result;
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
        ExecuteOptions = result;
        if ( result < 0 )
          return result;
        v59 = Object;
        *(_DWORD *)v6 = (*((_DWORD *)Object + 125) & 2) == 0;
        if ( ReturnLength )
          *ReturnLength = 4;
        goto LABEL_302;
      case ProcessHandleTracing:
        LODWORD(P) = 0;
        if ( (unsigned int)v5 < 0x10 )
          return -1073741820;
        if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, &P) )
          return -1073741790;
        v204 = (unsigned int)(v5 - 16) / 0xA0uLL;
        ObjectNameInformation = (POBJECT_NAME_INFORMATION)(v6 + 16);
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   1024,
                   (__int64)PsProcessType,
                   v165,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v82 = result;
        if ( result < 0 )
          return result;
        v83 = (struct _EX_RUNDOWN_REF *)Object;
        v84 = (void *)ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        v190 = v84;
        if ( v84 )
        {
          v85 = ExReferenceHandleDebugInfo(v84);
          v86 = v85;
          v203 = v85;
          if ( v85 )
          {
            v166 = 0;
            if ( (*(_DWORD *)(v85 + 8) & 3) != 0 )
            {
              ExAcquireFastMutex((PKGUARDED_MUTEX)(v85 + 16));
              v166 = 1;
            }
            *(_DWORD *)(v6 + 8) = 0;
            v100 = *(_DWORD *)(v86 + 72) % *(_DWORD *)(v86 + 4);
            v184 = v100;
            v101 = 0;
            v200 = 0;
            v102 = v204;
            while ( v101 < *(_DWORD *)(v86 + 4) )
            {
              v103 = (_OWORD *)(v86 + 160LL * v100);
              v222 = v103[5];
              v223 = v103[6];
              v224[0] = v103[7];
              v224[1] = v103[8];
              v224[2] = v103[9];
              v224[3] = v103[10];
              v224[4] = v103[11];
              v224[5] = v103[12];
              v224[6] = v103[13];
              v224[7] = v103[14];
              v104 = v223;
              if ( *(_QWORD *)v6 == (_QWORD)v223 || !*(_QWORD *)v6 )
              {
                v105 = DWORD2(v223);
                if ( DWORD2(v223) )
                {
                  ++*(_DWORD *)(v6 + 8);
                  if ( v102 )
                  {
                    v211 = --v102;
                    v106 = ObjectNameInformation;
                    *(_QWORD *)&ObjectNameInformation->Name.Length = v104;
                    *(_OWORD *)&v106->Name.Buffer = v222;
                    LODWORD(v106[1].Name.Buffer) = v105;
                    for ( i = 0; ; ++i )
                    {
                      v201[1] = i;
                      if ( i >= 0x10 )
                        break;
                      if ( (_DWORD)P )
                        v108 = 0LL;
                      else
                        v108 = *((_QWORD *)v224 + i);
                      *((_QWORD *)&v106[2].Name.Length + i) = v108;
                    }
                    ObjectNameInformation = v106 + 10;
                    v215 = v106 + 10;
                  }
                  else
                  {
                    v82 = -1073741820;
                    j = -1073741820;
                  }
                }
              }
              if ( !v100 )
                v100 = *(_DWORD *)(v86 + 4);
              v184 = --v100;
              v200 = ++v101;
            }
            if ( ReturnLength )
              *ReturnLength = (_DWORD)ObjectNameInformation - v6;
            if ( v166 )
              KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v86 + 16));
            ExDereferenceHandleDebugInfo(v190, v86);
          }
          else
          {
            v82 = -1073741811;
          }
          ExReleaseRundownProtection_0(v83 + 61);
        }
        else
        {
          v82 = -1073741558;
        }
        goto LABEL_461;
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
        v112 = result;
        j = result;
        if ( result < 0 )
          return result;
        v116 = (*((_DWORD *)Object + 125) >> 27) & 7;
        if ( ProcessInformationClass == ProcessIoPriority )
        {
          *(_DWORD *)v6 = v116;
        }
        else
        {
          v117 = *((_QWORD *)Object + 84);
          if ( v117 )
          {
            v118 = *(_DWORD *)(v117 + 1084);
            if ( v116 >= v118 )
              v116 = v118;
          }
          *(_DWORD *)v6 = v116;
          v112 = j;
        }
        if ( ReturnLength )
          *ReturnLength = 4;
        goto LABEL_488;
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
        ExecuteOptions = KeGetExecuteOptions(Process, &v185, CurrentThread, v13);
        if ( ProcessHandle != (HANDLE)-1LL )
          ObfDereferenceObjectWithTag(v65, 0x79517350u);
        if ( ExecuteOptions >= 0 )
        {
          *(_DWORD *)v6 = v185;
          if ( ReturnLength )
            *ReturnLength = 4;
        }
        return ExecuteOptions;
      case ProcessCookie:
        v183 = 0LL;
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        if ( ProcessHandle == (HANDLE)-1LL )
        {
          p_LockNV = &KeGetCurrentThread()->ApcState.Process->Header.LockNV;
          Object = p_LockNV;
        }
        else
        {
          v210 = 0LL;
          result = ObReferenceObjectByHandle(
                     ProcessHandle,
                     0x20u,
                     (POBJECT_TYPE)PsProcessType,
                     PreviousMode,
                     &v210,
                     0LL);
          p_LockNV = v210;
          Object = v210;
          if ( result < 0 )
            return result;
        }
        for ( j = 0; ; LODWORD(Count) = j )
        {
          v71 = p_LockNV[174];
          if ( v71 )
            break;
          KeQuerySystemTimePrecise(&v183);
          CurrentPrcb = KeGetCurrentPrcb();
          LowPart = KeQueryPerformanceCounter(0LL).LowPart;
          v136 = ExGenRandom(1);
          v137 = __rdtsc();
          _InterlockedCompareExchange(
            (volatile signed __int32 *)Object + 174,
            v137 ^ v136 ^ CurrentPrcb->MmPageFaultCount ^ LowPart ^ v183 ^ HIDWORD(v183) ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
            0);
          p_LockNV = Object;
        }
        *(_DWORD *)v6 = v71;
        if ( ReturnLength )
          *ReturnLength = 4;
        if ( ProcessHandle != (HANDLE)-1LL )
          ObfDereferenceObject(p_LockNV);
        return Count;
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
        DeviceMapInformation = result;
        if ( result < 0 )
          return result;
        v40 = (struct _EX_RUNDOWN_REF *)Object;
        if ( Object == v181->Process )
        {
          Count = *((_QWORD *)Object + 85);
          if ( !Count )
            result = -1073741558;
          DeviceMapInformation = result;
          v41 = 0;
        }
        else
        {
          v41 = 1;
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
          {
            Count = v40[85].Count;
            if ( Count )
              PsReferenceSiloContext(v40[85].Ptr);
            else
              DeviceMapInformation = -1073741811;
            ExReleaseRundownProtection_0(v40 + 61);
          }
          else
          {
            DeviceMapInformation = -1073741558;
          }
        }
        ObfDereferenceObjectWithTag(v40, 0x79517350u);
        if ( DeviceMapInformation >= 0 )
        {
          DeviceMapInformation = MmGetSectionInformation(Count, 1, v6);
          if ( v41 )
            ObfDereferenceObject((PVOID)Count);
          if ( DeviceMapInformation >= 0 && ReturnLength )
            *ReturnLength = 64;
        }
        return DeviceMapInformation;
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
        v20 = (struct _EX_RUNDOWN_REF *)Object;
        *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess(Object, &v208);
        *(_QWORD *)(v6 + 8) = v208;
        if ( ReturnLength )
          *ReturnLength = 16;
        goto LABEL_73;
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
        v112 = result;
        j = result;
        if ( result < 0 )
          return result;
        v113 = (*((_DWORD *)Object + 124) >> 12) & 7;
        if ( ProcessInformationClass == ProcessPagePriority )
        {
          *(_DWORD *)v6 = v113;
        }
        else
        {
          v114 = *((_QWORD *)Object + 84);
          if ( v114 )
          {
            v115 = *(_DWORD *)(v114 + 1092);
            if ( v113 >= v115 )
              v113 = v115;
          }
          *(_DWORD *)v6 = v113;
          v112 = j;
        }
        if ( ReturnLength )
          *ReturnLength = 4;
LABEL_488:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v112;
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
        v35 = (struct _EX_RUNDOWN_REF *)Object;
        v36 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 102);
        FileObject = v36;
        if ( v36 )
        {
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
          {
            PsReferenceSiloContext(v36);
            ExReleaseRundownProtection_0(v35 + 61);
          }
          else
          {
            DeviceMapInformation = -1073741558;
          }
        }
        else
        {
          DeviceMapInformation = PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)Object, (__int64 *)&FileObject);
          v36 = FileObject;
        }
        ObfDereferenceObjectWithTag(v35, 0x79517350u);
        if ( DeviceMapInformation < 0 )
          return DeviceMapInformation;
        ExecuteOptions = IoQueryFileDosDeviceName(v36, &ObjectNameInformation);
        ObfDereferenceObject(v36);
        if ( ExecuteOptions >= 0 )
        {
          v38 = ObjectNameInformation;
          v39 = ObjectNameInformation->Name.MaximumLength + 16;
          if ( v39 > (unsigned int)v5 )
          {
            ExecuteOptions = -1073741820;
            j = -1073741820;
          }
          else
          {
            *(_WORD *)v6 = ObjectNameInformation->Name.Length;
            *(_WORD *)(v6 + 2) = v38->Name.MaximumLength;
            if ( v38->Name.MaximumLength )
            {
              Count = v6 + 16;
              memmove((void *)(v6 + 16), v38->Name.Buffer, v38->Name.MaximumLength);
            }
            *(_QWORD *)(v6 + 8) = Count;
          }
          if ( ReturnLength )
            *ReturnLength = v39;
          ExFreePoolWithTag(v38, 0);
        }
        return ExecuteOptions;
      case ProcessImageFileMapping:
        P = 0LL;
        if ( (_DWORD)v5 != 8 )
          return -1073741820;
        v143 = *(_QWORD *)v6;
        v216 = *(_QWORD *)v6;
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
        ExecuteOptions = ObpReferenceObjectByHandleWithTag(
                           v143,
                           1048608,
                           (__int64)IoFileObjectType,
                           v165,
                           0x79517350u,
                           &FileObject,
                           0LL,
                           0LL);
        v59 = Object;
        if ( ExecuteOptions < 0 )
          goto LABEL_302;
        ProcessHandleInformation = PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)Object, (__int64 *)&P);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v142 = FileObject;
        if ( ProcessHandleInformation < 0 )
          goto LABEL_606;
        SectionObjectPointer = FileObject->SectionObjectPointer;
        v145 = P;
        v146 = (SECTION_OBJECT_POINTERS *)*((_QWORD *)P + 5);
        v147 = 0;
        if ( SectionObjectPointer != v146 )
          v147 = -1073741823;
        ObfDereferenceObject(FileObject);
        ObfDereferenceObject(v145);
        result = v147;
        if ( SectionObjectPointer == v146 && ReturnLength )
          *ReturnLength = 0;
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
        v179 = *((_DWORD *)Object + 124);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( (v179 & 0x80000) != 0 )
          LODWORD(Count) = 1;
        if ( (v179 & 0x40000) != 0 )
          LODWORD(Count) = Count | 2;
        *(_DWORD *)v6 = Count;
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
        v179 = *((_DWORD *)Object + 125);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( (v179 & 0x200000) != 0 )
          LODWORD(Count) = 1;
        *(_DWORD *)v6 = Count;
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
        if ( result < 0 )
          return result;
        v69 = Object;
        v225 = *KeQueryGroupMaskProcess(&v187, (__int64)Object);
        do
        {
          FirstSetRightGroupMask = KeFindFirstSetRightGroupMask((__int64 *)&v225);
          v202 = FirstSetRightGroupMask;
          LODWORD(Count) = Count + 2;
          v173 = Count;
          if ( (unsigned int)Count <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = FirstSetRightGroupMask;
            v6 += 2LL;
            v218 = v6;
          }
          KeClearBitGroupMask((signed __int64 *)&v225, FirstSetRightGroupMask);
          v180.m128i_i64[0] = 32LL;
          v180.m128i_i64[1] = (__int64)&v225;
        }
        while ( RtlNumberOfSetBitsEx(v180.m128i_i64) );
        *ReturnLength = Count;
        ExecuteOptions = (unsigned int)v5 < (unsigned int)Count ? 0xC0000023 : 0;
        j = ExecuteOptions;
        goto LABEL_646;
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
        v80 = *((_QWORD *)Object + 91);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)v6 = v80;
        if ( ReturnLength )
          *ReturnLength = 8;
        return 0;
      case ProcessWindowInformation:
        v182 = 0;
        v180 = 0LL;
        v212[0] = 0LL;
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
        j = result;
        if ( result < 0 )
          return result;
        v20 = (struct _EX_RUNDOWN_REF *)Object;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
        {
          KiStackAttachProcess((_KPROCESS *)v20, 0, (__int64)v229);
          v72 = 0LL;
          v73 = (__int64 *)v20[98].Count;
          if ( v73 )
            v72 = *v73;
          if ( v72 )
          {
            v178 = (PVOID)*(unsigned int *)(v72 + 16);
            v182 = *((_DWORD *)v178 + 26);
            RtlCopyVolatileMemory(&P, (char *)v178 + 112, 8uLL);
            v76 = (unsigned __int16)P;
            v180.m128i_i32[0] = (int)P;
            v180.m128i_i64[1] = HIDWORD(P);
          }
          else
          {
            v178 = *(PVOID *)(v20[92].Count + 32);
            v74 = (__int64)v178 + 164;
            if ( (unsigned __int64)v178 + 164 >= 0x7FFFFFFF0000LL )
              v74 = 0x7FFFFFFF0000LL;
            v182 = *(_DWORD *)v74;
            v187 = 0LL;
            v75 = (__int64)v178 + 176;
            if ( (unsigned __int64)v178 + 176 >= 0x7FFFFFFF0000LL )
              v75 = 0x7FFFFFFF0000LL;
            v187.m128i_i32[0] = *(_DWORD *)v75;
            v187.m128i_i64[1] = *(_QWORD *)(v75 + 8);
            v180 = v187;
            v76 = _mm_cvtsi128_si32(v187);
          }
          DeviceMapInformation = j;
          KiUnstackDetachProcess((__int64)v229, 0LL);
          if ( DeviceMapInformation < 0 )
            goto LABEL_352;
          v77 = v76 + 6;
          if ( ReturnLength )
            *ReturnLength = v77;
          if ( (unsigned int)v5 < v77 )
          {
            DeviceMapInformation = -1073741820;
            j = -1073741820;
          }
          else
          {
            *(_DWORD *)v6 = v182;
            *(_WORD *)(v6 + 4) = v76;
          }
          if ( DeviceMapInformation >= 0 && v76 )
          {
            v20 = (struct _EX_RUNDOWN_REF *)Object;
            DeviceMapInformation = MiCopyVirtualMemory(
                                     (__int64)Object,
                                     (char *)v180.m128i_i64[1],
                                     (__int64)KeGetCurrentThread()->ApcState.Process,
                                     (void *)(v6 + 6),
                                     v180.m128i_u16[0],
                                     1,
                                     v212,
                                     0);
            ExReleaseRundownProtection_0(v20 + 61);
          }
          else
          {
LABEL_352:
            v20 = (struct _EX_RUNDOWN_REF *)Object;
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 61);
          }
        }
        else
        {
          DeviceMapInformation = -1073741558;
        }
LABEL_73:
        ObfDereferenceObjectWithTag(v20, 0x79517350u);
        return DeviceMapInformation;
      case ProcessHandleInformation:
        if ( (unsigned int)v5 < 0x10 )
        {
          if ( ReturnLength )
            *ReturnLength = 16;
          return -1073741820;
        }
        v178 = 0LL;
        result = ObReferenceObjectByHandle(ProcessHandle, 0x400u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v178, 0LL);
        if ( result >= 0 )
        {
          v87 = (__int64)v181;
          --v181->KernelApcDisable;
          v88 = (struct _EX_RUNDOWN_REF *)v178;
          v89 = (unsigned int *)ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v178);
          if ( v89 )
          {
            ProcessHandleInformation = ExQueryProcessHandleInformation(v89, (_QWORD *)v6, v5, (int *)ReturnLength);
            ExReleaseRundownProtection_0(v88 + 61);
          }
          else
          {
            ProcessHandleInformation = -1073741558;
          }
          KiLeaveCriticalRegionUnsafe(v87, v90, v91, v92);
          v142 = (PFILE_OBJECT)v88;
LABEL_606:
          ObfDereferenceObject(v142);
          return ProcessHandleInformation;
        }
        return result;
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
        DeviceMapInformation = result;
        j = result;
        if ( result < 0 )
          return result;
        v31 = (struct _EX_RUNDOWN_REF *)Object;
        v151 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        if ( !v151 )
          goto LABEL_781;
        LOBYTE(Count) = (*(_BYTE *)(v151 + 44) & 2) != 0;
        *(_DWORD *)v6 = Count;
        goto LABEL_700;
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
        ExecuteOptions = result;
        if ( result < 0 )
          return result;
        v59 = Object;
        *(_DWORD *)v6 = *((_DWORD *)Object + 459) & 0x7FFFFFFF;
        *(_DWORD *)(v6 + 4) = v59[467] & 0x7FFFFFFF;
        goto LABEL_302;
      case ProcessHandleTable:
        v178 = 0LL;
        P = 0LL;
        if ( (unsigned int)v5 < 4 )
          return -1073741820;
        result = ExLockUserBuffer(v6, v5, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v178, (struct _MDL **)&P);
        if ( result >= 0 )
        {
          v94 = ObpReferenceObjectByHandleWithTag(
                  (ULONG_PTR)ProcessHandle,
                  1088,
                  (__int64)PsProcessType,
                  v165,
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
            v180 = 0LL;
            v95 = (struct _EX_RUNDOWN_REF *)Object;
            v96 = (unsigned int *)ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
            if ( v96 )
            {
              v180.m128i_i64[0] = (__int64)v178;
              v180.m128i_i64[1] = (unsigned int)v5 >> 2;
              ExEnumHandleTable(
                v96,
                (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PspHandleTableWalker,
                (__int64)&v180,
                0LL);
              ExReleaseRundownProtection_0(v95 + 61);
            }
            else
            {
              LODWORD(Count) = -1073741558;
            }
            ObfDereferenceObjectWithTag(v95, 0x79517350u);
            if ( ReturnLength )
              *ReturnLength = 4 * v180.m128i_i32[3];
            ExUnlockUserBuffer((struct _MDL *)P);
            return Count;
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
        ExecuteOptions = result;
        if ( result < 0 )
          return result;
        v59 = Object;
        *(_DWORD *)v6 = (*((_DWORD *)Object + 34) >> 5) & 1;
        goto LABEL_302;
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
        v31 = (struct _EX_RUNDOWN_REF *)Object;
        ProcessCommandLine = PsQueryProcessCommandLine((PRKPROCESS)Object, v6, v5, v165, ReturnLength);
        goto LABEL_377;
      case ProcessProtectionInformation:
        ExecuteOptions = ObpReferenceObjectByHandleWithTag(
                           (ULONG_PTR)ProcessHandle,
                           4096,
                           (__int64)PsProcessType,
                           PreviousMode,
                           0x79517350u,
                           &Object,
                           0LL,
                           0LL);
        if ( ExecuteOptions < 0 )
          return ExecuteOptions;
        if ( !(_DWORD)v5 )
          goto LABEL_299;
        v59 = Object;
        *(_BYTE *)v6 = *((_BYTE *)Object + 1530);
        if ( ReturnLength )
          *ReturnLength = 1;
        ExecuteOptions = 0;
        goto LABEL_301;
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
        v31 = (struct _EX_RUNDOWN_REF *)Object;
        ProcessCommandLine = EtwQueryProcessTelemetryInfo(
                               (__int64)Object,
                               (char *)v6,
                               (unsigned int)v5,
                               v165,
                               ReturnLength);
LABEL_377:
        DeviceMapInformation = ProcessCommandLine;
        if ( !v31 )
          return DeviceMapInformation;
        goto LABEL_701;
      case ProcessCommitReleaseInformation:
        LODWORD(P) = 0;
        if ( (_DWORD)v5 == 32 )
        {
          v187 = *(__m128i *)v6;
          v188 = *(_OWORD *)(v6 + 16);
          if ( v187.m128i_i32[0] == 3 )
          {
            if ( v187.m128i_i32[1] >= 8u || v187.m128i_i64[1] )
            {
              ExecuteOptions = -1073741811;
            }
            else
            {
              ExecuteOptions = ObpReferenceObjectByHandleWithTag(
                                 (ULONG_PTR)ProcessHandle,
                                 4096,
                                 (__int64)PsProcessType,
                                 PreviousMode,
                                 0x79517350u,
                                 &Object,
                                 0LL,
                                 0LL);
              if ( ExecuteOptions >= 0 )
              {
                MmQueryCommitReleaseState((__int64)Object, &P, &v187.m128i_i64[1], &v188, (_QWORD *)&v188 + 1);
                v187.m128i_i32[1] = (unsigned __int8)P & 1 | v187.m128i_i32[1] & 0xFFFFFFFE;
                v187.m128i_i64[1] <<= 12;
                *(_QWORD *)&v188 = (_QWORD)v188 << 12;
                *((_QWORD *)&v188 + 1) <<= 12;
                *(__m128i *)v6 = v187;
                *(_OWORD *)(v6 + 16) = v188;
                ExecuteOptions = 0;
              }
            }
          }
          else
          {
            ExecuteOptions = -1073741735;
          }
        }
        else
        {
LABEL_299:
          ExecuteOptions = -1073741820;
        }
        v59 = Object;
LABEL_301:
        if ( v59 )
          goto LABEL_302;
        return ExecuteOptions;
      case ProcessDefaultCpuSetsInformation:
      case ProcessAllowedCpuSetsInformation:
        if ( (v5 & 7) != 0 || (unsigned int)v5 > 0x100 )
          return -1073741820;
        v155 = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
        j = v155;
        if ( v155 >= 0 )
        {
          LOBYTE(Count) = ProcessInformationClass == ProcessAllowedCpuSetsInformation;
          v156 = 8 * KeQueryCpuSetsProcess((__int64)Object, (__int64)v240, 0x20u, Count);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          v206 = v156;
          if ( ReturnLength )
            *ReturnLength = v156;
          if ( v156 >= (unsigned int)v5 )
            v156 = v5;
          v206 = v156;
          memmove((void *)v6, v240, v156);
        }
        return v155;
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
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v229);
          ZwQueryInformationJobObject(0LL, JobObjectMemoryUsageInformation, &JobObjectInformation, 0x28u, 0LL);
          ZwQueryInformationJobObject(0LL, JobObjectExtendedLimitInformation, v234, 0x98u, 0LL);
          KiUnstackDetachProcess((__int64)v229, 0LL);
          *(_OWORD *)&Src.m256i_u64[1] = JobObjectInformation;
          Src.m256i_i64[0] = v231;
          v109 = v192;
          if ( (v235 & 0x200000) != 0 )
            v109 = v237;
          *(_QWORD *)&v192 = v109;
          v110 = Src.m256i_i64[3];
          if ( (v235 & 0x200) != 0 )
            v110 = v236;
          Src.m256i_i64[3] = v110;
          *(__m256i *)v6 = Src;
          *(_QWORD *)(v6 + 32) = v192;
          if ( ReturnLength )
            *ReturnLength = 40;
        }
        else
        {
          LODWORD(Count) = -1073741394;
        }
        goto LABEL_472;
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
        ExecuteOptions = result;
        if ( result < 0 )
          return result;
        v59 = Object;
        *(_BYTE *)v6 = *((int *)Object + 124) < 0;
        goto LABEL_302;
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
        DeviceMapInformation = result;
        j = result;
        if ( result < 0 )
          return result;
        v31 = (struct _EX_RUNDOWN_REF *)Object;
        v154 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        if ( v154 )
        {
          LOBYTE(Count) = (*(_BYTE *)(v154 + 44) & 0x10) != 0;
          *(_DWORD *)v6 = Count;
LABEL_700:
          ExReleaseRundownProtection_0(v31 + 61);
        }
        else
        {
LABEL_781:
          DeviceMapInformation = -1073741558;
        }
        goto LABEL_701;
      case ProcessIumChallengeResponse:
        return PsIumGetOnDemandDebugChallenge(ProcessHandle, v6, (unsigned int)v5, ReturnLength);
      case ProcessChildProcessInformation:
        if ( (_DWORD)v5 != 3 )
          return -1073741820;
        if ( ProcessHandle == (HANDLE)-1LL )
        {
          v97 = KeGetCurrentThread()->ApcState.Process;
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
        }
        v98 = PspGetNoChildProcessRestrictedPolicy(v97);
        *(_WORD *)v6 = 0;
        *(_BYTE *)(v6 + 2) = 0;
        if ( v98 == 2 )
        {
          *(_BYTE *)(v6 + 1) = 1;
        }
        else
        {
          v99 = v98 - 1;
          if ( v99 )
          {
            if ( v99 == 2 )
              *(_BYTE *)(v6 + 2) = 1;
LABEL_421:
            if ( ReturnLength )
              *ReturnLength = 3;
            if ( ProcessHandle == (HANDLE)-1LL )
              return Count;
            goto LABEL_571;
          }
        }
        *(_BYTE *)v6 = 1;
        goto LABEL_421;
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
        ExecuteOptions = result;
        if ( result < 0 )
          return result;
        v59 = Object;
        *(_BYTE *)v6 = (*((_DWORD *)Object + 383) & 0x200) != 0;
        goto LABEL_302;
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
        ExecuteOptions = result;
        if ( result < 0 )
          return result;
        v59 = Object;
        if ( *((_QWORD *)Object + 200) )
          LODWORD(Count) = qword_140F053D0;
        *(_DWORD *)v6 = Count;
        if ( ReturnLength )
          *ReturnLength = 4;
        goto LABEL_302;
      case ProcessEnergyValues:
        memset_0(v239, 0, 0x1B8uLL);
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   4096,
                   (__int64)PsProcessType,
                   v165,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        ExecuteOptions = result;
        j = result;
        if ( result < 0 )
          return result;
        v69 = Object;
        PsQueryProcessEnergyValues((signed __int64 *)Object, v239);
        v150 = 432LL;
        if ( (unsigned int)v5 <= 0x1B0 )
          v150 = (unsigned int)v5;
        memmove((void *)v6, v239, v150);
        if ( ReturnLength )
          *ReturnLength = 432;
        goto LABEL_646;
      case ProcessPowerThrottlingState:
        v226 = 0LL;
        v227 = 0;
        if ( (_DWORD)v5 != 12 )
          return -1073741820;
        if ( !ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost) )
          return -1073741822;
        v66 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)ProcessHandle,
                4096,
                (__int64)PsProcessType,
                v165,
                0x79517350u,
                &Object,
                0LL,
                0LL);
        if ( v66 < 0 )
        {
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
          return v66;
        }
        else
        {
          v67 = Object;
          v68 = guard_dispatch_icall_no_overrides(Object);
          j = v68;
          if ( v68 >= 0 )
          {
            *(_QWORD *)v6 = v226;
            *(_DWORD *)(v6 + 8) = v227;
            if ( ReturnLength )
              *ReturnLength = 12;
            v68 = 0;
            j = 0;
          }
          ObfDereferenceObjectWithTag(v67, 0x79517350u);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
          return v68;
        }
      case ProcessWin32kSyscallFilterInformation:
        if ( (_DWORD)v5 != 8 )
          return -1073741820;
        if ( ProcessHandle == (HANDLE)-1LL )
        {
          v119 = &KeGetCurrentThread()->ApcState.Process->Header.LockNV;
          Object = v119;
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
          v119 = Object;
          LODWORD(v13) = 1;
        }
        *(_DWORD *)v6 = 0;
        v120 = 0;
        if ( (v119[468] & 0x4000) != 0 )
        {
          *(_DWORD *)v6 = v13;
          v120 = v13;
        }
        if ( (v119[468] & 0x8000) != 0 )
          *(_DWORD *)v6 = v120 | 2;
        *(_DWORD *)(v6 + 4) = v119[442];
        if ( ReturnLength )
          *ReturnLength = 8;
        if ( ProcessHandle == (HANDLE)-1LL )
          return Count;
        ObfDereferenceObjectWithTag(v119, 0x79517350u);
        return 0;
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
        if ( result >= 0 )
        {
          v31 = (struct _EX_RUNDOWN_REF *)Object;
          DeviceMapInformation = PspAllocateAndQueryProcessNotificationChannel((__int64)v181, (__int64)Object, v6);
          if ( DeviceMapInformation >= 0 && ReturnLength )
          {
            *ReturnLength = 48;
            ObfDereferenceObjectWithTag(v31, 0x79517350u);
            return DeviceMapInformation;
          }
          else
          {
LABEL_701:
            ObfDereferenceObjectWithTag(v31, 0x79517350u);
            return DeviceMapInformation;
          }
        }
        return result;
      case ProcessEnergyTrackingState:
        memset_0(v238, 0, sizeof(v238));
        if ( (unsigned int)v5 < 8 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   4096,
                   (__int64)PsProcessType,
                   v165,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        j = result;
        if ( result < 0 )
          return result;
        v97 = Object;
        PoQueryProcessEnergyTrackingState(Object, v238);
        if ( (unsigned int)v5 >= 0x90 )
          LODWORD(v5) = 144;
        memmove((void *)v6, v238, (unsigned int)v5);
        if ( ReturnLength )
          *ReturnLength = v5;
        j = 0;
        goto LABEL_571;
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
        v69 = Object;
        if ( *((_QWORD *)Object + 46) )
        {
          ExecuteOptions = VslLiveDumpCaptureProcess(Object);
LABEL_646:
          ObfDereferenceObjectWithTag(v69, 0x79517350u);
          return ExecuteOptions;
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
LABEL_546:
        ExecuteOptions = ProcessTelemetryCoverage;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return ExecuteOptions;
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
        v78 = result;
        if ( result >= 0 )
        {
          v79 = Object;
          *(_BYTE *)v6 = HIBYTE(*((_DWORD *)Object + 124)) & 3;
          if ( ProcessInformationClass == ProcessEnableLogging )
            *(_DWORD *)v6 |= (v79[383] & 0x80000 | v79[383] & 0x100000 | ((v79[383] & 0x10000000 | (v79[383] >> 2) & 0x8000000u) >> 6)) >> 17;
          ObfDereferenceObjectWithTag(v79, 0x79517350u);
          return v78;
        }
        return result;
      case ProcessUptimeInformation:
        v213 = 0LL;
        v214 = 0LL;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   4096,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        j = result;
        if ( result < 0 )
          return result;
        v97 = Object;
        PspLockProcessShared((__int64)Object, (__int64)v181);
        v130 = *((_QWORD *)v97 + 212) >> 61;
        if ( v130 == 4 || v130 == 3 )
        {
          v131 = *((_QWORD *)v97 + 212) & 0x1FFFFFFFFFFFFFFFLL;
          *(_QWORD *)&v192 = v131;
          Src.m256i_i64[2] = *((_QWORD *)v97 + 211);
          v132 = Src.m256i_i64[2] - *((_QWORD *)v97 + 208);
          Src.m256i_i64[3] = v132;
          if ( v130 == 3 )
          {
            v133 = v193 | 0x200;
LABEL_562:
            LODWORD(v193) = v133 & 0xFFFFFE00 | *((_BYTE *)v97 + 1531) & 7 | (unsigned __int8)(2
                                                                                             * (*((_BYTE *)v97 + 1531) & 0x38)) | ((*((_DWORD *)v97 + 383) & 4) << 6);
            PspUnlockProcessShared((__int64)v97, (__int64)v181);
            PsGetProcessDeepFreezeStats((__int64)v97, &v213);
            *(_OWORD *)Src.m256i_i8 = v213;
            *((_QWORD *)&v192 + 1) = v214;
            if ( !v132 )
              Src.m256i_i64[3] = v213 - *((_QWORD *)v97 + 208);
            if ( !v131 )
              *(_QWORD *)&v192 = *((_QWORD *)&v213 + 1) - *((_QWORD *)v97 + 209) - v214;
            if ( (unsigned int)v5 >= 0x38 )
              LODWORD(v5) = 56;
            memmove((void *)v6, &Src, (unsigned int)v5);
            if ( ReturnLength )
              *ReturnLength = v5;
            j = 0;
LABEL_571:
            ObfDereferenceObjectWithTag(v97, 0x79517350u);
            return 0;
          }
        }
        else
        {
          v131 = v192;
          v132 = Src.m256i_i64[3];
        }
        v133 = v193;
        goto LABEL_562;
      case ProcessImageSection:
        v190 = 0LL;
        if ( (_DWORD)v5 != 8 )
          return -1073741820;
        if ( PreviousMode )
        {
          if ( v6 < 0x7FFFFFFF0000LL )
            v16 = v6;
          *(_QWORD *)v16 = *(_QWORD *)v16;
        }
        v157 = (PVOID *)KeGetCurrentThread()->ApcState.Process;
        Object = v157;
        if ( ProcessHandle != (HANDLE)-1LL || v157 != (PVOID *)CurrentThread->Process )
          return -1073741790;
        result = ObOpenObjectByPointer(v157[85], 0, 0LL, 5u, MmSectionObjectType, PreviousMode, &v190);
        j = result;
        if ( result >= 0 )
        {
          *(_QWORD *)v6 = v190;
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
        ExecuteOptions = result;
        if ( result < 0 )
          return result;
        v59 = Object;
        *(_QWORD *)v6 = *((_QWORD *)Object + 207);
        if ( ReturnLength )
          *ReturnLength = 8;
LABEL_302:
        ObfDereferenceObjectWithTag(v59, 0x79517350u);
        return ExecuteOptions;
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
        j = result;
        if ( result < 0 )
          return result;
        if ( (*((_DWORD *)Object + 124) & 0x8000) != 0 )
        {
          _InterlockedOr(v162, 0);
          *(_QWORD *)v6 = *((_QWORD *)Object + 236);
          if ( ReturnLength )
            *ReturnLength = 8;
          j = 0;
LABEL_472:
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return Count;
        }
        else
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741700;
        }
      case ProcessLeapSecondInformation:
        if ( (_DWORD)v5 != 8 )
        {
          if ( ReturnLength )
            *ReturnLength = 8;
          return -1073741820;
        }
        if ( ProcessHandle != (HANDLE)-1LL )
          return -1073741811;
        v158 = KeGetCurrentThread()->ApcState.Process;
        Object = v158;
        j = 0;
        Blink = v158[1].ProcessListEntry.Blink;
        if ( !Blink )
          goto LABEL_794;
        v160 = 0LL;
        ReadyTime = (__int64 *)v158[1].ReadyTime;
        if ( ReadyTime )
          v160 = *ReadyTime;
        if ( v160 )
        {
          if ( (*(_DWORD *)(v160 + 1140) & 1) == 0 )
            goto LABEL_794;
        }
        else if ( ((__int64)Blink[124].Flink & 1) == 0 )
        {
          goto LABEL_794;
        }
        Src.m256i_i32[0] |= 1u;
LABEL_794:
        *(_QWORD *)v6 = Src.m256i_i64[0];
        if ( ReturnLength )
          *ReturnLength = 8;
        return Count;
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
        ExecuteOptions = result;
        if ( result < 0 )
          return result;
        *(_OWORD *)Src.m256i_i8 = *(_OWORD *)*((_QWORD *)Object + 254);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_OWORD *)v6 = *(_OWORD *)Src.m256i_i8;
        if ( ReturnLength )
          *ReturnLength = 16;
        return ExecuteOptions;
      case ProcessFindFirstThreadByTebValue:
        v228 = 0LL;
        if ( (_DWORD)v5 != 16 )
          return -1073741820;
        if ( ProcessHandle != (HANDLE)-1LL )
          return -1073741811;
        if ( PreviousMode )
        {
          RtlCopyVolatileMemory(&v228, (const void *)v6, 0x10uLL);
          if ( (v6 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v6 < 0x7FFFFFFF0000LL )
            v16 = v6;
          *(_DWORD *)v16 = *(_DWORD *)v16;
          v121 = &v228;
        }
        else
        {
          v121 = (__int128 *)v6;
        }
        FirstThreadByTebValue = PspFindFirstThreadByTebValue((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
        v123 = FirstThreadByTebValue;
        if ( FirstThreadByTebValue == -1073741275 )
        {
          *(_DWORD *)v121 = 0;
          v123 = 0;
        }
        else if ( FirstThreadByTebValue < 0 )
        {
          return v123;
        }
        if ( v165 )
        {
          *(_DWORD *)v6 = *(_DWORD *)v121;
          if ( ReturnLength )
            *ReturnLength = 4;
        }
        else if ( ReturnLength )
        {
          *ReturnLength = 4;
        }
        return v123;
      default:
        return -1073741821;
    }
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
  if ( result >= 0 )
  {
    if ( (unsigned int)v5 < 0x10 )
    {
      v6 = (unsigned __int64)&v217;
      v30 = 0;
    }
    else
    {
      Count = v6 + 16;
      v30 = v5 - 16;
    }
    v173 = v30;
    DeviceMapInformation = PsQueryFullProcessImageName(Object, v6, Count, &v173);
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    if ( DeviceMapInformation >= 0 && !Count )
      DeviceMapInformation = -1073741820;
    if ( ReturnLength && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
      *ReturnLength = v173 + 16;
    return DeviceMapInformation;
  }
  return result;
}
