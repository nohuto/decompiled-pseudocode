/*
 * XREFs of ObpCreateHandle @ 0x1408518D0
 * Callers:
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x140326BD0 (ExfAcquireRundownProtection.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     SeComputeCreatorDeniedRights @ 0x140361760 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140372210 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     SepSidInTokenSidHash @ 0x1403D1F20 (SepSidInTokenSidHash.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     SepPrivilegeCheck @ 0x140400B10 (SepPrivilegeCheck.c)
 *     ObReferenceObjectExWithTag @ 0x1404297C0 (ObReferenceObjectExWithTag.c)
 *     PsGetCurrentThreadProcessId @ 0x140431FB0 (PsGetCurrentThreadProcessId.c)
 *     ObDereferenceObjectExWithTag @ 0x1404381A0 (ObDereferenceObjectExWithTag.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwDuplicateObject @ 0x14069B8C0 (ZwDuplicateObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ObpDecrementHandleCount @ 0x140844E00 (ObpDecrementHandleCount.c)
 *     CmpCloseKeyObject @ 0x140845600 (CmpCloseKeyObject.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140845A08 (EtwpEventWriteTemplateSessAndProv.c)
 *     IopCloseFile @ 0x140845AF0 (IopCloseFile.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExpLookupHandleTableEntry @ 0x140850180 (ExpLookupHandleTableEntry.c)
 *     EtwpTraceHandle @ 0x140850E08 (EtwpTraceHandle.c)
 *     ExpUpdateDebugInfo @ 0x140851530 (ExpUpdateDebugInfo.c)
 *     ExpFreeTablePagedPool @ 0x1408517C0 (ExpFreeTablePagedPool.c)
 *     ExpGetHandleExtraInfo @ 0x140851804 (ExpGetHandleExtraInfo.c)
 *     ObpIncrementHandleCountEx @ 0x1408539A0 (ObpIncrementHandleCountEx.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140854390 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140854730 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 *     ObpDeleteNameCheck @ 0x14085AF80 (ObpDeleteNameCheck.c)
 *     SepConcatenatePrivileges @ 0x140862710 (SepConcatenatePrivileges.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140862984 (ObpReferenceSecurityDescriptorSlow.c)
 *     SeAppendPrivileges @ 0x140862AC0 (SeAppendPrivileges.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x14086ED34 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObDereferenceSecurityDescriptor @ 0x14086EF20 (ObDereferenceSecurityDescriptor.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14089F8F0 (SePrivilegedServiceAuditAlarm.c)
 *     ObpInsertOrLocateNamedObject @ 0x140915990 (ObpInsertOrLocateNamedObject.c)
 *     ObpSetObjectAuditInfo @ 0x140919544 (ObpSetObjectAuditInfo.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1409723BC (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateTablePagedPool @ 0x1409726F4 (ExpAllocateTablePagedPool.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409851A4 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409858B0 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1409859D0 (SepAdtClassifyObjectIntoSubCategory.c)
 *     ObpCallPostOperationCallbacks @ 0x14099BDC0 (ObpCallPostOperationCallbacks.c)
 *     ObHandleRevocationBlockAddObject @ 0x1409A7BE0 (ObHandleRevocationBlockAddObject.c)
 *     ObpCreateSymbolicLinkName @ 0x140AC15D4 (ObpCreateSymbolicLinkName.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCreateHandle(
        unsigned int a1,
        char *a2,
        signed int a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        ULONG_PTR a8,
        int a9,
        PVOID *a10,
        __int64 *a11)
{
  char v12; // r12
  ULONG_PTR v13; // r13
  _KPROCESS *v16; // r10
  unsigned int *KernelTime; // r14
  char v18; // di
  char *v19; // r14
  unsigned __int64 v20; // rcx
  ULONG_PTR v21; // r13
  signed __int64 v22; // rdx
  signed __int64 v23; // rax
  signed __int64 v24; // rbx
  signed __int64 v25; // rdx
  unsigned __int64 Pool2; // rbx
  NTSTATUS NamedObject; // r15d
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v29; // rax
  BOOLEAN v30; // al
  PPRIVILEGE_SET v31; // r15
  BOOLEAN v32; // r13
  ULONG PrivilegeCount; // r8d
  struct _LIST_ENTRY *Flink; // r14
  int v35; // edx
  unsigned int v36; // eax
  ACCESS_MASK v37; // ecx
  __int64 v38; // rcx
  signed __int64 v39; // rax
  signed __int64 v40; // rtt
  _DWORD *v41; // rbx
  signed int v42; // eax
  int v43; // ecx
  signed __int64 v44; // rdx
  signed __int64 v45; // rax
  signed __int64 v46; // rdi
  signed __int64 v47; // rdx
  unsigned __int64 v48; // rdi
  signed __int64 v49; // rax
  signed __int64 v50; // rtt
  void *v51; // rax
  char *v52; // rbx
  PVOID v53; // r14
  char *v54; // r15
  __int64 v55; // rdi
  int v56; // ebx
  signed __int64 v57; // rdx
  signed __int64 v58; // rax
  signed __int64 v59; // rbx
  signed __int64 v60; // rdx
  unsigned __int64 v61; // rbx
  int v62; // r14d
  signed __int64 v63; // rax
  signed __int64 v64; // rtt
  __int64 v65; // rax
  int v66; // eax
  struct _LIST_ENTRY *v67; // r14
  unsigned int v68; // ebx
  unsigned __int64 v69; // rcx
  struct _KTHREAD *v70; // r12
  unsigned int *v71; // r8
  __int64 v72; // r14
  char v73; // al
  unsigned int Number; // edx
  unsigned int v75; // ecx
  __int64 v76; // rbx
  unsigned int v77; // eax
  ULONG_PTR v78; // rbx
  __int64 *v79; // rax
  __int64 *v80; // r15
  __int64 *v81; // r15
  __int64 v82; // rax
  int v83; // eax
  unsigned int v84; // eax
  unsigned int *v85; // r10
  _QWORD *v86; // r12
  char v87; // al
  PVOID v88; // rbx
  __int64 v89; // rax
  __int64 v90; // r12
  char v91; // di
  void *v92; // r15
  PVOID v93; // rbx
  unsigned int v94; // ebx
  _DWORD *v95; // rdx
  unsigned __int64 v96; // rbx
  bool v97; // al
  __int64 *v98; // rsi
  PVOID *v99; // r8
  unsigned __int64 v100; // rcx
  struct _EX_RUNDOWN_REF *v101; // rbx
  unsigned __int64 v102; // rtt
  _QWORD *v104; // rdi
  PVOID *v105; // rax
  struct _EX_RUNDOWN_REF *v106; // rbx
  unsigned __int64 v107; // rtt
  volatile signed __int64 *v108; // rax
  volatile signed __int64 *v109; // rbx
  volatile signed __int64 v110; // rcx
  __int64 (__usercall *v111)@<rax>(ULONG_PTR@<rcx>, PULONG, int, int, __int64, char); // rax
  __int64 v112; // r14
  NTSTATUS SetSecurityObject; // eax
  struct _EX_RUNDOWN_REF *p_Blink; // rdi
  unsigned __int64 v115; // rtt
  _DWORD *v116; // rax
  BOOLEAN v117; // al
  unsigned __int64 v118; // rdi
  struct _KTHREAD *v119; // rax
  struct _KTHREAD *v120; // rax
  struct _ERESOURCE *v121; // rcx
  unsigned __int64 v122; // rdx
  __int64 v123; // r14
  int v124; // eax
  struct _EX_RUNDOWN_REF *v125; // r15
  struct _KTHREAD *v126; // rax
  struct _KTHREAD *v127; // rax
  __int64 *v128; // rax
  signed __int64 *v129; // r10
  __int64 *v130; // r14
  struct _EX_RUNDOWN_REF *v131; // rax
  struct _EX_RUNDOWN_REF *Count; // r14
  unsigned __int64 v133; // rtt
  signed __int64 v134; // rax
  signed __int64 v135; // rdx
  signed __int64 v136; // rtt
  struct _KTHREAD *v137; // rcx
  bool v138; // zf
  unsigned __int64 v139; // rtt
  struct _KTHREAD *v140; // rax
  ULONG_PTR v141; // rcx
  __int64 *v142; // rax
  signed __int64 *v143; // rcx
  __int64 *v144; // rdx
  signed __int64 *v145; // r14
  signed __int64 v146; // rax
  signed __int64 v147; // rdx
  signed __int64 v148; // rtt
  struct _KTHREAD *v149; // rcx
  unsigned __int64 v150; // rtt
  PVOID **v151; // rax
  PVOID ***v152; // rcx
  struct _KTHREAD *v153; // rax
  _QWORD *TablePagedPool; // rax
  _QWORD *HandleExtraInfo; // rax
  unsigned int v156; // eax
  ULONG_PTR v157; // rbx
  __int64 *v158; // rax
  __int64 *v159; // r14
  __int64 v160; // rax
  __int64 v161; // rax
  void *v162; // rdx
  __int64 v163; // r8
  bool v164; // r15
  PVOID v165; // rsi
  __int64 v166; // rcx
  volatile signed __int32 *v167; // r15
  __int64 *v168; // rax
  signed __int8 v169; // cf
  __int64 v170; // r8
  unsigned __int64 CurrentThreadProcessId; // rbx
  __int64 v172; // rax
  unsigned __int16 v173; // r12
  char v174; // al
  int v175; // edx
  unsigned __int64 v176; // rcx
  __int64 v177; // rbx
  unsigned int v178; // r12d
  signed __int64 v179; // rsi
  PRKPROCESS v180; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  int (__fastcall *v182)(__int64, struct _FILE_OBJECT *, __int64, __int64); // rax
  struct _KTHREAD *v183; // rax
  __int64 *v184; // rax
  __int64 v185; // rdx
  int v186; // ecx
  int v187; // eax
  volatile signed __int64 *v188; // rdx
  signed __int64 v189; // rax
  signed __int64 v190; // r8
  __int64 v191; // rtt
  int v192; // ecx
  struct _LIST_ENTRY *v193; // r14
  struct _LIST_ENTRY *v194; // rdx
  unsigned int v195; // eax
  PPRIVILEGE_SET v196; // r8
  struct _LIST_ENTRY *v197; // r15
  __int64 v198; // rdx
  unsigned int v199; // eax
  ULONG *PreviouslyGrantedAccess; // [rsp+20h] [rbp-100h]
  PPRIVILEGE_SET *Privileges; // [rsp+28h] [rbp-F8h]
  int GenericMapping; // [rsp+30h] [rbp-F0h]
  PGENERIC_MAPPING GenericMappinga; // [rsp+30h] [rbp-F0h]
  __int64 AccessMode; // [rsp+38h] [rbp-E8h]
  int AccessModea; // [rsp+38h] [rbp-E8h]
  int GrantedAccess; // [rsp+40h] [rbp-E0h]
  __int64 v207; // [rsp+88h] [rbp-98h]
  char v208; // [rsp+A0h] [rbp-80h]
  bool v209; // [rsp+A1h] [rbp-7Fh]
  int v210; // [rsp+A4h] [rbp-7Ch] BYREF
  char v211; // [rsp+A8h] [rbp-78h]
  __int64 *v212; // [rsp+B0h] [rbp-70h]
  unsigned int *v213; // [rsp+B8h] [rbp-68h]
  PRKPROCESS PROCESS; // [rsp+C0h] [rbp-60h]
  PVOID Object; // [rsp+C8h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+D0h] [rbp-50h]
  ULONG Length; // [rsp+D8h] [rbp-48h] BYREF
  NTSTATUS AccessStatus; // [rsp+DCh] [rbp-44h] BYREF
  int v219; // [rsp+E0h] [rbp-40h] BYREF
  PVOID v220[2]; // [rsp+E8h] [rbp-38h] BYREF
  struct _LIST_ENTRY *v221; // [rsp+F8h] [rbp-28h]
  unsigned int v222; // [rsp+100h] [rbp-20h]
  unsigned int *v223; // [rsp+108h] [rbp-18h]
  struct _LIST_ENTRY *v224; // [rsp+110h] [rbp-10h]
  struct _EX_RUNDOWN_REF **v225; // [rsp+118h] [rbp-8h]
  UNICODE_STRING *v226; // [rsp+120h] [rbp+0h]
  PVOID v227; // [rsp+128h] [rbp+8h] BYREF
  HANDLE TargetHandle; // [rsp+130h] [rbp+10h] BYREF
  PVOID P; // [rsp+138h] [rbp+18h] BYREF
  PVOID **v230; // [rsp+140h] [rbp+20h]
  ACCESS_MASK v231; // [rsp+148h] [rbp+28h] BYREF
  __int64 v232; // [rsp+150h] [rbp+30h]
  void *v233; // [rsp+158h] [rbp+38h] BYREF
  int v234[2]; // [rsp+160h] [rbp+40h] BYREF
  __int64 *v235; // [rsp+168h] [rbp+48h]
  __int64 v236; // [rsp+170h] [rbp+50h]
  __int64 v237; // [rsp+178h] [rbp+58h]
  int v238; // [rsp+180h] [rbp+60h] BYREF
  PPRIVILEGE_SET v239; // [rsp+188h] [rbp+68h] BYREF
  __int64 *v240; // [rsp+190h] [rbp+70h]
  PVOID *v241; // [rsp+198h] [rbp+78h]
  __int128 v242; // [rsp+1A0h] [rbp+80h]
  __int64 v243; // [rsp+1B0h] [rbp+90h]
  PVOID *v244; // [rsp+1B8h] [rbp+98h]
  _DWORD *v245; // [rsp+1C0h] [rbp+A0h]
  PVOID v246; // [rsp+1C8h] [rbp+A8h] BYREF
  __int128 v247; // [rsp+1D0h] [rbp+B0h] BYREF
  __int128 v248; // [rsp+1E0h] [rbp+C0h]
  __int128 v249; // [rsp+1F0h] [rbp+D0h]
  int v250; // [rsp+200h] [rbp+E0h]
  BOOL v251; // [rsp+204h] [rbp+E4h]
  PVOID v252; // [rsp+208h] [rbp+E8h]
  __int64 v253; // [rsp+210h] [rbp+F0h]
  __int64 v254; // [rsp+218h] [rbp+F8h]
  NTSTATUS v255; // [rsp+220h] [rbp+100h]
  int v256; // [rsp+224h] [rbp+104h]
  int *v257; // [rsp+228h] [rbp+108h]
  _DWORD v258[2]; // [rsp+230h] [rbp+110h] BYREF
  __int128 v259; // [rsp+238h] [rbp+118h]
  struct _PRIVILEGE_SET v260; // [rsp+248h] [rbp+128h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+260h] [rbp+140h] BYREF

  v12 = a6;
  v13 = a8;
  v241 = a10;
  v235 = a11;
  v210 = 0;
  LODWORD(v232) = 0;
  HIDWORD(v232) = a9;
  Object = a2;
  v222 = a1;
  BugCheckParameter2 = a8;
  v227 = 0LL;
  v208 = 0;
  P = 0LL;
  v211 = 0;
  *(_OWORD *)v220 = 0LL;
  v16 = KeGetCurrentThread()->ApcState.Process;
  PROCESS = v16;
  if ( (a6 & 0x200) != 0 )
  {
    v16 = PsInitialSystemProcess;
    KernelTime = (unsigned int *)ObpKernelHandleTable;
    PROCESS = PsInitialSystemProcess;
  }
  else
  {
    if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    {
      v213 = 0LL;
      p_Blink = (struct _EX_RUNDOWN_REF *)&v16[1].ProfileListHead.Blink;
      _m_prefetchw(&v16[1].ProfileListHead.Blink);
      v115 = (unsigned __int64)v16[1].ProfileListHead.Blink & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v115 == _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&v16[1].ProfileListHead.Blink,
                     v115 + 2,
                     v115)
        || (v117 = ExfAcquireRundownProtection((PEX_RUNDOWN_REF)&v16[1].ProfileListHead.Blink), v16 = PROCESS, v117) )
      {
        KernelTime = (unsigned int *)v16[1].KernelTime;
        v213 = KernelTime;
        if ( KernelTime )
        {
          a1 = v222;
          v211 = 1;
          goto LABEL_5;
        }
        ExReleaseRundownProtection_0(p_Blink);
      }
      return (unsigned int)-1073741558;
    }
    KernelTime = (unsigned int *)KeGetCurrentThread()->ApcState.Process[1].KernelTime;
    a1 = v222;
  }
  v213 = KernelTime;
LABEL_5:
  v209 = KernelTime == (unsigned int *)ObpKernelHandleTable;
  if ( !a4 || KernelTime == (unsigned int *)ObpKernelHandleTable && !*(_DWORD *)(a4 + 24) )
  {
    if ( (a3 & 0x2000000) != 0 )
      a3 = a3 & 0xEDFFFFFF | 0x10000000;
    if ( (a3 & 0xF0000000) != 0 )
    {
      v116 = (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)];
      if ( a3 < 0 )
        a3 |= v116[19];
      if ( (a3 & 0x40000000) != 0 )
        a3 |= v116[20];
      if ( (a3 & 0x20000000) != 0 )
        a3 |= v116[21];
      if ( (a3 & 0x10000000) != 0 )
        a3 |= v116[22];
      a3 &= 0xFFFFFFFu;
    }
    v210 = a3;
    goto LABEL_66;
  }
  v18 = 1;
  AccessStatus = 0;
  if ( (a6 & 0x400) == 0 )
    v18 = a7;
  if ( a1 - 1 > 1 )
  {
    v41 = (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)];
    v42 = *(_DWORD *)(a4 + 16);
    if ( (v42 & 0x2000000) != 0 )
    {
      v42 = v42 & 0xEDFFFFFF | 0x10000000;
      *(_DWORD *)(a4 + 16) = v42;
    }
    if ( (v42 & 0xF0000000) != 0 )
    {
      if ( v42 < 0 )
        v42 |= v41[19];
      if ( (v42 & 0x40000000) != 0 )
        v42 |= v41[20];
      if ( (v42 & 0x20000000) != 0 )
        v42 |= v41[21];
      if ( (v42 & 0x10000000) != 0 )
        v42 |= v41[22];
      v42 &= 0xFFFFFFFu;
      *(_DWORD *)(a4 + 16) = v42;
    }
    if ( (v42 & 0x1000000) == 0 )
      goto LABEL_54;
    v260.Privilege[0].Luid = SeSecurityPrivilege;
    v260.PrivilegeCount = 1;
    v260.Control = 1;
    v260.Privilege[0].Attributes = 0;
    if ( v18 )
    {
      v166 = *(_QWORD *)(a4 + 32);
      if ( v166 )
      {
        if ( *(int *)(a4 + 40) < 2 )
          goto LABEL_317;
      }
      else
      {
        v166 = *(_QWORD *)(a4 + 48);
      }
      if ( !SepPrivilegeCheck(v166, (__int64)v260.Privilege, 1u, 1, v18) )
      {
LABEL_317:
        SePrivilegedServiceAuditAlarm(0LL, a4 + 32, &v260, 0LL);
        NamedObject = -1073741727;
        AccessStatus = -1073741727;
        goto LABEL_152;
      }
    }
    *(_DWORD *)(a4 + 16) &= ~0x1000000u;
    *(_DWORD *)(a4 + 20) |= 0x1000000u;
    SeAppendPrivileges((PACCESS_STATE)a4, &v260);
LABEL_54:
    v43 = *(_DWORD *)(a4 + 20) | *(_DWORD *)(a4 + 16);
    *(_DWORD *)(a4 + 20) = v43;
    *(_DWORD *)(a4 + 16) = 0;
    *(_DWORD *)(a4 + 20) = v43 & (v41[23] | 0x1000000);
    _m_prefetchw(a2 - 8);
    v44 = *((_QWORD *)a2 - 1);
    if ( (v44 & 0xF) != 0 )
    {
      do
      {
        v45 = _InterlockedCompareExchange64((volatile signed __int64 *)a2 - 1, v44 - 1, v44);
        if ( v44 == v45 )
          break;
        v44 = v45;
      }
      while ( (v45 & 0xF) != 0 );
    }
    v46 = v44;
    v47 = v44 & 0xF;
    v48 = v46 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (unsigned int)v47 <= 1 && v48 )
      v48 = ObpReferenceSecurityDescriptorSlow(a2 - 48, v47, v48);
    *(_DWORD *)(a4 + 20) &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                             (struct _SECURITY_SUBJECT_CONTEXT *)(a4 + 32),
                                             a4,
                                             *(_DWORD *)(a4 + 20),
                                             (void *)v48);
    if ( v48 )
    {
      _m_prefetchw(a2 - 8);
      v49 = *((_QWORD *)a2 - 1);
      while ( (v48 ^ v49) < 0xF )
      {
        v50 = v49;
        v49 = _InterlockedCompareExchange64((volatile signed __int64 *)a2 - 1, v49 + 1, v49);
        if ( v50 == v49 )
          goto LABEL_64;
      }
      ObDereferenceSecurityDescriptor(v48, 1LL);
    }
LABEL_64:
    AccessStatus = 0;
    goto LABEL_65;
  }
  v19 = a2 - 48;
  v231 = 0;
  v239 = 0LL;
  v20 = (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8);
  Length = 0;
  v219 = 0;
  v21 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v20];
  v226 = (UNICODE_STRING *)v21;
  if ( *(_UNKNOWN **)(v21 + 152) != &SeDefaultObjectMethod )
  {
    v219 = 447;
    Length = ObpDefaultSecurityDescriptorLength;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v111 = *(__int64 (__usercall **)@<rax>(ULONG_PTR@<rcx>, PULONG, int, int, __int64, char))(v21 + 152);
      v112 = (__int64)(v19 + 40);
      AccessMode = v21 + 76;
      GenericMapping = *(_DWORD *)(v21 + 100);
      LOBYTE(v212) = 1;
      if ( (char *)v111 == (char *)CmpSecurityMethod )
      {
        SetSecurityObject = CmpSecurityMethod(
                              (_DWORD)a2,
                              1,
                              (unsigned int)&v219,
                              Pool2,
                              (__int64)&Length,
                              v112,
                              GenericMapping,
                              AccessMode);
      }
      else if ( v111 == IopGetSetSecurityObject )
      {
        SetSecurityObject = IopGetSetSecurityObject((ULONG_PTR)a2, &Length, v112, GenericMapping, AccessMode, v18);
      }
      else
      {
        PreviouslyGrantedAccess = &Length;
        SetSecurityObject = guard_dispatch_icall_no_overrides(a2);
      }
      NamedObject = SetSecurityObject;
      if ( SetSecurityObject == -1073741789 )
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
        ObpDefaultSecurityDescriptorLength = Length;
        Pool2 = ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
        {
          NamedObject = -1073741670;
          goto LABEL_319;
        }
        PreviouslyGrantedAccess = &Length;
        LOBYTE(v212) = 1;
        NamedObject = guard_dispatch_icall_no_overrides(Object);
      }
      if ( NamedObject >= 0 )
        goto LABEL_19;
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    else
    {
      NamedObject = -1073741670;
    }
LABEL_319:
    AccessStatus = NamedObject;
LABEL_320:
    if ( NamedObject < 0 )
      goto LABEL_152;
    v13 = BugCheckParameter2;
    v16 = PROCESS;
    goto LABEL_66;
  }
  _m_prefetchw(v19 + 40);
  v22 = *((_QWORD *)v19 + 5);
  if ( (v22 & 0xF) != 0 )
  {
    do
    {
      v23 = _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 5, v22 - 1, v22);
      if ( v22 == v23 )
        break;
      v22 = v23;
    }
    while ( (v23 & 0xF) != 0 );
  }
  v24 = v22;
  v25 = v22 & 0xF;
  Pool2 = v24 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (unsigned int)v25 <= 1 && Pool2 )
    Pool2 = ObpReferenceSecurityDescriptorSlow(a2 - 48, v25, Pool2);
  LOBYTE(v212) = 0;
  if ( !Pool2 && ((*(_BYTE *)(v21 + 66) & 8) != 0 || (v19[26] & 2) != 0) )
    KeBugCheckEx(0x189u, (ULONG_PTR)(a2 - 48), v21, 1uLL, 0LL);
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
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 32) + 48LL), 1u);
  }
  v30 = SeAccessCheck(
          (PSECURITY_DESCRIPTOR)Pool2,
          (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
          1u,
          *(_DWORD *)(a4 + 16),
          *(_DWORD *)(a4 + 20),
          &v239,
          (PGENERIC_MAPPING)(v21 + 76),
          v18,
          &v231,
          &AccessStatus);
  v31 = v239;
  v32 = v30;
  if ( v239 )
  {
    PrivilegeCount = v239->PrivilegeCount;
    v221 = *(struct _LIST_ENTRY **)(a4 + 72);
    Flink = v221->Flink;
    v35 = (int)v221->Flink->Flink;
    if ( v35 + PrivilegeCount > 3 )
    {
      v224 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
      if ( v224 )
      {
        v193 = v221;
        v194 = v221->Flink;
        if ( v221->Flink )
        {
          if ( LODWORD(v194->Flink) )
            v195 = 12 * LODWORD(v194->Flink) + 8;
          else
            v195 = 8;
        }
        else
        {
          v195 = 0;
        }
        memmove(v224, v194, v195);
        v196 = v31;
        v197 = v224;
        SepConcatenatePrivileges(v224, v198, v196);
        if ( *(_BYTE *)(a4 + 11) )
          ExFreePoolWithTag(v193->Flink, 0);
        v193->Flink = v197;
        *(_BYTE *)(a4 + 11) = 1;
      }
    }
    else
    {
      if ( Flink )
      {
        if ( v35 )
          v36 = 12 * v35 + 8;
        else
          v36 = 8;
      }
      else
      {
        v36 = 0;
      }
      memmove((char *)Flink + v36, v239->Privilege, 12 * PrivilegeCount);
      LODWORD(Flink->Flink) += v31->PrivilegeCount;
    }
    CmSiFreeMemory(v239);
  }
  if ( v32 )
  {
    v37 = v231;
    *(_DWORD *)(a4 + 20) |= v231;
    *(_DWORD *)(a4 + 16) &= ~(v37 | 0x2000000);
  }
  if ( v18 )
    SeOpenObjectAuditAlarmWithTransaction(
      v226 + 1,
      Object,
      0LL,
      (PSECURITY_DESCRIPTOR)Pool2,
      (PACCESS_STATE)a4,
      0,
      v32,
      v18,
      0LL,
      (PBOOLEAN)(a4 + 10));
  ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v38 = *(_QWORD *)(a4 + 32);
  if ( v38 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v38 + 48));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( (_BYTE)v212 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  else
  {
    _m_prefetchw((char *)Object - 8);
    v39 = *((_QWORD *)Object - 1);
    while ( (Pool2 ^ v39) < 0xF )
    {
      v40 = v39;
      v39 = _InterlockedCompareExchange64((volatile signed __int64 *)Object - 1, v39 + 1, v39);
      if ( v40 == v39 )
        goto LABEL_39;
    }
    ObDereferenceSecurityDescriptor(Pool2, 1LL);
  }
LABEL_39:
  if ( !v32 )
  {
    NamedObject = AccessStatus;
    goto LABEL_320;
  }
  v13 = BugCheckParameter2;
LABEL_65:
  v16 = PROCESS;
  v210 = *(_DWORD *)(a4 + 20);
LABEL_66:
  v51 = 0LL;
  v233 = 0LL;
  if ( v13 )
  {
    v51 = *(void **)(v13 + 32);
    v233 = v51;
  }
  v52 = (char *)Object;
  LOBYTE(PreviouslyGrantedAccess) = a7;
  NamedObject = ObpIncrementHandleCountEx(v222, &v210, v16, Object, (_DWORD)PreviouslyGrantedAccess, a6, v51);
  if ( NamedObject < 0 )
    goto LABEL_152;
  if ( a4 )
  {
    if ( v13 )
    {
      v162 = v52;
      v101 = (struct _EX_RUNDOWN_REF *)PROCESS;
      NamedObject = ObpInsertOrLocateNamedObject(PROCESS, v162, a7, v13, (__int64)&v227);
      if ( NamedObject < 0 )
        goto LABEL_153;
      v53 = v227;
      v54 = (char *)Object;
      if ( v227 == Object )
      {
        v53 = 0LL;
        v227 = 0LL;
      }
      else
      {
        v54 = (char *)v227;
        Object = v227;
        v208 = 1;
      }
    }
    else
    {
      v53 = v227;
      v54 = v52;
    }
    if ( *(_BYTE *)(a4 + 10) )
      v12 = a6 | 4;
  }
  else
  {
    v53 = v227;
    v54 = v52;
  }
  v55 = (__int64)(v54 - 48);
  v221 = (struct _LIST_ENTRY *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v54 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v54 - 48) >> 8)];
  v56 = (HIDWORD(v221[5].Blink) | 0x1000000) & v210;
  v210 = v56;
  if ( a4 )
  {
    _m_prefetchw((const void *)(v55 + 40));
    v57 = *(_QWORD *)(v55 + 40);
    if ( (v57 & 0xF) != 0 )
    {
      do
      {
        v58 = _InterlockedCompareExchange64((volatile signed __int64 *)(v55 + 40), v57 - 1, v57);
        if ( v57 == v58 )
          break;
        v57 = v58;
      }
      while ( (v58 & 0xF) != 0 );
    }
    v59 = v57;
    v60 = v57 & 0xF;
    v61 = v59 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (unsigned int)v60 <= 1 && v61 )
      v61 = ObpReferenceSecurityDescriptorSlow(v54 - 48, v60, v61);
    v62 = SeComputeCreatorDeniedRights((struct _SECURITY_SUBJECT_CONTEXT *)(a4 + 32), a4, v210, (void *)v61);
    if ( v61 )
    {
      _m_prefetchw((const void *)(v55 + 40));
      v63 = *(_QWORD *)(v55 + 40);
      while ( (v61 ^ v63) < 0xF )
      {
        v64 = v63;
        v63 = _InterlockedCompareExchange64((volatile signed __int64 *)(v55 + 40), v63 + 1, v63);
        if ( v64 == v63 )
          goto LABEL_85;
      }
      ObDereferenceSecurityDescriptor(v61, 1LL);
    }
LABEL_85:
    v65 = *(_QWORD *)(a4 + 72);
    v56 = ~v62 & v210;
    v53 = v227;
    v210 = v56;
    *(_DWORD *)(a4 + 20) = v56;
    v66 = *(_DWORD *)(v65 + 28);
    LODWORD(v232) = v66;
  }
  else
  {
    v66 = v232;
  }
  LODWORD(v224) = v66;
  if ( a5 )
  {
    ObReferenceObjectExWithTag((ULONG_PTR)v54, a5);
    v56 = v210;
  }
  if ( v53 )
  {
    ObfDereferenceObject(v53);
    v56 = v210;
  }
  v67 = v221;
  if ( BugCheckParameter2 && v221 == ObpSymbolicLinkObjectType && !v208 )
  {
    ObpCreateSymbolicLinkName(v54);
    v56 = v210;
  }
  v220[1] = v220;
  v220[0] = v220;
  if ( (BYTE2(v67[4].Flink) & 0x40) != 0 && v67[12].Blink != (struct _LIST_ENTRY *)&v67[12].Blink )
  {
    v122 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v54 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v54 - 48) >> 8);
    v247 = 0LL;
    v248 = 0LL;
    v123 = ObTypeIndexTable[v122];
    v230 = 0LL;
    v249 = 0LL;
    v240 = (__int64 *)v123;
    v124 = v56 & *(_DWORD *)(v123 + 96);
    *((_QWORD *)&v242 + 1) = v54;
    LODWORD(v226) = v124;
    v125 = 0LL;
    v244 = 0LL;
    v245 = v258;
    LODWORD(v242) = 1;
    DWORD1(v242) = v209;
    v259 = 0LL;
    v243 = v123;
    v258[1] = v56;
    v258[0] = v56;
    v225 = (struct _EX_RUNDOWN_REF **)(v123 + 200);
    v126 = KeGetCurrentThread();
    --v126->KernelApcDisable;
    ObfReferenceObjectWithTag(*((PVOID *)&v242 + 1), 0x6243624Fu);
    v127 = KeGetCurrentThread();
    BugCheckParameter2 = v123 + 184;
    --v127->SpecialApcDisable;
    v128 = KeAbPreAcquire(v123 + 184, 0LL);
    v129 = (signed __int64 *)BugCheckParameter2;
    v130 = v128;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    {
      ExfAcquirePushLockSharedEx(v129, 0, v128, (unsigned __int64)v129);
      v129 = (signed __int64 *)BugCheckParameter2;
    }
    if ( v130 )
      *((_BYTE *)v130 + 10) = 1;
    v131 = (struct _EX_RUNDOWN_REF *)v225;
    Count = *v225;
    while ( 1 )
    {
      if ( Count == v131 )
      {
        v145 = v240 + 23;
        _m_prefetchw(v240 + 23);
        v146 = *v145;
        v147 = *v145 - 16;
        if ( (*v145 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v147 = 0LL;
        if ( (v146 & 2) != 0 || (v148 = *v145, v148 != _InterlockedCompareExchange64(v145, v147, v146)) )
          ExfReleasePushLock(v145);
        KeAbPostRelease((ULONG_PTR)v145);
        v149 = KeGetCurrentThread();
        v138 = v149->SpecialApcDisable++ == -1;
        if ( v138 && ($727077A9B6E167EAE1398C74674DC5A5 *)v149->ApcState.ApcListHead[0].Flink != &v149->152 )
          KiCheckForKernelApcDelivery();
        if ( v125 )
        {
          _m_prefetchw(v125);
          v150 = v125->Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v150 != _InterlockedCompareExchange64((volatile signed __int64 *)v125, v150 - 2, v150) )
            ExfReleaseRundownProtection(v125);
        }
        if ( v220[0] == v220 )
        {
          ObfDereferenceObjectWithTag(*((PVOID *)&v242 + 1), 0x6243624Fu);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
        if ( v209 )
        {
          v56 = v210;
        }
        else
        {
          v56 &= (unsigned int)v226 | v258[0];
          v210 = v56;
          if ( a4 )
            *(_DWORD *)(a4 + 20) = v56;
        }
        break;
      }
      if ( (HIDWORD(Count[2].Ptr) & 1) != 0 && (Count[2].Count & (unsigned int)v242) != 0 )
      {
        _m_prefetchw(&Count[7]);
        v133 = Count[7].Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v133 != _InterlockedCompareExchange64((volatile signed __int64 *)&Count[7], v133 + 2, v133) )
        {
          if ( !ExfAcquireRundownProtection(Count + 7) )
            goto LABEL_234;
          v129 = (signed __int64 *)BugCheckParameter2;
        }
        _m_prefetchw(v129);
        v134 = *v129;
        v135 = *v129 - 16;
        if ( (*v129 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v135 = 0LL;
        if ( (v134 & 2) != 0 || (v136 = *v129, v136 != _InterlockedCompareExchange64(v129, v135, v134)) )
        {
          ExfReleasePushLock(v129);
          v129 = (signed __int64 *)BugCheckParameter2;
        }
        KeAbPostRelease((ULONG_PTR)v129);
        v137 = KeGetCurrentThread();
        v138 = v137->SpecialApcDisable++ == -1;
        if ( v138 && ($727077A9B6E167EAE1398C74674DC5A5 *)v137->ApcState.ApcListHead[0].Flink != &v137->152 )
          KiCheckForKernelApcDelivery();
        if ( v125 )
        {
          _m_prefetchw(v125);
          v139 = v125->Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v139 != _InterlockedCompareExchange64((volatile signed __int64 *)v125, v139 - 2, v139) )
            ExfReleaseRundownProtection(v125);
          v125 = 0LL;
        }
        if ( Count[6].Count )
        {
          v151 = (PVOID **)ExAllocatePool2(0x100uLL);
          v230 = v151;
          if ( !v151 )
          {
            ExReleaseRundownProtection_0(Count + 7);
            if ( v220[0] == v220 )
            {
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              ObfDereferenceObjectWithTag(*((PVOID *)&v242 + 1), 0x6243624Fu);
            }
            else
            {
              v249 = 0xC000009AuLL;
              v247 = v242;
              v248 = (unsigned __int64)v243;
              ObpCallPostOperationCallbacks(&v247, v220);
            }
            NamedObject = -1073741670;
            v176 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v55 + 24) ^ (unsigned __int64)BYTE1(v55);
            memset(&ApcState, 0, sizeof(ApcState));
            v177 = ObTypeIndexTable[v176];
            v178 = 0;
            if ( (*(_BYTE *)(v177 + 66) & 0x10) != 0 || (*(_BYTE *)(v55 + 27) & 8) != 0 )
            {
              v183 = KeGetCurrentThread();
              --v183->KernelApcDisable;
              v184 = KeAbPreAcquire(v55 + 16, 0LL);
              v169 = _interlockedbittestandset64((volatile signed __int32 *)(v55 + 16), 0LL);
              v235 = v184;
              if ( v169 )
              {
                ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v55 + 16), v184, v55 + 16);
                v184 = v235;
              }
              if ( v184 )
                *((_BYTE *)v184 + 10) = 1;
              v179 = *(_QWORD *)(v55 + 8);
              if ( !_InterlockedDecrement64((volatile signed __int64 *)(v55 + 8)) && (*(_BYTE *)(v55 + 27) & 8) != 0 )
                *(_QWORD *)(v55 - ObpInfoMaskToOffset[*(_BYTE *)(v55 + 26) & 0x1F]) = 0LL;
              if ( (*(_BYTE *)(v177 + 66) & 0x10) != 0 )
              {
                if ( (*(_BYTE *)(v55 + 26) & 4) != 0 )
                  v185 = v55 - ObpInfoMaskToOffset[*(_BYTE *)(v55 + 26) & 7];
                else
                  v185 = 0LL;
                if ( (*(_BYTE *)(v55 + 27) & 0x40) != 0 )
                {
                  v186 = *(_DWORD *)(v185 + 8);
                  v178 = v186 & 0xFFFFFF;
                  v187 = v186 ^ (v186 ^ (v186 - 1)) & 0xFFFFFF;
LABEL_394:
                  *(_DWORD *)(v185 + 8) = v187;
                }
                else
                {
                  v192 = **(_DWORD **)v185;
                  v185 = *(_QWORD *)v185 + 8LL;
                  while ( v192 )
                  {
                    if ( (*(_DWORD *)(v185 + 8) & 0xFFFFFF) != 0 && *(PRKPROCESS *)v185 == PROCESS )
                    {
                      v178 = *(_DWORD *)(v185 + 8) & 0xFFFFFF;
                      v187 = *(_DWORD *)(v185 + 8) ^ (*(_DWORD *)(v185 + 8) ^ (*(_DWORD *)(v185 + 8) - 1)) & 0xFFFFFF;
                      goto LABEL_394;
                    }
                    v185 += 16LL;
                    --v192;
                  }
                }
                if ( !*(_BYTE *)(v185 + 11) && (*(_DWORD *)(v185 + 8) & 0xFFFFFF) == 0 )
                  *(_QWORD *)v185 = 0LL;
              }
              v188 = (volatile signed __int64 *)(v55 + 16);
              _m_prefetchw((const void *)(v55 + 16));
              v189 = *(_QWORD *)(v55 + 16);
              v190 = v189 - 16;
              if ( (v189 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v190 = 0LL;
              if ( (v189 & 2) != 0
                || (v191 = *(_QWORD *)(v55 + 16), v191 != _InterlockedCompareExchange64(v188, v190, v189)) )
              {
                ExfReleasePushLock((_QWORD *)(v55 + 16));
                v188 = (volatile signed __int64 *)(v55 + 16);
              }
              KeAbPostRelease((ULONG_PTR)v188);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            }
            else
            {
              v179 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v55 + 8), 0xFFFFFFFFFFFFFFFFuLL);
            }
            if ( *(_QWORD *)(v177 + 128) )
            {
              v221 = 0LL;
              v180 = PROCESS;
              LOBYTE(v212) = 0;
              if ( KeGetCurrentThread()->ApcState.Process != PROCESS )
              {
                LOBYTE(v212) = 1;
                ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)PROCESS);
                v221 = PsAttachSiloToCurrentThread(ProcessServerSilo);
                KeStackAttachProcess(PROCESS, &ApcState);
                v180 = PROCESS;
              }
              v182 = *(int (__fastcall **)(__int64, struct _FILE_OBJECT *, __int64, __int64))(v177 + 128);
              if ( (char *)v182 == (char *)CmpCloseKeyObject )
              {
                CmpCloseKeyObject((__int64)v180, v55 + 48, v178, v179);
              }
              else if ( (char *)v182 == (char *)EtwpCloseRegistrationObject )
              {
                if ( v179 == 1 )
                {
                  if ( (*(_BYTE *)(v55 + 146) & 2) != 0
                    && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS) )
                  {
                    EtwpEventWriteTemplateSessAndProv(
                      EtwpEventTracingProvRegHandle,
                      &ETW_EVENT_PROVIDER_UNREGISTERS,
                      0LL,
                      1,
                      0LL,
                      *(_QWORD *)(v55 + 80) + 40LL);
                  }
                  _InterlockedOr16((volatile signed __int16 *)(v55 + 146), 0x20u);
                }
              }
              else if ( v182 == IopCloseFile )
              {
                IopCloseFile((__int64)v180, (struct _FILE_OBJECT *)(v55 + 48), v178, v179);
              }
              else
              {
                guard_dispatch_icall_no_overrides(v180);
              }
              if ( (_BYTE)v212 )
              {
                KiUnstackDetachProcess((__int64)&ApcState, 0LL);
                PsDetachSiloFromCurrentThread(v221);
              }
            }
            if ( v179 == 1 )
              ObpDeleteNameCheck(v55);
            _InterlockedDecrement((volatile signed __int32 *)(v177 + 48));
            if ( a5 )
              ObDereferenceObjectExWithTag((ULONG_PTR)Object, a5, 0x746C6644u);
            goto LABEL_152;
          }
          v151[2] = (PVOID *)Count;
          v151[3] = 0LL;
          v152 = (PVOID ***)v220[1];
          if ( *(PVOID **)v220[1] != v220 )
LABEL_252:
            __fastfail(3u);
          v151[1] = (PVOID *)v220[1];
          *v151 = v220;
          *v152 = v151;
          v220[1] = v151;
        }
        if ( Count[5].Count )
        {
          guard_dispatch_icall_no_overrides(*(_QWORD *)(Count[3].Count + 8));
          if ( Count[6].Count )
            v230[3] = v244;
          else
            v125 = Count + 7;
          v244 = 0LL;
        }
        v140 = KeGetCurrentThread();
        v141 = BugCheckParameter2;
        --v140->SpecialApcDisable;
        v142 = KeAbPreAcquire(v141, 0LL);
        v143 = (signed __int64 *)BugCheckParameter2;
        v144 = v142;
        v212 = v142;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx(v143, 0, v142, (unsigned __int64)v143);
          v144 = v212;
        }
        if ( v144 )
          *((_BYTE *)v144 + 10) = 1;
      }
LABEL_234:
      Count = (struct _EX_RUNDOWN_REF *)Count->Count;
      v129 = (signed __int64 *)BugCheckParameter2;
      v131 = (struct _EX_RUNDOWN_REF *)v225;
    }
  }
  v68 = v56 & 0x1FFFFFF;
  v237 = v68;
  v69 = (v55 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v12 & 7) << 17);
  v236 = v69;
  if ( (v12 & 8) != 0 )
    v68 |= 0x2000000u;
  v70 = KeGetCurrentThread();
  v71 = v213;
  v72 = 0LL;
  LODWORD(v237) = v68;
  v236 = v69 | 1;
  --v70->KernelApcDisable;
  v73 = *((_BYTE *)v71 + 44);
  if ( (v73 & 4) != 0 )
    goto LABEL_119;
  if ( (v73 & 1) != 0 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v75 = ExpFreeListCount;
  v76 = Number;
  LODWORD(v225) = Number;
  LODWORD(v230) = Number;
  LODWORD(v226) = ExpFreeListCount;
LABEL_98:
  LODWORD(BugCheckParameter2) = *v71;
  v77 = 0;
  LODWORD(v212) = 0;
  while ( 1 )
  {
    if ( v77 >= v75 )
    {
      v167 = (volatile signed __int32 *)(v71 + 14);
      v76 = (unsigned int)v230;
      LOBYTE(v212) = 1;
      LODWORD(v225) = (_DWORD)v230;
      v223 = &v71[16 * (unsigned int)v230 + 16];
      v168 = KeAbPreAcquire((__int64)(v71 + 14), 0LL);
      v169 = _interlockedbittestandset64(v167, 0LL);
      v240 = v168;
      if ( v169 )
      {
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v167, v168, (__int64)v167);
        v168 = v240;
      }
      if ( v168 )
        *((_BYTE *)v168 + 10) = 1;
      if ( (_DWORD)BugCheckParameter2 == *v213 )
        LOBYTE(v212) = ExpAllocateHandleTableEntrySlow(v213, v223);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v167, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v167);
      KeAbPostRelease((ULONG_PTR)v167);
      if ( (_BYTE)v212 )
      {
        v75 = (unsigned int)v226;
        v71 = v213;
        goto LABEL_98;
      }
      goto LABEL_119;
    }
    v78 = (ULONG_PTR)&v71[16 * v76 + 16];
    if ( *(_QWORD *)(v78 + 8) )
      break;
LABEL_431:
    LODWORD(v212) = v77 + 1;
    v199 = 0;
    if ( (_DWORD)v225 + 1 != v75 )
      v199 = (_DWORD)v225 + 1;
    v76 = v199;
    LODWORD(v225) = v199;
    v77 = (unsigned int)v212;
  }
  v79 = KeAbPreAcquire(v78, 0LL);
  v80 = v79;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v78, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v78, v79, v78);
  if ( v80 )
    *((_BYTE *)v80 + 10) = 1;
  v81 = *(__int64 **)(v78 + 8);
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
    v77 = (unsigned int)v212;
    v75 = (unsigned int)v226;
    v71 = v213;
    goto LABEL_431;
  }
  v72 = *(_QWORD *)(((unsigned __int64)v81 & 0xFFFFFFFFFFFFF000uLL) + 8)
      + 4 * ((__int64)((__int64)v81 - ((unsigned __int64)v81 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  v84 = *(_DWORD *)(((unsigned __int64)v81 & 0xFFFFFFFFFFFFF000uLL) + 8)
      + 4 * ((__int64)((__int64)v81 - ((unsigned __int64)v81 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  if ( !(_DWORD)v224 && !a9 )
  {
    v85 = v213;
LABEL_116:
    if ( *((_QWORD *)v85 + 12) )
      ExpUpdateDebugInfo((__int64)v85, (__int64)v70, v72, 1);
    v81[1] = v237;
    *v81 = v236;
    goto LABEL_119;
  }
  HIDWORD(v224) = (unsigned __int64)(*(_QWORD *)(((unsigned __int64)v81 & 0xFFFFFFFFFFFFF000uLL) + 8)
                                   + 4
                                   * ((__int64)((__int64)v81 - ((unsigned __int64)v81 & 0xFFFFFFFFFFFFF000uLL)) >> 4)) >> 32;
  LODWORD(v224) = v84 & 0xFFFFFC03;
  LODWORD(BugCheckParameter2) = (unsigned __int8)(v84 >> 2);
  v108 = (volatile signed __int64 *)ExpLookupHandleTableEntry(v213, (__int64)v224);
  v109 = v108;
  if ( v108 )
  {
    v110 = *v108;
    if ( *v108 )
    {
LABEL_164:
      *(_QWORD *)(v110 + 8LL * (unsigned int)BugCheckParameter2) = v232;
      goto LABEL_116;
    }
    TablePagedPool = (_QWORD *)ExpAllocateTablePagedPool(*((_QWORD *)v85 + 2), 2048LL);
    if ( TablePagedPool )
    {
      if ( !_InterlockedCompareExchange64(v109, (signed __int64)TablePagedPool, 0LL) )
      {
        v85 = v213;
        _InterlockedIncrement((volatile signed __int32 *)v213 + 1);
        TablePagedPool[(unsigned int)BugCheckParameter2] = v232;
        goto LABEL_116;
      }
      ExpFreeTablePagedPool(*((_QWORD *)v213 + 2), TablePagedPool, 0x800uLL);
      v110 = *v109;
      v85 = v213;
      if ( *v109 )
        goto LABEL_164;
    }
    else
    {
      v85 = v213;
    }
  }
  v213 = (unsigned int *)v72;
  v138 = v85[1] == 0;
  LODWORD(v213) = v72 & 0xFFFFFFFC;
  if ( !v138 )
  {
    HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(v85, (__int64)v213);
    if ( HandleExtraInfo )
      *HandleExtraInfo = 0LL;
  }
  v81[1] = 0LL;
  LOBYTE(v212) = v85[11] & 1;
  if ( (_BYTE)v212 )
    v156 = 0;
  else
    v156 = KeGetPcr()->Prcb.Number;
  v157 = (ULONG_PTR)&v85[16 * v156 + 16];
  v158 = KeAbPreAcquire(v157, 0LL);
  v159 = v158;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v157, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v157, v158, v157);
  if ( v159 )
    *((_BYTE *)v159 + 10) = 1;
  if ( (_BYTE)v212 )
  {
    v161 = *(_QWORD *)(v157 + 16);
    if ( v161 )
      *(_QWORD *)(v161 + 8) = v81;
    else
      *(_QWORD *)(v157 + 8) = v81;
    *(_QWORD *)(v157 + 16) = v81;
  }
  else
  {
    v160 = *(_QWORD *)(v157 + 8);
    v81[1] = v160;
    if ( !v160 )
      *(_QWORD *)(v157 + 16) = v81;
    *(_QWORD *)(v157 + 8) = v81;
  }
  --*(_DWORD *)(v157 + 24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v157, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v157);
  KeAbPostRelease(v157);
  v72 = 0LL;
LABEL_119:
  KeLeaveCriticalRegionThread((__int64)v70);
  if ( !v72 )
  {
    ObpDecrementHandleCount(PROCESS, v55);
    if ( a5 )
      ObDereferenceObjectExWithTag((ULONG_PTR)Object, a5, 0x6E48624Fu);
    v97 = v209;
    NamedObject = -1073741670;
    v98 = v235;
    goto LABEL_147;
  }
  v86 = Object;
  if ( a5 && ObpTraceFlags )
  {
    ObpPushStackInfo((__int64)Object - 48, 0, 1u, 0x746C6644u);
    ObpPushStackInfo((__int64)(v86 - 6), 1, 1u, 0x6E48624Fu);
  }
  if ( !a4 )
    goto LABEL_143;
  v87 = *(_BYTE *)(v55 + 26);
  v88 = 0LL;
  P = 0LL;
  if ( (v87 & 0x20) == 0 || (v89 = ObpInfoMaskToOffset[v87 & 0x3F], v55 == v89) )
  {
    if ( v233 )
      v88 = v233;
    goto LABEL_128;
  }
  v92 = *(void **)(v55 - v89);
  if ( v92 )
  {
    v90 = *(_QWORD *)(a4 + 72);
    TargetHandle = 0LL;
    v91 = 0;
    *(_QWORD *)v234 = v72;
LABEL_291:
    v93 = 0LL;
    goto LABEL_131;
  }
  if ( v233 )
  {
    ObpSetObjectAuditInfo(v55, &v233, 0LL);
    v90 = *(_QWORD *)(a4 + 72);
    TargetHandle = 0LL;
    v91 = 0;
    *(_QWORD *)v234 = v72;
    goto LABEL_129;
  }
  if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((_BYTE *)v86 - 24) ^ ((unsigned __int16)((_WORD)v86 - 48) >> 8))) != *((_BYTE *)IoFileObjectType + 40)
    || (*(_DWORD *)(v86[1] + 52LL) & 0x10) == 0 )
  {
    v163 = *(_QWORD *)(a4 + 72);
    v164 = 0;
    if ( v163 )
      v164 = *(_QWORD *)(v163 + 56) != 0LL;
    if ( (int)ObpAllocateAndQuerySecurityDescriptorInfo((ULONG_PTR)v86) >= 0 )
    {
      v88 = P;
      ObpSetObjectAuditInfo(v55, &P, v164);
    }
  }
LABEL_128:
  v90 = *(_QWORD *)(a4 + 72);
  v91 = 0;
  *(_QWORD *)v234 = v72;
  TargetHandle = 0LL;
  v92 = v88;
  if ( v88 )
    goto LABEL_291;
LABEL_129:
  v92 = *(void **)(v90 + 56);
  v93 = 0LL;
  if ( !v92 )
    v92 = *(void **)(a4 + 64);
LABEL_131:
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
        *(_QWORD *)v90,
        1);
      goto LABEL_133;
    }
  }
  else if ( !*(_BYTE *)(v90 + 216) )
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
    v246 = 0LL;
    ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v246, 0LL);
    v93 = v246;
  }
  LOBYTE(v170) = 1;
  LOWORD(v212) = SepAdtClassifyObjectIntoSubCategory(v93, a4 + 144, v170, 0LL);
  if ( v93 )
    ObfDereferenceObject(v93);
  if ( TargetHandle )
  {
    ZwClose(TargetHandle);
    TargetHandle = 0LL;
  }
  v207 = v90 + 32;
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v172 = *(_QWORD *)v90;
  v173 = (unsigned __int16)v212;
  v174 = SepAdtOpenObjectAuditAlarm(
           (unsigned __int16)v212,
           (int)&SeSubsystemName,
           (int)v234,
           (int)a4 + 144,
           a4 + 128,
           v92,
           *(_QWORD *)(a4 + 32),
           *(_QWORD *)(a4 + 48),
           *(_DWORD *)(a4 + 24),
           *(_DWORD *)(a4 + 20),
           v172,
           1,
           CurrentThreadProcessId,
           2,
           0LL,
           0,
           0LL,
           v207,
           a4);
  GrantedAccess = *(_DWORD *)(a4 + 20);
  AccessModea = *(_DWORD *)(a4 + 24);
  GenericMappinga = *(PGENERIC_MAPPING *)(a4 + 48);
  Privileges = *(PPRIVILEGE_SET **)(a4 + 32);
  LOBYTE(v212) = v174;
  SepAdtStagingEvent(
    v173,
    v175,
    (unsigned int)v234,
    a4 + 144,
    a4 + 128,
    (__int64)Privileges,
    (__int64)GenericMappinga,
    AccessModea,
    GrantedAccess,
    1,
    CurrentThreadProcessId,
    a4);
  v91 = (char)v212;
LABEL_133:
  v94 = v222;
  *(_BYTE *)(a4 + 10) = v91;
  if ( !v94 )
  {
    v95 = **(_DWORD ***)(a4 + 72);
    if ( v95 )
    {
      if ( *v95 && KeGetCurrentThread()->PreviousMode )
        SepAdtPrivilegeObjectAuditAlarm(
          (unsigned int)&SeSubsystemName,
          0,
          0,
          v72,
          *(_QWORD *)(a4 + 32),
          *(_QWORD *)(a4 + 48),
          *(_QWORD *)(a4 + 56),
          *(_DWORD *)(a4 + 20),
          (__int64)v95,
          1);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( !v94 && (v221 == (struct _LIST_ENTRY *)CmKeyObjectType || v221 == (struct _LIST_ENTRY *)IoFileObjectType) )
  {
    v96 = *(_QWORD *)(a4 + 32);
    if ( v96 )
    {
      v118 = *(_QWORD *)(a4 + 48);
      v119 = KeGetCurrentThread();
      --v119->KernelApcDisable;
      if ( v118 >= v96 )
      {
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v96 + 48), 1u);
        v153 = KeGetCurrentThread();
        --v153->KernelApcDisable;
        v121 = *(struct _ERESOURCE **)(v118 + 48);
      }
      else
      {
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v118 + 48), 1u);
        v120 = KeGetCurrentThread();
        --v120->KernelApcDisable;
        v121 = *(struct _ERESOURCE **)(v96 + 48);
      }
      ExAcquireResourceSharedLite(v121, 1u);
      if ( (*(_DWORD *)(v96 + 200) & 0x4000) != 0
        && *(int *)(v96 + 196) >= 2
        && !RtlEqualSid(**(PSID **)(v118 + 152), **(PSID **)(v96 + 152)) )
      {
        v165 = Object;
        if ( OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO((__int64)Object - 48) )
        {
          if ( SepSidInTokenSidHash(
                 v118 + 808,
                 0LL,
                 (unsigned __int8 *)SeConstrainedImpersonationCapabilitySid,
                 0,
                 1,
                 0) )
          {
            ObHandleRevocationBlockAddObject(*(_QWORD *)(v96 + 216) + 128LL, v165);
          }
        }
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v118 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExReleaseResourceLite(*(PERESOURCE *)(v96 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
LABEL_143:
  if ( a5 && v241 )
    *v241 = Object;
  v97 = v209;
  NamedObject = v208 != 0 ? 0x40000000 : 0;
  if ( v209 )
    v72 |= 0xFFFFFFFF80000000uLL;
  v98 = v235;
  *v235 = v72;
LABEL_147:
  v99 = (PVOID *)v220[0];
  if ( v220[0] != v220 )
  {
    v257 = &v238;
    v256 = 0;
    v250 = 1;
    v251 = v97;
    v100 = (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
    v252 = Object;
    v254 = 0LL;
    v255 = NamedObject;
    v253 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v100];
    v238 = v210;
    while ( v99 != v220 )
    {
      v104 = v220[1];
      v105 = (PVOID *)*((_QWORD *)v220[1] + 1);
      if ( *(PVOID **)v220[1] != v220 || *v105 != v220[1] )
        goto LABEL_252;
      v220[1] = *((PVOID *)v220[1] + 1);
      *v105 = v220;
      v106 = (struct _EX_RUNDOWN_REF *)v104[2];
      v254 = v104[3];
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v106[3].Count + 8));
      _m_prefetchw(&v106[7]);
      v107 = v106[7].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v107 != _InterlockedCompareExchange64((volatile signed __int64 *)&v106[7], v107 - 2, v107) )
        ExfReleaseRundownProtection(v106 + 7);
      ExFreePoolWithTag(v104, 0);
      v99 = (PVOID *)v220[0];
    }
    ObfDereferenceObjectWithTag(v252, 0x6243624Fu);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( (xmmword_140FC5B10 & 0x40) != 0 && NamedObject >= 0 )
    EtwpTraceHandle(0x1120u, *v98, (__int64)Object, (__int64)v221);
LABEL_152:
  v101 = (struct _EX_RUNDOWN_REF *)PROCESS;
LABEL_153:
  if ( v211 )
  {
    _m_prefetchw(&v101[61]);
    v102 = v101[61].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v102 != _InterlockedCompareExchange64((volatile signed __int64 *)&v101[61], v102 - 2, v102) )
      ExfReleaseRundownProtection(v101 + 61);
  }
  return (unsigned int)NamedObject;
}
