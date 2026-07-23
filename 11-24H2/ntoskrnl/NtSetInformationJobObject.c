/*
 * XREFs of NtSetInformationJobObject @ 0x140ACC7F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     PspHardDereferenceSiloWorker @ 0x1403B33A0 (PspHardDereferenceSiloWorker.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14040880C (ExfAcquireReleasePushLockExclusive.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     KeFirstGroupAffinityEx @ 0x14044FD10 (KeFirstGroupAffinityEx.c)
 *     KeSetSchedulingGroupWeights @ 0x14045C2E8 (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x14045C5E8 (KeSetSchedulingGroupCpuRates.c)
 *     KeSetSchedulingGroupRankBias @ 0x14045D344 (KeSetSchedulingGroupRankBias.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x1404694D4 (KeQuerySchedulingGroupReadyTime.c)
 *     KeQueryActiveGroupCount @ 0x14047C720 (KeQueryActiveGroupCount.c)
 *     KeQueryPrimaryGroupThread @ 0x140480638 (KeQueryPrimaryGroupThread.c)
 *     wcsnlen @ 0x1404FD950 (wcsnlen.c)
 *     KeSetSchedulingGroupCycleNotification @ 0x1405C4E44 (KeSetSchedulingGroupCycleNotification.c)
 *     PspJobIsAppSilo @ 0x1405E2318 (PspJobIsAppSilo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PspAssignSiloSystemRootPath @ 0x1407726E0 (PspAssignSiloSystemRootPath.c)
 *     PspConvertSiloToServerSilo @ 0x140772974 (PspConvertSiloToServerSilo.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1407775D8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x1407776A0 (PspApplyWorkingSetLimits.c)
 *     PspSetIoPriorityLimitJobTree @ 0x140777F64 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobMemoryPartition @ 0x140778014 (PspSetJobMemoryPartition.c)
 *     PspSetJobSiloThreadImpersonationPolicy @ 0x140778358 (PspSetJobSiloThreadImpersonationPolicy.c)
 *     PspSetNetRateControl @ 0x1407783E4 (PspSetNetRateControl.c)
 *     PspSetPagePriorityLimitJobTree @ 0x1407786B0 (PspSetPagePriorityLimitJobTree.c)
 *     PspSetUILimitJobObject @ 0x140778788 (PspSetUILimitJobObject.c)
 *     ObCreateSiloRootDirectory @ 0x14082B404 (ObCreateSiloRootDirectory.c)
 *     SeCaptureSubjectContextEx @ 0x14083BF00 (SeCaptureSubjectContextEx.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     PsReturnSharedPoolQuota @ 0x140856970 (PsReturnSharedPoolQuota.c)
 *     PspLockRootJobExclusive @ 0x140858E9C (PspLockRootJobExclusive.c)
 *     PspSetJobIoRateControl @ 0x14085A388 (PspSetJobIoRateControl.c)
 *     PspLockJobConditionally @ 0x14085A6BC (PspLockJobConditionally.c)
 *     PspIsContextAdmin @ 0x14085A9A4 (PspIsContextAdmin.c)
 *     PspLockJobMemoryLimitsExclusive @ 0x14085AC20 (PspLockJobMemoryLimitsExclusive.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14085B860 (PspSetEnergyTrackingStateJobTree.c)
 *     PspSetJobIoAttribution @ 0x14085B900 (PspSetJobIoAttribution.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14085D4DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x14085EB90 (PspUnlockJob.c)
 *     PspLockJobMemoryLimitsShared @ 0x14085ED08 (PspLockJobMemoryLimitsShared.c)
 *     PspRateControlLimitFlag @ 0x14085ED70 (PspRateControlLimitFlag.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x14085ED94 (PspUnlockJobMemoryLimitsShared.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x1408D7760 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspLockJobChain @ 0x1408D7F38 (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x1408D80E0 (PspUnlockJobChain.c)
 *     SeCheckPrivilegedObject @ 0x1408EB21C (SeCheckPrivilegedObject.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1409774CC (PspAddSchedulingGroupToJobChain.c)
 *     PspFreeRateControl @ 0x14097782C (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140977878 (PspAllocateRateControl.c)
 *     PsChargeSharedPoolQuota @ 0x1409779B0 (PsChargeSharedPoolQuota.c)
 *     IoAllocateMiniCompletionPacket @ 0x140990590 (IoAllocateMiniCompletionPacket.c)
 *     IopFreeMiniCompletionPacket @ 0x140990680 (IopFreeMiniCompletionPacket.c)
 *     SePrivilegeCheck @ 0x14099A020 (SePrivilegeCheck.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x1409E932C (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspUnlockJobConditionally @ 0x140A2BA80 (PspUnlockJobConditionally.c)
 *     PspGetJobLimitInformationValidFlags @ 0x140A2C180 (PspGetJobLimitInformationValidFlags.c)
 *     PspScheduleEnforcementWorker @ 0x140A41DC0 (PspScheduleEnforcementWorker.c)
 *     EtwTraceJobSetQuery @ 0x140A4E224 (EtwTraceJobSetQuery.c)
 *     PspSetBackgroundJobTree @ 0x140A50138 (PspSetBackgroundJobTree.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x140A50A14 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x140A528A8 (PspNotificationLimitRateControlToleranceField.c)
 *     PspFreezeJobTree @ 0x140A67B30 (PspFreezeJobTree.c)
 *     PspCreateSilo @ 0x140A6D570 (PspCreateSilo.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength)
{
  size_t v4; // r12
  __int64 v5; // rdi
  unsigned int v7; // ecx
  bool v8; // zf
  KPROCESSOR_MODE v9; // al
  __m128i *v10; // r13
  NTSTATUS result; // eax
  int v12; // edx
  int v13; // esi
  char v14; // bl
  int v15; // eax
  int v16; // r8d
  unsigned __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r11
  __int64 v20; // r10
  ULONG_PTR MiniCompletionPacket; // rbx
  PRKEVENT v22; // r14
  void *v23; // rdi
  unsigned int v24; // ebx
  struct _ERESOURCE *p_WaitListHead; // rcx
  int Silo; // eax
  JOBOBJECTINFOCLASS v27; // r13d
  char v28; // al
  unsigned int v29; // eax
  char v30; // al
  unsigned __int64 v31; // r14
  JOBOBJECTINFOCLASS v32; // r13d
  __int64 v33; // rdi
  struct _LIST_ENTRY *v34; // rsi
  struct _LIST_ENTRY *v35; // rcx
  ULONG v36; // edx
  BOOLEAN v37; // al
  unsigned int v38; // r13d
  char *v39; // r13
  unsigned __int16 PrimaryGroupThread; // ax
  __int64 v41; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v42; // rax
  struct _KEVENT *v43; // rcx
  __int64 *v44; // rax
  bool v45; // cf
  char *v46; // rax
  char *v47; // rdi
  struct _LIST_ENTRY *p_Blink; // rsi
  struct _LIST_ENTRY *i; // rdi
  __int64 v50; // r9
  char *v51; // rcx
  unsigned int v52; // ecx
  unsigned int v53; // ebx
  unsigned __int16 v54; // di
  __int64 v55; // r14
  unsigned __int16 epi16; // ax
  __int64 v57; // rax
  struct _LIST_ENTRY *Pool2; // rdi
  SECURITY_IMPERSONATION_LEVEL *p_ImpersonationLevel; // r13
  BOOLEAN v60; // al
  __int64 v61; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v62; // rax
  struct _KEVENT *v63; // rdx
  __int64 *v64; // rax
  __int64 v65; // r8
  __int64 v66; // rsi
  struct _LIST_ENTRY *v67; // rdi
  int v68; // eax
  struct _LIST_ENTRY *v69; // r9
  unsigned int v70; // edx
  __int64 v71; // rdx
  int v72; // eax
  LONG v73; // edi
  char v74; // bl
  int v75; // esi
  bool v76; // cc
  int v77; // eax
  __int64 *RateControl; // rax
  __int64 *v79; // rdx
  unsigned __int16 v80; // cx
  _KSCHEDULING_GROUP_POLICY *v81; // rax
  _KSCHEDULING_GROUP_POLICY *v82; // rcx
  char **v83; // rcx
  unsigned int Value; // ebx
  __int64 v85; // rcx
  int v86; // r8d
  struct _ERESOURCE *v87; // rbx
  KPROCESSOR_MODE v88; // bl
  BOOLEAN v89; // al
  __int64 v90; // rdx
  BOOLEAN v91; // al
  unsigned __int64 v92; // rcx
  unsigned __int128 v93; // kr00_16
  int j; // edx
  int v95; // edx
  int v96; // edx
  int v97; // eax
  int v98; // edx
  int *v99; // r9
  int *v100; // r10
  int v101; // r8d
  struct _LIST_ENTRY **v102; // r13
  struct _LIST_ENTRY *v103; // rbx
  char *v104; // rsi
  __int64 v105; // r9
  struct _LIST_ENTRY *v106; // rbx
  int Flink; // edi
  int k; // edx
  _DWORD *v109; // rax
  __int64 v110; // r8
  int v111; // edx
  _DWORD *v112; // rax
  _DWORD *v113; // r8
  int v114; // edx
  struct _LIST_ENTRY *v115; // rax
  struct _LIST_ENTRY *v116; // r8
  int JobMemoryUsageNotificationViolations; // ebx
  _WORD *v118; // rbx
  unsigned __int16 v119; // cx
  ULONG_PTR v120; // rdx
  ULONG_PTR v121; // rcx
  _WORD *v122; // rax
  ULONG v123; // edx
  void *v124; // rcx
  char v125; // bl
  PETHREAD v126; // r13
  __int64 v127; // rdx
  unsigned __int64 v128; // rdx
  unsigned __int64 v129; // rdx
  BOOLEAN v130; // al
  unsigned __int64 v131; // xmm0_8
  PVOID v132; // rbx
  unsigned __int16 v133; // si
  void *v134; // rax
  void *v135; // rdi
  PETHREAD v136; // r13
  signed __int32 v137[8]; // [rsp+0h] [rbp-C98h] BYREF
  PRKEVENT Event; // [rsp+40h] [rbp-C58h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+48h] [rbp-C50h]
  int v140; // [rsp+4Ch] [rbp-C4Ch]
  __int16 v141; // [rsp+50h] [rbp-C48h] BYREF
  KPROCESSOR_MODE v142; // [rsp+52h] [rbp-C46h]
  JOBOBJECTINFOCLASS v143; // [rsp+58h] [rbp-C40h]
  unsigned __int16 v144; // [rsp+60h] [rbp-C38h]
  JOBOBJECTINFOCLASS v145; // [rsp+64h] [rbp-C34h]
  _KSCHEDULING_GROUP_POLICY v146; // [rsp+68h] [rbp-C30h] BYREF
  int JobLimitInformationValidFlags; // [rsp+70h] [rbp-C28h]
  __int64 v148; // [rsp+78h] [rbp-C20h]
  PETHREAD Thread; // [rsp+80h] [rbp-C18h]
  PVOID P; // [rsp+88h] [rbp-C10h]
  char v151; // [rsp+90h] [rbp-C08h]
  __int8 v152; // [rsp+91h] [rbp-C07h]
  __int64 v153; // [rsp+98h] [rbp-C00h]
  PVOID Object[2]; // [rsp+A0h] [rbp-BF8h] BYREF
  ULONG_PTR BugCheckParameter1[2]; // [rsp+B0h] [rbp-BE8h] BYREF
  void *Src; // [rsp+C0h] [rbp-BD8h]
  PSECURITY_SUBJECT_CONTEXT v157; // [rsp+C8h] [rbp-BD0h]
  unsigned int v158; // [rsp+D0h] [rbp-BC8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-BC0h] BYREF
  void *v160; // [rsp+F8h] [rbp-BA0h]
  __int64 v161[2]; // [rsp+100h] [rbp-B98h] BYREF
  __int64 v162; // [rsp+110h] [rbp-B88h] BYREF
  struct _LIST_ENTRY *v163; // [rsp+118h] [rbp-B80h] BYREF
  __int64 v164; // [rsp+120h] [rbp-B78h] BYREF
  void *v165; // [rsp+128h] [rbp-B70h]
  __m128i v166; // [rsp+130h] [rbp-B68h] BYREF
  unsigned int v167; // [rsp+140h] [rbp-B58h]
  int v168; // [rsp+144h] [rbp-B54h]
  __int32 v169; // [rsp+148h] [rbp-B50h]
  int v170; // [rsp+14Ch] [rbp-B4Ch]
  int v171; // [rsp+150h] [rbp-B48h]
  __int32 v172; // [rsp+154h] [rbp-B44h]
  __int128 v173; // [rsp+158h] [rbp-B40h] BYREF
  __int128 v174; // [rsp+168h] [rbp-B30h]
  __m128i v175; // [rsp+180h] [rbp-B18h]
  __m128i v176; // [rsp+190h] [rbp-B08h]
  __m128i v177; // [rsp+1A0h] [rbp-AF8h]
  __m128i v178; // [rsp+1B0h] [rbp-AE8h]
  __int64 v179; // [rsp+1C0h] [rbp-AD8h]
  __int64 v180; // [rsp+1D0h] [rbp-AC8h]
  ULONG_PTR v181; // [rsp+1D8h] [rbp-AC0h]
  __int64 v182; // [rsp+1E0h] [rbp-AB8h]
  _BYTE v183[16]; // [rsp+1F0h] [rbp-AA8h] BYREF
  __int64 v184; // [rsp+200h] [rbp-A98h]
  void *v185; // [rsp+208h] [rbp-A90h]
  int v186; // [rsp+214h] [rbp-A84h]
  unsigned __int16 v187; // [rsp+218h] [rbp-A80h]
  __int64 v188; // [rsp+228h] [rbp-A70h]
  __int64 v189; // [rsp+240h] [rbp-A58h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+280h] [rbp-A18h] BYREF
  __int128 v191; // [rsp+2A0h] [rbp-9F8h] BYREF
  _BYTE v192[28]; // [rsp+2B0h] [rbp-9E8h]
  unsigned __int64 v193; // [rsp+2D0h] [rbp-9C8h]
  __m128i v194; // [rsp+2F0h] [rbp-9A8h] BYREF
  __int128 v195; // [rsp+300h] [rbp-998h] BYREF
  unsigned __int128 v196; // [rsp+310h] [rbp-988h]
  __int128 v197; // [rsp+320h] [rbp-978h]
  __int64 v198; // [rsp+330h] [rbp-968h]
  __int128 v199; // [rsp+338h] [rbp-960h] BYREF
  __int128 v200; // [rsp+348h] [rbp-950h]
  __int128 v201; // [rsp+358h] [rbp-940h]
  struct _LIST_ENTRY *v202; // [rsp+370h] [rbp-928h] BYREF
  struct _LIST_ENTRY *v203; // [rsp+378h] [rbp-920h]
  __int64 v204; // [rsp+380h] [rbp-918h]
  unsigned __int64 v205; // [rsp+388h] [rbp-910h]
  unsigned __int64 v206; // [rsp+390h] [rbp-908h]
  int v207; // [rsp+398h] [rbp-900h]
  __int64 v208; // [rsp+3A0h] [rbp-8F8h]
  unsigned int v209; // [rsp+3A8h] [rbp-8F0h]
  unsigned int v210; // [rsp+3ACh] [rbp-8ECh]
  unsigned __int64 v211; // [rsp+3E0h] [rbp-8B8h]
  unsigned __int64 v212; // [rsp+3E8h] [rbp-8B0h]
  unsigned __int64 v213; // [rsp+400h] [rbp-898h]
  __int64 v214; // [rsp+410h] [rbp-888h] BYREF
  _QWORD v215[33]; // [rsp+418h] [rbp-880h] BYREF
  char v216[224]; // [rsp+520h] [rbp-778h] BYREF
  struct _LIST_ENTRY *v217; // [rsp+600h] [rbp-698h]
  struct _LIST_ENTRY *Blink; // [rsp+608h] [rbp-690h]
  unsigned __int64 v219; // [rsp+610h] [rbp-688h]
  struct _LIST_ENTRY *v220; // [rsp+618h] [rbp-680h]
  JOBOBJECTINFOCLASS v221; // [rsp+620h] [rbp-678h]
  int v222; // [rsp+624h] [rbp-674h]
  __int64 v223; // [rsp+628h] [rbp-670h] BYREF
  char v224[308]; // [rsp+630h] [rbp-668h] BYREF
  int v225; // [rsp+764h] [rbp-534h]
  struct _LIST_ENTRY *v226; // [rsp+7D0h] [rbp-4C8h]
  unsigned __int64 v227; // [rsp+7D8h] [rbp-4C0h]
  struct _LIST_ENTRY *v228; // [rsp+7E0h] [rbp-4B8h]
  char v229; // [rsp+96Dh] [rbp-32Bh]

  v4 = JobObjectInformationLength;
  v5 = JobObjectInformationClass;
  v153 = (__int64)JobHandle;
  v143 = JobObjectInformationClass;
  v145 = JobObjectInformationClass;
  Src = JobObjectInformation;
  memset_0(v215, 0, 0x100uLL);
  v163 = 0LL;
  v162 = 0LL;
  v141 = 0;
  v164 = 0LL;
  memset_0(&v202, 0, 0x98uLL);
  v194 = 0LL;
  v166 = 0LL;
  Object[0] = 0LL;
  memset_0(v183, 0, 0x90uLL);
  Event = 0LL;
  v173 = 0LL;
  v174 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  LODWORD(v160) = 0;
  memset_0(&v191, 0, 0x48uLL);
  v199 = 0LL;
  v200 = 0LL;
  v201 = 0LL;
  v195 = 0LL;
  v196 = 0LL;
  v197 = 0LL;
  v198 = 0LL;
  v146 = 0LL;
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  BugCheckParameter1[0] = 0LL;
  *(_OWORD *)v161 = 0LL;
  if ( (unsigned int)(v5 - 1) > 0x32 )
    return -1073741821;
  switch ( (_DWORD)v5 )
  {
    case 9:
      if ( (_DWORD)v4 == 144 || (_DWORD)v4 == 152 )
        goto LABEL_14;
      return -1073741820;
    case 0xC:
      v8 = (((_DWORD)v4 - 48) & 0xFFFFFFF7) == 0;
LABEL_13:
      if ( v8 )
        goto LABEL_14;
      return -1073741820;
    case 0x1F:
      if ( (_DWORD)v4 == 48 || (_DWORD)v4 == 96 )
        goto LABEL_14;
      v8 = (_DWORD)v4 == 144;
      goto LABEL_13;
  }
  v7 = dword_140B404FC[v5];
  if ( (_DWORD)v4 != v7 && ((_DWORD)v5 != 11 && (_DWORD)v5 != 14 || (unsigned int)v4 < v7) )
    return -1073741820;
LABEL_14:
  Thread = KeGetCurrentThread();
  v9 = Thread->PreviousMode;
  PreviousMode = v9;
  v142 = v9;
  if ( v9 )
  {
    v10 = (__m128i *)Src;
    if ( (_DWORD)v4 )
    {
      if ( ((dword_140B405CC[v5] - 1) & (unsigned int)Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Src + v4 > 0x7FFFFFFF0000LL || (char *)Src + v4 < Src )
        v10 = (__m128i *)Src;
    }
    v9 = PreviousMode;
  }
  else
  {
    v10 = (__m128i *)Src;
  }
  if ( !JobHandle )
    return -1073741816;
  v12 = 16;
  if ( (_DWORD)v5 != 5 )
    v12 = 2;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)JobHandle,
             v12,
             (__int64)PsJobType,
             v9,
             0x79517350u,
             &Event,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v13 = 0;
    v140 = 0;
    v14 = 0;
    --Thread->SpecialApcDisable;
    if ( v143 <= JobObjectClearEvent )
    {
      if ( v143 != JobObjectClearEvent )
      {
        if ( v143 <= JobObjectGroupInformationEx )
        {
          if ( v143 == JobObjectGroupInformationEx )
          {
LABEL_192:
            P = 0LL;
            v52 = 16;
            if ( v145 != JobObjectGroupInformationEx )
              v52 = 2;
            v145 = v52;
            v53 = (unsigned int)v4 / v52;
            if ( (unsigned int)v4 % v52 )
            {
              v13 = -1073741820;
              goto LABEL_448;
            }
            v158 = (unsigned int)v4 / v52;
            v214 = 2097153LL;
            memset_0(v215, 0, 0x100uLL);
            v54 = KeQueryActiveGroupCount() - 1;
            v55 = (unsigned int)v145;
            while ( v53 )
            {
              if ( v143 == JobObjectGroupInformationEx )
              {
                v166 = *v10;
                epi16 = _mm_extract_epi16(v166, 4);
                v144 = epi16;
                v153 = v166.m128i_i64[0];
              }
              else
              {
                v57 = v10->m128i_u16[0];
                v144 = v57;
                if ( (unsigned __int16)v57 > v54 )
                  goto LABEL_206;
                v153 = KeActiveProcessors.Bitmap[v57];
                epi16 = v144;
              }
              if ( epi16 > v54 || v215[epi16] || v153 != (v153 & KeActiveProcessors.Bitmap[epi16]) )
              {
LABEL_206:
                v13 = -1073741811;
                v140 = -1073741811;
                break;
              }
              KeAddGroupAffinityEx((unsigned __int16 *)&v214, v144, v153);
              v53 = --v158;
              v10 = (__m128i *)((char *)Src + v55);
              Src = (char *)Src + v55;
              v13 = v140;
            }
            Pool2 = 0LL;
            v22 = Event;
            if ( v13 < 0 )
              goto LABEL_491;
            if ( !*(_QWORD *)&Event[22].Header.Lock )
            {
              Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL, 0x28uLL, 0x614A7350u);
              if ( !Pool2 )
                goto LABEL_125;
              P = (PVOID)PsChargeSharedPoolQuota((__int64)KeGetCurrentThread()->ApcState.Process, 0x28uLL, 0LL);
              if ( !P )
              {
                v35 = Pool2;
                goto LABEL_128;
              }
              v22 = Event;
            }
            SeCaptureSubjectContextEx(
              Thread,
              Thread->ApcState.Process,
              (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
            p_ImpersonationLevel = &SubjectContext.ImpersonationLevel;
            if ( PreviousMode )
            {
              RequiredPrivileges.PrivilegeCount = 1;
              RequiredPrivileges.Control = 1;
              RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
              RequiredPrivileges.Privilege[0].Attributes = 0;
              v60 = SePrivilegeCheck(
                      &RequiredPrivileges,
                      (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                      1);
              LODWORD(SubjectContext.ClientToken) = (__int64)SubjectContext.ClientToken & 0xFFFFFFFE | v60 & 1;
            }
            else
            {
              LODWORD(SubjectContext.ClientToken) |= 1u;
            }
            ExAcquireResourceExclusiveLite((PERESOURCE)&v22[2].Header.WaitListHead, 1u);
            v13 = PspEnumJobsAndProcessesInJobHierarchy(
                    (char *)v22,
                    0,
                    0,
                    (int)PspSetAffinityLimitCallback,
                    (__int64)&SubjectContext,
                    1);
            v140 = v13;
            if ( v13 >= 0 )
            {
              v61 = *(_QWORD *)&v22[22].Header.Lock;
              if ( v61 )
              {
                v173 = *(_OWORD *)(v61 + 8);
                v174 = *(_OWORD *)(v61 + 24);
                p_ImpersonationLevel = (SECURITY_IMPERSONATION_LEVEL *)&v173;
              }
              else
              {
                *(_QWORD *)&v22[22].Header.Lock = Pool2;
                v22[22].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)P;
                Pool2 = 0LL;
                p_ImpersonationLevel = 0LL;
              }
              v62 = *(struct _SECURITY_SUBJECT_CONTEXT **)&v22[22].Header.Lock;
              *v62 = SubjectContext;
              v62[1].ClientToken = v160;
              v161[0] = (__int64)v22;
              HIDWORD(v161[1]) = v22[10].Header.WaitListHead.Blink;
              LODWORD(v161[1]) = -17;
              v63 = v22 + 11;
              v64 = &v214;
              v65 = 2LL;
              do
              {
                *(_OWORD *)&v63->Header.Lock = *(_OWORD *)v64;
                *(_OWORD *)&v63->Header.WaitListHead.Blink = *((_OWORD *)v64 + 1);
                v63[1].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v64 + 2);
                *(_OWORD *)&v63[2].Header.Lock = *((_OWORD *)v64 + 3);
                *(_OWORD *)&v63[2].Header.WaitListHead.Blink = *((_OWORD *)v64 + 4);
                v63[3].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v64 + 5);
                *(_OWORD *)&v63[4].Header.Lock = *((_OWORD *)v64 + 6);
                v63 = (struct _KEVENT *)((char *)v63 + 128);
                v63[-1].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v64 + 7);
                v64 += 16;
                --v65;
              }
              while ( v65 );
              *(_QWORD *)&v63->Header.Lock = *v64;
              if ( v143 == JobObjectGroupInformationEx
                && (unsigned int)KeIsEmptyAffinityEx((unsigned __int16 *)&v22[11]) )
              {
                LODWORD(v22[10].Header.WaitListHead.Blink) &= ~0x10u;
                _InterlockedAnd((volatile signed __int32 *)&v22[64].Header.WaitListHead.Blink, 0xFFFFFFFD);
              }
              else
              {
                LODWORD(v22[10].Header.WaitListHead.Blink) |= 0x10u;
                _InterlockedOr((volatile signed __int32 *)&v22[64].Header.WaitListHead.Blink, 2u);
              }
              v22 = Event;
              PspEnumJobsAndProcessesInJobHierarchy(
                (char *)Event,
                (int)PspSetJobLimitsJobPreCallback,
                0,
                (int)PspSetJobLimitsProcessCallback,
                (__int64)v161,
                5);
              v13 = v140;
            }
            ExReleaseResourceLite((PERESOURCE)&v22[2].Header.WaitListHead);
            if ( p_ImpersonationLevel )
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)p_ImpersonationLevel);
            if ( !Pool2 )
              goto LABEL_491;
            ExFreePoolWithTag(Pool2, 0x614A7350u);
            v51 = (char *)P;
LABEL_231:
            PsReturnSharedPoolQuota(v51, 0x28uLL, 0LL, v50);
            goto LABEL_491;
          }
          if ( v143 == JobObjectBasicLimitInformation )
          {
LABEL_72:
            memmove(&v202, v10, v4);
            if ( (unsigned int)v4 < 0x98 )
              memset_0((char *)&v202 + v4, 0, 152 - v4);
            JobLimitInformationValidFlags = PspGetJobLimitInformationValidFlags(v143, v4);
            v27 = (int)v204;
            if ( (~JobLimitInformationValidFlags & (unsigned int)v204) != 0 )
              goto LABEL_75;
            memset_0(v216, 0, 0x728uLL);
            memset(&SubjectContext, 0, sizeof(SubjectContext));
            v160 = 0LL;
            v221 = v27;
            P = 0LL;
            v148 = 0LL;
            v157 = 0LL;
            v222 = (v27 & 8) != 0 ? v207 : 0;
            if ( (v27 & 0x20) != 0 )
            {
              if ( v209 > 6 )
                goto LABEL_462;
              if ( v209 - 3 <= 1 )
              {
                v28 = SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, v153, 2, PreviousMode) & 1;
                v14 = 4 * v28;
                if ( !v28 )
                  goto LABEL_80;
              }
              v229 = v209;
            }
            else
            {
              v229 = 0;
            }
            if ( (v27 & 0x80u) == 0 )
            {
              v225 = 5;
            }
            else
            {
              v29 = v210;
              if ( v210 >= 0xA )
                goto LABEL_462;
              if ( v210 > 5 )
              {
                v30 = SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, v153, 2, PreviousMode) & 1;
                v14 = 4 * v30;
                if ( !v30 )
                  goto LABEL_80;
                v29 = v210;
              }
              v225 = v29;
            }
            if ( (v27 & 2) != 0 )
            {
              if ( !v202 )
                goto LABEL_462;
              v217 = v202;
            }
            else
            {
              v217 = 0LL;
            }
            if ( (v27 & 4) != 0 )
            {
              if ( !v203 )
                goto LABEL_462;
              Blink = v203;
            }
            if ( (v27 & 1) == 0 )
            {
              v219 = 0LL;
              v220 = 0LL;
              goto LABEL_108;
            }
            v31 = v205;
            if ( !v205 && !v206 || v205 == -1LL && v206 == -1LL || v205 > v206 || v205 < 0x14000 )
              goto LABEL_462;
            if ( v205 <= PspMinimumWorkingSet || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
            {
              v219 = v31;
              v220 = (struct _LIST_ENTRY *)v206;
LABEL_108:
              if ( (v27 & 0x100) != 0 )
              {
                if ( v211 < 0x1000 )
                  goto LABEL_462;
                v226 = (struct _LIST_ENTRY *)(v211 >> 12);
              }
              else
              {
                v226 = 0LL;
              }
              if ( (v27 & 0x200) != 0 )
              {
                if ( v212 < 0x1000 )
                  goto LABEL_462;
                v227 = v212 >> 12;
              }
              else
              {
                v227 = 0LL;
              }
              if ( (v27 & 0x200000) == 0 )
              {
                v228 = 0LL;
                goto LABEL_120;
              }
              if ( v213 >= 0x1000 )
              {
                v228 = (struct _LIST_ENTRY *)(v213 >> 12);
LABEL_120:
                v223 = 2097153LL;
                memset_0(v224, 0, 0x100uLL);
                v32 = v221;
                v145 = v221;
                v22 = Event;
                v33 = 2LL;
                if ( (v221 & 0x10) == 0 )
                  goto LABEL_135;
                if ( ((__int64)Event[64].Header.WaitListHead.Blink & 2) == 0 && v208 )
                {
                  if ( !*(_QWORD *)&Event[22].Header.Lock )
                  {
                    v34 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL, 0x28uLL, 0x614A7350u);
                    P = v34;
                    if ( !v34 )
                      goto LABEL_125;
                    v148 = PsChargeSharedPoolQuota((__int64)KeGetCurrentThread()->ApcState.Process, 0x28uLL, 0LL);
                    if ( !v148 )
                    {
                      v35 = v34;
LABEL_128:
                      v36 = 1632269136;
LABEL_129:
                      ExFreePoolWithTag(v35, v36);
                      v13 = -1073741670;
                      goto LABEL_448;
                    }
                    v22 = Event;
                    v145 = v221;
                    v13 = v140;
                  }
                  SeCaptureSubjectContextEx(
                    Thread,
                    Thread->ApcState.Process,
                    (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
                  v157 = (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel;
                  if ( PreviousMode )
                  {
                    RequiredPrivileges.PrivilegeCount = 1;
                    RequiredPrivileges.Control = 1;
                    RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
                    RequiredPrivileges.Privilege[0].Attributes = 0;
                    v37 = SePrivilegeCheck(
                            &RequiredPrivileges,
                            (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                            1);
                    LODWORD(SubjectContext.ClientToken) = (__int64)SubjectContext.ClientToken & 0xFFFFFFFE | v37 & 1;
                  }
                  else
                  {
                    LODWORD(SubjectContext.ClientToken) |= 1u;
                  }
                  v14 |= 2u;
                  v32 = v145;
LABEL_135:
                  ExAcquireResourceExclusiveLite((PERESOURCE)&v22[2].Header.WaitListHead, 1u);
                  if ( (v32 & 4) == 0 )
                  {
                    if ( (v32 & 0x40) != 0 )
                    {
                      v32 |= (__int64)v22[10].Header.WaitListHead.Blink & 4;
                      Blink = v22[9].Header.WaitListHead.Blink;
                    }
                    else
                    {
                      Blink = 0LL;
                    }
                  }
                  v38 = v32 & 0xFFFFFFBF;
                  v221 = v38;
                  if ( (v14 & 2) != 0 )
                  {
                    if ( ((__int64)v22[64].Header.WaitListHead.Blink & 2) != 0 )
                    {
LABEL_141:
                      v13 = -1073741811;
                      v140 = -1073741811;
LABEL_142:
                      v39 = (char *)v148;
LABEL_175:
                      if ( (v14 & 1) != 0 )
                      {
                        v46 = (char *)KeAbPreAcquire((__int64)&qword_140FC70E8, 0LL);
                        v47 = v46;
                        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140FC70E8, 0LL) )
                          ExfAcquirePushLockExclusiveEx(&qword_140FC70E8, v46, (__int64)&qword_140FC70E8);
                        if ( v47 )
                          v47[10] = 1;
                        _InterlockedOr((volatile signed __int32 *)&Event[64].Header.WaitListHead.Blink, 0x100u);
                        v22 = Event;
                        p_Blink = (struct _LIST_ENTRY *)&Event[1].Header.WaitListHead.Blink;
                        for ( i = Event[1].Header.WaitListHead.Blink; i != p_Blink; i = i->Flink )
                        {
                          if ( ((__int64)i[-23].Blink & 1) == 0 )
                            PspAddProcessToWorkingSetChangeList((_KPROCESS *)&i[-54].Blink);
                        }
                        v13 = v140;
                      }
                      ExReleaseResourceLite((PERESOURCE)&v22[2].Header.WaitListHead);
                      if ( (v14 & 1) != 0 )
                        PspApplyWorkingSetLimits((__int64)v22);
                      if ( v157 )
                        SeReleaseSubjectContext(v157);
                      if ( !P )
                        goto LABEL_491;
                      ExFreePoolWithTag(P, 0x614A7350u);
                      v51 = v39;
                      goto LABEL_231;
                    }
                    if ( ((__int64)v22[10].Header.WaitListHead.Blink & 0x10) != 0 )
                    {
                      KeFirstGroupAffinityEx((__int64)&v166, (unsigned __int16 *)&v22[11]);
                      PrimaryGroupThread = v166.m128i_u16[4];
                    }
                    else
                    {
                      PrimaryGroupThread = KeQueryPrimaryGroupThread((__int64)KeGetCurrentThread());
                      v166.m128i_i16[4] = PrimaryGroupThread;
                    }
                    if ( v208 != (KeActiveProcessors.Bitmap[PrimaryGroupThread] & v208) )
                    {
                      v22 = Event;
                      goto LABEL_141;
                    }
                    KeAddGroupAffinityEx((unsigned __int16 *)&v223, v166.m128i_u16[4], v208);
                    v22 = Event;
                    v13 = PspEnumJobsAndProcessesInJobHierarchy(
                            (char *)Event,
                            0,
                            0,
                            (int)PspSetAffinityLimitCallback,
                            (__int64)&SubjectContext,
                            1);
                    v140 = v13;
                    if ( v13 < 0 )
                      goto LABEL_142;
                    v41 = *(_QWORD *)&v22[22].Header.Lock;
                    v39 = (char *)v148;
                    if ( v41 )
                    {
                      v173 = *(_OWORD *)(v41 + 8);
                      v174 = *(_OWORD *)(v41 + 24);
                      v157 = (PSECURITY_SUBJECT_CONTEXT)&v173;
                    }
                    else
                    {
                      *(_QWORD *)&v22[22].Header.Lock = P;
                      v22[22].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v39;
                      P = 0LL;
                      v157 = 0LL;
                    }
                    v42 = *(struct _SECURITY_SUBJECT_CONTEXT **)&v22[22].Header.Lock;
                    *v42 = SubjectContext;
                    v42[1].ClientToken = v160;
                  }
                  else
                  {
                    v45 = (v38 & 0x4000) != 0;
                    v39 = (char *)v148;
                    if ( v45 && ((__int64)v22[64].Header.WaitListHead.Blink & 2) == 0 )
                    {
                      v13 = -1073741811;
                      v140 = -1073741811;
                      goto LABEL_175;
                    }
                  }
                  if ( ((__int64)v22[10].Header.WaitListHead.Blink & 1) != 0 && (v221 & 1) == 0 )
                  {
                    _InterlockedOr(v137, 0);
                    if ( (qword_140FC70E8 & 1) != 0 )
                      ExfAcquireReleasePushLockExclusive(&qword_140FC70E8);
                    v13 = v140;
                    v22 = Event;
                  }
                  v161[0] = (__int64)v22;
                  HIDWORD(v161[1]) = v22[10].Header.WaitListHead.Blink;
                  *(_QWORD *)&v22[10].Header.Lock = v219;
                  v22[10].Header.WaitListHead.Flink = v220;
                  HIDWORD(v22[10].Header.WaitListHead.Blink) = v222;
                  if ( (v14 & 2) != 0 )
                  {
                    v43 = v22 + 11;
                    v44 = &v223;
                    do
                    {
                      *(_OWORD *)&v43->Header.Lock = *(_OWORD *)v44;
                      *(_OWORD *)&v43->Header.WaitListHead.Blink = *((_OWORD *)v44 + 1);
                      v43[1].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v44 + 2);
                      *(_OWORD *)&v43[2].Header.Lock = *((_OWORD *)v44 + 3);
                      *(_OWORD *)&v43[2].Header.WaitListHead.Blink = *((_OWORD *)v44 + 4);
                      v43[3].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v44 + 5);
                      *(_OWORD *)&v43[4].Header.Lock = *((_OWORD *)v44 + 6);
                      v43 = (struct _KEVENT *)((char *)v43 + 128);
                      v43[-1].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v44 + 7);
                      v44 += 16;
                      --v33;
                    }
                    while ( v33 );
                    *(_QWORD *)&v43->Header.Lock = *v44;
                  }
                  BYTE5(v22[45].Header.WaitListHead.Blink) = v229;
                  v22[24].Header.SignalState = v225;
                  v22[9].Header.WaitListHead.Flink = v217;
                  v22[9].Header.WaitListHead.Blink = Blink;
                  if ( v143 == JobObjectExtendedLimitInformation )
                  {
                    PspLockJobMemoryLimitsExclusive((__int64)v22, 0LL, 0LL);
                    LODWORD(v22[10].Header.WaitListHead.Blink) = v221 | (__int64)v22[10].Header.WaitListHead.Blink & ~JobLimitInformationValidFlags;
                    v22[28].Header.WaitListHead.Blink = v226;
                    *(_QWORD *)&v22[29].Header.Lock = v227;
                    v22[29].Header.WaitListHead.Flink = v228;
                    PspUnlockJobMemoryLimitsExclusive((__int64)v22, 0LL, 0LL);
                  }
                  else
                  {
                    LODWORD(v22[10].Header.WaitListHead.Blink) = v221 | (__int64)v22[10].Header.WaitListHead.Blink & ~JobLimitInformationValidFlags;
                  }
                  LODWORD(v161[1]) = ~(LODWORD(v22[10].Header.WaitListHead.Blink) | HIDWORD(v161[1]));
                  if ( (v204 & 4) != 0 )
                  {
                    PspEnumJobsAndProcessesInJobHierarchy(
                      (char *)v22,
                      0,
                      0,
                      (int)PspSetJobTimeLimitCallback,
                      (__int64)&v22[9].Header.WaitListHead.Blink,
                      1);
                    v22[7].Header.WaitListHead.Blink = 0LL;
                    *(_QWORD *)&v22[8].Header.Lock = 0LL;
                    KeResetEvent(v22);
                  }
                  if ( ((__int64)v22[10].Header.WaitListHead.Blink & 6) != 0 )
                  {
                    _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
                    v22 = Event;
                    v13 = v140;
                  }
                  if ( (v161[1] & 1) == 0 )
                    v14 |= 1u;
                  PspEnumJobsAndProcessesInJobHierarchy(
                    (char *)v22,
                    (int)PspSetJobLimitsJobPreCallback,
                    (int)PspSetJobLimitsJobPostCallback,
                    (int)PspSetJobLimitsProcessCallback,
                    (__int64)v161,
                    5);
                  goto LABEL_175;
                }
                goto LABEL_466;
              }
              goto LABEL_462;
            }
LABEL_80:
            v13 = -1073741727;
            goto LABEL_448;
          }
          if ( v143 != JobObjectBasicUIRestrictions )
          {
            if ( v143 == JobObjectSecurityLimitInformation )
            {
              v175 = *v10;
              v176 = v10[1];
              v177.m128i_i64[0] = v10[2].m128i_i64[0];
              v13 = (v175.m128i_i32[0] & 0xFFFFFFF0) != 0 ? -1073741811 : -1073741637;
LABEL_448:
              v22 = Event;
              goto LABEL_491;
            }
            if ( v143 != JobObjectEndOfJobTimeInformation )
            {
              if ( v143 == JobObjectAssociateCompletionPortInformation )
              {
                MiniCompletionPacket = 0LL;
                *(__m128i *)BugCheckParameter1 = *v10;
                if ( BugCheckParameter1[1] )
                {
                  v13 = ObpReferenceObjectByHandleWithTag(
                          BugCheckParameter1[1],
                          2,
                          (__int64)IoCompletionObjectType,
                          PreviousMode,
                          0x624A7350u,
                          Object,
                          0LL,
                          0LL);
                  v22 = Event;
                  if ( v13 >= 0 )
                  {
                    if ( Event[51].Header.WaitListHead.Flink
                      || (MiniCompletionPacket = IoAllocateMiniCompletionPacket(
                                                   (__int64)PspNotificationPacketCallback,
                                                   (__int64)Event)) != 0 )
                    {
                      ExAcquireResourceExclusiveLite((PERESOURCE)&v22[2].Header.WaitListHead, 1u);
                      if ( *(_QWORD *)&v22[23].Header.Lock
                        || ((__int64)v22[10].Header.WaitListHead.Blink & 0x2000) != 0
                        && ((__int64)v22[64].Header.WaitListHead.Blink & 1) != 0 )
                      {
                        ExReleaseResourceLite((PERESOURCE)&v22[2].Header.WaitListHead);
                        ObfDereferenceObjectWithTag(Object[0], 0x624A7350u);
                        v13 = -1073741811;
                      }
                      else
                      {
                        if ( !v22[51].Header.WaitListHead.Flink )
                        {
                          v22[51].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MiniCompletionPacket;
                          MiniCompletionPacket = 0LL;
                        }
                        PspLockJobMemoryLimitsExclusive((__int64)v22, 0LL, 0LL);
                        v22[23].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)BugCheckParameter1[0];
                        *(PVOID *)&v22[23].Header.Lock = Object[0];
                        v22[23].Header.WaitListHead.Blink = 0LL;
                        PspUnlockJobMemoryLimitsExclusive((__int64)v22, 0LL, 0LL);
                        if ( (v22[46].Header.LockNV & 0x40) != 0 )
                          PspEnumJobsAndProcessesInJobHierarchy(
                            (char *)v22,
                            0,
                            0,
                            (int)PspAssociateCompletionPortCallback,
                            (__int64)v22,
                            1);
                        ExReleaseResourceLite((PERESOURCE)&v22[2].Header.WaitListHead);
                      }
                    }
                    else
                    {
                      v13 = -1073741670;
                    }
                  }
                  if ( MiniCompletionPacket )
                  {
                    *(_QWORD *)(MiniCompletionPacket + 56) = 0LL;
                    IopFreeMiniCompletionPacket(MiniCompletionPacket);
                  }
                }
                else
                {
                  v22 = Event;
                  ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
                  PspLockJobMemoryLimitsExclusive((__int64)v22, 0LL, 0LL);
                  v23 = *(void **)&v22[23].Header.Lock;
                  *(_QWORD *)&v22[23].Header.Lock = 0LL;
                  PspUnlockJobMemoryLimitsExclusive((__int64)v22, 0LL, 0LL);
                  ExReleaseResourceLite((PERESOURCE)&v22[2].Header.WaitListHead);
                  if ( v23 )
                    ObfDereferenceObjectWithTag(v23, 0x624A7350u);
                }
                goto LABEL_491;
              }
              if ( v143 != JobObjectExtendedLimitInformation )
              {
                if ( v143 != JobObjectGroupInformation )
                {
                  if ( v143 == JobObjectNotificationLimitInformation )
                    goto LABEL_44;
LABEL_447:
                  v13 = -1073741821;
                  goto LABEL_448;
                }
                goto LABEL_192;
              }
              goto LABEL_72;
            }
            v167 = v10->m128i_i32[0];
            v24 = v167;
            v22 = Event;
            if ( v167 <= 1 )
            {
              ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
              HIDWORD(v22[22].Header.WaitListHead.Blink) = v24;
LABEL_68:
              p_WaitListHead = (struct _ERESOURCE *)&v22[2].Header.WaitListHead;
LABEL_69:
              ExReleaseResourceLite(p_WaitListHead);
              goto LABEL_491;
            }
LABEL_466:
            v13 = -1073741811;
            goto LABEL_491;
          }
          v168 = v10->m128i_i32[0];
          v22 = Event;
          Silo = PspSetUILimitJobObject((__int64)Event, (__int64)Thread, v168, 0);
          goto LABEL_490;
        }
        if ( v143 != JobObjectCpuRateControlInformation )
        {
          if ( v143 != JobObjectCompletionFilter )
          {
            if ( v143 == JobObjectFreezeInformation )
            {
              v194 = *v10;
              if ( !v194.m128i_i32[0] || (v194.m128i_i32[0] & 0xFFFFFFF0) != 0 )
                goto LABEL_75;
              if ( (v194.m128i_i8[0] & 1) != 0 || (v194.m128i_i8[0] & 8) == 0 )
              {
                v22 = Event;
                v13 = PspFreezeJobTree((__int64)Event, (__int64)&v194);
                if ( v13 >= 0 )
                  v10->m128i_i32[0] = v194.m128i_i32[0];
                goto LABEL_491;
              }
              goto LABEL_462;
            }
            if ( v143 != JobObjectBackgroundInformation )
            {
              switch ( v143 )
              {
                case JobObjectSchedulingRankBiasInformation:
                  LOBYTE(v141) = v10->m128i_i8[0];
                  v22 = Event;
                  ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
                  if ( ((__int64)v22[64].Header.WaitListHead.Blink & 0x20) == 0 )
                    goto LABEL_240;
                  v69 = v22[51].Header.WaitListHead.Blink;
                  v70 = (unsigned int)v69[2].Blink;
                  if ( (v70 & 0x40) != 0 )
                    goto LABEL_240;
                  if ( (v70 & 0x21) != 0 )
                  {
                    v13 = -1073741637;
                    goto LABEL_68;
                  }
                  if ( ((v70 >> 3) & 1) == ((_BYTE)v141 != 0) )
                    goto LABEL_240;
                  v71 = ((_BYTE)v141 != 0 ? 8 : 0) | v70 & 0xFFFFFFF7;
                  LODWORD(v69[2].Blink) = v71;
                  LOBYTE(v71) = v141;
                  KeSetSchedulingGroupRankBias((__int64)&v22[51].Header.WaitListHead.Blink[8], v71);
                  PspEnumJobsAndProcessesInJobHierarchy(
                    (char *)v22,
                    0,
                    0,
                    (int)PspSetProcessCacheIsolationCallback,
                    (__int64)&v141,
                    1);
                  break;
                case JobObjectTimerVirtualizationInformation:
                  if ( v10->m128i_i8[0] != 1 )
                  {
                    v13 = -1073741811;
                    v140 = -1073741811;
                    v22 = Event;
                    goto LABEL_491;
                  }
                  v22 = Event;
                  PspEnumJobsAndProcessesInJobHierarchy(
                    (char *)Event,
                    0,
                    (int)PspEnableTimerVirtualization,
                    (int)PspEnableProcessTimerVirtualization,
                    0LL,
                    0);
                  goto LABEL_317;
                case JobObjectCycleTimeNotification:
                  v66 = v10->m128i_i64[0];
                  v180 = v10->m128i_i64[0];
                  v22 = Event;
                  ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
                  if ( ((__int64)v22[64].Header.WaitListHead.Blink & 0x20) == 0 )
                  {
LABEL_240:
                    v13 = -1073741811;
                    goto LABEL_68;
                  }
                  v67 = v22[51].Header.WaitListHead.Blink;
                  v68 = (int)v67[2].Blink;
                  if ( (v68 & 0x10) == 0 )
                  {
                    LODWORD(v67[2].Blink) = v68 | 0x10;
                    KeInitializeDpc((PRKDPC)&v67[3], (PKDEFERRED_ROUTINE)PspJobCycleTimeNotificationDpcRoutine, v22);
                  }
                  KeSetSchedulingGroupCycleNotification((__int64)&v67[8], (__int64)&v67[3], v66);
                  break;
                default:
                  goto LABEL_447;
              }
              v13 = 0;
              goto LABEL_68;
            }
            v151 = v10->m128i_i8[0];
            v22 = Event;
            v72 = PspSetBackgroundJobTree((char *)Event, v151);
LABEL_255:
            v13 = v72;
            if ( v72 < 0 )
              goto LABEL_491;
            goto LABEL_317;
          }
          v169 = v10->m128i_i32[0];
          v73 = v169;
          v22 = Event;
          if ( (v169 & 0xFFFFC001) != 0 )
            goto LABEL_466;
          ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
          PspLockJobMemoryLimitsExclusive((__int64)v22, 0LL, 0LL);
          v22[46].Header.LockNV = v73;
          PspUnlockJobMemoryLimitsExclusive((__int64)v22, 0LL, 0LL);
          goto LABEL_316;
        }
        memmove(&v162, v10, v4);
        v74 = v162;
        if ( (v162 & 0xFFFFFFC0) != 0 )
          goto LABEL_462;
        v75 = 0;
        v146.Value = HIDWORD(v162);
        if ( (v162 & 1) == 0 )
        {
LABEL_280:
          v22 = Event;
          PspLockJobChain((__int64)Event, (__int64)Thread, 0);
          v77 = (int)v22[64].Header.WaitListHead.Blink;
          if ( (v74 & 1) != 0 )
          {
            if ( (v77 & 0x20) == 0 )
            {
              RateControl = PspAllocateRateControl(2LL);
              v79 = RateControl;
              if ( !RateControl )
              {
                v13 = -1073741670;
                goto LABEL_314;
              }
              v22[51].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)RateControl;
LABEL_288:
              LODWORD(v22[51].Header.WaitListHead.Blink[2].Blink) = 0;
              v80 = WORD2(v162);
              HIDWORD(v22[51].Header.WaitListHead.Blink[2].Blink) = HIDWORD(v162);
              if ( (v74 & 1) != 0 )
              {
                if ( (v74 & 4) != 0 )
                {
                  LODWORD(v22[51].Header.WaitListHead.Blink[2].Blink) |= 1u;
                  v146.MaxRate = v80;
                }
                if ( (v74 & 2) != 0 )
                {
                  LODWORD(v22[51].Header.WaitListHead.Blink[2].Blink) |= 4u;
                  v146.AllFlags = v75 & 0xFFFFFFFE;
                }
                else
                {
                  v146.AllFlags = v75 | 1;
                  if ( (v74 & 0x14) == 0 )
                    v146.MaxRate = 10000;
                }
                if ( (v74 & 8) != 0 )
                  LODWORD(v22[51].Header.WaitListHead.Blink[2].Blink) |= 2u;
                if ( (v74 & 0x10) != 0 )
                  LODWORD(v22[51].Header.WaitListHead.Blink[2].Blink) |= 0x20u;
                if ( (v74 & 0x20) != 0 )
                  LODWORD(v22[51].Header.WaitListHead.Blink[2].Blink) |= 0x80u;
                v81 = (_KSCHEDULING_GROUP_POLICY *)v22[51].Header.WaitListHead.Blink;
                v82 = v81 + 16;
                if ( v81 == (_KSCHEDULING_GROUP_POLICY *)v79 )
                {
                  *v82 = v146;
                  v13 = PspAddSchedulingGroupToJobChain((__int64)v22[54].Header.WaitListHead.Flink, (__int64)v22);
                  v140 = v13;
                  if ( v13 < 0 )
                  {
                    v83 = (char **)v22[51].Header.WaitListHead.Blink;
                    if ( v83 )
                    {
                      PspFreeRateControl(v83, 2u);
                      v22[51].Header.WaitListHead.Blink = 0LL;
                    }
                    goto LABEL_314;
                  }
                  _InterlockedOr((volatile signed __int32 *)&v22[64].Header.WaitListHead.Blink, 0x20u);
                  v22 = Event;
                }
                else
                {
                  BugCheckParameter1[0] = (ULONG_PTR)&v81[16];
                  if ( (v81[5].Value & 4) != 0 )
                    KeSetSchedulingGroupWeights(1u, BugCheckParameter1, (__int64)&v146);
                  else
                    KeSetSchedulingGroupCpuRates((__int64)v82, (struct _KSCHEDULING_GROUP **)BugCheckParameter1, &v146);
                }
                v163 = v22[51].Header.WaitListHead.Blink[2].Blink;
              }
              else
              {
                v146.AllFlags = v75 | 3;
                v146.Value = 655370000;
                LODWORD(v22[51].Header.WaitListHead.Blink[2].Blink) |= 0x40u;
                Value = v146.Value;
                HIDWORD(v22[51].Header.WaitListHead.Blink[2].Blink) = v146.Value;
                BugCheckParameter1[0] = (ULONG_PTR)&v22[51].Header.WaitListHead.Blink[8];
                HIBYTE(v141) = (*(_DWORD *)(BugCheckParameter1[0] + 4) & 4) != 0;
                v22[52].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)((char *)v22[52].Header.WaitListHead.Flink
                                                                         + KeQuerySchedulingGroupReadyTime(BugCheckParameter1[0]));
                KeSetSchedulingGroupCpuRates(v85, (struct _KSCHEDULING_GROUP **)BugCheckParameter1, &v146);
                HIDWORD(v163) = Value;
                if ( HIBYTE(v141) )
                {
                  HIBYTE(v141) = 0;
                  PspEnumJobsAndProcessesInJobHierarchy(
                    (char *)v22,
                    0,
                    0,
                    (int)PspSetProcessCacheIsolationCallback,
                    (__int64)&v141 + 1,
                    1);
                }
              }
              v13 = 0;
              if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
                EtwTraceJobSetQuery((__int64)v22, 15, (__int64)&v163, 0LL, 0, 0x725u);
LABEL_314:
              PspUnlockJobChain((__int64)v22, (__int64)Thread);
              goto LABEL_491;
            }
          }
          else if ( (v77 & 0x20) == 0 )
          {
            v13 = -1073741811;
            goto LABEL_314;
          }
          v79 = 0LL;
          goto LABEL_288;
        }
        if ( (v162 & 2) != 0 )
        {
          if ( (v162 & 0x10) != 0 )
            goto LABEL_462;
          v76 = (unsigned int)(HIDWORD(v162) - 1) <= 8;
        }
        else
        {
          if ( (v162 & 0x10) == 0 )
          {
            if ( (unsigned int)(HIDWORD(v162) - 1) > 0x270F )
              goto LABEL_462;
            goto LABEL_278;
          }
          if ( (v162 & 4) != 0 || !WORD2(v162) || WORD2(v162) > HIWORD(v162) )
            goto LABEL_462;
          v76 = HIWORD(v162) <= 0x2710u;
        }
        if ( !v76 )
          goto LABEL_462;
LABEL_278:
        if ( (v162 & 0x20) != 0 )
          v75 = 8;
        goto LABEL_280;
      }
      v22 = Event;
      ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
      KeResetEvent(v22);
LABEL_316:
      ExReleaseResourceLite((PERESOURCE)&v22[2].Header.WaitListHead);
      goto LABEL_317;
    }
    if ( v143 > JobObjectIoAttribution )
    {
      if ( v143 == JobObjectMemoryPartitionInformation )
      {
        v182 = v10->m128i_i64[0];
        v22 = Event;
        Silo = PspSetJobMemoryPartition((__int64)Event, PreviousMode, v182);
        goto LABEL_490;
      }
      if ( v143 == JobObjectContainerTelemetryId )
      {
        v22 = Event;
        ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
        if ( SLODWORD(v22[64].Header.WaitListHead.Blink) < 0 )
        {
          v13 = -1073741791;
          goto LABEL_68;
        }
        *(__m128i *)&v22[62].Header.Lock = *v10;
        _InterlockedOr((volatile signed __int32 *)&v22[64].Header.WaitListHead.Blink, 0x80000000);
        v22 = Event;
        goto LABEL_316;
      }
      if ( v143 != JobObjectSiloSystemRoot )
      {
        switch ( v143 )
        {
          case JobObjectEnergyTrackingState:
            v164 = v10->m128i_i64[0];
            v22 = Event;
            v72 = PspSetEnergyTrackingStateJobTree((char *)Event, &v164);
            goto LABEL_255;
          case JobObjectThreadImpersonationInformation:
            v152 = v10->m128i_i8[0];
            if ( v152 != 1 )
              goto LABEL_462;
            v130 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
            v22 = Event;
            if ( !v130 )
            {
              v13 = -1073741727;
              goto LABEL_491;
            }
            if ( ((__int64)Event[64].Header.WaitListHead.Blink & 0x40000000) == 0 )
              goto LABEL_466;
            v13 = PspSetJobSiloThreadImpersonationPolicy((__int64)Event, 2) == 0 ? 0xC0000022 : 0;
LABEL_491:
            v136 = Thread;
            v8 = Thread->SpecialApcDisable++ == -1;
            if ( v8 && ($727077A9B6E167EAE1398C74674DC5A5 *)v136->ApcState.ApcListHead[0].Flink != &v136->152 )
              KiCheckForKernelApcDelivery();
            if ( v13 )
            {
              if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
                EtwTraceJobSetQuery((__int64)v22, v143, 0LL, 0LL, v13, 0x727u);
            }
            ObfDereferenceObjectWithTag(v22, 0x79517350u);
            return v13;
          case JobObjectIoPriorityLimit:
            Object[0] = (PVOID)v10->m128i_i64[0];
            if ( ((__int64)Object[0] & 0xFFFFFFFE) != 0 )
              goto LABEL_75;
            v129 = (unsigned __int64)Object[0] >> 32;
            if ( HIDWORD(Object[0]) < 5 )
            {
              v22 = Event;
              if ( ((__int64)Object[0] & 1) == 0 )
                LODWORD(v129) = 5;
              PspSetIoPriorityLimitJobTree((char *)Event, v129);
              goto LABEL_317;
            }
            goto LABEL_462;
        }
        if ( v143 != JobObjectPagePriorityLimit )
          goto LABEL_447;
        Object[0] = (PVOID)v10->m128i_i64[0];
        if ( ((__int64)Object[0] & 0xFFFFFFFE) != 0 )
          goto LABEL_75;
        v128 = (unsigned __int64)Object[0] >> 32;
        if ( HIDWORD(Object[0]) >= 8 )
        {
LABEL_462:
          v13 = -1073741811;
          goto LABEL_448;
        }
        v22 = Event;
        if ( ((__int64)Object[0] & 1) != 0 )
        {
          if ( !HIDWORD(Object[0]) )
            goto LABEL_466;
        }
        else
        {
          LODWORD(v128) = 8;
        }
        PspSetPagePriorityLimitJobTree((char *)Event, v128);
LABEL_317:
        v13 = 0;
        goto LABEL_491;
      }
      v22 = Event;
      if ( ((__int64)Event[64].Header.WaitListHead.Blink & 0x40000000) == 0 )
        goto LABEL_343;
      v165 = 0LL;
      *(__m128i *)Object = *v10;
      v131 = _mm_srli_si128(*(__m128i *)Object, 8).m128i_u64[0];
      v132 = (PVOID)v131;
      if ( !v131
        || (v133 = (unsigned __int16)Object[0], (unsigned __int16)(LOWORD(Object[0]) - 1) > 0x206u)
        || ((__int64)Object[0] & 1) != 0 )
      {
        v13 = -1073741811;
        v140 = -1073741811;
        goto LABEL_491;
      }
      if ( PreviousMode == 1 )
      {
        if ( (v131 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v131 + LOWORD(Object[0]) > 0x7FFFFFFF0000LL || v131 + LOWORD(Object[0]) < v131 )
        {
          v22 = Event;
          v132 = Object[1];
          v133 = (unsigned __int16)Object[0];
        }
      }
      v134 = (void *)ExAllocatePool2(0x100uLL, v133, 0x72537350u);
      v135 = v134;
      v165 = v134;
      if ( !v134 )
      {
        v13 = -1073741670;
        v140 = -1073741670;
        goto LABEL_491;
      }
      memmove(v134, v132, v133);
      if ( wcsnlen((const wchar_t *)v135, (unsigned __int64)v133 >> 1) == (unsigned __int64)v133 >> 1 )
      {
        Object[1] = v135;
        v13 = PspAssignSiloSystemRootPath((__int64)v22, (unsigned __int16 *)Object);
      }
      else
      {
        v13 = -1073741811;
      }
      if ( !v135 )
        goto LABEL_491;
      v123 = 1918071632;
      v124 = v135;
LABEL_431:
      ExFreePoolWithTag(v124, v123);
      goto LABEL_491;
    }
    if ( v143 == JobObjectIoAttribution )
    {
      v125 = 0;
      v175 = *v10;
      v176 = v10[1];
      v177 = v10[2];
      v178 = v10[3];
      v179 = v10[4].m128i_i64[0];
      v22 = Event;
      if ( (v175.m128i_i32[0] & 0xFFFFFFFC) != 0 || (v175.m128i_i8[0] & 3) == 0 )
      {
        v13 = -1073741811;
      }
      else
      {
        v125 = 8;
        v126 = Thread;
        PspLockRootJobExclusive((__int64)Event, (__int64)Thread, BugCheckParameter1);
        PspLockJobConditionally((__int64)v22, (__int64)BugCheckParameter1);
        LOBYTE(v127) = v175.m128i_i8[0] & 1;
        v13 = PspSetJobIoAttribution(v22, v127, 1, 1u);
        if ( v13 >= 0 )
        {
          PspUnlockJobConditionally((__int64)v22, (__int64)BugCheckParameter1);
          PspUnlockJob(BugCheckParameter1[0], (__int64)v126);
          v125 = 0;
        }
      }
      if ( v125 == 8 )
      {
        PspUnlockJobConditionally((__int64)v22, (__int64)BugCheckParameter1);
        PspUnlockJob(BugCheckParameter1[0], (__int64)Thread);
      }
      goto LABEL_491;
    }
    if ( v143 == JobObjectClearPeakJobMemoryUsed )
    {
      v22 = Event;
      PspLockJobMemoryLimitsExclusive((__int64)Event, 0LL, 0LL);
      *(_QWORD *)&v22[30].Header.Lock = 0LL;
      v22[29].Header.WaitListHead.Blink = 0LL;
      PspUnlockJobMemoryLimitsExclusive((__int64)v22, 0LL, 0LL);
      v13 = 0;
      goto LABEL_491;
    }
    if ( v143 != JobObjectIoRateControlInformation )
    {
      switch ( v143 )
      {
        case JobObjectNetRateControlInformation:
          v22 = Event;
          Silo = PspSetNetRateControl(v10, (unsigned int)v4, (__int64)Event);
          goto LABEL_490;
        case JobObjectNotificationLimitInformation2:
LABEL_44:
          if ( (_DWORD)v4 == 48 )
          {
            memmove(&v199, v10, v4);
            v16 = DWORD2(v201);
            v19 = *((_QWORD *)&v199 + 1);
            v20 = v199;
            v191 = v199;
            v17 = *((_QWORD *)&v200 + 1);
            v18 = v200;
            *(_OWORD *)v192 = v200;
            *(_DWORD *)&v192[16] = v201;
            *(_QWORD *)&v192[20] = *(_QWORD *)((char *)&v201 + 4);
            v15 = 459268;
            JobLimitInformationValidFlags = 459268;
          }
          else
          {
            if ( (_DWORD)v4 == 56 )
            {
              memmove(&v195, v10, v4);
              v16 = v198;
              *(_DWORD *)&v192[24] = v198;
              v19 = *((_QWORD *)&v195 + 1);
              v20 = v195;
              v191 = v195;
              v92 = *((_QWORD *)&v196 + 1);
              v93 = v196;
              v193 = v93 >> 64;
              v18 = v93;
              *(_QWORD *)v192 = v196;
              v17 = v197;
              *(_OWORD *)&v192[8] = v197;
              v15 = 2589188;
              JobLimitInformationValidFlags = 2589188;
              goto LABEL_351;
            }
            memmove(&v191, v10, v4);
            v15 = 2064900;
            JobLimitInformationValidFlags = 2064900;
            v16 = *(_DWORD *)&v192[24];
            v17 = *(_QWORD *)&v192[8];
            v18 = *(_QWORD *)v192;
            v19 = *((_QWORD *)&v191 + 1);
            v20 = v191;
          }
          v92 = v193;
LABEL_351:
          if ( (~v15 & v16) == 0 )
          {
            if ( (v16 & 0x8000) != 0 )
            {
              if ( v92 < 0x1000 )
                goto LABEL_75;
            }
            else
            {
              v92 = 0LL;
              v193 = 0LL;
            }
            if ( (v16 & 0x200) != 0 )
            {
              if ( v17 < 0x1000 || v17 < v92 )
                goto LABEL_75;
            }
            else
            {
              *(_QWORD *)&v192[8] = 0LL;
            }
            if ( (v16 & 4) != 0 )
            {
              if ( !v18 )
                goto LABEL_75;
            }
            else
            {
              *(_QWORD *)v192 = 0LL;
            }
            if ( (v16 & 0x10000) != 0 )
            {
              if ( !v20 )
                goto LABEL_75;
            }
            else
            {
              *(_QWORD *)&v191 = 0LL;
            }
            if ( (v16 & 0x20000) != 0 )
            {
              if ( !v19 )
                goto LABEL_75;
            }
            else
            {
              *((_QWORD *)&v191 + 1) = 0LL;
            }
            for ( j = 0; j < 3; j = v98 + 1 )
            {
              PspNotificationLimitRateControlToleranceField((__int64)&v191, j);
              PspNotificationLimitRateControlToleranceIntervalField((__int64)&v191, v95);
              v97 = PspRateControlLimitFlag(v96);
              if ( (v97 & v101) != 0 )
              {
                if ( !*v99 || *v99 > 3 || !*v100 || *v100 > 3 )
                  goto LABEL_462;
              }
              else
              {
                *v99 = 0;
                *v100 = 0;
              }
            }
            v22 = Event;
            v102 = &Event[50].Header.WaitListHead.Blink;
            if ( Event[50].Header.WaitListHead.Blink )
            {
              v103 = 0LL;
              v104 = 0LL;
              goto LABEL_388;
            }
            v103 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL, 0x88uLL, 0x624A7350u);
            if ( v103 )
            {
              v104 = (char *)PsChargeSharedPoolQuota((__int64)KeGetCurrentThread()->ApcState.Process, 0x88uLL, 0LL);
              v35 = v103;
              if ( !v104 )
              {
                v36 = 1649046352;
                goto LABEL_129;
              }
              memset_0(v103, 0, 0x88uLL);
              v22 = Event;
LABEL_388:
              ExAcquireResourceExclusiveLite((PERESOURCE)&v22[2].Header.WaitListHead, 1u);
              if ( *v102 )
              {
                if ( v103 )
                {
                  ExFreePoolWithTag(v103, 0x624A7350u);
                  PsReturnSharedPoolQuota(v104, 0x88uLL, 0LL, v105);
                }
              }
              else
              {
                *v102 = v103;
                *(_QWORD *)&v22[51].Header.Lock = v104;
              }
              v106 = v22[50].Header.WaitListHead.Blink;
              Flink = (int)v106->Flink;
              *(_OWORD *)&v106->Blink = v191;
              v106[1].Blink = *(struct _LIST_ENTRY **)v192;
              for ( k = 0; k < 3; k = v114 + 1 )
              {
                v109 = (_DWORD *)PspNotificationLimitRateControlToleranceField((__int64)&v191, k);
                *(_DWORD *)(v110 - 12) = *v109;
                v112 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField((__int64)&v191, v111);
                *v113 = *v112;
              }
              PspLockJobMemoryLimitsExclusive((__int64)v22, 0LL, 0LL);
              v106[2].Flink = (struct _LIST_ENTRY *)(v193 >> 12);
              v106[2].Blink = (struct _LIST_ENTRY *)(*(_QWORD *)&v192[8] >> 12);
              LODWORD(v22[50].Header.WaitListHead.Blink->Flink) = *(_DWORD *)&v192[24];
              PspUnlockJobMemoryLimitsExclusive((__int64)v22, 0LL, 0LL);
              if ( ((__int64)v22[50].Header.WaitListHead.Blink->Flink & 0xFFFF7DFF) != 0 )
              {
                _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
                v22 = Event;
              }
              if ( Flink )
              {
                v115 = v22[50].Header.WaitListHead.Blink;
                if ( LODWORD(v115->Flink) )
                {
LABEL_401:
                  if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
                    EtwTraceJobSetQuery((__int64)v22, v143, (__int64)&v191, 0LL, 0, 0x725u);
                  ExReleaseResourceLite((PERESOURCE)&v22[2].Header.WaitListHead);
                  PspLockJobMemoryLimitsShared((__int64)v22, 0LL);
                  v116 = v22[65].Header.WaitListHead.Flink;
                  v22 = Event;
                  JobMemoryUsageNotificationViolations = PspGetJobMemoryUsageNotificationViolations(
                                                           (__int64)Event,
                                                           (unsigned __int64)Event[50].Header.WaitListHead.Flink,
                                                           (unsigned __int64)Event[50].Header.WaitListHead.Flink
                                                         + (unsigned __int64)v116,
                                                           33280);
                  PspUnlockJobMemoryLimitsShared((__int64)v22, 0LL);
                  if ( JobMemoryUsageNotificationViolations )
                  {
                    PspScheduleEnforcementWorker((__int64)v22[54].Header.WaitListHead.Blink);
                    v22 = Event;
                  }
                  goto LABEL_317;
                }
              }
              else
              {
                v115 = v22[50].Header.WaitListHead.Blink;
                if ( !LODWORD(v115->Flink) )
                  goto LABEL_401;
              }
              PspEnumJobsAndProcessesInJobHierarchy(
                (char *)v22,
                (int)PspSetJobNotificationCountCallback,
                0,
                0,
                (__int64)v115,
                5);
              goto LABEL_401;
            }
LABEL_125:
            v13 = -1073741670;
            goto LABEL_491;
          }
LABEL_75:
          v13 = -1073741811;
          goto LABEL_448;
        case JobObjectCreateSilo:
          v22 = Event;
          Silo = PspCreateSilo((__int64)Event);
          goto LABEL_490;
        case JobObjectSiloRootDirectory:
          v91 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
          v22 = Event;
          if ( v91 )
          {
            if ( ((__int64)Event[64].Header.WaitListHead.Blink & 0x40000000) != 0 )
            {
              if ( !PspSetJobSiloThreadImpersonationPolicy((__int64)Event, 4) )
                goto LABEL_345;
              v170 = v10->m128i_i32[0];
              Silo = ObCreateSiloRootDirectory((__int64)v22, v170);
              goto LABEL_490;
            }
LABEL_343:
            v13 = -1073740535;
            goto LABEL_491;
          }
          break;
        case JobObjectServerSiloInitialize:
          v88 = PreviousMode;
          v89 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
          v22 = Event;
          if ( v89 )
          {
            if ( ((__int64)Event[64].Header.WaitListHead.Blink & 0x40000000) != 0 )
            {
              if ( !PspSetJobSiloThreadImpersonationPolicy((__int64)Event, 4) )
                goto LABEL_345;
              v181 = v10->m128i_i64[0];
              v171 = v10->m128i_i32[2];
              LOBYTE(v90) = v88;
              Silo = PspConvertSiloToServerSilo((__int64)v22, v90, v181, v171);
LABEL_490:
              v13 = Silo;
              goto LABEL_491;
            }
            goto LABEL_343;
          }
          break;
        case JobObjectServerSiloRunningState:
          v172 = v10->m128i_i32[0];
          v22 = Event;
          if ( PspJobIsAppSilo((__int64)Event) && v86 == 2 )
          {
            v87 = (struct _ERESOURCE *)&v22[2].Header.WaitListHead;
            ExAcquireResourceExclusiveLite((PERESOURCE)&v22[2].Header.WaitListHead, 1u);
            if ( LODWORD(v22[60].Header.WaitListHead.Blink) )
            {
              v13 = -1073740529;
            }
            else
            {
              v45 = _interlockedbittestandset((volatile signed __int32 *)&v22[64].Header.WaitListHead.Blink, 0x1Du);
              v22 = Event;
              if ( v45 )
              {
                v13 = 255;
              }
              else
              {
                PspHardDereferenceSiloWorker((__int64)Event);
                v13 = 0;
              }
            }
            p_WaitListHead = v87;
            goto LABEL_69;
          }
LABEL_345:
          v13 = -1073741811;
          goto LABEL_491;
        default:
          goto LABEL_447;
      }
      v13 = -1073741727;
      goto LABEL_491;
    }
    v118 = 0LL;
    Object[1] = 0LL;
    memmove(v183, v10, v4);
    if ( v185 )
    {
      v119 = v187;
      if ( !v187 )
        goto LABEL_419;
      if ( ((unsigned __int8)v185 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)v185 + v187 > 0x7FFFFFFF0000LL || (char *)v185 + v187 < v185 )
      {
        v119 = v187;
        v118 = Object[1];
      }
      if ( !v119 || (v119 & 1) != 0 )
      {
LABEL_419:
        v13 = -1073741811;
        v140 = -1073741811;
        v22 = Event;
        goto LABEL_429;
      }
      v120 = v119 + 2LL;
      v121 = 32LL;
      if ( PreviousMode == 1 )
        v121 = 257LL;
      v122 = (_WORD *)ExAllocatePool2(v121, v120, 0x624A7350u);
      v118 = v122;
      Object[1] = v122;
      if ( !v122 )
      {
        v13 = -1073741801;
        v140 = -1073741801;
        v22 = Event;
        goto LABEL_429;
      }
      memmove(v122, v185, v187);
      v118[(unsigned __int64)v187 >> 1] = 0;
      v185 = v118;
    }
    if ( (v186 & 0xFFFFFFF0) != 0 )
    {
      v13 = -1073741811;
    }
    else
    {
      if ( !v188 && !v184 && !v189 || PspIsContextAdmin() )
      {
        v22 = Event;
        v13 = PspSetJobIoRateControl((__int64)Event, (__int64)v183);
        goto LABEL_429;
      }
      v13 = -1073741790;
    }
    v22 = Event;
LABEL_429:
    if ( !v118 )
      goto LABEL_491;
    v123 = 0;
    v124 = v118;
    goto LABEL_431;
  }
  return result;
}
