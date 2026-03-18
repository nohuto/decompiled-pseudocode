/*
 * XREFs of ObpCreateHandle @ 0x14084DAA0
 * Callers:
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x14089BB40 (ObOpenObjectByNameEx.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExfReleaseRundownProtection @ 0x1402456A0 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x140247210 (ExfAcquireRundownProtection.c)
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     SeComputeCreatorDeniedRights @ 0x140359A70 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheck @ 0x14035A5B0 (SeAccessCheck.c)
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1403C3480 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObDereferenceObjectExWithTag @ 0x1403C5220 (ObDereferenceObjectExWithTag.c)
 *     SepSidInTokenSidHash @ 0x1403DF2C0 (SepSidInTokenSidHash.c)
 *     SepPrivilegeCheck @ 0x140403670 (SepPrivilegeCheck.c)
 *     ObReferenceObjectExWithTag @ 0x14041F2E0 (ObReferenceObjectExWithTag.c)
 *     PsGetCurrentThreadProcessId @ 0x1404296F0 (PsGetCurrentThreadProcessId.c)
 *     PsAttachSiloToCurrentThread @ 0x14043CF50 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140444750 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwDuplicateObject @ 0x1406A6B90 (ZwDuplicateObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ObpCreateSymbolicLinkName @ 0x1406F8670 (ObpCreateSymbolicLinkName.c)
 *     ObpDecrementHandleCount @ 0x1408410A0 (ObpDecrementHandleCount.c)
 *     CmpCloseKeyObject @ 0x140841890 (CmpCloseKeyObject.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140841CCC (EtwpEventWriteTemplateSessAndProv.c)
 *     IopCloseFile @ 0x140842070 (IopCloseFile.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ExpLookupHandleTableEntry @ 0x14084BF30 (ExpLookupHandleTableEntry.c)
 *     EtwpTraceHandle @ 0x14084CBBC (EtwpTraceHandle.c)
 *     ExpUpdateDebugInfo @ 0x14084D2F4 (ExpUpdateDebugInfo.c)
 *     ExpFreeTablePagedPool @ 0x14084D4E4 (ExpFreeTablePagedPool.c)
 *     ExpGetHandleExtraInfo @ 0x14084D528 (ExpGetHandleExtraInfo.c)
 *     ObpIncrementHandleCountEx @ 0x14084FB60 (ObpIncrementHandleCountEx.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140850540 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1408508E0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpSecurityMethod @ 0x140852E10 (CmpSecurityMethod.c)
 *     SePrivilegedServiceAuditAlarm @ 0x140853B30 (SePrivilegedServiceAuditAlarm.c)
 *     ObpSetObjectAuditInfo @ 0x140867674 (ObpSetObjectAuditInfo.c)
 *     IopGetSetSecurityObject @ 0x1408796F0 (IopGetSetSecurityObject.c)
 *     ObDereferenceSecurityDescriptor @ 0x140879D10 (ObDereferenceSecurityDescriptor.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x140879E8C (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x14087AEFC (ObpReferenceSecurityDescriptorSlow.c)
 *     ObpDeleteNameCheck @ 0x14089B690 (ObpDeleteNameCheck.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408F1214 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408F1920 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1408F1A40 (SepAdtClassifyObjectIntoSubCategory.c)
 *     ExpAllocateTablePagedPool @ 0x14093BCFC (ExpAllocateTablePagedPool.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14093CBE8 (ExpAllocateHandleTableEntrySlow.c)
 *     ObpCallPostOperationCallbacks @ 0x140940A78 (ObpCallPostOperationCallbacks.c)
 *     ObHandleRevocationBlockAddObject @ 0x1409AAE30 (ObHandleRevocationBlockAddObject.c)
 *     SeAppendPrivileges @ 0x1409D2470 (SeAppendPrivileges.c)
 *     SepConcatenatePrivileges @ 0x1409D25C0 (SepConcatenatePrivileges.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409E45C0 (ObpInsertOrLocateNamedObject.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  _QWORD *v79; // rax
  _QWORD *v80; // rdi
  unsigned __int64 *v81; // rdi
  unsigned __int64 v82; // rax
  int v83; // eax
  unsigned int v84; // eax
  unsigned int *v85; // r10
  _QWORD *v86; // rdi
  char v87; // al
  PPRIVILEGE_SET *v88; // rbx
  __int64 v89; // rax
  __int64 v90; // r15
  char v91; // di
  bool v92; // zf
  PPRIVILEGE_SET *v93; // r12
  unsigned int v94; // ebx
  _DWORD *v95; // rdx
  unsigned __int64 v96; // rbx
  PVOID v97; // rsi
  bool v98; // al
  __int64 *v99; // r15
  PVOID *v100; // r8
  __int64 v101; // r9
  unsigned __int64 v102; // rcx
  struct _EX_RUNDOWN_REF *v103; // rbx
  unsigned __int64 v104; // rtt
  _QWORD *v106; // rsi
  PVOID *v107; // rax
  struct _EX_RUNDOWN_REF *v108; // rbx
  unsigned __int64 v109; // rtt
  volatile signed __int64 *v110; // rax
  volatile signed __int64 *v111; // rbx
  volatile signed __int64 v112; // rcx
  __int64 (__usercall *v113)@<rax>(ULONG_PTR@<rcx>, PULONG, int, int, __int64, char); // rax
  NTSTATUS SetSecurityObject; // eax
  struct _EX_RUNDOWN_REF *p_Blink; // rdi
  unsigned __int64 v116; // rtt
  unsigned int v117; // eax
  _DWORD *v118; // rax
  BOOLEAN v119; // al
  unsigned __int64 v120; // rdi
  struct _KTHREAD *v121; // rax
  struct _KTHREAD *v122; // rax
  struct _ERESOURCE *v123; // rcx
  unsigned __int64 v124; // rdx
  __int64 v125; // rdi
  int v126; // eax
  struct _KTHREAD *v127; // rax
  struct _KTHREAD *v128; // rax
  _QWORD *v129; // rax
  signed __int64 *v130; // r10
  _QWORD *v131; // rdi
  struct _EX_RUNDOWN_REF *v132; // rax
  struct _EX_RUNDOWN_REF *Count; // rdi
  unsigned __int64 v134; // rtt
  signed __int64 v135; // rax
  signed __int64 v136; // rdx
  signed __int64 v137; // rtt
  __int64 v138; // rdx
  __int64 v139; // r8
  __int64 v140; // r9
  struct _KTHREAD *v141; // rcx
  struct _EX_RUNDOWN_REF *v142; // rcx
  unsigned __int64 v143; // rtt
  struct _KTHREAD *v144; // rax
  ULONG_PTR v145; // rcx
  unsigned int *v146; // rax
  signed __int64 *v147; // rcx
  unsigned int *v148; // rdx
  signed __int64 *v149; // rdi
  signed __int64 v150; // rax
  signed __int64 v151; // rdx
  signed __int64 v152; // rtt
  __int64 v153; // rdx
  struct _KTHREAD *v154; // rcx
  struct _EX_RUNDOWN_REF *v155; // rdx
  unsigned __int64 v156; // rtt
  PVOID **v157; // rax
  PVOID ***v158; // rcx
  struct _KTHREAD *v159; // rax
  _QWORD *TablePagedPool; // rax
  _QWORD *HandleExtraInfo; // rax
  unsigned int v162; // eax
  ULONG_PTR v163; // rbx
  _QWORD *v164; // rax
  _QWORD *v165; // r14
  unsigned __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rcx
  __int64 v169; // r8
  bool v170; // r12
  BOOLEAN v171; // al
  volatile signed __int32 *v172; // rdi
  _QWORD *v173; // rax
  signed __int8 v174; // cf
  __int64 v175; // r8
  unsigned __int64 CurrentThreadProcessId; // rbx
  unsigned __int16 v177; // r12
  int v178; // edx
  unsigned __int64 v179; // rcx
  __int64 v180; // rbx
  signed __int64 v181; // rsi
  PRKPROCESS v182; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  void (__fastcall *v184)(__int64, struct _FILE_OBJECT *, __int64, __int64); // rax
  struct _KTHREAD *v185; // rax
  unsigned int *v186; // rax
  __int64 v187; // r8
  int v188; // ecx
  int v189; // eax
  volatile signed __int64 *v190; // rdx
  signed __int64 v191; // rax
  signed __int64 v192; // r8
  __int64 v193; // rtt
  int v194; // ecx
  int v195; // edx
  struct _LIST_ENTRY *v196; // rdi
  struct _LIST_ENTRY *v197; // rdx
  unsigned int v198; // eax
  PPRIVILEGE_SET v199; // r8
  struct _LIST_ENTRY *v200; // r12
  __int64 v201; // rdx
  ULONG *PreviouslyGrantedAccess; // [rsp+20h] [rbp-100h]
  PPRIVILEGE_SET *Privileges; // [rsp+28h] [rbp-F8h]
  PPRIVILEGE_SET *Privilegesa; // [rsp+28h] [rbp-F8h]
  int GenericMapping; // [rsp+30h] [rbp-F0h]
  __int64 AccessMode; // [rsp+38h] [rbp-E8h]
  char v207; // [rsp+A0h] [rbp-80h]
  char v208; // [rsp+A0h] [rbp-80h]
  char HandleTableEntrySlow; // [rsp+A0h] [rbp-80h]
  unsigned __int16 v210; // [rsp+A0h] [rbp-80h]
  char v211; // [rsp+A0h] [rbp-80h]
  char v212; // [rsp+A0h] [rbp-80h]
  char v213; // [rsp+A2h] [rbp-7Eh]
  bool v214; // [rsp+A3h] [rbp-7Dh]
  int v215; // [rsp+A4h] [rbp-7Ch] BYREF
  char v216; // [rsp+A8h] [rbp-78h]
  unsigned int *v217; // [rsp+B0h] [rbp-70h]
  PRKPROCESS PROCESS; // [rsp+B8h] [rbp-68h]
  PVOID Object; // [rsp+C0h] [rbp-60h]
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp-58h]
  ULONG Length; // [rsp+D0h] [rbp-50h] BYREF
  NTSTATUS AccessStatus; // [rsp+D4h] [rbp-4Ch] BYREF
  struct _LIST_ENTRY *p_FileObjectExtension; // [rsp+D8h] [rbp-48h]
  int v224; // [rsp+E0h] [rbp-40h] BYREF
  struct _EX_RUNDOWN_REF **v225; // [rsp+E8h] [rbp-38h]
  PVOID v226[2]; // [rsp+F0h] [rbp-30h] BYREF
  unsigned int *v227; // [rsp+100h] [rbp-20h]
  unsigned int v228; // [rsp+108h] [rbp-18h]
  PEX_RUNDOWN_REF RunRef; // [rsp+110h] [rbp-10h]
  struct _LIST_ENTRY *v230; // [rsp+118h] [rbp-8h]
  PVOID **v231; // [rsp+120h] [rbp+0h]
  UNICODE_STRING *v232; // [rsp+128h] [rbp+8h]
  HANDLE TargetHandle; // [rsp+130h] [rbp+10h] BYREF
  PVOID v234; // [rsp+138h] [rbp+18h] BYREF
  PVOID P; // [rsp+140h] [rbp+20h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+148h] [rbp+28h] BYREF
  PVOID v237; // [rsp+150h] [rbp+30h] BYREF
  int v238[2]; // [rsp+158h] [rbp+38h] BYREF
  _QWORD *v239; // [rsp+160h] [rbp+40h]
  __int64 v240; // [rsp+168h] [rbp+48h]
  unsigned __int64 v241; // [rsp+170h] [rbp+50h]
  unsigned __int64 v242; // [rsp+178h] [rbp+58h]
  int v243; // [rsp+180h] [rbp+60h] BYREF
  PPRIVILEGE_SET v244; // [rsp+188h] [rbp+68h] BYREF
  __int128 v245; // [rsp+198h] [rbp+78h] BYREF
  __int64 v246; // [rsp+1A8h] [rbp+88h]
  PVOID *v247; // [rsp+1B0h] [rbp+90h]
  _DWORD *v248; // [rsp+1B8h] [rbp+98h]
  __int64 *v249; // [rsp+1C0h] [rbp+A0h]
  PVOID v250; // [rsp+1C8h] [rbp+A8h] BYREF
  _QWORD *v251; // [rsp+1D0h] [rbp+B0h]
  __int128 v252; // [rsp+1D8h] [rbp+B8h] BYREF
  __int128 v253; // [rsp+1E8h] [rbp+C8h]
  __int128 v254; // [rsp+1F8h] [rbp+D8h]
  _DWORD v255[2]; // [rsp+208h] [rbp+E8h] BYREF
  PVOID v256; // [rsp+210h] [rbp+F0h]
  __int64 v257; // [rsp+218h] [rbp+F8h]
  __int64 v258; // [rsp+220h] [rbp+100h]
  NTSTATUS v259; // [rsp+228h] [rbp+108h]
  int v260; // [rsp+22Ch] [rbp+10Ch]
  int *v261; // [rsp+230h] [rbp+110h]
  _DWORD v262[2]; // [rsp+238h] [rbp+118h] BYREF
  __int128 v263; // [rsp+240h] [rbp+120h]
  struct _PRIVILEGE_SET v264; // [rsp+250h] [rbp+130h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+268h] [rbp+148h] BYREF

  v12 = a6;
  v13 = a8;
  v251 = a10;
  v14 = a2;
  v249 = a11;
  v215 = 0;
  LODWORD(v240) = 0;
  HIDWORD(v240) = a9;
  Object = a2;
  v16 = a1;
  v228 = a1;
  BugCheckParameter2 = a8;
  v234 = 0LL;
  v213 = 0;
  P = 0LL;
  v216 = 0;
  *(_OWORD *)v226 = 0LL;
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
      v217 = 0LL;
      p_Blink = (struct _EX_RUNDOWN_REF *)&v17[1].ProfileListHead.Blink;
      _m_prefetchw(&v17[1].ProfileListHead.Blink);
      v116 = (unsigned __int64)v17[1].ProfileListHead.Blink & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v116 == _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&v17[1].ProfileListHead.Blink,
                     v116 + 2,
                     v116)
        || (v119 = ExfAcquireRundownProtection((PEX_RUNDOWN_REF)&v17[1].ProfileListHead.Blink), v17 = PROCESS, v119) )
      {
        KernelTime = (unsigned int *)v17[1].KernelTime;
        v217 = KernelTime;
        if ( KernelTime )
        {
          v16 = v228;
          v216 = 1;
          goto LABEL_5;
        }
        ExReleaseRundownProtection_0(p_Blink);
      }
      return (unsigned int)-1073741558;
    }
    KernelTime = (unsigned int *)KeGetCurrentThread()->ApcState.Process[1].KernelTime;
  }
  v217 = KernelTime;
LABEL_5:
  v214 = KernelTime == (unsigned int *)ObpKernelHandleTable;
  if ( !a4 || KernelTime == (unsigned int *)ObpKernelHandleTable && !*(_DWORD *)(a4 + 24) )
  {
    if ( (a3 & 0x2000000) != 0 )
      a3 = a3 & 0xEDFFFFFF | 0x10000000;
    if ( (a3 & 0xF0000000) != 0 )
    {
      v118 = (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v14[-1].IrpList.Flink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v14 - 48) >> 8)];
      if ( a3 < 0 )
        a3 |= v118[19];
      if ( (a3 & 0x40000000) != 0 )
        a3 |= v118[20];
      if ( (a3 & 0x20000000) != 0 )
        a3 |= v118[21];
      if ( (a3 & 0x10000000) != 0 )
        a3 |= v118[22];
      a3 &= 0xFFFFFFFu;
    }
    v215 = a3;
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
    v264.Privilege[0].Luid = SeSecurityPrivilege;
    v264.PrivilegeCount = 1;
    v264.Control = 1;
    v264.Privilege[0].Attributes = 0;
    if ( v19 )
    {
      v168 = *(_QWORD *)(a4 + 32);
      if ( v168 )
      {
        if ( *(int *)(a4 + 40) < 2 )
          goto LABEL_306;
      }
      else
      {
        v168 = *(_QWORD *)(a4 + 48);
      }
      if ( !SepPrivilegeCheck(v168, (__int64)v264.Privilege, 1u, 1, v19) )
      {
LABEL_306:
        SePrivilegedServiceAuditAlarm(0LL, a4 + 32, &v264, 0LL);
        NamedObject = -1073741727;
        AccessStatus = -1073741727;
        goto LABEL_153;
      }
    }
    *(_DWORD *)(a4 + 16) &= ~0x1000000u;
    *(_DWORD *)(a4 + 20) |= 0x1000000u;
    SeAppendPrivileges((PACCESS_STATE)a4, &v264);
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
                                             (void *)v49);
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
  v244 = 0LL;
  Length = 0;
  v224 = 0;
  v22 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v21];
  v232 = (UNICODE_STRING *)v22;
  if ( *(_UNKNOWN **)(v22 + 152) != &SeDefaultObjectMethod )
  {
    v224 = 447;
    Length = ObpDefaultSecurityDescriptorLength;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v113 = *(__int64 (__usercall **)@<rax>(ULONG_PTR@<rcx>, PULONG, int, int, __int64, char))(v22 + 152);
      AccessMode = v22 + 76;
      GenericMapping = *(_DWORD *)(v22 + 100);
      Privileges = (PPRIVILEGE_SET *)&v14[-1].FileObjectExtension;
      p_FileObjectExtension = (struct _LIST_ENTRY *)&v14[-1].FileObjectExtension;
      v207 = 1;
      if ( (char *)v113 == (char *)CmpSecurityMethod )
      {
        SetSecurityObject = CmpSecurityMethod(
                              (_DWORD)v14,
                              1,
                              (unsigned int)&v224,
                              Pool2,
                              (__int64)&Length,
                              (__int64)Privileges,
                              GenericMapping,
                              AccessMode);
      }
      else if ( v113 == IopGetSetSecurityObject )
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
        SetSecurityObject = guard_dispatch_icall_no_overrides(v14, 1LL, &v224, Pool2);
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
          goto LABEL_321;
        }
        PreviouslyGrantedAccess = &Length;
        v207 = 1;
        NamedObject = guard_dispatch_icall_no_overrides(v14, 1LL, &v224, Pool2);
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
  v207 = 0;
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
          &v244,
          (PGENERIC_MAPPING)(v22 + 76),
          v19,
          &GrantedAccess,
          &AccessStatus);
  v32 = v244;
  v33 = v31;
  if ( v244 )
  {
    PrivilegeCount = v244->PrivilegeCount;
    p_FileObjectExtension = *(struct _LIST_ENTRY **)(a4 + 72);
    Flink = p_FileObjectExtension->Flink;
    v36 = (int)p_FileObjectExtension->Flink->Flink;
    if ( v36 + PrivilegeCount > 3 )
    {
      v230 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
      if ( v230 )
      {
        v196 = p_FileObjectExtension;
        v197 = p_FileObjectExtension->Flink;
        if ( p_FileObjectExtension->Flink )
        {
          if ( LODWORD(v197->Flink) )
            v198 = 12 * LODWORD(v197->Flink) + 8;
          else
            v198 = 8;
        }
        else
        {
          v198 = 0;
        }
        memmove(v230, v197, v198);
        v199 = v32;
        v200 = v230;
        SepConcatenatePrivileges(v230, v201, v199);
        if ( *(_BYTE *)(a4 + 11) )
          ExFreePoolWithTag(v196->Flink, 0);
        v196->Flink = v200;
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
      memmove((char *)Flink + v37, v244->Privilege, 12 * PrivilegeCount);
      LODWORD(Flink->Flink) += v32->PrivilegeCount;
    }
    CmSiFreeMemory(v244);
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
      v232 + 1,
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
  if ( v207 )
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
  v215 = *(_DWORD *)(a4 + 20);
LABEL_66:
  v52 = 0LL;
  v237 = 0LL;
  if ( v13 )
  {
    v52 = *(void **)(v13 + 32);
    v237 = v52;
  }
  LOBYTE(PreviouslyGrantedAccess) = a7;
  NamedObject = ObpIncrementHandleCountEx(v228, &v215, v17, v14, (_DWORD)PreviouslyGrantedAccess, a6, v52);
  if ( NamedObject < 0 )
    goto LABEL_153;
  if ( a4 )
  {
    if ( v13 )
    {
      v103 = (struct _EX_RUNDOWN_REF *)PROCESS;
      NamedObject = ObpInsertOrLocateNamedObject(PROCESS, v14, a7, v13, (__int64)&v234);
      if ( NamedObject < 0 )
        goto LABEL_154;
      v53 = v234;
      if ( v234 == v14 )
      {
        v53 = 0LL;
        v234 = 0LL;
      }
      else
      {
        v14 = (struct _FILE_OBJECT *)v234;
        Object = v234;
        v213 = 1;
      }
    }
    else
    {
      v53 = v234;
    }
    if ( *(_BYTE *)(a4 + 10) )
      v12 = a6 | 4;
  }
  else
  {
    v53 = v234;
  }
  v54 = (__int64)&v14[-1].Event.Header.WaitListHead.Blink;
  p_FileObjectExtension = (struct _LIST_ENTRY *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v14[-1].IrpList.Flink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v14 - 48) >> 8)];
  v55 = (HIDWORD(p_FileObjectExtension[5].Blink) | 0x1000000) & v215;
  v215 = v55;
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
    v61 = SeComputeCreatorDeniedRights((struct _SECURITY_SUBJECT_CONTEXT *)(a4 + 32), a4, v215, (void *)v60);
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
    v55 = ~v61 & v215;
    v53 = v234;
    v215 = v55;
    *(_DWORD *)(a4 + 20) = v55;
    v65 = *(_DWORD *)(v64 + 28);
    LODWORD(v240) = v65;
  }
  else
  {
    v65 = v240;
  }
  LODWORD(v230) = v65;
  if ( a5 )
  {
    ObReferenceObjectExWithTag((ULONG_PTR)v14, a5);
    v55 = v215;
  }
  if ( v53 )
  {
    ObfDereferenceObject(v53);
    v55 = v215;
  }
  v66 = p_FileObjectExtension;
  if ( BugCheckParameter2 && p_FileObjectExtension == ObpSymbolicLinkObjectType && !v213 )
  {
    ObpCreateSymbolicLinkName((ULONG_PTR)v14);
    v55 = v215;
  }
  v226[1] = v226;
  v226[0] = v226;
  if ( (BYTE2(v66[4].Flink) & 0x40) != 0 && v66[12].Blink != (struct _LIST_ENTRY *)&v66[12].Blink )
  {
    v124 = (unsigned __int8)ObHeaderCookie ^ LOBYTE(v14[-1].IrpList.Flink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v14 - 48) >> 8);
    v252 = 0LL;
    v253 = 0LL;
    v125 = ObTypeIndexTable[v124];
    v231 = 0LL;
    RunRef = 0LL;
    v254 = 0LL;
    v126 = v55 & *(_DWORD *)(v125 + 96);
    *((_QWORD *)&v245 + 1) = v14;
    v247 = 0LL;
    LODWORD(v232) = v126;
    v248 = v262;
    LODWORD(v245) = 1;
    DWORD1(v245) = v214;
    v263 = 0LL;
    v246 = v125;
    v262[1] = v55;
    v262[0] = v55;
    v127 = KeGetCurrentThread();
    v225 = (struct _EX_RUNDOWN_REF **)(v125 + 200);
    v239 = (_QWORD *)v125;
    --v127->KernelApcDisable;
    ObfReferenceObjectWithTag(*((PVOID *)&v245 + 1), 0x6243624Fu);
    v128 = KeGetCurrentThread();
    BugCheckParameter2 = v125 + 184;
    --v128->SpecialApcDisable;
    v129 = KeAbPreAcquire(v125 + 184, 0LL);
    v130 = (signed __int64 *)BugCheckParameter2;
    v131 = v129;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    {
      ExfAcquirePushLockSharedEx(v130, 0, v129, (__int64)v130);
      v130 = (signed __int64 *)BugCheckParameter2;
    }
    if ( v131 )
      *((_BYTE *)v131 + 10) = 1;
    v132 = (struct _EX_RUNDOWN_REF *)v225;
    Count = *v225;
    while ( 1 )
    {
      if ( Count == v132 )
      {
        v149 = v239 + 23;
        _m_prefetchw(v239 + 23);
        v150 = *v149;
        v151 = *v149 - 16;
        if ( (*v149 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v151 = 0LL;
        if ( (v150 & 2) != 0 || (v152 = *v149, v152 != _InterlockedCompareExchange64(v149, v151, v150)) )
          ExfReleasePushLock(v149);
        KeAbPostRelease((ULONG_PTR)v149);
        v154 = KeGetCurrentThread();
        v92 = v154->SpecialApcDisable++ == -1;
        if ( v92 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v154->ApcState.ApcListHead[0].Flink != &v154->152 )
          KiCheckForKernelApcDelivery((__int64)v154, v153);
        v155 = RunRef;
        if ( RunRef )
        {
          _m_prefetchw(RunRef);
          v156 = RunRef->Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v156 != _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v156 - 2, v156) )
            ExfReleaseRundownProtection(v155);
        }
        if ( v226[0] == v226 )
        {
          ObfDereferenceObjectWithTag(*((PVOID *)&v245 + 1), 0x6243624Fu);
          KeLeaveCriticalRegionThread();
        }
        if ( v214 )
        {
          v55 = v215;
        }
        else
        {
          v55 &= (unsigned int)v232 | v262[0];
          v215 = v55;
          if ( a4 )
            *(_DWORD *)(a4 + 20) = v55;
        }
        break;
      }
      if ( (HIDWORD(Count[2].Ptr) & 1) != 0 && (Count[2].Count & (unsigned int)v245) != 0 )
      {
        _m_prefetchw(&Count[7]);
        v134 = Count[7].Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v134 != _InterlockedCompareExchange64((volatile signed __int64 *)&Count[7], v134 + 2, v134) )
        {
          if ( !ExfAcquireRundownProtection(Count + 7) )
            goto LABEL_240;
          v130 = (signed __int64 *)BugCheckParameter2;
        }
        _m_prefetchw(v130);
        v135 = *v130;
        v136 = *v130 - 16;
        if ( (*v130 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v136 = 0LL;
        if ( (v135 & 2) != 0 || (v137 = *v130, v137 != _InterlockedCompareExchange64(v130, v136, v135)) )
        {
          ExfReleasePushLock(v130);
          v130 = (signed __int64 *)BugCheckParameter2;
        }
        KeAbPostRelease((ULONG_PTR)v130);
        v141 = KeGetCurrentThread();
        v92 = v141->SpecialApcDisable++ == -1;
        if ( v92 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v141->ApcState.ApcListHead[0].Flink != &v141->152 )
          KiCheckForKernelApcDelivery((__int64)v141, v138);
        v142 = RunRef;
        if ( RunRef )
        {
          _m_prefetchw(RunRef);
          v143 = RunRef->Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v143 != _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v143 - 2, v143) )
            ExfReleaseRundownProtection(v142);
          RunRef = 0LL;
        }
        if ( Count[6].Count )
        {
          v157 = (PVOID **)ExAllocatePool2(0x100uLL);
          v231 = v157;
          if ( !v157 )
          {
            ExReleaseRundownProtection_0(Count + 7);
            if ( v226[0] == v226 )
            {
              KeLeaveCriticalRegionThread();
              ObfDereferenceObjectWithTag(*((PVOID *)&v245 + 1), 0x6243624Fu);
            }
            else
            {
              v254 = 0xC000009AuLL;
              v252 = v245;
              v253 = (unsigned __int64)v246;
              ObpCallPostOperationCallbacks(&v252, v226);
            }
            NamedObject = -1073741670;
            v179 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v54 + 24) ^ (unsigned __int64)BYTE1(v54);
            memset(&ApcState, 0, sizeof(ApcState));
            v180 = ObTypeIndexTable[v179];
            LODWORD(v225) = 0;
            if ( (*(_BYTE *)(v180 + 66) & 0x10) != 0 || (*(_BYTE *)(v54 + 27) & 8) != 0 )
            {
              v185 = KeGetCurrentThread();
              --v185->KernelApcDisable;
              v186 = (unsigned int *)KeAbPreAcquire(v54 + 16, 0LL);
              v174 = _interlockedbittestandset64((volatile signed __int32 *)(v54 + 16), 0LL);
              v227 = v186;
              if ( v174 )
              {
                ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v54 + 16), (__int64)v186, v54 + 16);
                v186 = v227;
              }
              if ( v186 )
                *((_BYTE *)v186 + 10) = 1;
              v181 = *(_QWORD *)(v54 + 8);
              if ( !_InterlockedDecrement64((volatile signed __int64 *)(v54 + 8)) && (*(_BYTE *)(v54 + 27) & 8) != 0 )
                *(_QWORD *)(v54 - ObpInfoMaskToOffset[*(_BYTE *)(v54 + 26) & 0x1F]) = 0LL;
              if ( (*(_BYTE *)(v180 + 66) & 0x10) != 0 )
              {
                if ( (*(_BYTE *)(v54 + 26) & 4) != 0 )
                  v187 = v54 - ObpInfoMaskToOffset[*(_BYTE *)(v54 + 26) & 7];
                else
                  v187 = 0LL;
                if ( (*(_BYTE *)(v54 + 27) & 0x40) != 0 )
                {
                  v188 = *(_DWORD *)(v187 + 8);
                  LODWORD(v225) = v188 & 0xFFFFFF;
                  v189 = v188 ^ (v188 ^ (v188 - 1)) & 0xFFFFFF;
LABEL_400:
                  *(_DWORD *)(v187 + 8) = v189;
                }
                else
                {
                  v194 = **(_DWORD **)v187;
                  v187 = *(_QWORD *)v187 + 8LL;
                  while ( v194 )
                  {
                    v195 = *(_DWORD *)(v187 + 8);
                    if ( (v195 & 0xFFFFFF) != 0 && *(PRKPROCESS *)v187 == PROCESS )
                    {
                      LODWORD(v225) = *(_DWORD *)(v187 + 8) & 0xFFFFFF;
                      v189 = v195 ^ (v195 ^ (v195 - 1)) & 0xFFFFFF;
                      goto LABEL_400;
                    }
                    v187 += 16LL;
                    --v194;
                  }
                }
                if ( !*(_BYTE *)(v187 + 11) && (*(_DWORD *)(v187 + 8) & 0xFFFFFF) == 0 )
                  *(_QWORD *)v187 = 0LL;
              }
              v190 = (volatile signed __int64 *)(v54 + 16);
              _m_prefetchw((const void *)(v54 + 16));
              v191 = *(_QWORD *)(v54 + 16);
              v192 = v191 - 16;
              if ( (v191 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v192 = 0LL;
              if ( (v191 & 2) != 0
                || (v193 = *(_QWORD *)(v54 + 16), v193 != _InterlockedCompareExchange64(v190, v192, v191)) )
              {
                ExfReleasePushLock((_QWORD *)(v54 + 16));
                v190 = (volatile signed __int64 *)(v54 + 16);
              }
              KeAbPostRelease((ULONG_PTR)v190);
              KeLeaveCriticalRegionThread();
            }
            else
            {
              v181 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v54 + 8), 0xFFFFFFFFFFFFFFFFuLL);
            }
            if ( *(_QWORD *)(v180 + 128) )
            {
              p_FileObjectExtension = 0LL;
              v182 = PROCESS;
              v212 = 0;
              if ( KeGetCurrentThread()->ApcState.Process != PROCESS )
              {
                v212 = 1;
                ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)PROCESS);
                p_FileObjectExtension = PsAttachSiloToCurrentThread(ProcessServerSilo);
                KeStackAttachProcess(PROCESS, &ApcState);
                v182 = PROCESS;
              }
              v184 = *(void (__fastcall **)(__int64, struct _FILE_OBJECT *, __int64, __int64))(v180 + 128);
              if ( (char *)v184 == (char *)CmpCloseKeyObject )
              {
                CmpCloseKeyObject((__int64)v182, (__int64)v14, (unsigned int)v225, v181);
              }
              else if ( (char *)v184 == (char *)EtwpCloseRegistrationObject )
              {
                if ( v181 == 1 )
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
              else if ( v184 == IopCloseFile )
              {
                IopCloseFile((__int64)v182, v14, (unsigned int)v225, v181);
              }
              else
              {
                guard_dispatch_icall_no_overrides(v182, v14, (unsigned int)v225, v181);
              }
              if ( v212 )
              {
                KiUnstackDetachProcess((__int64)&ApcState, 0);
                PsDetachSiloFromCurrentThread(p_FileObjectExtension);
              }
            }
            if ( v181 == 1 )
              ObpDeleteNameCheck(&v14[-1].Event.Header.WaitListHead.Blink);
            _InterlockedDecrement((volatile signed __int32 *)(v180 + 48));
            if ( a5 )
              ObDereferenceObjectExWithTag((ULONG_PTR)v14, a5, 0x746C6644u);
            goto LABEL_153;
          }
          v157[2] = (PVOID *)Count;
          v157[3] = 0LL;
          v158 = (PVOID ***)v226[1];
          if ( *(PVOID **)v226[1] != v226 )
LABEL_258:
            __fastfail(3u);
          v157[1] = (PVOID *)v226[1];
          *v157 = v226;
          *v158 = v157;
          v226[1] = v157;
        }
        if ( Count[5].Count )
        {
          guard_dispatch_icall_no_overrides(*(_QWORD *)(Count[3].Count + 8), &v245, v139, v140);
          if ( Count[6].Count )
            v231[3] = v247;
          else
            RunRef = Count + 7;
          v247 = 0LL;
        }
        v144 = KeGetCurrentThread();
        v145 = BugCheckParameter2;
        --v144->SpecialApcDisable;
        v146 = (unsigned int *)KeAbPreAcquire(v145, 0LL);
        v147 = (signed __int64 *)BugCheckParameter2;
        v148 = v146;
        v227 = v146;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx(v147, 0, v146, (__int64)v147);
          v148 = v227;
        }
        if ( v148 )
          *((_BYTE *)v148 + 10) = 1;
      }
LABEL_240:
      Count = (struct _EX_RUNDOWN_REF *)Count->Count;
      v130 = (signed __int64 *)BugCheckParameter2;
      v132 = (struct _EX_RUNDOWN_REF *)v225;
    }
  }
  v67 = v55 & 0x1FFFFFF;
  v242 = v67;
  v68 = (v54 << 16) & 0xFFFFFFFFFFF1FFFFuLL;
  v241 = v68 | ((unsigned __int64)(v12 & 7) << 17);
  if ( (v12 & 8) != 0 )
    v67 |= 0x2000000u;
  v69 = KeGetCurrentThread();
  v70 = v68 | ((unsigned __int64)(v12 & 7) << 17) | 1;
  v71 = v217;
  v72 = 0LL;
  LODWORD(v242) = v67;
  v241 = v70;
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
  LODWORD(v231) = Number;
  LODWORD(RunRef) = Number;
  LODWORD(v232) = ExpFreeListCount;
LABEL_98:
  LODWORD(BugCheckParameter2) = *v71;
  v77 = 0;
  LODWORD(v225) = 0;
  while ( 1 )
  {
    if ( v77 >= v75 )
    {
      v172 = (volatile signed __int32 *)(v71 + 14);
      v76 = (unsigned int)RunRef;
      HandleTableEntrySlow = 1;
      LODWORD(v231) = (_DWORD)RunRef;
      v227 = &v71[16 * (unsigned int)RunRef + 16];
      v173 = KeAbPreAcquire((__int64)(v71 + 14), 0LL);
      v174 = _interlockedbittestandset64(v172, 0LL);
      v239 = v173;
      if ( v174 )
      {
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v172, (__int64)v173, (__int64)v172);
        v173 = v239;
      }
      if ( v173 )
        *((_BYTE *)v173 + 10) = 1;
      if ( (_DWORD)BugCheckParameter2 == *v217 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v217, v227);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v172, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v172);
      KeAbPostRelease((ULONG_PTR)v172);
      if ( HandleTableEntrySlow )
      {
        v75 = (unsigned int)v232;
        v71 = v217;
        goto LABEL_98;
      }
      goto LABEL_119;
    }
    v78 = (ULONG_PTR)&v71[16 * v76 + 16];
    if ( *(_QWORD *)(v78 + 8) )
      break;
LABEL_177:
    LODWORD(v225) = v77 + 1;
    v117 = 0;
    if ( (_DWORD)v231 + 1 != v75 )
      v117 = (_DWORD)v231 + 1;
    v76 = v117;
    LODWORD(v231) = v117;
    v77 = (unsigned int)v225;
  }
  v79 = KeAbPreAcquire(v78, 0LL);
  v80 = v79;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v78, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v78, (__int64)v79, v78);
  if ( v80 )
    *((_BYTE *)v80 + 10) = 1;
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
    v77 = (unsigned int)v225;
    v75 = (unsigned int)v232;
    v71 = v217;
    goto LABEL_177;
  }
  v72 = *(_QWORD *)(((unsigned __int64)v81 & 0xFFFFFFFFFFFFF000uLL) + 8)
      + 4 * ((__int64)((__int64)v81 - ((unsigned __int64)v81 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  v84 = *(_DWORD *)(((unsigned __int64)v81 & 0xFFFFFFFFFFFFF000uLL) + 8)
      + 4 * ((__int64)((__int64)v81 - ((unsigned __int64)v81 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  if ( !(_DWORD)v230 && !a9 )
  {
    v85 = v217;
LABEL_116:
    if ( *((_QWORD *)v85 + 12) )
      ExpUpdateDebugInfo((__int64)v85, (__int64)v69, v72, 1);
    v81[1] = v242;
    *v81 = v241;
    goto LABEL_119;
  }
  HIDWORD(v230) = (unsigned __int64)(*(_QWORD *)(((unsigned __int64)v81 & 0xFFFFFFFFFFFFF000uLL) + 8)
                                   + 4
                                   * ((__int64)((__int64)v81 - ((unsigned __int64)v81 & 0xFFFFFFFFFFFFF000uLL)) >> 4)) >> 32;
  LODWORD(v230) = v84 & 0xFFFFFC03;
  LODWORD(BugCheckParameter2) = (unsigned __int8)(v84 >> 2);
  v110 = (volatile signed __int64 *)ExpLookupHandleTableEntry(v217, (__int64)v230);
  v111 = v110;
  if ( v110 )
  {
    v112 = *v110;
    if ( *v110 )
    {
LABEL_165:
      *(_QWORD *)(v112 + 8LL * (unsigned int)BugCheckParameter2) = v240;
      goto LABEL_116;
    }
    TablePagedPool = (_QWORD *)ExpAllocateTablePagedPool(*((_QWORD *)v85 + 2), 2048LL);
    if ( TablePagedPool )
    {
      if ( !_InterlockedCompareExchange64(v111, (signed __int64)TablePagedPool, 0LL) )
      {
        v85 = v217;
        _InterlockedIncrement((volatile signed __int32 *)v217 + 1);
        TablePagedPool[(unsigned int)BugCheckParameter2] = v240;
        goto LABEL_116;
      }
      ExpFreeTablePagedPool(*((_QWORD *)v217 + 2), TablePagedPool, 0x800uLL);
      v112 = *v111;
      v85 = v217;
      if ( *v111 )
        goto LABEL_165;
    }
    else
    {
      v85 = v217;
    }
  }
  v217 = (unsigned int *)v72;
  v92 = v85[1] == 0;
  LODWORD(v217) = v72 & 0xFFFFFFFC;
  if ( !v92 )
  {
    HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(v85, (__int64)v217);
    if ( HandleExtraInfo )
      *HandleExtraInfo = 0LL;
  }
  v81[1] = 0LL;
  v208 = v85[11] & 1;
  if ( v208 )
    v162 = 0;
  else
    v162 = KeGetPcr()->Prcb.Number;
  v163 = (ULONG_PTR)&v85[16 * v162 + 16];
  v164 = KeAbPreAcquire(v163, 0LL);
  v165 = v164;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v163, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v163, (__int64)v164, v163);
  if ( v165 )
    *((_BYTE *)v165 + 10) = 1;
  if ( v208 )
  {
    v167 = *(_QWORD *)(v163 + 16);
    if ( v167 )
      *(_QWORD *)(v167 + 8) = v81;
    else
      *(_QWORD *)(v163 + 8) = v81;
    *(_QWORD *)(v163 + 16) = v81;
  }
  else
  {
    v166 = *(_QWORD *)(v163 + 8);
    v81[1] = v166;
    if ( !v166 )
      *(_QWORD *)(v163 + 16) = v81;
    *(_QWORD *)(v163 + 8) = v81;
  }
  --*(_DWORD *)(v163 + 24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v163, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v163);
  KeAbPostRelease(v163);
  v72 = 0LL;
LABEL_119:
  KeLeaveCriticalRegionThread();
  if ( v72 )
  {
    v86 = Object;
    if ( a5 && ObpTraceFlags )
    {
      ObpPushStackInfo((__int64)Object - 48, 0, 1u, 0x746C6644u);
      ObpPushStackInfo((__int64)(v86 - 6), 1, 1u, 0x6E48624Fu);
    }
    if ( !a4 )
      goto LABEL_143;
    v87 = *(_BYTE *)(v54 + 26);
    P = 0LL;
    v88 = 0LL;
    if ( (v87 & 0x20) == 0 || (v89 = ObpInfoMaskToOffset[v87 & 0x3F], v54 == v89) )
    {
      if ( v237 )
        v88 = (PPRIVILEGE_SET *)v237;
      goto LABEL_128;
    }
    v93 = *(PPRIVILEGE_SET **)(v54 - v89);
    if ( v93 )
    {
      v90 = *(_QWORD *)(a4 + 72);
      v91 = 0;
      *(_QWORD *)v238 = v72;
      TargetHandle = 0LL;
    }
    else
    {
      if ( v237 )
      {
        ObpSetObjectAuditInfo(v54, &v237, 0LL);
        v90 = *(_QWORD *)(a4 + 72);
        TargetHandle = 0LL;
        v91 = 0;
        *(_QWORD *)v238 = v72;
        goto LABEL_129;
      }
      if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((_BYTE *)v86 - 24) ^ ((unsigned __int16)((_WORD)v86 - 48) >> 8))) != *((_BYTE *)IoFileObjectType + 40)
        || (*(_DWORD *)(v86[1] + 52LL) & 0x10) == 0 )
      {
        v169 = *(_QWORD *)(a4 + 72);
        v170 = 0;
        if ( v169 )
          v170 = *(_QWORD *)(v169 + 56) != 0LL;
        if ( (int)ObpAllocateAndQuerySecurityDescriptorInfo((ULONG_PTR)v86) >= 0 )
        {
          v88 = (PPRIVILEGE_SET *)P;
          ObpSetObjectAuditInfo(v54, &P, v170);
        }
      }
LABEL_128:
      v90 = *(_QWORD *)(a4 + 72);
      v91 = 0;
      v92 = v88 == 0LL;
      *(_QWORD *)v238 = v72;
      v93 = v88;
      TargetHandle = 0LL;
      v88 = 0LL;
      if ( v92 )
      {
LABEL_129:
        v93 = *(PPRIVILEGE_SET **)(v90 + 56);
        if ( !v93 )
          v93 = *(PPRIVILEGE_SET **)(a4 + 64);
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
      v250 = 0LL;
      ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v250, 0LL);
      v88 = (PPRIVILEGE_SET *)v250;
    }
    LOBYTE(v175) = 1;
    v210 = SepAdtClassifyObjectIntoSubCategory(v88, a4 + 144, v175, 0LL);
    if ( v88 )
      ObfDereferenceObject(v88);
    if ( TargetHandle )
    {
      ZwClose(TargetHandle);
      TargetHandle = 0LL;
    }
    CurrentThreadProcessId = PsGetCurrentThreadProcessId();
    Privilegesa = v93;
    v177 = v210;
    v211 = SepAdtOpenObjectAuditAlarm(
             v210,
             (int)&SeSubsystemName,
             (int)v238,
             (int)a4 + 144,
             a4 + 128,
             Privilegesa,
             *(_QWORD *)(a4 + 32),
             *(_QWORD *)(a4 + 48),
             *(_DWORD *)(a4 + 24),
             *(_DWORD *)(a4 + 20),
             *(_QWORD *)v90,
             1,
             CurrentThreadProcessId,
             2,
             0LL,
             0,
             0LL,
             v90 + 32,
             a4);
    SepAdtStagingEvent(
      v177,
      v178,
      (unsigned int)v238,
      a4 + 144,
      a4 + 128,
      *(_QWORD *)(a4 + 32),
      *(_QWORD *)(a4 + 48),
      *(_DWORD *)(a4 + 24),
      *(_DWORD *)(a4 + 20),
      1,
      CurrentThreadProcessId,
      a4);
    v91 = v211;
LABEL_133:
    v94 = v228;
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
    if ( !v94
      && (p_FileObjectExtension == (struct _LIST_ENTRY *)CmKeyObjectType
       || p_FileObjectExtension == (struct _LIST_ENTRY *)IoFileObjectType)
      && (v96 = *(_QWORD *)(a4 + 32)) != 0 )
    {
      v120 = *(_QWORD *)(a4 + 48);
      v121 = KeGetCurrentThread();
      --v121->KernelApcDisable;
      if ( v120 >= v96 )
      {
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v96 + 48), 1u);
        v159 = KeGetCurrentThread();
        --v159->KernelApcDisable;
        v123 = *(struct _ERESOURCE **)(v120 + 48);
      }
      else
      {
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v120 + 48), 1u);
        v122 = KeGetCurrentThread();
        --v122->KernelApcDisable;
        v123 = *(struct _ERESOURCE **)(v96 + 48);
      }
      ExAcquireResourceSharedLite(v123, 1u);
      if ( (*(_DWORD *)(v96 + 200) & 0x4000) != 0 && *(int *)(v96 + 196) >= 2 )
      {
        v171 = RtlEqualSid(**(PSID **)(v120 + 152), **(PSID **)(v96 + 152));
        v97 = Object;
        if ( !v171
          && OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO((__int64)Object - 48)
          && SepSidInTokenSidHash(v120 + 808, 0LL, (unsigned __int8 *)SeConstrainedImpersonationCapabilitySid, 0, 1, 0) )
        {
          ObHandleRevocationBlockAddObject(*(_QWORD *)(v96 + 216) + 136LL, v97);
        }
      }
      else
      {
        v97 = Object;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v120 + 48));
      KeLeaveCriticalRegionThread();
      ExReleaseResourceLite(*(PERESOURCE *)(v96 + 48));
      KeLeaveCriticalRegionThread();
    }
    else
    {
LABEL_143:
      v97 = Object;
    }
    if ( a5 && v251 )
      *v251 = v97;
    v98 = v214;
    NamedObject = v213 != 0 ? 0x40000000 : 0;
    if ( v214 )
      v72 |= 0xFFFFFFFF80000000uLL;
    v99 = v249;
    *v249 = v72;
  }
  else
  {
    ObpDecrementHandleCount(PROCESS, v54);
    v97 = Object;
    if ( a5 )
      ObDereferenceObjectExWithTag((ULONG_PTR)Object, a5, 0x6E48624Fu);
    v98 = v214;
    NamedObject = -1073741670;
    v99 = v249;
  }
  v100 = (PVOID *)v226[0];
  if ( v226[0] != v226 )
  {
    v101 = 0LL;
    v261 = &v243;
    v260 = 0;
    v255[0] = 1;
    v255[1] = v98;
    v102 = (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
    v256 = Object;
    v258 = 0LL;
    v259 = NamedObject;
    v257 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v102];
    v243 = v215;
    while ( v100 != v226 )
    {
      v106 = v226[1];
      v107 = (PVOID *)*((_QWORD *)v226[1] + 1);
      if ( *(PVOID **)v226[1] != v226 || *v107 != v226[1] )
        goto LABEL_258;
      v226[1] = *((PVOID *)v226[1] + 1);
      *v107 = v226;
      v108 = (struct _EX_RUNDOWN_REF *)v106[2];
      v258 = v106[3];
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v108[3].Count + 8), v255, v100, v101);
      _m_prefetchw(&v108[7]);
      v109 = v108[7].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v109 != _InterlockedCompareExchange64((volatile signed __int64 *)&v108[7], v109 - 2, v109) )
        ExfReleaseRundownProtection(v108 + 7);
      ExFreePoolWithTag(v106, 0);
      v100 = (PVOID *)v226[0];
    }
    ObfDereferenceObjectWithTag(v256, 0x6243624Fu);
    KeLeaveCriticalRegionThread();
    v97 = Object;
  }
  if ( (xmmword_140FC5B10 & 0x40) != 0 && NamedObject >= 0 )
    EtwpTraceHandle(4384, *v99, (__int64)v97, (__int64)p_FileObjectExtension);
LABEL_153:
  v103 = (struct _EX_RUNDOWN_REF *)PROCESS;
LABEL_154:
  if ( v216 )
  {
    _m_prefetchw(&v103[61]);
    v104 = v103[61].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v104 != _InterlockedCompareExchange64((volatile signed __int64 *)&v103[61], v104 - 2, v104) )
      ExfReleaseRundownProtection(v103 + 61);
  }
  return (unsigned int)NamedObject;
}
