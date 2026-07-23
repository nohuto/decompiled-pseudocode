/*
 * XREFs of PspAllocateProcess @ 0x1409FACD0
 * Callers:
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1409F98C4 (PspCreateProcess.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeSelectNodeForAffinity @ 0x14032B690 (KeSelectNodeForAffinity.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     KeQuerySystemTimePrecise @ 0x14036D140 (KeQuerySystemTimePrecise.c)
 *     KeQueryAffinityProcess @ 0x14039FD80 (KeQueryAffinityProcess.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     PspDetachSession @ 0x1403C252C (PspDetachSession.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     PoEnergyEstimationEnabled @ 0x140440E80 (PoEnergyEstimationEnabled.c)
 *     PspLockProcessExclusive @ 0x14044FF38 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     KeQuerySystemTimeUnsafe @ 0x140473F10 (KeQuerySystemTimeUnsafe.c)
 *     MmGetDefaultPagePriority @ 0x140479730 (MmGetDefaultPagePriority.c)
 *     KeQueryMaximumGroupCount @ 0x14047B1D0 (KeQueryMaximumGroupCount.c)
 *     KeQueryActiveGroupCount @ 0x14047C720 (KeQueryActiveGroupCount.c)
 *     KeSelectGroupFromNode @ 0x140480DC0 (KeSelectGroupFromNode.c)
 *     PspWow64PickBestNtdll @ 0x140490CF8 (PspWow64PickBestNtdll.c)
 *     KeIsUserCetAllowed @ 0x140491FC4 (KeIsUserCetAllowed.c)
 *     KeIsCoreIsolationMitigationPolicyEnforceable @ 0x140497598 (KeIsCoreIsolationMitigationPolicyEnforceable.c)
 *     KeCopyXfdMaskToPeb @ 0x1404A2E20 (KeCopyXfdMaskToPeb.c)
 *     KeSizeOfKProcessExtension @ 0x1404A7D08 (KeSizeOfKProcessExtension.c)
 *     KeSecureProcess @ 0x1405B5A1C (KeSecureProcess.c)
 *     KeSetCpuSetsProcess @ 0x1405BD334 (KeSetCpuSetsProcess.c)
 *     KeSetExpectedConcurrencyCountProcess @ 0x1405BDC84 (KeSetExpectedConcurrencyCountProcess.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E2C90 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_LargeAddressAwareShim__private_IsEnabledDeviceUsageNoInline @ 0x1405E2CE4 (Feature_Servicing_LargeAddressAwareShim__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PspApplyIFEOPerfOptions @ 0x140776AA8 (PspApplyIFEOPerfOptions.c)
 *     PspReadIFEOPerfOptions @ 0x14077700C (PspReadIFEOPerfOptions.c)
 *     MmGetSectionStrongImageReference @ 0x1407FBB9C (MmGetSectionStrongImageReference.c)
 *     ExCreateHandleEx @ 0x1408490F0 (ExCreateHandleEx.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PspMapSiloSharedDataView @ 0x1408DD840 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1408DDA88 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x1408DDBA4 (MmCreatePeb.c)
 *     PspSetupUserProcessAddressSpace @ 0x1408DF5FC (PspSetupUserProcessAddressSpace.c)
 *     PspUpdatePebForAffinityChange @ 0x1408DF878 (PspUpdatePebForAffinityChange.c)
 *     PspPrepareSystemDllInitBlock @ 0x1408DFC08 (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x1408DFF44 (PsWow64GetProcessNtdllType.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     PspSetProcessPriorityClass @ 0x1408EB3D4 (PspSetProcessPriorityClass.c)
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x14091A9E8 (MmInitializeProcessAddressSpace.c)
 *     ObInitProcess @ 0x14094D010 (ObInitProcess.c)
 *     RtlAcquirePrivilege @ 0x1409A82D4 (RtlAcquirePrivilege.c)
 *     PsQueryProcessAttributes @ 0x1409C65D0 (PsQueryProcessAttributes.c)
 *     ObRetagReferences @ 0x1409C6A70 (ObRetagReferences.c)
 *     MmSecureVirtualMemory @ 0x1409E5050 (MmSecureVirtualMemory.c)
 *     MmGetSectionInformation @ 0x1409E9C60 (MmGetSectionInformation.c)
 *     SeQuerySessionIdToken @ 0x1409F4CB0 (SeQuerySessionIdToken.c)
 *     PspInheritMitigationAuditOptions @ 0x1409FFBD4 (PspInheritMitigationAuditOptions.c)
 *     PspInheritMitigationOptions @ 0x1409FFEB4 (PspInheritMitigationOptions.c)
 *     PspSelectMachineForProcess @ 0x140A0BB90 (PspSelectMachineForProcess.c)
 *     PspReadIFEONodeOptions @ 0x140A17168 (PspReadIFEONodeOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x140A17214 (PspReadIFEOMitigationAuditOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x140A17298 (PspReadIFEOMitigationOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x140A173C0 (RtlQueryImageFileKeyOption.c)
 *     SeIsTokenAssignableToProcess @ 0x140A255F4 (SeIsTokenAssignableToProcess.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x140A25BD8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     PspComputeQuantumAndPriority @ 0x140A262E0 (PspComputeQuantumAndPriority.c)
 *     PspUpdateCreateInfo @ 0x140A27330 (PspUpdateCreateInfo.c)
 *     PspInitializeFullProcessImageName @ 0x140A286FC (PspInitializeFullProcessImageName.c)
 *     PspAssignProcessQuotaBlock @ 0x140A2BBE8 (PspAssignProcessQuotaBlock.c)
 *     SmProcessCreateNotification @ 0x140A38394 (SmProcessCreateNotification.c)
 *     PspSetupReservedUserMappings @ 0x140A3D458 (PspSetupReservedUserMappings.c)
 *     PspSetProcessAffinitySafe @ 0x140A42004 (PspSetProcessAffinitySafe.c)
 *     KeInitializeProcess @ 0x140A45798 (KeInitializeProcess.c)
 *     RtlReleasePrivilege @ 0x140A4850C (RtlReleasePrivilege.c)
 *     PspApplyMitigationOptions @ 0x140A4B32C (PspApplyMitigationOptions.c)
 *     PoEnergyContextInitialize @ 0x140A4EF04 (PoEnergyContextInitialize.c)
 *     PsGetSessionSchedulingGroupByProcess @ 0x140A4F1F0 (PsGetSessionSchedulingGroupByProcess.c)
 *     PspInheritQuota @ 0x140A4F96C (PspInheritQuota.c)
 *     PspHardenMitigationOptions @ 0x140A599A0 (PspHardenMitigationOptions.c)
 *     PspSelectNodeForProcess @ 0x140A6DD70 (PspSelectNodeForProcess.c)
 *     PspIsSessionLeaderProcess @ 0x140A7194C (PspIsSessionLeaderProcess.c)
 *     KeInitializeProcessUserCetLogging @ 0x140A80914 (KeInitializeProcessUserCetLogging.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140AA3638 (MmInitializeHandBuiltProcess2.c)
 *     PspInitializeProcessSecurity @ 0x140ACAA98 (PspInitializeProcessSecurity.c)
 *     PspAttachSession @ 0x140AD0928 (PspAttachSession.c)
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140AE7F8C (MmInitializeHandBuiltProcess.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspAllocateProcess(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        void *a7,
        void *a8,
        int a9,
        char a10,
        __int64 a11,
        int a12,
        PVOID a13,
        __int64 a14,
        _QWORD *a15)
{
  __int64 v17; // r15
  unsigned int v18; // ebx
  __int64 result; // rax
  int v20; // ecx
  unsigned int v21; // r14d
  USHORT MaximumGroupCount; // ax
  unsigned int v23; // r13d
  int v24; // edx
  unsigned int v25; // r12d
  __int64 v26; // rdx
  char *v27; // r14
  int v28; // r8d
  char *v29; // rcx
  char v30; // al
  __int64 Flink; // rax
  int v32; // eax
  __int64 v33; // r12
  int v34; // edx
  int DefaultPagePriority; // r8d
  int SectionInformation; // edi
  PVOID v37; // rdx
  PVOID v38; // rcx
  void *v39; // rax
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  int v45; // eax
  void *v46; // rcx
  int ImageFileKeyOption; // eax
  int v48; // r12d
  int v49; // edi
  __int64 Pool2; // r10
  int v51; // eax
  __int16 v52; // di
  _QWORD *v53; // rax
  ULONG v54; // r10d
  KPROCESSOR_MODE v55; // al
  int v56; // ecx
  int IsSessionLeaderProcess; // eax
  bool v58; // sf
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned __int16 v61; // di
  unsigned __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // r12
  ULONG v65; // edi
  char v66; // r13
  BOOLEAN v67; // al
  unsigned int v68; // ecx
  int v69; // eax
  int v70; // edx
  __int64 v71; // rdx
  int v72; // r9d
  int v73; // r8d
  __int64 SessionSchedulingGroupByProcess; // rax
  struct _KPROCESS *v75; // rcx
  char v76; // r8
  __int64 v77; // r9
  _DWORD *v78; // rdi
  __int64 v79; // rcx
  _DWORD *v80; // rcx
  __int64 v81; // rax
  _BYTE *v82; // r9
  unsigned int v83; // r8d
  int inited; // eax
  __int64 v85; // r9
  int v86; // r12d
  __int16 v87; // r11
  unsigned __int64 v88; // rdx
  ULONG_PTR v89; // r12
  __int64 v90; // rdx
  int v91; // ecx
  _DWORD *v92; // rax
  volatile signed __int32 *v93; // rdx
  _DWORD *v94; // rax
  __int64 v95; // rdx
  PVOID v96; // r12
  int v97; // eax
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // r12
  void *v101; // rax
  size_t v102; // r8
  __int64 v103; // r12
  unsigned __int8 v104; // r12
  __int64 v105; // rax
  struct _KTHREAD *v106; // r12
  __int64 v107; // rdi
  _OWORD *v108; // r13
  __int64 v109; // r9
  __int64 v110; // r8
  unsigned __int64 **v111; // r13
  __int16 v112; // cx
  char v113; // al
  unsigned __int64 *v114; // r13
  __int64 v115; // r8
  __int64 v116; // r9
  int ProcessNtdllType; // eax
  __int64 v118; // rcx
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v120; // rcx
  __int64 v121; // [rsp+20h] [rbp-818h]
  int v122; // [rsp+30h] [rbp-808h]
  char v124[4]; // [rsp+88h] [rbp-7B0h] BYREF
  unsigned __int16 v125; // [rsp+8Ch] [rbp-7ACh] BYREF
  int v126; // [rsp+90h] [rbp-7A8h]
  char v127; // [rsp+94h] [rbp-7A4h] BYREF
  char v128[3]; // [rsp+95h] [rbp-7A3h] BYREF
  __int64 v129; // [rsp+98h] [rbp-7A0h]
  PVOID Object; // [rsp+A0h] [rbp-798h] BYREF
  __int16 v131; // [rsp+A8h] [rbp-790h]
  __int64 v132; // [rsp+ACh] [rbp-78Ch] BYREF
  int v133; // [rsp+B4h] [rbp-784h]
  __int64 v134; // [rsp+B8h] [rbp-780h] BYREF
  __int16 v135; // [rsp+C0h] [rbp-778h]
  int v136; // [rsp+C4h] [rbp-774h]
  int v137; // [rsp+C8h] [rbp-770h]
  unsigned int v138; // [rsp+CCh] [rbp-76Ch]
  int v139; // [rsp+D0h] [rbp-768h] BYREF
  int v140; // [rsp+D4h] [rbp-764h]
  PVOID TokenInformation; // [rsp+D8h] [rbp-760h] BYREF
  ULONG SessionId; // [rsp+E0h] [rbp-758h] BYREF
  int v143; // [rsp+E4h] [rbp-754h]
  int v144; // [rsp+E8h] [rbp-750h]
  int v145; // [rsp+ECh] [rbp-74Ch]
  _KPROCESS *Process; // [rsp+F0h] [rbp-748h]
  PVOID v147; // [rsp+F8h] [rbp-740h]
  __int64 v148; // [rsp+100h] [rbp-738h]
  __int64 v149; // [rsp+108h] [rbp-730h]
  unsigned int v150; // [rsp+110h] [rbp-728h]
  int v151; // [rsp+114h] [rbp-724h]
  int v152; // [rsp+118h] [rbp-720h]
  int v153; // [rsp+11Ch] [rbp-71Ch]
  int v154; // [rsp+120h] [rbp-718h]
  int v155; // [rsp+124h] [rbp-714h]
  int v156; // [rsp+128h] [rbp-710h]
  int v157; // [rsp+12Ch] [rbp-70Ch]
  PACCESS_TOKEN Token; // [rsp+130h] [rbp-708h]
  __int64 v159; // [rsp+138h] [rbp-700h]
  struct _KTHREAD *CurrentThread; // [rsp+140h] [rbp-6F8h]
  PVOID v161; // [rsp+148h] [rbp-6F0h]
  unsigned __int64 v162; // [rsp+150h] [rbp-6E8h]
  unsigned int v163; // [rsp+158h] [rbp-6E0h]
  int v164; // [rsp+15Ch] [rbp-6DCh] BYREF
  unsigned int v165; // [rsp+160h] [rbp-6D8h]
  HANDLE KeyHandle; // [rsp+168h] [rbp-6D0h] BYREF
  HANDLE Handle; // [rsp+170h] [rbp-6C8h] BYREF
  __int64 v168; // [rsp+178h] [rbp-6C0h] BYREF
  PVOID ReturnedState; // [rsp+180h] [rbp-6B8h] BYREF
  PVOID P; // [rsp+188h] [rbp-6B0h]
  __int128 v171; // [rsp+190h] [rbp-6A8h] BYREF
  __int64 v172; // [rsp+1A0h] [rbp-698h]
  __int64 v173; // [rsp+1A8h] [rbp-690h]
  __int64 v174; // [rsp+1B0h] [rbp-688h]
  __int64 v175; // [rsp+1B8h] [rbp-680h]
  __int64 v176; // [rsp+1D0h] [rbp-668h]
  __int64 v177[2]; // [rsp+1E0h] [rbp-658h] BYREF
  __int64 v178; // [rsp+1F0h] [rbp-648h]
  _QWORD *v179; // [rsp+1F8h] [rbp-640h]
  __int128 v180; // [rsp+200h] [rbp-638h] BYREF
  __int128 v181; // [rsp+210h] [rbp-628h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+220h] [rbp-618h] BYREF
  OBJECT_ATTRIBUTES v183; // [rsp+250h] [rbp-5E8h] BYREF
  __int128 v184; // [rsp+280h] [rbp-5B8h] BYREF
  unsigned __int64 v185; // [rsp+290h] [rbp-5A8h]
  __int128 v186; // [rsp+2A0h] [rbp-598h] BYREF
  __int64 v187; // [rsp+2B0h] [rbp-588h]
  __int128 v188; // [rsp+2C0h] [rbp-578h] BYREF
  __int64 v189; // [rsp+2D0h] [rbp-568h]
  __int128 v190; // [rsp+2E0h] [rbp-558h] BYREF
  __int64 v191; // [rsp+2F0h] [rbp-548h]
  __int128 v192; // [rsp+300h] [rbp-538h] BYREF
  __int64 v193; // [rsp+310h] [rbp-528h]
  __int128 v194; // [rsp+320h] [rbp-518h] BYREF
  __int64 v195; // [rsp+330h] [rbp-508h]
  __int128 v196; // [rsp+340h] [rbp-4F8h] BYREF
  __int64 v197; // [rsp+350h] [rbp-4E8h]
  __int128 v198; // [rsp+360h] [rbp-4D8h] BYREF
  unsigned __int64 v199; // [rsp+370h] [rbp-4C8h]
  _BYTE v200[36]; // [rsp+380h] [rbp-4B8h] BYREF
  unsigned __int16 v201; // [rsp+3A4h] [rbp-494h]
  unsigned __int16 v202; // [rsp+3A6h] [rbp-492h]
  __int16 v203; // [rsp+3AEh] [rbp-48Ah]
  char v204; // [rsp+3B3h] [rbp-485h]
  int v205; // [rsp+3C0h] [rbp-478h]
  __int128 v206; // [rsp+3D0h] [rbp-468h] BYREF
  unsigned __int64 v207; // [rsp+3E0h] [rbp-458h]
  __int128 v208; // [rsp+3E8h] [rbp-450h] BYREF
  __int64 v209; // [rsp+3F8h] [rbp-440h]
  __int128 v210; // [rsp+400h] [rbp-438h] BYREF
  __int128 v211; // [rsp+410h] [rbp-428h]
  __int64 v212; // [rsp+420h] [rbp-418h]
  _OWORD v213[3]; // [rsp+428h] [rbp-410h] BYREF
  struct _KAFFINITY_EX v214; // [rsp+460h] [rbp-3D8h] BYREF
  _DWORD v215[136]; // [rsp+570h] [rbp-2C8h] BYREF
  ULONG Privilege[8]; // [rsp+790h] [rbp-A8h] BYREF
  _OWORD v217[4]; // [rsp+7B0h] [rbp-88h] BYREF

  v149 = a3;
  v129 = a1;
  v177[1] = a1;
  v147 = a7;
  Token = a8;
  v17 = a11;
  v176 = a11;
  v161 = a13;
  v178 = a14;
  v179 = a15;
  v164 = 0;
  memset(v213, 0, sizeof(v213));
  v215[131] = 0;
  memset(&ObjectAttributes, 0, 44);
  v153 = 0;
  v181 = 0LL;
  KeyHandle = 0LL;
  memset_0(&v214.8, 0, sizeof(v214.8));
  v18 = 0;
  v139 = 0;
  v206 = 0LL;
  v207 = 0LL;
  v208 = 0LL;
  v209 = 0LL;
  v128[0] = 0;
  memset(&v183, 0, 44);
  Handle = 0LL;
  Object = 0LL;
  v127 = 0;
  v135 = 0;
  v132 = 0LL;
  memset_0(v200, 0, 0x48uLL);
  LODWORD(TokenInformation) = 0;
  v177[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v134 = 0LL;
  P = 0LL;
  v138 = 0;
  v133 = 0;
  v145 = 0;
  v144 = 0;
  v137 = 34404;
  v154 = 0;
  v157 = 0;
  v156 = 0;
  v140 = 0;
  v175 = 0LL;
  v155 = 0;
  v174 = 0LL;
  v131 = 0;
  v148 = 0LL;
  v173 = 0LL;
  memset_0(v215, 0, 0x218uLL);
  v126 = a9;
  if ( (a9 & 0x800) != 0 )
  {
    v18 = 2;
    if ( (a9 & 0x2000) != 0 )
    {
      v18 = 6;
      if ( (a9 & 0x4000) != 0 )
        v18 = 14;
    }
  }
  else if ( !a7 )
  {
    v18 = a1 != 0 ? 4 : 1;
  }
  if ( (v18 & 4) != 0 )
  {
    if ( a12 && (v18 & 2) == 0 )
      return 3221225520LL;
    if ( (*(_DWORD *)(a1 + 1532) & 0x1000) != 0 )
      return 3221225485LL;
  }
  else if ( (a9 & 0x1000) != 0 )
  {
    return 3221225520LL;
  }
  v159 = a1 & -(__int64)((a9 & 0x100) != 0);
  if ( v17 && (*(_DWORD *)(v17 + 8) & 0x2000LL) != 0 )
  {
    if ( (a1 & -(__int64)((a9 & 0x100) != 0)) == 0 )
    {
      v134 = KeNodeBlock[*(unsigned __int16 *)(v17 + 170)];
      v159 = 0LL;
      goto LABEL_20;
    }
    return 3221225520LL;
  }
  if ( a1 )
  {
    v159 = a1 & -(__int64)((a9 & 0x100) != 0);
    if ( (*(_DWORD *)(a1 + 496) & 0x200000) != 0 )
    {
      v159 = a1;
      v133 = 0x200000;
    }
  }
LABEL_20:
  if ( v17 && (*(_DWORD *)(v17 + 8) & 0x40000) != 0 )
  {
    v18 |= 0x10000u;
    *(_BYTE *)(v17 + 16) &= ~0x10u;
  }
  v210 = 0LL;
  v211 = 0LL;
  v212 = 0LL;
  ReturnedState = 0LL;
  v20 = 2112;
  v150 = 0;
  v172 = 0LL;
  if ( !PsDisableDiskCounters )
  {
    v20 = 2152;
    v18 |= 0x8000u;
    v172 = 2112LL;
  }
  v165 = (v20 + 7) & 0xFFFFFFF8;
  v21 = v165 + 16;
  if ( PoEnergyEstimationEnabled() )
  {
    v150 = (v165 + 23) & 0xFFFFFFF8;
    v21 = v150 + 488;
    v18 |= 0x20000u;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  WORD2(TokenInformation) = MaximumGroupCount;
  v23 = 0;
  if ( MaximumGroupCount > 1u )
  {
    v23 = (v21 + 7) & 0xFFFFFFF8;
    v21 = 16 * MaximumGroupCount + v23;
  }
  v24 = 0;
  v143 = 0;
  if ( (v18 & 0x10002) == 0 )
  {
    if ( v129 )
      v24 = 4;
    v143 = v24;
  }
  v163 = (v21 + 7) & 0xFFFFFFF8;
  v25 = KeSizeOfKProcessExtension(v24) + v163;
  result = ObCreateObjectEx(a2, PsProcessType, v149, a2, v121, v25, 0, v25, &Object, 0LL);
  if ( (int)result >= 0 )
  {
    v27 = (char *)Object;
    ObRetagReferences((__int64)Object, v26, 0x72437350u);
    memset_0(v27, 0, v25);
    *((_OWORD *)v27 + 88) = 0LL;
    *((_OWORD *)v27 + 89) = 0LL;
    *((_QWORD *)v27 + 176) = 0LL;
    *((_QWORD *)v27 + 178) = v27 + 1416;
    *((_QWORD *)v27 + 177) = v27 + 1416;
    *((_QWORD *)v27 + 61) = 0LL;
    *((_QWORD *)v27 + 57) = 0LL;
    *((_QWORD *)v27 + 111) = v27 + 880;
    *((_QWORD *)v27 + 110) = v27 + 880;
    *((_QWORD *)v27 + 197) = v27 + 1568;
    *((_QWORD *)v27 + 196) = v27 + 1568;
    *((_QWORD *)v27 + 227) = v27 + 1808;
    *((_QWORD *)v27 + 226) = v27 + 1808;
    v27[1530] = a4;
    v27[1528] = a5;
    v27[1529] = a6;
    *((_QWORD *)v27 + 203) = 0LL;
    *((_QWORD *)v27 + 241) = 0LL;
    *((_QWORD *)v27 + 240) = 0LL;
    *((_QWORD *)v27 + 243) = 0LL;
    *((_QWORD *)v27 + 242) = 0LL;
    *((_QWORD *)v27 + 245) = 0LL;
    *((_QWORD *)v27 + 259) = 0LL;
    if ( (v18 & 2) != 0 )
      *((_DWORD *)v27 + 383) |= 1u;
    v28 = v126;
    LODWORD(v149) = 32;
    if ( (v126 & 0x8000) != 0 )
      *((_DWORD *)v27 + 383) |= 0x20u;
    if ( (v28 & 0x80000) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)v27 + 503, 4u);
      LOWORD(v28) = a9;
      v126 = a9;
      v27 = (char *)Object;
    }
    if ( v23 )
    {
      *((_DWORD *)v27 + 383) |= 0x80u;
      v29 = &v27[v23];
      *((_QWORD *)v27 + 217) = v29;
      *((_QWORD *)v27 + 218) = &v29[8 * WORD2(TokenInformation)];
    }
    v30 = a10;
    if ( (a10 & 1) != 0 )
      *((_DWORD *)v27 + 383) |= 0x1000u;
    if ( (v30 & 4) != 0 )
      *((_DWORD *)v27 + 383) |= 0x800000u;
    if ( (v30 & 8) != 0 )
      *((_DWORD *)v27 + 383) |= 0x8000000u;
    if ( (v30 & 0x10) != 0 )
      *((_DWORD *)v27 + 383) |= 0x40000000u;
    Flink = (__int64)Process[1].Header.WaitListHead.Flink | 2;
    if ( (v28 & 0x200) != 0 )
      Flink = (__int64)Process[1].Header.WaitListHead.Flink;
    *((_QWORD *)v27 + 91) = Flink;
    if ( (v18 & 0x8000) != 0 )
      *((_QWORD *)v27 + 199) = &v27[v172];
    *((_QWORD *)v27 + 254) = &v27[v165];
    if ( (v18 & 0x20000) != 0 )
    {
      *((_QWORD *)v27 + 205) = &v27[v150];
      PoEnergyContextInitialize();
    }
    if ( v17 && (*(_DWORD *)(v17 + 8) & 0x200LL) != 0 )
    {
      v32 = *(_DWORD *)(v17 + 316);
      v33 = v129;
    }
    else
    {
      v33 = v129;
      if ( v129 )
        v32 = *(_DWORD *)(v129 + 904);
      else
        v32 = 5;
    }
    *((_DWORD *)v27 + 226) = v32;
    *((_DWORD *)v27 + 341) = 259;
    if ( v33 )
    {
      v34 = (*(_DWORD *)(v33 + 500) >> 27) & 7;
      DefaultPagePriority = (*(_DWORD *)(v33 + 496) >> 12) & 7;
      *((_QWORD *)v27 + 90) = *(_QWORD *)(v33 + 464);
    }
    else
    {
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    *((_DWORD *)v27 + 125) = *((_DWORD *)v27 + 125) & 0xC7FFFFFF | (v34 << 27);
    *((_DWORD *)v27 + 124) = (DefaultPagePriority << 12) | *((_DWORD *)v27 + 124) & 0xFFFF8FFF;
    if ( v161 )
    {
      if ( !PsReferencePartitionSafe((__int64)v161) )
      {
        SectionInformation = -1073740640;
LABEL_180:
        if ( v148 )
          *((_QWORD *)v27 + 58) = v148;
        PspRundownSingleProcess(v27, 0);
        ObfDereferenceObjectWithTag(v27, 0x72437350u);
        goto LABEL_183;
      }
      v37 = v161;
    }
    else
    {
      v37 = PspSystemPartition;
      v161 = PspSystemPartition;
      if ( _InterlockedIncrement64((volatile signed __int64 *)PspSystemPartition + 5) <= 1 )
        __fastfail(0xEu);
      v126 = a9;
      v27 = (char *)Object;
    }
    *((_QWORD *)v27 + 235) = v37;
    v38 = v147;
    if ( v147 )
    {
      PsReferenceSiloContext(v147);
      v38 = v147;
    }
    if ( (v18 & 4) != 0 )
    {
      v137 = *(unsigned __int16 *)(v33 + 1772);
      if ( (v18 & 2) == 0 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v33 + 488)) )
        {
          v39 = *(void **)(v33 + 680);
          v147 = v39;
          if ( v39 )
            PsReferenceSiloContext(v39);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v33 + 488));
        }
        v38 = v147;
        if ( !v147 )
        {
          SectionInformation = -1073741558;
          goto LABEL_180;
        }
        v40 = *(_QWORD *)(v33 + 784);
        if ( v40 )
        {
          v18 |= 0x40u;
          v154 = *(_DWORD *)(v40 + 8);
        }
        v41 = 0;
        if ( (*(_DWORD *)(v33 + 500) & 0x20000) != 0 )
          v41 = 0x20000;
        HIDWORD(v132) = v41;
      }
    }
    *((_QWORD *)v27 + 85) = v38;
    if ( !v17 || (v18 & 2) != 0 )
    {
      if ( v38 )
      {
        SectionInformation = MmGetSectionInformation((__int64)v38, 4, (__int64)v200);
        if ( SectionInformation < 0 )
          goto LABEL_180;
        v18 = v18 & 0xF82B9FFF | ((v204 & 4 | (4 * (v204 & 2 | (32 * (v205 & 1 | (2 * (v205 & 0xFA))))))) << 11);
        v131 = v203;
        v145 = v202;
        v144 = v201;
        if ( (v18 & 4) != 0 )
        {
          HIDWORD(v132) |= 8u;
          v18 |= 0x18u;
        }
      }
    }
    else
    {
      *((_QWORD *)v27 + 190) = *(_QWORD *)(v17 + 424);
      SectionInformation = MmGetSectionInformation((__int64)v38, 4, v17 + 56);
      if ( SectionInformation < 0 )
        goto LABEL_180;
      v18 |= (*(_BYTE *)(v17 + 107) & 4 | (4
                                         * (*(_BYTE *)(v17 + 107) & 2 | (32
                                                                       * (*(_DWORD *)(v17 + 120) & 1 | (2 * (*(_DWORD *)(v17 + 120) & 0xFA))))))) << 11;
      v145 = *(unsigned __int16 *)(v17 + 94);
      v144 = *(unsigned __int16 *)(v17 + 92);
      if ( (*(_WORD *)(v17 + 100) & *(_WORD *)(v17 + 18)) != 0 )
      {
        SectionInformation = -1073741701;
        v42 = 3LL;
LABEL_92:
        PspUpdateCreateInfo(v42, v17, 0LL);
        goto LABEL_180;
      }
      if ( (v18 & 4) == 0 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(v17 + 184), 0x72437350u);
        *((_QWORD *)v27 + 102) = *(_QWORD *)(v17 + 184);
        v131 = *(_WORD *)(v17 + 102);
        v45 = RtlpOpenImageFileOptionsKeyEx(v17 + 240, v43, v44, v17 + 200);
        if ( v45 < 0 )
        {
          if ( v45 == -1073741772 )
            *(_BYTE *)(v17 + 16) |= 0x40u;
          *(_QWORD *)(v17 + 200) = 0LL;
        }
        SectionInformation = PspSelectMachineForProcess(v129, v17, &v139);
        if ( SectionInformation < 0 )
        {
          v42 = 4LL;
          goto LABEL_92;
        }
        v137 = (unsigned __int16)v139;
        if ( BYTE2(v139) )
          v18 |= 0x40u;
        if ( HIBYTE(v139) )
          HIDWORD(v132) |= 0x20000u;
        v46 = *(void **)(v17 + 200);
        if ( v46 )
        {
          if ( *(char *)(v17 + 16) >= 0 )
          {
            if ( (ImageFileKeyOption = RtlQueryImageFileKeyOption(v46, 2, (__int64)&v132),
                  ImageFileKeyOption == -2147483643)
              || ImageFileKeyOption >= 0 && (_DWORD)v132 == 2 && v135
              || (v151 = 0, (int)RtlQueryImageFileKeyOption(*(HANDLE *)(v17 + 200), 4, 0LL) >= 0) && v151 == 1 )
            {
              SectionInformation = -1073741767;
              v42 = 5LL;
              goto LABEL_92;
            }
          }
          v136 = 0;
          v48 = v126;
          if ( (int)RtlQueryImageFileKeyOption(*(HANDLE *)(v17 + 200), 4, 0LL) >= 0 )
          {
            if ( v136 )
            {
              v48 = v126 | 0x10;
              v126 = v48;
              a9 = v48;
              if ( (v18 & 0x40) == 0 )
              {
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = *(HANDLE *)(v17 + 200);
                ObjectAttributes.Attributes = 576;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspLargePageDLLKeyName;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
                {
                  v136 = 0;
                  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 && v136 )
                  {
                    v48 |= 0x20u;
                    v126 = v48;
                    a9 = v48;
                  }
                  ObCloseHandle(KeyHandle, 0);
                }
              }
            }
          }
          if ( !v159 )
            PspReadIFEONodeOptions(v27, *(_QWORD *)(v17 + 200), &v134);
          v152 = 0;
          if ( (int)RtlQueryImageFileKeyOption(*(HANDLE *)(v17 + 200), 4, 0LL) >= 0 && v152 )
            v133 |= 0x40u;
          if ( (unsigned int)RtlQueryImageFileKeyOption(*(HANDLE *)(v17 + 200), 0, (__int64)&v132) == -2147483643 )
          {
            v49 = v132;
            if ( (unsigned int)v132 <= 0x100 && (v132 & 7) == 0 )
            {
              P = (PVOID)ExAllocatePool2(0x40uLL, (unsigned int)v132, 0x73437350u);
              if ( !P )
              {
LABEL_130:
                SectionInformation = -1073741801;
                goto LABEL_180;
              }
              if ( (int)RtlQueryImageFileKeyOption(*(HANDLE *)(v17 + 200), v49, (__int64)&v132) >= 0 && (v132 & 7) == 0 )
              {
                v18 |= 0x200000u;
                v138 = (unsigned int)v132 >> 3;
              }
            }
          }
          v183.Length = 48;
          v183.RootDirectory = *(HANDLE *)(v17 + 200);
          v183.Attributes = 576;
          v183.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
          *(_OWORD *)&v183.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 1u, &v183) >= 0 )
          {
            PspReadIFEOPerfOptions(Handle, (__int64)&v210);
            ObCloseHandle(Handle, 0);
          }
          if ( (int)RtlQueryImageFileKeyOption(*(HANDLE *)(v17 + 200), 4, 0LL) >= 0 && v153 == 2 )
          {
            _InterlockedOr((volatile signed __int32 *)v27 + 503, 4u);
            v48 = a9;
            v126 = a9;
            v27 = (char *)Object;
          }
          if ( (v48 & 0x80000) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)v27 + 503, 4u);
            v48 = a9;
            v126 = a9;
            v27 = (char *)Object;
          }
LABEL_146:
          if ( (v18 & 0x40) != 0 )
          {
            Pool2 = ExAllocatePool2(0x40uLL, 0x10uLL, 0x50776F57u);
            *((_QWORD *)v27 + 98) = Pool2;
            if ( !Pool2 )
              goto LABEL_130;
            v51 = v154;
            v52 = v137;
            if ( !v154 )
              v51 = PspWow64PickBestNtdll(v17);
            *(_DWORD *)(Pool2 + 8) = v51;
            v53 = (_QWORD *)*((_QWORD *)v27 + 98);
            if ( v53 )
              *v53 = 1LL;
            if ( (unsigned int)Feature_Servicing_LargeAddressAwareShim__private_IsEnabledDeviceUsageNoInline()
              && (v48 & 0x800000) != 0 )
            {
              _InterlockedOr((volatile signed __int32 *)v27 + 125, 0x200u);
              LOWORD(v48) = a9;
              v126 = a9;
              v27 = (char *)Object;
            }
          }
          else
          {
            v52 = v137;
          }
          *((_WORD *)v27 + 886) = v52;
          SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
          if ( SectionInformation < 0 )
            goto LABEL_180;
          v54 = 0;
          v55 = a2;
          if ( a2 )
          {
            if ( v17 && (*(_DWORD *)(v17 + 8) & 0x100LL) != 0 && *(_BYTE *)(v17 + 2) == 4 )
            {
              Privilege[0] = 14;
              v54 = 1;
            }
            v56 = a12;
            if ( a12 )
              Privilege[v54++] = 3;
            if ( (v48 & 0x30) != 0 )
              Privilege[v54++] = 4;
            if ( (v48 & 0x80u) != 0 )
            {
              IsSessionLeaderProcess = PspIsSessionLeaderProcess(Process);
              v56 = a12;
              if ( !IsSessionLeaderProcess )
                Privilege[v54++] = 10;
            }
            if ( (v48 & 0x8400) != 0 )
              Privilege[v54++] = 7;
            if ( v54 )
            {
              v58 = RtlAcquirePrivilege(Privilege, v54, v56 != 0, &ReturnedState) < 0;
              v55 = a2;
              if ( !v58 )
                v18 |= 0x400u;
            }
            else
            {
              v55 = a2;
            }
          }
          if ( (v48 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v55) )
            goto LABEL_177;
          v125 = -1;
          *(_QWORD *)&v214.Count = 2097153LL;
          memset_0(&v214.8, 0, sizeof(v214.8));
          if ( v159 )
          {
            KeQueryAffinityProcess(v159, &v214, 0LL, v217, &v125);
            v63 = KeNodeBlock[*((unsigned __int16 *)v217 + v125)];
            goto LABEL_206;
          }
          if ( v134 )
          {
            v60 = v134;
          }
          else
          {
            if ( !v129 )
            {
              v61 = 0;
              v125 = 0;
              KeAddProcessorAffinityEx(&v214.Count, 0);
LABEL_200:
              KiCopyAffinityEx(&v214, v214.Size, &KeActiveProcessors);
              if ( v134 )
                goto LABEL_207;
              v180 = 0LL;
              WORD4(v180) = v61;
              if ( v61 >= v214.Count )
                v62 = 0LL;
              else
                v62 = v214.Bitmap[v61];
              *(_QWORD *)&v180 = v62;
              v63 = KeSelectNodeForAffinity((__int64)&v180);
LABEL_206:
              v134 = v63;
LABEL_207:
              *((_DWORD *)v27 + 125) |= HIDWORD(v132);
              *((_DWORD *)v27 + 124) |= v133;
              v64 = v129;
              if ( v129 )
              {
                v168 = 0LL;
                v65 = 0;
                SessionId = 0;
                v18 &= ~0x20u;
                v66 = 0;
                v124[0] = 0;
                if ( a12 )
                {
                  v67 = SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, a2);
                  v68 = v18 & 0xFFFFFDFF;
                  v18 |= 0x200u;
                  if ( !v67 )
                    v18 = v68;
                  SectionInformation = SeIsTokenAssignableToProcess(Token, v124);
                  if ( SectionInformation < 0 )
                    goto LABEL_178;
                  if ( !v124[0] && (v18 & 0x200) == 0 )
                    goto LABEL_177;
                  SectionInformation = SeQuerySessionIdToken(Token, &SessionId);
                  if ( SectionInformation < 0 )
                    goto LABEL_178;
                  v69 = PsGetSessionIdEx((__int64)Process);
                  v65 = SessionId;
                  if ( SessionId != v69 )
                  {
                    if ( (v18 & 0x200) == 0 )
                    {
LABEL_177:
                      SectionInformation = -1073741727;
                      goto LABEL_178;
                    }
                    if ( (v126 & 0x80u) != 0 )
                    {
                      SectionInformation = -1073741811;
                      goto LABEL_178;
                    }
                    v18 |= 0x20u;
                  }
                  v66 = v124[0];
                }
                else if ( (v18 & 4) != 0 )
                {
                  v65 = PsGetSessionIdEx(v129);
                  SessionId = v65;
                  v18 = v18 & 0xFFFFFFDF | ((unsigned int)PsGetSessionIdEx((__int64)Process) != v65 ? 0x20 : 0);
                }
                if ( (v18 & 0x20) != 0 )
                {
                  SectionInformation = PspAttachSession(v65, v213, &v168);
                  if ( SectionInformation < 0 )
                  {
                    LOWORD(v18) = v18 & 0xFFDF;
                    goto LABEL_178;
                  }
                  *((_DWORD *)v27 + 124) |= 0x80u;
                }
                if ( !a12 || v66 )
                {
                  v64 = v129;
                  v71 = v129;
                  if ( v66 )
                    v71 = (__int64)Process;
                  PspInheritQuota(v27, v71);
                }
                else
                {
                  SectionInformation = PspAssignProcessQuotaBlock(0LL, v27, Token);
                  if ( SectionInformation < 0 )
                  {
                    if ( (v18 & 0x20) != 0 )
                      PspDetachSession(v168, (__int64)v213);
                    goto LABEL_178;
                  }
                  v64 = v129;
                }
                v72 = BYTE4(v210) & 1;
                v73 = PspMaximumWorkingSet;
                if ( (BYTE4(v210) & 1) != 0 )
                  v73 = DWORD2(v211);
                if ( (v126 & 0x400000) != 0 )
                  v72 |= 0x10u;
                v18 ^= (v18 ^ ((unsigned __int8)MmCreateProcessAddressSpace(
                                                  (_DWORD)v161,
                                                  v70,
                                                  v73,
                                                  v72,
                                                  (unsigned int)*(unsigned __int16 *)v134 + 1,
                                                  (__int64)v27) << 11)) & 0x800;
                if ( (v18 & 0x20) != 0 )
                  PspDetachSession(v168, (__int64)v213);
                if ( (v18 & 0x800) == 0 )
                  goto LABEL_243;
              }
              else
              {
                PspInheritQuota(v27, 0LL);
                v27[352] = 1;
                SectionInformation = MmInitializeHandBuiltProcess();
                if ( SectionInformation < 0 )
                  goto LABEL_178;
              }
              _InterlockedOr((volatile signed __int32 *)v27 + 125, 0x40000u);
              v27 = (char *)Object;
              SessionSchedulingGroupByProcess = PsGetSessionSchedulingGroupByProcess(Object);
              SectionInformation = KeInitializeProcess(v75, v134, SessionSchedulingGroupByProcess, v122, v76, v77);
              if ( SectionInformation < 0 )
                goto LABEL_178;
              if ( !v17 || (v18 & 2) != 0 )
              {
                v78 = 0LL;
              }
              else
              {
                v157 = *(_DWORD *)(v17 + 384);
                v156 = *(_DWORD *)(v17 + 388);
                v175 = *(_QWORD *)(v17 + 408);
                v155 = *(_DWORD *)(v17 + 392);
                v174 = *(_QWORD *)(v17 + 216);
                v78 = *(_DWORD **)(v17 + 400);
                v140 = *(_DWORD *)(v17 + 396);
                v79 = *(_QWORD *)(v17 + 184);
                if ( v79 && qword_140F04BE0 && (int)guard_dispatch_icall_no_overrides(v79, v215) >= 0 )
                {
                  if ( !v215[0] && v78 && v140 == 524 )
                  {
                    v80 = v215;
                    v81 = 4LL;
                    do
                    {
                      *(_OWORD *)v80 = *(_OWORD *)v78;
                      *((_OWORD *)v80 + 1) = *((_OWORD *)v78 + 1);
                      *((_OWORD *)v80 + 2) = *((_OWORD *)v78 + 2);
                      *((_OWORD *)v80 + 3) = *((_OWORD *)v78 + 3);
                      *((_OWORD *)v80 + 4) = *((_OWORD *)v78 + 4);
                      *((_OWORD *)v80 + 5) = *((_OWORD *)v78 + 5);
                      *((_OWORD *)v80 + 6) = *((_OWORD *)v78 + 6);
                      v80 += 32;
                      *((_OWORD *)v80 - 1) = *((_OWORD *)v78 + 7);
                      v78 += 32;
                      --v81;
                    }
                    while ( v81 );
                    *(_QWORD *)v80 = *(_QWORD *)v78;
                    v80[2] = v78[2];
                  }
                  v78 = v215;
                  v140 = 536;
                }
              }
              if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline()
                && v17
                && _bittest64((const signed __int64 *)(v17 + 8), 0x21u) )
              {
                v173 = v17 + 496;
              }
              SectionInformation = PspInitializeProcessSecurity(
                                     v64,
                                     (_DWORD)v27,
                                     (_DWORD)Token,
                                     a12,
                                     v157,
                                     (v18 >> 4) & 1,
                                     HIWORD(v18) & 1,
                                     v156,
                                     (__int64)v78,
                                     v140,
                                     v175,
                                     v155,
                                     v174,
                                     v173,
                                     v178);
              if ( SectionInformation < 0 )
                goto LABEL_178;
              v27[839] = 2;
              if ( v64 )
              {
                if ( ((*(_BYTE *)(v64 + 839) - 1) & 0xFB) == 0 )
                  v27[839] = *(_BYTE *)(v64 + 839);
                v82 = v17 ? *(_BYTE **)(v17 + 296) : 0LL;
                v83 = v17 ? *(_DWORD *)(v17 + 292) : 0;
                inited = ObInitProcess(
                           (struct _EX_RUNDOWN_REF *)(v64 & -(__int64)((a9 & 4) != 0)),
                           (ULONG_PTR)v27,
                           v83,
                           v82);
              }
              else
              {
                *((_QWORD *)v27 + 96) = Process[1].KernelTime;
                inited = MmInitializeHandBuiltProcess2((ULONG_PTR)v27);
              }
              SectionInformation = inited;
              if ( inited < 0 )
                goto LABEL_178;
              if ( (v210 & 7) != 0 )
                PspApplyIFEOPerfOptions((__int64)v27, (unsigned int *)&v210, a2, v85);
              if ( (v18 & 0x200000) != 0 )
                KeSetCpuSetsProcess((__int64)v27, v138, (__int64)P, 1, 0);
              if ( (BYTE4(v210) & 2) != 0 )
                KeSetExpectedConcurrencyCountProcess((struct _KPROCESS *)v27, v212);
              if ( v17 )
              {
                if ( (*(_DWORD *)(v17 + 8) & 0x100LL) != 0 )
                {
                  SectionInformation = PspSetProcessPriorityClass((__int64)v27, *(_BYTE *)(v17 + 2), 0LL, a2);
                  if ( SectionInformation < 0 )
                    goto LABEL_178;
                }
              }
              v27[144] = PspComputeQuantumAndPriority((_DWORD)v27, 0, (unsigned int)&v127, 0, 0LL);
              v27[145] = v127;
              SectionInformation = 0;
              v138 = 0;
              PspReadIFEOMitigationOptions(v17, &v206);
              v184 = v206;
              v185 = v207;
              v186 = PspSystemMitigationOptions;
              v187 = qword_140FC7150;
              PspInheritMitigationOptions(&v186, &v184, &v206);
              PspReadIFEOMitigationAuditOptions(v17, &v208);
              v188 = v208;
              v189 = v209;
              v190 = PspSystemMitigationAuditOptions;
              v191 = qword_140FC73C0;
              PspInheritMitigationAuditOptions(&v190, &v188, &v208);
              v86 = (WORD3(v206) & 3) << 14;
              if ( v17 )
              {
                if ( (*(_DWORD *)(v17 + 8) & 0x10000LL) != 0 )
                {
                  v192 = *(_OWORD *)(v17 + 336);
                  v193 = *(_QWORD *)(v17 + 352);
                  v198 = v206;
                  v199 = v207;
                  PspInheritMitigationOptions(&v198, &v192, &v206);
                }
                if ( (*(_DWORD *)(v17 + 8) & 0x8000000) != 0 )
                {
                  v194 = *(_OWORD *)(v17 + 448);
                  v195 = *(_QWORD *)(v17 + 464);
                  v196 = v208;
                  v197 = v209;
                  PspInheritMitigationAuditOptions(&v196, &v194, &v208);
                }
              }
              if ( (_DWORD)TokenInformation )
                LOWORD(v86) = v86 | 4;
              v87 = v86 | 0x40;
              if ( (v86 & 4) == 0 )
                v87 = v86;
              if ( (v87 & 0x3FC0) != 0 )
                PspHardenMitigationOptions(&v206);
              if ( !KeIsUserCetAllowed() )
                *((_QWORD *)&v206 + 1) = *((_QWORD *)&v206 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
              if ( (v131 & 0x4000) == 0 || (v18 & 0x40000) == 0 )
                LODWORD(v149) = 0;
              if ( (v18 & 2) != 0 )
              {
                *(_QWORD *)&v206 = v206 & 0xFFFFFCFFFFFFFFFFuLL | 0x20000000000LL;
                *((_QWORD *)&v206 + 1) = *((_QWORD *)&v206 + 1) & 0xCFFFFFFFFFFFFFFCuLL | 0x2000000000000002LL;
                if ( (a10 & 2) != 0 )
                  v88 = v206 & 0xFFFFFFFFFFCCFFFFuLL | 0x220000;
                else
                  v88 = v206 & 0xFFFFFFFFFFCCFFFFuLL | 0x110000;
                *(_QWORD *)&v206 = v88;
              }
              v89 = v129;
              if ( (v18 & 4) != 0 && (*(_DWORD *)(v129 + 1876) & 0x4000) == 0 )
                *((_QWORD *)&v206 + 1) = *((_QWORD *)&v206 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
              if ( (v18 & 0x40) != 0 )
                *((_QWORD *)&v206 + 1) = *((_QWORD *)&v206 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
              v207 = v207 & 0xFFFFFFFFFFFFCFFFuLL | 0x2000;
              if ( !KeIsCoreIsolationMitigationPolicyEnforceable() )
                v207 = v90 & 0xFFFFFFFFFCFFFFFFuLL | 0x2000000;
              PspApplyMitigationOptions((_DWORD)v27, v89, (unsigned int)&v206, (unsigned int)&v208, v91);
              if ( v17 )
              {
                v92 = *(_DWORD **)(v17 + 432);
                if ( v92 )
                {
                  v93 = (volatile signed __int32 *)(v27 + 1872);
                  if ( (*v92 & 1) != 0 )
                  {
                    _InterlockedOr(v93, 0x4000u);
                    v27 = (char *)Object;
                  }
                  if ( (**(_DWORD **)(v17 + 432) & 2) != 0 )
                  {
                    _InterlockedOr(v93, 0x8000u);
                    v27 = (char *)Object;
                  }
                  *((_DWORD *)v27 + 442) = *(_DWORD *)(*(_QWORD *)(v17 + 432) + 4LL);
                }
                v94 = *(_DWORD **)(v17 + 440);
                if ( v94 )
                  *((_DWORD *)v27 + 488) = *v94;
                *(_OWORD *)(v17 + 336) = v206;
                *(_QWORD *)(v17 + 352) = v207;
                *(_OWORD *)(v17 + 448) = v208;
                *(_QWORD *)(v17 + 464) = v209;
              }
              PsQueryProcessAttributes((__int64)v27, 0LL, v128);
              v95 = ((_DWORD)TokenInformation != 0) | 2u;
              if ( (a9 & 0x20000) == 0 )
                v95 = (_DWORD)TokenInformation != 0;
              SmProcessCreateNotification(v27, v95);
              if ( (*((_DWORD *)v27 + 469) & 0x4000) != 0 )
              {
                SectionInformation = KeInitializeProcessUserCetLogging(v27);
                if ( SectionInformation < 0 )
                  goto LABEL_178;
              }
              if ( (a9 & 0x80u) != 0
                && !(unsigned int)PspIsSessionLeaderProcess(Process)
                && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
              {
                goto LABEL_177;
              }
              if ( (v18 & 1) != 0 )
              {
LABEL_348:
                if ( (v18 & 0x400) != 0 )
                  RtlReleasePrivilege(ReturnedState);
                if ( *((_WORD *)v27 + 886) == 332 )
                  *((_DWORD *)v27 + 34) |= 1u;
                if ( (v18 & 0x80u) != 0 )
                {
                  if ( v17 )
                  {
                    if ( (v18 & 2) == 0 )
                    {
                      SectionInformation = PspSetupReservedUserMappings(v27, v213, v17);
                      if ( SectionInformation < 0 )
                        goto LABEL_180;
                    }
                  }
                }
                if ( (v18 & 0x100) != 0 )
                {
                  *(_QWORD *)&v171 = 0LL;
                  *((_QWORD *)&v171 + 1) = -1LL;
                  v104 = (4 * (((v27[1530] & 7) != 1 ? 0 : 0x10) | ((v18 & 0x2000) != 0))) & 0xCF | ((v27[1530] & 7) != 0 ? 2 : 0) | ((v18 & 0x1000) != 0) | (16 * (((_DWORD)TokenInformation != 0 ? 2 : 0) | v128[0] & 1));
                  *(_DWORD *)((char *)&v171 + 3) = v104;
                  if ( (v18 & 4) != 0 )
                  {
                    v105 = v129;
                    v108 = *(_OWORD **)(v129 + 736);
                    *((_QWORD *)v27 + 92) = v108;
                    if ( (v18 & 0x10) != 0 )
                      goto LABEL_363;
                    LOBYTE(v171) = 1;
                    KiStackAttachProcess((_KPROCESS *)v27, 0, (__int64)v213);
                    if ( MmSecureVirtualMemory(v108, 0x7D8uLL, 4u) )
                      *v108 = v171;
                    else
                      SectionInformation = -1073741503;
                    v110 = 4LL;
                    if ( SectionInformation >= 0 )
                    {
                      v111 = (unsigned __int64 **)*((_QWORD *)v27 + 98);
                      if ( v111 )
                      {
                        v112 = *((_WORD *)v27 + 886);
                        if ( v112 == 332 || (v113 = 0, v112 == 452) )
                          v113 = 1;
                        if ( v113 )
                        {
                          v114 = *v111;
                          if ( MmSecureVirtualMemory(v114, 0x490uLL, 4u) )
                          {
                            v162 = 0xFFFFFFFF00000001uLL;
                            BYTE3(v162) = v104;
                            *v114 = v162;
                          }
                          else
                          {
                            SectionInformation = -1073741503;
                          }
                        }
                      }
                    }
                    KiUnstackDetachProcess((__int64)v213, 0, v110, v109);
                    if ( SectionInformation < 0 )
                      goto LABEL_180;
                  }
                  else
                  {
                    SectionInformation = MmCreatePeb((ULONG_PTR)v27, (char *)&v171, (_QWORD *)v27 + 92, (__int64)&v181);
                    if ( SectionInformation < 0 )
                    {
                      *((_QWORD *)v27 + 92) = 0LL;
                      goto LABEL_180;
                    }
                    if ( (_QWORD)v181 )
                    {
                      _InterlockedAnd((volatile signed __int32 *)v27 + 124, 0xFFCFFFFF);
                      v27 = (char *)Object;
                      PspSetProcessAffinitySafe((struct _KPROCESS *)Object, (__int64)&v164);
                    }
                  }
                }
                v105 = v129;
LABEL_363:
                if ( (v18 & 0x80u) == 0 || !v17 || (v18 & 2) != 0 )
                {
                  if ( (v18 & 0x100) != 0 && (v18 & 0x10) == 0 )
                  {
                    SectionInformation = 0;
                    KiStackAttachProcess((_KPROCESS *)v27, 0, (__int64)v213);
                    KeCopyXfdMaskToPeb(v27);
                    v106 = CurrentThread;
                    PspUpdatePebForAffinityChange((__int64)CurrentThread, (__int64)v27);
                    if ( (v18 & 0x80u) != 0 )
                    {
                      SectionInformation = MmMapApiSetView((__int64)v27);
                      if ( SectionInformation >= 0 )
                      {
                        SectionInformation = PspMapSiloSharedDataView((__int64)v27);
                        if ( SectionInformation >= 0 )
                        {
                          SectionInformation = PspPrepareSystemDllInitBlock(0, 0LL);
                          if ( SectionInformation >= 0 )
                          {
                            if ( *((_QWORD *)v27 + 98) )
                            {
                              ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)v27);
                              SectionInformation = PspPrepareSystemDllInitBlock(ProcessNtdllType, 0LL);
                            }
                          }
                        }
                      }
                    }
                    KiUnstackDetachProcess((__int64)v213, 0, v115, v116);
LABEL_368:
                    if ( SectionInformation < 0 )
                      goto LABEL_180;
                    PspLockProcessExclusive((__int64)v27, (__int64)v106);
                    v107 = ExCreateHandleEx((unsigned int *)PspCidTable, (__int64)v27, 0, 0, 0LL);
                    v148 = v107;
                    if ( !v107 )
                    {
                      PspUnlockProcessExclusive((__int64)v27);
                      SectionInformation = -1073741670;
                      goto LABEL_180;
                    }
                    if ( (v18 & 0x10000) != 0 )
                    {
                      SectionInformation = MmGetSectionStrongImageReference(0LL, 0LL, *((void **)v27 + 85), v177);
                      v118 = (__int64)v27;
                      if ( SectionInformation < 0 )
                      {
LABEL_398:
                        PspUnlockProcessExclusive(v118);
                        goto LABEL_180;
                      }
                      SectionInformation = KeSecureProcess(
                                             (_KPROCESS *)v27,
                                             *((_QWORD *)v27 + 92),
                                             v148,
                                             *(_QWORD *)(v17 + 192),
                                             v177[0],
                                             *(struct _MDL **)(v17 + 360),
                                             *(unsigned int *)(v17 + 376));
                      if ( SectionInformation < 0 )
                      {
                        v118 = (__int64)v27;
                        goto LABEL_398;
                      }
                      v107 = v148;
                    }
                    if ( KeQuerySystemTimeUnsafe() )
                    {
                      KeQuerySystemTimePrecise((_QWORD *)v27 + 63);
                    }
                    else
                    {
                      v27 = (char *)Object;
                      *((_QWORD *)Object + 63) = MEMORY[0xFFFFF78000000014];
                    }
                    *((_QWORD *)v27 + 58) = v107;
                    *((_QWORD *)v27 + 208) = MEMORY[0xFFFFF78000000008];
                    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
                    v120 = Object;
                    *((_QWORD *)Object + 209) = UnbiasedInterruptTime;
                    v120[211] = *((_QWORD *)v27 + 208);
                    *v179 = v120;
                    SectionInformation = v138;
LABEL_183:
                    if ( P )
                      ExFreePoolWithTag(P, 0x73437350u);
                    if ( qword_140F04BE8 )
                      guard_dispatch_icall_no_overrides(v215, v59);
                    return (unsigned int)SectionInformation;
                  }
                }
                else
                {
                  SectionInformation = PspSetupUserProcessAddressSpace(v105, (_KPROCESS *)v27, (__int64)v213, v17);
                }
                v106 = CurrentThread;
                goto LABEL_368;
              }
              if ( (v18 & 4) != 0 )
              {
                *((_QWORD *)v27 + 86) = *(_QWORD *)(v89 + 688);
                SectionInformation = MmInitializeProcessAddressSpace((ULONG_PTR)v27, v89, 0LL, &a9, (v18 & 8) != 0);
                if ( SectionInformation >= 0 )
                {
                  v100 = *(unsigned __int16 *)(*(_QWORD *)(v89 + 848) + 2LL);
                  v101 = (void *)ExAllocatePool2(0x40uLL, v100 + 16, 0x61506553u);
                  *((_QWORD *)v27 + 106) = v101;
                  if ( !v101 )
                  {
LABEL_243:
                    SectionInformation = -1073741670;
                    goto LABEL_178;
                  }
                  v102 = v100 + 16;
                  v103 = v129;
                  memmove(v101, *(const void **)(v129 + 848), v102);
                  *(_QWORD *)(*((_QWORD *)v27 + 106) + 8LL) = *((_QWORD *)v27 + 106) + 16LL;
                  *((_DWORD *)v27 + 174) = *(_DWORD *)(v103 + 696);
                  if ( (*(_DWORD *)(v103 + 496) & 0x1000000) != 0 )
                    *((_DWORD *)v27 + 124) |= 0x1000000u;
                  if ( (a9 & 0x1000) != 0 )
                  {
                    *((_QWORD *)v27 + 85) = 0LL;
                    ObfDereferenceObject(v147);
                  }
                  goto LABEL_345;
                }
              }
              else
              {
                SectionInformation = PspInitializeFullProcessImageName(v17, v27);
                if ( SectionInformation >= 0 )
                {
                  v96 = v147;
                  v97 = MmInitializeProcessAddressSpace((ULONG_PTR)v27, 0LL, (__int64)v147, &a9, 0);
                  SectionInformation = v97;
                  if ( v97 >= 0 )
                  {
                    v138 = v97;
                    if ( v17 )
                    {
                      if ( (v18 & 2) == 0 )
                      {
                        v98 = *(_QWORD *)(*(_QWORD *)MiSectionControlArea((__int64)v96) + 32LL);
                        v99 = *((_QWORD *)v27 + 86);
                        if ( v98 != v99 )
                          *(_QWORD *)(v17 + 56) += v99 - v98;
                      }
                    }
                    v18 |= 0x80u;
LABEL_345:
                    if ( (v18 & 1) == 0 )
                    {
                      v18 = v18 & 0xFFFFEFFF | ((a9 & 0x10) << 8);
                      if ( (v18 & 2) == 0 )
                        v18 |= 0x100u;
                    }
                    goto LABEL_348;
                  }
                }
              }
LABEL_178:
              if ( (v18 & 0x400) != 0 )
                RtlReleasePrivilege(ReturnedState);
              goto LABEL_180;
            }
            if ( (*(_DWORD *)(v129 + 496) & 0x100000) == 0 )
            {
              v134 = PspSelectNodeForProcess();
              v61 = KeSelectGroupFromNode(v134);
              v125 = v61;
              if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v61 )
              {
                v134 = 0LL;
                v61 = 1;
                v125 = 1;
              }
              goto LABEL_200;
            }
            v133 |= 0x100000u;
            v134 = KeNodeBlock[*(unsigned __int16 *)(v129 + 260)];
            v60 = v134;
          }
          v125 = KeSelectGroupFromNode(v60);
          v61 = v125;
          goto LABEL_200;
        }
      }
    }
    v48 = v126;
    goto LABEL_146;
  }
  return result;
}
