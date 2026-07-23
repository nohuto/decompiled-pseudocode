/*
 * XREFs of NtSetInformationJobObject @ 0x140AC4C00
 * Callers:
 *     <none>
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1402F5B44 (KeSetSchedulingGroupCpuRates.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F6544 (KeSetSchedulingGroupRankBias.c)
 *     KeSetSchedulingGroupWeights @ 0x1402F68E8 (KeSetSchedulingGroupWeights.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     PspHardDereferenceSiloWorker @ 0x140375830 (PspHardDereferenceSiloWorker.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14041D30C (ExfAcquireReleasePushLockExclusive.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     KeFirstGroupAffinityEx @ 0x14045ADB0 (KeFirstGroupAffinityEx.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x140470F9C (KeQuerySchedulingGroupReadyTime.c)
 *     KeQueryActiveGroupCount @ 0x1404807A0 (KeQueryActiveGroupCount.c)
 *     KeQueryPrimaryGroupThread @ 0x14048489C (KeQueryPrimaryGroupThread.c)
 *     wcsnlen @ 0x1404FD910 (wcsnlen.c)
 *     KeSetSchedulingGroupCycleNotification @ 0x1405C3374 (KeSetSchedulingGroupCycleNotification.c)
 *     PspJobIsAppSilo @ 0x1405D8E54 (PspJobIsAppSilo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PspAssignSiloSystemRootPath @ 0x140762B00 (PspAssignSiloSystemRootPath.c)
 *     PspConvertSiloToServerSilo @ 0x140762D94 (PspConvertSiloToServerSilo.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140767938 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x140767A00 (PspApplyWorkingSetLimits.c)
 *     PspSetIoPriorityLimitJobTree @ 0x1407682C4 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobMemoryPartition @ 0x140768374 (PspSetJobMemoryPartition.c)
 *     PspSetJobSiloThreadImpersonationPolicy @ 0x1407686B8 (PspSetJobSiloThreadImpersonationPolicy.c)
 *     PspSetNetRateControl @ 0x140768744 (PspSetNetRateControl.c)
 *     PspSetPagePriorityLimitJobTree @ 0x140768A10 (PspSetPagePriorityLimitJobTree.c)
 *     ObCreateSiloRootDirectory @ 0x14081AE94 (ObCreateSiloRootDirectory.c)
 *     SeCaptureSubjectContextEx @ 0x1408436C0 (SeCaptureSubjectContextEx.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     SeCheckPrivilegedObject @ 0x1408BA228 (SeCheckPrivilegedObject.c)
 *     PspLockJobChain @ 0x1408D83E8 (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x1408D864C (PspUnlockJobChain.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x1408D9B50 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspIsContextAdmin @ 0x1408D9DA4 (PspIsContextAdmin.c)
 *     PspLockJobMemoryLimitsExclusive @ 0x1408DA020 (PspLockJobMemoryLimitsExclusive.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1408DAC64 (PspSetEnergyTrackingStateJobTree.c)
 *     PspSetJobIoAttribution @ 0x1408DADA4 (PspSetJobIoAttribution.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408DC8DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1408DDFF0 (PspUnlockJob.c)
 *     PspLockJobMemoryLimitsShared @ 0x1408DE168 (PspLockJobMemoryLimitsShared.c)
 *     PspRateControlLimitFlag @ 0x1408DE1D0 (PspRateControlLimitFlag.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1408DE1F4 (PspUnlockJobMemoryLimitsShared.c)
 *     PspBindProcessSessionToJob @ 0x1409045A0 (PspBindProcessSessionToJob.c)
 *     PsReturnSharedPoolQuota @ 0x14091B660 (PsReturnSharedPoolQuota.c)
 *     PspFreeRateControl @ 0x14091C530 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14091C57C (PspAllocateRateControl.c)
 *     PsChargeSharedPoolQuota @ 0x14091C6C0 (PsChargeSharedPoolQuota.c)
 *     PsInvokeWin32Callout @ 0x140961150 (PsInvokeWin32Callout.c)
 *     PspLockRootJobExclusive @ 0x1409697E4 (PspLockRootJobExclusive.c)
 *     IoAllocateMiniCompletionPacket @ 0x1409A6B80 (IoAllocateMiniCompletionPacket.c)
 *     IopFreeMiniCompletionPacket @ 0x1409A6C70 (IopFreeMiniCompletionPacket.c)
 *     SePrivilegeCheck @ 0x1409C2C50 (SePrivilegeCheck.c)
 *     PspGetJobLimitInformationValidFlags @ 0x1409EDE5C (PspGetJobLimitInformationValidFlags.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x1409F66C8 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspUnlockJobConditionally @ 0x140A30D30 (PspUnlockJobConditionally.c)
 *     PspSetJobIoRateControl @ 0x140A3AD48 (PspSetJobIoRateControl.c)
 *     PspLockJobConditionally @ 0x140A3B07C (PspLockJobConditionally.c)
 *     PspScheduleEnforcementWorker @ 0x140A48554 (PspScheduleEnforcementWorker.c)
 *     EtwTraceJobSetQuery @ 0x140A51B40 (EtwTraceJobSetQuery.c)
 *     PspSetBackgroundJobTree @ 0x140A558BC (PspSetBackgroundJobTree.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x140A55CC0 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140A57628 (PspAddSchedulingGroupToJobChain.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x140A58B1C (PspNotificationLimitRateControlToleranceField.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x140A60890 (PspDoesJobHierarchyPermitUILimits.c)
 *     PspCreateSilo @ 0x140A7183C (PspCreateSilo.c)
 *     PspFreezeJobTree @ 0x140A71B9C (PspFreezeJobTree.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // ebx
  struct _ERESOURCE *p_WaitListHead; // rcx
  char v29; // bl
  unsigned int *v30; // r11
  unsigned __int32 v31; // edi
  char v32; // al
  PETHREAD v33; // rdx
  __int64 v34; // rcx
  JOBOBJECTINFOCLASS v35; // r13d
  char v36; // al
  unsigned int v37; // eax
  char v38; // al
  unsigned __int64 v39; // r14
  JOBOBJECTINFOCLASS v40; // r13d
  __int64 v41; // rdi
  struct _LIST_ENTRY *v42; // rsi
  struct _LIST_ENTRY *v43; // rcx
  ULONG v44; // edx
  BOOLEAN v45; // al
  unsigned int v46; // r13d
  char *v47; // r13
  unsigned __int16 PrimaryGroupThread; // ax
  __int64 v49; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v50; // rax
  struct _KEVENT *v51; // rcx
  __int64 *v52; // rax
  bool v53; // cf
  __int64 *v54; // rax
  __int64 *v55; // rdi
  struct _LIST_ENTRY *p_Blink; // rsi
  struct _LIST_ENTRY *i; // rdi
  __int64 v58; // r9
  char *v59; // rcx
  unsigned int v60; // ecx
  unsigned int v61; // ebx
  unsigned __int16 v62; // di
  __int64 v63; // r14
  unsigned __int16 epi16; // ax
  __int64 v65; // rax
  struct _LIST_ENTRY *Pool2; // rdi
  SECURITY_IMPERSONATION_LEVEL *p_ImpersonationLevel; // r13
  BOOLEAN v68; // al
  __int64 v69; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v70; // rax
  struct _KEVENT *v71; // rdx
  __int64 *v72; // rax
  __int64 v73; // r8
  __int64 v74; // rsi
  struct _LIST_ENTRY *v75; // rdi
  int v76; // eax
  struct _LIST_ENTRY *v77; // r9
  unsigned int v78; // edx
  int v79; // eax
  LONG v80; // edi
  char v81; // bl
  int v82; // esi
  bool v83; // cc
  int v84; // eax
  __int64 *RateControl; // rax
  __int64 *v86; // rdx
  unsigned __int16 v87; // cx
  _KSCHEDULING_GROUP_POLICY *v88; // rax
  _KSCHEDULING_GROUP_POLICY *v89; // rcx
  char **v90; // rcx
  unsigned int Value; // ebx
  __int64 v92; // rcx
  int v93; // r8d
  struct _ERESOURCE *v94; // rbx
  KPROCESSOR_MODE v95; // bl
  BOOLEAN v96; // al
  __int64 v97; // rdx
  int Silo; // eax
  BOOLEAN v99; // al
  unsigned __int64 v100; // rcx
  unsigned __int128 v101; // kr00_16
  int j; // edx
  int v103; // edx
  int v104; // edx
  int v105; // eax
  int v106; // edx
  int *v107; // r9
  int *v108; // r10
  int v109; // r8d
  struct _LIST_ENTRY **v110; // r13
  struct _LIST_ENTRY *v111; // rbx
  char *v112; // rsi
  __int64 v113; // r9
  struct _LIST_ENTRY *v114; // rbx
  int Flink; // edi
  int k; // edx
  _DWORD *v117; // rax
  __int64 v118; // r8
  int v119; // edx
  _DWORD *v120; // rax
  _DWORD *v121; // r8
  int v122; // edx
  struct _LIST_ENTRY *v123; // rax
  struct _LIST_ENTRY *v124; // r8
  int JobMemoryUsageNotificationViolations; // ebx
  _WORD *v126; // rbx
  unsigned __int16 v127; // cx
  ULONG_PTR v128; // rcx
  _WORD *v129; // rax
  ULONG v130; // edx
  void *v131; // rcx
  char v132; // bl
  PETHREAD v133; // r13
  __int64 v134; // rdx
  unsigned __int64 v135; // rdx
  unsigned __int64 v136; // rdx
  BOOLEAN v137; // al
  unsigned __int64 v138; // xmm0_8
  PVOID v139; // rbx
  unsigned __int16 v140; // si
  void *v141; // rax
  void *v142; // rdi
  PETHREAD v143; // r13
  signed __int32 v144[8]; // [rsp+0h] [rbp-CC8h] BYREF
  PRKEVENT Event; // [rsp+40h] [rbp-C88h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+48h] [rbp-C80h]
  int v147; // [rsp+4Ch] [rbp-C7Ch]
  __int16 v148; // [rsp+50h] [rbp-C78h] BYREF
  KPROCESSOR_MODE v149; // [rsp+52h] [rbp-C76h]
  JOBOBJECTINFOCLASS v150; // [rsp+58h] [rbp-C70h]
  unsigned __int16 v151; // [rsp+60h] [rbp-C68h]
  _KSCHEDULING_GROUP_POLICY v152; // [rsp+68h] [rbp-C60h] BYREF
  JOBOBJECTINFOCLASS v153; // [rsp+70h] [rbp-C58h]
  PETHREAD Thread; // [rsp+78h] [rbp-C50h]
  int JobLimitInformationValidFlags; // [rsp+80h] [rbp-C48h]
  __int64 v156; // [rsp+88h] [rbp-C40h]
  PVOID P; // [rsp+90h] [rbp-C38h]
  char v158; // [rsp+98h] [rbp-C30h]
  __int8 v159; // [rsp+99h] [rbp-C2Fh]
  unsigned __int32 v160; // [rsp+9Ch] [rbp-C2Ch]
  __int64 v161; // [rsp+A0h] [rbp-C28h]
  PVOID Object[2]; // [rsp+A8h] [rbp-C20h] BYREF
  ULONG_PTR BugCheckParameter1[2]; // [rsp+B8h] [rbp-C10h] BYREF
  void *Src; // [rsp+C8h] [rbp-C00h]
  PSECURITY_SUBJECT_CONTEXT v165; // [rsp+D0h] [rbp-BF8h]
  unsigned int v166; // [rsp+D8h] [rbp-BF0h] BYREF
  unsigned int v167; // [rsp+DCh] [rbp-BECh]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E0h] [rbp-BE8h] BYREF
  void *v169; // [rsp+100h] [rbp-BC8h]
  __int64 v170[2]; // [rsp+108h] [rbp-BC0h] BYREF
  __int64 v171; // [rsp+118h] [rbp-BB0h] BYREF
  struct _LIST_ENTRY *v172; // [rsp+120h] [rbp-BA8h] BYREF
  __int64 v173; // [rsp+128h] [rbp-BA0h] BYREF
  void *v174; // [rsp+130h] [rbp-B98h]
  __m128i v175; // [rsp+138h] [rbp-B90h] BYREF
  unsigned int v176; // [rsp+148h] [rbp-B80h]
  __int32 v177; // [rsp+14Ch] [rbp-B7Ch]
  int v178; // [rsp+150h] [rbp-B78h]
  int v179; // [rsp+154h] [rbp-B74h]
  __int32 v180; // [rsp+158h] [rbp-B70h]
  __int128 v181; // [rsp+160h] [rbp-B68h] BYREF
  __int128 v182; // [rsp+170h] [rbp-B58h]
  __int128 v183; // [rsp+180h] [rbp-B48h] BYREF
  PRKEVENT v184; // [rsp+190h] [rbp-B38h]
  int v185; // [rsp+198h] [rbp-B30h]
  int v186; // [rsp+19Ch] [rbp-B2Ch]
  __int64 v187; // [rsp+1A0h] [rbp-B28h]
  __m128i v188; // [rsp+1B0h] [rbp-B18h]
  __m128i v189; // [rsp+1C0h] [rbp-B08h]
  __m128i v190; // [rsp+1D0h] [rbp-AF8h]
  __m128i v191; // [rsp+1E0h] [rbp-AE8h]
  __int64 v192; // [rsp+1F0h] [rbp-AD8h]
  __int64 v193; // [rsp+200h] [rbp-AC8h]
  ULONG_PTR v194; // [rsp+208h] [rbp-AC0h]
  __int64 v195; // [rsp+210h] [rbp-AB8h]
  _BYTE v196[16]; // [rsp+220h] [rbp-AA8h] BYREF
  __int64 v197; // [rsp+230h] [rbp-A98h]
  void *v198; // [rsp+238h] [rbp-A90h]
  int v199; // [rsp+244h] [rbp-A84h]
  unsigned __int16 v200; // [rsp+248h] [rbp-A80h]
  __int64 v201; // [rsp+258h] [rbp-A70h]
  __int64 v202; // [rsp+270h] [rbp-A58h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+2B0h] [rbp-A18h] BYREF
  __int128 v204; // [rsp+2D0h] [rbp-9F8h] BYREF
  _BYTE v205[28]; // [rsp+2E0h] [rbp-9E8h]
  unsigned __int64 v206; // [rsp+300h] [rbp-9C8h]
  __m128i v207; // [rsp+320h] [rbp-9A8h] BYREF
  __int128 v208; // [rsp+330h] [rbp-998h] BYREF
  unsigned __int128 v209; // [rsp+340h] [rbp-988h]
  __int128 v210; // [rsp+350h] [rbp-978h]
  __int64 v211; // [rsp+360h] [rbp-968h]
  __int128 v212; // [rsp+368h] [rbp-960h] BYREF
  __int128 v213; // [rsp+378h] [rbp-950h]
  __int128 v214; // [rsp+388h] [rbp-940h]
  struct _LIST_ENTRY *v215; // [rsp+3A0h] [rbp-928h] BYREF
  struct _LIST_ENTRY *v216; // [rsp+3A8h] [rbp-920h]
  __int64 v217; // [rsp+3B0h] [rbp-918h]
  unsigned __int64 v218; // [rsp+3B8h] [rbp-910h]
  unsigned __int64 v219; // [rsp+3C0h] [rbp-908h]
  int v220; // [rsp+3C8h] [rbp-900h]
  __int64 v221; // [rsp+3D0h] [rbp-8F8h]
  unsigned int v222; // [rsp+3D8h] [rbp-8F0h]
  unsigned int v223; // [rsp+3DCh] [rbp-8ECh]
  unsigned __int64 v224; // [rsp+410h] [rbp-8B8h]
  unsigned __int64 v225; // [rsp+418h] [rbp-8B0h]
  unsigned __int64 v226; // [rsp+430h] [rbp-898h]
  __int64 v227; // [rsp+440h] [rbp-888h] BYREF
  _QWORD v228[33]; // [rsp+448h] [rbp-880h] BYREF
  char v229[224]; // [rsp+550h] [rbp-778h] BYREF
  struct _LIST_ENTRY *v230; // [rsp+630h] [rbp-698h]
  struct _LIST_ENTRY *Blink; // [rsp+638h] [rbp-690h]
  unsigned __int64 v232; // [rsp+640h] [rbp-688h]
  struct _LIST_ENTRY *v233; // [rsp+648h] [rbp-680h]
  JOBOBJECTINFOCLASS v234; // [rsp+650h] [rbp-678h]
  int v235; // [rsp+654h] [rbp-674h]
  __int64 v236; // [rsp+658h] [rbp-670h] BYREF
  char v237[308]; // [rsp+660h] [rbp-668h] BYREF
  int v238; // [rsp+794h] [rbp-534h]
  struct _LIST_ENTRY *v239; // [rsp+800h] [rbp-4C8h]
  unsigned __int64 v240; // [rsp+808h] [rbp-4C0h]
  struct _LIST_ENTRY *v241; // [rsp+810h] [rbp-4B8h]
  char v242; // [rsp+99Dh] [rbp-32Bh]

  v4 = JobObjectInformationLength;
  v5 = JobObjectInformationClass;
  v161 = (__int64)JobHandle;
  v150 = JobObjectInformationClass;
  v153 = JobObjectInformationClass;
  Src = JobObjectInformation;
  memset_0(v228, 0, 0x100uLL);
  v172 = 0LL;
  v171 = 0LL;
  v148 = 0;
  v173 = 0LL;
  memset_0(&v215, 0, 0x98uLL);
  v207 = 0LL;
  v175 = 0LL;
  Object[0] = 0LL;
  memset_0(v196, 0, 0x90uLL);
  Event = 0LL;
  v166 = 0;
  v181 = 0LL;
  v182 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  LODWORD(v169) = 0;
  memset_0(&v204, 0, 0x48uLL);
  v212 = 0LL;
  v213 = 0LL;
  v214 = 0LL;
  v208 = 0LL;
  v209 = 0LL;
  v210 = 0LL;
  v211 = 0LL;
  v152 = 0LL;
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  BugCheckParameter1[0] = 0LL;
  *(_OWORD *)v170 = 0LL;
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
  v7 = dword_140B2F42C[v5];
  if ( (_DWORD)v4 != v7 && ((_DWORD)v5 != 11 && (_DWORD)v5 != 14 || (unsigned int)v4 < v7) )
    return -1073741820;
LABEL_14:
  Thread = KeGetCurrentThread();
  v9 = Thread->PreviousMode;
  PreviousMode = v9;
  v149 = v9;
  if ( v9 )
  {
    v10 = (__m128i *)Src;
    if ( (_DWORD)v4 )
    {
      if ( ((dword_140B2F4FC[v5] - 1) & (unsigned int)Src) != 0 )
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
    v147 = 0;
    v14 = 0;
    --Thread->SpecialApcDisable;
    if ( v150 <= JobObjectClearEvent )
    {
      if ( v150 != JobObjectClearEvent )
      {
        if ( v150 <= JobObjectGroupInformationEx )
        {
          if ( v150 == JobObjectGroupInformationEx )
          {
LABEL_209:
            P = 0LL;
            v60 = 16;
            if ( v153 != JobObjectGroupInformationEx )
              v60 = 2;
            v153 = v60;
            v61 = (unsigned int)v4 / v60;
            if ( (unsigned int)v4 % v60 )
            {
              v13 = -1073741820;
              goto LABEL_465;
            }
            v167 = (unsigned int)v4 / v60;
            v227 = 2097153LL;
            memset_0(v228, 0, 0x100uLL);
            v62 = KeQueryActiveGroupCount() - 1;
            v63 = (unsigned int)v153;
            while ( v61 )
            {
              if ( v150 == JobObjectGroupInformationEx )
              {
                v175 = *v10;
                epi16 = _mm_extract_epi16(v175, 4);
                v151 = epi16;
                v161 = v175.m128i_i64[0];
              }
              else
              {
                v65 = v10->m128i_u16[0];
                v151 = v65;
                if ( (unsigned __int16)v65 > v62 )
                  goto LABEL_223;
                v161 = KeActiveProcessors.Bitmap[v65];
                epi16 = v151;
              }
              if ( epi16 > v62 || v228[epi16] || v161 != (v161 & KeActiveProcessors.Bitmap[epi16]) )
              {
LABEL_223:
                v13 = -1073741811;
                v147 = -1073741811;
                break;
              }
              KeAddGroupAffinityEx((unsigned __int16 *)&v227, v151, v161);
              v61 = --v167;
              v10 = (__m128i *)((char *)Src + v63);
              Src = (char *)Src + v63;
              v13 = v147;
            }
            Pool2 = 0LL;
            v22 = Event;
            if ( v13 < 0 )
              goto LABEL_508;
            if ( !*(_QWORD *)&Event[22].Header.Lock )
            {
              Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
              if ( !Pool2 )
                goto LABEL_142;
              P = (PVOID)PsChargeSharedPoolQuota((__int64)KeGetCurrentThread()->ApcState.Process, 0x28uLL, 0LL);
              if ( !P )
              {
                v43 = Pool2;
                goto LABEL_145;
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
              v68 = SePrivilegeCheck(
                      &RequiredPrivileges,
                      (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                      1);
              LODWORD(SubjectContext.ClientToken) = (__int64)SubjectContext.ClientToken & 0xFFFFFFFE | v68 & 1;
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
            v147 = v13;
            if ( v13 >= 0 )
            {
              v69 = *(_QWORD *)&v22[22].Header.Lock;
              if ( v69 )
              {
                v181 = *(_OWORD *)(v69 + 8);
                v182 = *(_OWORD *)(v69 + 24);
                p_ImpersonationLevel = (SECURITY_IMPERSONATION_LEVEL *)&v181;
              }
              else
              {
                *(_QWORD *)&v22[22].Header.Lock = Pool2;
                v22[22].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)P;
                Pool2 = 0LL;
                p_ImpersonationLevel = 0LL;
              }
              v70 = *(struct _SECURITY_SUBJECT_CONTEXT **)&v22[22].Header.Lock;
              *v70 = SubjectContext;
              v70[1].ClientToken = v169;
              v170[0] = (__int64)v22;
              HIDWORD(v170[1]) = v22[10].Header.WaitListHead.Blink;
              LODWORD(v170[1]) = -17;
              v71 = v22 + 11;
              v72 = &v227;
              v73 = 2LL;
              do
              {
                *(_OWORD *)&v71->Header.Lock = *(_OWORD *)v72;
                *(_OWORD *)&v71->Header.WaitListHead.Blink = *((_OWORD *)v72 + 1);
                v71[1].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v72 + 2);
                *(_OWORD *)&v71[2].Header.Lock = *((_OWORD *)v72 + 3);
                *(_OWORD *)&v71[2].Header.WaitListHead.Blink = *((_OWORD *)v72 + 4);
                v71[3].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v72 + 5);
                *(_OWORD *)&v71[4].Header.Lock = *((_OWORD *)v72 + 6);
                v71 = (struct _KEVENT *)((char *)v71 + 128);
                v71[-1].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v72 + 7);
                v72 += 16;
                --v73;
              }
              while ( v73 );
              *(_QWORD *)&v71->Header.Lock = *v72;
              if ( v150 == JobObjectGroupInformationEx
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
                (__int64)v170,
                5);
              v13 = v147;
            }
            ExReleaseResourceLite((PERESOURCE)&v22[2].Header.WaitListHead);
            if ( p_ImpersonationLevel )
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)p_ImpersonationLevel);
            if ( !Pool2 )
              goto LABEL_508;
            ExFreePoolWithTag(Pool2, 0x614A7350u);
            v59 = (char *)P;
LABEL_248:
            PsReturnSharedPoolQuota(v59, 0x28uLL, 0LL, v58);
            goto LABEL_508;
          }
          if ( v150 == JobObjectBasicLimitInformation )
          {
LABEL_89:
            memmove(&v215, v10, v4);
            if ( (unsigned int)v4 < 0x98 )
              memset_0((char *)&v215 + v4, 0, 152 - v4);
            JobLimitInformationValidFlags = PspGetJobLimitInformationValidFlags(v150, v4);
            v35 = (int)v217;
            if ( (~JobLimitInformationValidFlags & (unsigned int)v217) != 0 )
              goto LABEL_92;
            memset_0(v229, 0, 0x728uLL);
            memset(&SubjectContext, 0, sizeof(SubjectContext));
            v169 = 0LL;
            v234 = v35;
            P = 0LL;
            v156 = 0LL;
            v165 = 0LL;
            v235 = (v35 & 8) != 0 ? v220 : 0;
            if ( (v35 & 0x20) != 0 )
            {
              if ( v222 > 6 )
                goto LABEL_479;
              if ( v222 - 3 <= 1 )
              {
                v36 = SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, v161, 2, PreviousMode) & 1;
                v14 = 4 * v36;
                if ( !v36 )
                  goto LABEL_97;
              }
              v242 = v222;
            }
            else
            {
              v242 = 0;
            }
            if ( (v35 & 0x80u) == 0 )
            {
              v238 = 5;
            }
            else
            {
              v37 = v223;
              if ( v223 >= 0xA )
                goto LABEL_479;
              if ( v223 > 5 )
              {
                v38 = SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, v161, 2, PreviousMode) & 1;
                v14 = 4 * v38;
                if ( !v38 )
                  goto LABEL_97;
                v37 = v223;
              }
              v238 = v37;
            }
            if ( (v35 & 2) != 0 )
            {
              if ( !v215 )
                goto LABEL_479;
              v230 = v215;
            }
            else
            {
              v230 = 0LL;
            }
            if ( (v35 & 4) != 0 )
            {
              if ( !v216 )
                goto LABEL_479;
              Blink = v216;
            }
            if ( (v35 & 1) == 0 )
            {
              v232 = 0LL;
              v233 = 0LL;
              goto LABEL_125;
            }
            v39 = v218;
            if ( !v218 && !v219 || v218 == -1LL && v219 == -1LL || v218 > v219 || v218 < 0x14000 )
              goto LABEL_479;
            if ( v218 <= PspMinimumWorkingSet || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
            {
              v232 = v39;
              v233 = (struct _LIST_ENTRY *)v219;
LABEL_125:
              if ( (v35 & 0x100) != 0 )
              {
                if ( v224 < 0x1000 )
                  goto LABEL_479;
                v239 = (struct _LIST_ENTRY *)(v224 >> 12);
              }
              else
              {
                v239 = 0LL;
              }
              if ( (v35 & 0x200) != 0 )
              {
                if ( v225 < 0x1000 )
                  goto LABEL_479;
                v240 = v225 >> 12;
              }
              else
              {
                v240 = 0LL;
              }
              if ( (v35 & 0x200000) == 0 )
              {
                v241 = 0LL;
                goto LABEL_137;
              }
              if ( v226 >= 0x1000 )
              {
                v241 = (struct _LIST_ENTRY *)(v226 >> 12);
LABEL_137:
                v236 = 2097153LL;
                memset_0(v237, 0, 0x100uLL);
                v40 = v234;
                v153 = v234;
                v22 = Event;
                v41 = 2LL;
                if ( (v234 & 0x10) == 0 )
                  goto LABEL_152;
                if ( ((__int64)Event[64].Header.WaitListHead.Blink & 2) == 0 && v221 )
                {
                  if ( !*(_QWORD *)&Event[22].Header.Lock )
                  {
                    v42 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
                    P = v42;
                    if ( !v42 )
                      goto LABEL_142;
                    v156 = PsChargeSharedPoolQuota((__int64)KeGetCurrentThread()->ApcState.Process, 0x28uLL, 0LL);
                    if ( !v156 )
                    {
                      v43 = v42;
LABEL_145:
                      v44 = 1632269136;
LABEL_146:
                      ExFreePoolWithTag(v43, v44);
                      v13 = -1073741670;
                      goto LABEL_465;
                    }
                    v22 = Event;
                    v153 = v234;
                    v13 = v147;
                  }
                  SeCaptureSubjectContextEx(
                    Thread,
                    Thread->ApcState.Process,
                    (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
                  v165 = (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel;
                  if ( PreviousMode )
                  {
                    RequiredPrivileges.PrivilegeCount = 1;
                    RequiredPrivileges.Control = 1;
                    RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
                    RequiredPrivileges.Privilege[0].Attributes = 0;
                    v45 = SePrivilegeCheck(
                            &RequiredPrivileges,
                            (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                            1);
                    LODWORD(SubjectContext.ClientToken) = (__int64)SubjectContext.ClientToken & 0xFFFFFFFE | v45 & 1;
                  }
                  else
                  {
                    LODWORD(SubjectContext.ClientToken) |= 1u;
                  }
                  v14 |= 2u;
                  v40 = v153;
LABEL_152:
                  ExAcquireResourceExclusiveLite((PERESOURCE)&v22[2].Header.WaitListHead, 1u);
                  if ( (v40 & 4) == 0 )
                  {
                    if ( (v40 & 0x40) != 0 )
                    {
                      v40 |= (__int64)v22[10].Header.WaitListHead.Blink & 4;
                      Blink = v22[9].Header.WaitListHead.Blink;
                    }
                    else
                    {
                      Blink = 0LL;
                    }
                  }
                  v46 = v40 & 0xFFFFFFBF;
                  v234 = v46;
                  if ( (v14 & 2) != 0 )
                  {
                    if ( ((__int64)v22[64].Header.WaitListHead.Blink & 2) != 0 )
                    {
LABEL_158:
                      v13 = -1073741811;
                      v147 = -1073741811;
LABEL_159:
                      v47 = (char *)v156;
LABEL_192:
                      if ( (v14 & 1) != 0 )
                      {
                        v54 = KeAbPreAcquire((__int64)&qword_140FC60B8, 0LL);
                        v55 = v54;
                        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140FC60B8, 0LL) )
                          ExfAcquirePushLockExclusiveEx(&qword_140FC60B8, v54, (__int64)&qword_140FC60B8);
                        if ( v55 )
                          *((_BYTE *)v55 + 10) = 1;
                        _InterlockedOr((volatile signed __int32 *)&Event[64].Header.WaitListHead.Blink, 0x100u);
                        v22 = Event;
                        p_Blink = (struct _LIST_ENTRY *)&Event[1].Header.WaitListHead.Blink;
                        for ( i = Event[1].Header.WaitListHead.Blink; i != p_Blink; i = i->Flink )
                        {
                          if ( ((__int64)i[-23].Blink & 1) == 0 )
                            PspAddProcessToWorkingSetChangeList((_KPROCESS *)&i[-54].Blink);
                        }
                        v13 = v147;
                      }
                      ExReleaseResourceLite((PERESOURCE)&v22[2].Header.WaitListHead);
                      if ( (v14 & 1) != 0 )
                        PspApplyWorkingSetLimits((__int64)v22);
                      if ( v165 )
                        SeReleaseSubjectContext(v165);
                      if ( !P )
                        goto LABEL_508;
                      ExFreePoolWithTag(P, 0x614A7350u);
                      v59 = v47;
                      goto LABEL_248;
                    }
                    if ( ((__int64)v22[10].Header.WaitListHead.Blink & 0x10) != 0 )
                    {
                      KeFirstGroupAffinityEx((__int64)&v175, (unsigned __int16 *)&v22[11]);
                      PrimaryGroupThread = v175.m128i_u16[4];
                    }
                    else
                    {
                      PrimaryGroupThread = KeQueryPrimaryGroupThread((__int64)KeGetCurrentThread());
                      v175.m128i_i16[4] = PrimaryGroupThread;
                    }
                    if ( v221 != (KeActiveProcessors.Bitmap[PrimaryGroupThread] & v221) )
                    {
                      v22 = Event;
                      goto LABEL_158;
                    }
                    KeAddGroupAffinityEx((unsigned __int16 *)&v236, v175.m128i_u16[4], v221);
                    v22 = Event;
                    v13 = PspEnumJobsAndProcessesInJobHierarchy(
                            (char *)Event,
                            0,
                            0,
                            (int)PspSetAffinityLimitCallback,
                            (__int64)&SubjectContext,
                            1);
                    v147 = v13;
                    if ( v13 < 0 )
                      goto LABEL_159;
                    v49 = *(_QWORD *)&v22[22].Header.Lock;
                    v47 = (char *)v156;
                    if ( v49 )
                    {
                      v181 = *(_OWORD *)(v49 + 8);
                      v182 = *(_OWORD *)(v49 + 24);
                      v165 = (PSECURITY_SUBJECT_CONTEXT)&v181;
                    }
                    else
                    {
                      *(_QWORD *)&v22[22].Header.Lock = P;
                      v22[22].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v47;
                      P = 0LL;
                      v165 = 0LL;
                    }
                    v50 = *(struct _SECURITY_SUBJECT_CONTEXT **)&v22[22].Header.Lock;
                    *v50 = SubjectContext;
                    v50[1].ClientToken = v169;
                  }
                  else
                  {
                    v53 = (v46 & 0x4000) != 0;
                    v47 = (char *)v156;
                    if ( v53 && ((__int64)v22[64].Header.WaitListHead.Blink & 2) == 0 )
                    {
                      v13 = -1073741811;
                      v147 = -1073741811;
                      goto LABEL_192;
                    }
                  }
                  if ( ((__int64)v22[10].Header.WaitListHead.Blink & 1) != 0 && (v234 & 1) == 0 )
                  {
                    _InterlockedOr(v144, 0);
                    if ( (qword_140FC60B8 & 1) != 0 )
                      ExfAcquireReleasePushLockExclusive(&qword_140FC60B8);
                    v13 = v147;
                    v22 = Event;
                  }
                  v170[0] = (__int64)v22;
                  HIDWORD(v170[1]) = v22[10].Header.WaitListHead.Blink;
                  *(_QWORD *)&v22[10].Header.Lock = v232;
                  v22[10].Header.WaitListHead.Flink = v233;
                  HIDWORD(v22[10].Header.WaitListHead.Blink) = v235;
                  if ( (v14 & 2) != 0 )
                  {
                    v51 = v22 + 11;
                    v52 = &v236;
                    do
                    {
                      *(_OWORD *)&v51->Header.Lock = *(_OWORD *)v52;
                      *(_OWORD *)&v51->Header.WaitListHead.Blink = *((_OWORD *)v52 + 1);
                      v51[1].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v52 + 2);
                      *(_OWORD *)&v51[2].Header.Lock = *((_OWORD *)v52 + 3);
                      *(_OWORD *)&v51[2].Header.WaitListHead.Blink = *((_OWORD *)v52 + 4);
                      v51[3].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v52 + 5);
                      *(_OWORD *)&v51[4].Header.Lock = *((_OWORD *)v52 + 6);
                      v51 = (struct _KEVENT *)((char *)v51 + 128);
                      v51[-1].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v52 + 7);
                      v52 += 16;
                      --v41;
                    }
                    while ( v41 );
                    *(_QWORD *)&v51->Header.Lock = *v52;
                  }
                  BYTE5(v22[45].Header.WaitListHead.Blink) = v242;
                  v22[24].Header.SignalState = v238;
                  v22[9].Header.WaitListHead.Flink = v230;
                  v22[9].Header.WaitListHead.Blink = Blink;
                  if ( v150 == JobObjectExtendedLimitInformation )
                  {
                    PspLockJobMemoryLimitsExclusive((__int64)v22, 0LL, 0LL);
                    LODWORD(v22[10].Header.WaitListHead.Blink) = v234 | (__int64)v22[10].Header.WaitListHead.Blink & ~JobLimitInformationValidFlags;
                    v22[28].Header.WaitListHead.Blink = v239;
                    *(_QWORD *)&v22[29].Header.Lock = v240;
                    v22[29].Header.WaitListHead.Flink = v241;
                    PspUnlockJobMemoryLimitsExclusive((__int64)v22, 0LL, 0LL);
                  }
                  else
                  {
                    LODWORD(v22[10].Header.WaitListHead.Blink) = v234 | (__int64)v22[10].Header.WaitListHead.Blink & ~JobLimitInformationValidFlags;
                  }
                  LODWORD(v170[1]) = ~(LODWORD(v22[10].Header.WaitListHead.Blink) | HIDWORD(v170[1]));
                  if ( (v217 & 4) != 0 )
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
                    v13 = v147;
                  }
                  if ( (v170[1] & 1) == 0 )
                    v14 |= 1u;
                  PspEnumJobsAndProcessesInJobHierarchy(
                    (char *)v22,
                    (int)PspSetJobLimitsJobPreCallback,
                    (int)PspSetJobLimitsJobPostCallback,
                    (int)PspSetJobLimitsProcessCallback,
                    (__int64)v170,
                    5);
                  goto LABEL_192;
                }
                goto LABEL_483;
              }
              goto LABEL_479;
            }
LABEL_97:
            v13 = -1073741727;
            goto LABEL_465;
          }
          if ( v150 != JobObjectBasicUIRestrictions )
          {
            if ( v150 == JobObjectSecurityLimitInformation )
            {
              v188 = *v10;
              v189 = v10[1];
              v190.m128i_i64[0] = v10[2].m128i_i64[0];
              v13 = (v188.m128i_i32[0] & 0xFFFFFFF0) != 0 ? -1073741811 : -1073741637;
LABEL_465:
              v22 = Event;
              goto LABEL_508;
            }
            if ( v150 != JobObjectEndOfJobTimeInformation )
            {
              if ( v150 == JobObjectAssociateCompletionPortInformation )
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
                    IopFreeMiniCompletionPacket(MiniCompletionPacket, v24, v25, v26);
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
                goto LABEL_508;
              }
              if ( v150 != JobObjectExtendedLimitInformation )
              {
                if ( v150 != JobObjectGroupInformation )
                {
                  if ( v150 == JobObjectNotificationLimitInformation )
                    goto LABEL_44;
LABEL_464:
                  v13 = -1073741821;
                  goto LABEL_465;
                }
                goto LABEL_209;
              }
              goto LABEL_89;
            }
            v176 = v10->m128i_i32[0];
            v27 = v176;
            v22 = Event;
            if ( v176 <= 1 )
            {
              ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
              HIDWORD(v22[22].Header.WaitListHead.Blink) = v27;
LABEL_68:
              p_WaitListHead = (struct _ERESOURCE *)&v22[2].Header.WaitListHead;
LABEL_69:
              ExReleaseResourceLite(p_WaitListHead);
              goto LABEL_508;
            }
LABEL_483:
            v13 = -1073741811;
            goto LABEL_508;
          }
          v160 = v10->m128i_i32[0];
          v22 = Event;
          if ( (v160 & 0xFFFFFC00) == 0 )
          {
            v29 = 8;
            PspLockJobChain((__int64)Event, (__int64)Thread, 0);
            if ( !PspDoesJobHierarchyPermitUILimits((__int64)v22, 0) )
            {
              v13 = -1073741637;
LABEL_83:
              if ( v29 == 8 )
                goto LABEL_84;
              if ( (unsigned __int8)IsWin32kJobNotifyCallOutPresent() )
                goto LABEL_508;
              v34 = (__int64)v22;
LABEL_456:
              PspUnlockJob(v34, (__int64)Thread);
              goto LABEL_508;
            }
            if ( v22[24].Header.LockNV == -2 )
            {
              v13 = -1073741790;
              goto LABEL_83;
            }
            v22 = Event;
            PspBindProcessSessionToJob((__int64)Event, (__int64)KeGetCurrentThread()->ApcState.Process);
            v166 = *v30;
            if ( v166 <= 0xFFFFFFFD )
            {
              v31 = v160;
              if ( LODWORD(v22[22].Header.WaitListHead.Blink) != v160 )
              {
                v32 = IsWin32kJobNotifyCallOutPresent();
                v33 = Thread;
                if ( !v32 )
                {
                  v183 = 0uLL;
                  v186 = 0;
                  PspUnlockJobChain((__int64)v22, (__int64)Thread, 1);
                  v29 = 0;
                  v184 = v22;
                  v185 = 0;
                  v187 = v160;
                  v13 = PsInvokeWin32Callout(6, &v183, 1, (__int64)&v166);
                  v147 = v13;
                  if ( v13 < 0 )
                    goto LABEL_83;
LABEL_81:
                  if ( !(unsigned __int8)IsWin32kJobNotifyCallOutPresent() )
                  {
                    LODWORD(v22[22].Header.WaitListHead.Blink) = v160;
                    _InterlockedOr((volatile signed __int32 *)&v22[64].Header.WaitListHead.Blink, 0x10u);
                    v22 = Event;
                    v13 = v147;
                  }
                  goto LABEL_83;
                }
                LODWORD(v22[22].Header.WaitListHead.Blink) = v31;
                _InterlockedOr((volatile signed __int32 *)&v22[64].Header.WaitListHead.Blink, 0x10u);
                v22 = Event;
                PspUnlockJobChain((__int64)Event, (__int64)v33, 0);
                v29 = 0;
                Win32kJobUpdateUIRestrictionsNotify(v22);
              }
            }
            v13 = v147;
            goto LABEL_81;
          }
LABEL_361:
          v13 = -1073741811;
          goto LABEL_508;
        }
        if ( v150 != JobObjectCpuRateControlInformation )
        {
          if ( v150 != JobObjectCompletionFilter )
          {
            if ( v150 == JobObjectFreezeInformation )
            {
              v207 = *v10;
              if ( !v207.m128i_i32[0] || (v207.m128i_i32[0] & 0xFFFFFFF0) != 0 )
                goto LABEL_92;
              if ( (v207.m128i_i8[0] & 1) != 0 || (v207.m128i_i8[0] & 8) == 0 )
              {
                v22 = Event;
                v13 = PspFreezeJobTree((__int64)Event, (__int64)&v207);
                if ( v13 >= 0 )
                  v10->m128i_i32[0] = v207.m128i_i32[0];
                goto LABEL_508;
              }
              goto LABEL_479;
            }
            if ( v150 != JobObjectBackgroundInformation )
            {
              switch ( v150 )
              {
                case JobObjectSchedulingRankBiasInformation:
                  LOBYTE(v148) = v10->m128i_i8[0];
                  v22 = Event;
                  ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
                  if ( ((__int64)v22[64].Header.WaitListHead.Blink & 0x20) == 0 )
                    goto LABEL_257;
                  v77 = v22[51].Header.WaitListHead.Blink;
                  v78 = (unsigned int)v77[2].Blink;
                  if ( (v78 & 0x40) != 0 )
                    goto LABEL_257;
                  if ( (v78 & 0x21) != 0 )
                  {
                    v13 = -1073741637;
                    goto LABEL_68;
                  }
                  if ( ((v78 >> 3) & 1) == ((_BYTE)v148 != 0) )
                    goto LABEL_257;
                  LODWORD(v77[2].Blink) = ((_BYTE)v148 != 0 ? 8 : 0) | v78 & 0xFFFFFFF7;
                  KeSetSchedulingGroupRankBias((__int64)&v22[51].Header.WaitListHead.Blink[8], v148);
                  PspEnumJobsAndProcessesInJobHierarchy(
                    (char *)v22,
                    0,
                    0,
                    (int)PspSetProcessCacheIsolationCallback,
                    (__int64)&v148,
                    1);
                  break;
                case JobObjectTimerVirtualizationInformation:
                  if ( v10->m128i_i8[0] != 1 )
                  {
                    v13 = -1073741811;
                    v147 = -1073741811;
                    v22 = Event;
                    goto LABEL_508;
                  }
                  v22 = Event;
                  PspEnumJobsAndProcessesInJobHierarchy(
                    (char *)Event,
                    0,
                    (int)PspEnableTimerVirtualization,
                    (int)PspEnableProcessTimerVirtualization,
                    0LL,
                    0);
                  goto LABEL_333;
                case JobObjectCycleTimeNotification:
                  v74 = v10->m128i_i64[0];
                  v193 = v10->m128i_i64[0];
                  v22 = Event;
                  ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
                  if ( ((__int64)v22[64].Header.WaitListHead.Blink & 0x20) == 0 )
                  {
LABEL_257:
                    v13 = -1073741811;
                    goto LABEL_68;
                  }
                  v75 = v22[51].Header.WaitListHead.Blink;
                  v76 = (int)v75[2].Blink;
                  if ( (v76 & 0x10) == 0 )
                  {
                    LODWORD(v75[2].Blink) = v76 | 0x10;
                    KeInitializeDpc((PRKDPC)&v75[3], (PKDEFERRED_ROUTINE)PspJobCycleTimeNotificationDpcRoutine, v22);
                  }
                  KeSetSchedulingGroupCycleNotification((__int64)&v75[8], (__int64)&v75[3], v74);
                  break;
                default:
                  goto LABEL_464;
              }
              v13 = 0;
              goto LABEL_68;
            }
            v158 = v10->m128i_i8[0];
            v22 = Event;
            v79 = PspSetBackgroundJobTree((char *)Event, v158);
LABEL_272:
            v13 = v79;
            if ( v79 < 0 )
              goto LABEL_508;
            goto LABEL_333;
          }
          v177 = v10->m128i_i32[0];
          v80 = v177;
          v22 = Event;
          if ( (v177 & 0xFFFFC001) != 0 )
            goto LABEL_483;
          ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
          PspLockJobMemoryLimitsExclusive((__int64)v22, 0LL, 0LL);
          v22[46].Header.LockNV = v80;
          PspUnlockJobMemoryLimitsExclusive((__int64)v22, 0LL, 0LL);
          goto LABEL_332;
        }
        memmove(&v171, v10, v4);
        v81 = v171;
        if ( (v171 & 0xFFFFFFC0) != 0 )
          goto LABEL_479;
        v82 = 0;
        v152.Value = HIDWORD(v171);
        if ( (v171 & 1) == 0 )
        {
LABEL_297:
          v22 = Event;
          PspLockJobChain((__int64)Event, (__int64)Thread, 0);
          v84 = (int)v22[64].Header.WaitListHead.Blink;
          if ( (v81 & 1) != 0 )
          {
            if ( (v84 & 0x20) == 0 )
            {
              RateControl = PspAllocateRateControl(2LL);
              v86 = RateControl;
              if ( !RateControl )
              {
                v13 = -1073741670;
                goto LABEL_84;
              }
              v22[51].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)RateControl;
              goto LABEL_305;
            }
          }
          else if ( (v84 & 0x20) == 0 )
          {
            v13 = -1073741811;
            goto LABEL_84;
          }
          v86 = 0LL;
LABEL_305:
          LODWORD(v22[51].Header.WaitListHead.Blink[2].Blink) = 0;
          v87 = WORD2(v171);
          HIDWORD(v22[51].Header.WaitListHead.Blink[2].Blink) = HIDWORD(v171);
          if ( (v81 & 1) != 0 )
          {
            if ( (v81 & 4) != 0 )
            {
              LODWORD(v22[51].Header.WaitListHead.Blink[2].Blink) |= 1u;
              v152.MaxRate = v87;
            }
            if ( (v81 & 2) != 0 )
            {
              LODWORD(v22[51].Header.WaitListHead.Blink[2].Blink) |= 4u;
              v152.AllFlags = v82 & 0xFFFFFFFE;
            }
            else
            {
              v152.AllFlags = v82 | 1;
              if ( (v81 & 0x14) == 0 )
                v152.MaxRate = 10000;
            }
            if ( (v81 & 8) != 0 )
              LODWORD(v22[51].Header.WaitListHead.Blink[2].Blink) |= 2u;
            if ( (v81 & 0x10) != 0 )
              LODWORD(v22[51].Header.WaitListHead.Blink[2].Blink) |= 0x20u;
            if ( (v81 & 0x20) != 0 )
              LODWORD(v22[51].Header.WaitListHead.Blink[2].Blink) |= 0x80u;
            v88 = (_KSCHEDULING_GROUP_POLICY *)v22[51].Header.WaitListHead.Blink;
            v89 = v88 + 16;
            if ( v88 == (_KSCHEDULING_GROUP_POLICY *)v86 )
            {
              *v89 = v152;
              v13 = PspAddSchedulingGroupToJobChain((__int64)v22[54].Header.WaitListHead.Flink, (__int64)v22);
              v147 = v13;
              if ( v13 < 0 )
              {
                v90 = (char **)v22[51].Header.WaitListHead.Blink;
                if ( v90 )
                {
                  PspFreeRateControl(v90, 2u);
                  v22[51].Header.WaitListHead.Blink = 0LL;
                }
                goto LABEL_84;
              }
              _InterlockedOr((volatile signed __int32 *)&v22[64].Header.WaitListHead.Blink, 0x20u);
              v22 = Event;
            }
            else
            {
              BugCheckParameter1[0] = (ULONG_PTR)&v88[16];
              if ( (v88[5].Value & 4) != 0 )
                KeSetSchedulingGroupWeights(1u, BugCheckParameter1, (__int64)&v152);
              else
                KeSetSchedulingGroupCpuRates((__int64)v89, (struct _KSCHEDULING_GROUP **)BugCheckParameter1, &v152);
            }
            v172 = v22[51].Header.WaitListHead.Blink[2].Blink;
          }
          else
          {
            v152.AllFlags = v82 | 3;
            v152.Value = 655370000;
            LODWORD(v22[51].Header.WaitListHead.Blink[2].Blink) |= 0x40u;
            Value = v152.Value;
            HIDWORD(v22[51].Header.WaitListHead.Blink[2].Blink) = v152.Value;
            BugCheckParameter1[0] = (ULONG_PTR)&v22[51].Header.WaitListHead.Blink[8];
            HIBYTE(v148) = (*(_DWORD *)(BugCheckParameter1[0] + 4) & 4) != 0;
            v22[52].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)((char *)v22[52].Header.WaitListHead.Flink
                                                                     + KeQuerySchedulingGroupReadyTime(BugCheckParameter1[0]));
            KeSetSchedulingGroupCpuRates(v92, (struct _KSCHEDULING_GROUP **)BugCheckParameter1, &v152);
            HIDWORD(v172) = Value;
            if ( HIBYTE(v148) )
            {
              HIBYTE(v148) = 0;
              PspEnumJobsAndProcessesInJobHierarchy(
                (char *)v22,
                0,
                0,
                (int)PspSetProcessCacheIsolationCallback,
                (__int64)&v148 + 1,
                1);
            }
          }
          v13 = 0;
          if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
            EtwTraceJobSetQuery((__int64)v22, 15, (__int64)&v172, 0LL, 0, 0x725u);
LABEL_84:
          PspUnlockJobChain((__int64)v22, (__int64)Thread, 0);
          goto LABEL_508;
        }
        if ( (v171 & 2) != 0 )
        {
          if ( (v171 & 0x10) != 0 )
            goto LABEL_479;
          v83 = (unsigned int)(HIDWORD(v171) - 1) <= 8;
        }
        else
        {
          if ( (v171 & 0x10) == 0 )
          {
            if ( (unsigned int)(HIDWORD(v171) - 1) > 0x270F )
              goto LABEL_479;
            goto LABEL_295;
          }
          if ( (v171 & 4) != 0 || !WORD2(v171) || WORD2(v171) > HIWORD(v171) )
            goto LABEL_479;
          v83 = HIWORD(v171) <= 0x2710u;
        }
        if ( !v83 )
          goto LABEL_479;
LABEL_295:
        if ( (v171 & 0x20) != 0 )
          v82 = 8;
        goto LABEL_297;
      }
      v22 = Event;
      ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
      KeResetEvent(v22);
LABEL_332:
      ExReleaseResourceLite((PERESOURCE)&v22[2].Header.WaitListHead);
      goto LABEL_333;
    }
    if ( v150 > JobObjectIoAttribution )
    {
      if ( v150 == JobObjectMemoryPartitionInformation )
      {
        v195 = v10->m128i_i64[0];
        v22 = Event;
        Silo = PspSetJobMemoryPartition((__int64)Event, PreviousMode, v195);
        goto LABEL_507;
      }
      if ( v150 == JobObjectContainerTelemetryId )
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
        goto LABEL_332;
      }
      if ( v150 != JobObjectSiloSystemRoot )
      {
        if ( v150 == JobObjectEnergyTrackingState )
        {
          v173 = v10->m128i_i64[0];
          v22 = Event;
          v79 = PspSetEnergyTrackingStateJobTree((char *)Event, &v173);
          goto LABEL_272;
        }
        if ( v150 != JobObjectThreadImpersonationInformation )
        {
          if ( v150 == JobObjectIoPriorityLimit )
          {
            Object[0] = (PVOID)v10->m128i_i64[0];
            if ( ((__int64)Object[0] & 0xFFFFFFFE) != 0 )
              goto LABEL_92;
            v136 = (unsigned __int64)Object[0] >> 32;
            if ( HIDWORD(Object[0]) < 5 )
            {
              v22 = Event;
              if ( ((__int64)Object[0] & 1) == 0 )
                LODWORD(v136) = 5;
              PspSetIoPriorityLimitJobTree((char *)Event, v136);
              goto LABEL_333;
            }
            goto LABEL_479;
          }
          if ( v150 != JobObjectPagePriorityLimit )
            goto LABEL_464;
          Object[0] = (PVOID)v10->m128i_i64[0];
          if ( ((__int64)Object[0] & 0xFFFFFFFE) != 0 )
            goto LABEL_92;
          v135 = (unsigned __int64)Object[0] >> 32;
          if ( HIDWORD(Object[0]) >= 8 )
          {
LABEL_479:
            v13 = -1073741811;
            goto LABEL_465;
          }
          v22 = Event;
          if ( ((__int64)Object[0] & 1) != 0 )
          {
            if ( !HIDWORD(Object[0]) )
              goto LABEL_483;
          }
          else
          {
            LODWORD(v135) = 8;
          }
          PspSetPagePriorityLimitJobTree((char *)Event, v135);
LABEL_333:
          v13 = 0;
          goto LABEL_508;
        }
        v159 = v10->m128i_i8[0];
        if ( v159 != 1 )
          goto LABEL_479;
        v137 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
        v22 = Event;
        if ( !v137 )
        {
          v13 = -1073741727;
          goto LABEL_508;
        }
        if ( ((__int64)Event[64].Header.WaitListHead.Blink & 0x40000000) == 0 )
          goto LABEL_483;
        v13 = PspSetJobSiloThreadImpersonationPolicy((__int64)Event, 2) == 0 ? 0xC0000022 : 0;
LABEL_508:
        v143 = Thread;
        v8 = Thread->SpecialApcDisable++ == -1;
        if ( v8 && ($727077A9B6E167EAE1398C74674DC5A5 *)v143->ApcState.ApcListHead[0].Flink != &v143->152 )
          KiCheckForKernelApcDelivery();
        if ( v13 )
        {
          if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
            EtwTraceJobSetQuery((__int64)v22, v150, 0LL, 0LL, v13, 0x727u);
        }
        ObfDereferenceObjectWithTag(v22, 0x79517350u);
        return v13;
      }
      v22 = Event;
      if ( ((__int64)Event[64].Header.WaitListHead.Blink & 0x40000000) == 0 )
        goto LABEL_359;
      v174 = 0LL;
      *(__m128i *)Object = *v10;
      v138 = _mm_srli_si128(*(__m128i *)Object, 8).m128i_u64[0];
      v139 = (PVOID)v138;
      if ( !v138
        || (v140 = (unsigned __int16)Object[0], (unsigned __int16)(LOWORD(Object[0]) - 1) > 0x206u)
        || ((__int64)Object[0] & 1) != 0 )
      {
        v13 = -1073741811;
        v147 = -1073741811;
        goto LABEL_508;
      }
      if ( PreviousMode == 1 )
      {
        if ( (v138 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v138 + LOWORD(Object[0]) > 0x7FFFFFFF0000LL || v138 + LOWORD(Object[0]) < v138 )
        {
          v22 = Event;
          v139 = Object[1];
          v140 = (unsigned __int16)Object[0];
        }
      }
      v141 = (void *)ExAllocatePool2(0x100uLL);
      v142 = v141;
      v174 = v141;
      if ( !v141 )
      {
        v13 = -1073741670;
        v147 = -1073741670;
        goto LABEL_508;
      }
      memmove(v141, v139, v140);
      if ( wcsnlen((const wchar_t *)v142, (unsigned __int64)v140 >> 1) == (unsigned __int64)v140 >> 1 )
      {
        Object[1] = v142;
        v13 = PspAssignSiloSystemRootPath((__int64)v22, (unsigned __int16 *)Object);
      }
      else
      {
        v13 = -1073741811;
      }
      if ( !v142 )
        goto LABEL_508;
      v130 = 1918071632;
      v131 = v142;
LABEL_447:
      ExFreePoolWithTag(v131, v130);
      goto LABEL_508;
    }
    if ( v150 == JobObjectIoAttribution )
    {
      v132 = 0;
      v188 = *v10;
      v189 = v10[1];
      v190 = v10[2];
      v191 = v10[3];
      v192 = v10[4].m128i_i64[0];
      v22 = Event;
      if ( (v188.m128i_i32[0] & 0xFFFFFFFC) != 0 || (v188.m128i_i8[0] & 3) == 0 )
      {
        v13 = -1073741811;
      }
      else
      {
        v132 = 8;
        v133 = Thread;
        PspLockRootJobExclusive((__int64)Event, (__int64)Thread, BugCheckParameter1);
        PspLockJobConditionally((__int64)v22, (__int64)BugCheckParameter1);
        LOBYTE(v134) = v188.m128i_i8[0] & 1;
        v13 = PspSetJobIoAttribution(v22, v134, 1, 1u);
        if ( v13 >= 0 )
        {
          PspUnlockJobConditionally((__int64)v22, (__int64)BugCheckParameter1);
          PspUnlockJob(BugCheckParameter1[0], (__int64)v133);
          v132 = 0;
        }
      }
      if ( v132 != 8 )
        goto LABEL_508;
      PspUnlockJobConditionally((__int64)v22, (__int64)BugCheckParameter1);
      v34 = BugCheckParameter1[0];
      goto LABEL_456;
    }
    if ( v150 == JobObjectClearPeakJobMemoryUsed )
    {
      v22 = Event;
      PspLockJobMemoryLimitsExclusive((__int64)Event, 0LL, 0LL);
      *(_QWORD *)&v22[30].Header.Lock = 0LL;
      v22[29].Header.WaitListHead.Blink = 0LL;
      PspUnlockJobMemoryLimitsExclusive((__int64)v22, 0LL, 0LL);
      v13 = 0;
      goto LABEL_508;
    }
    if ( v150 != JobObjectIoRateControlInformation )
    {
      switch ( v150 )
      {
        case JobObjectNetRateControlInformation:
          v22 = Event;
          Silo = PspSetNetRateControl(v10, (unsigned int)v4, (__int64)Event);
          break;
        case JobObjectNotificationLimitInformation2:
LABEL_44:
          if ( (_DWORD)v4 == 48 )
          {
            memmove(&v212, v10, v4);
            v16 = DWORD2(v214);
            v19 = *((_QWORD *)&v212 + 1);
            v20 = v212;
            v204 = v212;
            v17 = *((_QWORD *)&v213 + 1);
            v18 = v213;
            *(_OWORD *)v205 = v213;
            *(_DWORD *)&v205[16] = v214;
            *(_QWORD *)&v205[20] = *(_QWORD *)((char *)&v214 + 4);
            v15 = 459268;
            JobLimitInformationValidFlags = 459268;
          }
          else
          {
            if ( (_DWORD)v4 == 56 )
            {
              memmove(&v208, v10, v4);
              v16 = v211;
              *(_DWORD *)&v205[24] = v211;
              v19 = *((_QWORD *)&v208 + 1);
              v20 = v208;
              v204 = v208;
              v100 = *((_QWORD *)&v209 + 1);
              v101 = v209;
              v206 = v101 >> 64;
              v18 = v101;
              *(_QWORD *)v205 = v209;
              v17 = v210;
              *(_OWORD *)&v205[8] = v210;
              v15 = 2589188;
              JobLimitInformationValidFlags = 2589188;
              goto LABEL_367;
            }
            memmove(&v204, v10, v4);
            v15 = 2064900;
            JobLimitInformationValidFlags = 2064900;
            v16 = *(_DWORD *)&v205[24];
            v17 = *(_QWORD *)&v205[8];
            v18 = *(_QWORD *)v205;
            v19 = *((_QWORD *)&v204 + 1);
            v20 = v204;
          }
          v100 = v206;
LABEL_367:
          if ( (~v15 & v16) == 0 )
          {
            if ( (v16 & 0x8000) != 0 )
            {
              if ( v100 < 0x1000 )
                goto LABEL_92;
            }
            else
            {
              v100 = 0LL;
              v206 = 0LL;
            }
            if ( (v16 & 0x200) != 0 )
            {
              if ( v17 < 0x1000 || v17 < v100 )
                goto LABEL_92;
            }
            else
            {
              *(_QWORD *)&v205[8] = 0LL;
            }
            if ( (v16 & 4) != 0 )
            {
              if ( !v18 )
                goto LABEL_92;
            }
            else
            {
              *(_QWORD *)v205 = 0LL;
            }
            if ( (v16 & 0x10000) != 0 )
            {
              if ( !v20 )
                goto LABEL_92;
            }
            else
            {
              *(_QWORD *)&v204 = 0LL;
            }
            if ( (v16 & 0x20000) != 0 )
            {
              if ( !v19 )
                goto LABEL_92;
            }
            else
            {
              *((_QWORD *)&v204 + 1) = 0LL;
            }
            for ( j = 0; j < 3; j = v106 + 1 )
            {
              PspNotificationLimitRateControlToleranceField((__int64)&v204, j);
              PspNotificationLimitRateControlToleranceIntervalField((__int64)&v204, v103);
              v105 = PspRateControlLimitFlag(v104);
              if ( (v105 & v109) != 0 )
              {
                if ( !*v107 || *v107 > 3 || !*v108 || *v108 > 3 )
                  goto LABEL_479;
              }
              else
              {
                *v107 = 0;
                *v108 = 0;
              }
            }
            v22 = Event;
            v110 = &Event[50].Header.WaitListHead.Blink;
            if ( Event[50].Header.WaitListHead.Blink )
            {
              v111 = 0LL;
              v112 = 0LL;
              goto LABEL_404;
            }
            v111 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
            if ( v111 )
            {
              v112 = (char *)PsChargeSharedPoolQuota((__int64)KeGetCurrentThread()->ApcState.Process, 0x88uLL, 0LL);
              v43 = v111;
              if ( !v112 )
              {
                v44 = 1649046352;
                goto LABEL_146;
              }
              memset_0(v111, 0, 0x88uLL);
              v22 = Event;
LABEL_404:
              ExAcquireResourceExclusiveLite((PERESOURCE)&v22[2].Header.WaitListHead, 1u);
              if ( *v110 )
              {
                if ( v111 )
                {
                  ExFreePoolWithTag(v111, 0x624A7350u);
                  PsReturnSharedPoolQuota(v112, 0x88uLL, 0LL, v113);
                }
              }
              else
              {
                *v110 = v111;
                *(_QWORD *)&v22[51].Header.Lock = v112;
              }
              v114 = v22[50].Header.WaitListHead.Blink;
              Flink = (int)v114->Flink;
              *(_OWORD *)&v114->Blink = v204;
              v114[1].Blink = *(struct _LIST_ENTRY **)v205;
              for ( k = 0; k < 3; k = v122 + 1 )
              {
                v117 = (_DWORD *)PspNotificationLimitRateControlToleranceField((__int64)&v204, k);
                *(_DWORD *)(v118 - 12) = *v117;
                v120 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField((__int64)&v204, v119);
                *v121 = *v120;
              }
              PspLockJobMemoryLimitsExclusive((__int64)v22, 0LL, 0LL);
              v114[2].Flink = (struct _LIST_ENTRY *)(v206 >> 12);
              v114[2].Blink = (struct _LIST_ENTRY *)(*(_QWORD *)&v205[8] >> 12);
              LODWORD(v22[50].Header.WaitListHead.Blink->Flink) = *(_DWORD *)&v205[24];
              PspUnlockJobMemoryLimitsExclusive((__int64)v22, 0LL, 0LL);
              if ( ((__int64)v22[50].Header.WaitListHead.Blink->Flink & 0xFFFF7DFF) != 0 )
              {
                _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
                v22 = Event;
              }
              if ( Flink )
              {
                v123 = v22[50].Header.WaitListHead.Blink;
                if ( LODWORD(v123->Flink) )
                {
LABEL_417:
                  if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
                    EtwTraceJobSetQuery((__int64)v22, v150, (__int64)&v204, 0LL, 0, 0x725u);
                  ExReleaseResourceLite((PERESOURCE)&v22[2].Header.WaitListHead);
                  PspLockJobMemoryLimitsShared((__int64)v22, 0LL);
                  v124 = v22[65].Header.WaitListHead.Flink;
                  v22 = Event;
                  JobMemoryUsageNotificationViolations = PspGetJobMemoryUsageNotificationViolations(
                                                           (__int64)Event,
                                                           (unsigned __int64)Event[50].Header.WaitListHead.Flink,
                                                           (unsigned __int64)Event[50].Header.WaitListHead.Flink
                                                         + (unsigned __int64)v124,
                                                           33280);
                  PspUnlockJobMemoryLimitsShared((__int64)v22, 0LL);
                  if ( JobMemoryUsageNotificationViolations )
                  {
                    PspScheduleEnforcementWorker((__int64)v22[54].Header.WaitListHead.Blink);
                    v22 = Event;
                  }
                  goto LABEL_333;
                }
              }
              else
              {
                v123 = v22[50].Header.WaitListHead.Blink;
                if ( !LODWORD(v123->Flink) )
                  goto LABEL_417;
              }
              PspEnumJobsAndProcessesInJobHierarchy(
                (char *)v22,
                (int)PspSetJobNotificationCountCallback,
                0,
                0,
                (__int64)v123,
                5);
              goto LABEL_417;
            }
LABEL_142:
            v13 = -1073741670;
            goto LABEL_508;
          }
LABEL_92:
          v13 = -1073741811;
          goto LABEL_465;
        case JobObjectCreateSilo:
          v22 = Event;
          Silo = PspCreateSilo((__int64)Event);
          break;
        case JobObjectSiloRootDirectory:
          v99 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
          v22 = Event;
          if ( !v99 )
            goto LABEL_357;
          if ( ((__int64)Event[64].Header.WaitListHead.Blink & 0x40000000) == 0 )
            goto LABEL_359;
          if ( !PspSetJobSiloThreadImpersonationPolicy((__int64)Event, 4) )
            goto LABEL_361;
          v178 = v10->m128i_i32[0];
          Silo = ObCreateSiloRootDirectory((__int64)v22, v178);
          break;
        case JobObjectServerSiloInitialize:
          v95 = PreviousMode;
          v96 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
          v22 = Event;
          if ( v96 )
          {
            if ( ((__int64)Event[64].Header.WaitListHead.Blink & 0x40000000) != 0 )
            {
              if ( !PspSetJobSiloThreadImpersonationPolicy((__int64)Event, 4) )
                goto LABEL_361;
              v194 = v10->m128i_i64[0];
              v179 = v10->m128i_i32[2];
              LOBYTE(v97) = v95;
              Silo = PspConvertSiloToServerSilo((__int64)v22, v97, v194, v179);
              break;
            }
LABEL_359:
            v13 = -1073740535;
            goto LABEL_508;
          }
LABEL_357:
          v13 = -1073741727;
          goto LABEL_508;
        case JobObjectServerSiloRunningState:
          v180 = v10->m128i_i32[0];
          v22 = Event;
          if ( PspJobIsAppSilo((__int64)Event) && v93 == 2 )
          {
            v94 = (struct _ERESOURCE *)&v22[2].Header.WaitListHead;
            ExAcquireResourceExclusiveLite((PERESOURCE)&v22[2].Header.WaitListHead, 1u);
            if ( LODWORD(v22[60].Header.WaitListHead.Blink) )
            {
              v13 = -1073740529;
            }
            else
            {
              v53 = _interlockedbittestandset((volatile signed __int32 *)&v22[64].Header.WaitListHead.Blink, 0x1Du);
              v22 = Event;
              if ( v53 )
              {
                v13 = 255;
              }
              else
              {
                PspHardDereferenceSiloWorker((__int64)Event);
                v13 = 0;
              }
            }
            p_WaitListHead = v94;
            goto LABEL_69;
          }
          goto LABEL_361;
        default:
          goto LABEL_464;
      }
LABEL_507:
      v13 = Silo;
      goto LABEL_508;
    }
    v126 = 0LL;
    Object[1] = 0LL;
    memmove(v196, v10, v4);
    if ( v198 )
    {
      v127 = v200;
      if ( !v200 )
        goto LABEL_435;
      if ( ((unsigned __int8)v198 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)v198 + v200 > 0x7FFFFFFF0000LL || (char *)v198 + v200 < v198 )
      {
        v127 = v200;
        v126 = Object[1];
      }
      if ( !v127 || (v127 & 1) != 0 )
      {
LABEL_435:
        v13 = -1073741811;
        v147 = -1073741811;
        v22 = Event;
        goto LABEL_445;
      }
      v128 = 32LL;
      if ( PreviousMode == 1 )
        v128 = 257LL;
      v129 = (_WORD *)ExAllocatePool2(v128);
      v126 = v129;
      Object[1] = v129;
      if ( !v129 )
      {
        v13 = -1073741801;
        v147 = -1073741801;
        v22 = Event;
        goto LABEL_445;
      }
      memmove(v129, v198, v200);
      v126[(unsigned __int64)v200 >> 1] = 0;
      v198 = v126;
    }
    if ( (v199 & 0xFFFFFFF0) != 0 )
    {
      v13 = -1073741811;
    }
    else
    {
      if ( !v201 && !v197 && !v202 || PspIsContextAdmin() )
      {
        v22 = Event;
        v13 = PspSetJobIoRateControl((__int64)Event, (__int64)v196);
        goto LABEL_445;
      }
      v13 = -1073741790;
    }
    v22 = Event;
LABEL_445:
    if ( !v126 )
      goto LABEL_508;
    v130 = 0;
    v131 = v126;
    goto LABEL_447;
  }
  return result;
}
