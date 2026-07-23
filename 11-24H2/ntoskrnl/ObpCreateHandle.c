/*
 * XREFs of ObpCreateHandle @ 0x140849D60
 * Callers:
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1403B2040 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObDereferenceObjectExWithTag @ 0x1403B3DE0 (ObDereferenceObjectExWithTag.c)
 *     SeComputeCreatorDeniedRights @ 0x1403B5DC0 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     SepSidInTokenSidHash @ 0x1403BEFB0 (SepSidInTokenSidHash.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x1403FE430 (SepPrivilegeCheck.c)
 *     ObReferenceObjectExWithTag @ 0x140415020 (ObReferenceObjectExWithTag.c)
 *     PsGetCurrentThreadProcessId @ 0x14041D840 (PsGetCurrentThreadProcessId.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14043A1F0 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwDuplicateObject @ 0x1406A7B30 (ZwDuplicateObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObpCreateSymbolicLinkName @ 0x1407421D0 (ObpCreateSymbolicLinkName.c)
 *     ObpDecrementHandleCount @ 0x14083D360 (ObpDecrementHandleCount.c)
 *     CmpCloseKeyObject @ 0x14083DB50 (CmpCloseKeyObject.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x14083DF8C (EtwpEventWriteTemplateSessAndProv.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     EtwpTraceHandle @ 0x140848E7C (EtwpTraceHandle.c)
 *     ExpUpdateDebugInfo @ 0x1408495B4 (ExpUpdateDebugInfo.c)
 *     ExpFreeTablePagedPool @ 0x1408497A4 (ExpFreeTablePagedPool.c)
 *     ExpGetHandleExtraInfo @ 0x1408497E8 (ExpGetHandleExtraInfo.c)
 *     ObpIncrementHandleCountEx @ 0x14084BE20 (ObpIncrementHandleCountEx.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14084C800 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14084FDF0 (SePrivilegedServiceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140862A14 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140863120 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140863240 (SepAdtClassifyObjectIntoSubCategory.c)
 *     ObpSetObjectAuditInfo @ 0x14086B968 (ObpSetObjectAuditInfo.c)
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     ObDereferenceSecurityDescriptor @ 0x14087E040 (ObDereferenceSecurityDescriptor.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x14087E1BC (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x14087EDAC (ObpReferenceSecurityDescriptorSlow.c)
 *     ObpDeleteNameCheck @ 0x1408A3D30 (ObpDeleteNameCheck.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14094D498 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateTablePagedPool @ 0x14094D7D0 (ExpAllocateTablePagedPool.c)
 *     ObpCallPostOperationCallbacks @ 0x1409780DC (ObpCallPostOperationCallbacks.c)
 *     ObHandleRevocationBlockAddObject @ 0x140994660 (ObHandleRevocationBlockAddObject.c)
 *     SeAppendPrivileges @ 0x1409C22A0 (SeAppendPrivileges.c)
 *     SepConcatenatePrivileges @ 0x1409C23F0 (SepConcatenatePrivileges.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409DF020 (ObpInsertOrLocateNamedObject.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCreateHandle(
        unsigned int a1,
        struct _FILE_OBJECT *a2,
        signed int a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        ULONG_PTR a8,
        int a9,
        _QWORD *a10,
        __int64 *a11)
{
  char v12; // r14
  ULONG_PTR v13; // r13
  struct _FILE_OBJECT *v14; // r12
  unsigned int v16; // edx
  _KPROCESS *v17; // r10
  unsigned int *KernelTime; // rcx
  char v19; // r15
  __int16 v20; // ax
  unsigned __int64 v21; // rcx
  ULONG_PTR v22; // r13
  signed __int64 v23; // rdx
  signed __int64 v24; // rax
  signed __int64 v25; // rbx
  signed __int64 v26; // rdx
  unsigned __int64 Pool2; // rbx
  NTSTATUS NamedObject; // edi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v30; // rax
  BOOLEAN v31; // al
  PPRIVILEGE_SET v32; // r12
  BOOLEAN v33; // r13
  ULONG PrivilegeCount; // r8d
  struct _LIST_ENTRY *Flink; // rdi
  int v36; // edx
  unsigned int v37; // eax
  ACCESS_MASK v38; // ecx
  __int64 v39; // rcx
  signed __int64 v40; // rax
  signed __int64 v41; // rtt
  _DWORD *v42; // rbx
  signed int v43; // eax
  int v44; // ecx
  signed __int64 FileObjectExtension; // rdx
  signed __int64 v46; // rax
  signed __int64 v47; // rdi
  signed __int64 v48; // rdx
  unsigned __int64 v49; // rdi
  signed __int64 v50; // rax
  signed __int64 v51; // rtt
  void *v52; // rax
  PVOID v53; // rdi
  __int64 v54; // r15
  int v55; // ebx
  signed __int64 v56; // rdx
  signed __int64 v57; // rax
  signed __int64 v58; // rbx
  signed __int64 v59; // rdx
  unsigned __int64 v60; // rbx
  int v61; // edi
  signed __int64 v62; // rax
  signed __int64 v63; // rtt
  __int64 v64; // rax
  int v65; // eax
  struct _LIST_ENTRY *v66; // rdi
  unsigned int v67; // ebx
  unsigned __int64 v68; // rax
  struct _KTHREAD *v69; // r12
  unsigned __int64 v70; // rcx
  unsigned int *v71; // r8
  __int64 v72; // r14
  char v73; // al
  unsigned int Number; // edx
  unsigned int v75; // ecx
  __int64 v76; // rbx
  unsigned int v77; // eax
  ULONG_PTR v78; // rbx
  char *v79; // rax
  char *v80; // rdi
  unsigned __int64 *v81; // rdi
  unsigned __int64 v82; // rax
  int v83; // eax
  unsigned int v84; // eax
  unsigned int *v85; // r10
  __int64 v86; // r8
  __int64 v87; // r9
  _QWORD *v88; // rdi
  char v89; // al
  PPRIVILEGE_SET *v90; // rbx
  __int64 v91; // rax
  __int64 v92; // r15
  char v93; // di
  bool v94; // zf
  PPRIVILEGE_SET *v95; // r12
  unsigned int v96; // ebx
  _DWORD *v97; // rdx
  unsigned __int64 v98; // rbx
  PVOID v99; // rsi
  bool v100; // al
  __int64 *v101; // r15
  PVOID *v102; // r8
  unsigned __int64 v103; // rcx
  struct _EX_RUNDOWN_REF *v104; // rbx
  unsigned __int64 v105; // rtt
  _QWORD *v107; // rsi
  PVOID *v108; // rax
  struct _EX_RUNDOWN_REF *v109; // rbx
  unsigned __int64 v110; // rtt
  volatile signed __int64 *v111; // rax
  volatile signed __int64 *v112; // rbx
  volatile signed __int64 v113; // rcx
  __int64 (__usercall *v114)@<rax>(ULONG_PTR@<rcx>, PULONG, int, int, __int64, char); // rax
  NTSTATUS SetSecurityObject; // eax
  struct _EX_RUNDOWN_REF *p_Blink; // rdi
  unsigned __int64 v117; // rtt
  unsigned int v118; // eax
  _DWORD *v119; // rax
  BOOLEAN v120; // al
  unsigned __int64 v121; // rdi
  struct _KTHREAD *v122; // rax
  struct _KTHREAD *v123; // rax
  struct _ERESOURCE *v124; // rcx
  unsigned __int64 v125; // rdx
  __int64 v126; // rdi
  int v127; // eax
  struct _KTHREAD *v128; // rax
  struct _KTHREAD *v129; // rax
  char *v130; // rax
  signed __int64 *v131; // r10
  char *v132; // rdi
  struct _EX_RUNDOWN_REF *v133; // rax
  struct _EX_RUNDOWN_REF *Count; // rdi
  unsigned __int64 v135; // rtt
  signed __int64 v136; // rax
  signed __int64 v137; // rdx
  signed __int64 v138; // rtt
  struct _KTHREAD *v139; // rcx
  struct _EX_RUNDOWN_REF *v140; // rcx
  unsigned __int64 v141; // rtt
  struct _KTHREAD *v142; // rax
  ULONG_PTR v143; // rcx
  char *v144; // rax
  signed __int64 *v145; // rcx
  char *v146; // rdx
  signed __int64 *v147; // rdi
  signed __int64 v148; // rax
  signed __int64 v149; // rdx
  signed __int64 v150; // rtt
  struct _KTHREAD *v151; // rcx
  struct _EX_RUNDOWN_REF *v152; // rdx
  unsigned __int64 v153; // rtt
  PVOID **v154; // rax
  PVOID ***v155; // rcx
  struct _KTHREAD *v156; // rax
  _QWORD *TablePagedPool; // rax
  _QWORD *HandleExtraInfo; // rax
  unsigned int v159; // eax
  ULONG_PTR v160; // rbx
  char *v161; // rax
  char *v162; // r14
  unsigned __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rcx
  __int64 v166; // r8
  bool v167; // r12
  BOOLEAN v168; // al
  volatile signed __int32 *v169; // rdi
  char *v170; // rax
  signed __int8 v171; // cf
  __int64 v172; // r8
  unsigned __int64 CurrentThreadProcessId; // rbx
  unsigned __int16 v174; // r12
  int v175; // edx
  __int64 v176; // r9
  unsigned __int64 v177; // rcx
  __int64 v178; // rbx
  signed __int64 v179; // rsi
  PRKPROCESS v180; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  void (__fastcall *v182)(__int64, struct _FILE_OBJECT *, __int64, __int64); // rax
  __int64 v183; // r8
  struct _KTHREAD *v184; // rax
  char *v185; // rax
  __int64 v186; // r8
  int v187; // ecx
  int v188; // eax
  volatile signed __int64 *v189; // rdx
  signed __int64 v190; // rax
  signed __int64 v191; // r8
  __int64 v192; // rtt
  int v193; // ecx
  int v194; // edx
  int v195; // eax
  int v196; // ecx
  struct _LIST_ENTRY *v197; // rdi
  struct _LIST_ENTRY *v198; // rdx
  unsigned int v199; // eax
  PPRIVILEGE_SET v200; // r8
  struct _LIST_ENTRY *v201; // r12
  __int64 v202; // rdx
  ULONG *PreviouslyGrantedAccess; // [rsp+20h] [rbp-100h]
  PPRIVILEGE_SET *Privileges; // [rsp+28h] [rbp-F8h]
  PPRIVILEGE_SET *Privilegesa; // [rsp+28h] [rbp-F8h]
  int GenericMapping; // [rsp+30h] [rbp-F0h]
  __int64 AccessMode; // [rsp+38h] [rbp-E8h]
  char v208; // [rsp+A0h] [rbp-80h]
  char v209; // [rsp+A0h] [rbp-80h]
  char HandleTableEntrySlow; // [rsp+A0h] [rbp-80h]
  unsigned __int16 v211; // [rsp+A0h] [rbp-80h]
  char v212; // [rsp+A0h] [rbp-80h]
  char v213; // [rsp+A0h] [rbp-80h]
  char v214; // [rsp+A2h] [rbp-7Eh]
  bool v215; // [rsp+A3h] [rbp-7Dh]
  int v216; // [rsp+A4h] [rbp-7Ch] BYREF
  char v217; // [rsp+A8h] [rbp-78h]
  unsigned int *v218; // [rsp+B0h] [rbp-70h]
  PRKPROCESS PROCESS; // [rsp+B8h] [rbp-68h]
  PVOID Object; // [rsp+C0h] [rbp-60h]
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp-58h]
  ULONG Length; // [rsp+D0h] [rbp-50h] BYREF
  NTSTATUS AccessStatus; // [rsp+D4h] [rbp-4Ch] BYREF
  struct _LIST_ENTRY *p_FileObjectExtension; // [rsp+D8h] [rbp-48h]
  int v225; // [rsp+E0h] [rbp-40h] BYREF
  struct _EX_RUNDOWN_REF **v226; // [rsp+E8h] [rbp-38h]
  PVOID v227[2]; // [rsp+F0h] [rbp-30h] BYREF
  char *v228; // [rsp+100h] [rbp-20h]
  unsigned int v229; // [rsp+108h] [rbp-18h]
  PEX_RUNDOWN_REF RunRef; // [rsp+110h] [rbp-10h]
  struct _LIST_ENTRY *v231; // [rsp+118h] [rbp-8h]
  PVOID **v232; // [rsp+120h] [rbp+0h]
  UNICODE_STRING *v233; // [rsp+128h] [rbp+8h]
  HANDLE TargetHandle; // [rsp+130h] [rbp+10h] BYREF
  PVOID v235; // [rsp+138h] [rbp+18h] BYREF
  PVOID P; // [rsp+140h] [rbp+20h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+148h] [rbp+28h] BYREF
  PVOID v238; // [rsp+150h] [rbp+30h] BYREF
  int v239[2]; // [rsp+158h] [rbp+38h] BYREF
  __int64 v240; // [rsp+160h] [rbp+40h]
  __int64 v241; // [rsp+168h] [rbp+48h]
  unsigned __int64 v242; // [rsp+170h] [rbp+50h]
  unsigned __int64 v243; // [rsp+178h] [rbp+58h]
  int v244; // [rsp+180h] [rbp+60h] BYREF
  PPRIVILEGE_SET v245; // [rsp+188h] [rbp+68h] BYREF
  __int128 v246; // [rsp+198h] [rbp+78h] BYREF
  __int64 v247; // [rsp+1A8h] [rbp+88h]
  PVOID *v248; // [rsp+1B0h] [rbp+90h]
  _DWORD *v249; // [rsp+1B8h] [rbp+98h]
  __int64 *v250; // [rsp+1C0h] [rbp+A0h]
  PVOID v251; // [rsp+1C8h] [rbp+A8h] BYREF
  _QWORD *v252; // [rsp+1D0h] [rbp+B0h]
  __int128 v253; // [rsp+1D8h] [rbp+B8h] BYREF
  __int128 v254; // [rsp+1E8h] [rbp+C8h]
  __int128 v255; // [rsp+1F8h] [rbp+D8h]
  _DWORD v256[2]; // [rsp+208h] [rbp+E8h] BYREF
  PVOID v257; // [rsp+210h] [rbp+F0h]
  __int64 v258; // [rsp+218h] [rbp+F8h]
  __int64 v259; // [rsp+220h] [rbp+100h]
  NTSTATUS v260; // [rsp+228h] [rbp+108h]
  int v261; // [rsp+22Ch] [rbp+10Ch]
  int *v262; // [rsp+230h] [rbp+110h]
  _DWORD v263[2]; // [rsp+238h] [rbp+118h] BYREF
  __int128 v264; // [rsp+240h] [rbp+120h]
  struct _PRIVILEGE_SET v265; // [rsp+250h] [rbp+130h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+268h] [rbp+148h] BYREF

  v12 = a6;
  v13 = a8;
  v252 = a10;
  v14 = a2;
  v250 = a11;
  v216 = 0;
  LODWORD(v241) = 0;
  HIDWORD(v241) = a9;
  Object = a2;
  v16 = a1;
  v229 = a1;
  BugCheckParameter2 = a8;
  v235 = 0LL;
  v214 = 0;
  P = 0LL;
  v217 = 0;
  *(_OWORD *)v227 = 0LL;
  v17 = KeGetCurrentThread()->ApcState.Process;
  PROCESS = v17;
  if ( (a6 & 0x200) != 0 )
  {
    v17 = PsInitialSystemProcess;
    KernelTime = (unsigned int *)ObpKernelHandleTable;
    PROCESS = PsInitialSystemProcess;
  }
  else
  {
    if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    {
      v218 = 0LL;
      p_Blink = (struct _EX_RUNDOWN_REF *)&v17[1].ProfileListHead.Blink;
      _m_prefetchw(&v17[1].ProfileListHead.Blink);
      v117 = (unsigned __int64)v17[1].ProfileListHead.Blink & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v117 == _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&v17[1].ProfileListHead.Blink,
                     v117 + 2,
                     v117)
        || (v120 = ExfAcquireRundownProtection((PEX_RUNDOWN_REF)&v17[1].ProfileListHead.Blink), v17 = PROCESS, v120) )
      {
        KernelTime = (unsigned int *)v17[1].KernelTime;
        v218 = KernelTime;
        if ( KernelTime )
        {
          v16 = v229;
          v217 = 1;
          goto LABEL_5;
        }
        ExReleaseRundownProtection_0(p_Blink);
      }
      return (unsigned int)-1073741558;
    }
    KernelTime = (unsigned int *)KeGetCurrentThread()->ApcState.Process[1].KernelTime;
  }
  v218 = KernelTime;
LABEL_5:
  v215 = KernelTime == (unsigned int *)ObpKernelHandleTable;
  if ( !a4 || KernelTime == (unsigned int *)ObpKernelHandleTable && !*(_DWORD *)(a4 + 24) )
  {
    if ( (a3 & 0x2000000) != 0 )
      a3 = a3 & 0xEDFFFFFF | 0x10000000;
    if ( (a3 & 0xF0000000) != 0 )
    {
      v119 = (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v14[-1].IrpList.Flink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v14 - 48) >> 8)];
      if ( a3 < 0 )
        a3 |= v119[19];
      if ( (a3 & 0x40000000) != 0 )
        a3 |= v119[20];
      if ( (a3 & 0x20000000) != 0 )
        a3 |= v119[21];
      if ( (a3 & 0x10000000) != 0 )
        a3 |= v119[22];
      a3 &= 0xFFFFFFFu;
    }
    v216 = a3;
    goto LABEL_66;
  }
  v19 = 1;
  AccessStatus = 0;
  if ( (a6 & 0x400) == 0 )
    v19 = a7;
  v20 = (_WORD)v14 - 48;
  if ( v16 - 1 > 1 )
  {
    v42 = (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v14[-1].IrpList.Flink) ^ (unsigned __int64)HIBYTE(v20)];
    v43 = *(_DWORD *)(a4 + 16);
    if ( (v43 & 0x2000000) != 0 )
    {
      v43 = v43 & 0xEDFFFFFF | 0x10000000;
      *(_DWORD *)(a4 + 16) = v43;
    }
    if ( (v43 & 0xF0000000) != 0 )
    {
      if ( v43 < 0 )
        v43 |= v42[19];
      if ( (v43 & 0x40000000) != 0 )
        v43 |= v42[20];
      if ( (v43 & 0x20000000) != 0 )
        v43 |= v42[21];
      if ( (v43 & 0x10000000) != 0 )
        v43 |= v42[22];
      v43 &= 0xFFFFFFFu;
      *(_DWORD *)(a4 + 16) = v43;
    }
    if ( (v43 & 0x1000000) == 0 )
      goto LABEL_54;
    v265.Privilege[0].Luid = SeSecurityPrivilege;
    v265.PrivilegeCount = 1;
    v265.Control = 1;
    v265.Privilege[0].Attributes = 0;
    if ( v19 )
    {
      v165 = *(_QWORD *)(a4 + 32);
      if ( v165 )
      {
        if ( *(int *)(a4 + 40) < 2 )
          goto LABEL_306;
      }
      else
      {
        v165 = *(_QWORD *)(a4 + 48);
      }
      if ( !SepPrivilegeCheck(v165, (__int64)v265.Privilege, 1u, 1, v19) )
      {
LABEL_306:
        SePrivilegedServiceAuditAlarm(0LL, a4 + 32, &v265, 0LL);
        NamedObject = -1073741727;
        AccessStatus = -1073741727;
        goto LABEL_153;
      }
    }
    *(_DWORD *)(a4 + 16) &= ~0x1000000u;
    *(_DWORD *)(a4 + 20) |= 0x1000000u;
    SeAppendPrivileges((PACCESS_STATE)a4, &v265);
LABEL_54:
    v44 = *(_DWORD *)(a4 + 20) | *(_DWORD *)(a4 + 16);
    *(_DWORD *)(a4 + 20) = v44;
    *(_DWORD *)(a4 + 16) = 0;
    *(_DWORD *)(a4 + 20) = v44 & (v42[23] | 0x1000000);
    _m_prefetchw(&v14[-1].FileObjectExtension);
    FileObjectExtension = (signed __int64)v14[-1].FileObjectExtension;
    if ( (FileObjectExtension & 0xF) != 0 )
    {
      do
      {
        v46 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)&v14[-1].FileObjectExtension,
                FileObjectExtension - 1,
                FileObjectExtension);
        if ( FileObjectExtension == v46 )
          break;
        FileObjectExtension = v46;
      }
      while ( (v46 & 0xF) != 0 );
    }
    v47 = FileObjectExtension;
    v48 = FileObjectExtension & 0xF;
    v49 = v47 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (unsigned int)v48 <= 1 && v49 )
      v49 = ObpReferenceSecurityDescriptorSlow(&v14[-1].Event.Header.WaitListHead.Blink, v48, v49);
    *(_DWORD *)(a4 + 20) &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                             (struct _SECURITY_SUBJECT_CONTEXT *)(a4 + 32),
                                             a4,
                                             *(_DWORD *)(a4 + 20),
                                             (unsigned int *)v49);
    if ( v49 )
    {
      _m_prefetchw(&v14[-1].FileObjectExtension);
      v50 = (signed __int64)v14[-1].FileObjectExtension;
      while ( (v49 ^ v50) < 0xF )
      {
        v51 = v50;
        v50 = _InterlockedCompareExchange64((volatile signed __int64 *)&v14[-1].FileObjectExtension, v50 + 1, v50);
        if ( v51 == v50 )
          goto LABEL_64;
      }
      ObDereferenceSecurityDescriptor(v49, 1LL);
    }
LABEL_64:
    AccessStatus = 0;
    goto LABEL_65;
  }
  v21 = LOBYTE(v14[-1].IrpList.Flink) ^ (unsigned __int64)HIBYTE(v20);
  GrantedAccess = 0;
  v245 = 0LL;
  Length = 0;
  v225 = 0;
  v22 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v21];
  v233 = (UNICODE_STRING *)v22;
  if ( *(_UNKNOWN **)(v22 + 152) != &SeDefaultObjectMethod )
  {
    v225 = 447;
    Length = ObpDefaultSecurityDescriptorLength;
    Pool2 = ExAllocatePool2(0x100uLL, (unsigned int)ObpDefaultSecurityDescriptorLength, 0x7153624Fu);
    if ( Pool2 )
    {
      v114 = *(__int64 (__usercall **)@<rax>(ULONG_PTR@<rcx>, PULONG, int, int, __int64, char))(v22 + 152);
      AccessMode = v22 + 76;
      GenericMapping = *(_DWORD *)(v22 + 100);
      Privileges = (PPRIVILEGE_SET *)&v14[-1].FileObjectExtension;
      p_FileObjectExtension = (struct _LIST_ENTRY *)&v14[-1].FileObjectExtension;
      v208 = 1;
      if ( (char *)v114 == (char *)CmpSecurityMethod )
      {
        SetSecurityObject = CmpSecurityMethod(
                              (_DWORD)v14,
                              1,
                              (unsigned int)&v225,
                              Pool2,
                              (__int64)&Length,
                              (__int64)Privileges,
                              GenericMapping,
                              AccessMode);
      }
      else if ( v114 == IopGetSetSecurityObject )
      {
        SetSecurityObject = IopGetSetSecurityObject(
                              (ULONG_PTR)v14,
                              &Length,
                              (int)Privileges,
                              GenericMapping,
                              AccessMode,
                              v19);
      }
      else
      {
        PreviouslyGrantedAccess = &Length;
        SetSecurityObject = guard_dispatch_icall_no_overrides(v14, 1LL);
      }
      NamedObject = SetSecurityObject;
      if ( SetSecurityObject == -1073741789 )
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
        ObpDefaultSecurityDescriptorLength = Length;
        Pool2 = ExAllocatePool2(0x100uLL, Length, 0x7153624Fu);
        if ( !Pool2 )
        {
          NamedObject = -1073741670;
          goto LABEL_321;
        }
        PreviouslyGrantedAccess = &Length;
        v208 = 1;
        NamedObject = guard_dispatch_icall_no_overrides(v14, 1LL);
      }
      if ( NamedObject >= 0 )
        goto LABEL_19;
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    else
    {
      NamedObject = -1073741670;
    }
LABEL_321:
    AccessStatus = NamedObject;
LABEL_322:
    if ( NamedObject < 0 )
      goto LABEL_153;
    v13 = BugCheckParameter2;
    v17 = PROCESS;
    goto LABEL_66;
  }
  _m_prefetchw(&v14[-1].FileObjectExtension);
  v23 = (signed __int64)v14[-1].FileObjectExtension;
  if ( (v23 & 0xF) != 0 )
  {
    do
    {
      v24 = _InterlockedCompareExchange64((volatile signed __int64 *)&v14[-1].FileObjectExtension, v23 - 1, v23);
      if ( v23 == v24 )
        break;
      v23 = v24;
    }
    while ( (v24 & 0xF) != 0 );
  }
  v25 = v23;
  v26 = v23 & 0xF;
  Pool2 = v25 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (unsigned int)v26 <= 1 && Pool2 )
    Pool2 = ObpReferenceSecurityDescriptorSlow(&v14[-1].Event.Header.WaitListHead.Blink, v26, Pool2);
  v208 = 0;
  if ( !Pool2 && ((*(_BYTE *)(v22 + 66) & 8) != 0 || (BYTE2(v14[-1].IrpList.Flink) & 2) != 0) )
    KeBugCheckEx(0x189u, (ULONG_PTR)&v14[-1].Event.Header.WaitListHead.Blink, v22, 1uLL, 0LL);
  NamedObject = 0;
LABEL_19:
  if ( !Pool2 )
  {
    *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
    v13 = BugCheckParameter2;
    *(_DWORD *)(a4 + 16) = 0;
    AccessStatus = NamedObject;
    goto LABEL_65;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL), 1u);
  if ( *(_QWORD *)(a4 + 32) )
  {
    v30 = KeGetCurrentThread();
    --v30->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 32) + 48LL), 1u);
  }
  v31 = SeAccessCheck(
          (PSECURITY_DESCRIPTOR)Pool2,
          (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
          1u,
          *(_DWORD *)(a4 + 16),
          *(_DWORD *)(a4 + 20),
          &v245,
          (PGENERIC_MAPPING)(v22 + 76),
          v19,
          &GrantedAccess,
          &AccessStatus);
  v32 = v245;
  v33 = v31;
  if ( v245 )
  {
    PrivilegeCount = v245->PrivilegeCount;
    p_FileObjectExtension = *(struct _LIST_ENTRY **)(a4 + 72);
    Flink = p_FileObjectExtension->Flink;
    v36 = (int)p_FileObjectExtension->Flink->Flink;
    if ( v36 + PrivilegeCount > 3 )
    {
      v195 = 8;
      if ( PrivilegeCount )
      {
        v196 = 12 * PrivilegeCount + 8;
        v195 = 8;
      }
      else
      {
        v196 = 8;
      }
      if ( Flink )
      {
        if ( v36 )
          v195 = 12 * v36 + 8;
      }
      else
      {
        v195 = 0;
      }
      v231 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL, (unsigned int)(v196 + v195), 0x72506553u);
      if ( v231 )
      {
        v197 = p_FileObjectExtension;
        v198 = p_FileObjectExtension->Flink;
        if ( p_FileObjectExtension->Flink )
        {
          if ( LODWORD(v198->Flink) )
            v199 = 12 * LODWORD(v198->Flink) + 8;
          else
            v199 = 8;
        }
        else
        {
          v199 = 0;
        }
        memmove(v231, v198, v199);
        v200 = v32;
        v201 = v231;
        SepConcatenatePrivileges(v231, v202, v200);
        if ( *(_BYTE *)(a4 + 11) )
          ExFreePoolWithTag(v197->Flink, 0);
        v197->Flink = v201;
        *(_BYTE *)(a4 + 11) = 1;
      }
    }
    else
    {
      if ( Flink )
      {
        if ( v36 )
          v37 = 12 * v36 + 8;
        else
          v37 = 8;
      }
      else
      {
        v37 = 0;
      }
      memmove((char *)Flink + v37, v245->Privilege, 12 * PrivilegeCount);
      LODWORD(Flink->Flink) += v32->PrivilegeCount;
    }
    CmSiFreeMemory(v245);
  }
  if ( v33 )
  {
    v38 = GrantedAccess;
    *(_DWORD *)(a4 + 20) |= GrantedAccess;
    *(_DWORD *)(a4 + 16) &= ~(v38 | 0x2000000);
  }
  v14 = (struct _FILE_OBJECT *)Object;
  if ( v19 )
    SeOpenObjectAuditAlarmWithTransaction(
      v233 + 1,
      Object,
      0LL,
      (PSECURITY_DESCRIPTOR)Pool2,
      (PACCESS_STATE)a4,
      0,
      v33,
      v19,
      0LL,
      (PBOOLEAN)(a4 + 10));
  ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL));
  KeLeaveCriticalRegionThread();
  v39 = *(_QWORD *)(a4 + 32);
  if ( v39 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v39 + 48));
    KeLeaveCriticalRegionThread();
  }
  if ( v208 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  else
  {
    _m_prefetchw((char *)Object - 8);
    v40 = *((_QWORD *)Object - 1);
    while ( (Pool2 ^ v40) < 0xF )
    {
      v41 = v40;
      v40 = _InterlockedCompareExchange64((volatile signed __int64 *)Object - 1, v40 + 1, v40);
      if ( v41 == v40 )
        goto LABEL_39;
    }
    ObDereferenceSecurityDescriptor(Pool2, 1LL);
  }
LABEL_39:
  if ( !v33 )
  {
    NamedObject = AccessStatus;
    goto LABEL_322;
  }
  v13 = BugCheckParameter2;
LABEL_65:
  v17 = PROCESS;
  v216 = *(_DWORD *)(a4 + 20);
LABEL_66:
  v52 = 0LL;
  v238 = 0LL;
  if ( v13 )
  {
    v52 = *(void **)(v13 + 32);
    v238 = v52;
  }
  LOBYTE(PreviouslyGrantedAccess) = a7;
  NamedObject = ObpIncrementHandleCountEx(v229, &v216, v17, v14, (_DWORD)PreviouslyGrantedAccess, a6, v52);
  if ( NamedObject < 0 )
    goto LABEL_153;
  if ( a4 )
  {
    if ( v13 )
    {
      v104 = (struct _EX_RUNDOWN_REF *)PROCESS;
      NamedObject = ObpInsertOrLocateNamedObject(PROCESS, v14, a7, v13, (__int64)&v235);
      if ( NamedObject < 0 )
        goto LABEL_154;
      v53 = v235;
      if ( v235 == v14 )
      {
        v53 = 0LL;
        v235 = 0LL;
      }
      else
      {
        v14 = (struct _FILE_OBJECT *)v235;
        Object = v235;
        v214 = 1;
      }
    }
    else
    {
      v53 = v235;
    }
    if ( *(_BYTE *)(a4 + 10) )
      v12 = a6 | 4;
  }
  else
  {
    v53 = v235;
  }
  v54 = (__int64)&v14[-1].Event.Header.WaitListHead.Blink;
  p_FileObjectExtension = (struct _LIST_ENTRY *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v14[-1].IrpList.Flink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v14 - 48) >> 8)];
  v55 = (HIDWORD(p_FileObjectExtension[5].Blink) | 0x1000000) & v216;
  v216 = v55;
  if ( a4 )
  {
    _m_prefetchw((const void *)(v54 + 40));
    v56 = *(_QWORD *)(v54 + 40);
    if ( (v56 & 0xF) != 0 )
    {
      do
      {
        v57 = _InterlockedCompareExchange64((volatile signed __int64 *)(v54 + 40), v56 - 1, v56);
        if ( v56 == v57 )
          break;
        v56 = v57;
      }
      while ( (v57 & 0xF) != 0 );
    }
    v58 = v56;
    v59 = v56 & 0xF;
    v60 = v58 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (unsigned int)v59 <= 1 && v60 )
      v60 = ObpReferenceSecurityDescriptorSlow(&v14[-1].Event.Header.WaitListHead.Blink, v59, v60);
    v61 = SeComputeCreatorDeniedRights((struct _SECURITY_SUBJECT_CONTEXT *)(a4 + 32), a4, v216, (unsigned int *)v60);
    if ( v60 )
    {
      _m_prefetchw((const void *)(v54 + 40));
      v62 = *(_QWORD *)(v54 + 40);
      while ( (v60 ^ v62) < 0xF )
      {
        v63 = v62;
        v62 = _InterlockedCompareExchange64((volatile signed __int64 *)(v54 + 40), v62 + 1, v62);
        if ( v63 == v62 )
          goto LABEL_85;
      }
      ObDereferenceSecurityDescriptor(v60, 1LL);
    }
LABEL_85:
    v64 = *(_QWORD *)(a4 + 72);
    v55 = ~v61 & v216;
    v53 = v235;
    v216 = v55;
    *(_DWORD *)(a4 + 20) = v55;
    v65 = *(_DWORD *)(v64 + 28);
    LODWORD(v241) = v65;
  }
  else
  {
    v65 = v241;
  }
  LODWORD(v231) = v65;
  if ( a5 )
  {
    ObReferenceObjectExWithTag((ULONG_PTR)v14, a5);
    v55 = v216;
  }
  if ( v53 )
  {
    ObfDereferenceObject(v53);
    v55 = v216;
  }
  v66 = p_FileObjectExtension;
  if ( BugCheckParameter2 && p_FileObjectExtension == ObpSymbolicLinkObjectType && !v214 )
  {
    ObpCreateSymbolicLinkName((ULONG_PTR)v14);
    v55 = v216;
  }
  v227[1] = v227;
  v227[0] = v227;
  if ( (BYTE2(v66[4].Flink) & 0x40) != 0 && v66[12].Blink != (struct _LIST_ENTRY *)&v66[12].Blink )
  {
    v125 = (unsigned __int8)ObHeaderCookie ^ LOBYTE(v14[-1].IrpList.Flink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v14 - 48) >> 8);
    v253 = 0LL;
    v254 = 0LL;
    v126 = ObTypeIndexTable[v125];
    v232 = 0LL;
    RunRef = 0LL;
    v255 = 0LL;
    v127 = v55 & *(_DWORD *)(v126 + 96);
    *((_QWORD *)&v246 + 1) = v14;
    v248 = 0LL;
    LODWORD(v233) = v127;
    v249 = v263;
    LODWORD(v246) = 1;
    DWORD1(v246) = v215;
    v264 = 0LL;
    v247 = v126;
    v263[1] = v55;
    v263[0] = v55;
    v128 = KeGetCurrentThread();
    v226 = (struct _EX_RUNDOWN_REF **)(v126 + 200);
    v240 = v126;
    --v128->KernelApcDisable;
    ObfReferenceObjectWithTag(*((PVOID *)&v246 + 1), 0x6243624Fu);
    v129 = KeGetCurrentThread();
    BugCheckParameter2 = v126 + 184;
    --v129->SpecialApcDisable;
    v130 = (char *)KeAbPreAcquire(v126 + 184, 0LL);
    v131 = (signed __int64 *)BugCheckParameter2;
    v132 = v130;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    {
      ExfAcquirePushLockSharedEx(v131, 0, v130, (__int64)v131);
      v131 = (signed __int64 *)BugCheckParameter2;
    }
    if ( v132 )
      v132[10] = 1;
    v133 = (struct _EX_RUNDOWN_REF *)v226;
    Count = *v226;
    while ( 1 )
    {
      if ( Count == v133 )
      {
        v147 = (signed __int64 *)(v240 + 184);
        _m_prefetchw((const void *)(v240 + 184));
        v148 = *v147;
        v149 = *v147 - 16;
        if ( (*v147 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v149 = 0LL;
        if ( (v148 & 2) != 0 || (v150 = *v147, v150 != _InterlockedCompareExchange64(v147, v149, v148)) )
          ExfReleasePushLock(v147);
        KeAbPostRelease((ULONG_PTR)v147);
        v151 = KeGetCurrentThread();
        v94 = v151->SpecialApcDisable++ == -1;
        if ( v94 && ($727077A9B6E167EAE1398C74674DC5A5 *)v151->ApcState.ApcListHead[0].Flink != &v151->152 )
          KiCheckForKernelApcDelivery();
        v152 = RunRef;
        if ( RunRef )
        {
          _m_prefetchw(RunRef);
          v153 = RunRef->Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v153 != _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v153 - 2, v153) )
            ExfReleaseRundownProtection(v152);
        }
        if ( v227[0] == v227 )
        {
          ObfDereferenceObjectWithTag(*((PVOID *)&v246 + 1), 0x6243624Fu);
          KeLeaveCriticalRegionThread();
        }
        if ( v215 )
        {
          v55 = v216;
        }
        else
        {
          v55 &= (unsigned int)v233 | v263[0];
          v216 = v55;
          if ( a4 )
            *(_DWORD *)(a4 + 20) = v55;
        }
        break;
      }
      if ( (HIDWORD(Count[2].Ptr) & 1) != 0 && (Count[2].Count & (unsigned int)v246) != 0 )
      {
        _m_prefetchw(&Count[7]);
        v135 = Count[7].Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v135 != _InterlockedCompareExchange64((volatile signed __int64 *)&Count[7], v135 + 2, v135) )
        {
          if ( !ExfAcquireRundownProtection(Count + 7) )
            goto LABEL_240;
          v131 = (signed __int64 *)BugCheckParameter2;
        }
        _m_prefetchw(v131);
        v136 = *v131;
        v137 = *v131 - 16;
        if ( (*v131 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v137 = 0LL;
        if ( (v136 & 2) != 0 || (v138 = *v131, v138 != _InterlockedCompareExchange64(v131, v137, v136)) )
        {
          ExfReleasePushLock(v131);
          v131 = (signed __int64 *)BugCheckParameter2;
        }
        KeAbPostRelease((ULONG_PTR)v131);
        v139 = KeGetCurrentThread();
        v94 = v139->SpecialApcDisable++ == -1;
        if ( v94 && ($727077A9B6E167EAE1398C74674DC5A5 *)v139->ApcState.ApcListHead[0].Flink != &v139->152 )
          KiCheckForKernelApcDelivery();
        v140 = RunRef;
        if ( RunRef )
        {
          _m_prefetchw(RunRef);
          v141 = RunRef->Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v141 != _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v141 - 2, v141) )
            ExfReleaseRundownProtection(v140);
          RunRef = 0LL;
        }
        if ( Count[6].Count )
        {
          v154 = (PVOID **)ExAllocatePool2(0x100uLL, 0x20uLL, 0x6C46624Fu);
          v232 = v154;
          if ( !v154 )
          {
            ExReleaseRundownProtection_0(Count + 7);
            if ( v227[0] == v227 )
            {
              KeLeaveCriticalRegionThread();
              ObfDereferenceObjectWithTag(*((PVOID *)&v246 + 1), 0x6243624Fu);
            }
            else
            {
              v255 = 0xC000009AuLL;
              v253 = v246;
              v254 = (unsigned __int64)v247;
              ObpCallPostOperationCallbacks(&v253, v227);
            }
            NamedObject = -1073741670;
            v177 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v54 + 24) ^ (unsigned __int64)BYTE1(v54);
            memset(&ApcState, 0, sizeof(ApcState));
            v178 = ObTypeIndexTable[v177];
            LODWORD(v226) = 0;
            if ( (*(_BYTE *)(v178 + 66) & 0x10) != 0 || (*(_BYTE *)(v54 + 27) & 8) != 0 )
            {
              v184 = KeGetCurrentThread();
              --v184->KernelApcDisable;
              v185 = (char *)KeAbPreAcquire(v54 + 16, 0LL);
              v171 = _interlockedbittestandset64((volatile signed __int32 *)(v54 + 16), 0LL);
              v228 = v185;
              if ( v171 )
              {
                ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v54 + 16), v185, v54 + 16);
                v185 = v228;
              }
              if ( v185 )
                v185[10] = 1;
              v179 = *(_QWORD *)(v54 + 8);
              if ( !_InterlockedDecrement64((volatile signed __int64 *)(v54 + 8)) && (*(_BYTE *)(v54 + 27) & 8) != 0 )
                *(_QWORD *)(v54 - ObpInfoMaskToOffset[*(_BYTE *)(v54 + 26) & 0x1F]) = 0LL;
              if ( (*(_BYTE *)(v178 + 66) & 0x10) != 0 )
              {
                if ( (*(_BYTE *)(v54 + 26) & 4) != 0 )
                  v186 = v54 - ObpInfoMaskToOffset[*(_BYTE *)(v54 + 26) & 7];
                else
                  v186 = 0LL;
                if ( (*(_BYTE *)(v54 + 27) & 0x40) != 0 )
                {
                  v187 = *(_DWORD *)(v186 + 8);
                  LODWORD(v226) = v187 & 0xFFFFFF;
                  v188 = v187 ^ (v187 ^ (v187 - 1)) & 0xFFFFFF;
LABEL_400:
                  *(_DWORD *)(v186 + 8) = v188;
                }
                else
                {
                  v193 = **(_DWORD **)v186;
                  v186 = *(_QWORD *)v186 + 8LL;
                  while ( v193 )
                  {
                    v194 = *(_DWORD *)(v186 + 8);
                    if ( (v194 & 0xFFFFFF) != 0 && *(PRKPROCESS *)v186 == PROCESS )
                    {
                      LODWORD(v226) = *(_DWORD *)(v186 + 8) & 0xFFFFFF;
                      v188 = v194 ^ (v194 ^ (v194 - 1)) & 0xFFFFFF;
                      goto LABEL_400;
                    }
                    v186 += 16LL;
                    --v193;
                  }
                }
                if ( !*(_BYTE *)(v186 + 11) && (*(_DWORD *)(v186 + 8) & 0xFFFFFF) == 0 )
                  *(_QWORD *)v186 = 0LL;
              }
              v189 = (volatile signed __int64 *)(v54 + 16);
              _m_prefetchw((const void *)(v54 + 16));
              v190 = *(_QWORD *)(v54 + 16);
              v191 = v190 - 16;
              if ( (v190 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v191 = 0LL;
              if ( (v190 & 2) != 0
                || (v192 = *(_QWORD *)(v54 + 16), v192 != _InterlockedCompareExchange64(v189, v191, v190)) )
              {
                ExfReleasePushLock((_QWORD *)(v54 + 16));
                v189 = (volatile signed __int64 *)(v54 + 16);
              }
              KeAbPostRelease((ULONG_PTR)v189);
              KeLeaveCriticalRegionThread();
            }
            else
            {
              v179 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v54 + 8), 0xFFFFFFFFFFFFFFFFuLL);
            }
            if ( *(_QWORD *)(v178 + 128) )
            {
              p_FileObjectExtension = 0LL;
              v180 = PROCESS;
              v213 = 0;
              if ( KeGetCurrentThread()->ApcState.Process != PROCESS )
              {
                v213 = 1;
                ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)PROCESS);
                p_FileObjectExtension = PsAttachSiloToCurrentThread(ProcessServerSilo);
                KeStackAttachProcess(PROCESS, &ApcState);
                v180 = PROCESS;
              }
              v182 = *(void (__fastcall **)(__int64, struct _FILE_OBJECT *, __int64, __int64))(v178 + 128);
              v183 = (unsigned int)v226;
              if ( (char *)v182 == (char *)CmpCloseKeyObject )
              {
                CmpCloseKeyObject((__int64)v180, (__int64)v14, (unsigned int)v226, v179);
              }
              else if ( (char *)v182 == (char *)EtwpCloseRegistrationObject )
              {
                if ( v179 == 1 )
                {
                  if ( (*(_BYTE *)(v54 + 146) & 2) != 0
                    && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS) )
                  {
                    EtwpEventWriteTemplateSessAndProv(
                      EtwpEventTracingProvRegHandle,
                      &ETW_EVENT_PROVIDER_UNREGISTERS,
                      0LL,
                      1,
                      0LL,
                      *(_QWORD *)(v54 + 80) + 40LL);
                  }
                  _InterlockedOr16((volatile signed __int16 *)(v54 + 146), 0x20u);
                }
              }
              else if ( v182 == IopCloseFile )
              {
                IopCloseFile((__int64)v180, v14, (unsigned int)v226, v179);
              }
              else
              {
                guard_dispatch_icall_no_overrides(v180, v14);
              }
              if ( v213 )
              {
                KiUnstackDetachProcess((__int64)&ApcState, 0, v183, v176);
                PsDetachSiloFromCurrentThread(p_FileObjectExtension);
              }
            }
            if ( v179 == 1 )
              ObpDeleteNameCheck(&v14[-1].Event.Header.WaitListHead.Blink);
            _InterlockedDecrement((volatile signed __int32 *)(v178 + 48));
            if ( a5 )
              ObDereferenceObjectExWithTag((ULONG_PTR)v14, a5, 0x746C6644u);
            goto LABEL_153;
          }
          v154[2] = (PVOID *)Count;
          v154[3] = 0LL;
          v155 = (PVOID ***)v227[1];
          if ( *(PVOID **)v227[1] != v227 )
LABEL_258:
            __fastfail(3u);
          v154[1] = (PVOID *)v227[1];
          *v154 = v227;
          *v155 = v154;
          v227[1] = v154;
        }
        if ( Count[5].Count )
        {
          guard_dispatch_icall_no_overrides(*(_QWORD *)(Count[3].Count + 8), &v246);
          if ( Count[6].Count )
            v232[3] = v248;
          else
            RunRef = Count + 7;
          v248 = 0LL;
        }
        v142 = KeGetCurrentThread();
        v143 = BugCheckParameter2;
        --v142->SpecialApcDisable;
        v144 = (char *)KeAbPreAcquire(v143, 0LL);
        v145 = (signed __int64 *)BugCheckParameter2;
        v146 = v144;
        v228 = v144;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx(v145, 0, v144, (__int64)v145);
          v146 = v228;
        }
        if ( v146 )
          v146[10] = 1;
      }
LABEL_240:
      Count = (struct _EX_RUNDOWN_REF *)Count->Count;
      v131 = (signed __int64 *)BugCheckParameter2;
      v133 = (struct _EX_RUNDOWN_REF *)v226;
    }
  }
  v67 = v55 & 0x1FFFFFF;
  v243 = v67;
  v68 = (v54 << 16) & 0xFFFFFFFFFFF1FFFFuLL;
  v242 = v68 | ((unsigned __int64)(v12 & 7) << 17);
  if ( (v12 & 8) != 0 )
    v67 |= 0x2000000u;
  v69 = KeGetCurrentThread();
  v70 = v68 | ((unsigned __int64)(v12 & 7) << 17) | 1;
  v71 = v218;
  v72 = 0LL;
  LODWORD(v243) = v67;
  v242 = v70;
  --v69->KernelApcDisable;
  v73 = *((_BYTE *)v71 + 44);
  if ( (v73 & 4) != 0 )
    goto LABEL_119;
  if ( (v73 & 1) != 0 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v75 = ExpFreeListCount;
  v76 = Number;
  LODWORD(v232) = Number;
  LODWORD(RunRef) = Number;
  LODWORD(v233) = ExpFreeListCount;
LABEL_98:
  LODWORD(BugCheckParameter2) = *v71;
  v77 = 0;
  LODWORD(v226) = 0;
  while ( 1 )
  {
    if ( v77 >= v75 )
    {
      v169 = (volatile signed __int32 *)(v71 + 14);
      v76 = (unsigned int)RunRef;
      HandleTableEntrySlow = 1;
      LODWORD(v232) = (_DWORD)RunRef;
      v228 = (char *)&v71[16 * (unsigned int)RunRef + 16];
      v170 = (char *)KeAbPreAcquire((__int64)(v71 + 14), 0LL);
      v171 = _interlockedbittestandset64(v169, 0LL);
      v240 = (__int64)v170;
      if ( v171 )
      {
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v169, v170, (__int64)v169);
        v170 = (char *)v240;
      }
      if ( v170 )
        v170[10] = 1;
      if ( (_DWORD)BugCheckParameter2 == *v218 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v218, v228);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v169, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v169);
      KeAbPostRelease((ULONG_PTR)v169);
      if ( HandleTableEntrySlow )
      {
        v75 = (unsigned int)v233;
        v71 = v218;
        goto LABEL_98;
      }
      goto LABEL_119;
    }
    v78 = (ULONG_PTR)&v71[16 * v76 + 16];
    if ( *(_QWORD *)(v78 + 8) )
      break;
LABEL_177:
    LODWORD(v226) = v77 + 1;
    v118 = 0;
    if ( (_DWORD)v232 + 1 != v75 )
      v118 = (_DWORD)v232 + 1;
    v76 = v118;
    LODWORD(v232) = v118;
    v77 = (unsigned int)v226;
  }
  v79 = (char *)KeAbPreAcquire(v78, 0LL);
  v80 = v79;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v78, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v78, v79, v78);
  if ( v80 )
    v80[10] = 1;
  v81 = *(unsigned __int64 **)(v78 + 8);
  if ( v81 )
  {
    v82 = v81[1];
    *(_QWORD *)(v78 + 8) = v82;
    if ( !v82 )
      *(_QWORD *)(v78 + 16) = 0LL;
    v83 = ++*(_DWORD *)(v78 + 24);
    if ( v83 > *(_DWORD *)(v78 + 28) )
      *(_DWORD *)(v78 + 28) = v83;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v78);
  KeAbPostRelease(v78);
  if ( !v81 )
  {
    v77 = (unsigned int)v226;
    v75 = (unsigned int)v233;
    v71 = v218;
    goto LABEL_177;
  }
  v72 = *(_QWORD *)(((unsigned __int64)v81 & 0xFFFFFFFFFFFFF000uLL) + 8)
      + 4 * ((__int64)((__int64)v81 - ((unsigned __int64)v81 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  v84 = *(_DWORD *)(((unsigned __int64)v81 & 0xFFFFFFFFFFFFF000uLL) + 8)
      + 4 * ((__int64)((__int64)v81 - ((unsigned __int64)v81 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  if ( !(_DWORD)v231 && !a9 )
  {
    v85 = v218;
LABEL_116:
    if ( *((_QWORD *)v85 + 12) )
      ExpUpdateDebugInfo((__int64)v85, (__int64)v69, v72, 1);
    v81[1] = v243;
    *v81 = v242;
    goto LABEL_119;
  }
  HIDWORD(v231) = (unsigned __int64)(*(_QWORD *)(((unsigned __int64)v81 & 0xFFFFFFFFFFFFF000uLL) + 8)
                                   + 4
                                   * ((__int64)((__int64)v81 - ((unsigned __int64)v81 & 0xFFFFFFFFFFFFF000uLL)) >> 4)) >> 32;
  LODWORD(v231) = v84 & 0xFFFFFC03;
  LODWORD(BugCheckParameter2) = (unsigned __int8)(v84 >> 2);
  v111 = (volatile signed __int64 *)ExpLookupHandleTableEntry(v218, (__int64)v231);
  v112 = v111;
  if ( v111 )
  {
    v113 = *v111;
    if ( *v111 )
    {
LABEL_165:
      *(_QWORD *)(v113 + 8LL * (unsigned int)BugCheckParameter2) = v241;
      goto LABEL_116;
    }
    TablePagedPool = (_QWORD *)ExpAllocateTablePagedPool(*((_QWORD *)v85 + 2), 2048LL);
    if ( TablePagedPool )
    {
      if ( !_InterlockedCompareExchange64(v112, (signed __int64)TablePagedPool, 0LL) )
      {
        v85 = v218;
        _InterlockedIncrement((volatile signed __int32 *)v218 + 1);
        TablePagedPool[(unsigned int)BugCheckParameter2] = v241;
        goto LABEL_116;
      }
      ExpFreeTablePagedPool(*((_QWORD *)v218 + 2), TablePagedPool, 0x800uLL);
      v113 = *v112;
      v85 = v218;
      if ( *v112 )
        goto LABEL_165;
    }
    else
    {
      v85 = v218;
    }
  }
  v218 = (unsigned int *)v72;
  v94 = v85[1] == 0;
  LODWORD(v218) = v72 & 0xFFFFFFFC;
  if ( !v94 )
  {
    HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(v85, (__int64)v218);
    if ( HandleExtraInfo )
      *HandleExtraInfo = 0LL;
  }
  v81[1] = 0LL;
  v209 = v85[11] & 1;
  if ( v209 )
    v159 = 0;
  else
    v159 = KeGetPcr()->Prcb.Number;
  v160 = (ULONG_PTR)&v85[16 * v159 + 16];
  v161 = (char *)KeAbPreAcquire(v160, 0LL);
  v162 = v161;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v160, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v160, v161, v160);
  if ( v162 )
    v162[10] = 1;
  if ( v209 )
  {
    v164 = *(_QWORD *)(v160 + 16);
    if ( v164 )
      *(_QWORD *)(v164 + 8) = v81;
    else
      *(_QWORD *)(v160 + 8) = v81;
    *(_QWORD *)(v160 + 16) = v81;
  }
  else
  {
    v163 = *(_QWORD *)(v160 + 8);
    v81[1] = v163;
    if ( !v163 )
      *(_QWORD *)(v160 + 16) = v81;
    *(_QWORD *)(v160 + 8) = v81;
  }
  --*(_DWORD *)(v160 + 24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v160);
  KeAbPostRelease(v160);
  v72 = 0LL;
LABEL_119:
  KeLeaveCriticalRegionThread();
  if ( v72 )
  {
    v88 = Object;
    if ( a5 && ObpTraceFlags )
    {
      ObpPushStackInfo((__int64)Object - 48, 0, 1u, 0x746C6644u);
      ObpPushStackInfo((__int64)(v88 - 6), 1, 1u, 0x6E48624Fu);
    }
    if ( !a4 )
      goto LABEL_143;
    v89 = *(_BYTE *)(v54 + 26);
    P = 0LL;
    v90 = 0LL;
    if ( (v89 & 0x20) == 0 || (v91 = ObpInfoMaskToOffset[v89 & 0x3F], v54 == v91) )
    {
      if ( v238 )
        v90 = (PPRIVILEGE_SET *)v238;
      goto LABEL_128;
    }
    v95 = *(PPRIVILEGE_SET **)(v54 - v91);
    if ( v95 )
    {
      v92 = *(_QWORD *)(a4 + 72);
      v93 = 0;
      *(_QWORD *)v239 = v72;
      TargetHandle = 0LL;
    }
    else
    {
      if ( v238 )
      {
        ObpSetObjectAuditInfo(v54, &v238, 0LL);
        v92 = *(_QWORD *)(a4 + 72);
        TargetHandle = 0LL;
        v93 = 0;
        *(_QWORD *)v239 = v72;
        goto LABEL_129;
      }
      if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((_BYTE *)v88 - 24) ^ ((unsigned __int16)((_WORD)v88 - 48) >> 8))) != *((_BYTE *)IoFileObjectType + 40)
        || (*(_DWORD *)(v88[1] + 52LL) & 0x10) == 0 )
      {
        v166 = *(_QWORD *)(a4 + 72);
        v167 = 0;
        if ( v166 )
          v167 = *(_QWORD *)(v166 + 56) != 0LL;
        if ( (int)ObpAllocateAndQuerySecurityDescriptorInfo((ULONG_PTR)v88) >= 0 )
        {
          v90 = (PPRIVILEGE_SET *)P;
          ObpSetObjectAuditInfo(v54, &P, v167);
        }
      }
LABEL_128:
      v92 = *(_QWORD *)(a4 + 72);
      v93 = 0;
      v94 = v90 == 0LL;
      *(_QWORD *)v239 = v72;
      v95 = v90;
      TargetHandle = 0LL;
      v90 = 0LL;
      if ( v94 )
      {
LABEL_129:
        v95 = *(PPRIVILEGE_SET **)(v92 + 56);
        if ( !v95 )
          v95 = *(PPRIVILEGE_SET **)(a4 + 64);
      }
    }
    if ( *(_BYTE *)(a4 + 9) )
    {
      if ( *(_BYTE *)(a4 + 124) )
      {
        SepAdtPrivilegeObjectAuditAlarm(
          (unsigned int)&SeSubsystemName,
          a4 + 144,
          a4 + 128,
          v72,
          *(_QWORD *)(a4 + 32),
          *(_QWORD *)(a4 + 48),
          *(_QWORD *)(a4 + 56),
          *(_DWORD *)(a4 + 20),
          *(_QWORD *)v92,
          1);
        goto LABEL_133;
      }
    }
    else if ( !*(_BYTE *)(v92 + 216) )
    {
      goto LABEL_133;
    }
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)v72,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &TargetHandle,
           0,
           0x200u,
           2u) >= 0 )
    {
      v251 = 0LL;
      ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v251, 0LL);
      v90 = (PPRIVILEGE_SET *)v251;
    }
    LOBYTE(v172) = 1;
    v211 = SepAdtClassifyObjectIntoSubCategory(v90, a4 + 144, v172, 0LL);
    if ( v90 )
      ObfDereferenceObject(v90);
    if ( TargetHandle )
    {
      ZwClose(TargetHandle);
      TargetHandle = 0LL;
    }
    CurrentThreadProcessId = PsGetCurrentThreadProcessId();
    Privilegesa = v95;
    v174 = v211;
    v212 = SepAdtOpenObjectAuditAlarm(
             v211,
             (int)&SeSubsystemName,
             (int)v239,
             (int)a4 + 144,
             a4 + 128,
             Privilegesa,
             *(_QWORD *)(a4 + 32),
             *(_QWORD *)(a4 + 48),
             *(_DWORD *)(a4 + 24),
             *(_DWORD *)(a4 + 20),
             *(_QWORD *)v92,
             1,
             CurrentThreadProcessId,
             2,
             0LL,
             0,
             0LL,
             v92 + 32,
             a4);
    SepAdtStagingEvent(
      v174,
      v175,
      (unsigned int)v239,
      a4 + 144,
      a4 + 128,
      *(_QWORD *)(a4 + 32),
      *(_QWORD *)(a4 + 48),
      *(_DWORD *)(a4 + 24),
      *(_DWORD *)(a4 + 20),
      1,
      CurrentThreadProcessId,
      a4);
    v93 = v212;
LABEL_133:
    v96 = v229;
    *(_BYTE *)(a4 + 10) = v93;
    if ( !v96 )
    {
      v97 = **(_DWORD ***)(a4 + 72);
      if ( v97 )
      {
        if ( *v97 && KeGetCurrentThread()->PreviousMode )
          SepAdtPrivilegeObjectAuditAlarm(
            (unsigned int)&SeSubsystemName,
            0,
            0,
            v72,
            *(_QWORD *)(a4 + 32),
            *(_QWORD *)(a4 + 48),
            *(_QWORD *)(a4 + 56),
            *(_DWORD *)(a4 + 20),
            (__int64)v97,
            1);
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( !v96
      && (p_FileObjectExtension == (struct _LIST_ENTRY *)CmKeyObjectType
       || p_FileObjectExtension == (struct _LIST_ENTRY *)IoFileObjectType)
      && (v98 = *(_QWORD *)(a4 + 32)) != 0 )
    {
      v121 = *(_QWORD *)(a4 + 48);
      v122 = KeGetCurrentThread();
      --v122->KernelApcDisable;
      if ( v121 >= v98 )
      {
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v98 + 48), 1u);
        v156 = KeGetCurrentThread();
        --v156->KernelApcDisable;
        v124 = *(struct _ERESOURCE **)(v121 + 48);
      }
      else
      {
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v121 + 48), 1u);
        v123 = KeGetCurrentThread();
        --v123->KernelApcDisable;
        v124 = *(struct _ERESOURCE **)(v98 + 48);
      }
      ExAcquireResourceSharedLite(v124, 1u);
      if ( (*(_DWORD *)(v98 + 200) & 0x4000) != 0 && *(int *)(v98 + 196) >= 2 )
      {
        v168 = RtlEqualSid(**(PSID **)(v121 + 152), **(PSID **)(v98 + 152));
        v99 = Object;
        if ( !v168
          && OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO((__int64)Object - 48)
          && SepSidInTokenSidHash(v121 + 808, 0LL, (unsigned __int8 *)SeConstrainedImpersonationCapabilitySid, 0, 1, 0) )
        {
          ObHandleRevocationBlockAddObject(*(_QWORD *)(v98 + 216) + 136LL, v99);
        }
      }
      else
      {
        v99 = Object;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v121 + 48));
      KeLeaveCriticalRegionThread();
      ExReleaseResourceLite(*(PERESOURCE *)(v98 + 48));
      KeLeaveCriticalRegionThread();
    }
    else
    {
LABEL_143:
      v99 = Object;
    }
    if ( a5 && v252 )
      *v252 = v99;
    v100 = v215;
    NamedObject = v214 != 0 ? 0x40000000 : 0;
    if ( v215 )
      v72 |= 0xFFFFFFFF80000000uLL;
    v101 = v250;
    *v250 = v72;
  }
  else
  {
    ObpDecrementHandleCount(PROCESS, v54, v86, v87);
    v99 = Object;
    if ( a5 )
      ObDereferenceObjectExWithTag((ULONG_PTR)Object, a5, 0x6E48624Fu);
    v100 = v215;
    NamedObject = -1073741670;
    v101 = v250;
  }
  v102 = (PVOID *)v227[0];
  if ( v227[0] != v227 )
  {
    v262 = &v244;
    v261 = 0;
    v256[0] = 1;
    v256[1] = v100;
    v103 = (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
    v257 = Object;
    v259 = 0LL;
    v260 = NamedObject;
    v258 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v103];
    v244 = v216;
    while ( v102 != v227 )
    {
      v107 = v227[1];
      v108 = (PVOID *)*((_QWORD *)v227[1] + 1);
      if ( *(PVOID **)v227[1] != v227 || *v108 != v227[1] )
        goto LABEL_258;
      v227[1] = *((PVOID *)v227[1] + 1);
      *v108 = v227;
      v109 = (struct _EX_RUNDOWN_REF *)v107[2];
      v259 = v107[3];
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v109[3].Count + 8), v256);
      _m_prefetchw(&v109[7]);
      v110 = v109[7].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v110 != _InterlockedCompareExchange64((volatile signed __int64 *)&v109[7], v110 - 2, v110) )
        ExfReleaseRundownProtection(v109 + 7);
      ExFreePoolWithTag(v107, 0);
      v102 = (PVOID *)v227[0];
    }
    ObfDereferenceObjectWithTag(v257, 0x6243624Fu);
    KeLeaveCriticalRegionThread();
    v99 = Object;
  }
  if ( (xmmword_140FC6B50 & 0x40) != 0 && NamedObject >= 0 )
    EtwpTraceHandle(4384, *v101, (__int64)v99, (__int64)p_FileObjectExtension);
LABEL_153:
  v104 = (struct _EX_RUNDOWN_REF *)PROCESS;
LABEL_154:
  if ( v217 )
  {
    _m_prefetchw(&v104[61]);
    v105 = v104[61].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v105 != _InterlockedCompareExchange64((volatile signed __int64 *)&v104[61], v105 - 2, v105) )
      ExfReleaseRundownProtection(v104 + 61);
  }
  return (unsigned int)NamedObject;
}
