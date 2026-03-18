/*
 * XREFs of NtSetInformationJobObject @ 0x140ACE760
 * Callers:
 *     <none>
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140257100 (KeAddGroupAffinityEx.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeSetSchedulingGroupRankBias @ 0x14030ED08 (KeSetSchedulingGroupRankBias.c)
 *     KeSetSchedulingGroupCpuRates @ 0x140310954 (KeSetSchedulingGroupCpuRates.c)
 *     KeSetSchedulingGroupWeights @ 0x140310E70 (KeSetSchedulingGroupWeights.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeIsEmptyAffinityEx @ 0x1403B55D0 (KeIsEmptyAffinityEx.c)
 *     PspHardDereferenceSiloWorker @ 0x1403C47E0 (PspHardDereferenceSiloWorker.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140418A5C (ExfAcquireReleasePushLockExclusive.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     KeFirstGroupAffinityEx @ 0x14045A8C0 (KeFirstGroupAffinityEx.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x14046EDC4 (KeQuerySchedulingGroupReadyTime.c)
 *     KeQueryActiveGroupCount @ 0x140481460 (KeQueryActiveGroupCount.c)
 *     KeQueryPrimaryGroupThread @ 0x140485128 (KeQueryPrimaryGroupThread.c)
 *     wcsnlen @ 0x140500090 (wcsnlen.c)
 *     KeSetSchedulingGroupCycleNotification @ 0x1405C7714 (KeSetSchedulingGroupCycleNotification.c)
 *     PspJobIsAppSilo @ 0x1405E4DF0 (PspJobIsAppSilo.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PspAssignSiloSystemRootPath @ 0x1407724C0 (PspAssignSiloSystemRootPath.c)
 *     PspConvertSiloToServerSilo @ 0x140772754 (PspConvertSiloToServerSilo.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1407773B8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x140777480 (PspApplyWorkingSetLimits.c)
 *     PspSetIoPriorityLimitJobTree @ 0x140777DA4 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobMemoryPartition @ 0x140777E54 (PspSetJobMemoryPartition.c)
 *     PspSetJobSiloThreadImpersonationPolicy @ 0x140778198 (PspSetJobSiloThreadImpersonationPolicy.c)
 *     PspSetNetRateControl @ 0x140778224 (PspSetNetRateControl.c)
 *     PspSetPagePriorityLimitJobTree @ 0x1407784F0 (PspSetPagePriorityLimitJobTree.c)
 *     PspSetUILimitJobObject @ 0x1407785C8 (PspSetUILimitJobObject.c)
 *     ObCreateSiloRootDirectory @ 0x14082ABD4 (ObCreateSiloRootDirectory.c)
 *     SeCaptureSubjectContextEx @ 0x14083FC40 (SeCaptureSubjectContextEx.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     PsReturnSharedPoolQuota @ 0x14085A690 (PsReturnSharedPoolQuota.c)
 *     PspLockRootJobExclusive @ 0x14085D130 (PspLockRootJobExclusive.c)
 *     PspSetJobIoRateControl @ 0x14085E618 (PspSetJobIoRateControl.c)
 *     PspLockJobConditionally @ 0x14085E94C (PspLockJobConditionally.c)
 *     PspFreezeJobTree @ 0x14085EA8C (PspFreezeJobTree.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     PspLockJobChain @ 0x1408E76DC (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x1408E7884 (PspUnlockJobChain.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x1408E8E50 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspIsContextAdmin @ 0x1408E917C (PspIsContextAdmin.c)
 *     PspLockJobMemoryLimitsExclusive @ 0x1408E93F0 (PspLockJobMemoryLimitsExclusive.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1408EA030 (PspSetEnergyTrackingStateJobTree.c)
 *     PspSetJobIoAttribution @ 0x1408EA0D0 (PspSetJobIoAttribution.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408EBCAC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1408ED360 (PspUnlockJob.c)
 *     PspLockJobMemoryLimitsShared @ 0x1408ED4D8 (PspLockJobMemoryLimitsShared.c)
 *     PspRateControlLimitFlag @ 0x1408ED540 (PspRateControlLimitFlag.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1408ED564 (PspUnlockJobMemoryLimitsShared.c)
 *     SeCheckPrivilegedObject @ 0x140913BF4 (SeCheckPrivilegedObject.c)
 *     PspAddSchedulingGroupToJobChain @ 0x14098CBAC (PspAddSchedulingGroupToJobChain.c)
 *     PspFreeRateControl @ 0x14098CF0C (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14098CF58 (PspAllocateRateControl.c)
 *     PsChargeSharedPoolQuota @ 0x14098D090 (PsChargeSharedPoolQuota.c)
 *     IoAllocateMiniCompletionPacket @ 0x1409A70C0 (IoAllocateMiniCompletionPacket.c)
 *     IopFreeMiniCompletionPacket @ 0x1409A71B0 (IopFreeMiniCompletionPacket.c)
 *     SePrivilegeCheck @ 0x1409B0320 (SePrivilegeCheck.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x1409F5C78 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspUnlockJobConditionally @ 0x140A36C28 (PspUnlockJobConditionally.c)
 *     PspGetJobLimitInformationValidFlags @ 0x140A37330 (PspGetJobLimitInformationValidFlags.c)
 *     PspScheduleEnforcementWorker @ 0x140A4B140 (PspScheduleEnforcementWorker.c)
 *     EtwTraceJobSetQuery @ 0x140A56390 (EtwTraceJobSetQuery.c)
 *     PspSetBackgroundJobTree @ 0x140A58988 (PspSetBackgroundJobTree.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x140A59264 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x140A5AF90 (PspNotificationLimitRateControlToleranceField.c)
 *     PspCreateSilo @ 0x140A73C18 (PspCreateSilo.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetInformationJobObject(ULONG_PTR BugCheckParameter1, int a2, void *a3, unsigned int a4)
{
  size_t v4; // r12
  __int64 v5; // rdi
  unsigned int v7; // ecx
  bool v8; // zf
  KPROCESSOR_MODE v9; // al
  __m128i *v10; // r13
  __int64 result; // rax
  int v12; // edx
  unsigned __int64 v13; // rdx
  int v14; // esi
  char v15; // bl
  unsigned __int64 v16; // rcx
  int v17; // eax
  int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // r11
  __int64 v21; // r10
  ULONG_PTR MiniCompletionPacket; // rbx
  PRKEVENT v23; // r14
  void *v24; // rdi
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // ebx
  struct _ERESOURCE *p_WaitListHead; // rcx
  int Silo; // eax
  unsigned int v30; // r13d
  char v31; // al
  unsigned int v32; // eax
  char v33; // al
  unsigned __int64 v34; // r14
  unsigned int v35; // r13d
  __int64 v36; // rdi
  struct _LIST_ENTRY *v37; // rsi
  struct _LIST_ENTRY *v38; // rcx
  ULONG v39; // edx
  BOOLEAN v40; // al
  unsigned int v41; // r13d
  char *v42; // r13
  unsigned __int16 PrimaryGroupThread; // ax
  __int64 v44; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v45; // rax
  struct _KEVENT *v46; // rcx
  __int64 *v47; // rax
  bool v48; // cf
  _QWORD *v49; // rax
  _QWORD *v50; // rdi
  struct _LIST_ENTRY *p_Blink; // rsi
  struct _LIST_ENTRY *i; // rdi
  __int64 v53; // r9
  char *v54; // rcx
  unsigned int v55; // ebx
  unsigned __int16 v56; // di
  __int64 v57; // r14
  unsigned __int16 epi16; // ax
  __int64 v59; // rax
  struct _LIST_ENTRY *Pool2; // rdi
  SECURITY_IMPERSONATION_LEVEL *p_ImpersonationLevel; // r13
  BOOLEAN v62; // al
  __int64 v63; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v64; // rax
  struct _KEVENT *v65; // rdx
  __int64 *v66; // rax
  __int64 v67; // r8
  __int64 v68; // rsi
  struct _LIST_ENTRY *v69; // rdi
  int v70; // eax
  struct _LIST_ENTRY *v71; // r9
  unsigned int v72; // edx
  __int64 v73; // rdx
  int v74; // eax
  LONG v75; // edi
  char v76; // bl
  int v77; // esi
  bool v78; // cc
  int v79; // eax
  __int64 *RateControl; // rax
  __int64 *v81; // rdx
  unsigned __int16 v82; // cx
  _KSCHEDULING_GROUP_POLICY *v83; // rax
  _KSCHEDULING_GROUP_POLICY *v84; // rcx
  char **v85; // rcx
  unsigned int Value; // ebx
  __int64 v87; // rcx
  int v88; // r8d
  struct _ERESOURCE *v89; // rbx
  KPROCESSOR_MODE v90; // bl
  BOOLEAN v91; // al
  BOOLEAN v92; // al
  unsigned __int128 v93; // kr00_16
  int j; // edx
  int v95; // edx
  int v96; // edx
  int v97; // eax
  _DWORD *v98; // r9
  int *v99; // r10
  int v100; // r8d
  struct _LIST_ENTRY **v101; // r13
  struct _LIST_ENTRY *v102; // rbx
  char *v103; // rsi
  __int64 v104; // r9
  struct _LIST_ENTRY *v105; // rbx
  int Flink; // edi
  int k; // edx
  _DWORD *v108; // rax
  __int64 v109; // r8
  int v110; // edx
  _DWORD *v111; // rax
  _DWORD *v112; // r8
  int v113; // edx
  struct _LIST_ENTRY *v114; // rax
  struct _LIST_ENTRY *v115; // r8
  int JobMemoryUsageNotificationViolations; // ebx
  _WORD *v117; // rbx
  ULONG_PTR v118; // rcx
  _WORD *v119; // rax
  ULONG v120; // edx
  void *v121; // rcx
  char v122; // bl
  PETHREAD v123; // r13
  __int64 v124; // rdx
  BOOLEAN v125; // al
  unsigned __int64 v126; // xmm0_8
  PVOID v127; // rbx
  unsigned __int16 v128; // si
  void *v129; // rax
  void *v130; // rdi
  PETHREAD v131; // r13
  signed __int32 v132[8]; // [rsp+0h] [rbp-C98h] BYREF
  PRKEVENT Event; // [rsp+40h] [rbp-C58h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+48h] [rbp-C50h]
  int v135; // [rsp+4Ch] [rbp-C4Ch]
  __int16 v136; // [rsp+50h] [rbp-C48h] BYREF
  KPROCESSOR_MODE v137; // [rsp+52h] [rbp-C46h]
  int v138; // [rsp+58h] [rbp-C40h]
  unsigned __int16 v139; // [rsp+60h] [rbp-C38h]
  unsigned int v140; // [rsp+64h] [rbp-C34h]
  _KSCHEDULING_GROUP_POLICY v141; // [rsp+68h] [rbp-C30h] BYREF
  int JobLimitInformationValidFlags; // [rsp+70h] [rbp-C28h]
  __int64 v143; // [rsp+78h] [rbp-C20h]
  PETHREAD Thread; // [rsp+80h] [rbp-C18h]
  PVOID P; // [rsp+88h] [rbp-C10h]
  char v146; // [rsp+90h] [rbp-C08h]
  __int8 v147; // [rsp+91h] [rbp-C07h]
  __int64 v148; // [rsp+98h] [rbp-C00h]
  PVOID Object[2]; // [rsp+A0h] [rbp-BF8h] BYREF
  ULONG_PTR BugCheckParameter1a[2]; // [rsp+B0h] [rbp-BE8h] BYREF
  void *Src; // [rsp+C0h] [rbp-BD8h]
  PSECURITY_SUBJECT_CONTEXT v152; // [rsp+C8h] [rbp-BD0h]
  unsigned int v153; // [rsp+D0h] [rbp-BC8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-BC0h] BYREF
  void *v155; // [rsp+F8h] [rbp-BA0h]
  __int64 v156[2]; // [rsp+100h] [rbp-B98h] BYREF
  __int64 v157; // [rsp+110h] [rbp-B88h] BYREF
  struct _LIST_ENTRY *v158; // [rsp+118h] [rbp-B80h] BYREF
  __int64 v159; // [rsp+120h] [rbp-B78h] BYREF
  void *v160; // [rsp+128h] [rbp-B70h]
  __m128i v161; // [rsp+130h] [rbp-B68h] BYREF
  unsigned int v162; // [rsp+140h] [rbp-B58h]
  unsigned int v163; // [rsp+144h] [rbp-B54h]
  __int32 v164; // [rsp+148h] [rbp-B50h]
  int v165; // [rsp+14Ch] [rbp-B4Ch]
  int v166; // [rsp+150h] [rbp-B48h]
  __int32 v167; // [rsp+154h] [rbp-B44h]
  __int128 v168; // [rsp+158h] [rbp-B40h] BYREF
  __int128 v169; // [rsp+168h] [rbp-B30h]
  __m128i v170; // [rsp+180h] [rbp-B18h]
  __m128i v171; // [rsp+190h] [rbp-B08h]
  __m128i v172; // [rsp+1A0h] [rbp-AF8h]
  __m128i v173; // [rsp+1B0h] [rbp-AE8h]
  __int64 v174; // [rsp+1C0h] [rbp-AD8h]
  __int64 v175; // [rsp+1D0h] [rbp-AC8h]
  ULONG_PTR v176; // [rsp+1D8h] [rbp-AC0h]
  __int64 v177; // [rsp+1E0h] [rbp-AB8h]
  _BYTE v178[16]; // [rsp+1F0h] [rbp-AA8h] BYREF
  __int64 v179; // [rsp+200h] [rbp-A98h]
  void *v180; // [rsp+208h] [rbp-A90h]
  int v181; // [rsp+214h] [rbp-A84h]
  unsigned __int16 v182; // [rsp+218h] [rbp-A80h]
  __int64 v183; // [rsp+228h] [rbp-A70h]
  __int64 v184; // [rsp+240h] [rbp-A58h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+280h] [rbp-A18h] BYREF
  __int128 v186; // [rsp+2A0h] [rbp-9F8h] BYREF
  _BYTE v187[28]; // [rsp+2B0h] [rbp-9E8h]
  unsigned __int64 v188; // [rsp+2D0h] [rbp-9C8h]
  __m128i v189; // [rsp+2F0h] [rbp-9A8h] BYREF
  __int128 v190; // [rsp+300h] [rbp-998h] BYREF
  unsigned __int128 v191; // [rsp+310h] [rbp-988h]
  __int128 v192; // [rsp+320h] [rbp-978h]
  __int64 v193; // [rsp+330h] [rbp-968h]
  __int128 v194; // [rsp+338h] [rbp-960h] BYREF
  __int128 v195; // [rsp+348h] [rbp-950h]
  __int128 v196; // [rsp+358h] [rbp-940h]
  struct _LIST_ENTRY *v197; // [rsp+370h] [rbp-928h] BYREF
  struct _LIST_ENTRY *v198; // [rsp+378h] [rbp-920h]
  __int64 v199; // [rsp+380h] [rbp-918h]
  unsigned __int64 v200; // [rsp+388h] [rbp-910h]
  unsigned __int64 v201; // [rsp+390h] [rbp-908h]
  int v202; // [rsp+398h] [rbp-900h]
  __int64 v203; // [rsp+3A0h] [rbp-8F8h]
  unsigned int v204; // [rsp+3A8h] [rbp-8F0h]
  unsigned int v205; // [rsp+3ACh] [rbp-8ECh]
  unsigned __int64 v206; // [rsp+3E0h] [rbp-8B8h]
  unsigned __int64 v207; // [rsp+3E8h] [rbp-8B0h]
  unsigned __int64 v208; // [rsp+400h] [rbp-898h]
  __int64 v209; // [rsp+410h] [rbp-888h] BYREF
  _QWORD v210[33]; // [rsp+418h] [rbp-880h] BYREF
  char v211[224]; // [rsp+520h] [rbp-778h] BYREF
  struct _LIST_ENTRY *v212; // [rsp+600h] [rbp-698h]
  struct _LIST_ENTRY *Blink; // [rsp+608h] [rbp-690h]
  unsigned __int64 v214; // [rsp+610h] [rbp-688h]
  struct _LIST_ENTRY *v215; // [rsp+618h] [rbp-680h]
  unsigned int v216; // [rsp+620h] [rbp-678h]
  int v217; // [rsp+624h] [rbp-674h]
  __int64 v218; // [rsp+628h] [rbp-670h] BYREF
  char v219[308]; // [rsp+630h] [rbp-668h] BYREF
  int v220; // [rsp+764h] [rbp-534h]
  struct _LIST_ENTRY *v221; // [rsp+7D0h] [rbp-4C8h]
  unsigned __int64 v222; // [rsp+7D8h] [rbp-4C0h]
  struct _LIST_ENTRY *v223; // [rsp+7E0h] [rbp-4B8h]
  char v224; // [rsp+96Dh] [rbp-32Bh]

  v4 = a4;
  v5 = a2;
  v148 = BugCheckParameter1;
  v138 = a2;
  v140 = a2;
  Src = a3;
  memset_0(v210, 0, 0x100uLL);
  v158 = 0LL;
  v157 = 0LL;
  v136 = 0;
  v159 = 0LL;
  memset_0(&v197, 0, 0x98uLL);
  v189 = 0LL;
  v161 = 0LL;
  Object[0] = 0LL;
  memset_0(v178, 0, 0x90uLL);
  Event = 0LL;
  v168 = 0LL;
  v169 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  LODWORD(v155) = 0;
  memset_0(&v186, 0, 0x48uLL);
  v194 = 0LL;
  v195 = 0LL;
  v196 = 0LL;
  v190 = 0LL;
  v191 = 0LL;
  v192 = 0LL;
  v193 = 0LL;
  v141 = 0LL;
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  BugCheckParameter1a[0] = 0LL;
  *(_OWORD *)v156 = 0LL;
  if ( (unsigned int)(v5 - 1) > 0x32 )
    return 3221225475LL;
  switch ( (_DWORD)v5 )
  {
    case 9:
      if ( (_DWORD)v4 == 144 || (_DWORD)v4 == 152 )
        goto LABEL_14;
      return 3221225476LL;
    case 0xC:
      v8 = (((_DWORD)v4 - 48) & 0xFFFFFFF7) == 0;
LABEL_13:
      if ( v8 )
        goto LABEL_14;
      return 3221225476LL;
    case 0x1F:
      if ( (_DWORD)v4 == 48 || (_DWORD)v4 == 96 )
        goto LABEL_14;
      v8 = (_DWORD)v4 == 144;
      goto LABEL_13;
  }
  v7 = dword_140B3E7CC[v5];
  if ( (_DWORD)v4 != v7 && ((_DWORD)v5 != 11 && (_DWORD)v5 != 14 || (unsigned int)v4 < v7) )
    return 3221225476LL;
LABEL_14:
  Thread = KeGetCurrentThread();
  v9 = Thread->PreviousMode;
  PreviousMode = v9;
  v137 = v9;
  if ( v9 )
  {
    v10 = (__m128i *)Src;
    if ( (_DWORD)v4 )
    {
      if ( ((dword_140B3E6FC[v5] - 1) & (unsigned int)Src) != 0 )
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
  if ( !BugCheckParameter1 )
    return 3221225480LL;
  v12 = 16;
  if ( (_DWORD)v5 != 5 )
    v12 = 2;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             v12,
             (__int64)PsJobType,
             v9,
             0x79517350u,
             &Event,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v14 = 0;
    v135 = 0;
    v15 = 0;
    v16 = -1LL;
    --Thread->SpecialApcDisable;
    if ( v138 <= 25 )
    {
      if ( v138 != 25 )
      {
        if ( v138 <= 14 )
        {
          if ( v138 == 14 )
          {
LABEL_192:
            P = 0LL;
            v16 = 16LL;
            if ( v140 != 14 )
              v16 = 2LL;
            v140 = v16;
            v13 = (unsigned int)v4 % (unsigned int)v16;
            v55 = (unsigned int)v4 / (unsigned int)v16;
            if ( (unsigned int)v4 % (unsigned int)v16 )
            {
              v14 = -1073741820;
              goto LABEL_448;
            }
            v153 = (unsigned int)v4 / (unsigned int)v16;
            v209 = 2097153LL;
            memset_0(v210, 0, 0x100uLL);
            v56 = KeQueryActiveGroupCount() - 1;
            v57 = v140;
            while ( v55 )
            {
              if ( v138 == 14 )
              {
                v161 = *v10;
                epi16 = _mm_extract_epi16(v161, 4);
                v139 = epi16;
                v148 = v161.m128i_i64[0];
                v16 = 0x140000000uLL;
              }
              else
              {
                v59 = v10->m128i_u16[0];
                v139 = v59;
                if ( (unsigned __int16)v59 > v56 )
                  goto LABEL_206;
                v16 = 0x140000000uLL;
                v148 = KeActiveProcessors.Bitmap[v59];
                epi16 = v139;
              }
              if ( epi16 > v56 || v210[epi16] || v148 != (v148 & KeActiveProcessors.Bitmap[epi16]) )
              {
LABEL_206:
                v14 = -1073741811;
                v135 = -1073741811;
                break;
              }
              KeAddGroupAffinityEx((unsigned __int16 *)&v209, v139, v148);
              v55 = --v153;
              v10 = (__m128i *)((char *)Src + v57);
              Src = (char *)Src + v57;
              v14 = v135;
            }
            Pool2 = 0LL;
            v23 = Event;
            if ( v14 < 0 )
              goto LABEL_491;
            if ( !*(_QWORD *)&Event[22].Header.Lock )
            {
              Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
              if ( !Pool2 )
                goto LABEL_125;
              P = (PVOID)PsChargeSharedPoolQuota((__int64)KeGetCurrentThread()->ApcState.Process, 0x28uLL, 0LL);
              if ( !P )
              {
                v38 = Pool2;
                goto LABEL_128;
              }
              v23 = Event;
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
              v62 = SePrivilegeCheck(
                      &RequiredPrivileges,
                      (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                      1);
              LODWORD(SubjectContext.ClientToken) = (__int64)SubjectContext.ClientToken & 0xFFFFFFFE | v62 & 1;
            }
            else
            {
              LODWORD(SubjectContext.ClientToken) |= 1u;
            }
            ExAcquireResourceExclusiveLite((PERESOURCE)&v23[2].Header.WaitListHead, 1u);
            v14 = PspEnumJobsAndProcessesInJobHierarchy(
                    (char *)v23,
                    0,
                    0,
                    (int)PspSetAffinityLimitCallback,
                    (__int64)&SubjectContext,
                    1);
            v135 = v14;
            if ( v14 >= 0 )
            {
              v63 = *(_QWORD *)&v23[22].Header.Lock;
              if ( v63 )
              {
                v168 = *(_OWORD *)(v63 + 8);
                v169 = *(_OWORD *)(v63 + 24);
                p_ImpersonationLevel = (SECURITY_IMPERSONATION_LEVEL *)&v168;
              }
              else
              {
                *(_QWORD *)&v23[22].Header.Lock = Pool2;
                v23[22].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)P;
                Pool2 = 0LL;
                p_ImpersonationLevel = 0LL;
              }
              v64 = *(struct _SECURITY_SUBJECT_CONTEXT **)&v23[22].Header.Lock;
              *v64 = SubjectContext;
              v64[1].ClientToken = v155;
              v156[0] = (__int64)v23;
              HIDWORD(v156[1]) = v23[10].Header.WaitListHead.Blink;
              LODWORD(v156[1]) = -17;
              v65 = v23 + 11;
              v66 = &v209;
              v67 = 2LL;
              do
              {
                *(_OWORD *)&v65->Header.Lock = *(_OWORD *)v66;
                *(_OWORD *)&v65->Header.WaitListHead.Blink = *((_OWORD *)v66 + 1);
                v65[1].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v66 + 2);
                *(_OWORD *)&v65[2].Header.Lock = *((_OWORD *)v66 + 3);
                *(_OWORD *)&v65[2].Header.WaitListHead.Blink = *((_OWORD *)v66 + 4);
                v65[3].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v66 + 5);
                *(_OWORD *)&v65[4].Header.Lock = *((_OWORD *)v66 + 6);
                v65 = (struct _KEVENT *)((char *)v65 + 128);
                v65[-1].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v66 + 7);
                v66 += 16;
                --v67;
              }
              while ( v67 );
              *(_QWORD *)&v65->Header.Lock = *v66;
              if ( v138 == 14 && (unsigned int)KeIsEmptyAffinityEx((unsigned __int16 *)&v23[11]) )
              {
                LODWORD(v23[10].Header.WaitListHead.Blink) &= ~0x10u;
                _InterlockedAnd((volatile signed __int32 *)&v23[64].Header.WaitListHead.Blink, 0xFFFFFFFD);
              }
              else
              {
                LODWORD(v23[10].Header.WaitListHead.Blink) |= 0x10u;
                _InterlockedOr((volatile signed __int32 *)&v23[64].Header.WaitListHead.Blink, 2u);
              }
              v23 = Event;
              PspEnumJobsAndProcessesInJobHierarchy(
                (char *)Event,
                (int)PspSetJobLimitsJobPreCallback,
                0,
                (int)PspSetJobLimitsProcessCallback,
                (__int64)v156,
                5);
              v14 = v135;
            }
            ExReleaseResourceLite((PERESOURCE)&v23[2].Header.WaitListHead);
            if ( p_ImpersonationLevel )
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)p_ImpersonationLevel);
            if ( !Pool2 )
              goto LABEL_491;
            ExFreePoolWithTag(Pool2, 0x614A7350u);
            v54 = (char *)P;
LABEL_231:
            PsReturnSharedPoolQuota(v54, 0x28uLL, 0LL, v53);
            goto LABEL_491;
          }
          if ( v138 == 2 )
          {
LABEL_72:
            memmove(&v197, v10, v4);
            if ( (unsigned int)v4 < 0x98 )
              memset_0((char *)&v197 + v4, 0, 152 - v4);
            JobLimitInformationValidFlags = PspGetJobLimitInformationValidFlags(v138, v4);
            v30 = v199;
            if ( (~JobLimitInformationValidFlags & (unsigned int)v199) != 0 )
              goto LABEL_75;
            memset_0(v211, 0, 0x728uLL);
            memset(&SubjectContext, 0, sizeof(SubjectContext));
            v155 = 0LL;
            v216 = v30;
            P = 0LL;
            v143 = 0LL;
            v152 = 0LL;
            v16 = v202 & (unsigned int)-((v30 & 8) != 0);
            v217 = (v30 & 8) != 0 ? v202 : 0;
            if ( (v30 & 0x20) != 0 )
            {
              if ( v204 > 6 )
                goto LABEL_462;
              if ( v204 - 3 <= 1 )
              {
                v31 = SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, v148, 2, PreviousMode) & 1;
                v15 = 4 * v31;
                if ( !v31 )
                  goto LABEL_80;
              }
              v224 = v204;
            }
            else
            {
              v224 = 0;
            }
            if ( (v30 & 0x80u) == 0 )
            {
              v220 = 5;
            }
            else
            {
              v32 = v205;
              if ( v205 >= 0xA )
                goto LABEL_462;
              if ( v205 > 5 )
              {
                v33 = SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, v148, 2, PreviousMode) & 1;
                v15 = 4 * v33;
                if ( !v33 )
                  goto LABEL_80;
                v32 = v205;
              }
              v220 = v32;
            }
            if ( (v30 & 2) != 0 )
            {
              if ( !v197 )
                goto LABEL_462;
              v212 = v197;
            }
            else
            {
              v212 = 0LL;
            }
            if ( (v30 & 4) != 0 )
            {
              if ( !v198 )
                goto LABEL_462;
              Blink = v198;
            }
            if ( (v30 & 1) == 0 )
            {
              v214 = 0LL;
              v215 = 0LL;
              goto LABEL_108;
            }
            v34 = v200;
            if ( !v200 && !v201 || v200 == -1LL && v201 == -1LL || v200 > v201 || v200 < 0x14000 )
              goto LABEL_462;
            if ( v200 <= PspMinimumWorkingSet || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
            {
              v214 = v34;
              v215 = (struct _LIST_ENTRY *)v201;
LABEL_108:
              v13 = 256LL;
              if ( (v30 & 0x100) != 0 )
              {
                v16 = v206;
                if ( v206 < 0x1000 )
                  goto LABEL_462;
                v221 = (struct _LIST_ENTRY *)(v206 >> 12);
              }
              else
              {
                v221 = 0LL;
              }
              if ( (v30 & 0x200) != 0 )
              {
                v16 = v207;
                if ( v207 < 0x1000 )
                  goto LABEL_462;
                v222 = v207 >> 12;
              }
              else
              {
                v222 = 0LL;
              }
              if ( (v30 & 0x200000) == 0 )
              {
                v223 = 0LL;
                goto LABEL_120;
              }
              v16 = v208;
              if ( v208 >= 0x1000 )
              {
                v223 = (struct _LIST_ENTRY *)(v208 >> 12);
LABEL_120:
                v218 = 2097153LL;
                memset_0(v219, 0, 0x100uLL);
                v35 = v216;
                v140 = v216;
                v23 = Event;
                v36 = 2LL;
                if ( (v216 & 0x10) == 0 )
                  goto LABEL_135;
                if ( ((__int64)Event[64].Header.WaitListHead.Blink & 2) == 0 && v203 )
                {
                  if ( !*(_QWORD *)&Event[22].Header.Lock )
                  {
                    v37 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
                    P = v37;
                    if ( !v37 )
                      goto LABEL_125;
                    v143 = PsChargeSharedPoolQuota((__int64)KeGetCurrentThread()->ApcState.Process, 0x28uLL, 0LL);
                    if ( !v143 )
                    {
                      v38 = v37;
LABEL_128:
                      v39 = 1632269136;
LABEL_129:
                      ExFreePoolWithTag(v38, v39);
                      v14 = -1073741670;
                      goto LABEL_448;
                    }
                    v23 = Event;
                    v140 = v216;
                    v14 = v135;
                  }
                  SeCaptureSubjectContextEx(
                    Thread,
                    Thread->ApcState.Process,
                    (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
                  v152 = (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel;
                  if ( PreviousMode )
                  {
                    RequiredPrivileges.PrivilegeCount = 1;
                    RequiredPrivileges.Control = 1;
                    RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
                    RequiredPrivileges.Privilege[0].Attributes = 0;
                    v40 = SePrivilegeCheck(
                            &RequiredPrivileges,
                            (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                            1);
                    LODWORD(SubjectContext.ClientToken) = (__int64)SubjectContext.ClientToken & 0xFFFFFFFE | v40 & 1;
                  }
                  else
                  {
                    LODWORD(SubjectContext.ClientToken) |= 1u;
                  }
                  v15 |= 2u;
                  v35 = v140;
LABEL_135:
                  ExAcquireResourceExclusiveLite((PERESOURCE)&v23[2].Header.WaitListHead, 1u);
                  if ( (v35 & 4) == 0 )
                  {
                    if ( (v35 & 0x40) != 0 )
                    {
                      v35 |= (__int64)v23[10].Header.WaitListHead.Blink & 4;
                      Blink = v23[9].Header.WaitListHead.Blink;
                    }
                    else
                    {
                      Blink = 0LL;
                    }
                  }
                  v41 = v35 & 0xFFFFFFBF;
                  v216 = v41;
                  if ( (v15 & 2) != 0 )
                  {
                    if ( ((__int64)v23[64].Header.WaitListHead.Blink & 2) != 0 )
                    {
LABEL_141:
                      v14 = -1073741811;
                      v135 = -1073741811;
LABEL_142:
                      v42 = (char *)v143;
LABEL_175:
                      if ( (v15 & 1) != 0 )
                      {
                        v49 = KeAbPreAcquire((__int64)&qword_140FC60B0, 0LL);
                        v50 = v49;
                        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140FC60B0, 0LL) )
                          ExfAcquirePushLockExclusiveEx(&qword_140FC60B0, (__int64)v49, (__int64)&qword_140FC60B0);
                        if ( v50 )
                          *((_BYTE *)v50 + 10) = 1;
                        _InterlockedOr((volatile signed __int32 *)&Event[64].Header.WaitListHead.Blink, 0x100u);
                        v23 = Event;
                        p_Blink = (struct _LIST_ENTRY *)&Event[1].Header.WaitListHead.Blink;
                        for ( i = Event[1].Header.WaitListHead.Blink; i != p_Blink; i = i->Flink )
                        {
                          if ( ((__int64)i[-23].Blink & 1) == 0 )
                            PspAddProcessToWorkingSetChangeList((_KPROCESS *)&i[-54].Blink);
                        }
                        v14 = v135;
                      }
                      ExReleaseResourceLite((PERESOURCE)&v23[2].Header.WaitListHead);
                      if ( (v15 & 1) != 0 )
                        PspApplyWorkingSetLimits((__int64)v23);
                      if ( v152 )
                        SeReleaseSubjectContext(v152);
                      if ( !P )
                        goto LABEL_491;
                      ExFreePoolWithTag(P, 0x614A7350u);
                      v54 = v42;
                      goto LABEL_231;
                    }
                    if ( ((__int64)v23[10].Header.WaitListHead.Blink & 0x10) != 0 )
                    {
                      KeFirstGroupAffinityEx((__int64)&v161, (unsigned __int16 *)&v23[11]);
                      PrimaryGroupThread = v161.m128i_u16[4];
                    }
                    else
                    {
                      PrimaryGroupThread = KeQueryPrimaryGroupThread((__int64)KeGetCurrentThread());
                      v161.m128i_i16[4] = PrimaryGroupThread;
                    }
                    if ( v203 != (KeActiveProcessors.Bitmap[PrimaryGroupThread] & v203) )
                    {
                      v23 = Event;
                      goto LABEL_141;
                    }
                    KeAddGroupAffinityEx((unsigned __int16 *)&v218, v161.m128i_u16[4], v203);
                    v23 = Event;
                    v14 = PspEnumJobsAndProcessesInJobHierarchy(
                            (char *)Event,
                            0,
                            0,
                            (int)PspSetAffinityLimitCallback,
                            (__int64)&SubjectContext,
                            1);
                    v135 = v14;
                    if ( v14 < 0 )
                      goto LABEL_142;
                    v44 = *(_QWORD *)&v23[22].Header.Lock;
                    v42 = (char *)v143;
                    if ( v44 )
                    {
                      v168 = *(_OWORD *)(v44 + 8);
                      v169 = *(_OWORD *)(v44 + 24);
                      v152 = (PSECURITY_SUBJECT_CONTEXT)&v168;
                    }
                    else
                    {
                      *(_QWORD *)&v23[22].Header.Lock = P;
                      v23[22].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v42;
                      P = 0LL;
                      v152 = 0LL;
                    }
                    v45 = *(struct _SECURITY_SUBJECT_CONTEXT **)&v23[22].Header.Lock;
                    *v45 = SubjectContext;
                    v45[1].ClientToken = v155;
                  }
                  else
                  {
                    v48 = (v41 & 0x4000) != 0;
                    v42 = (char *)v143;
                    if ( v48 && ((__int64)v23[64].Header.WaitListHead.Blink & 2) == 0 )
                    {
                      v14 = -1073741811;
                      v135 = -1073741811;
                      goto LABEL_175;
                    }
                  }
                  if ( ((__int64)v23[10].Header.WaitListHead.Blink & 1) != 0 && (v216 & 1) == 0 )
                  {
                    _InterlockedOr(v132, 0);
                    if ( (qword_140FC60B0 & 1) != 0 )
                      ExfAcquireReleasePushLockExclusive(&qword_140FC60B0);
                    v14 = v135;
                    v23 = Event;
                  }
                  v156[0] = (__int64)v23;
                  HIDWORD(v156[1]) = v23[10].Header.WaitListHead.Blink;
                  *(_QWORD *)&v23[10].Header.Lock = v214;
                  v23[10].Header.WaitListHead.Flink = v215;
                  HIDWORD(v23[10].Header.WaitListHead.Blink) = v217;
                  if ( (v15 & 2) != 0 )
                  {
                    v46 = v23 + 11;
                    v47 = &v218;
                    do
                    {
                      *(_OWORD *)&v46->Header.Lock = *(_OWORD *)v47;
                      *(_OWORD *)&v46->Header.WaitListHead.Blink = *((_OWORD *)v47 + 1);
                      v46[1].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v47 + 2);
                      *(_OWORD *)&v46[2].Header.Lock = *((_OWORD *)v47 + 3);
                      *(_OWORD *)&v46[2].Header.WaitListHead.Blink = *((_OWORD *)v47 + 4);
                      v46[3].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v47 + 5);
                      *(_OWORD *)&v46[4].Header.Lock = *((_OWORD *)v47 + 6);
                      v46 = (struct _KEVENT *)((char *)v46 + 128);
                      v46[-1].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v47 + 7);
                      v47 += 16;
                      --v36;
                    }
                    while ( v36 );
                    *(_QWORD *)&v46->Header.Lock = *v47;
                  }
                  BYTE5(v23[45].Header.WaitListHead.Blink) = v224;
                  v23[24].Header.SignalState = v220;
                  v23[9].Header.WaitListHead.Flink = v212;
                  v23[9].Header.WaitListHead.Blink = Blink;
                  if ( v138 == 9 )
                  {
                    PspLockJobMemoryLimitsExclusive((__int64)v23, 0LL, 0LL);
                    LODWORD(v23[10].Header.WaitListHead.Blink) = v216 | (__int64)v23[10].Header.WaitListHead.Blink & ~JobLimitInformationValidFlags;
                    v23[28].Header.WaitListHead.Blink = v221;
                    *(_QWORD *)&v23[29].Header.Lock = v222;
                    v23[29].Header.WaitListHead.Flink = v223;
                    PspUnlockJobMemoryLimitsExclusive((__int64)v23, 0LL, 0LL);
                  }
                  else
                  {
                    LODWORD(v23[10].Header.WaitListHead.Blink) = v216 | (__int64)v23[10].Header.WaitListHead.Blink & ~JobLimitInformationValidFlags;
                  }
                  LODWORD(v156[1]) = ~(LODWORD(v23[10].Header.WaitListHead.Blink) | HIDWORD(v156[1]));
                  if ( (v199 & 4) != 0 )
                  {
                    PspEnumJobsAndProcessesInJobHierarchy(
                      (char *)v23,
                      0,
                      0,
                      (int)PspSetJobTimeLimitCallback,
                      (__int64)&v23[9].Header.WaitListHead.Blink,
                      1);
                    v23[7].Header.WaitListHead.Blink = 0LL;
                    *(_QWORD *)&v23[8].Header.Lock = 0LL;
                    KeResetEvent(v23);
                  }
                  if ( ((__int64)v23[10].Header.WaitListHead.Blink & 6) != 0 )
                  {
                    _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
                    v23 = Event;
                    v14 = v135;
                  }
                  if ( (v156[1] & 1) == 0 )
                    v15 |= 1u;
                  PspEnumJobsAndProcessesInJobHierarchy(
                    (char *)v23,
                    (int)PspSetJobLimitsJobPreCallback,
                    (int)PspSetJobLimitsJobPostCallback,
                    (int)PspSetJobLimitsProcessCallback,
                    (__int64)v156,
                    5);
                  goto LABEL_175;
                }
                goto LABEL_466;
              }
              goto LABEL_462;
            }
LABEL_80:
            v14 = -1073741727;
            goto LABEL_448;
          }
          if ( v138 != 4 )
          {
            if ( v138 == 5 )
            {
              v170 = *v10;
              v171 = v10[1];
              v172.m128i_i64[0] = v10[2].m128i_i64[0];
              v14 = (v170.m128i_i32[0] & 0xFFFFFFF0) != 0 ? -1073741811 : -1073741637;
LABEL_448:
              v23 = Event;
              goto LABEL_491;
            }
            if ( v138 != 6 )
            {
              if ( v138 == 7 )
              {
                MiniCompletionPacket = 0LL;
                *(__m128i *)BugCheckParameter1a = *v10;
                if ( BugCheckParameter1a[1] )
                {
                  v14 = ObpReferenceObjectByHandleWithTag(
                          BugCheckParameter1a[1],
                          2,
                          (__int64)IoCompletionObjectType,
                          PreviousMode,
                          0x624A7350u,
                          Object,
                          0LL,
                          0LL);
                  v23 = Event;
                  if ( v14 >= 0 )
                  {
                    if ( Event[51].Header.WaitListHead.Flink
                      || (MiniCompletionPacket = IoAllocateMiniCompletionPacket(
                                                   (__int64)PspNotificationPacketCallback,
                                                   (__int64)Event)) != 0 )
                    {
                      ExAcquireResourceExclusiveLite((PERESOURCE)&v23[2].Header.WaitListHead, 1u);
                      if ( *(_QWORD *)&v23[23].Header.Lock
                        || ((__int64)v23[10].Header.WaitListHead.Blink & 0x2000) != 0
                        && ((__int64)v23[64].Header.WaitListHead.Blink & 1) != 0 )
                      {
                        ExReleaseResourceLite((PERESOURCE)&v23[2].Header.WaitListHead);
                        ObfDereferenceObjectWithTag(Object[0], 0x624A7350u);
                        v14 = -1073741811;
                      }
                      else
                      {
                        if ( !v23[51].Header.WaitListHead.Flink )
                        {
                          v23[51].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MiniCompletionPacket;
                          MiniCompletionPacket = 0LL;
                        }
                        PspLockJobMemoryLimitsExclusive((__int64)v23, 0LL, 0LL);
                        v23[23].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)BugCheckParameter1a[0];
                        *(PVOID *)&v23[23].Header.Lock = Object[0];
                        v23[23].Header.WaitListHead.Blink = 0LL;
                        PspUnlockJobMemoryLimitsExclusive((__int64)v23, 0LL, 0LL);
                        if ( (v23[46].Header.LockNV & 0x40) != 0 )
                          PspEnumJobsAndProcessesInJobHierarchy(
                            (char *)v23,
                            0,
                            0,
                            (int)PspAssociateCompletionPortCallback,
                            (__int64)v23,
                            1);
                        ExReleaseResourceLite((PERESOURCE)&v23[2].Header.WaitListHead);
                      }
                    }
                    else
                    {
                      v14 = -1073741670;
                    }
                  }
                  if ( MiniCompletionPacket )
                  {
                    *(_QWORD *)(MiniCompletionPacket + 56) = 0LL;
                    IopFreeMiniCompletionPacket(MiniCompletionPacket, v13, v25, v26);
                  }
                }
                else
                {
                  v23 = Event;
                  ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
                  PspLockJobMemoryLimitsExclusive((__int64)v23, 0LL, 0LL);
                  v24 = *(void **)&v23[23].Header.Lock;
                  *(_QWORD *)&v23[23].Header.Lock = 0LL;
                  PspUnlockJobMemoryLimitsExclusive((__int64)v23, 0LL, 0LL);
                  ExReleaseResourceLite((PERESOURCE)&v23[2].Header.WaitListHead);
                  if ( v24 )
                    ObfDereferenceObjectWithTag(v24, 0x624A7350u);
                }
                goto LABEL_491;
              }
              if ( v138 != 9 )
              {
                if ( v138 != 11 )
                {
                  if ( v138 == 12 )
                    goto LABEL_44;
LABEL_447:
                  v14 = -1073741821;
                  goto LABEL_448;
                }
                goto LABEL_192;
              }
              goto LABEL_72;
            }
            v162 = v10->m128i_i32[0];
            v27 = v162;
            v23 = Event;
            if ( v162 <= 1 )
            {
              ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
              HIDWORD(v23[22].Header.WaitListHead.Blink) = v27;
LABEL_68:
              p_WaitListHead = (struct _ERESOURCE *)&v23[2].Header.WaitListHead;
LABEL_69:
              ExReleaseResourceLite(p_WaitListHead);
              goto LABEL_491;
            }
LABEL_466:
            v14 = -1073741811;
            goto LABEL_491;
          }
          v163 = v10->m128i_i32[0];
          v23 = Event;
          Silo = PspSetUILimitJobObject((__int64)Event, (__int64)Thread, v163, 0);
          goto LABEL_490;
        }
        if ( v138 != 15 )
        {
          if ( v138 != 16 )
          {
            if ( v138 == 18 )
            {
              v189 = *v10;
              if ( !v189.m128i_i32[0] || (v189.m128i_i32[0] & 0xFFFFFFF0) != 0 )
                goto LABEL_75;
              if ( (v189.m128i_i8[0] & 1) != 0 || (v189.m128i_i8[0] & 8) == 0 )
              {
                v23 = Event;
                v14 = PspFreezeJobTree((__int64)Event, (__int64)&v189);
                if ( v14 >= 0 )
                  v10->m128i_i32[0] = v189.m128i_i32[0];
                goto LABEL_491;
              }
              goto LABEL_462;
            }
            if ( v138 != 21 )
            {
              switch ( v138 )
              {
                case 22:
                  LOBYTE(v136) = v10->m128i_i8[0];
                  v23 = Event;
                  ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
                  if ( ((__int64)v23[64].Header.WaitListHead.Blink & 0x20) == 0 )
                    goto LABEL_240;
                  v71 = v23[51].Header.WaitListHead.Blink;
                  v72 = (unsigned int)v71[2].Blink;
                  if ( (v72 & 0x40) != 0 )
                    goto LABEL_240;
                  if ( (v72 & 0x21) != 0 )
                  {
                    v14 = -1073741637;
                    goto LABEL_68;
                  }
                  if ( ((v72 >> 3) & 1) == ((_BYTE)v136 != 0) )
                    goto LABEL_240;
                  v73 = ((_BYTE)v136 != 0 ? 8 : 0) | v72 & 0xFFFFFFF7;
                  LODWORD(v71[2].Blink) = v73;
                  LOBYTE(v73) = v136;
                  KeSetSchedulingGroupRankBias((__int64)&v23[51].Header.WaitListHead.Blink[8], v73);
                  PspEnumJobsAndProcessesInJobHierarchy(
                    (char *)v23,
                    0,
                    0,
                    (int)PspSetProcessCacheIsolationCallback,
                    (__int64)&v136,
                    1);
                  break;
                case 23:
                  if ( v10->m128i_i8[0] != 1 )
                  {
                    v14 = -1073741811;
                    v135 = -1073741811;
                    v23 = Event;
                    goto LABEL_491;
                  }
                  v23 = Event;
                  PspEnumJobsAndProcessesInJobHierarchy(
                    (char *)Event,
                    0,
                    (int)PspEnableTimerVirtualization,
                    (int)PspEnableProcessTimerVirtualization,
                    0LL,
                    0);
                  goto LABEL_317;
                case 24:
                  v68 = v10->m128i_i64[0];
                  v175 = v10->m128i_i64[0];
                  v23 = Event;
                  ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
                  if ( ((__int64)v23[64].Header.WaitListHead.Blink & 0x20) == 0 )
                  {
LABEL_240:
                    v14 = -1073741811;
                    goto LABEL_68;
                  }
                  v69 = v23[51].Header.WaitListHead.Blink;
                  v70 = (int)v69[2].Blink;
                  if ( (v70 & 0x10) == 0 )
                  {
                    LODWORD(v69[2].Blink) = v70 | 0x10;
                    KeInitializeDpc((PRKDPC)&v69[3], (PKDEFERRED_ROUTINE)PspJobCycleTimeNotificationDpcRoutine, v23);
                  }
                  KeSetSchedulingGroupCycleNotification((__int64)&v69[8], (__int64)&v69[3], v68);
                  break;
                default:
                  goto LABEL_447;
              }
              v14 = 0;
              goto LABEL_68;
            }
            v146 = v10->m128i_i8[0];
            v23 = Event;
            v74 = PspSetBackgroundJobTree((char *)Event, v146);
LABEL_255:
            v14 = v74;
            if ( v74 < 0 )
              goto LABEL_491;
            goto LABEL_317;
          }
          v164 = v10->m128i_i32[0];
          v75 = v164;
          v23 = Event;
          if ( (v164 & 0xFFFFC001) != 0 )
            goto LABEL_466;
          ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
          PspLockJobMemoryLimitsExclusive((__int64)v23, 0LL, 0LL);
          v23[46].Header.LockNV = v75;
          PspUnlockJobMemoryLimitsExclusive((__int64)v23, 0LL, 0LL);
          goto LABEL_316;
        }
        memmove(&v157, v10, v4);
        v76 = v157;
        if ( (v157 & 0xFFFFFFC0) != 0 )
          goto LABEL_462;
        v77 = 0;
        v141.Value = HIDWORD(v157);
        if ( (v157 & 1) == 0 )
        {
LABEL_280:
          v23 = Event;
          PspLockJobChain((__int64)Event, (__int64)Thread, 0);
          v79 = (int)v23[64].Header.WaitListHead.Blink;
          if ( (v76 & 1) != 0 )
          {
            if ( (v79 & 0x20) == 0 )
            {
              RateControl = PspAllocateRateControl(2LL);
              v81 = RateControl;
              if ( !RateControl )
              {
                v14 = -1073741670;
                goto LABEL_314;
              }
              v23[51].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)RateControl;
LABEL_288:
              LODWORD(v23[51].Header.WaitListHead.Blink[2].Blink) = 0;
              v82 = WORD2(v157);
              HIDWORD(v23[51].Header.WaitListHead.Blink[2].Blink) = HIDWORD(v157);
              if ( (v76 & 1) != 0 )
              {
                if ( (v76 & 4) != 0 )
                {
                  LODWORD(v23[51].Header.WaitListHead.Blink[2].Blink) |= 1u;
                  v141.MaxRate = v82;
                }
                if ( (v76 & 2) != 0 )
                {
                  LODWORD(v23[51].Header.WaitListHead.Blink[2].Blink) |= 4u;
                  v141.AllFlags = v77 & 0xFFFFFFFE;
                }
                else
                {
                  v141.AllFlags = v77 | 1;
                  if ( (v76 & 0x14) == 0 )
                    v141.MaxRate = 10000;
                }
                if ( (v76 & 8) != 0 )
                  LODWORD(v23[51].Header.WaitListHead.Blink[2].Blink) |= 2u;
                if ( (v76 & 0x10) != 0 )
                  LODWORD(v23[51].Header.WaitListHead.Blink[2].Blink) |= 0x20u;
                if ( (v76 & 0x20) != 0 )
                  LODWORD(v23[51].Header.WaitListHead.Blink[2].Blink) |= 0x80u;
                v83 = (_KSCHEDULING_GROUP_POLICY *)v23[51].Header.WaitListHead.Blink;
                v84 = v83 + 16;
                if ( v83 == (_KSCHEDULING_GROUP_POLICY *)v81 )
                {
                  *v84 = v141;
                  v14 = PspAddSchedulingGroupToJobChain((__int64)v23[54].Header.WaitListHead.Flink, (__int64)v23);
                  v135 = v14;
                  if ( v14 < 0 )
                  {
                    v85 = (char **)v23[51].Header.WaitListHead.Blink;
                    if ( v85 )
                    {
                      PspFreeRateControl(v85, 2u);
                      v23[51].Header.WaitListHead.Blink = 0LL;
                    }
                    goto LABEL_314;
                  }
                  _InterlockedOr((volatile signed __int32 *)&v23[64].Header.WaitListHead.Blink, 0x20u);
                  v23 = Event;
                }
                else
                {
                  BugCheckParameter1a[0] = (ULONG_PTR)&v83[16];
                  if ( (v83[5].Value & 4) != 0 )
                    KeSetSchedulingGroupWeights(1u, BugCheckParameter1a, (__int64)&v141);
                  else
                    KeSetSchedulingGroupCpuRates((__int64)v84, (struct _KSCHEDULING_GROUP **)BugCheckParameter1a, &v141);
                }
                v158 = v23[51].Header.WaitListHead.Blink[2].Blink;
              }
              else
              {
                v141.AllFlags = v77 | 3;
                v141.Value = 655370000;
                LODWORD(v23[51].Header.WaitListHead.Blink[2].Blink) |= 0x40u;
                Value = v141.Value;
                HIDWORD(v23[51].Header.WaitListHead.Blink[2].Blink) = v141.Value;
                BugCheckParameter1a[0] = (ULONG_PTR)&v23[51].Header.WaitListHead.Blink[8];
                HIBYTE(v136) = (*(_DWORD *)(BugCheckParameter1a[0] + 4) & 4) != 0;
                v23[52].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)((char *)v23[52].Header.WaitListHead.Flink
                                                                         + KeQuerySchedulingGroupReadyTime(BugCheckParameter1a[0]));
                KeSetSchedulingGroupCpuRates(v87, (struct _KSCHEDULING_GROUP **)BugCheckParameter1a, &v141);
                HIDWORD(v158) = Value;
                if ( HIBYTE(v136) )
                {
                  HIBYTE(v136) = 0;
                  PspEnumJobsAndProcessesInJobHierarchy(
                    (char *)v23,
                    0,
                    0,
                    (int)PspSetProcessCacheIsolationCallback,
                    (__int64)&v136 + 1,
                    1);
                }
              }
              v14 = 0;
              if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
                EtwTraceJobSetQuery((__int64)v23, 15, (__int64)&v158, 0LL, 0, 0x725u);
LABEL_314:
              PspUnlockJobChain((__int64)v23, (__int64)Thread, 0);
              goto LABEL_491;
            }
          }
          else if ( (v79 & 0x20) == 0 )
          {
            v14 = -1073741811;
            goto LABEL_314;
          }
          v81 = 0LL;
          goto LABEL_288;
        }
        v16 = v157 & 0x10;
        if ( (v157 & 2) != 0 )
        {
          if ( (v157 & 0x10) != 0 )
            goto LABEL_462;
          v78 = (unsigned int)(HIDWORD(v157) - 1) <= 8;
        }
        else
        {
          if ( (v157 & 0x10) == 0 )
          {
            if ( (unsigned int)(HIDWORD(v157) - 1) > 0x270F )
              goto LABEL_462;
            goto LABEL_278;
          }
          if ( (v157 & 4) != 0 )
            goto LABEL_462;
          if ( !WORD2(v157) )
            goto LABEL_462;
          v16 = HIWORD(HIDWORD(v157));
          if ( WORD2(v157) > HIWORD(v157) )
            goto LABEL_462;
          v78 = HIWORD(v157) <= 0x2710u;
        }
        if ( !v78 )
          goto LABEL_462;
LABEL_278:
        if ( (v157 & 0x20) != 0 )
          v77 = 8;
        goto LABEL_280;
      }
      v23 = Event;
      ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
      KeResetEvent(v23);
LABEL_316:
      ExReleaseResourceLite((PERESOURCE)&v23[2].Header.WaitListHead);
      goto LABEL_317;
    }
    if ( v138 > 42 )
    {
      if ( v138 == 43 )
      {
        v177 = v10->m128i_i64[0];
        v23 = Event;
        Silo = PspSetJobMemoryPartition((__int64)Event, PreviousMode, v177);
        goto LABEL_490;
      }
      if ( v138 == 44 )
      {
        v23 = Event;
        ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
        if ( SLODWORD(v23[64].Header.WaitListHead.Blink) < 0 )
        {
          v14 = -1073741791;
          goto LABEL_68;
        }
        *(__m128i *)&v23[62].Header.Lock = *v10;
        _InterlockedOr((volatile signed __int32 *)&v23[64].Header.WaitListHead.Blink, 0x80000000);
        v23 = Event;
        goto LABEL_316;
      }
      if ( v138 != 45 )
      {
        switch ( v138 )
        {
          case '.':
            v159 = v10->m128i_i64[0];
            v23 = Event;
            v74 = PspSetEnergyTrackingStateJobTree((char *)Event, &v159);
            goto LABEL_255;
          case '/':
            v147 = v10->m128i_i8[0];
            if ( v147 != 1 )
              goto LABEL_462;
            v125 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
            v23 = Event;
            if ( !v125 )
            {
              v14 = -1073741727;
              goto LABEL_491;
            }
            if ( ((__int64)Event[64].Header.WaitListHead.Blink & 0x40000000) == 0 )
              goto LABEL_466;
            v16 = (unsigned int)-(PspSetJobSiloThreadImpersonationPolicy((__int64)Event, 2) == 0);
            v14 = v16 & 0xC0000022;
LABEL_491:
            v131 = Thread;
            v8 = Thread->SpecialApcDisable++ == -1;
            if ( v8 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v131->ApcState.ApcListHead[0].Flink != &v131->152 )
              KiCheckForKernelApcDelivery(v16, v13);
            if ( v14 )
            {
              if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
                EtwTraceJobSetQuery((__int64)v23, v138, 0LL, 0LL, v14, 0x727u);
            }
            ObfDereferenceObjectWithTag(v23, 0x79517350u);
            return (unsigned int)v14;
          case '0':
            Object[0] = (PVOID)v10->m128i_i64[0];
            if ( ((__int64)Object[0] & 0xFFFFFFFE) != 0 )
              goto LABEL_75;
            v13 = (unsigned __int64)Object[0] >> 32;
            if ( HIDWORD(Object[0]) < 5 )
            {
              v23 = Event;
              if ( ((__int64)Object[0] & 1) == 0 )
                LODWORD(v13) = 5;
              PspSetIoPriorityLimitJobTree((char *)Event, v13);
              goto LABEL_317;
            }
            goto LABEL_462;
        }
        if ( v138 != 49 )
          goto LABEL_447;
        Object[0] = (PVOID)v10->m128i_i64[0];
        if ( ((__int64)Object[0] & 0xFFFFFFFE) != 0 )
          goto LABEL_75;
        v13 = (unsigned __int64)Object[0] >> 32;
        if ( HIDWORD(Object[0]) >= 8 )
        {
LABEL_462:
          v14 = -1073741811;
          goto LABEL_448;
        }
        v23 = Event;
        if ( ((__int64)Object[0] & 1) != 0 )
        {
          if ( !HIDWORD(Object[0]) )
            goto LABEL_466;
        }
        else
        {
          LODWORD(v13) = 8;
        }
        PspSetPagePriorityLimitJobTree((char *)Event, v13);
LABEL_317:
        v14 = 0;
        goto LABEL_491;
      }
      v23 = Event;
      if ( ((__int64)Event[64].Header.WaitListHead.Blink & 0x40000000) == 0 )
        goto LABEL_343;
      v160 = 0LL;
      *(__m128i *)Object = *v10;
      v126 = _mm_srli_si128(*(__m128i *)Object, 8).m128i_u64[0];
      v127 = (PVOID)v126;
      if ( !v126
        || (v128 = (unsigned __int16)Object[0], v16 = 518LL, (unsigned __int16)(LOWORD(Object[0]) - 1) > 0x206u)
        || ((__int64)Object[0] & 1) != 0 )
      {
        v14 = -1073741811;
        v135 = -1073741811;
        goto LABEL_491;
      }
      if ( PreviousMode == 1 )
      {
        if ( (v126 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v126 + LOWORD(Object[0]) > 0x7FFFFFFF0000LL || v126 + LOWORD(Object[0]) < v126 )
        {
          v23 = Event;
          v127 = Object[1];
          v128 = (unsigned __int16)Object[0];
        }
      }
      v129 = (void *)ExAllocatePool2(0x100uLL);
      v130 = v129;
      v160 = v129;
      if ( !v129 )
      {
        v14 = -1073741670;
        v135 = -1073741670;
        goto LABEL_491;
      }
      memmove(v129, v127, v128);
      if ( wcsnlen((const wchar_t *)v130, (unsigned __int64)v128 >> 1) == (unsigned __int64)v128 >> 1 )
      {
        Object[1] = v130;
        v14 = PspAssignSiloSystemRootPath((__int64)v23, (unsigned __int16 *)Object);
      }
      else
      {
        v14 = -1073741811;
      }
      if ( !v130 )
        goto LABEL_491;
      v120 = 1918071632;
      v121 = v130;
LABEL_431:
      ExFreePoolWithTag(v121, v120);
      goto LABEL_491;
    }
    if ( v138 == 42 )
    {
      v122 = 0;
      v170 = *v10;
      v171 = v10[1];
      v172 = v10[2];
      v173 = v10[3];
      v174 = v10[4].m128i_i64[0];
      v23 = Event;
      if ( (v170.m128i_i32[0] & 0xFFFFFFFC) != 0 || (v170.m128i_i8[0] & 3) == 0 )
      {
        v14 = -1073741811;
      }
      else
      {
        v122 = 8;
        v123 = Thread;
        PspLockRootJobExclusive((__int64)Event, (__int64)Thread, BugCheckParameter1a);
        PspLockJobConditionally((__int64)v23, (__int64)BugCheckParameter1a);
        LOBYTE(v124) = v170.m128i_i8[0] & 1;
        v14 = PspSetJobIoAttribution(v23, v124, 1, 1u);
        if ( v14 >= 0 )
        {
          PspUnlockJobConditionally((__int64)v23, (__int64)BugCheckParameter1a);
          PspUnlockJob(BugCheckParameter1a[0], (__int64)v123);
          v122 = 0;
        }
      }
      if ( v122 == 8 )
      {
        PspUnlockJobConditionally((__int64)v23, (__int64)BugCheckParameter1a);
        PspUnlockJob(BugCheckParameter1a[0], (__int64)Thread);
      }
      goto LABEL_491;
    }
    if ( v138 == 27 )
    {
      v23 = Event;
      PspLockJobMemoryLimitsExclusive((__int64)Event, 0LL, 0LL);
      *(_QWORD *)&v23[30].Header.Lock = 0LL;
      v23[29].Header.WaitListHead.Blink = 0LL;
      PspUnlockJobMemoryLimitsExclusive((__int64)v23, 0LL, 0LL);
      v14 = 0;
      goto LABEL_491;
    }
    if ( v138 != 31 )
    {
      switch ( v138 )
      {
        case ' ':
          v23 = Event;
          Silo = PspSetNetRateControl(v10, (unsigned int)v4, (__int64)Event);
          goto LABEL_490;
        case '!':
LABEL_44:
          if ( (_DWORD)v4 == 48 )
          {
            memmove(&v194, v10, v4);
            v18 = DWORD2(v196);
            v20 = *((_QWORD *)&v194 + 1);
            v21 = v194;
            v186 = v194;
            v13 = *((_QWORD *)&v195 + 1);
            v19 = v195;
            *(_OWORD *)v187 = v195;
            *(_DWORD *)&v187[16] = v196;
            *(_QWORD *)&v187[20] = *(_QWORD *)((char *)&v196 + 4);
            v17 = 459268;
            JobLimitInformationValidFlags = 459268;
          }
          else
          {
            if ( (_DWORD)v4 == 56 )
            {
              memmove(&v190, v10, v4);
              v18 = v193;
              *(_DWORD *)&v187[24] = v193;
              v20 = *((_QWORD *)&v190 + 1);
              v21 = v190;
              v186 = v190;
              v16 = *((_QWORD *)&v191 + 1);
              v93 = v191;
              v188 = v93 >> 64;
              v19 = v93;
              *(_QWORD *)v187 = v191;
              v13 = v192;
              *(_OWORD *)&v187[8] = v192;
              v17 = 2589188;
              JobLimitInformationValidFlags = 2589188;
              goto LABEL_351;
            }
            memmove(&v186, v10, v4);
            v17 = 2064900;
            JobLimitInformationValidFlags = 2064900;
            v18 = *(_DWORD *)&v187[24];
            v13 = *(_QWORD *)&v187[8];
            v19 = *(_QWORD *)v187;
            v20 = *((_QWORD *)&v186 + 1);
            v21 = v186;
          }
          v16 = v188;
LABEL_351:
          if ( (~v17 & v18) == 0 )
          {
            if ( (v18 & 0x8000) != 0 )
            {
              if ( v16 < 0x1000 )
                goto LABEL_75;
            }
            else
            {
              v16 = 0LL;
              v188 = 0LL;
            }
            if ( (v18 & 0x200) != 0 )
            {
              if ( v13 < 0x1000 || v13 < v16 )
                goto LABEL_75;
            }
            else
            {
              *(_QWORD *)&v187[8] = 0LL;
            }
            if ( (v18 & 4) != 0 )
            {
              if ( !v19 )
                goto LABEL_75;
            }
            else
            {
              *(_QWORD *)v187 = 0LL;
            }
            if ( (v18 & 0x10000) != 0 )
            {
              if ( !v21 )
                goto LABEL_75;
            }
            else
            {
              *(_QWORD *)&v186 = 0LL;
            }
            if ( (v18 & 0x20000) != 0 )
            {
              if ( !v20 )
                goto LABEL_75;
            }
            else
            {
              *((_QWORD *)&v186 + 1) = 0LL;
            }
            for ( j = 0; j < 3; j = v13 + 1 )
            {
              PspNotificationLimitRateControlToleranceField((__int64)&v186, j);
              PspNotificationLimitRateControlToleranceIntervalField((__int64)&v186, v95);
              v97 = PspRateControlLimitFlag(v96);
              if ( (v97 & v100) != 0 )
              {
                v16 = (unsigned int)*v98;
                if ( !(_DWORD)v16 || (int)v16 > 3 || !*v99 || *v99 > 3 )
                  goto LABEL_462;
              }
              else
              {
                *v98 = 0;
                *v99 = 0;
              }
            }
            v23 = Event;
            v101 = &Event[50].Header.WaitListHead.Blink;
            if ( Event[50].Header.WaitListHead.Blink )
            {
              v102 = 0LL;
              v103 = 0LL;
              goto LABEL_388;
            }
            v102 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
            if ( v102 )
            {
              v103 = (char *)PsChargeSharedPoolQuota((__int64)KeGetCurrentThread()->ApcState.Process, 0x88uLL, 0LL);
              v38 = v102;
              if ( !v103 )
              {
                v39 = 1649046352;
                goto LABEL_129;
              }
              memset_0(v102, 0, 0x88uLL);
              v23 = Event;
LABEL_388:
              ExAcquireResourceExclusiveLite((PERESOURCE)&v23[2].Header.WaitListHead, 1u);
              if ( *v101 )
              {
                if ( v102 )
                {
                  ExFreePoolWithTag(v102, 0x624A7350u);
                  PsReturnSharedPoolQuota(v103, 0x88uLL, 0LL, v104);
                }
              }
              else
              {
                *v101 = v102;
                *(_QWORD *)&v23[51].Header.Lock = v103;
              }
              v105 = v23[50].Header.WaitListHead.Blink;
              Flink = (int)v105->Flink;
              *(_OWORD *)&v105->Blink = v186;
              v105[1].Blink = *(struct _LIST_ENTRY **)v187;
              for ( k = 0; k < 3; k = v113 + 1 )
              {
                v108 = (_DWORD *)PspNotificationLimitRateControlToleranceField((__int64)&v186, k);
                *(_DWORD *)(v109 - 12) = *v108;
                v111 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField((__int64)&v186, v110);
                *v112 = *v111;
              }
              PspLockJobMemoryLimitsExclusive((__int64)v23, 0LL, 0LL);
              v105[2].Flink = (struct _LIST_ENTRY *)(v188 >> 12);
              v105[2].Blink = (struct _LIST_ENTRY *)(*(_QWORD *)&v187[8] >> 12);
              LODWORD(v23[50].Header.WaitListHead.Blink->Flink) = *(_DWORD *)&v187[24];
              PspUnlockJobMemoryLimitsExclusive((__int64)v23, 0LL, 0LL);
              if ( ((__int64)v23[50].Header.WaitListHead.Blink->Flink & 0xFFFF7DFF) != 0 )
              {
                _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
                v23 = Event;
              }
              if ( Flink )
              {
                v114 = v23[50].Header.WaitListHead.Blink;
                if ( LODWORD(v114->Flink) )
                {
LABEL_401:
                  if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
                    EtwTraceJobSetQuery((__int64)v23, v138, (__int64)&v186, 0LL, 0, 0x725u);
                  ExReleaseResourceLite((PERESOURCE)&v23[2].Header.WaitListHead);
                  PspLockJobMemoryLimitsShared((__int64)v23, 0LL);
                  v115 = v23[65].Header.WaitListHead.Flink;
                  v23 = Event;
                  JobMemoryUsageNotificationViolations = PspGetJobMemoryUsageNotificationViolations(
                                                           (__int64)Event,
                                                           (unsigned __int64)Event[50].Header.WaitListHead.Flink,
                                                           (unsigned __int64)Event[50].Header.WaitListHead.Flink
                                                         + (unsigned __int64)v115,
                                                           33280);
                  PspUnlockJobMemoryLimitsShared((__int64)v23, 0LL);
                  if ( JobMemoryUsageNotificationViolations )
                  {
                    PspScheduleEnforcementWorker((__int64)v23[54].Header.WaitListHead.Blink);
                    v23 = Event;
                  }
                  goto LABEL_317;
                }
              }
              else
              {
                v114 = v23[50].Header.WaitListHead.Blink;
                if ( !LODWORD(v114->Flink) )
                  goto LABEL_401;
              }
              PspEnumJobsAndProcessesInJobHierarchy(
                (char *)v23,
                (int)PspSetJobNotificationCountCallback,
                0,
                0,
                (__int64)v114,
                5);
              goto LABEL_401;
            }
LABEL_125:
            v14 = -1073741670;
            goto LABEL_491;
          }
LABEL_75:
          v14 = -1073741811;
          goto LABEL_448;
        case '#':
          v23 = Event;
          Silo = PspCreateSilo((__int64)Event);
          goto LABEL_490;
        case '%':
          v92 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
          v23 = Event;
          if ( v92 )
          {
            if ( ((__int64)Event[64].Header.WaitListHead.Blink & 0x40000000) != 0 )
            {
              if ( !PspSetJobSiloThreadImpersonationPolicy((__int64)Event, 4) )
                goto LABEL_345;
              v165 = v10->m128i_i32[0];
              Silo = ObCreateSiloRootDirectory((__int64)v23, v165);
              goto LABEL_490;
            }
LABEL_343:
            v14 = -1073740535;
            goto LABEL_491;
          }
          break;
        case '(':
          v90 = PreviousMode;
          v91 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
          v23 = Event;
          if ( v91 )
          {
            if ( ((__int64)Event[64].Header.WaitListHead.Blink & 0x40000000) != 0 )
            {
              if ( !PspSetJobSiloThreadImpersonationPolicy((__int64)Event, 4) )
                goto LABEL_345;
              v176 = v10->m128i_i64[0];
              v166 = v10->m128i_i32[2];
              LOBYTE(v13) = v90;
              Silo = PspConvertSiloToServerSilo((__int64)v23, v13, v176, v166);
LABEL_490:
              v14 = Silo;
              goto LABEL_491;
            }
            goto LABEL_343;
          }
          break;
        case ')':
          v167 = v10->m128i_i32[0];
          v23 = Event;
          if ( PspJobIsAppSilo((__int64)Event) && v88 == 2 )
          {
            v89 = (struct _ERESOURCE *)&v23[2].Header.WaitListHead;
            ExAcquireResourceExclusiveLite((PERESOURCE)&v23[2].Header.WaitListHead, 1u);
            if ( LODWORD(v23[60].Header.WaitListHead.Blink) )
            {
              v14 = -1073740529;
            }
            else
            {
              v48 = _interlockedbittestandset((volatile signed __int32 *)&v23[64].Header.WaitListHead.Blink, 0x1Du);
              v23 = Event;
              if ( v48 )
              {
                v14 = 255;
              }
              else
              {
                PspHardDereferenceSiloWorker((__int64)Event);
                v14 = 0;
              }
            }
            p_WaitListHead = v89;
            goto LABEL_69;
          }
LABEL_345:
          v14 = -1073741811;
          goto LABEL_491;
        default:
          goto LABEL_447;
      }
      v14 = -1073741727;
      goto LABEL_491;
    }
    v117 = 0LL;
    Object[1] = 0LL;
    memmove(v178, v10, v4);
    v13 = (unsigned __int64)v180;
    if ( v180 )
    {
      v16 = v182;
      if ( !v182 )
        goto LABEL_419;
      if ( ((unsigned __int8)v180 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)v180 + v182 > 0x7FFFFFFF0000LL || (char *)v180 + v182 < v180 )
      {
        v16 = v182;
        v117 = Object[1];
      }
      if ( !(_WORD)v16 || (v16 & 1) != 0 )
      {
LABEL_419:
        v14 = -1073741811;
        v135 = -1073741811;
        v23 = Event;
        goto LABEL_429;
      }
      v118 = 32LL;
      if ( PreviousMode == 1 )
        v118 = 257LL;
      v119 = (_WORD *)ExAllocatePool2(v118);
      v117 = v119;
      Object[1] = v119;
      if ( !v119 )
      {
        v14 = -1073741801;
        v135 = -1073741801;
        v23 = Event;
        goto LABEL_429;
      }
      memmove(v119, v180, v182);
      v117[(unsigned __int64)v182 >> 1] = 0;
      v180 = v117;
    }
    if ( (v181 & 0xFFFFFFF0) != 0 )
    {
      v14 = -1073741811;
    }
    else
    {
      if ( !v183 && !v179 && !v184 || PspIsContextAdmin() )
      {
        v23 = Event;
        v14 = PspSetJobIoRateControl((__int64)Event, (__int64)v178);
        goto LABEL_429;
      }
      v14 = -1073741790;
    }
    v23 = Event;
LABEL_429:
    if ( !v117 )
      goto LABEL_491;
    v120 = 0;
    v121 = v117;
    goto LABEL_431;
  }
  return result;
}
