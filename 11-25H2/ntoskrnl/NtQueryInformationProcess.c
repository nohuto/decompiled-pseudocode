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

int __fastcall NtQueryInformationProcess(
        ULONG_PTR BugCheckParameter1,
        int a2,
        void *a3,
        unsigned int a4,
        unsigned int *a5)
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
  int result; // eax
  int DeviceMapInformation; // edi
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
  signed int ExecuteOptions; // ebx
  POBJECT_NAME_INFORMATION v38; // rdi
  unsigned int v39; // r12d
  struct _EX_RUNDOWN_REF *v40; // rbx
  char v41; // r12
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // edi
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
  int v66; // edi
  PVOID v67; // rdi
  int v68; // ebx
  PVOID v69; // rdi
  _DWORD *p_LockNV; // rcx
  int v71; // eax
  __int64 v72; // rax
  __int64 *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rcx
  unsigned __int16 v76; // r12
  unsigned int v77; // eax
  int v78; // edi
  _DWORD *v79; // r8
  __int64 v80; // rbx
  int ProcessCommandLine; // eax
  int v82; // edi
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
  int ProcessHandleInformation; // edi
  int v94; // ebx
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
  int v112; // edi
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
  int v123; // ecx
  int RedirectionTrustPolicy; // eax
  int v125; // eax
  int v126; // eax
  int ProcessHandleCount; // edi
  signed int ProcessTelemetryCoverage; // eax
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
  int v139; // r15d
  HANDLE v140; // rdi
  int v141; // ebx
  PFILE_OBJECT v142; // rcx
  ULONG_PTR v143; // rbx
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rsi
  PVOID v145; // rbx
  SECTION_OBJECT_POINTERS *v146; // rdi
  int v147; // r15d
  unsigned __int64 v148; // rdx
  unsigned __int16 FirstSetRightGroupMask; // dx
  size_t v150; // r8
  unsigned __int64 v151; // rax
  __int64 EffectiveServerSilo; // rax
  __int32 SiloIdentifier; // ebx
  unsigned __int64 v154; // rax
  int v155; // r12d
  unsigned int v156; // ebx
  PVOID *v157; // rcx
  _KPROCESS *v158; // rcx
  struct _LIST_ENTRY *Blink; // r8
  __int64 v160; // rax
  __int64 *ReadyTime; // rdx
  signed __int32 v162[8]; // [rsp+0h] [rbp-A08h] BYREF
  POBJECT_TYPE ObjectType; // [rsp+20h] [rbp-9E8h]
  PVOID Object; // [rsp+40h] [rbp-9C8h] BYREF
  int j; // [rsp+48h] [rbp-9C0h]
  unsigned __int8 v166; // [rsp+4Ch] [rbp-9BCh]
  char v167; // [rsp+4Dh] [rbp-9BBh]
  char v168; // [rsp+4Eh] [rbp-9BAh] BYREF
  char v169; // [rsp+4Fh] [rbp-9B9h] BYREF
  _BYTE v170[8]; // [rsp+50h] [rbp-9B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-9B0h] BYREF
  unsigned __int16 v172; // [rsp+60h] [rbp-9A8h] BYREF
  ULONG_PTR v173; // [rsp+68h] [rbp-9A0h]
  int v174; // [rsp+88h] [rbp-980h] BYREF
  __int64 v175; // [rsp+90h] [rbp-978h]
  __int16 v176; // [rsp+98h] [rbp-970h]
  PFILE_OBJECT FileObject; // [rsp+A0h] [rbp-968h] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+A8h] [rbp-960h] BYREF
  PVOID v179; // [rsp+B0h] [rbp-958h] BYREF
  unsigned int v180; // [rsp+B8h] [rbp-950h]
  __m128i v181; // [rsp+C0h] [rbp-948h] BYREF
  struct _KTHREAD *v182; // [rsp+D0h] [rbp-938h]
  int v183; // [rsp+D8h] [rbp-930h]
  unsigned __int64 v184; // [rsp+E0h] [rbp-928h] BYREF
  unsigned int v185; // [rsp+E8h] [rbp-920h]
  int v186; // [rsp+ECh] [rbp-91Ch] BYREF
  _DWORD v187[4]; // [rsp+F0h] [rbp-918h] BYREF
  __m128i v188; // [rsp+100h] [rbp-908h] BYREF
  __int128 v189; // [rsp+110h] [rbp-8F8h] BYREF
  HANDLE Handle[3]; // [rsp+120h] [rbp-8E8h] BYREF
  HANDLE v191; // [rsp+138h] [rbp-8D0h] BYREF
  __m256i Src; // [rsp+140h] [rbp-8C8h] BYREF
  __int128 v193; // [rsp+160h] [rbp-8A8h] BYREF
  __int64 v194; // [rsp+170h] [rbp-898h]
  __int64 v195; // [rsp+178h] [rbp-890h]
  __int64 v196; // [rsp+180h] [rbp-888h]
  __int64 v197; // [rsp+188h] [rbp-880h]
  __int64 v198; // [rsp+190h] [rbp-878h]
  __int64 v199; // [rsp+198h] [rbp-870h]
  _QWORD v200[2]; // [rsp+1A0h] [rbp-868h] BYREF
  int v201; // [rsp+1B0h] [rbp-858h]
  _DWORD v202[2]; // [rsp+1B4h] [rbp-854h] BYREF
  int v203; // [rsp+1BCh] [rbp-84Ch]
  __int64 v204; // [rsp+1C0h] [rbp-848h] BYREF
  unsigned __int64 v205; // [rsp+1C8h] [rbp-840h] BYREF
  unsigned int v206; // [rsp+1D0h] [rbp-838h]
  unsigned int v207; // [rsp+1D8h] [rbp-830h]
  int v208; // [rsp+1DCh] [rbp-82Ch]
  __int64 v209; // [rsp+1E0h] [rbp-828h] BYREF
  __int64 v210; // [rsp+1E8h] [rbp-820h] BYREF
  PVOID v211; // [rsp+1F0h] [rbp-818h] BYREF
  int v212; // [rsp+280h] [rbp-788h]
  unsigned __int64 v213[3]; // [rsp+2B8h] [rbp-750h] BYREF
  __int128 v214; // [rsp+2D0h] [rbp-738h] BYREF
  __int128 v215; // [rsp+2E0h] [rbp-728h]
  POBJECT_NAME_INFORMATION v216; // [rsp+2F0h] [rbp-718h]
  ULONG_PTR v217; // [rsp+2F8h] [rbp-710h]
  __int128 v218; // [rsp+300h] [rbp-708h] BYREF
  unsigned __int64 v219; // [rsp+310h] [rbp-6F8h]
  _QWORD v220[5]; // [rsp+320h] [rbp-6E8h] BYREF
  __m256i v221; // [rsp+348h] [rbp-6C0h]
  __int128 v222; // [rsp+368h] [rbp-6A0h]
  __int128 v223; // [rsp+390h] [rbp-678h]
  __int128 v224; // [rsp+3A0h] [rbp-668h]
  _OWORD v225[8]; // [rsp+3B0h] [rbp-658h]
  __int128 v226; // [rsp+430h] [rbp-5D8h] BYREF
  __int64 v227; // [rsp+440h] [rbp-5C8h]
  int v228; // [rsp+448h] [rbp-5C0h]
  __int128 v229; // [rsp+450h] [rbp-5B8h] BYREF
  _OWORD v230[3]; // [rsp+460h] [rbp-5A8h] BYREF
  __int128 v231; // [rsp+490h] [rbp-578h]
  __int128 v232; // [rsp+4A0h] [rbp-568h]
  __int64 v233; // [rsp+4B0h] [rbp-558h]
  struct _KAFFINITY_EX v234; // [rsp+4C0h] [rbp-548h] BYREF
  _BYTE v235[16]; // [rsp+5D0h] [rbp-438h] BYREF
  int v236; // [rsp+5E0h] [rbp-428h]
  __int64 v237; // [rsp+648h] [rbp-3C0h]
  __int64 v238; // [rsp+660h] [rbp-3A8h]
  _BYTE v239[144]; // [rsp+670h] [rbp-398h] BYREF
  _OWORD v240[28]; // [rsp+700h] [rbp-308h] BYREF
  _BYTE v241[256]; // [rsp+8C0h] [rbp-148h] BYREF

  v5 = a4;
  v6 = (unsigned __int64)a3;
  v173 = BugCheckParameter1;
  Handle[1] = a3;
  v206 = a4;
  Handle[2] = a5;
  memset(v230, 0, sizeof(v230));
  Count = 0LL;
  v174 = 0;
  Handle[0] = 0LL;
  v186 = 0;
  memset_0(&v234, 0, sizeof(v234));
  FileObject = 0LL;
  v226 = 0LL;
  v202[0] = 0;
  v203 = 0;
  memset_0(v235, 0, 0x98uLL);
  v218 = 0LL;
  v204 = 0LL;
  v231 = 0LL;
  v232 = 0LL;
  v233 = 0LL;
  v205 = 0LL;
  ObjectNameInformation = 0LL;
  v172 = 0;
  v176 = 0;
  Object = 0LL;
  v209 = 0LL;
  v210 = 0LL;
  memset_0(v220, 0, 0x68uLL);
  memset_0(&Src, 0, 0x70uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v166 = PreviousMode;
  v167 = PreviousMode;
  CurrentThread = KeGetCurrentThread();
  v182 = CurrentThread;
  if ( !PreviousMode )
  {
    v13 = 1LL;
    v175 = 3LL;
    v16 = 0x7FFFFFFF0000LL;
    goto LABEL_27;
  }
  if ( a2 == 18 || a2 == 61 )
    goto LABEL_22;
  if ( a2 == 65 )
  {
    v15 = 7LL;
    v13 = 1LL;
    v175 = 3LL;
    goto LABEL_13;
  }
  if ( ((a2 - 70) & 0xFFFFFFFB) == 0 )
    goto LABEL_22;
  if ( a2 == 92 )
  {
    v15 = 7LL;
    v13 = 1LL;
    v175 = 3LL;
    goto LABEL_13;
  }
  if ( a2 != 94 )
  {
    if ( a2 != 87 )
    {
      v13 = 1LL;
      if ( a2 == 47 )
      {
        v15 = 1LL;
        v175 = 3LL;
      }
      else
      {
        v175 = 3LL;
        v14 = 3;
        if ( a2 == 115 )
          v14 = 7;
        v15 = v14;
        CurrentThread = v182;
      }
      goto LABEL_13;
    }
LABEL_22:
    v15 = 0LL;
    v13 = 1LL;
    v175 = 3LL;
    goto LABEL_13;
  }
  v15 = 7LL;
  v13 = 1LL;
  v175 = 3LL;
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
  if ( a5 )
  {
    v17 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v17 = (__int64)a5;
    *(_DWORD *)v17 = *(_DWORD *)v17;
  }
LABEL_27:
  switch ( a2 )
  {
    case 52:
      v187[0] = 0;
      v169 = 0;
      v170[0] = 0;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v27 = *(_DWORD *)v6;
      v208 = *(_DWORD *)v6;
      if ( BugCheckParameter1 == -1LL )
      {
        Object = KeGetCurrentThread()->ApcState.Process;
        v27 = v208;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
              ExQueryHandleExceptionsPermanency(v57, &v169, v170);
              *(_DWORD *)(v6 + 4) = 0;
              if ( v169 )
                *(_DWORD *)(v6 + 4) |= 1u;
              if ( v170[0] )
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
                if ( BugCheckParameter1 != -1LL )
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
            PsQueryProcessSignatureMitigationPolicy(Object, v187, CurrentThread, v13);
            *(_DWORD *)(v6 + 4) = v187[0];
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
    case 106:
      if ( (_DWORD)v5 == 4 )
      {
        Src.m256i_i32[0] = 16;
        *(_DWORD *)v6 = 16;
        if ( a5 )
          *a5 = 4;
        return 0;
      }
      return -1073741820;
    case 1:
      return PspQueryQuotaLimits(BugCheckParameter1, v10, (void *)v6, v5, a5, PreviousMode);
  }
  if ( a2 != 27 )
  {
    switch ( a2 )
    {
      case 0:
        v168 = 0;
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
        v174 = v5;
        v184 = v6;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        if ( (v20[17].Count & 0x1000) != 0 && v20 != (struct _EX_RUNDOWN_REF *)v182->Process )
          goto LABEL_44;
        *(_QWORD *)&v234.Count = 2097153LL;
        memset_0(&v234.8, 0, sizeof(v234.8));
        KeQueryAffinityProcess((__int64)v20, &v234, &v226, 0LL, &v172);
        if ( v20 == (struct _EX_RUNDOWN_REF *)v182->Process )
        {
          if ( !(unsigned int)KeTestBitGroupMask((const signed __int64 *)&v226, v182->UserAffinityPrimaryGroup) )
            goto LABEL_44;
        }
        else
        {
          v22 = v172;
        }
        if ( v22 != 32 )
          v21 = v234.Bitmap[v22];
LABEL_44:
        v23 = ObjectNameInformation;
        if ( ObjectNameInformation )
        {
          PsQueryProcessAttributes((__int64)v20, &v168, 0LL);
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
            LODWORD(v175) = 2;
          if ( v20[98].Count )
          {
            v26 = WORD2(v20[221].Ptr);
            if ( v26 == 332 || v26 == 452 )
              LODWORD(v23[3].Name.Buffer) = v175;
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
          if ( v168 )
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
        if ( a5 )
          *a5 = (unsigned int)FileObject;
        goto LABEL_73;
      case 2:
        if ( (_DWORD)v5 != 48 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        PsQueryStatisticsProcess(Object, v220);
        Src = v221;
        v193 = v222;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(__m256i *)v6 = Src;
        *(_OWORD *)(v6 + 32) = v193;
        if ( a5 )
          *a5 = 48;
        return DeviceMapInformation;
      case 3:
        if ( (_DWORD)v5 != 112 && (_DWORD)v5 != 88 && (_DWORD)v5 != 96 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v230);
        j = MmQueryWorkingSetInformation(&Src.m256i_i64[3], &v193, v200, &v205, &v204, v202);
        KiUnstackDetachProcess((__int64)v230, 0LL);
        v194 = v32[65];
        *((_QWORD *)&v193 + 1) = *((_QWORD *)Object + 67);
        v196 = *((_QWORD *)Object + 64);
        v195 = *((_QWORD *)Object + 66);
        v197 = *((_QWORD *)Object + 123) << 12;
        v198 = *((_QWORD *)Object + 124) << 12;
        v200[1] = *((_QWORD *)Object + 213) << 12;
        v199 = v197;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        result = j;
        if ( j < 0 )
          return result;
        memmove((void *)v6, &Src, v5);
        if ( a5 )
          *a5 = v5;
        return 0;
      case 4:
        if ( (_DWORD)v5 != 32 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
          v48 = PsQueryRuntimeProcess(Object, &v210);
          v49 = (unsigned int)KeMaximumIncrement;
          *(_QWORD *)(v6 + 16) = (unsigned int)KeMaximumIncrement * v48;
          *(_QWORD *)(v6 + 24) = v49 * v210;
          *(_QWORD *)v6 = v47[63];
          *(_QWORD *)(v6 + 8) = v47[184];
          if ( a5 )
            *a5 = 32;
          ObfDereferenceObjectWithTag(v47, 0x79517350u);
          return v46;
        }
        return result;
      case 7:
        if ( (_DWORD)v5 != 8 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        if ( a5 )
          *a5 = 8;
        return 0;
      case 10:
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
      case 12:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        if ( a5 )
          *a5 = 4;
        return 0;
      case 14:
        return PspQueryPooledQuotaLimits(BugCheckParameter1, PreviousMode);
      case 15:
      case 42:
        return PspQueryWorkingSetWatch(BugCheckParameter1, (__int64)a5, PreviousMode);
      case 18:
        if ( (_DWORD)v5 != 2 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   4096,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        HIBYTE(v176) = *((_BYTE *)Object + 839);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_WORD *)v6 = v176;
        if ( a5 )
          *a5 = 2;
        return 0;
      case 19:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                                 BugCheckParameter1,
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
          if ( a5 )
            *a5 = 4;
        }
        return DeviceMapInformation;
      case 20:
        LODWORD(P) = 0;
        if ( (((_DWORD)v5 - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        if ( a5 )
          *a5 = 4;
        return 0;
      case 21:
        if ( (((_DWORD)v5 - 8) & 0xFFFFFFF7) != 0 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
          *(_QWORD *)&v234.Count = 2097153LL;
          memset_0(&v234.8, 0, sizeof(v234.8));
          KeQueryAffinityProcess((__int64)v83, &v234, &v226, 0LL, &v172);
          v148 = v234.Bitmap[v172];
          if ( (_DWORD)v5 == 16 )
            *(_WORD *)(v6 + 8) = v172;
          *(_QWORD *)v6 = v148;
          if ( a5 )
            *a5 = v5;
LABEL_461:
          ObfDereferenceObjectWithTag(v83, 0x79517350u);
          return v82;
        }
      case 22:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                                 BugCheckParameter1,
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
          if ( a5 )
            *a5 = 4;
        }
        return DeviceMapInformation;
      case 23:
        if ( (unsigned int)v5 < 0x24 )
          return -1073741820;
        if ( (_DWORD)v5 == 48 )
        {
          v180 = *(_DWORD *)(v6 + 40);
          v33 = v180;
          if ( (v180 & 0xFFFFFFFE) != 0 )
            return -1073741811;
        }
        else
        {
          if ( (_DWORD)v5 != 36 )
            return -1073741820;
          v33 = 0;
        }
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        if ( DeviceMapInformation >= 0 && a5 )
          *a5 = v5;
        return DeviceMapInformation;
      case 24:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        if ( a5 )
          *a5 = 4;
        return 0;
      case 26:
        if ( (_DWORD)v5 != 8 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        if ( a5 )
          *a5 = 8;
        return 0;
      case 28:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        *(_DWORD *)v6 = 1;
        if ( a5 )
          *a5 = 4;
        return 0;
      case 29:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        if ( a5 )
          *a5 = 4;
        return 0;
      case 30:
        if ( (_DWORD)v5 != 8 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
          v139 = DbgkOpenProcessDebugPort(Object, v166, Handle);
          v140 = Handle[0];
          if ( v139 < 0 )
            v140 = 0LL;
          Handle[0] = v140;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          *(_QWORD *)v6 = v140;
          if ( a5 )
            *a5 = 8;
          return v139;
        }
        return result;
      case 31:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        if ( a5 )
          *a5 = 4;
        goto LABEL_302;
      case 32:
        LODWORD(P) = 0;
        if ( (unsigned int)v5 < 0x10 )
          return -1073741820;
        if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, &P) )
          return -1073741790;
        v205 = (unsigned int)(v5 - 16) / 0xA0uLL;
        ObjectNameInformation = (POBJECT_NAME_INFORMATION)(v6 + 16);
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsProcessType,
                   v166,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v82 = result;
        if ( result < 0 )
          return result;
        v83 = (struct _EX_RUNDOWN_REF *)Object;
        v84 = (void *)ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        v191 = v84;
        if ( v84 )
        {
          v85 = ExReferenceHandleDebugInfo(v84);
          v86 = v85;
          v204 = v85;
          if ( v85 )
          {
            v167 = 0;
            if ( (*(_DWORD *)(v85 + 8) & 3) != 0 )
            {
              ExAcquireFastMutex((PKGUARDED_MUTEX)(v85 + 16));
              v167 = 1;
            }
            *(_DWORD *)(v6 + 8) = 0;
            v100 = *(_DWORD *)(v86 + 72) % *(_DWORD *)(v86 + 4);
            v185 = v100;
            v101 = 0;
            v201 = 0;
            v102 = v205;
            while ( v101 < *(_DWORD *)(v86 + 4) )
            {
              v103 = (_OWORD *)(v86 + 160LL * v100);
              v223 = v103[5];
              v224 = v103[6];
              v225[0] = v103[7];
              v225[1] = v103[8];
              v225[2] = v103[9];
              v225[3] = v103[10];
              v225[4] = v103[11];
              v225[5] = v103[12];
              v225[6] = v103[13];
              v225[7] = v103[14];
              v104 = v224;
              if ( *(_QWORD *)v6 == (_QWORD)v224 || !*(_QWORD *)v6 )
              {
                v105 = DWORD2(v224);
                if ( DWORD2(v224) )
                {
                  ++*(_DWORD *)(v6 + 8);
                  if ( v102 )
                  {
                    v212 = --v102;
                    v106 = ObjectNameInformation;
                    *(_QWORD *)&ObjectNameInformation->Name.Length = v104;
                    *(_OWORD *)&v106->Name.Buffer = v223;
                    LODWORD(v106[1].Name.Buffer) = v105;
                    for ( i = 0; ; ++i )
                    {
                      v202[1] = i;
                      if ( i >= 0x10 )
                        break;
                      if ( (_DWORD)P )
                        v108 = 0LL;
                      else
                        v108 = *((_QWORD *)v225 + i);
                      *((_QWORD *)&v106[2].Name.Length + i) = v108;
                    }
                    ObjectNameInformation = v106 + 10;
                    v216 = v106 + 10;
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
              v185 = --v100;
              v201 = ++v101;
            }
            if ( a5 )
              *a5 = (_DWORD)ObjectNameInformation - v6;
            if ( v167 )
              KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v86 + 16));
            ExDereferenceHandleDebugInfo(v191, v86);
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
      case 33:
      case 110:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        if ( a2 == 33 )
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
        if ( a5 )
          *a5 = 4;
        goto LABEL_488;
      case 34:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        if ( BugCheckParameter1 == -1LL )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
        }
        else
        {
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
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
        ExecuteOptions = KeGetExecuteOptions(Process, &v186, CurrentThread, v13);
        if ( BugCheckParameter1 != -1LL )
          ObfDereferenceObjectWithTag(v65, 0x79517350u);
        if ( ExecuteOptions >= 0 )
        {
          *(_DWORD *)v6 = v186;
          if ( a5 )
            *a5 = 4;
        }
        return ExecuteOptions;
      case 36:
        v184 = 0LL;
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        if ( BugCheckParameter1 == -1LL )
        {
          p_LockNV = &KeGetCurrentThread()->ApcState.Process->Header.LockNV;
          Object = p_LockNV;
        }
        else
        {
          v211 = 0LL;
          result = ObReferenceObjectByHandle(
                     (HANDLE)BugCheckParameter1,
                     0x20u,
                     (POBJECT_TYPE)PsProcessType,
                     PreviousMode,
                     &v211,
                     0LL);
          p_LockNV = v211;
          Object = v211;
          if ( result < 0 )
            return result;
        }
        for ( j = 0; ; LODWORD(Count) = j )
        {
          v71 = p_LockNV[174];
          if ( v71 )
            break;
          KeQuerySystemTimePrecise(&v184);
          CurrentPrcb = KeGetCurrentPrcb();
          LowPart = KeQueryPerformanceCounter(0LL).LowPart;
          v136 = ExGenRandom(1);
          v137 = __rdtsc();
          _InterlockedCompareExchange(
            (volatile signed __int32 *)Object + 174,
            v137 ^ v136 ^ CurrentPrcb->MmPageFaultCount ^ LowPart ^ v184 ^ HIDWORD(v184) ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
            0);
          p_LockNV = Object;
        }
        *(_DWORD *)v6 = v71;
        if ( a5 )
          *a5 = 4;
        if ( BugCheckParameter1 != -1LL )
          ObfDereferenceObject(p_LockNV);
        return Count;
      case 37:
        if ( (_DWORD)v5 != 64 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        if ( Object == v182->Process )
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
          if ( DeviceMapInformation >= 0 && a5 )
            *a5 = 64;
        }
        return DeviceMapInformation;
      case 38:
        if ( (_DWORD)v5 != 16 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess(Object, &v209);
        *(_QWORD *)(v6 + 8) = v209;
        if ( a5 )
          *a5 = 16;
        goto LABEL_73;
      case 39:
      case 111:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        if ( a2 == 39 )
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
        if ( a5 )
          *a5 = 4;
LABEL_488:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v112;
      case 43:
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
          if ( a5 )
            *a5 = v39;
          ExFreePoolWithTag(v38, 0);
        }
        return ExecuteOptions;
      case 44:
        P = 0LL;
        if ( (_DWORD)v5 != 8 )
          return -1073741820;
        v143 = *(_QWORD *)v6;
        v217 = *(_QWORD *)v6;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
                           v166,
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
        if ( SectionObjectPointer == v146 && a5 )
          *a5 = 0;
        return result;
      case 45:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   4096,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v180 = *((_DWORD *)Object + 124);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( (v180 & 0x80000) != 0 )
          LODWORD(Count) = 1;
        if ( (v180 & 0x40000) != 0 )
          LODWORD(Count) = Count | 2;
        *(_DWORD *)v6 = Count;
        if ( a5 )
          *a5 = 4;
        return 0;
      case 46:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   4096,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v180 = *((_DWORD *)Object + 125);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( (v180 & 0x200000) != 0 )
          LODWORD(Count) = 1;
        *(_DWORD *)v6 = Count;
        if ( a5 )
          *a5 = 4;
        return 0;
      case 47:
        if ( !a5 || (v5 & 1) != 0 )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        v226 = *KeQueryGroupMaskProcess(&v188, (__int64)Object);
        do
        {
          FirstSetRightGroupMask = KeFindFirstSetRightGroupMask((__int64 *)&v226);
          v203 = FirstSetRightGroupMask;
          LODWORD(Count) = Count + 2;
          v174 = Count;
          if ( (unsigned int)Count <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = FirstSetRightGroupMask;
            v6 += 2LL;
            v219 = v6;
          }
          KeClearBitGroupMask((signed __int64 *)&v226, FirstSetRightGroupMask);
          v181.m128i_i64[0] = 32LL;
          v181.m128i_i64[1] = (__int64)&v226;
        }
        while ( RtlNumberOfSetBitsEx(v181.m128i_i64) );
        *a5 = Count;
        ExecuteOptions = (unsigned int)v5 < (unsigned int)Count ? 0xC0000023 : 0;
        j = ExecuteOptions;
        goto LABEL_646;
      case 49:
        if ( (_DWORD)v5 != 8 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        if ( a5 )
          *a5 = 8;
        return 0;
      case 50:
        v183 = 0;
        v181 = 0LL;
        v213[0] = 0LL;
        P = 0LL;
        if ( PreviousMode != 1 )
          return -1073741823;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
          KiStackAttachProcess((_KPROCESS *)v20, 0, (__int64)v230);
          v72 = 0LL;
          v73 = (__int64 *)v20[98].Count;
          if ( v73 )
            v72 = *v73;
          if ( v72 )
          {
            v179 = (PVOID)*(unsigned int *)(v72 + 16);
            v183 = *((_DWORD *)v179 + 26);
            RtlCopyVolatileMemory(&P, (char *)v179 + 112, 8uLL);
            v76 = (unsigned __int16)P;
            v181.m128i_i32[0] = (int)P;
            v181.m128i_i64[1] = HIDWORD(P);
          }
          else
          {
            v179 = *(PVOID *)(v20[92].Count + 32);
            v74 = (__int64)v179 + 164;
            if ( (unsigned __int64)v179 + 164 >= 0x7FFFFFFF0000LL )
              v74 = 0x7FFFFFFF0000LL;
            v183 = *(_DWORD *)v74;
            v188 = 0LL;
            v75 = (__int64)v179 + 176;
            if ( (unsigned __int64)v179 + 176 >= 0x7FFFFFFF0000LL )
              v75 = 0x7FFFFFFF0000LL;
            v188.m128i_i32[0] = *(_DWORD *)v75;
            v188.m128i_i64[1] = *(_QWORD *)(v75 + 8);
            v181 = v188;
            v76 = _mm_cvtsi128_si32(v188);
          }
          DeviceMapInformation = j;
          KiUnstackDetachProcess((__int64)v230, 0LL);
          if ( DeviceMapInformation < 0 )
            goto LABEL_352;
          v77 = v76 + 6;
          if ( a5 )
            *a5 = v77;
          if ( (unsigned int)v5 < v77 )
          {
            DeviceMapInformation = -1073741820;
            j = -1073741820;
          }
          else
          {
            *(_DWORD *)v6 = v183;
            *(_WORD *)(v6 + 4) = v76;
          }
          if ( DeviceMapInformation >= 0 && v76 )
          {
            v20 = (struct _EX_RUNDOWN_REF *)Object;
            DeviceMapInformation = MiCopyVirtualMemory(
                                     (__int64)Object,
                                     (char *)v181.m128i_i64[1],
                                     (__int64)KeGetCurrentThread()->ApcState.Process,
                                     (void *)(v6 + 6),
                                     v181.m128i_u16[0],
                                     1,
                                     v213,
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
      case 51:
        if ( (unsigned int)v5 < 0x10 )
        {
          if ( a5 )
            *a5 = 16;
          return -1073741820;
        }
        v179 = 0LL;
        result = ObReferenceObjectByHandle(
                   (HANDLE)BugCheckParameter1,
                   0x400u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   &v179,
                   0LL);
        if ( result >= 0 )
        {
          v87 = (__int64)v182;
          --v182->KernelApcDisable;
          v88 = (struct _EX_RUNDOWN_REF *)v179;
          v89 = (unsigned int *)ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v179);
          if ( v89 )
          {
            ProcessHandleInformation = ExQueryProcessHandleInformation(v89, (_QWORD *)v6, v5, (int *)a5);
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
      case 54:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
      case 55:
        if ( (_DWORD)v5 != 8 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
      case 58:
        v179 = 0LL;
        P = 0LL;
        if ( (unsigned int)v5 < 4 )
          return -1073741820;
        result = ExLockUserBuffer(v6, v5, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v179, (struct _MDL **)&P);
        if ( result >= 0 )
        {
          v94 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  1088,
                  (__int64)PsProcessType,
                  v166,
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
            v181 = 0LL;
            v95 = (struct _EX_RUNDOWN_REF *)Object;
            v96 = (unsigned int *)ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
            if ( v96 )
            {
              v181.m128i_i64[0] = (__int64)v179;
              v181.m128i_i64[1] = (unsigned int)v5 >> 2;
              ExEnumHandleTable(
                v96,
                (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PspHandleTableWalker,
                (__int64)&v181,
                0LL);
              ExReleaseRundownProtection_0(v95 + 61);
            }
            else
            {
              LODWORD(Count) = -1073741558;
            }
            ObfDereferenceObjectWithTag(v95, 0x79517350u);
            if ( a5 )
              *a5 = 4 * v181.m128i_i32[3];
            ExUnlockUserBuffer((struct _MDL *)P);
            return Count;
          }
        }
        return result;
      case 59:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
      case 60:
        DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                                 BugCheckParameter1,
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
        ProcessCommandLine = PsQueryProcessCommandLine((PRKPROCESS)Object, v6, v5, v166, a5);
        goto LABEL_377;
      case 61:
        ExecuteOptions = ObpReferenceObjectByHandleWithTag(
                           BugCheckParameter1,
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
        if ( a5 )
          *a5 = 1;
        ExecuteOptions = 0;
        goto LABEL_301;
      case 64:
        DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                                 BugCheckParameter1,
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
        ProcessCommandLine = EtwQueryProcessTelemetryInfo((__int64)Object, (char *)v6, (unsigned int)v5, v166, a5);
LABEL_377:
        DeviceMapInformation = ProcessCommandLine;
        if ( !v31 )
          return DeviceMapInformation;
        goto LABEL_701;
      case 65:
        LODWORD(P) = 0;
        if ( (_DWORD)v5 == 32 )
        {
          v188 = *(__m128i *)v6;
          v189 = *(_OWORD *)(v6 + 16);
          if ( v188.m128i_i32[0] == 3 )
          {
            if ( v188.m128i_i32[1] >= 8u || v188.m128i_i64[1] )
            {
              ExecuteOptions = -1073741811;
            }
            else
            {
              ExecuteOptions = ObpReferenceObjectByHandleWithTag(
                                 BugCheckParameter1,
                                 4096,
                                 (__int64)PsProcessType,
                                 PreviousMode,
                                 0x79517350u,
                                 &Object,
                                 0LL,
                                 0LL);
              if ( ExecuteOptions >= 0 )
              {
                MmQueryCommitReleaseState((__int64)Object, &P, &v188.m128i_i64[1], &v189, (_QWORD *)&v189 + 1);
                v188.m128i_i32[1] = (unsigned __int8)P & 1 | v188.m128i_i32[1] & 0xFFFFFFFE;
                v188.m128i_i64[1] <<= 12;
                *(_QWORD *)&v189 = (_QWORD)v189 << 12;
                *((_QWORD *)&v189 + 1) <<= 12;
                *(__m128i *)v6 = v188;
                *(_OWORD *)(v6 + 16) = v189;
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
      case 66:
      case 67:
        if ( (v5 & 7) != 0 || (unsigned int)v5 > 0x100 )
          return -1073741820;
        v155 = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
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
          LOBYTE(Count) = a2 == 67;
          v156 = 8 * KeQueryCpuSetsProcess((__int64)Object, (__int64)v241, 0x20u, Count);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          v207 = v156;
          if ( a5 )
            *a5 = v156;
          if ( v156 >= (unsigned int)v5 )
            v156 = v5;
          v207 = v156;
          memmove((void *)v6, v241, v156);
        }
        return v155;
      case 69:
        if ( (_DWORD)v5 != 40 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v230);
          ZwQueryInformationJobObject(0LL, 28LL);
          ObjectType = 0LL;
          ZwQueryInformationJobObject(0LL, 9LL);
          KiUnstackDetachProcess((__int64)v230, 0LL);
          *(_OWORD *)&Src.m256i_u64[1] = v231;
          Src.m256i_i64[0] = v232;
          v109 = v193;
          if ( (v236 & 0x200000) != 0 )
            v109 = v238;
          *(_QWORD *)&v193 = v109;
          v110 = Src.m256i_i64[3];
          if ( (v236 & 0x200) != 0 )
            v110 = v237;
          Src.m256i_i64[3] = v110;
          *(__m256i *)v6 = Src;
          *(_QWORD *)(v6 + 32) = v193;
          if ( a5 )
            *a5 = 40;
        }
        else
        {
          LODWORD(Count) = -1073741394;
        }
        goto LABEL_472;
      case 70:
        if ( (_DWORD)v5 != 1 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
      case 71:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
      case 72:
        return PsIumGetOnDemandDebugChallenge(BugCheckParameter1, v6, (unsigned int)v5, a5);
      case 73:
        if ( (_DWORD)v5 != 3 )
          return -1073741820;
        if ( BugCheckParameter1 == -1LL )
        {
          v97 = KeGetCurrentThread()->ApcState.Process;
          Object = v97;
        }
        else
        {
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
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
            if ( a5 )
              *a5 = 3;
            if ( BugCheckParameter1 == -1LL )
              return Count;
            goto LABEL_571;
          }
        }
        *(_BYTE *)v6 = 1;
        goto LABEL_421;
      case 74:
        if ( (_DWORD)v5 != 1 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
      case 75:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        if ( a5 )
          *a5 = 4;
        goto LABEL_302;
      case 76:
        memset_0(v240, 0, 0x1B8uLL);
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   4096,
                   (__int64)PsProcessType,
                   v166,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        ExecuteOptions = result;
        j = result;
        if ( result < 0 )
          return result;
        v69 = Object;
        PsQueryProcessEnergyValues((signed __int64 *)Object, v240);
        v150 = 432LL;
        if ( (unsigned int)v5 <= 0x1B0 )
          v150 = (unsigned int)v5;
        memmove((void *)v6, v240, v150);
        if ( a5 )
          *a5 = 432;
        goto LABEL_646;
      case 77:
        v227 = 0LL;
        v228 = 0;
        if ( (_DWORD)v5 != 12 )
          return -1073741820;
        if ( !ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost) )
          return -1073741822;
        v66 = ObpReferenceObjectByHandleWithTag(
                BugCheckParameter1,
                4096,
                (__int64)PsProcessType,
                v166,
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
            *(_QWORD *)v6 = v227;
            *(_DWORD *)(v6 + 8) = v228;
            if ( a5 )
              *a5 = 12;
            v68 = 0;
            j = 0;
          }
          ObfDereferenceObjectWithTag(v67, 0x79517350u);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
          return v68;
        }
      case 79:
        if ( (_DWORD)v5 != 8 )
          return -1073741820;
        if ( BugCheckParameter1 == -1LL )
        {
          v119 = &KeGetCurrentThread()->ApcState.Process->Header.LockNV;
          Object = v119;
        }
        else
        {
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
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
        if ( a5 )
          *a5 = 8;
        if ( BugCheckParameter1 == -1LL )
          return Count;
        ObfDereferenceObjectWithTag(v119, 0x79517350u);
        return 0;
      case 81:
        if ( PreviousMode )
          return -1073741790;
        if ( (_DWORD)v5 != 48 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
          DeviceMapInformation = PspAllocateAndQueryProcessNotificationChannel((__int64)v182, (__int64)Object, v6);
          if ( DeviceMapInformation >= 0 && a5 )
          {
            *a5 = 48;
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
      case 82:
        memset_0(v239, 0, sizeof(v239));
        if ( (unsigned int)v5 < 8 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   4096,
                   (__int64)PsProcessType,
                   v166,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        j = result;
        if ( result < 0 )
          return result;
        v97 = Object;
        PoQueryProcessEnergyTrackingState(Object, v239);
        if ( (unsigned int)v5 >= 0x90 )
          LODWORD(v5) = 144;
        memmove((void *)v6, v239, (unsigned int)v5);
        if ( a5 )
          *a5 = v5;
        j = 0;
        goto LABEL_571;
      case 84:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
      case 85:
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   4096,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        ProcessTelemetryCoverage = EtwQueryProcessTelemetryCoverage((_KPROCESS *)Object, (char *)v6, v5, a5);
LABEL_546:
        ExecuteOptions = ProcessTelemetryCoverage;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return ExecuteOptions;
      case 87:
      case 96:
        if ( a2 == 87 && !(_DWORD)v5 || a2 == 96 && (unsigned int)v5 < 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
          if ( a2 == 96 )
            *(_DWORD *)v6 |= (v79[383] & 0x80000 | v79[383] & 0x100000 | ((v79[383] & 0x10000000 | (v79[383] >> 2) & 0x8000000u) >> 6)) >> 17;
          ObfDereferenceObjectWithTag(v79, 0x79517350u);
          return v78;
        }
        return result;
      case 88:
        v214 = 0LL;
        v215 = 0LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        PspLockProcessShared((__int64)Object, (__int64)v182);
        v130 = *((_QWORD *)v97 + 212) >> 61;
        if ( v130 == 4 || v130 == 3 )
        {
          v131 = *((_QWORD *)v97 + 212) & 0x1FFFFFFFFFFFFFFFLL;
          *(_QWORD *)&v193 = v131;
          Src.m256i_i64[2] = *((_QWORD *)v97 + 211);
          v132 = Src.m256i_i64[2] - *((_QWORD *)v97 + 208);
          Src.m256i_i64[3] = v132;
          if ( v130 == 3 )
          {
            v133 = v194 | 0x200;
LABEL_562:
            LODWORD(v194) = v133 & 0xFFFFFE00 | *((_BYTE *)v97 + 1531) & 7 | (unsigned __int8)(2
                                                                                             * (*((_BYTE *)v97 + 1531) & 0x38)) | ((*((_DWORD *)v97 + 383) & 4) << 6);
            PspUnlockProcessShared((__int64)v97, (__int64)v182);
            PsGetProcessDeepFreezeStats((__int64)v97, &v214);
            *(_OWORD *)Src.m256i_i8 = v214;
            *((_QWORD *)&v193 + 1) = v215;
            if ( !v132 )
              Src.m256i_i64[3] = v214 - *((_QWORD *)v97 + 208);
            if ( !v131 )
              *(_QWORD *)&v193 = *((_QWORD *)&v214 + 1) - *((_QWORD *)v97 + 209) - v215;
            if ( (unsigned int)v5 >= 0x38 )
              LODWORD(v5) = 56;
            memmove((void *)v6, &Src, (unsigned int)v5);
            if ( a5 )
              *a5 = v5;
            j = 0;
LABEL_571:
            ObfDereferenceObjectWithTag(v97, 0x79517350u);
            return 0;
          }
        }
        else
        {
          v131 = v193;
          v132 = Src.m256i_i64[3];
        }
        v133 = v194;
        goto LABEL_562;
      case 89:
        v191 = 0LL;
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
        if ( BugCheckParameter1 != -1LL || v157 != (PVOID *)CurrentThread->Process )
          return -1073741790;
        result = ObOpenObjectByPointer(v157[85], 0, 0LL, 5u, MmSectionObjectType, PreviousMode, &v191);
        j = result;
        if ( result >= 0 )
        {
          *(_QWORD *)v6 = v191;
          if ( a5 )
            *a5 = 8;
        }
        return result;
      case 92:
        if ( (_DWORD)v5 != 8 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        if ( a5 )
          *a5 = 8;
LABEL_302:
        ObfDereferenceObjectWithTag(v59, 0x79517350u);
        return ExecuteOptions;
      case 94:
        if ( (_DWORD)v5 != 8 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
          if ( a5 )
            *a5 = 8;
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
      case 97:
        if ( (_DWORD)v5 != 8 )
        {
          if ( a5 )
            *a5 = 8;
          return -1073741820;
        }
        if ( BugCheckParameter1 != -1LL )
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
        if ( a5 )
          *a5 = 8;
        return Count;
      case 109:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        if ( a5 )
          *a5 = 4;
        return 0;
      case 114:
        if ( (_DWORD)v5 != 16 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
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
        if ( a5 )
          *a5 = 16;
        return ExecuteOptions;
      case 115:
        v229 = 0LL;
        if ( (_DWORD)v5 != 16 )
          return -1073741820;
        if ( BugCheckParameter1 != -1LL )
          return -1073741811;
        if ( PreviousMode )
        {
          RtlCopyVolatileMemory(&v229, (const void *)v6, 0x10uLL);
          if ( (v6 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v6 < 0x7FFFFFFF0000LL )
            v16 = v6;
          *(_DWORD *)v16 = *(_DWORD *)v16;
          v121 = &v229;
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
        if ( v166 )
        {
          *(_DWORD *)v6 = *(_DWORD *)v121;
          if ( a5 )
            *a5 = 4;
        }
        else if ( a5 )
        {
          *a5 = 4;
        }
        return v123;
      default:
        return -1073741821;
    }
  }
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
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
      v6 = (unsigned __int64)&v218;
      v30 = 0;
    }
    else
    {
      Count = v6 + 16;
      v30 = v5 - 16;
    }
    v174 = v30;
    DeviceMapInformation = PsQueryFullProcessImageName(Object, v6, Count, &v174);
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    if ( DeviceMapInformation >= 0 && !Count )
      DeviceMapInformation = -1073741820;
    if ( a5 && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
      *a5 = v174 + 16;
    return DeviceMapInformation;
  }
  return result;
}
