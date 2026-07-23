/*
 * XREFs of PspAllocateProcess @ 0x1409BE78C
 * Callers:
 *     PsCreateMinimalProcess @ 0x140769B14 (PsCreateMinimalProcess.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x140A8F360 (PspCreateProcess.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeSelectNodeForAffinity @ 0x140268DBC (KeSelectNodeForAffinity.c)
 *     KeQueryAffinityProcess @ 0x140270FC0 (KeQueryAffinityProcess.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeQuerySystemTimePrecise @ 0x14031ABA0 (KeQuerySystemTimePrecise.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     PsReferencePartitionSafe @ 0x1403BE990 (PsReferencePartitionSafe.c)
 *     PspDetachSession @ 0x1403D6470 (PspDetachSession.c)
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     PoEnergyEstimationEnabled @ 0x14044A480 (PoEnergyEstimationEnabled.c)
 *     PspLockProcessExclusive @ 0x14045AFE0 (PspLockProcessExclusive.c)
 *     KeQuerySystemTimeUnsafe @ 0x140478190 (KeQuerySystemTimeUnsafe.c)
 *     MmGetDefaultPagePriority @ 0x14047DF60 (MmGetDefaultPagePriority.c)
 *     KeQueryMaximumGroupCount @ 0x14047F9E0 (KeQueryMaximumGroupCount.c)
 *     KeQueryActiveGroupCount @ 0x1404807A0 (KeQueryActiveGroupCount.c)
 *     KeSelectGroupFromNode @ 0x140485074 (KeSelectGroupFromNode.c)
 *     MmSetMemoryPriorityProcess @ 0x140489910 (MmSetMemoryPriorityProcess.c)
 *     PspWow64PickBestNtdll @ 0x140496B38 (PspWow64PickBestNtdll.c)
 *     KeIsUserCetAllowed @ 0x140497BD0 (KeIsUserCetAllowed.c)
 *     KeIsCoreIsolationMitigationPolicyEnforceable @ 0x14049D928 (KeIsCoreIsolationMitigationPolicyEnforceable.c)
 *     KeCopyXfdMaskToPeb @ 0x1404A7F00 (KeCopyXfdMaskToPeb.c)
 *     KeSizeOfKProcessExtension @ 0x1404AEB80 (KeSizeOfKProcessExtension.c)
 *     KeSecureProcess @ 0x1405B454C (KeSecureProcess.c)
 *     KeSetCpuSetsProcess @ 0x1405BBDD4 (KeSetCpuSetsProcess.c)
 *     KeSetExpectedConcurrencyCountProcess @ 0x1405BC648 (KeSetExpectedConcurrencyCountProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PspApplyIFEOPerfOptions @ 0x140766EB8 (PspApplyIFEOPerfOptions.c)
 *     PspReadIFEOPerfOptions @ 0x14076741C (PspReadIFEOPerfOptions.c)
 *     MmGetSectionStrongImageReference @ 0x1407EB59C (MmGetSectionStrongImageReference.c)
 *     PspMapSiloSharedDataView @ 0x14083B6C0 (PspMapSiloSharedDataView.c)
 *     PspSetupUserProcessAddressSpace @ 0x14083C23C (PspSetupUserProcessAddressSpace.c)
 *     PspUpdatePebForAffinityChange @ 0x14083C4B8 (PspUpdatePebForAffinityChange.c)
 *     PspPrepareSystemDllInitBlock @ 0x14083C848 (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x14083CB84 (PsWow64GetProcessNtdllType.c)
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
 *     ExCreateHandleEx @ 0x140851070 (ExCreateHandleEx.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     MmGetSectionInformation @ 0x1408B6660 (MmGetSectionInformation.c)
 *     PspSetProcessPriorityClass @ 0x1408BA140 (PspSetProcessPriorityClass.c)
 *     PspRundownSingleProcess @ 0x1408E0448 (PspRundownSingleProcess.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     MmMapApiSetView @ 0x1408FA238 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x1408FA99C (MmCreatePeb.c)
 *     MmInitializeProcessAddressSpace @ 0x140904AC8 (MmInitializeProcessAddressSpace.c)
 *     ObInitProcess @ 0x1409716EC (ObInitProcess.c)
 *     PspUpdateCreateInfo @ 0x1409BB25C (PspUpdateCreateInfo.c)
 *     KeInitializeProcess @ 0x1409BE04C (KeInitializeProcess.c)
 *     PspInheritMitigationOptions @ 0x1409BE52C (PspInheritMitigationOptions.c)
 *     RtlReleasePrivilege @ 0x1409BE610 (RtlReleasePrivilege.c)
 *     PsQueryProcessAttributes @ 0x1409BE6C0 (PsQueryProcessAttributes.c)
 *     ObRetagReferences @ 0x1409C0A60 (ObRetagReferences.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x1409C0AB8 (PspReadIFEOMitigationAuditOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x1409C0B3C (PspReadIFEOMitigationOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1409C0C60 (RtlQueryImageFileKeyOption.c)
 *     PspComputeQuantum @ 0x1409C120C (PspComputeQuantum.c)
 *     PspInheritMitigationAuditOptions @ 0x1409C1274 (PspInheritMitigationAuditOptions.c)
 *     PsGetSessionSchedulingGroupByProcess @ 0x1409C13A8 (PsGetSessionSchedulingGroupByProcess.c)
 *     SmProcessCreateNotification @ 0x1409C13D4 (SmProcessCreateNotification.c)
 *     PspReadIFEONodeOptions @ 0x1409C1F1C (PspReadIFEONodeOptions.c)
 *     MmSecureVirtualMemory @ 0x1409F0050 (MmSecureVirtualMemory.c)
 *     SeQuerySessionIdToken @ 0x1409FF180 (SeQuerySessionIdToken.c)
 *     PspSelectMachineForProcess @ 0x140A09390 (PspSelectMachineForProcess.c)
 *     PspInitializeProcessSecurity @ 0x140A0C7EC (PspInitializeProcessSecurity.c)
 *     RtlAcquirePrivilege @ 0x140A280B4 (RtlAcquirePrivilege.c)
 *     SeIsTokenAssignableToProcess @ 0x140A2AC34 (SeIsTokenAssignableToProcess.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x140A2B408 (RtlpOpenImageFileOptionsKeyEx.c)
 *     PspInitializeFullProcessImageName @ 0x140A2F378 (PspInitializeFullProcessImageName.c)
 *     PspAssignProcessQuotaBlock @ 0x140A30EE8 (PspAssignProcessQuotaBlock.c)
 *     PspSetupReservedUserMappings @ 0x140A4428C (PspSetupReservedUserMappings.c)
 *     MmInitializeHandBuiltProcess @ 0x140A47A3C (MmInitializeHandBuiltProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140A47B88 (MmCreateProcessAddressSpace.c)
 *     PspSetProcessAffinitySafe @ 0x140A48864 (PspSetProcessAffinitySafe.c)
 *     PspApplyMitigationOptions @ 0x140A521AC (PspApplyMitigationOptions.c)
 *     PoEnergyContextInitialize @ 0x140A537B4 (PoEnergyContextInitialize.c)
 *     PspInheritQuota @ 0x140A546D4 (PspInheritQuota.c)
 *     PspHardenMitigationOptions @ 0x140A5F510 (PspHardenMitigationOptions.c)
 *     PspSelectNodeForProcess @ 0x140A743A0 (PspSelectNodeForProcess.c)
 *     PspIsSessionLeaderProcess @ 0x140A753A8 (PspIsSessionLeaderProcess.c)
 *     KeInitializeProcessUserCetLogging @ 0x140A814A8 (KeInitializeProcessUserCetLogging.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140AA4AB4 (MmInitializeHandBuiltProcess2.c)
 *     PspAttachSession @ 0x140AC8888 (PspAttachSession.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspAllocateProcess(
        __int64 a1,
        char a2,
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
  __int64 v16; // r12
  __int64 v17; // r15
  unsigned int v18; // ebx
  int v19; // ecx
  unsigned int v20; // r14d
  USHORT MaximumGroupCount; // ax
  unsigned int v22; // r13d
  int v23; // ecx
  unsigned int v24; // r12d
  __int64 result; // rax
  __int64 v26; // rdx
  char *v27; // r14
  int v28; // r8d
  char v29; // al
  __int64 Flink; // rax
  int v31; // eax
  __int64 v32; // r12
  int v33; // edx
  int DefaultPagePriority; // r8d
  PVOID v35; // rdx
  PVOID v36; // rcx
  int SectionInformation; // edi
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // eax
  void *v41; // rcx
  int v42; // r12d
  __int16 v43; // r11
  ULONG v44; // r10d
  KPROCESSOR_MODE v45; // al
  __int64 v46; // rax
  __int64 v47; // r12
  ULONG v48; // edi
  char v49; // r13
  BOOLEAN v50; // al
  unsigned int v51; // ecx
  int v52; // eax
  __int64 v53; // rdx
  int v54; // edx
  int v55; // r9d
  int v56; // r8d
  _KSCHEDULING_GROUP *SessionSchedulingGroupByProcess; // rax
  struct _KPROCESS *v58; // rcx
  char v59; // r8
  volatile _KAFFINITY_EX *v60; // r9
  _DWORD *v61; // rdi
  int inited; // eax
  __int64 v63; // r9
  char v64; // al
  int v65; // r12d
  __int16 v66; // r11
  __int64 v67; // r8
  __int64 v68; // rdx
  int v69; // ecx
  ULONG_PTR v70; // r12
  _DWORD *v71; // rax
  _DWORD *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  struct _KTHREAD *v75; // r13
  __int64 v76; // rdi
  _QWORD *v77; // rcx
  __int64 v78; // r9
  int v79; // r8d
  __int64 v80; // rcx
  _DWORD *v81; // rcx
  __int64 v82; // rax
  int v83; // ecx
  PVOID v84; // r12
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rax
  unsigned __int8 v88; // r12
  unsigned __int16 v89; // di
  unsigned __int16 Size; // cx
  unsigned __int16 Count; // r13
  unsigned __int16 v92; // r12
  unsigned __int64 v93; // rcx
  __int128 v94; // xmm2
  __int64 v95; // xmm3_8
  int v96; // r10d
  unsigned __int64 v97; // xmm0_8
  __int128 v98; // xmm1
  unsigned __int64 v99; // r8
  char v100; // cl
  unsigned __int64 v101; // r9
  __int64 v102; // rax
  __int64 v103; // rdx
  int v104; // ecx
  int ImageFileKeyOption; // eax
  bool v106; // sf
  char *v107; // rcx
  void *v108; // rax
  int IsSessionLeaderProcess; // eax
  __int64 v110; // rcx
  volatile signed __int32 *v111; // rdx
  __int64 v112; // rax
  int v113; // eax
  int v114; // edi
  __int64 Pool2; // r10
  int v116; // eax
  _QWORD *v117; // rax
  unsigned __int64 v118; // r8
  unsigned __int64 v119; // r8
  __int64 v120; // r12
  void *v121; // rax
  size_t v122; // r8
  __int64 v123; // r12
  _OWORD *v124; // r13
  unsigned __int64 **v125; // r13
  __int16 v126; // cx
  char v127; // al
  unsigned __int64 *v128; // r13
  int ProcessNtdllType; // eax
  __int64 v130; // rcx
  __int64 v131; // [rsp+20h] [rbp-818h]
  int v132; // [rsp+30h] [rbp-808h]
  char v134[4]; // [rsp+78h] [rbp-7C0h] BYREF
  unsigned __int16 v135; // [rsp+7Ch] [rbp-7BCh] BYREF
  int v136; // [rsp+80h] [rbp-7B8h]
  char v137[4]; // [rsp+84h] [rbp-7B4h] BYREF
  __int64 v138; // [rsp+88h] [rbp-7B0h]
  PVOID Object; // [rsp+90h] [rbp-7A8h] BYREF
  __int16 v140; // [rsp+98h] [rbp-7A0h]
  int v141; // [rsp+9Ch] [rbp-79Ch]
  __int64 v142; // [rsp+A0h] [rbp-798h] BYREF
  __int64 v143; // [rsp+A8h] [rbp-790h] BYREF
  unsigned int v144; // [rsp+B0h] [rbp-788h]
  __int16 v145; // [rsp+B4h] [rbp-784h]
  int v146; // [rsp+B8h] [rbp-780h]
  int v147; // [rsp+BCh] [rbp-77Ch]
  int v148; // [rsp+C0h] [rbp-778h] BYREF
  int v149; // [rsp+C4h] [rbp-774h]
  PVOID TokenInformation; // [rsp+C8h] [rbp-770h] BYREF
  int v151; // [rsp+D0h] [rbp-768h]
  int v152; // [rsp+D4h] [rbp-764h]
  USHORT v153; // [rsp+D8h] [rbp-760h]
  int v154; // [rsp+DCh] [rbp-75Ch]
  ULONG SessionId; // [rsp+E0h] [rbp-758h] BYREF
  _KPROCESS *Process; // [rsp+E8h] [rbp-750h]
  __int64 v157; // [rsp+F0h] [rbp-748h]
  PVOID v158; // [rsp+F8h] [rbp-740h]
  int v159; // [rsp+100h] [rbp-738h]
  int v160; // [rsp+104h] [rbp-734h]
  int v161; // [rsp+108h] [rbp-730h]
  __int64 v162; // [rsp+110h] [rbp-728h]
  unsigned int v163; // [rsp+118h] [rbp-720h]
  __int64 v164; // [rsp+120h] [rbp-718h]
  int v165; // [rsp+128h] [rbp-710h]
  int v166; // [rsp+12Ch] [rbp-70Ch]
  PACCESS_TOKEN Token; // [rsp+130h] [rbp-708h]
  int v168; // [rsp+138h] [rbp-700h]
  PVOID v169; // [rsp+140h] [rbp-6F8h]
  unsigned __int64 v170; // [rsp+148h] [rbp-6F0h]
  struct _KTHREAD *CurrentThread; // [rsp+150h] [rbp-6E8h]
  unsigned int v172; // [rsp+158h] [rbp-6E0h]
  int v173; // [rsp+15Ch] [rbp-6DCh] BYREF
  unsigned int v174; // [rsp+160h] [rbp-6D8h]
  HANDLE Handle; // [rsp+168h] [rbp-6D0h] BYREF
  HANDLE KeyHandle; // [rsp+170h] [rbp-6C8h] BYREF
  __int64 v177; // [rsp+178h] [rbp-6C0h] BYREF
  PVOID StatePointer; // [rsp+180h] [rbp-6B8h] BYREF
  PVOID P; // [rsp+188h] [rbp-6B0h]
  __int128 v180; // [rsp+190h] [rbp-6A8h] BYREF
  __int64 v181; // [rsp+1A0h] [rbp-698h]
  __int64 v182; // [rsp+1A8h] [rbp-690h]
  __int64 v183; // [rsp+1B8h] [rbp-680h]
  __int64 v184; // [rsp+1C0h] [rbp-678h]
  __int64 v185; // [rsp+1D0h] [rbp-668h] BYREF
  __int64 v186; // [rsp+1D8h] [rbp-660h]
  __int64 v187; // [rsp+1E0h] [rbp-658h]
  _QWORD *v188; // [rsp+1E8h] [rbp-650h]
  __int128 v189; // [rsp+1F0h] [rbp-648h] BYREF
  __int128 v190; // [rsp+200h] [rbp-638h] BYREF
  OBJECT_ATTRIBUTES v191; // [rsp+210h] [rbp-628h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+240h] [rbp-5F8h] BYREF
  __int128 v193; // [rsp+270h] [rbp-5C8h] BYREF
  unsigned __int64 v194; // [rsp+280h] [rbp-5B8h]
  __int128 v195; // [rsp+290h] [rbp-5A8h] BYREF
  __int64 v196; // [rsp+2A0h] [rbp-598h]
  __int128 v197; // [rsp+2B0h] [rbp-588h] BYREF
  __int64 v198; // [rsp+2C0h] [rbp-578h]
  __int128 v199; // [rsp+2D0h] [rbp-568h] BYREF
  __int64 v200; // [rsp+2E0h] [rbp-558h]
  __int128 v201; // [rsp+2F0h] [rbp-548h]
  unsigned __int64 v202; // [rsp+300h] [rbp-538h]
  __int128 v203; // [rsp+310h] [rbp-528h]
  __int64 v204; // [rsp+320h] [rbp-518h]
  __int128 v205; // [rsp+330h] [rbp-508h] BYREF
  __int64 v206; // [rsp+340h] [rbp-4F8h]
  __int128 v207; // [rsp+350h] [rbp-4E8h] BYREF
  __int64 v208; // [rsp+360h] [rbp-4D8h]
  _BYTE v209[36]; // [rsp+370h] [rbp-4C8h] BYREF
  unsigned __int16 v210; // [rsp+394h] [rbp-4A4h]
  unsigned __int16 v211; // [rsp+396h] [rbp-4A2h]
  __int16 v212; // [rsp+39Eh] [rbp-49Ah]
  char v213; // [rsp+3A3h] [rbp-495h]
  int v214; // [rsp+3B0h] [rbp-488h]
  __int128 v215; // [rsp+3C0h] [rbp-478h] BYREF
  unsigned __int64 v216; // [rsp+3D0h] [rbp-468h]
  __int128 v217; // [rsp+3D8h] [rbp-460h] BYREF
  __int64 v218; // [rsp+3E8h] [rbp-450h]
  __int128 v219; // [rsp+3F0h] [rbp-448h]
  unsigned __int64 v220; // [rsp+400h] [rbp-438h]
  __int128 v221; // [rsp+408h] [rbp-430h] BYREF
  __int128 v222; // [rsp+418h] [rbp-420h]
  __int64 v223; // [rsp+428h] [rbp-410h]
  _OWORD v224[3]; // [rsp+430h] [rbp-408h] BYREF
  struct _KAFFINITY_EX v225; // [rsp+460h] [rbp-3D8h] BYREF
  _DWORD v226[136]; // [rsp+570h] [rbp-2C8h] BYREF
  ULONG Privilege[8]; // [rsp+790h] [rbp-A8h] BYREF
  _OWORD v228[4]; // [rsp+7B0h] [rbp-88h] BYREF

  v162 = a3;
  v16 = a1;
  v138 = a1;
  v183 = a1;
  v158 = a7;
  Token = a8;
  v17 = a11;
  v184 = a11;
  v169 = a13;
  v187 = a14;
  v188 = a15;
  v173 = 0;
  memset(v224, 0, sizeof(v224));
  v226[131] = 0;
  memset(&v191, 0, 44);
  v154 = 0;
  v190 = 0LL;
  Handle = 0LL;
  memset_0(&v225.8, 0, sizeof(v225.8));
  v18 = 0;
  v148 = 0;
  v215 = 0LL;
  v216 = 0LL;
  v217 = 0LL;
  v218 = 0LL;
  v137[0] = 0;
  memset(&ObjectAttributes, 0, 44);
  KeyHandle = 0LL;
  Object = 0LL;
  v145 = 0;
  v142 = 0LL;
  memset_0(v209, 0, 0x48uLL);
  LODWORD(TokenInformation) = 0;
  v185 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v143 = 0LL;
  P = 0LL;
  v144 = 0;
  v141 = 0;
  v152 = 0;
  v151 = 0;
  v147 = 34404;
  v168 = 0;
  v161 = 0;
  v160 = 0;
  v149 = 0;
  v182 = 0LL;
  v159 = 0;
  v181 = 0LL;
  v140 = 0;
  v157 = 0LL;
  memset_0(v226, 0, 0x218uLL);
  v136 = a9;
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
    v18 = v16 != 0 ? 4 : 1;
  }
  if ( (v18 & 4) != 0 )
  {
    if ( a12 && (v18 & 2) == 0 )
      return 3221225520LL;
    if ( (*(_DWORD *)(v16 + 1532) & 0x1000) != 0 )
      return 3221225485LL;
  }
  else if ( (a9 & 0x1000) != 0 )
  {
    return 3221225520LL;
  }
  v164 = v16 & -(__int64)((a9 & 0x100) != 0);
  if ( v17 && (*(_DWORD *)(v17 + 8) & 0x2000LL) != 0 )
  {
    if ( (v16 & -(__int64)((a9 & 0x100) != 0)) == 0 )
    {
      v143 = KeNodeBlock[*(unsigned __int16 *)(v17 + 170)];
      v164 = 0LL;
      goto LABEL_8;
    }
    return 3221225520LL;
  }
  if ( v16 )
  {
    v164 = v16 & -(__int64)((a9 & 0x100) != 0);
    if ( (*(_DWORD *)(v16 + 496) & 0x200000) != 0 )
    {
      v164 = v16;
      HIDWORD(v142) = 0x200000;
    }
  }
LABEL_8:
  if ( v17 && (*(_DWORD *)(v17 + 8) & 0x40000) != 0 )
  {
    v18 |= 0x10000u;
    *(_BYTE *)(v17 + 16) &= ~0x10u;
  }
  v221 = 0LL;
  v222 = 0LL;
  v223 = 0LL;
  StatePointer = 0LL;
  v19 = 2112;
  v163 = 0;
  v186 = 0LL;
  if ( !PsDisableDiskCounters )
  {
    v19 = 2152;
    v18 |= 0x8000u;
    v186 = 2112LL;
  }
  v174 = (v19 + 7) & 0xFFFFFFF8;
  v20 = v174 + 16;
  if ( PoEnergyEstimationEnabled() )
  {
    v163 = (v174 + 23) & 0xFFFFFFF8;
    v20 = v163 + 488;
    v18 |= 0x20000u;
    v16 = v138;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v153 = MaximumGroupCount;
  v22 = 0;
  if ( MaximumGroupCount > 1u )
  {
    v22 = (v20 + 7) & 0xFFFFFFF8;
    v20 = 16 * MaximumGroupCount + v22;
  }
  v23 = 0;
  HIDWORD(TokenInformation) = 0;
  if ( (v18 & 0x10002) == 0 )
  {
    if ( v16 )
      v23 = 4;
    HIDWORD(TokenInformation) = v23;
  }
  v172 = (v20 + 7) & 0xFFFFFFF8;
  v24 = KeSizeOfKProcessExtension(v23) + v172;
  result = ObCreateObjectEx(a2, PsProcessType, v162, a2, v131, v24, 0, v24, &Object, 0LL);
  if ( (int)result >= 0 )
  {
    v27 = (char *)Object;
    ObRetagReferences(Object, v26, 1917023056LL);
    memset_0(v27, 0, v24);
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
    if ( (v18 & 2) != 0 )
      *((_DWORD *)v27 + 383) |= 1u;
    v28 = v136;
    LODWORD(v162) = 32;
    if ( (v136 & 0x8000) != 0 )
      *((_DWORD *)v27 + 383) |= 0x20u;
    if ( (v28 & 0x80000) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)v27 + 503, 4u);
      LOWORD(v28) = a9;
      v136 = a9;
      v27 = (char *)Object;
    }
    if ( v22 )
    {
      *((_DWORD *)v27 + 383) |= 0x80u;
      v107 = &v27[v22];
      *((_QWORD *)v27 + 217) = v107;
      *((_QWORD *)v27 + 218) = &v107[8 * v153];
    }
    v29 = a10;
    if ( (a10 & 1) != 0 )
      *((_DWORD *)v27 + 383) |= 0x1000u;
    if ( (v29 & 4) != 0 )
      *((_DWORD *)v27 + 383) |= 0x800000u;
    if ( (v29 & 8) != 0 )
      *((_DWORD *)v27 + 383) |= 0x8000000u;
    if ( (v29 & 0x10) != 0 )
      *((_DWORD *)v27 + 383) |= 0x40000000u;
    Flink = (__int64)Process[1].Header.WaitListHead.Flink | 2;
    if ( (v28 & 0x200) != 0 )
      Flink = (__int64)Process[1].Header.WaitListHead.Flink;
    *((_QWORD *)v27 + 91) = Flink;
    if ( (v18 & 0x8000) != 0 )
      *((_QWORD *)v27 + 199) = &v27[v186];
    *((_QWORD *)v27 + 254) = &v27[v174];
    if ( (v18 & 0x20000) != 0 )
    {
      *((_QWORD *)v27 + 205) = &v27[v163];
      PoEnergyContextInitialize();
    }
    if ( v17 && (*(_DWORD *)(v17 + 8) & 0x200LL) != 0 )
    {
      v31 = *(_DWORD *)(v17 + 316);
      v32 = v138;
    }
    else
    {
      v32 = v138;
      if ( v138 )
        v31 = *(_DWORD *)(v138 + 904);
      else
        v31 = 5;
    }
    *((_DWORD *)v27 + 226) = v31;
    *((_DWORD *)v27 + 341) = 259;
    if ( v32 )
    {
      v33 = (*(_DWORD *)(v32 + 500) >> 27) & 7;
      DefaultPagePriority = (*(_DWORD *)(v32 + 496) >> 12) & 7;
      *((_QWORD *)v27 + 90) = *(_QWORD *)(v32 + 464);
    }
    else
    {
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    *((_DWORD *)v27 + 125) = *((_DWORD *)v27 + 125) & 0xC7FFFFFF | (v33 << 27);
    *((_DWORD *)v27 + 124) = (DefaultPagePriority << 12) | *((_DWORD *)v27 + 124) & 0xFFFF8FFF;
    if ( v169 )
    {
      if ( !PsReferencePartitionSafe((__int64)v169) )
      {
        SectionInformation = -1073740640;
        goto LABEL_198;
      }
      v35 = v169;
    }
    else
    {
      v35 = PspSystemPartition;
      v169 = PspSystemPartition;
      if ( _InterlockedIncrement64((volatile signed __int64 *)PspSystemPartition + 5) <= 1 )
        __fastfail(0xEu);
      v136 = a9;
      v27 = (char *)Object;
    }
    *((_QWORD *)v27 + 235) = v35;
    v36 = v158;
    if ( v158 )
    {
      PsReferenceSiloContext(v158);
      v36 = v158;
    }
    if ( (v18 & 4) != 0 )
    {
      v147 = *(unsigned __int16 *)(v32 + 1772);
      if ( (v18 & 2) == 0 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v32 + 488)) )
        {
          v108 = *(void **)(v32 + 680);
          v158 = v108;
          if ( v108 )
            PsReferenceSiloContext(v108);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v32 + 488));
        }
        v36 = v158;
        if ( !v158 )
        {
          SectionInformation = -1073741558;
          goto LABEL_198;
        }
        v112 = *(_QWORD *)(v32 + 784);
        if ( v112 )
        {
          v18 |= 0x40u;
          v168 = *(_DWORD *)(v112 + 8);
        }
        v113 = 0;
        if ( (*(_DWORD *)(v32 + 500) & 0x20000) != 0 )
          v113 = 0x20000;
        v141 = v113;
      }
    }
    *((_QWORD *)v27 + 85) = v36;
    if ( !v17 || (v18 & 2) != 0 )
    {
      if ( v36 )
      {
        SectionInformation = MmGetSectionInformation((__int64)v36, 4, (__int64)v209);
        if ( SectionInformation < 0 )
          goto LABEL_198;
        v18 = v18 & 0xF82B9FFF | ((v213 & 4 | (4 * (v213 & 2 | (32 * (v214 & 1 | (2 * (v214 & 0xFA))))))) << 11);
        v140 = v212;
        v152 = v211;
        v151 = v210;
        if ( (v18 & 4) != 0 )
        {
          v141 |= 8u;
          v18 |= 0x18u;
        }
      }
    }
    else
    {
      *((_QWORD *)v27 + 190) = *(_QWORD *)(v17 + 424);
      SectionInformation = MmGetSectionInformation((__int64)v36, 4, v17 + 56);
      if ( SectionInformation < 0 )
        goto LABEL_198;
      v18 |= (*(_BYTE *)(v17 + 107) & 4 | (4
                                         * (*(_BYTE *)(v17 + 107) & 2 | (32
                                                                       * (*(_DWORD *)(v17 + 120) & 1 | (2 * (*(_DWORD *)(v17 + 120) & 0xFA))))))) << 11;
      v152 = *(unsigned __int16 *)(v17 + 94);
      v151 = *(unsigned __int16 *)(v17 + 92);
      if ( (*(_WORD *)(v17 + 100) & *(_WORD *)(v17 + 18)) != 0 )
      {
        SectionInformation = -1073741701;
        v83 = 3;
        goto LABEL_197;
      }
      if ( (v18 & 4) == 0 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(v17 + 184), 0x72437350u);
        *((_QWORD *)v27 + 102) = *(_QWORD *)(v17 + 184);
        v140 = *(_WORD *)(v17 + 102);
        v40 = RtlpOpenImageFileOptionsKeyEx(v17 + 240, v38, v39, v17 + 200);
        if ( v40 < 0 )
        {
          if ( v40 == -1073741772 )
            *(_BYTE *)(v17 + 16) |= 0x40u;
          *(_QWORD *)(v17 + 200) = 0LL;
        }
        SectionInformation = PspSelectMachineForProcess(v138, v17, &v148);
        if ( SectionInformation < 0 )
        {
          v83 = 4;
LABEL_197:
          PspUpdateCreateInfo(v83, v17, 0LL);
          goto LABEL_198;
        }
        v147 = (unsigned __int16)v148;
        if ( BYTE2(v148) )
          v18 |= 0x40u;
        if ( HIBYTE(v148) )
          v141 |= 0x20000u;
        v41 = *(void **)(v17 + 200);
        if ( v41 )
        {
          if ( *(char *)(v17 + 16) >= 0 )
          {
            if ( (ImageFileKeyOption = RtlQueryImageFileKeyOption(v41, 2, (__int64)&v142),
                  ImageFileKeyOption == -2147483643)
              || ImageFileKeyOption >= 0 && (_DWORD)v142 == 2 && v145
              || (v165 = 0, (int)RtlQueryImageFileKeyOption(*(HANDLE *)(v17 + 200), 4, 0LL) >= 0) && v165 == 1 )
            {
              SectionInformation = -1073741767;
              v83 = 5;
              goto LABEL_197;
            }
          }
          v146 = 0;
          v42 = v136;
          if ( (int)RtlQueryImageFileKeyOption(*(HANDLE *)(v17 + 200), 4, 0LL) >= 0 )
          {
            if ( v146 )
            {
              v42 = v136 | 0x10;
              v136 = v42;
              a9 = v42;
              if ( (v18 & 0x40) == 0 )
              {
                v191.Length = 48;
                v191.RootDirectory = *(HANDLE *)(v17 + 200);
                v191.Attributes = 576;
                v191.ObjectName = (PUNICODE_STRING)&PspLargePageDLLKeyName;
                *(_OWORD *)&v191.SecurityDescriptor = 0LL;
                if ( ZwOpenKey(&Handle, 1u, &v191) >= 0 )
                {
                  v146 = 0;
                  if ( (int)RtlQueryImageFileKeyOption(Handle, 4, 0LL) >= 0 && v146 )
                  {
                    v42 |= 0x20u;
                    v136 = v42;
                    a9 = v42;
                  }
                  ObCloseHandle(Handle, 0);
                }
              }
            }
          }
          if ( !v164 )
            PspReadIFEONodeOptions(v27, *(_QWORD *)(v17 + 200), &v143);
          v166 = 0;
          if ( (int)RtlQueryImageFileKeyOption(*(HANDLE *)(v17 + 200), 4, 0LL) >= 0 && v166 )
            HIDWORD(v142) |= 0x40u;
          if ( (unsigned int)RtlQueryImageFileKeyOption(*(HANDLE *)(v17 + 200), 0, (__int64)&v142) == -2147483643 )
          {
            v114 = v142;
            if ( (unsigned int)v142 <= 0x100 && (v142 & 7) == 0 )
            {
              P = (PVOID)ExAllocatePool2(0x40uLL);
              if ( !P )
                goto LABEL_364;
              if ( (int)RtlQueryImageFileKeyOption(*(HANDLE *)(v17 + 200), v114, (__int64)&v142) >= 0 && (v142 & 7) == 0 )
              {
                v18 |= 0x200000u;
                v144 = (unsigned int)v142 >> 3;
              }
            }
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = *(HANDLE *)(v17 + 200);
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
          {
            PspReadIFEOPerfOptions(KeyHandle, (__int64)&v221);
            ObCloseHandle(KeyHandle, 0);
          }
          if ( (int)RtlQueryImageFileKeyOption(*(HANDLE *)(v17 + 200), 4, 0LL) >= 0 && v154 == 2 )
          {
            _InterlockedOr((volatile signed __int32 *)v27 + 503, 4u);
            v42 = a9;
            v136 = a9;
            v27 = (char *)Object;
          }
          if ( (v42 & 0x80000) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)v27 + 503, 4u);
            LOWORD(v42) = a9;
            v136 = a9;
            v27 = (char *)Object;
          }
LABEL_81:
          if ( (v18 & 0x40) == 0 )
          {
            v43 = v147;
            goto LABEL_83;
          }
          Pool2 = ExAllocatePool2(0x40uLL);
          *((_QWORD *)v27 + 98) = Pool2;
          if ( Pool2 )
          {
            v116 = v168;
            v43 = v147;
            if ( !v168 )
              v116 = PspWow64PickBestNtdll(v17);
            *(_DWORD *)(Pool2 + 8) = v116;
            v117 = (_QWORD *)*((_QWORD *)v27 + 98);
            if ( v117 )
              *v117 = 1LL;
LABEL_83:
            *((_WORD *)v27 + 886) = v43;
            SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
            if ( SectionInformation < 0 )
              goto LABEL_198;
            v44 = 0;
            v45 = a2;
            if ( a2 )
            {
              if ( v17 && (*(_DWORD *)(v17 + 8) & 0x100LL) != 0 && *(_BYTE *)(v17 + 2) == 4 )
              {
                Privilege[0] = 14;
                v44 = 1;
              }
              v104 = a12;
              if ( a12 )
                Privilege[v44++] = 3;
              if ( (v42 & 0x30) != 0 )
                Privilege[v44++] = 4;
              if ( (v42 & 0x80u) != 0 )
              {
                IsSessionLeaderProcess = PspIsSessionLeaderProcess(Process);
                v104 = a12;
                if ( !IsSessionLeaderProcess )
                  Privilege[v44++] = 10;
              }
              if ( (v42 & 0x8400) != 0 )
                Privilege[v44++] = 7;
              if ( v44 )
              {
                v106 = RtlAcquirePrivilege(Privilege, v44, v104 != 0, &StatePointer) < 0;
                v45 = a2;
                if ( !v106 )
                  v18 |= 0x400u;
              }
              else
              {
                v45 = a2;
              }
            }
            if ( (v42 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v45) )
              goto LABEL_285;
            v135 = -1;
            *(_QWORD *)&v225.Count = 2097153LL;
            memset_0(&v225.8, 0, sizeof(v225.8));
            if ( v164 )
            {
              KeQueryAffinityProcess(v164, &v225, 0LL, v228, &v135);
              v46 = KeNodeBlock[*((unsigned __int16 *)v228 + v135)];
              goto LABEL_88;
            }
            if ( v143 )
            {
              v110 = v143;
            }
            else
            {
              if ( !v138 )
              {
                v89 = 0;
                v135 = 0;
                KeAddProcessorAffinityEx(&v225.Count, 0);
LABEL_230:
                Size = v225.Size;
                Count = v225.Size;
                if ( KeActiveProcessors.Count <= v225.Size )
                  Count = KeActiveProcessors.Count;
                v225.Count = Count;
                v225.Reserved = 0;
                v92 = 0;
                if ( Count )
                {
                  memmove(&v225.8, &KeActiveProcessors.8, 8LL * Count);
                  do
                    ++v92;
                  while ( v92 < Count );
                  Size = v225.Size;
                }
                if ( v92 < Size )
                {
                  do
                    v225.Bitmap[v92++] = 0LL;
                  while ( v92 < v225.Size );
                }
                if ( v143 )
                {
LABEL_89:
                  *((_DWORD *)v27 + 125) |= v141;
                  *((_DWORD *)v27 + 124) |= HIDWORD(v142);
                  v47 = v138;
                  if ( v138 )
                  {
                    v177 = 0LL;
                    v48 = 0;
                    SessionId = 0;
                    v18 &= ~0x20u;
                    v49 = 0;
                    v134[0] = 0;
                    if ( a12 )
                    {
                      v50 = SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, a2);
                      v51 = v18 & 0xFFFFFDFF;
                      v18 |= 0x200u;
                      if ( !v50 )
                        v18 = v51;
                      SectionInformation = SeIsTokenAssignableToProcess(Token, v134);
                      if ( SectionInformation < 0 )
                        goto LABEL_177;
                      if ( !v134[0] && (v18 & 0x200) == 0 )
                        goto LABEL_285;
                      SectionInformation = SeQuerySessionIdToken(Token, &SessionId);
                      if ( SectionInformation < 0 )
                        goto LABEL_177;
                      v52 = PsGetSessionIdEx((__int64)Process);
                      v48 = SessionId;
                      if ( SessionId != v52 )
                      {
                        if ( (v18 & 0x200) == 0 )
                        {
LABEL_285:
                          SectionInformation = -1073741727;
                          goto LABEL_177;
                        }
                        if ( (v136 & 0x80u) != 0 )
                        {
                          SectionInformation = -1073741811;
                          goto LABEL_177;
                        }
                        v18 |= 0x20u;
                      }
                      v49 = v134[0];
                    }
                    else if ( (v18 & 4) != 0 )
                    {
                      v48 = PsGetSessionIdEx(v138);
                      SessionId = v48;
                      v18 = v18 & 0xFFFFFFDF | ((unsigned int)PsGetSessionIdEx((__int64)Process) != v48 ? 0x20 : 0);
                    }
                    if ( (v18 & 0x20) != 0 )
                    {
                      SectionInformation = PspAttachSession(v48, v224, &v177);
                      if ( SectionInformation < 0 )
                      {
                        LOWORD(v18) = v18 & 0xFFDF;
                        goto LABEL_177;
                      }
                      *((_DWORD *)v27 + 124) |= 0x80u;
                    }
                    if ( !a12 || v49 )
                    {
                      v47 = v138;
                      v53 = v138;
                      if ( v49 )
                        v53 = (__int64)Process;
                      PspInheritQuota(v27, v53);
                    }
                    else
                    {
                      SectionInformation = PspAssignProcessQuotaBlock(0LL, v27, Token);
                      if ( SectionInformation < 0 )
                      {
                        if ( (v18 & 0x20) != 0 )
                          PspDetachSession(v177, (__int64)v224);
                        goto LABEL_177;
                      }
                      v47 = v138;
                    }
                    v55 = BYTE4(v221) & 1;
                    v56 = PspMaximumWorkingSet;
                    if ( (BYTE4(v221) & 1) != 0 )
                      v56 = DWORD2(v222);
                    if ( (v136 & 0x400000) != 0 )
                      v55 |= 0x10u;
                    v18 ^= (v18 ^ ((unsigned __int8)MmCreateProcessAddressSpace(
                                                      (_DWORD)v169,
                                                      v54,
                                                      v56,
                                                      v55,
                                                      (unsigned int)*(unsigned __int16 *)v143 + 1,
                                                      (__int64)v27) << 11)) & 0x800;
                    if ( (v18 & 0x20) != 0 )
                      PspDetachSession(v177, (__int64)v224);
                    if ( (v18 & 0x800) == 0 )
                      goto LABEL_330;
                  }
                  else
                  {
                    _InterlockedAdd(&dword_140E27E40, 1u);
                    _InterlockedAdd(&dword_140E27E44, 1u);
                    v27 = (char *)Object;
                    *((_QWORD *)Object + 95) = &PspSystemQuotaBlock;
                    v27[352] = 1;
                    SectionInformation = MmInitializeHandBuiltProcess(v27);
                    if ( SectionInformation < 0 )
                      goto LABEL_177;
                  }
                  _InterlockedOr((volatile signed __int32 *)v27 + 125, 0x40000u);
                  v27 = (char *)Object;
                  SessionSchedulingGroupByProcess = (_KSCHEDULING_GROUP *)PsGetSessionSchedulingGroupByProcess(Object);
                  SectionInformation = KeInitializeProcess(
                                         v58,
                                         8,
                                         v135,
                                         &v225,
                                         (unsigned __int16 *)v143,
                                         SessionSchedulingGroupByProcess,
                                         v132,
                                         v59,
                                         v60);
                  if ( SectionInformation < 0 )
                    goto LABEL_177;
                  if ( !v17 || (v18 & 2) != 0 )
                  {
                    v61 = 0LL;
                  }
                  else
                  {
                    v161 = *(_DWORD *)(v17 + 384);
                    v160 = *(_DWORD *)(v17 + 388);
                    v182 = *(_QWORD *)(v17 + 408);
                    v159 = *(_DWORD *)(v17 + 392);
                    v181 = *(_QWORD *)(v17 + 216);
                    v61 = *(_DWORD **)(v17 + 400);
                    v149 = *(_DWORD *)(v17 + 396);
                    v80 = *(_QWORD *)(v17 + 184);
                    if ( v80 && qword_140F04560 && (int)guard_dispatch_icall_no_overrides(v80) >= 0 )
                    {
                      if ( !v226[0] && v61 && v149 == 524 )
                      {
                        v81 = v226;
                        v82 = 4LL;
                        do
                        {
                          *(_OWORD *)v81 = *(_OWORD *)v61;
                          *((_OWORD *)v81 + 1) = *((_OWORD *)v61 + 1);
                          *((_OWORD *)v81 + 2) = *((_OWORD *)v61 + 2);
                          *((_OWORD *)v81 + 3) = *((_OWORD *)v61 + 3);
                          *((_OWORD *)v81 + 4) = *((_OWORD *)v61 + 4);
                          *((_OWORD *)v81 + 5) = *((_OWORD *)v61 + 5);
                          *((_OWORD *)v81 + 6) = *((_OWORD *)v61 + 6);
                          v81 += 32;
                          *((_OWORD *)v81 - 1) = *((_OWORD *)v61 + 7);
                          v61 += 32;
                          --v82;
                        }
                        while ( v82 );
                        *(_QWORD *)v81 = *(_QWORD *)v61;
                        v81[2] = v61[2];
                      }
                      v61 = v226;
                      v149 = 536;
                    }
                  }
                  SectionInformation = PspInitializeProcessSecurity(
                                         v47,
                                         (_DWORD)v27,
                                         (_DWORD)Token,
                                         a12,
                                         v161,
                                         (v18 >> 4) & 1,
                                         HIWORD(v18) & 1,
                                         v160,
                                         (__int64)v61,
                                         v149,
                                         v182,
                                         v159,
                                         v181,
                                         v187);
                  if ( SectionInformation < 0 )
                    goto LABEL_177;
                  v27[839] = 2;
                  if ( v47 )
                  {
                    if ( ((*(_BYTE *)(v47 + 839) - 1) & 0xFB) == 0 )
                      v27[839] = *(_BYTE *)(v47 + 839);
                    if ( v17 )
                      v78 = *(_QWORD *)(v17 + 296);
                    else
                      LODWORD(v78) = 0;
                    v79 = v17 ? *(_DWORD *)(v17 + 292) : 0;
                    inited = ObInitProcess(
                               (struct _EX_RUNDOWN_REF *)(v47 & -(__int64)((a9 & 4) != 0)),
                               (__int64)v27,
                               v79,
                               v78);
                  }
                  else
                  {
                    *((_QWORD *)v27 + 96) = Process[1].KernelTime;
                    inited = MmInitializeHandBuiltProcess2((ULONG_PTR)v27);
                  }
                  SectionInformation = inited;
                  if ( inited < 0 )
                    goto LABEL_177;
                  if ( (v221 & 7) != 0 )
                    PspApplyIFEOPerfOptions((__int64)v27, (unsigned int *)&v221, a2, v63);
                  if ( (v18 & 0x200000) != 0 )
                    KeSetCpuSetsProcess((__int64)v27, v144, (__int64)P, 1, 0);
                  if ( (BYTE4(v221) & 2) != 0 )
                    KeSetExpectedConcurrencyCountProcess((struct _KPROCESS *)v27, v223);
                  if ( v17 )
                  {
                    if ( (*(_DWORD *)(v17 + 8) & 0x100LL) != 0 )
                    {
                      LOBYTE(v63) = a2;
                      SectionInformation = PspSetProcessPriorityClass((__int64)v27, *(_BYTE *)(v17 + 2), 0LL, v63);
                      if ( SectionInformation < 0 )
                        goto LABEL_177;
                    }
                  }
                  MmSetMemoryPriorityProcess((__int64)v27, 0);
                  v64 = PspComputeQuantum(v27, 0LL);
                  v27[144] = *(_DWORD *)&PspPriorityTable[2 * (unsigned __int8)v27[839]];
                  v27[145] = v64;
                  SectionInformation = 0;
                  v144 = 0;
                  PspReadIFEOMitigationOptions(v17, &v215);
                  v193 = v215;
                  v194 = v216;
                  v195 = PspSystemMitigationOptions;
                  v196 = qword_140FC6120;
                  PspInheritMitigationOptions(&v195, &v193, (__int64)&v215);
                  PspReadIFEOMitigationAuditOptions(v17, &v217);
                  v197 = v217;
                  v198 = v218;
                  v199 = PspSystemMitigationAuditOptions;
                  v200 = qword_140FC6380;
                  PspInheritMitigationAuditOptions(&v199, &v197, &v217);
                  v65 = (WORD3(v215) & 3) << 14;
                  if ( v17 )
                  {
                    if ( (*(_DWORD *)(v17 + 8) & 0x10000LL) != 0 )
                    {
                      v94 = *(_OWORD *)(v17 + 336);
                      v95 = *(_QWORD *)(v17 + 352);
                      v219 = 0LL;
                      v220 = 0LL;
                      v96 = 0;
                      v97 = v216;
                      v98 = v215;
                      do
                      {
                        v201 = v98;
                        v202 = v97;
                        v99 = (unsigned int)(4 * v96);
                        v100 = (4 * v96) & 0x3F;
                        v101 = (unsigned __int64)(unsigned int)v99 >> 6;
                        v102 = (*((_QWORD *)&v201 + v101) >> v100) & 0xFLL;
                        v203 = v94;
                        v204 = v95;
                        v103 = (*((_QWORD *)&v203 + v101) >> v100) & 0xFLL;
                        if ( (v102 & 4) != 0 || ((*((_QWORD *)&v203 + v101) >> v100) & 3) == 0 )
                          LOBYTE(v103) = v102;
                        *((_QWORD *)&v219 + v101) &= ~(15LL << v100);
                        *((_QWORD *)&v219 + (v99 >> 6)) = *((_QWORD *)&v219 + v101) | ((unsigned __int64)(unsigned __int8)v103 << v100);
                        ++v96;
                      }
                      while ( v96 < 40 );
                      v215 = v219;
                      v216 = v220;
                    }
                    if ( (*(_DWORD *)(v17 + 8) & 0x8000000) != 0 )
                    {
                      v205 = *(_OWORD *)(v17 + 448);
                      v206 = *(_QWORD *)(v17 + 464);
                      v207 = v217;
                      v208 = v218;
                      PspInheritMitigationAuditOptions(&v207, &v205, &v217);
                    }
                  }
                  if ( (_DWORD)TokenInformation )
                    LOWORD(v65) = v65 | 4;
                  v66 = v65 | 0x40;
                  if ( (v65 & 4) == 0 )
                    v66 = v65;
                  if ( (v66 & 0x3FC0) != 0 )
                    PspHardenMitigationOptions(&v215);
                  if ( !KeIsUserCetAllowed() )
                    *((_QWORD *)&v215 + 1) = *((_QWORD *)&v215 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
                  if ( (v140 & 0x4000) == 0 || (v18 & 0x40000) == 0 )
                    LODWORD(v162) = 0;
                  if ( (v18 & 2) != 0 )
                  {
                    *(_QWORD *)&v215 = v67 & 0xFFFFFCFFFFFFFFFFuLL | 0x20000000000LL;
                    *((_QWORD *)&v215 + 1) = *((_QWORD *)&v215 + 1) & 0xCFFFFFFFFFFFFFFCuLL | 0x2000000000000002LL;
                    v118 = v67 & 0xFFFFFCFFFFFCFFFFuLL | 0x20000000000LL;
                    if ( (a10 & 2) != 0 )
                      v119 = v118 & 0xFFFFFFFFFFCDFFFFuLL | 0x220000;
                    else
                      v119 = v118 & 0xFFFFFFFFFFCEFFFFuLL | 0x110000;
                    *(_QWORD *)&v215 = v119;
                  }
                  if ( (v18 & 4) != 0 && (*(_DWORD *)(v138 + 1876) & 0x4000) == 0 )
                    *((_QWORD *)&v215 + 1) = *((_QWORD *)&v215 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
                  if ( (v18 & 0x40) != 0 )
                    *((_QWORD *)&v215 + 1) = *((_QWORD *)&v215 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
                  v216 = v216 & 0xFFFFFFFFFFFFCFFFuLL | 0x2000;
                  if ( !KeIsCoreIsolationMitigationPolicyEnforceable() )
                    v216 = v68 & 0xFFFFFFFFFCFFFFFFuLL | 0x2000000;
                  v70 = v138;
                  PspApplyMitigationOptions((_DWORD)v27, v138, (unsigned int)&v215, (unsigned int)&v217, v69);
                  if ( v17 )
                  {
                    v71 = *(_DWORD **)(v17 + 432);
                    if ( v71 )
                    {
                      v111 = (volatile signed __int32 *)(v27 + 1872);
                      if ( (*v71 & 1) != 0 )
                      {
                        _InterlockedOr(v111, 0x4000u);
                        v27 = (char *)Object;
                      }
                      if ( (**(_DWORD **)(v17 + 432) & 2) != 0 )
                      {
                        _InterlockedOr(v111, 0x8000u);
                        v27 = (char *)Object;
                      }
                      *((_DWORD *)v27 + 442) = *(_DWORD *)(*(_QWORD *)(v17 + 432) + 4LL);
                    }
                    v72 = *(_DWORD **)(v17 + 440);
                    if ( v72 )
                      *((_DWORD *)v27 + 488) = *v72;
                    *(_OWORD *)(v17 + 336) = v215;
                    *(_QWORD *)(v17 + 352) = v216;
                    *(_OWORD *)(v17 + 448) = v217;
                    *(_QWORD *)(v17 + 464) = v218;
                  }
                  PsQueryProcessAttributes((__int64)v27, 0LL, v137);
                  v73 = ((_DWORD)TokenInformation != 0) | 2u;
                  if ( (a9 & 0x20000) == 0 )
                    v73 = (_DWORD)TokenInformation != 0;
                  SmProcessCreateNotification(v27, v73);
                  if ( (*((_DWORD *)v27 + 469) & 0x4000) != 0 )
                  {
                    SectionInformation = KeInitializeProcessUserCetLogging(v27);
                    if ( SectionInformation < 0 )
                      goto LABEL_177;
                  }
                  if ( (a9 & 0x80u) != 0
                    && !(unsigned int)PspIsSessionLeaderProcess(Process)
                    && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
                  {
                    goto LABEL_285;
                  }
                  if ( (v18 & 1) != 0 )
                  {
LABEL_152:
                    if ( (v18 & 0x400) != 0 )
                      RtlReleasePrivilege(StatePointer);
                    if ( *((_WORD *)v27 + 886) == 332 )
                      *((_DWORD *)v27 + 34) |= 1u;
                    if ( (v18 & 0x80u) != 0 )
                    {
                      if ( v17 )
                      {
                        if ( (v18 & 2) == 0 )
                        {
                          SectionInformation = PspSetupReservedUserMappings(v27, v224, v17);
                          if ( SectionInformation < 0 )
                            goto LABEL_198;
                        }
                      }
                    }
                    if ( (v18 & 0x100) != 0 )
                    {
                      *(_QWORD *)&v180 = 0LL;
                      *((_QWORD *)&v180 + 1) = -1LL;
                      v88 = (4 * (((v27[1530] & 7) != 1 ? 0 : 0x10) | ((v18 & 0x2000) != 0))) & 0xCF | ((v27[1530] & 7) != 0 ? 2 : 0) | ((v18 & 0x1000) != 0) | (16 * (((_DWORD)TokenInformation != 0 ? 2 : 0) | v137[0] & 1));
                      *(_DWORD *)((char *)&v180 + 3) = v88;
                      if ( (v18 & 4) != 0 )
                      {
                        v74 = v138;
                        v124 = *(_OWORD **)(v138 + 736);
                        *((_QWORD *)v27 + 92) = v124;
                        if ( (v18 & 0x10) != 0 )
                          goto LABEL_159;
                        LOBYTE(v180) = 1;
                        KiStackAttachProcess((_KPROCESS *)v27, 0, (__int64)v224);
                        if ( MmSecureVirtualMemory(v124, 0x7D0uLL, 4u) )
                          *v124 = v180;
                        else
                          SectionInformation = -1073741503;
                        if ( SectionInformation >= 0 )
                        {
                          v125 = (unsigned __int64 **)*((_QWORD *)v27 + 98);
                          if ( v125 )
                          {
                            v126 = *((_WORD *)v27 + 886);
                            if ( v126 == 332 || (v127 = 0, v126 == 452) )
                              v127 = 1;
                            if ( v127 )
                            {
                              v128 = *v125;
                              if ( MmSecureVirtualMemory(v128, 0x488uLL, 4u) )
                              {
                                v170 = 0xFFFFFFFF00000001uLL;
                                BYTE3(v170) = v88;
                                *v128 = v170;
                              }
                              else
                              {
                                SectionInformation = -1073741503;
                              }
                            }
                          }
                        }
                        KiUnstackDetachProcess((__int64)v224, 0LL);
                        if ( SectionInformation < 0 )
                          goto LABEL_198;
                      }
                      else
                      {
                        SectionInformation = MmCreatePeb(
                                               (ULONG_PTR)v27,
                                               (char *)&v180,
                                               (_QWORD *)v27 + 92,
                                               (__int64)&v190);
                        if ( SectionInformation < 0 )
                        {
                          *((_QWORD *)v27 + 92) = 0LL;
                          goto LABEL_198;
                        }
                        if ( (_QWORD)v190 )
                        {
                          _InterlockedAnd((volatile signed __int32 *)v27 + 124, 0xFFCFFFFF);
                          v27 = (char *)Object;
                          PspSetProcessAffinitySafe((struct _KPROCESS *)Object, (__int64)&v173);
                        }
                      }
                    }
                    v74 = v138;
LABEL_159:
                    if ( (v18 & 0x80u) == 0 || !v17 || (v18 & 2) != 0 )
                    {
                      if ( (v18 & 0x100) != 0 && (v18 & 0x10) == 0 )
                      {
                        SectionInformation = 0;
                        KiStackAttachProcess((_KPROCESS *)v27, 0, (__int64)v224);
                        KeCopyXfdMaskToPeb(v27);
                        v75 = CurrentThread;
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
                        KiUnstackDetachProcess((__int64)v224, 0LL);
LABEL_162:
                        if ( SectionInformation >= 0 )
                        {
                          PspLockProcessExclusive((__int64)v27, (__int64)v75);
                          v76 = ExCreateHandleEx((unsigned int *)PspCidTable, (__int64)v27, 0, 0, 0LL);
                          v157 = v76;
                          if ( !v76 )
                          {
                            PspUnlockProcessExclusive((__int64)v27, (__int64)v75);
                            SectionInformation = -1073741670;
                            goto LABEL_198;
                          }
                          if ( (v18 & 0x10000) == 0 )
                          {
LABEL_165:
                            if ( KeQuerySystemTimeUnsafe() )
                            {
                              KeQuerySystemTimePrecise((_QWORD *)v27 + 63);
                            }
                            else
                            {
                              v27 = (char *)Object;
                              *((_QWORD *)Object + 63) = MEMORY[0xFFFFF78000000014];
                            }
                            *((_QWORD *)v27 + 58) = v76;
                            *((_QWORD *)Object + 208) = MEMORY[0xFFFFF78000000008];
                            v77 = Object;
                            *((_QWORD *)Object + 209) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
                            v77[211] = v77[208];
                            *v188 = v77;
                            SectionInformation = v144;
LABEL_201:
                            if ( P )
                              ExFreePoolWithTag(P, 0x73437350u);
                            if ( qword_140F04568 )
                              guard_dispatch_icall_no_overrides(v226);
                            return (unsigned int)SectionInformation;
                          }
                          SectionInformation = MmGetSectionStrongImageReference(0LL, 0LL, *((void **)v27 + 85), &v185);
                          v130 = (__int64)v27;
                          if ( SectionInformation >= 0 )
                          {
                            SectionInformation = KeSecureProcess(
                                                   (_KPROCESS *)v27,
                                                   *((_QWORD *)v27 + 92),
                                                   v157,
                                                   *(_QWORD *)(v17 + 192),
                                                   v185,
                                                   *(struct _MDL **)(v17 + 360),
                                                   *(unsigned int *)(v17 + 376));
                            if ( SectionInformation >= 0 )
                            {
                              v76 = v157;
                              goto LABEL_165;
                            }
                            v130 = (__int64)v27;
                          }
                          PspUnlockProcessExclusive(v130, (__int64)v75);
                        }
LABEL_198:
                        if ( v157 )
                          *((_QWORD *)v27 + 58) = v157;
                        PspRundownSingleProcess(v27, 0);
                        ObfDereferenceObjectWithTag(v27, 0x72437350u);
                        goto LABEL_201;
                      }
                    }
                    else
                    {
                      SectionInformation = PspSetupUserProcessAddressSpace(v74, (_KPROCESS *)v27, (__int64)v224, v17);
                    }
                    v75 = CurrentThread;
                    goto LABEL_162;
                  }
                  if ( (v18 & 4) == 0 )
                  {
                    SectionInformation = PspInitializeFullProcessImageName(v17, v27);
                    if ( SectionInformation >= 0 )
                    {
                      v84 = v158;
                      v85 = MmInitializeProcessAddressSpace((ULONG_PTR)v27, 0LL, (__int64)v158, &a9, 0);
                      SectionInformation = v85;
                      if ( v85 >= 0 )
                      {
                        v144 = v85;
                        if ( v17 )
                        {
                          if ( (v18 & 2) == 0 )
                          {
                            v86 = *(_QWORD *)(*(_QWORD *)MiSectionControlArea((__int64)v84) + 32LL);
                            v87 = *((_QWORD *)v27 + 86);
                            if ( v86 != v87 )
                              *(_QWORD *)(v17 + 56) += v87 - v86;
                          }
                        }
                        v18 |= 0x80u;
LABEL_215:
                        if ( (v18 & 1) == 0 )
                        {
                          v18 = v18 & 0xFFFFEFFF | ((a9 & 0x10) << 8);
                          if ( (v18 & 2) == 0 )
                            v18 |= 0x100u;
                        }
                        goto LABEL_152;
                      }
                    }
LABEL_177:
                    if ( (v18 & 0x400) != 0 )
                      RtlReleasePrivilege(StatePointer);
                    goto LABEL_198;
                  }
                  *((_QWORD *)v27 + 86) = *(_QWORD *)(v70 + 688);
                  SectionInformation = MmInitializeProcessAddressSpace((ULONG_PTR)v27, v70, 0LL, &a9, (v18 & 8) != 0);
                  if ( SectionInformation < 0 )
                    goto LABEL_177;
                  v120 = *(unsigned __int16 *)(*(_QWORD *)(v70 + 848) + 2LL);
                  v121 = (void *)ExAllocatePool2(0x40uLL);
                  *((_QWORD *)v27 + 106) = v121;
                  if ( v121 )
                  {
                    v122 = v120 + 16;
                    v123 = v138;
                    memmove(v121, *(const void **)(v138 + 848), v122);
                    *(_QWORD *)(*((_QWORD *)v27 + 106) + 8LL) = *((_QWORD *)v27 + 106) + 16LL;
                    *((_DWORD *)v27 + 174) = *(_DWORD *)(v123 + 696);
                    if ( (*(_DWORD *)(v123 + 496) & 0x1000000) != 0 )
                      *((_DWORD *)v27 + 124) |= 0x1000000u;
                    if ( (a9 & 0x1000) != 0 )
                    {
                      *((_QWORD *)v27 + 85) = 0LL;
                      ObfDereferenceObject(v158);
                    }
                    goto LABEL_215;
                  }
LABEL_330:
                  SectionInformation = -1073741670;
                  goto LABEL_177;
                }
                v189 = 0LL;
                WORD4(v189) = v89;
                if ( v89 >= v225.Count )
                  v93 = 0LL;
                else
                  v93 = v225.Bitmap[v89];
                *(_QWORD *)&v189 = v93;
                v46 = KeSelectNodeForAffinity((__int64)&v189);
LABEL_88:
                v143 = v46;
                goto LABEL_89;
              }
              if ( (*(_DWORD *)(v138 + 496) & 0x100000) == 0 )
              {
                v143 = PspSelectNodeForProcess();
                v89 = KeSelectGroupFromNode(v143);
                v135 = v89;
                if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v89 )
                {
                  v143 = 0LL;
                  v89 = 1;
                  v135 = 1;
                }
                goto LABEL_230;
              }
              HIDWORD(v142) |= 0x100000u;
              v143 = KeNodeBlock[*(unsigned __int16 *)(v138 + 260)];
              v110 = v143;
            }
            v135 = KeSelectGroupFromNode(v110);
            v89 = v135;
            goto LABEL_230;
          }
LABEL_364:
          SectionInformation = -1073741801;
          goto LABEL_198;
        }
      }
    }
    LOWORD(v42) = v136;
    goto LABEL_81;
  }
  return result;
}
