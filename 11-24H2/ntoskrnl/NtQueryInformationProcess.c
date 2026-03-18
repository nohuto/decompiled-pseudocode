/*
 * XREFs of NtQueryInformationProcess @ 0x1409AB830
 * Callers:
 *     <none>
 * Callees:
 *     KeIsEmptyGroupMask @ 0x140208940 (KeIsEmptyGroupMask.c)
 *     KeFindFirstSetRightGroupMask @ 0x140208F44 (KeFindFirstSetRightGroupMask.c)
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     PsQueryProcessCommandLine @ 0x140246E50 (PsQueryProcessCommandLine.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     PspUnlockProcessShared @ 0x14025E2E0 (PspUnlockProcessShared.c)
 *     ExUnlockUserBuffer @ 0x14026893C (ExUnlockUserBuffer.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     MmQueryWorkingSetInformation @ 0x1402E1DB0 (MmQueryWorkingSetInformation.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PspLockProcessShared @ 0x14033E760 (PspLockProcessShared.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     PsGetEffectiveServerSilo @ 0x140349B30 (PsGetEffectiveServerSilo.c)
 *     KeQuerySystemTimePrecise @ 0x14034EC60 (KeQuerySystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     KeQueryAffinityProcess @ 0x1403B1570 (KeQueryAffinityProcess.c)
 *     PsGetSessionId @ 0x1403D5E10 (PsGetSessionId.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     KeTestBitGroupMask @ 0x140428520 (KeTestBitGroupMask.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     PsGetWin32KFilterSet @ 0x1404528B0 (PsGetWin32KFilterSet.c)
 *     ExQueryHandleExceptionsPermanency @ 0x1404528F4 (ExQueryHandleExceptionsPermanency.c)
 *     KeClearBitGroupMask @ 0x14045F248 (KeClearBitGroupMask.c)
 *     MmQueryCommitReleaseState @ 0x14047DB54 (MmQueryCommitReleaseState.c)
 *     KeQueryGroupMaskProcess @ 0x140483990 (KeQueryGroupMaskProcess.c)
 *     KeQueryCpuSetsProcess @ 0x1404D43DC (KeQueryCpuSetsProcess.c)
 *     xKdEnumerateDebuggingDevices @ 0x1404FA9F0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x1406A8ED0 (ZwQueryInformationJobObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x1406F8D64 (EtwQueryProcessTelemetryCoverage.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     PsQueryStatisticsProcess @ 0x1408EC910 (PsQueryStatisticsProcess.c)
 *     ObGetProcessHandleCount @ 0x1408ECB30 (ObGetProcessHandleCount.c)
 *     PsQueryProcessEnergyValues @ 0x1408ED600 (PsQueryProcessEnergyValues.c)
 *     ExEnumHandleTable @ 0x1408EF990 (ExEnumHandleTable.c)
 *     PsReferenceProcessFilePointer @ 0x1408FF760 (PsReferenceProcessFilePointer.c)
 *     PsGetProcessDeepFreezeStats @ 0x14093961C (PsGetProcessDeepFreezeStats.c)
 *     ExQueryProcessHandleInformation @ 0x14093BA20 (ExQueryProcessHandleInformation.c)
 *     MmGetSectionInformation @ 0x14093C550 (MmGetSectionInformation.c)
 *     ObReferenceProcessHandleTable @ 0x140940570 (ObReferenceProcessHandleTable.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14094B234 (EtwQueryProcessTelemetryInfo.c)
 *     ExLockUserBuffer @ 0x140966B28 (ExLockUserBuffer.c)
 *     IoQueryFileDosDeviceName @ 0x140967F00 (IoQueryFileDosDeviceName.c)
 *     ObQueryDeviceMapInformation @ 0x1409848B0 (ObQueryDeviceMapInformation.c)
 *     MiCopyVirtualMemory @ 0x1409A9D80 (MiCopyVirtualMemory.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1409B2350 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspQueryQuotaLimits @ 0x1409B7AE0 (PspQueryQuotaLimits.c)
 *     PsQueryRuntimeProcess @ 0x1409C4240 (PsQueryRuntimeProcess.c)
 *     PsQueryProcessAttributes @ 0x1409D67A0 (PsQueryProcessAttributes.c)
 *     ExReferenceHandleDebugInfo @ 0x1409E6738 (ExReferenceHandleDebugInfo.c)
 *     PsQueryFullProcessImageName @ 0x1409FFC00 (PsQueryFullProcessImageName.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x1409FFC90 (PsQueryProcessSignatureMitigationPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140A03CD8 (PspGetNoChildProcessRestrictedPolicy.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A03E50 (ExDereferenceHandleDebugInfo.c)
 *     PspQueryWorkingSetWatch @ 0x140A147AC (PspQueryWorkingSetWatch.c)
 *     ExIsRestrictedCaller @ 0x140A14B1C (ExIsRestrictedCaller.c)
 *     KeGetExecuteOptions @ 0x140A14D18 (KeGetExecuteOptions.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140A1FFF0 (PsQueryTotalCycleTimeProcess.c)
 *     VslGetSecurePebAddress @ 0x140A5AEA0 (VslGetSecurePebAddress.c)
 *     PspGetRedirectionTrustPolicy @ 0x140A5EBB8 (PspGetRedirectionTrustPolicy.c)
 *     PsGetSiloIdentifier @ 0x140A68090 (PsGetSiloIdentifier.c)
 *     DbgkOpenProcessDebugPort @ 0x140A6B414 (DbgkOpenProcessDebugPort.c)
 *     VslLiveDumpCaptureProcess @ 0x140A8CF74 (VslLiveDumpCaptureProcess.c)
 *     PoQueryProcessEnergyTrackingState @ 0x140A94AA4 (PoQueryProcessEnergyTrackingState.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x140AB27D4 (PsIumGetOnDemandDebugChallenge.c)
 *     PspQueryPooledQuotaLimits @ 0x140AB3704 (PspQueryPooledQuotaLimits.c)
 *     PspFindFirstThreadByTebValue @ 0x140ABF77C (PspFindFirstThreadByTebValue.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

signed int __fastcall NtQueryInformationProcess(
        ULONG_PTR BugCheckParameter1,
        int a2,
        void *a3,
        unsigned int a4,
        unsigned int *a5)
{
  size_t v5; // r14
  unsigned __int64 v6; // rsi
  __int64 Count; // rbx
  unsigned __int8 PreviousMode; // r13
  struct _KTHREAD *CurrentThread; // r10
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // edi
  signed int result; // eax
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
  int DeviceMapInformation; // edi
  __int64 v46; // rax
  __int64 v47; // rcx
  PVOID v48; // rcx
  int v49; // r14d
  int v50; // esi
  _QWORD *v51; // rbx
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // r14d
  PVOID v55; // r14
  int v56; // edi
  unsigned int v57; // edi
  struct _EX_RUNDOWN_REF *v58; // rdi
  char v59; // r14
  int SectionInformation; // r15d
  struct _EX_RUNDOWN_REF *v61; // r13
  struct _FILE_OBJECT *v62; // r15
  POBJECT_NAME_INFORMATION v63; // r15
  unsigned int v64; // r13d
  PVOID v65; // rdi
  __int64 v66; // rax
  __int64 *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  unsigned __int16 v70; // r13
  unsigned int v71; // eax
  int v72; // ebx
  int SessionId; // ebx
  __int64 *v74; // rax
  void *Process; // r10
  void *v76; // r10
  int ProcessTelemetryCoverage; // eax
  _DWORD *p_LockNV; // rcx
  int v79; // eax
  int ProcessCommandLine; // eax
  signed int v81; // ebx
  _DWORD *v82; // r8
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // r13
  __int64 v85; // rax
  __int64 v86; // r14
  __int64 v87; // rdi
  struct _EX_RUNDOWN_REF *v88; // rbx
  unsigned int *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  int ProcessHandleInformation; // r15d
  PVOID v94; // rdi
  int v95; // edi
  struct _EX_RUNDOWN_REF *v96; // rdi
  unsigned int *v97; // rax
  _DWORD *v98; // rcx
  void *v99; // rdi
  int v100; // eax
  int v101; // eax
  __int64 v102; // rbx
  __int64 v103; // rax
  __int64 v104; // rax
  int RedirectionTrustPolicy; // eax
  int v106; // eax
  int v107; // eax
  unsigned int v108; // ecx
  __int64 v109; // rax
  unsigned int v110; // eax
  int v111; // ecx
  __int64 v112; // rax
  int v113; // eax
  int v114; // edx
  __int64 v115; // rdx
  __int128 *v116; // rdi
  int FirstThreadByTebValue; // eax
  int v118; // ecx
  int ProcessHandleCount; // edi
  int v120; // ebx
  __int64 v121; // rbx
  int v122; // ebx
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v125; // ecx
  unsigned __int64 v126; // rax
  _QWORD *v127; // rdi
  __int64 v128; // rax
  __int64 v129; // r15
  __int64 v130; // r13
  int v131; // edx
  HANDLE v132; // r14
  int v133; // ebx
  char v134; // r9
  __int64 v135; // rdx
  unsigned int v136; // r10d
  _OWORD *v137; // rax
  __int64 v138; // r11
  int v139; // r8d
  POBJECT_NAME_INFORMATION v140; // rcx
  unsigned int v141; // r8d
  __int64 v142; // r11
  ULONG_PTR v143; // rdi
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // r14
  PVOID v145; // rdi
  SECTION_OBJECT_POINTERS *v146; // rsi
  int v147; // r15d
  unsigned __int64 v148; // rdx
  PVOID v149; // r15
  unsigned __int16 FirstSetRightGroupMask; // dx
  unsigned int v151; // edi
  size_t v152; // r8
  __int64 EffectiveServerSilo; // rax
  __int32 SiloIdentifier; // ebx
  unsigned __int64 v155; // rax
  unsigned __int64 v156; // rax
  int v157; // ebx
  PVOID *v158; // rcx
  _KPROCESS *v159; // rcx
  struct _LIST_ENTRY *Blink; // r8
  __int64 v161; // rax
  __int64 *ReadyTime; // rdx
  signed __int32 v163[8]; // [rsp+0h] [rbp-A08h] BYREF
  POBJECT_TYPE ObjectType; // [rsp+20h] [rbp-9E8h]
  PVOID Object; // [rsp+40h] [rbp-9C8h] BYREF
  signed int i; // [rsp+48h] [rbp-9C0h]
  char v167; // [rsp+4Ch] [rbp-9BCh]
  char v168; // [rsp+4Dh] [rbp-9BBh] BYREF
  char v169; // [rsp+4Eh] [rbp-9BAh] BYREF
  char v170; // [rsp+4Fh] [rbp-9B9h] BYREF
  int v171; // [rsp+50h] [rbp-9B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-9B0h] BYREF
  unsigned __int16 v173; // [rsp+60h] [rbp-9A8h] BYREF
  ULONG_PTR v174; // [rsp+68h] [rbp-9A0h]
  __int64 v175; // [rsp+90h] [rbp-978h]
  __int16 v176; // [rsp+98h] [rbp-970h]
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+A0h] [rbp-968h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp-960h] BYREF
  PVOID v179; // [rsp+B0h] [rbp-958h] BYREF
  unsigned int v180; // [rsp+B8h] [rbp-950h]
  struct _KTHREAD *v181; // [rsp+C0h] [rbp-948h]
  int v182; // [rsp+C8h] [rbp-940h]
  __m128i v183; // [rsp+D0h] [rbp-938h] BYREF
  unsigned __int64 v184; // [rsp+E0h] [rbp-928h] BYREF
  int v185; // [rsp+E8h] [rbp-920h]
  int v186; // [rsp+ECh] [rbp-91Ch] BYREF
  int v187; // [rsp+F0h] [rbp-918h] BYREF
  unsigned __int64 v188; // [rsp+F8h] [rbp-910h] BYREF
  __m128i v189; // [rsp+100h] [rbp-908h] BYREF
  __int128 v190; // [rsp+110h] [rbp-8F8h] BYREF
  HANDLE Handle[4]; // [rsp+120h] [rbp-8E8h] BYREF
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
  int v202; // [rsp+1B4h] [rbp-854h]
  int v203; // [rsp+1B8h] [rbp-850h] BYREF
  unsigned int v204; // [rsp+1BCh] [rbp-84Ch]
  __int64 v205; // [rsp+1C0h] [rbp-848h] BYREF
  unsigned __int64 v206; // [rsp+1C8h] [rbp-840h] BYREF
  int v207; // [rsp+1D0h] [rbp-838h]
  unsigned int v208; // [rsp+1D8h] [rbp-830h]
  int v209; // [rsp+1E0h] [rbp-828h]
  __int64 v210; // [rsp+1E8h] [rbp-820h] BYREF
  HANDLE v211; // [rsp+1F0h] [rbp-818h] BYREF
  PVOID v212; // [rsp+1F8h] [rbp-810h] BYREF
  int v213; // [rsp+288h] [rbp-780h]
  unsigned __int64 v214[3]; // [rsp+2C0h] [rbp-748h] BYREF
  __int128 v215; // [rsp+2D8h] [rbp-730h] BYREF
  __int128 v216; // [rsp+2E8h] [rbp-720h]
  POBJECT_NAME_INFORMATION v217; // [rsp+2F8h] [rbp-710h]
  ULONG_PTR v218; // [rsp+300h] [rbp-708h]
  __int128 v219; // [rsp+308h] [rbp-700h] BYREF
  unsigned __int64 v220; // [rsp+318h] [rbp-6F0h]
  _QWORD v221[5]; // [rsp+320h] [rbp-6E8h] BYREF
  __m256i v222; // [rsp+348h] [rbp-6C0h]
  __int128 v223; // [rsp+368h] [rbp-6A0h]
  __int128 v224; // [rsp+390h] [rbp-678h]
  __int128 v225; // [rsp+3A0h] [rbp-668h]
  _OWORD v226[8]; // [rsp+3B0h] [rbp-658h]
  __int128 v227; // [rsp+430h] [rbp-5D8h] BYREF
  __int64 v228; // [rsp+440h] [rbp-5C8h] BYREF
  int v229; // [rsp+448h] [rbp-5C0h]
  __int128 v230; // [rsp+450h] [rbp-5B8h] BYREF
  _OWORD v231[3]; // [rsp+460h] [rbp-5A8h] BYREF
  __int128 v232; // [rsp+490h] [rbp-578h]
  __int128 v233; // [rsp+4A0h] [rbp-568h]
  __int64 v234; // [rsp+4B0h] [rbp-558h]
  struct _KAFFINITY_EX v235; // [rsp+4C0h] [rbp-548h] BYREF
  char v236[16]; // [rsp+5D0h] [rbp-438h] BYREF
  int v237; // [rsp+5E0h] [rbp-428h]
  __int64 v238; // [rsp+648h] [rbp-3C0h]
  __int64 v239; // [rsp+660h] [rbp-3A8h]
  _BYTE v240[144]; // [rsp+670h] [rbp-398h] BYREF
  _OWORD v241[28]; // [rsp+700h] [rbp-308h] BYREF
  _BYTE v242[256]; // [rsp+8C0h] [rbp-148h] BYREF

  v5 = a4;
  v6 = (unsigned __int64)a3;
  v174 = BugCheckParameter1;
  Handle[1] = a3;
  v208 = a4;
  Handle[2] = a5;
  memset(v231, 0, sizeof(v231));
  Count = 0LL;
  v171 = 0;
  Handle[0] = 0LL;
  v186 = 0;
  memset_0(&v235, 0, sizeof(v235));
  FileObject = 0LL;
  v227 = 0LL;
  v203 = 0;
  v202 = 0;
  memset_0(v236, 0, 0x98uLL);
  v219 = 0LL;
  v205 = 0LL;
  v232 = 0LL;
  v233 = 0LL;
  v234 = 0LL;
  v206 = 0LL;
  ObjectNameInformation = 0LL;
  v173 = 0;
  v176 = 0;
  Object = 0LL;
  v210 = 0LL;
  v188 = 0LL;
  memset_0(v221, 0, 0x68uLL);
  memset_0(&Src, 0, 0x70uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v167 = PreviousMode;
  CurrentThread = KeGetCurrentThread();
  v181 = CurrentThread;
  if ( !PreviousMode )
  {
    v12 = 1LL;
    v175 = 3LL;
    v13 = 0x7FFFFFFF0000LL;
    goto LABEL_3;
  }
  if ( a2 == 18 || a2 == 61 )
    goto LABEL_84;
  if ( a2 == 65 )
  {
    v28 = 7LL;
    v12 = 1LL;
    v175 = 3LL;
    goto LABEL_74;
  }
  if ( ((a2 - 70) & 0xFFFFFFFB) == 0 )
    goto LABEL_84;
  if ( a2 == 92 )
  {
    v28 = 7LL;
    v12 = 1LL;
    v175 = 3LL;
    goto LABEL_74;
  }
  if ( a2 != 94 )
  {
    if ( a2 != 87 )
    {
      if ( a2 == 47 )
      {
        v12 = 1LL;
        v28 = 1LL;
        v175 = 3LL;
      }
      else
      {
        v175 = 3LL;
        v27 = 3;
        if ( a2 == 115 )
          v27 = 7;
        v28 = v27;
        v12 = 1LL;
      }
      goto LABEL_74;
    }
LABEL_84:
    v28 = 0LL;
    v12 = 1LL;
    v175 = 3LL;
    goto LABEL_74;
  }
  v28 = 7LL;
  v12 = 1LL;
  v175 = 3LL;
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
  if ( a5 )
  {
    v29 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v29 = (__int64)a5;
    *(_DWORD *)v29 = *(_DWORD *)v29;
  }
LABEL_3:
  if ( a2 == 52 )
  {
    v187 = 0;
    v169 = 0;
    v170 = 0;
    if ( (_DWORD)v5 != 8 )
      return -1073741820;
    v14 = *(_DWORD *)v6;
    v201 = *(_DWORD *)v6;
    if ( BugCheckParameter1 == -1LL )
    {
      Object = KeGetCurrentThread()->ApcState.Process;
      v14 = v201;
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
          ExQueryHandleExceptionsPermanency(v30, &v169, &v170);
          *(_DWORD *)(v6 + 4) = 0;
          if ( v169 )
            *(_DWORD *)(v6 + 4) |= 1u;
          if ( v170 )
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
        if ( BugCheckParameter1 != -1LL )
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
        PsQueryProcessSignatureMitigationPolicy(Object, &v187);
        *(_DWORD *)(v6 + 4) = v187;
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
        RedirectionTrustPolicy = PspGetRedirectionTrustPolicy(Object);
        *(_DWORD *)(v6 + 4) = 0;
        v106 = RedirectionTrustPolicy - 1;
        if ( v106 )
        {
          if ( v106 != 1 )
            goto LABEL_17;
          v107 = *(_DWORD *)(v6 + 4) | 2;
        }
        else
        {
          v107 = *(_DWORD *)(v6 + 4) | 1;
        }
        *(_DWORD *)(v6 + 4) = v107;
        goto LABEL_17;
      default:
        i = -1073741637;
        goto LABEL_17;
    }
  }
  switch ( a2 )
  {
    case 0:
      v168 = 0;
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
      v171 = v18;
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
      if ( (*(_DWORD *)&v20->0 & 0x1000) != 0 && v20 != v181->Process )
        goto LABEL_33;
      *(_QWORD *)&v235.Count = 2097153LL;
      memset_0(&v235.8, 0, sizeof(v235.8));
      KeQueryAffinityProcess((__int64)v20, &v235, &v227, 0LL, &v173);
      if ( v20 == v181->Process )
      {
        if ( !(unsigned int)KeTestBitGroupMask((const signed __int64 *)&v227, v181->UserAffinityPrimaryGroup) )
          goto LABEL_33;
      }
      else
      {
        v22 = v173;
      }
      if ( v22 != 32 )
        v21 = v235.Bitmap[v22];
LABEL_33:
      v23 = ObjectNameInformation;
      if ( ObjectNameInformation )
      {
        PsQueryProcessAttributes(v20, &v168, 0LL);
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
          LODWORD(v175) = 2;
        if ( v20[1].ReadyTime )
        {
          v26 = WORD2(v20[3].PerProcessorCycleTimes);
          if ( v26 == 332 || v26 == 452 )
            LODWORD(v23[3].Name.Buffer) = v175;
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
        if ( v168 )
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
      if ( a5 )
        *a5 = (unsigned int)FileObject;
LABEL_62:
      ObfDereferenceObjectWithTag(v20, 0x79517350u);
      return v19;
    case 1:
      return PspQueryQuotaLimits(BugCheckParameter1, (__int64)a5, PreviousMode);
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
      if ( result >= 0 )
      {
        PsQueryStatisticsProcess(Object, v221);
        Src = v222;
        v193 = v223;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(__m256i *)v6 = Src;
        *(_OWORD *)(v6 + 32) = v193;
        if ( a5 )
          *a5 = 48;
        return DeviceMapInformation;
      }
      return result;
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
      if ( result >= 0 )
      {
        *(_OWORD *)Src.m256i_i8 = *((_OWORD *)Object + 34);
        Src.m256i_i32[4] = *((_DWORD *)Object + 257);
        v51 = Object;
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v231);
        i = MmQueryWorkingSetInformation(&Src.m256i_i64[3], &v193, v200, &v206, &v205, &v203);
        KiUnstackDetachProcess((__int64)v231, 0);
        v194 = v51[65];
        *((_QWORD *)&v193 + 1) = *((_QWORD *)Object + 67);
        v196 = *((_QWORD *)Object + 64);
        v195 = *((_QWORD *)Object + 66);
        v197 = *((_QWORD *)Object + 123) << 12;
        v198 = *((_QWORD *)Object + 124) << 12;
        v200[1] = *((_QWORD *)Object + 213) << 12;
        v199 = v197;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        result = i;
        if ( i >= 0 )
        {
          memmove((void *)v6, &Src, v5);
          if ( a5 )
            *a5 = v5;
          return 0;
        }
      }
      return result;
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
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        v44 = Object;
        v46 = PsQueryRuntimeProcess(Object, &v188);
        v47 = (unsigned int)KeMaximumIncrement;
        *(_QWORD *)(v6 + 16) = (unsigned int)KeMaximumIncrement * v46;
        *(_QWORD *)(v6 + 24) = v47 * v188;
        *(_QWORD *)v6 = v44[63];
        *(_QWORD *)(v6 + 8) = v44[184];
        if ( a5 )
          *a5 = 32;
        goto LABEL_192;
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
      if ( result >= 0 )
      {
        v102 = -(__int64)(*((_QWORD *)Object + 97) != 0LL);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)v6 = v102;
        if ( a5 )
          *a5 = 8;
        return 0;
      }
      return result;
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
      if ( result >= 0 )
      {
        ProcessTelemetryCoverage = xKdEnumerateDebuggingDevices();
        goto LABEL_333;
      }
      return result;
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
      if ( result >= 0 )
      {
        v72 = *((_DWORD *)Object + 226);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v72;
        if ( a5 )
          *a5 = 4;
        return 0;
      }
      return result;
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
      if ( result >= 0 )
      {
        HIBYTE(v176) = *((_BYTE *)Object + 839);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_WORD *)v6 = v176;
        if ( a5 )
          *a5 = 2;
        return 0;
      }
      return result;
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
        v122 = *((_BYTE *)Object + 503) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v122;
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
        *(_QWORD *)&v235.Count = 2097153LL;
        memset_0(&v235.8, 0, sizeof(v235.8));
        KeQueryAffinityProcess((__int64)v65, &v235, &v227, 0LL, &v173);
        v148 = v235.Bitmap[v173];
        if ( (_DWORD)v5 == 16 )
          *(_WORD *)(v6 + 8) = v173;
        *(_QWORD *)v6 = v148;
        if ( a5 )
          *a5 = v5;
      }
      goto LABEL_299;
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
        v133 = (*((_DWORD *)Object + 34) >> 1) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v133;
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
        v57 = v180;
        if ( (v180 & 0xFFFFFFFE) != 0 )
          return -1073741811;
      }
      else
      {
        if ( (_DWORD)v5 != 36 )
          return -1073741820;
        v57 = 0;
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
      DeviceMapInformation = ObQueryDeviceMapInformation((_KPROCESS *)Object, v6, v57);
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
      v74 = (__int64 *)*((_QWORD *)Object + 98);
      if ( v74 )
        Count = *v74;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = Count;
      if ( a5 )
        *a5 = 8;
      return 0;
    case 27:
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
      if ( (unsigned int)v5 < 0x10 )
      {
        v6 = (unsigned __int64)&v219;
        v49 = 0;
      }
      else
      {
        Count = v6 + 16;
        v49 = v5 - 16;
      }
      v171 = v49;
      v50 = PsQueryFullProcessImageName(Object, v6, Count, &v171);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( v50 >= 0 && !Count )
        v50 = -1073741820;
      if ( a5 && ((int)(v50 + 0x80000000) < 0 || v50 == -1073741820) )
        *a5 = v171 + 16;
      return v50;
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
      v120 = (*((_DWORD *)Object + 125) >> 13) & 1;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v120;
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
      if ( result < 0 )
        return result;
      SectionInformation = DbgkOpenProcessDebugPort(Object, PreviousMode, Handle);
      v132 = Handle[0];
      if ( SectionInformation < 0 )
        v132 = 0LL;
      Handle[0] = v132;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v132;
      if ( a5 )
        *a5 = 8;
      return SectionInformation;
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
      LODWORD(Count) = result;
      if ( result < 0 )
        return result;
      v98 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 125) & 2) == 0;
      if ( a5 )
        *a5 = 4;
      goto LABEL_423;
    case 32:
      LODWORD(P) = 0;
      if ( (unsigned int)v5 < 0x10 )
        return -1073741820;
      if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, &P) )
        return -1073741790;
      v188 = (unsigned int)(v5 - 16) / 0xA0uLL;
      ObjectNameInformation = (POBJECT_NAME_INFORMATION)(v6 + 16);
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
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
      v83 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      v84 = v83;
      v206 = v83;
      if ( !v83 )
        goto LABEL_536;
      v85 = ExReferenceHandleDebugInfo(v83);
      v86 = v85;
      v205 = v85;
      if ( v85 )
      {
        v134 = 0;
        v167 = 0;
        if ( (*(_DWORD *)(v85 + 8) & 3) != 0 )
        {
          ExAcquireFastMutex((PKGUARDED_MUTEX)(v85 + 16));
          v134 = 1;
          v167 = 1;
        }
        *(_DWORD *)(v6 + 8) = 0;
        v135 = (unsigned int)(*(_DWORD *)(v86 + 72) % *(_DWORD *)(v86 + 4));
        v185 = v135;
        v136 = 0;
        v207 = 0;
        while ( v136 < *(_DWORD *)(v86 + 4) )
        {
          v137 = (_OWORD *)(v86 + 160 * v135);
          v224 = v137[5];
          v225 = v137[6];
          v226[0] = v137[7];
          v226[1] = v137[8];
          v226[2] = v137[9];
          v226[3] = v137[10];
          v226[4] = v137[11];
          v226[5] = v137[12];
          v226[6] = v137[13];
          v226[7] = v137[14];
          v138 = v225;
          if ( *(_QWORD *)v6 == (_QWORD)v225 || !*(_QWORD *)v6 )
          {
            v139 = DWORD2(v225);
            if ( DWORD2(v225) )
            {
              ++*(_DWORD *)(v6 + 8);
              if ( (_DWORD)v188 )
              {
                v188 = (unsigned int)(v188 - 1);
                v213 = v188;
                v140 = ObjectNameInformation;
                *(_QWORD *)&ObjectNameInformation->Name.Length = v138;
                *(_OWORD *)&v140->Name.Buffer = v224;
                LODWORD(v140[1].Name.Buffer) = v139;
                v141 = 0;
                v204 = 0;
                while ( v141 < 0x10 )
                {
                  if ( (_DWORD)P )
                    v142 = 0LL;
                  else
                    v142 = *((_QWORD *)v226 + v141);
                  *((_QWORD *)&v140[2].Name.Length + v141++) = v142;
                  v204 = v141;
                }
                ObjectNameInformation = v140 + 10;
                v217 = v140 + 10;
              }
              else
              {
                SectionInformation = -1073741820;
                i = -1073741820;
              }
            }
          }
          if ( !(_DWORD)v135 )
            LODWORD(v135) = *(_DWORD *)(v86 + 4);
          v135 = (unsigned int)(v135 - 1);
          v185 = v135;
          v207 = ++v136;
        }
        if ( a5 )
          *a5 = (_DWORD)ObjectNameInformation - v6;
        if ( v134 )
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v86 + 16));
        ExDereferenceHandleDebugInfo(v84, v86);
        v65 = Object;
      }
      else
      {
        SectionInformation = -1073741811;
      }
      goto LABEL_298;
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
      LODWORD(Count) = result;
      i = result;
      if ( result < 0 )
        return result;
      v111 = (*((_DWORD *)Object + 125) >> 27) & 7;
      if ( a2 == 33 )
      {
        *(_DWORD *)v6 = v111;
      }
      else
      {
        v112 = *((_QWORD *)Object + 84);
        if ( v112 )
        {
          v113 = *(_DWORD *)(v112 + 1084);
          if ( v111 >= v113 )
            v111 = v113;
        }
        *(_DWORD *)v6 = v111;
        LODWORD(Count) = i;
      }
      if ( a5 )
        *a5 = 4;
      goto LABEL_334;
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
      LODWORD(Count) = KeGetExecuteOptions(Process, &v186, v13, v12);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(v76, 0x79517350u);
      if ( (int)Count >= 0 )
      {
        *(_DWORD *)v6 = v186;
        if ( a5 )
          *a5 = 4;
      }
      return Count;
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
        v212 = 0LL;
        result = ObReferenceObjectByHandle(
                   (HANDLE)BugCheckParameter1,
                   0x20u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   &v212,
                   0LL);
        p_LockNV = v212;
        Object = v212;
        if ( result < 0 )
          return result;
      }
      for ( i = 0; ; LODWORD(Count) = i )
      {
        v79 = p_LockNV[174];
        if ( v79 )
          break;
        KeQuerySystemTimePrecise(&v184);
        CurrentPrcb = KeGetCurrentPrcb();
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        v125 = ExGenRandom(1);
        v126 = __rdtsc();
        _InterlockedCompareExchange(
          (volatile signed __int32 *)Object + 174,
          v184 ^ HIDWORD(v184) ^ v126 ^ v125 ^ CurrentPrcb->MmPageFaultCount ^ LowPart ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
          0);
        p_LockNV = Object;
      }
      *(_DWORD *)v6 = v79;
      if ( a5 )
        *a5 = 4;
      if ( BugCheckParameter1 != -1LL )
      {
        ObfDereferenceObject(p_LockNV);
        return Count;
      }
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
      v171 = result;
      if ( result < 0 )
        return result;
      v58 = (struct _EX_RUNDOWN_REF *)Object;
      if ( Object == v181->Process )
      {
        Count = *((_QWORD *)Object + 85);
        if ( !Count )
          result = -1073741558;
        v171 = result;
        v59 = 0;
        SectionInformation = result;
      }
      else
      {
        v59 = 1;
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 61) )
        {
          Count = v58[85].Count;
          if ( Count )
          {
            PsReferenceSiloContext(v58[85].Ptr);
            SectionInformation = v171;
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
        SectionInformation = MmGetSectionInformation(Count, 1, v6);
        if ( v59 )
          ObfDereferenceObject((PVOID)Count);
        if ( SectionInformation >= 0 && a5 )
          *a5 = 64;
      }
      return SectionInformation;
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
      v44 = Object;
      *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess(Object, &v210);
      *(_QWORD *)(v6 + 8) = v210;
      if ( a5 )
        *a5 = 16;
      goto LABEL_192;
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
      LODWORD(Count) = result;
      i = result;
      if ( result < 0 )
        return result;
      v108 = (*((_DWORD *)Object + 124) >> 12) & 7;
      if ( a2 == 39 )
      {
        *(_DWORD *)v6 = v108;
      }
      else
      {
        v109 = *((_QWORD *)Object + 84);
        if ( v109 )
        {
          v110 = *(_DWORD *)(v109 + 1092);
          if ( v108 >= v110 )
            v108 = v110;
        }
        *(_DWORD *)v6 = v108;
        LODWORD(Count) = i;
      }
      if ( a5 )
        *a5 = 4;
      goto LABEL_334;
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
      v61 = (struct _EX_RUNDOWN_REF *)Object;
      v62 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 102);
      FileObject = v62;
      if ( v62 )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 61) )
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
          Count = v6 + 16;
          memmove((void *)(v6 + 16), v63->Name.Buffer, v63->Name.MaximumLength);
        }
        *(_QWORD *)(v6 + 8) = Count;
      }
      if ( a5 )
        *a5 = v64;
      ExFreePoolWithTag(v63, 0);
      return DeviceMapInformation;
    case 44:
      P = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v143 = *(_QWORD *)v6;
      v218 = *(_QWORD *)v6;
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
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               v143,
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
      }
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
      if ( result >= 0 )
      {
        v149 = Object;
        v227 = *KeQueryGroupMaskProcess(&v189, (__int64)Object);
        do
        {
          FirstSetRightGroupMask = KeFindFirstSetRightGroupMask((__int64 *)&v227);
          v202 = FirstSetRightGroupMask;
          v151 = Count + 2;
          v171 = Count + 2;
          if ( (int)Count + 2 <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = FirstSetRightGroupMask;
            v6 += 2LL;
            v220 = v6;
          }
          KeClearBitGroupMask((signed __int64 *)&v227, FirstSetRightGroupMask);
          LODWORD(Count) = Count + 2;
        }
        while ( !(unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)&v227) );
        *a5 = v151;
        i = (unsigned int)v5 < v151 ? 0xC0000023 : 0;
        ObfDereferenceObjectWithTag(v149, 0x79517350u);
        return (unsigned int)v5 < v151 ? 0xC0000023 : 0;
      }
      return result;
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
      v121 = *((_QWORD *)Object + 91);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v121;
      if ( a5 )
        *a5 = 8;
      return 0;
    case 50:
      v182 = 0;
      v183 = 0LL;
      v214[0] = 0LL;
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
      i = result;
      if ( result >= 0 )
      {
        v65 = Object;
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 61) )
        {
          KiStackAttachProcess((_KPROCESS *)v65, 0, (__int64)v231);
          v66 = 0LL;
          v67 = (__int64 *)*((_QWORD *)v65 + 98);
          if ( v67 )
            v66 = *v67;
          if ( v66 )
          {
            v179 = (PVOID)*(unsigned int *)(v66 + 16);
            v182 = *((_DWORD *)v179 + 26);
            RtlCopyVolatileMemory(&P, (char *)v179 + 112, 8uLL);
            v70 = (unsigned __int16)P;
            v183.m128i_i32[0] = (int)P;
            v183.m128i_i64[1] = HIDWORD(P);
          }
          else
          {
            v179 = *(PVOID *)(*((_QWORD *)v65 + 92) + 32LL);
            v68 = (__int64)v179 + 164;
            if ( (unsigned __int64)v179 + 164 >= 0x7FFFFFFF0000LL )
              v68 = 0x7FFFFFFF0000LL;
            v182 = *(_DWORD *)v68;
            v189 = 0LL;
            v69 = (__int64)v179 + 176;
            if ( (unsigned __int64)v179 + 176 >= 0x7FFFFFFF0000LL )
              v69 = 0x7FFFFFFF0000LL;
            v189.m128i_i32[0] = *(_DWORD *)v69;
            v189.m128i_i64[1] = *(_QWORD *)(v69 + 8);
            v183 = v189;
            v70 = _mm_cvtsi128_si32(v189);
          }
          SectionInformation = i;
          KiUnstackDetachProcess((__int64)v231, 0);
          if ( SectionInformation < 0 )
            goto LABEL_297;
          v71 = v70 + 6;
          if ( a5 )
            *a5 = v71;
          if ( (unsigned int)v5 < v71 )
          {
            SectionInformation = -1073741820;
            i = -1073741820;
          }
          else
          {
            *(_DWORD *)v6 = v182;
            *(_WORD *)(v6 + 4) = v70;
          }
          if ( SectionInformation >= 0 && v70 )
          {
            v65 = Object;
            SectionInformation = MiCopyVirtualMemory(
                                   (__int64)Object,
                                   (char *)v183.m128i_i64[1],
                                   (__int64)KeGetCurrentThread()->ApcState.Process,
                                   (void *)(v6 + 6),
                                   v183.m128i_u16[0],
                                   1,
                                   v214,
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
    case 51:
      if ( (unsigned int)v5 >= 0x10 )
      {
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
          v87 = (__int64)v181;
          --v181->KernelApcDisable;
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
          ObfDereferenceObject(v88);
          return ProcessHandleInformation;
        }
        return result;
      }
      if ( a5 )
        *a5 = 16;
      return -1073741820;
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
      SectionInformation = result;
      i = result;
      if ( result < 0 )
        return result;
      v65 = Object;
      v155 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v155 )
        goto LABEL_536;
      LOBYTE(Count) = (*(_BYTE *)(v155 + 44) & 2) != 0;
      *(_DWORD *)v6 = Count;
      goto LABEL_298;
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
      LODWORD(Count) = result;
      if ( result < 0 )
        return result;
      v98 = Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 459) & 0x7FFFFFFF;
      *(_DWORD *)(v6 + 4) = v98[467] & 0x7FFFFFFF;
      goto LABEL_423;
    case 58:
      v179 = 0LL;
      P = 0LL;
      if ( (unsigned int)v5 < 4 )
        return -1073741820;
      result = ExLockUserBuffer(v6, v5, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v179, (struct _MDL **)&P);
      if ( result >= 0 )
      {
        v95 = ObpReferenceObjectByHandleWithTag(
                BugCheckParameter1,
                1088,
                (__int64)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL,
                0LL);
        if ( v95 < 0 )
        {
          ExUnlockUserBuffer((struct _MDL *)P);
          return v95;
        }
        else
        {
          v183 = 0LL;
          v96 = (struct _EX_RUNDOWN_REF *)Object;
          v97 = (unsigned int *)ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
          if ( v97 )
          {
            v183.m128i_i64[0] = (__int64)v179;
            v183.m128i_i64[1] = (unsigned int)v5 >> 2;
            ExEnumHandleTable(
              v97,
              (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PspHandleTableWalker,
              (__int64)&v183,
              0LL);
            ExReleaseRundownProtection_0(v96 + 61);
          }
          else
          {
            LODWORD(Count) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v96, 0x79517350u);
          if ( a5 )
            *a5 = 4 * v183.m128i_i32[3];
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
      LODWORD(Count) = result;
      if ( result < 0 )
        return result;
      v98 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 34) >> 5) & 1;
      goto LABEL_423;
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
      v44 = Object;
      ProcessCommandLine = PsQueryProcessCommandLine((PRKPROCESS)Object, v6, v5, PreviousMode, a5);
      goto LABEL_361;
    case 61:
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
      if ( !(_DWORD)v5 )
      {
LABEL_516:
        DeviceMapInformation = -1073741820;
        goto LABEL_358;
      }
      v48 = Object;
      *(_BYTE *)v6 = *((_BYTE *)Object + 1530);
      if ( a5 )
        *a5 = 1;
      DeviceMapInformation = 0;
      goto LABEL_210;
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
      v44 = Object;
      ProcessCommandLine = EtwQueryProcessTelemetryInfo((__int64)Object, (char *)v6, (unsigned int)v5, PreviousMode, a5);
LABEL_361:
      DeviceMapInformation = ProcessCommandLine;
      if ( !v44 )
        return DeviceMapInformation;
      goto LABEL_192;
    case 65:
      LODWORD(P) = 0;
      if ( (_DWORD)v5 != 32 )
        goto LABEL_516;
      v189 = *(__m128i *)v6;
      v190 = *(_OWORD *)(v6 + 16);
      if ( v189.m128i_i32[0] == 3 )
      {
        if ( v189.m128i_i32[1] >= 8u || v189.m128i_i64[1] )
        {
          DeviceMapInformation = -1073741811;
          v48 = Object;
        }
        else
        {
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
            MmQueryCommitReleaseState((__int64)Object, &P, &v189.m128i_i64[1], &v190, (_QWORD *)&v190 + 1);
            v189.m128i_i32[1] = (unsigned __int8)P & 1 | v189.m128i_i32[1] & 0xFFFFFFFE;
            v189.m128i_i64[1] <<= 12;
            *(_QWORD *)&v190 = (_QWORD)v190 << 12;
            *((_QWORD *)&v190 + 1) <<= 12;
            *(__m128i *)v6 = v189;
            *(_OWORD *)(v6 + 16) = v190;
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
    case 66:
    case 67:
      if ( (v5 & 7) != 0 || (unsigned int)v5 > 0x100 )
        return -1073741820;
      SectionInformation = ObpReferenceObjectByHandleWithTag(
                             BugCheckParameter1,
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
        LOBYTE(Count) = a2 == 67;
        LODWORD(Count) = 8 * KeQueryCpuSetsProcess((__int64)Object, (__int64)v242, 0x20u, Count);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v209 = Count;
        if ( a5 )
          *a5 = Count;
        if ( (unsigned int)Count >= (unsigned int)v5 )
          LODWORD(Count) = v5;
        v209 = Count;
        memmove((void *)v6, v242, (unsigned int)Count);
      }
      return SectionInformation;
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
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v231);
        ZwQueryInformationJobObject(0LL, 28LL);
        ObjectType = 0LL;
        ZwQueryInformationJobObject(0LL, 9LL);
        KiUnstackDetachProcess((__int64)v231, 0);
        *(_OWORD *)&Src.m256i_u64[1] = v232;
        Src.m256i_i64[0] = v233;
        v103 = v193;
        if ( (v237 & 0x200000) != 0 )
          v103 = v239;
        *(_QWORD *)&v193 = v103;
        v104 = Src.m256i_i64[3];
        if ( (v237 & 0x200) != 0 )
          v104 = v238;
        Src.m256i_i64[3] = v104;
        *(__m256i *)v6 = Src;
        *(_QWORD *)(v6 + 32) = v193;
        if ( a5 )
          *a5 = 40;
      }
      else
      {
        LODWORD(Count) = -1073741394;
      }
      goto LABEL_334;
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
      LODWORD(Count) = result;
      if ( result < 0 )
        return result;
      v98 = Object;
      *(_BYTE *)v6 = *((int *)Object + 124) < 0;
      goto LABEL_423;
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
      SectionInformation = result;
      i = result;
      if ( result < 0 )
        return result;
      v65 = Object;
      v156 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v156 )
        goto LABEL_536;
      LOBYTE(Count) = (*(_BYTE *)(v156 + 44) & 0x10) != 0;
      *(_DWORD *)v6 = Count;
      goto LABEL_298;
    case 72:
      return PsIumGetOnDemandDebugChallenge(BugCheckParameter1, v6, (unsigned int)v5, a5);
    case 73:
      if ( (_DWORD)v5 != 3 )
        return -1073741820;
      if ( BugCheckParameter1 == -1LL )
      {
        v99 = KeGetCurrentThread()->ApcState.Process;
        Object = v99;
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
        v99 = Object;
      }
      v100 = PspGetNoChildProcessRestrictedPolicy(v99);
      *(_WORD *)v6 = 0;
      *(_BYTE *)(v6 + 2) = 0;
      if ( v100 == 2 )
      {
        *(_BYTE *)(v6 + 1) = 1;
        goto LABEL_434;
      }
      v101 = v100 - 1;
      if ( !v101 )
      {
LABEL_434:
        *(_BYTE *)v6 = 1;
        goto LABEL_431;
      }
      if ( v101 == 2 )
        *(_BYTE *)(v6 + 2) = 1;
LABEL_431:
      if ( a5 )
        *a5 = 3;
      if ( BugCheckParameter1 != -1LL )
      {
LABEL_436:
        ObfDereferenceObjectWithTag(v99, 0x79517350u);
        return Count;
      }
      return Count;
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
      LODWORD(Count) = result;
      if ( result < 0 )
        return result;
      v98 = Object;
      *(_BYTE *)v6 = (*((_DWORD *)Object + 383) & 0x200) != 0;
      goto LABEL_423;
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
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v48 = Object;
      if ( *((_QWORD *)Object + 200) )
        LODWORD(Count) = qword_140F05790;
      *(_DWORD *)v6 = Count;
      if ( a5 )
        *a5 = 4;
      goto LABEL_193;
    case 76:
      memset_0(v241, 0, 0x1B8uLL);
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      LODWORD(Count) = result;
      i = result;
      if ( result < 0 )
        return result;
      v99 = Object;
      PsQueryProcessEnergyValues(Object, v241);
      v152 = 432LL;
      if ( (unsigned int)v5 <= 0x1B0 )
        v152 = (unsigned int)v5;
      memmove((void *)v6, v241, v152);
      if ( a5 )
        *a5 = 432;
      goto LABEL_436;
    case 77:
      v228 = 0LL;
      v229 = 0;
      if ( (_DWORD)v5 != 12 )
        return -1073741820;
      if ( !ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost) )
        return -1073741822;
      v54 = ObpReferenceObjectByHandleWithTag(
              BugCheckParameter1,
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
        v56 = guard_dispatch_icall_no_overrides(Object, &v228, v52, v53);
        i = v56;
        if ( v56 >= 0 )
        {
          *(_QWORD *)v6 = v228;
          *(_DWORD *)(v6 + 8) = v229;
          if ( a5 )
            *a5 = 12;
          v56 = 0;
          i = 0;
        }
        ObfDereferenceObjectWithTag(v55, 0x79517350u);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        return v56;
      }
    case 79:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( BugCheckParameter1 == -1LL )
      {
        v98 = &KeGetCurrentThread()->ApcState.Process->Header.LockNV;
        Object = v98;
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
        v98 = Object;
        LODWORD(v12) = 1;
      }
      *(_DWORD *)v6 = 0;
      v114 = 0;
      if ( (v98[468] & 0x4000) != 0 )
      {
        *(_DWORD *)v6 = v12;
        v114 = v12;
      }
      if ( (v98[468] & 0x8000) != 0 )
        *(_DWORD *)v6 = v114 | 2;
      *(_DWORD *)(v6 + 4) = v98[442];
      if ( a5 )
        *a5 = 8;
      if ( BugCheckParameter1 != -1LL )
      {
LABEL_423:
        ObfDereferenceObjectWithTag(v98, 0x79517350u);
        return Count;
      }
      return Count;
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
      if ( result < 0 )
        return result;
      v44 = Object;
      DeviceMapInformation = PspAllocateAndQueryProcessNotificationChannel(v181, Object, v6);
      if ( DeviceMapInformation >= 0 && a5 )
      {
        *a5 = 48;
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
    case 82:
      memset_0(v240, 0, sizeof(v240));
      if ( (unsigned int)v5 < 8 )
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
      i = result;
      if ( result < 0 )
        return result;
      v99 = Object;
      PoQueryProcessEnergyTrackingState(Object, v240);
      if ( (unsigned int)v5 >= 0x90 )
        LODWORD(v5) = 144;
      memmove((void *)v6, v240, (unsigned int)v5);
      if ( a5 )
        *a5 = v5;
      i = 0;
      goto LABEL_436;
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
      v94 = Object;
      if ( *((_QWORD *)Object + 46) )
      {
        v157 = VslLiveDumpCaptureProcess(Object);
        ObfDereferenceObjectWithTag(v94, 0x79517350u);
        return v157;
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
LABEL_333:
      LODWORD(Count) = ProcessTelemetryCoverage;
      goto LABEL_334;
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
      v81 = result;
      if ( result >= 0 )
      {
        v82 = Object;
        *(_BYTE *)v6 = HIBYTE(*((_DWORD *)Object + 124)) & 3;
        if ( a2 == 96 )
          *(_DWORD *)v6 |= (v82[383] & 0x80000 | v82[383] & 0x100000 | ((v82[383] & 0x10000000 | (v82[383] >> 2) & 0x8000000u) >> 6)) >> 17;
        ObfDereferenceObjectWithTag(v82, 0x79517350u);
        return v81;
      }
      return result;
    case 88:
      v215 = 0LL;
      v216 = 0LL;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
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
      v127 = Object;
      PspLockProcessShared((__int64)Object, (__int64)v181);
      v128 = v127[212] >> 61;
      if ( v128 == 4 || v128 == 3 )
      {
        v129 = v127[212] & 0x1FFFFFFFFFFFFFFFLL;
        *(_QWORD *)&v193 = v129;
        Src.m256i_i64[2] = v127[211];
        v130 = Src.m256i_i64[2] - v127[208];
        Src.m256i_i64[3] = v130;
        if ( v128 == 3 )
        {
          v131 = v194 | 0x200;
LABEL_550:
          LODWORD(v194) = v131 & 0xFFFFFE00 | *((_BYTE *)v127 + 1531) & 7 | (unsigned __int8)(2
                                                                                            * (*((_BYTE *)v127 + 1531) & 0x38)) | ((*((_DWORD *)v127 + 383) & 4) << 6);
          PspUnlockProcessShared((__int64)v127);
          PsGetProcessDeepFreezeStats((__int64)v127, &v215);
          *(_OWORD *)Src.m256i_i8 = v215;
          *((_QWORD *)&v193 + 1) = v216;
          if ( !v130 )
            Src.m256i_i64[3] = v215 - v127[208];
          if ( !v129 )
            *(_QWORD *)&v193 = *((_QWORD *)&v215 + 1) - v127[209] - v216;
          if ( (unsigned int)v5 >= 0x38 )
            LODWORD(v5) = 56;
          memmove((void *)v6, &Src, (unsigned int)v5);
          if ( a5 )
            *a5 = v5;
          i = 0;
          ObfDereferenceObjectWithTag(v127, 0x79517350u);
          return 0;
        }
      }
      else
      {
        v129 = v193;
        v130 = Src.m256i_i64[3];
      }
      v131 = v194;
      goto LABEL_550;
    case 89:
      v211 = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( PreviousMode )
      {
        if ( v6 < 0x7FFFFFFF0000LL )
          v13 = v6;
        *(_QWORD *)v13 = *(_QWORD *)v13;
      }
      v158 = (PVOID *)KeGetCurrentThread()->ApcState.Process;
      Object = v158;
      if ( BugCheckParameter1 != -1LL || v158 != (PVOID *)CurrentThread->Process )
        return -1073741790;
      result = ObOpenObjectByPointer(v158[85], 0, 0LL, 5u, MmSectionObjectType, PreviousMode, &v211);
      i = result;
      if ( result >= 0 )
      {
        *(_QWORD *)v6 = v211;
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
      LODWORD(Count) = result;
      if ( result < 0 )
        return result;
      v98 = Object;
      *(_QWORD *)v6 = *((_QWORD *)Object + 207);
      if ( a5 )
        *a5 = 8;
      goto LABEL_423;
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
      i = result;
      if ( result < 0 )
        return result;
      if ( (*((_DWORD *)Object + 124) & 0x8000) == 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741700;
      }
      _InterlockedOr(v163, 0);
      *(_QWORD *)v6 = *((_QWORD *)Object + 236);
      if ( a5 )
        *a5 = 8;
      i = 0;
LABEL_334:
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return Count;
    case 97:
      if ( (_DWORD)v5 != 8 )
      {
        if ( a5 )
          *a5 = 8;
        return -1073741820;
      }
      if ( BugCheckParameter1 != -1LL )
        return -1073741811;
      v159 = KeGetCurrentThread()->ApcState.Process;
      Object = v159;
      i = 0;
      Blink = v159[1].ProcessListEntry.Blink;
      if ( !Blink )
        goto LABEL_787;
      v161 = 0LL;
      ReadyTime = (__int64 *)v159[1].ReadyTime;
      if ( ReadyTime )
        v161 = *ReadyTime;
      if ( v161 )
      {
        if ( (*(_DWORD *)(v161 + 1140) & 1) == 0 )
          goto LABEL_787;
      }
      else if ( ((__int64)Blink[124].Flink & 1) == 0 )
      {
        goto LABEL_787;
      }
      Src.m256i_i32[0] |= 1u;
LABEL_787:
      *(_QWORD *)v6 = Src.m256i_i64[0];
      if ( a5 )
        *a5 = 8;
      return Count;
    case 106:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      Src.m256i_i32[0] = 16;
      *(_DWORD *)v6 = 16;
      if ( a5 )
        *a5 = 4;
      return 0;
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
      LODWORD(Count) = result;
      if ( result < 0 )
        return result;
      *(_OWORD *)Src.m256i_i8 = *(_OWORD *)*((_QWORD *)Object + 254);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_OWORD *)v6 = *(_OWORD *)Src.m256i_i8;
      if ( a5 )
        *a5 = 16;
      return Count;
    case 115:
      v230 = 0LL;
      if ( (_DWORD)v5 != 16 )
        return -1073741820;
      if ( BugCheckParameter1 != -1LL )
        return -1073741811;
      if ( PreviousMode )
      {
        RtlCopyVolatileMemory(&v230, (const void *)v6, 0x10uLL);
        if ( (v6 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v115 = 0x7FFFFFFF0000LL;
        if ( v6 < 0x7FFFFFFF0000LL )
          v115 = v6;
        *(_DWORD *)v115 = *(_DWORD *)v115;
        v116 = &v230;
      }
      else
      {
        v116 = (__int128 *)v6;
      }
      FirstThreadByTebValue = PspFindFirstThreadByTebValue((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
      v118 = FirstThreadByTebValue;
      if ( FirstThreadByTebValue == -1073741275 )
      {
        *(_DWORD *)v116 = 0;
        v118 = 0;
      }
      else if ( FirstThreadByTebValue < 0 )
      {
        return v118;
      }
      if ( PreviousMode )
      {
        *(_DWORD *)v6 = *(_DWORD *)v116;
        if ( a5 )
          *a5 = 4;
      }
      else if ( a5 )
      {
        *a5 = 4;
      }
      return v118;
    default:
      return -1073741821;
  }
}
