/*
 * XREFs of NtSetInformationThread @ 0x1408B7970
 * Callers:
 *     EtwpLogger @ 0x14098FA20 (EtwpLogger.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x14020DFEC (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x14020E16C (PsSetPagePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeSetDisableBoostThread @ 0x140268FD8 (KeSetDisableBoostThread.c)
 *     KeQueryPrimaryGroupProcess @ 0x14026F244 (KeQueryPrimaryGroupProcess.c)
 *     KiSetLegacyAffinityThread @ 0x1402715DC (KiSetLegacyAffinityThread.c)
 *     KeIsSubsetAffinityEx @ 0x1402717F0 (KeIsSubsetAffinityEx.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PspUnlockProcessShared @ 0x14029BF00 (PspUnlockProcessShared.c)
 *     KeSetUserAffinityThread @ 0x1403060E4 (KeSetUserAffinityThread.c)
 *     PspUpdateContainerImpersonation @ 0x1403061BC (PspUpdateContainerImpersonation.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetEffectiveServerSilo @ 0x140310610 (PsGetEffectiveServerSilo.c)
 *     MmGetMinWsPagePriority @ 0x140311E90 (MmGetMinWsPagePriority.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x14031A800 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     IoBoostThreadIoPriority @ 0x140326240 (IoBoostThreadIoPriority.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     KeSetPriorityThread @ 0x1403778B0 (KeSetPriorityThread.c)
 *     KeSetIdealProcessorThread @ 0x1403B2460 (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403B2510 (KeSetIdealProcessorThreadByNumber.c)
 *     PspUnlockThreadSecurityExclusive @ 0x1403D43D0 (PspUnlockThreadSecurityExclusive.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PspLockProcessShared @ 0x1403F8E70 (PspLockProcessShared.c)
 *     PsGetProcessSilo @ 0x14041A260 (PsGetProcessSilo.c)
 *     PspLockThreadSecurityExclusive @ 0x1404354C0 (PspLockThreadSecurityExclusive.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     IoThreadToProcess @ 0x140442EB0 (IoThreadToProcess.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     KeAbUserModeEntryFree @ 0x1404706A0 (KeAbUserModeEntryFree.c)
 *     KeSetBasePriorityThread @ 0x1404713B0 (KeSetBasePriorityThread.c)
 *     MmGetDefaultPagePriority @ 0x14047DF60 (MmGetDefaultPagePriority.c)
 *     KeQueryActiveGroupCount @ 0x1404807A0 (KeQueryActiveGroupCount.c)
 *     KeSetSelectedCpuSetsThread @ 0x140491830 (KeSetSelectedCpuSetsThread.c)
 *     KeUpdateThreadCpuSets @ 0x140491BAC (KeUpdateThreadCpuSets.c)
 *     KeDisableProfiling @ 0x1404D9C90 (KeDisableProfiling.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     PsImpersonateClient @ 0x1408A51C0 (PsImpersonateClient.c)
 *     PspThreadFromTicket @ 0x1408B93E0 (PspThreadFromTicket.c)
 *     PspWow64SetContextThread @ 0x1408B96E4 (PspWow64SetContextThread.c)
 *     EtwTraceThreadSetName @ 0x1408B9C24 (EtwTraceThreadSetName.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x1408B9D1C (PspSchedulerSharedDataRegionSlotAllocate.c)
 *     PspSetThreadPpmPolicy @ 0x1408BA020 (PspSetThreadPpmPolicy.c)
 *     SeCheckPrivilegedObject @ 0x1408BA228 (SeCheckPrivilegedObject.c)
 *     PsGetNextProcessThread @ 0x1408BD940 (PsGetNextProcessThread.c)
 *     PspSchedulerSharedDataRegionSlotFree @ 0x1408F57BC (PspSchedulerSharedDataRegionSlotFree.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     PspIsSiloInSilo @ 0x1409BB234 (PspIsSiloInSilo.c)
 *     RtlTestProtectedAccess @ 0x1409BC0CC (RtlTestProtectedAccess.c)
 *     KeEnableProfiling @ 0x140AB1C34 (KeEnableProfiling.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  SIZE_T v4; // r15
  PVOID v7; // rdi
  struct _KTHREAD *CurrentThread; // r8
  __int64 PreviousMode; // r9
  ULONG v10; // r8d
  unsigned int v11; // r14d
  NTSTATUS result; // eax
  struct _KTHREAD *v13; // r9
  PETHREAD v14; // rcx
  PETHREAD v15; // rdi
  NTSTATUS v16; // ebx
  HANDLE v17; // rbx
  NTSTATUS v18; // esi
  PETHREAD v19; // rbx
  PETHREAD v20; // rcx
  KPROCESSOR_MODE v21; // r9
  PVOID v22; // rbx
  int v23; // esi
  PETHREAD v24; // rbx
  _KPROCESS *Process; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  LONG v29; // edx
  PETHREAD v30; // rbx
  NTSTATUS v31; // esi
  LONG v32; // ebx
  NTSTATUS v33; // esi
  PETHREAD v34; // rdi
  unsigned int v35; // ebx
  unsigned int DefaultPagePriority; // eax
  char v37; // r9
  PETHREAD v38; // rcx
  ULONG v39; // edx
  PVOID v40; // r14
  __int64 v41; // rcx
  __int64 v42; // rdx
  unsigned __int16 v43; // bx
  unsigned __int16 *Pool2; // rax
  __int64 v45; // r12
  PETHREAD v46; // rbx
  __int64 v47; // rbx
  PETHREAD v48; // r14
  _KPROCESS *v49; // rsi
  __int64 v50; // rbx
  __m128i v51; // xmm6
  __int64 v52; // xmm7_8
  int v53; // eax
  int v54; // ecx
  NTSTATUS v55; // eax
  UCHAR v56; // bl
  NTSTATUS v57; // ebx
  KPRIORITY v58; // ebx
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // r14
  PETHREAD v61; // rdi
  int v62; // edx
  int v63; // ebx
  NTSTATUS v64; // esi
  __int64 v65; // r14
  unsigned __int16 v66; // bx
  PETHREAD v67; // rbx
  unsigned int v68; // r15d
  NTSTATUS v69; // r13d
  PETHREAD v70; // r14
  __int64 v71; // r14
  __int64 i; // rax
  struct _EX_RUNDOWN_REF *v73; // rbx
  unsigned __int64 Count; // rcx
  unsigned __int64 v75; // rdx
  __int64 v76; // rax
  __int16 v77; // r8
  __int64 v78; // rdx
  unsigned __int64 v79; // rax
  __int16 v80; // ax
  __int64 v81; // r8
  __int16 v82; // ax
  _KPROCESS *v83; // rsi
  __int64 v84; // r12
  char *v85; // rbx
  unsigned __int16 j; // cx
  int v87; // ebx
  int v88; // ebx
  char v89; // bl
  PETHREAD v90; // rcx
  int v91; // ebx
  unsigned __int64 v92; // rcx
  NTSTATUS v93; // eax
  struct _LIST_ENTRY *v94; // rbx
  __int64 v95; // rdx
  struct _KTHREAD *v96; // rax
  struct _LIST_ENTRY *v97; // rax
  struct _LIST_ENTRY *v98; // rdi
  PEPROCESS v99; // rsi
  char IsSiloInSilo; // al
  struct _LIST_ENTRY *v101; // rcx
  __int64 EffectiveServerSilo; // rbx
  __int64 ProcessServerSilo; // rax
  struct _KTHREAD *v104; // rcx
  __int16 v105; // bx
  unsigned __int8 v106; // [rsp+40h] [rbp-3E8h]
  PETHREAD Thread; // [rsp+48h] [rbp-3E0h] BYREF
  NTSTATUS v108; // [rsp+50h] [rbp-3D8h]
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-3D0h]
  char v110; // [rsp+60h] [rbp-3C8h]
  char v111; // [rsp+61h] [rbp-3C7h]
  int v112; // [rsp+64h] [rbp-3C4h]
  struct _KTHREAD *v113; // [rsp+68h] [rbp-3C0h]
  __int16 v114; // [rsp+74h] [rbp-3B4h] BYREF
  _PROCESSOR_NUMBER v115; // [rsp+78h] [rbp-3B0h] BYREF
  PVOID Object[2]; // [rsp+80h] [rbp-3A8h] BYREF
  char v117; // [rsp+90h] [rbp-398h]
  LONG Increment; // [rsp+94h] [rbp-394h]
  PVOID v119; // [rsp+98h] [rbp-390h]
  int v120; // [rsp+A0h] [rbp-388h]
  PVOID v121; // [rsp+A8h] [rbp-380h] BYREF
  unsigned int v122; // [rsp+B0h] [rbp-378h]
  PVOID P; // [rsp+B8h] [rbp-370h]
  __int128 v124; // [rsp+C0h] [rbp-368h]
  __int128 v125; // [rsp+D0h] [rbp-358h]
  unsigned __int64 v126; // [rsp+E0h] [rbp-348h]
  PVOID v127; // [rsp+E8h] [rbp-340h] BYREF
  ULONG_PTR v128; // [rsp+F0h] [rbp-338h]
  HANDLE v129; // [rsp+F8h] [rbp-330h] BYREF
  void *Src[2]; // [rsp+100h] [rbp-328h]
  int v131; // [rsp+110h] [rbp-318h]
  int v132; // [rsp+114h] [rbp-314h]
  int v133; // [rsp+118h] [rbp-310h]
  int v134; // [rsp+11Ch] [rbp-30Ch]
  unsigned int v135; // [rsp+120h] [rbp-308h]
  unsigned int v136; // [rsp+124h] [rbp-304h]
  int v137; // [rsp+128h] [rbp-300h]
  int v138; // [rsp+12Ch] [rbp-2FCh]
  int v139; // [rsp+130h] [rbp-2F8h]
  int v140; // [rsp+134h] [rbp-2F4h]
  unsigned __int64 v141; // [rsp+138h] [rbp-2F0h]
  HANDLE Handle; // [rsp+150h] [rbp-2D8h]
  __int128 v143; // [rsp+158h] [rbp-2D0h]
  __m128i v144; // [rsp+170h] [rbp-2B8h]
  ULONG_PTR v145[2]; // [rsp+180h] [rbp-2A8h]
  _QWORD v146[2]; // [rsp+190h] [rbp-298h] BYREF
  HANDLE v147; // [rsp+1A0h] [rbp-288h]
  struct _KAFFINITY_EX v148; // [rsp+1B0h] [rbp-278h] BYREF
  _BYTE v149[256]; // [rsp+2C0h] [rbp-168h] BYREF

  v4 = ThreadInformationLength;
  BugCheckParameter1 = (ULONG_PTR)ThreadHandle;
  v7 = 0LL;
  Thread = 0LL;
  v124 = 0LL;
  memset_0(&v148, 0, sizeof(v148));
  v114 = 0;
  v120 = 0;
  v112 = 0;
  v122 = 0;
  v121 = 0LL;
  v141 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  v143 = 0LL;
  v115 = 0;
  v127 = 0LL;
  *(_OWORD *)Src = 0LL;
  v129 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v113 = CurrentThread;
  PreviousMode = (unsigned __int8)CurrentThread->PreviousMode;
  v106 = PreviousMode;
  if ( (_BYTE)PreviousMode )
  {
    if ( ThreadInformationClass == ThreadPriority )
    {
LABEL_3:
      v10 = 4;
      v112 = 4;
      v11 = 8;
    }
    else
    {
      switch ( ThreadInformationClass )
      {
        case ThreadAffinityMask:
        case ThreadGroupInformation:
        case ThreadCpuAccountingInformation:
        case ThreadNameInformation:
        case ThreadManageWritesToExecutableMemory:
        case ThreadUpdateLockOwnership:
          v11 = 8;
          v10 = 8;
          v112 = 8;
          break;
        case ThreadEnableAlignmentFaultFixup:
        case ThreadCounterProfiling:
          v10 = 1;
          v112 = 1;
          v11 = 8;
          break;
        default:
          goto LABEL_3;
      }
    }
    if ( (_DWORD)v4 )
    {
      if ( ((v10 - 1) & (unsigned int)ThreadInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (char *)ThreadInformation + v4 < ThreadInformation
        || (unsigned __int64)ThreadInformation + v4 > 0x7FFFFFFF0000LL )
      {
        v10 = v112;
      }
    }
    if ( ThreadInformationClass == ThreadSchedulerSharedDataSlot
      || ThreadInformationClass == ThreadManageWritesToExecutableMemory )
    {
      ProbeForWrite(ThreadInformation, v4, v10);
      PreviousMode = v106;
    }
    CurrentThread = v113;
  }
  else
  {
    v11 = 8;
  }
  if ( ThreadInformationClass == ThreadImpersonationToken )
  {
    if ( (_DWORD)v4 == 8 )
    {
      Handle = *(HANDLE *)ThreadInformation;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 128,
                 (__int64)PsThreadType,
                 PreviousMode,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v13 = KeGetCurrentThread();
        if ( Handle )
        {
          v21 = v13->PreviousMode;
          Object[0] = 0LL;
          LODWORD(v7) = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)SeTokenObjectType, v21, Object, 0LL);
          if ( (int)v7 >= 0 )
          {
            v22 = Object[0];
            if ( *((_DWORD *)Object[0] + 48) == 2 )
            {
              LODWORD(v7) = PsImpersonateClient(
                              Thread,
                              Object[0],
                              0,
                              0,
                              *((SECURITY_IMPERSONATION_LEVEL *)Object[0] + 49));
              ObfDereferenceObject(v22);
            }
            else
            {
              ObfDereferenceObject(Object[0]);
              LODWORD(v7) = -1073741656;
            }
          }
        }
        else
        {
          PsImpersonateClient(Thread, 0LL, 0, 0, SecurityImpersonation);
        }
LABEL_26:
        v14 = Thread;
LABEL_27:
        ObfDereferenceObjectWithTag(v14, 0x79517350u);
        return (int)v7;
      }
      return result;
    }
    return -1073741820;
  }
  if ( ThreadInformationClass != ThreadWorkOnBehalfTicket )
  {
    switch ( ThreadInformationClass )
    {
      case ThreadPriority:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v131 = *(_DWORD *)ThreadInformation;
        v58 = v131;
        if ( (unsigned int)(v131 - 1) > 0x1E )
          return -1073741811;
        if ( v131 < 16 )
          goto LABEL_137;
        if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 BugCheckParameter1,
                                 1024LL,
                                 PreviousMode) )
          return -1073741727;
        LOBYTE(PreviousMode) = v106;
LABEL_137:
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        KeSetPriorityThread(Thread, v58);
LABEL_76:
        v38 = Thread;
        goto LABEL_77;
      case ThreadBasePriority:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v23 = *(_DWORD *)ThreadInformation;
        Increment = *(_DWORD *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v108 = result;
        if ( result < 0 )
          return result;
        v24 = Thread;
        Process = Thread->Process;
        v26 = (unsigned int)(v23 + 16);
        if ( (unsigned int)v26 > 0x20 || (v27 = 0x10007C001LL, !_bittest64(&v27, v26)) )
        {
          if ( v113->ApcState.Process != (_KPROCESS *)*((_QWORD *)PsGetServerSiloGlobals(0LL) + 106)
            && HIBYTE(Process[1].KernelWaitTime) != 4 )
          {
            ObfDereferenceObjectWithTag(v24, 0x79517350u);
            return -1073741811;
          }
        }
        v28 = Process[1].Padding[3];
        if ( v28 && (*(_DWORD *)(v28 + 1056) & 0x20) != 0 && HIBYTE(Process[1].KernelWaitTime) != 4 )
        {
          v29 = Increment;
          if ( Increment > 0 )
          {
            v30 = Thread;
            goto LABEL_56;
          }
        }
        else
        {
          v29 = Increment;
        }
        v30 = Thread;
        KeSetBasePriorityThread(Thread, v29);
LABEL_56:
        v31 = v108;
        ObfDereferenceObjectWithTag(v30, 0x79517350u);
        return v31;
      case ThreadAffinityMask:
        if ( (_DWORD)v4 != 8 )
          return -1073741820;
        *(_QWORD *)&v124 = *(_QWORD *)ThreadInformation;
        v47 = v124;
        if ( !(_QWORD)v124 )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
          v48 = Thread;
          v49 = Thread->Process;
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v49[1].ProfileListHead.Blink) )
          {
            v50 = KiSetLegacyAffinityThread((__int64)v48, v47);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v49[1].ProfileListHead.Blink);
            if ( !v50 )
              LODWORD(v7) = -1073741811;
          }
          else
          {
            LODWORD(v7) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v48, 0x79517350u);
          return (int)v7;
        }
        return result;
      case ThreadEnableAlignmentFaultFixup:
        if ( (_DWORD)v4 != 1 )
          return -1073741820;
        v89 = *(_BYTE *)ThreadInformation;
        v117 = *(_BYTE *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v108 = result;
        if ( result < 0 )
          return result;
        if ( v89 )
          _interlockedbittestandset((volatile signed __int32 *)&Thread->116 + 1, 2u);
        else
          _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 2u);
        goto LABEL_76;
      case ThreadQuerySetWin32StartAddress:
        return -1073741811;
      case ThreadZeroTlsCell:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v68 = *(_DWORD *)ThreadInformation;
        v120 = *(_DWORD *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v69 = result;
        v108 = result;
        if ( result < 0 )
          return result;
        v70 = Thread;
        ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        if ( v70 != v113 )
          return -1073741811;
        v71 = (__int64)v70->Process;
        v113 = (struct _KTHREAD *)v71;
        for ( i = PsGetNextProcessThread(v71, 0LL); ; i = PsGetNextProcessThread(v71, v73) )
        {
          Thread = (PETHREAD)i;
          v73 = (struct _EX_RUNDOWN_REF *)i;
          if ( !i )
            break;
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(i + 1416)) )
          {
            Count = v73[30].Count;
            if ( Count )
            {
              v75 = 0LL;
              v76 = *(_QWORD *)(v71 + 784);
              if ( v76 )
              {
                v77 = *(_WORD *)(v71 + 1772);
                if ( v77 == 332 || v77 == 452 )
                  v75 = Count + 0x2000;
              }
              if ( v68 < 0x40 )
              {
                if ( v76 && ((v82 = *(_WORD *)(v71 + 1772), v82 == 332) || v82 == 452) )
                {
                  if ( v75 )
                    *(_DWORD *)(v75 + 4LL * v68 + 3600) = 0;
                }
                else
                {
                  *(_QWORD *)(Count + 8LL * v68 + 5248) = 0LL;
                }
              }
              else if ( v68 < 0x440 )
              {
                if ( v76 && ((v80 = *(_WORD *)(v71 + 1772), v80 == 332) || v80 == 452) )
                {
                  if ( v75 )
                  {
                    v81 = *(unsigned int *)(v75 + 3988);
                    if ( (_DWORD)v81 )
                      *(_DWORD *)(v81 + 4LL * (v68 - 64)) = 0;
                  }
                }
                else
                {
                  v78 = *(_QWORD *)(Count + 6016);
                  v146[1] = v78;
                  if ( v78 )
                  {
                    v79 = v78 + 8LL * (v68 - 64);
                    if ( v79 >= 0x7FFFFFFF0000LL )
                      v79 = 0x7FFFFFFF0000LL;
                    *(_QWORD *)v79 = 0LL;
                  }
                }
              }
            }
            ExReleaseRundownProtection_0(v73 + 177);
          }
        }
        return v69;
      case ThreadIdealProcessor:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v122 = *(_DWORD *)ThreadInformation;
        v56 = v122;
        if ( v122 > 0x40 )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v57 = KeSetIdealProcessorThread(Thread, v56);
LABEL_130:
        ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        return v57;
      case ThreadPriorityBoost:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v63 = *(_DWORD *)ThreadInformation;
        v132 = *(_DWORD *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v64 = result;
        if ( result >= 0 )
        {
          LOBYTE(v7) = v63 != 0;
          KeSetDisableBoostThread((__int64)Thread, (unsigned int)v7);
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          return v64;
        }
        return result;
      case ThreadSetTlsArrayAddress:
        return -1073741822;
      case ThreadHideFromDebugger:
        if ( (_DWORD)v4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v108 = result;
        if ( result < 0 )
          return result;
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 4u);
        goto LABEL_254;
      case ThreadBreakOnTermination:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v87 = *(_DWORD *)ThreadInformation;
        v133 = *(_DWORD *)ThreadInformation;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   v106,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v108 = result;
        if ( result < 0 )
          return result;
        if ( v87 )
          _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x20u);
        else
          _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFDF);
        goto LABEL_76;
      case ThreadSwitchLegacyState:
        if ( BugCheckParameter1 != -2LL )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   0xFFFFFFFFFFFFFFFEuLL,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
          v90 = Thread;
          Thread->NpxState |= MEMORY[0xFFFFF780000003D8] | 3LL;
          ObfDereferenceObjectWithTag(v90, 0x79517350u);
          return 0;
        }
        return result;
      case ThreadIoPriority:
        if ( (((_DWORD)v4 - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        if ( (_DWORD)v4 == 4 )
        {
          LODWORD(v59) = *(_DWORD *)ThreadInformation;
          v134 = *(_DWORD *)ThreadInformation;
          LOBYTE(v60) = 0;
        }
        else
        {
          v59 = *(_QWORD *)ThreadInformation;
          v141 = v59;
          v60 = HIDWORD(v59);
        }
        if ( (unsigned int)v59 >= 4 )
          return -1073741811;
        if ( (unsigned int)v59 < 3 )
          goto LABEL_144;
        if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 BugCheckParameter1,
                                 32LL,
                                 PreviousMode) )
          return -1073741727;
        LOBYTE(PreviousMode) = v106;
LABEL_144:
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
          v61 = Thread;
          if ( (_BYTE)v60 == 1 && ((*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7) < (int)v59 )
            IoBoostThreadIoPriority((KSPIN_LOCK *)Thread, v59, 0);
          PsSetIoPriorityThread((__int64)v61, v59);
          ObfDereferenceObjectWithTag(v61, 0x79517350u);
          return 0;
        }
        return result;
      case ThreadPagePriority:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v35 = *(_DWORD *)ThreadInformation;
        v140 = *(_DWORD *)ThreadInformation;
        DefaultPagePriority = MmGetDefaultPagePriority();
        if ( v35 > DefaultPagePriority || v35 < (unsigned int)MmGetMinWsPagePriority() )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   v37,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        PsSetPagePriorityThread((__int64)Thread, v35);
        goto LABEL_76;
      case ThreadActualBasePriority:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        Increment = *(_DWORD *)ThreadInformation;
        v32 = Increment;
        if ( (unsigned int)(Increment - 1) > 0x1E )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v33 = result;
        if ( result >= 0 )
        {
          v34 = Thread;
          if ( v32 < 16
            || HIBYTE(Thread->Process[1].KernelWaitTime) == 4
            || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v106) )
          {
            KeSetActualBasePriorityThread((ULONG_PTR)v34, v32);
            ObfDereferenceObjectWithTag(v34, 0x79517350u);
            return v33;
          }
          else
          {
            ObfDereferenceObjectWithTag(v34, 0x79517350u);
            return -1073741727;
          }
        }
        return result;
      case ThreadWow64Context:
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   16,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
          v15 = Thread;
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
          {
            v16 = PspWow64SetContextThread(v15);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v15[1].WaitStatus);
            ObfDereferenceObjectWithTag(v15, 0x79517350u);
            return v16;
          }
          else
          {
            ObfDereferenceObjectWithTag(v15, 0x79517350u);
            return -1073741749;
          }
        }
        return result;
      case ThreadGroupInformation:
        if ( (_DWORD)v4 != 16 )
          return -1073741820;
        v124 = *(_OWORD *)ThreadInformation;
        if ( WORD4(v124) >= KeQueryActiveGroupCount() )
          return -1073741811;
        v65 = v124;
        if ( ((unsigned __int64)v124 & KeActiveProcessors.Bitmap[WORD4(v124)]) != (_QWORD)v124 )
          return -1073741811;
        v66 = WORD4(v124);
        if ( WORD5(v124) | (unsigned __int16)(WORD6(v124) | HIWORD(v124)) )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   v106,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        *(_QWORD *)&v148.Count = 2097153LL;
        memset_0(&v148.8, 0, sizeof(v148.8));
        if ( v148.Count > v66 )
          goto LABEL_212;
        if ( v148.Size > v66 )
        {
          v148.Count = v66 + 1;
LABEL_212:
          v148.Bitmap[v66] |= v65;
        }
        v83 = Thread->Process;
        v84 = (__int64)v113;
        PspLockProcessShared((__int64)v83, (__int64)v113);
        v85 = (char *)v83[1].Padding[3];
        v121 = v85;
        if ( v85
          && (ExAcquireResourceSharedLite((PERESOURCE)(v85 + 56), 1u), (*((_DWORD *)v85 + 264) & 0x10) != 0)
          && !(unsigned int)KeIsSubsetAffinityEx(&v148.Count, (unsigned __int16 *)v85 + 364) )
        {
          LODWORD(v7) = -1073741823;
        }
        else
        {
          KeSetUserAffinityThread((__int64)Thread, &v148);
          KeQueryPrimaryGroupProcess((__int64)v83, &v114);
          for ( j = 0; ; ++j )
          {
            if ( j >= v148.Count )
              goto LABEL_220;
            if ( v148.Bitmap[j] )
              break;
          }
          v108 = 0;
          if ( v114 != WORD4(v124) )
          {
            _interlockedbittestandset((volatile signed __int32 *)&v83->136, 0xCu);
            v85 = (char *)v121;
          }
        }
LABEL_220:
        if ( v85 )
          ExReleaseResourceLite((PERESOURCE)(v85 + 56));
        PspUnlockProcessShared((__int64)v83, v84);
        goto LABEL_26;
      case ThreadCounterProfiling:
        if ( (_DWORD)v4 != 24 )
          return -1073741820;
        v125 = *(_OWORD *)ThreadInformation;
        v126 = *((_QWORD *)ThreadInformation + 2);
        v92 = v126;
        if ( (v126 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v126 >= 0x7FFFFFFF0000LL )
          v92 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v92 = *(_BYTE *)v92;
        *(_BYTE *)(v92 + 447) = *(_BYTE *)(v92 + 447);
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v19 = Thread;
        if ( Thread == KeGetCurrentThread() )
        {
          if ( HIDWORD(v125) )
            v93 = KeEnableProfiling(Thread, DWORD2(v125), v125, v126);
          else
            v93 = KeDisableProfiling((__int64)Thread, v126);
          v18 = v93;
        }
        else
        {
          v18 = -1073741637;
        }
        goto LABEL_39;
      case ThreadIdealProcessorEx:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v115 = *(_PROCESSOR_NUMBER *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v67 = Thread;
        LODWORD(v7) = KeSetIdealProcessorThreadByNumber(Thread, &v115, &v115);
        if ( (int)v7 >= 0 )
          *(_PROCESSOR_NUMBER *)ThreadInformation = v115;
        v14 = v67;
        goto LABEL_27;
      case ThreadCpuAccountingInformation:
        if ( BugCheckParameter1 != -2LL )
          return -1073741811;
        if ( (_DWORD)v4 != 8 )
          return -1073741820;
        v147 = *(HANDLE *)ThreadInformation;
        if ( v147 )
        {
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)v147,
                     2,
                     (__int64)MmSessionObjectType,
                     PreviousMode,
                     0x79517350u,
                     &v127,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v94 = (struct _LIST_ENTRY *)v127;
          v95 = *((_QWORD *)v127 + 4);
          if ( !v95 )
          {
            ObfDereferenceObjectWithTag(v127, 0x79517350u);
            return -1073740715;
          }
          if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)v113, v95) )
          {
            ObfDereferenceObjectWithTag(v94, 0x79517350u);
            return -1073740714;
          }
          v113[1].ApcState.ApcListHead[1].Flink = v94;
          return 0;
        }
        if ( CurrentThread[1].ApcState.ApcListHead[1].Flink )
        {
          KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL);
          ObfDereferenceObject(v113[1].ApcState.ApcListHead[1].Flink);
          v113[1].ApcState.ApcListHead[1].Flink = 0LL;
          return 0;
        }
        return -1073740713;
      case ThreadHeterogeneousCpuPolicy:
      case ThreadManageWritesToExecutableMemory:
        return -1073741637;
      case ThreadNameInformation:
        v111 = 0;
        v40 = 0LL;
        v119 = 0LL;
        P = 0LL;
        v110 = 0;
        if ( (_DWORD)v4 == 16 )
        {
          v18 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  1024,
                  (__int64)PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          v108 = v18;
          if ( v18 >= 0 )
          {
            v111 = 1;
            if ( v106 )
            {
              v144 = 0LL;
              v41 = 0x7FFFFFFF0000LL;
              if ( (unsigned __int64)ThreadInformation < 0x7FFFFFFF0000LL )
                v41 = (__int64)ThreadInformation;
              v144.m128i_i32[0] = *(_DWORD *)v41;
              v42 = *(_QWORD *)(v41 + 8);
              v144.m128i_i64[1] = v42;
              *(__m128i *)Src = v144;
              if ( (unsigned __int16)_mm_cvtsi128_si32(v144) && (v42 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v18 = v108;
              v40 = v119;
            }
            else
            {
              *(_OWORD *)Src = *(_OWORD *)ThreadInformation;
            }
            v43 = (unsigned __int16)Src[0];
            if ( ((__int64)Src[0] & 1) == 0 && LOWORD(Src[0]) <= WORD1(Src[0]) )
            {
              Pool2 = (unsigned __int16 *)ExAllocatePool2(0x40uLL);
              v40 = Pool2;
              v119 = Pool2;
              if ( Pool2 )
              {
                *((_QWORD *)Pool2 + 1) = Pool2 + 8;
                *Pool2 = v43;
                Pool2[1] = v43;
                memmove(Pool2 + 8, Src[1], v43);
                v45 = (__int64)v113;
                v46 = Thread;
                PspLockThreadSecurityExclusive((__int64)Thread, (__int64)v113);
                v110 = 1;
                P = *(PVOID *)&v46[1].WaitBlockFill11[160];
                *(_QWORD *)&v46[1].WaitBlockFill11[160] = v40;
                v40 = 0LL;
                v119 = 0LL;
                EtwTraceThreadSetName(v46);
              }
              else
              {
                v18 = -1073741670;
                v108 = -1073741670;
                v45 = (__int64)v113;
              }
              goto LABEL_98;
            }
            v18 = -1073741811;
            v108 = -1073741811;
          }
          v45 = (__int64)v113;
          goto LABEL_98;
        }
        v18 = -1073741820;
        v108 = -1073741820;
        v45 = (__int64)v113;
LABEL_98:
        if ( v110 )
          PspUnlockThreadSecurityExclusive((__int64)Thread, v45);
        if ( v111 )
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        if ( P )
          ExFreePoolWithTag(P, 0x6D4E6854u);
        if ( !v40 )
          return v18;
        ExFreePoolWithTag(v40, 0x6D4E6854u);
        return v18;
      case ThreadSelectedCpuSets:
        if ( (v4 & 7) != 0 || (unsigned int)v4 > 0x100 )
          return -1073741820;
        memmove(v149, ThreadInformation, v4);
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsThreadType,
                   v106,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v57 = KeSetSelectedCpuSetsThread((__int64)Thread, (unsigned int)v4 >> 3, (__int64)v149);
        goto LABEL_130;
      case ThreadDynamicCodePolicyInfo:
        if ( BugCheckParameter1 != -2LL )
          return -1073741811;
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v139 = *(_DWORD *)ThreadInformation;
        if ( v139 == 1 )
        {
          if ( ((__int64)CurrentThread->Process[4].ThreadListHead.Flink & 0x200) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x40000u);
            return 0;
          }
          return -1073741790;
        }
        if ( v139 )
          return -1073741811;
        _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFBFFFF);
        return 0;
      case ThreadExplicitCaseSensitivity:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v88 = *(_DWORD *)ThreadInformation;
        v138 = *(_DWORD *)ThreadInformation;
        if ( !(_BYTE)PreviousMode )
          goto LABEL_251;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741727;
        if ( !RtlTestProtectedAccess(
                (PS_PROTECTION)SBYTE2(v113->Process[3].ActiveGroupsMask.Masks[1]),
                (PS_PROTECTION)81) )
          return -1073741790;
        LOBYTE(PreviousMode) = v106;
LABEL_251:
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v108 = result;
        if ( result >= 0 )
        {
          if ( v88 )
            _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x80000u);
          else
            _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFF7FFFF);
LABEL_254:
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          return v108;
        }
        return result;
      case ThreadDbgkWerReportActive:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v91 = *(_DWORD *)ThreadInformation;
        v137 = *(_DWORD *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v108 = result;
        if ( result < 0 )
          return result;
        if ( v91 )
          _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x200000u);
        else
          _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFDFFFFF);
        goto LABEL_254;
      case ThreadAttachContainer:
        if ( BugCheckParameter1 != -2LL )
          return -1073741811;
        if ( (_DWORD)v4 != 8 )
          return -1073741820;
        v128 = *(_QWORD *)ThreadInformation;
        v96 = KeGetCurrentThread();
        if ( v128 )
        {
          Thread = v96;
          if ( v96[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
            return -1073741811;
          result = ObpReferenceObjectByHandleWithTag(
                     v128,
                     32,
                     (__int64)PsJobType,
                     PreviousMode,
                     0x6D497350u,
                     &v121,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v98 = (struct _LIST_ENTRY *)v121;
          if ( (*((_DWORD *)v121 + 389) & 2) == 0 )
          {
            ObfDereferenceObjectWithTag(v121, 0x6D497350u);
            return -1073741811;
          }
          v99 = IoThreadToProcess(Thread);
          PsGetProcessSilo((__int64)v99);
          IsSiloInSilo = PspIsSiloInSilo(v98);
          v101 = v98;
          if ( !IsSiloInSilo
            || (EffectiveServerSilo = PsGetEffectiveServerSilo((__int64)v98),
                ProcessServerSilo = PsGetProcessServerSilo((__int64)v99),
                v101 = v98,
                ProcessServerSilo != EffectiveServerSilo) )
          {
            ObfDereferenceObjectWithTag(v101, 0x6D497350u);
            return -1073741811;
          }
          PsAttachSiloToCurrentThread(v98);
        }
        else
        {
          if ( v96[1].WaitBlock[3].WaitListEntry.Blink == (struct _LIST_ENTRY *)-3LL )
            return -1073741811;
          v97 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
          v39 = 1833530192;
          v38 = (PETHREAD)v97;
LABEL_78:
          ObfDereferenceObjectWithTag(v38, v39);
        }
        return 0;
      case ThreadPowerThrottlingState:
        if ( (_DWORD)v4 != 12 )
          return -1073741820;
        Object[0] = *(PVOID *)ThreadInformation;
        v62 = *((_DWORD *)ThreadInformation + 2);
        if ( LODWORD(Object[0]) != 1 || (HIDWORD(Object[0]) & 0xFFFFFFFE) != 0 || (~HIDWORD(Object[0]) & v62) != 0 )
          return -1073741811;
        if ( (BYTE4(Object[0]) & 1) != 0 )
        {
          if ( (v62 & 1) == 0 )
            v11 = 3;
        }
        else
        {
          v11 = 0;
        }
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        PspSetThreadPpmPolicy(Thread, v11);
        goto LABEL_76;
      case ThreadWorkloadClass:
        if ( BugCheckParameter1 != -2LL || (_BYTE)PreviousMode )
          return -1073741790;
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v136 = *(_DWORD *)ThreadInformation;
        if ( v136 >= 2 )
          return -1073741811;
        v104 = KeGetCurrentThread();
        *((_DWORD *)&v104[1].SwapListEntry + 3) ^= ((unsigned __int16)*((_DWORD *)&v104[1].SwapListEntry + 3) ^ (unsigned __int16)((_WORD)v136 << 11)) & 0x800;
        KeUpdateThreadCpuSets((__int64)v104);
        return 0;
      case ThreadStrongerBadHandleChecks:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( BugCheckParameter1 != -2LL )
          return -1073741790;
        v135 = *(_DWORD *)ThreadInformation;
        v105 = v135;
        if ( v135 > 1 )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   0xFFFFFFFFFFFFFFFEuLL,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v38 = Thread;
        *((_DWORD *)&Thread[1].SwapListEntry + 3) ^= ((unsigned __int16)*((_DWORD *)&Thread[1].SwapListEntry + 3) ^ (unsigned __int16)(v105 << 12)) & 0x1000;
LABEL_77:
        v39 = 2035381072;
        goto LABEL_78;
      case ThreadUpdateLockOwnership:
        if ( (_DWORD)v4 != 16 )
          return -1073741820;
        v143 = *(_OWORD *)ThreadInformation;
        if ( DWORD2(v143) )
        {
          v18 = -1073741811;
        }
        else
        {
          v18 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  32,
                  (__int64)PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          v108 = v18;
          if ( v18 >= 0 )
          {
            v19 = Thread;
            if ( Thread == KeGetCurrentThread() )
            {
              KeAbUserModeEntryFree((ULONG_PTR)Thread, v143);
              v18 = v108;
            }
            else
            {
              v18 = -1073741637;
            }
LABEL_62:
            if ( v19 )
              goto LABEL_39;
            return v18;
          }
        }
        v19 = Thread;
        goto LABEL_62;
      case ThreadSchedulerSharedDataSlot:
        if ( (_DWORD)v4 != 24 )
          return -1073741820;
        Object[0] = 0LL;
        v51 = *(__m128i *)ThreadInformation;
        *(_OWORD *)v145 = *(_OWORD *)ThreadInformation;
        v52 = *((_QWORD *)ThreadInformation + 2);
        v146[0] = v52;
        v53 = ObpReferenceObjectByHandleWithTag(
                BugCheckParameter1,
                32,
                (__int64)PsThreadType,
                PreviousMode,
                0x79517350u,
                &Thread,
                0LL,
                0LL);
        v18 = v53;
        if ( v53 < 0 )
          goto LABEL_122;
        v54 = _mm_cvtsi128_si32(v51);
        if ( v54 )
        {
          if ( v54 != 1 )
          {
            v18 = -1073741637;
LABEL_121:
            *(__m128i *)ThreadInformation = v51;
            *((_QWORD *)ThreadInformation + 2) = v52;
LABEL_122:
            if ( Object[0] )
              ObfDereferenceObjectWithTag(Object[0], 0x79517350u);
            v20 = Thread;
            if ( Thread )
              goto LABEL_40;
            return v18;
          }
          v55 = PspSchedulerSharedDataRegionSlotFree(Thread);
        }
        else
        {
          v18 = ObpReferenceObjectByHandleWithTag(
                  v145[1],
                  1,
                  (__int64)PspSchedulerSharedDataType,
                  v106,
                  0x79517350u,
                  Object,
                  0LL,
                  0LL);
          if ( v18 < 0 )
            goto LABEL_122;
          v55 = PspSchedulerSharedDataRegionSlotAllocate(Thread, Object[0], v146);
          v52 = v146[0];
          v51 = *(__m128i *)v145;
        }
        v18 = v55;
        goto LABEL_121;
      default:
        return -1073741821;
    }
  }
  if ( BugCheckParameter1 != -2LL )
    return -1073741811;
  if ( (_DWORD)v4 != 8 )
    return -1073741820;
  v17 = *(HANDLE *)ThreadInformation;
  v129 = *(HANDLE *)ThreadInformation;
  result = ObpReferenceObjectByHandleWithTag(
             0xFFFFFFFFFFFFFFFEuLL,
             1024,
             (__int64)PsThreadType,
             PreviousMode,
             0x79517350u,
             &Thread,
             0LL,
             0LL);
  v18 = result;
  if ( result >= 0 )
  {
    Object[0] = 0LL;
    if ( v17 && (v18 = PspThreadFromTicket(&v129, Object), v7 = Object[0], v18 < 0) )
    {
      v19 = Thread;
    }
    else
    {
      v19 = Thread;
      PspUpdateContainerImpersonation((ULONG_PTR)Thread, v7);
    }
    if ( v7 )
      ObfDereferenceObject(v7);
LABEL_39:
    v20 = v19;
LABEL_40:
    ObfDereferenceObjectWithTag(v20, 0x79517350u);
    return v18;
  }
  return result;
}
