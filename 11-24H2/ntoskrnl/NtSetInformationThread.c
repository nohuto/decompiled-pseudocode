/*
 * XREFs of NtSetInformationThread @ 0x1408E8B60
 * Callers:
 *     EtwpLogger @ 0x1409D33F0 (EtwpLogger.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     IoBoostThreadIoPriority @ 0x14022E320 (IoBoostThreadIoPriority.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PspUnlockProcessShared @ 0x14028E8F0 (PspUnlockProcessShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PspLockProcessShared @ 0x14031DC40 (PspLockProcessShared.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     KeSetUserAffinityThread @ 0x140330B44 (KeSetUserAffinityThread.c)
 *     PsSetIoPriorityThread @ 0x140330D1C (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140330E98 (PsSetPagePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140370880 (KeSetIdealProcessorThreadByNumber.c)
 *     KeSetIdealProcessorThread @ 0x140370950 (KeSetIdealProcessorThread.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     KiSetLegacyAffinityThread @ 0x14039FF9C (KiSetLegacyAffinityThread.c)
 *     KeIsSubsetAffinityEx @ 0x1403A1D00 (KeIsSubsetAffinityEx.c)
 *     KeQueryPrimaryGroupProcess @ 0x1403A1E28 (KeQueryPrimaryGroupProcess.c)
 *     PspUpdateContainerImpersonation @ 0x1403B4C5C (PspUpdateContainerImpersonation.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1403B4ED0 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     MmGetMinWsPagePriority @ 0x1403C11A0 (MmGetMinWsPagePriority.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsGetEffectiveServerSilo @ 0x1403C3570 (PsGetEffectiveServerSilo.c)
 *     PsGetProcessSilo @ 0x1404070C0 (PsGetProcessSilo.c)
 *     PspLockThreadSecurityExclusive @ 0x140424030 (PspLockThreadSecurityExclusive.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     PspUnlockThreadSecurityExclusive @ 0x1404317A0 (PspUnlockThreadSecurityExclusive.c)
 *     IoThreadToProcess @ 0x140438740 (IoThreadToProcess.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     KeSetDisableBoostThread @ 0x140446EE4 (KeSetDisableBoostThread.c)
 *     KeAbUserModeEntryFree @ 0x140463468 (KeAbUserModeEntryFree.c)
 *     MmGetDefaultPagePriority @ 0x140479730 (MmGetDefaultPagePriority.c)
 *     KeQueryActiveGroupCount @ 0x14047C720 (KeQueryActiveGroupCount.c)
 *     KeSetSelectedCpuSetsThread @ 0x14048B570 (KeSetSelectedCpuSetsThread.c)
 *     KeUpdateThreadCpuSets @ 0x14048B8EC (KeUpdateThreadCpuSets.c)
 *     KeDisableProfiling @ 0x1404D2094 (KeDisableProfiling.c)
 *     KeSetBasePriorityThread @ 0x1404DDF20 (KeSetBasePriorityThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 *     PspThreadFromTicket @ 0x1408EA5C0 (PspThreadFromTicket.c)
 *     PspWow64SetContextThread @ 0x1408EA8C4 (PspWow64SetContextThread.c)
 *     EtwTraceThreadSetName @ 0x1408EADD8 (EtwTraceThreadSetName.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x1408EAED0 (PspSchedulerSharedDataRegionSlotAllocate.c)
 *     PspSetThreadPpmPolicy @ 0x1408EB1D0 (PspSetThreadPpmPolicy.c)
 *     SeCheckPrivilegedObject @ 0x1408EB21C (SeCheckPrivilegedObject.c)
 *     PsGetNextProcessThread @ 0x1408EEC70 (PsGetNextProcessThread.c)
 *     PspSchedulerSharedDataRegionSlotFree @ 0x1408FDB5C (PspSchedulerSharedDataRegionSlotFree.c)
 *     RtlTestProtectedAccess @ 0x1409E37B0 (RtlTestProtectedAccess.c)
 *     PspIsSiloInSilo @ 0x140A4F21C (PspIsSiloInSilo.c)
 *     KeEnableProfiling @ 0x140AB0F18 (KeEnableProfiling.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  SIZE_T v4; // r15
  char *v7; // rdi
  struct _KTHREAD *CurrentThread; // r8
  __int64 PreviousMode; // r9
  ULONG v10; // r8d
  unsigned int v11; // r14d
  NTSTATUS v12; // esi
  PVOID v13; // rbx
  NTSTATUS result; // eax
  struct _KTHREAD *v15; // r9
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r14
  HANDLE v18; // rbx
  PVOID v19; // rbx
  PVOID v20; // rcx
  KPRIORITY v21; // ebx
  PVOID v22; // rcx
  ULONG v23; // edx
  KPROCESSOR_MODE v24; // r9
  PVOID v25; // rbx
  LONG v26; // ebx
  NTSTATUS v27; // esi
  PVOID v28; // rdi
  PVOID v29; // rdi
  NTSTATUS v30; // ebx
  int v31; // esi
  PVOID v32; // rbx
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  LONG v37; // edx
  PVOID v38; // rbx
  NTSTATUS v39; // esi
  __m128i v40; // xmm6
  __int64 v41; // xmm7_8
  int v42; // ecx
  NTSTATUS v43; // eax
  int v44; // ebx
  char v45; // r9
  PVOID v46; // r14
  __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned __int16 v49; // bx
  unsigned __int16 *Pool2; // rax
  PVOID v51; // rbx
  __int64 v52; // rbx
  PVOID v53; // r14
  struct _EX_RUNDOWN_REF *v54; // rsi
  __int64 v55; // rbx
  UCHAR v56; // bl
  NTSTATUS v57; // ebx
  int v58; // edx
  int v59; // ebx
  NTSTATUS v60; // esi
  PVOID v61; // rdi
  __int64 v62; // r14
  unsigned __int16 v63; // bx
  __int64 v64; // rsi
  char *v65; // rbx
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned __int16 j; // cx
  unsigned int v69; // r14d
  NTSTATUS v70; // r13d
  struct _KTHREAD *v71; // r15
  __int64 Process; // r15
  struct _EX_RUNDOWN_REF *i; // rax
  struct _EX_RUNDOWN_REF *v74; // rbx
  unsigned __int64 Count; // rcx
  unsigned __int64 v76; // rdx
  __int64 v77; // rax
  __int16 v78; // r8
  __int64 v79; // rdx
  unsigned __int64 v80; // rax
  __int16 v81; // ax
  __int64 v82; // r8
  __int16 v83; // ax
  PVOID v84; // rbx
  NTSTATUS v85; // edi
  int v86; // ebx
  int v87; // ebx
  char v88; // bl
  PVOID v89; // rcx
  int v90; // ebx
  unsigned __int64 v91; // rcx
  NTSTATUS v92; // eax
  struct _LIST_ENTRY *v93; // rbx
  __int64 v94; // rdx
  struct _KTHREAD *v95; // rax
  struct _LIST_ENTRY *v96; // rax
  struct _LIST_ENTRY *v97; // rdi
  PEPROCESS v98; // rsi
  char IsSiloInSilo; // al
  struct _LIST_ENTRY *v100; // rcx
  __int64 EffectiveServerSilo; // rbx
  __int64 ProcessServerSilo; // rax
  struct _KTHREAD *v103; // rcx
  __int16 v104; // bx
  unsigned __int8 v105; // [rsp+40h] [rbp-3E8h]
  PVOID Object; // [rsp+48h] [rbp-3E0h] BYREF
  NTSTATUS v107; // [rsp+50h] [rbp-3D8h]
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-3D0h]
  char v109; // [rsp+60h] [rbp-3C8h]
  char v110; // [rsp+61h] [rbp-3C7h]
  int v111; // [rsp+64h] [rbp-3C4h]
  struct _KTHREAD *v112; // [rsp+68h] [rbp-3C0h]
  __int16 v113; // [rsp+74h] [rbp-3B4h] BYREF
  _PROCESSOR_NUMBER v114; // [rsp+78h] [rbp-3B0h] BYREF
  PVOID Token[2]; // [rsp+80h] [rbp-3A8h] BYREF
  char v116; // [rsp+90h] [rbp-398h]
  LONG Increment; // [rsp+94h] [rbp-394h]
  PVOID v118; // [rsp+98h] [rbp-390h]
  int v119; // [rsp+A0h] [rbp-388h]
  PVOID v120; // [rsp+A8h] [rbp-380h] BYREF
  unsigned int v121; // [rsp+B0h] [rbp-378h]
  PVOID P; // [rsp+B8h] [rbp-370h]
  __int128 v123; // [rsp+C0h] [rbp-368h]
  __int128 v124; // [rsp+D0h] [rbp-358h]
  unsigned __int64 v125; // [rsp+E0h] [rbp-348h]
  PVOID v126; // [rsp+E8h] [rbp-340h] BYREF
  ULONG_PTR v127; // [rsp+F0h] [rbp-338h]
  HANDLE v128; // [rsp+F8h] [rbp-330h] BYREF
  void *Src[2]; // [rsp+100h] [rbp-328h]
  int v130; // [rsp+110h] [rbp-318h]
  int v131; // [rsp+114h] [rbp-314h]
  int v132; // [rsp+118h] [rbp-310h]
  unsigned int v133; // [rsp+11Ch] [rbp-30Ch]
  int v134; // [rsp+120h] [rbp-308h]
  unsigned int v135; // [rsp+124h] [rbp-304h]
  unsigned int v136; // [rsp+128h] [rbp-300h]
  int v137; // [rsp+12Ch] [rbp-2FCh]
  int v138; // [rsp+130h] [rbp-2F8h]
  int v139; // [rsp+134h] [rbp-2F4h]
  unsigned __int64 v140; // [rsp+138h] [rbp-2F0h]
  HANDLE Handle; // [rsp+150h] [rbp-2D8h]
  __int128 v142; // [rsp+158h] [rbp-2D0h]
  __m128i v143; // [rsp+170h] [rbp-2B8h]
  ULONG_PTR v144[2]; // [rsp+180h] [rbp-2A8h]
  _QWORD v145[2]; // [rsp+190h] [rbp-298h] BYREF
  HANDLE v146; // [rsp+1A0h] [rbp-288h]
  __int64 v147; // [rsp+1B0h] [rbp-278h] BYREF
  _QWORD v148[33]; // [rsp+1B8h] [rbp-270h] BYREF
  _BYTE v149[256]; // [rsp+2C0h] [rbp-168h] BYREF

  v4 = ThreadInformationLength;
  BugCheckParameter1 = (ULONG_PTR)ThreadHandle;
  v7 = 0LL;
  Object = 0LL;
  v123 = 0LL;
  memset_0(&v147, 0, 0x108uLL);
  v113 = 0;
  v119 = 0;
  v111 = 0;
  v121 = 0;
  v120 = 0LL;
  v140 = 0LL;
  v124 = 0LL;
  v125 = 0LL;
  v142 = 0LL;
  v114 = 0;
  v126 = 0LL;
  *(_OWORD *)Src = 0LL;
  v128 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v112 = CurrentThread;
  PreviousMode = (unsigned __int8)CurrentThread->PreviousMode;
  v105 = PreviousMode;
  if ( (_BYTE)PreviousMode )
  {
    if ( ThreadInformationClass == ThreadPriority )
    {
LABEL_3:
      v10 = 4;
      v111 = 4;
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
          v111 = 8;
          break;
        case ThreadEnableAlignmentFaultFixup:
        case ThreadCounterProfiling:
          v10 = 1;
          v111 = 1;
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
      if ( (unsigned __int64)ThreadInformation + v4 > 0x7FFFFFFF0000LL
        || (char *)ThreadInformation + v4 < ThreadInformation )
      {
        v10 = v111;
      }
    }
    if ( ThreadInformationClass == ThreadSchedulerSharedDataSlot
      || ThreadInformationClass == ThreadManageWritesToExecutableMemory )
    {
      ProbeForWrite(ThreadInformation, v4, v10);
      PreviousMode = v105;
    }
    CurrentThread = v112;
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
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v15 = KeGetCurrentThread();
        if ( Handle )
        {
          v24 = v15->PreviousMode;
          Token[0] = 0LL;
          LODWORD(v7) = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)SeTokenObjectType, v24, Token, 0LL);
          if ( (int)v7 >= 0 )
          {
            v25 = Token[0];
            if ( *((_DWORD *)Token[0] + 48) == 2 )
            {
              LODWORD(v7) = PsImpersonateClient(
                              (PETHREAD)Object,
                              Token[0],
                              0,
                              0,
                              *((SECURITY_IMPERSONATION_LEVEL *)Token[0] + 49));
              ObfDereferenceObject(v25);
            }
            else
            {
              ObfDereferenceObject(Token[0]);
              LODWORD(v7) = -1073741656;
            }
          }
        }
        else
        {
          PsImpersonateClient((PETHREAD)Object, 0LL, 0, 0, SecurityImpersonation);
        }
LABEL_34:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return (int)v7;
      }
      return result;
    }
    return -1073741820;
  }
  if ( ThreadInformationClass == ThreadWorkOnBehalfTicket )
  {
    if ( BugCheckParameter1 != -2LL )
      return -1073741811;
    if ( (_DWORD)v4 == 8 )
    {
      v18 = *(HANDLE *)ThreadInformation;
      v128 = *(HANDLE *)ThreadInformation;
      result = ObpReferenceObjectByHandleWithTag(
                 0xFFFFFFFFFFFFFFFEuLL,
                 1024,
                 (__int64)PsThreadType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v12 = result;
      if ( result >= 0 )
      {
        Token[0] = 0LL;
        if ( v18 && (v12 = PspThreadFromTicket(&v128, Token), v7 = (char *)Token[0], v12 < 0) )
        {
          v19 = Object;
        }
        else
        {
          v19 = Object;
          PspUpdateContainerImpersonation((_KTHREAD *)Object, v7);
        }
        if ( v7 )
          ObfDereferenceObject(v7);
LABEL_48:
        v20 = v19;
        goto LABEL_49;
      }
      return result;
    }
    return -1073741820;
  }
  if ( ThreadInformationClass != ThreadPriority )
  {
    if ( ThreadInformationClass != ThreadQuerySetWin32StartAddress )
    {
      switch ( ThreadInformationClass )
      {
        case ThreadBasePriority:
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          v31 = *(_DWORD *)ThreadInformation;
          Increment = *(_DWORD *)ThreadInformation;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     1024,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v107 = result;
          if ( result < 0 )
            return result;
          v32 = Object;
          v33 = *((_QWORD *)Object + 68);
          v34 = (unsigned int)(v31 + 16);
          if ( (unsigned int)v34 > 0x20 || (v35 = 0x10007C001LL, !_bittest64(&v35, v34)) )
          {
            if ( v112->ApcState.Process != (_KPROCESS *)*((_QWORD *)PsGetServerSiloGlobals(0LL) + 106)
              && *(_BYTE *)(v33 + 839) != 4 )
            {
              ObfDereferenceObjectWithTag(v32, 0x79517350u);
              return -1073741811;
            }
          }
          v36 = *(_QWORD *)(v33 + 672);
          if ( v36 && (*(_DWORD *)(v36 + 1056) & 0x20) != 0 && *(_BYTE *)(v33 + 839) != 4 )
          {
            v37 = Increment;
            if ( Increment > 0 )
            {
              v38 = Object;
              goto LABEL_82;
            }
          }
          else
          {
            v37 = Increment;
          }
          v38 = Object;
          KeSetBasePriorityThread((PKTHREAD)Object, v37);
LABEL_82:
          v39 = v107;
          ObfDereferenceObjectWithTag(v38, 0x79517350u);
          return v39;
        case ThreadAffinityMask:
          if ( (_DWORD)v4 != 8 )
            return -1073741820;
          *(_QWORD *)&v123 = *(_QWORD *)ThreadInformation;
          v52 = v123;
          if ( !(_QWORD)v123 )
            return -1073741811;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     1024,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            v53 = Object;
            v54 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)Object + 68);
            if ( ExAcquireRundownProtection_0(v54 + 61) )
            {
              v55 = KiSetLegacyAffinityThread((__int64)v53, v52);
              ExReleaseRundownProtection_0(v54 + 61);
              if ( !v55 )
                LODWORD(v7) = -1073741811;
            }
            else
            {
              LODWORD(v7) = -1073741558;
            }
            ObfDereferenceObjectWithTag(v53, 0x79517350u);
            return (int)v7;
          }
          return result;
        case ThreadEnableAlignmentFaultFixup:
          if ( (_DWORD)v4 != 1 )
            return -1073741820;
          v88 = *(_BYTE *)ThreadInformation;
          v116 = *(_BYTE *)ThreadInformation;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v107 = result;
          if ( result >= 0 )
          {
            if ( v88 )
              _interlockedbittestandset((volatile signed __int32 *)Object + 30, 2u);
            else
              _interlockedbittestandreset((volatile signed __int32 *)Object + 30, 2u);
            goto LABEL_57;
          }
          return result;
        case ThreadZeroTlsCell:
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          v69 = *(_DWORD *)ThreadInformation;
          v119 = *(_DWORD *)ThreadInformation;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v70 = result;
          v107 = result;
          if ( result >= 0 )
          {
            v71 = (struct _KTHREAD *)Object;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( v71 != v112 )
              return -1073741811;
            Process = (__int64)v71->Process;
            v112 = (struct _KTHREAD *)Process;
            for ( i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Process, 0LL);
                  ;
                  i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Process, v74) )
            {
              Object = i;
              v74 = i;
              if ( !i )
                break;
              if ( ExAcquireRundownProtection_0(i + 177) )
              {
                Count = v74[30].Count;
                if ( Count )
                {
                  v76 = 0LL;
                  v77 = *(_QWORD *)(Process + 784);
                  if ( v77 )
                  {
                    v78 = *(_WORD *)(Process + 1772);
                    if ( v78 == 332 || v78 == 452 )
                      v76 = Count + 0x2000;
                  }
                  if ( v69 < 0x40 )
                  {
                    if ( v77 && ((v83 = *(_WORD *)(Process + 1772), v83 == 332) || v83 == 452) )
                    {
                      if ( v76 )
                        *(_DWORD *)(v76 + 4LL * v69 + 3600) = 0;
                    }
                    else
                    {
                      *(_QWORD *)(Count + 8LL * v69 + 5248) = 0LL;
                    }
                  }
                  else if ( v69 < 0x440 )
                  {
                    if ( v77 && ((v81 = *(_WORD *)(Process + 1772), v81 == 332) || v81 == 452) )
                    {
                      if ( v76 )
                      {
                        v82 = *(unsigned int *)(v76 + 3988);
                        if ( (_DWORD)v82 )
                          *(_DWORD *)(v82 + 4LL * (v69 - 64)) = 0;
                      }
                    }
                    else
                    {
                      v79 = *(_QWORD *)(Count + 6016);
                      v145[1] = v79;
                      if ( v79 )
                      {
                        v80 = v79 + 8LL * (v69 - 64);
                        if ( v80 >= 0x7FFFFFFF0000LL )
                          v80 = 0x7FFFFFFF0000LL;
                        *(_QWORD *)v80 = 0LL;
                      }
                    }
                  }
                }
                ExReleaseRundownProtection_0(v74 + 177);
              }
            }
            return v70;
          }
          return result;
        case ThreadIdealProcessor:
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          v121 = *(_DWORD *)ThreadInformation;
          v56 = v121;
          if ( v121 > 0x40 )
            return -1073741811;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            v57 = KeSetIdealProcessorThread((PKTHREAD)Object, v56);
            goto LABEL_138;
          }
          return result;
        case ThreadPriorityBoost:
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          v59 = *(_DWORD *)ThreadInformation;
          v130 = *(_DWORD *)ThreadInformation;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     1024,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v60 = result;
          if ( result >= 0 )
          {
            LOBYTE(v7) = v59 != 0;
            KeSetDisableBoostThread((__int64)Object, (unsigned int)v7);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v60;
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
                     &Object,
                     0LL,
                     0LL);
          v107 = result;
          if ( result >= 0 )
          {
            _InterlockedOr((volatile signed __int32 *)Object + 360, 4u);
            goto LABEL_230;
          }
          return result;
        case ThreadBreakOnTermination:
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          v87 = *(_DWORD *)ThreadInformation;
          v131 = *(_DWORD *)ThreadInformation;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741727;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     v105,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v107 = result;
          if ( result >= 0 )
          {
            if ( v87 )
              _InterlockedOr((volatile signed __int32 *)Object + 360, 0x20u);
            else
              _InterlockedAnd((volatile signed __int32 *)Object + 360, 0xFFFFFFDF);
            goto LABEL_57;
          }
          return result;
        case ThreadSwitchLegacyState:
          if ( BugCheckParameter1 != -2LL )
            return -1073741811;
          result = ObpReferenceObjectByHandleWithTag(
                     0xFFFFFFFFFFFFFFFEuLL,
                     32,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            v89 = Object;
            *((_QWORD *)Object + 74) |= MEMORY[0xFFFFF780000003D8] | 3LL;
            ObfDereferenceObjectWithTag(v89, 0x79517350u);
            return 0;
          }
          return result;
        case ThreadIoPriority:
          if ( (((_DWORD)v4 - 4) & 0xFFFFFFFB) != 0 )
            return -1073741820;
          if ( (_DWORD)v4 == 4 )
          {
            LODWORD(v16) = *(_DWORD *)ThreadInformation;
            v132 = *(_DWORD *)ThreadInformation;
            LOBYTE(v17) = 0;
          }
          else
          {
            v16 = *(_QWORD *)ThreadInformation;
            v140 = v16;
            v17 = HIDWORD(v16);
          }
          if ( (unsigned int)v16 >= 4 )
            return -1073741811;
          if ( (unsigned int)v16 >= 3 )
          {
            if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                     SeIncreaseBasePriorityPrivilege,
                                     BugCheckParameter1,
                                     32LL,
                                     PreviousMode) )
              return -1073741727;
            LOBYTE(PreviousMode) = v105;
          }
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            v61 = Object;
            if ( (_BYTE)v17 == 1 && ((*((_DWORD *)Object + 360) >> 9) & 7) < (int)v16 )
              IoBoostThreadIoPriority((KSPIN_LOCK *)Object, v16, 0);
            PsSetIoPriorityThread((__int64)v61, v16);
            ObfDereferenceObjectWithTag(v61, 0x79517350u);
            return 0;
          }
          return result;
        case ThreadPagePriority:
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          v133 = *(_DWORD *)ThreadInformation;
          v44 = v133;
          if ( v133 > (unsigned int)MmGetDefaultPagePriority() || v133 < (unsigned int)MmGetMinWsPagePriority() )
            return -1073741811;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     v45,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            PsSetPagePriorityThread((__int64)Object, v44);
            goto LABEL_57;
          }
          return result;
        case ThreadActualBasePriority:
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          Increment = *(_DWORD *)ThreadInformation;
          v26 = Increment;
          if ( (unsigned int)(Increment - 1) > 0x1E )
            return -1073741811;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     1024,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v27 = result;
          if ( result >= 0 )
          {
            v28 = Object;
            if ( v26 < 16
              || *(_BYTE *)(*((_QWORD *)Object + 68) + 839LL) == 4
              || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v105) )
            {
              KeSetActualBasePriorityThread((ULONG_PTR)v28, v26);
              ObfDereferenceObjectWithTag(v28, 0x79517350u);
              return v27;
            }
            else
            {
              ObfDereferenceObjectWithTag(v28, 0x79517350u);
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
                     &Object,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            v29 = Object;
            if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 177) )
            {
              v30 = PspWow64SetContextThread((PETHREAD)v29);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v29 + 177);
              ObfDereferenceObjectWithTag(v29, 0x79517350u);
              return v30;
            }
            else
            {
              ObfDereferenceObjectWithTag(v29, 0x79517350u);
              return -1073741749;
            }
          }
          return result;
        case ThreadGroupInformation:
          if ( (_DWORD)v4 != 16 )
            return -1073741820;
          v123 = *(_OWORD *)ThreadInformation;
          if ( WORD4(v123) >= KeQueryActiveGroupCount() )
            return -1073741811;
          v62 = v123;
          if ( ((unsigned __int64)v123 & KeActiveProcessors.Bitmap[WORD4(v123)]) != (_QWORD)v123 )
            return -1073741811;
          v63 = WORD4(v123);
          if ( WORD5(v123) | (unsigned __int16)(WORD6(v123) | HIWORD(v123)) )
            return -1073741811;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     v105,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v147 = 2097153LL;
          memset_0(v148, 0, 0x100uLL);
          if ( (unsigned __int16)v147 > v63 )
            goto LABEL_169;
          if ( WORD1(v147) > v63 )
          {
            LOWORD(v147) = v63 + 1;
LABEL_169:
            v148[v63] |= v62;
          }
          v64 = *((_QWORD *)Object + 68);
          PspLockProcessShared(v64, (__int64)v112);
          v65 = *(char **)(v64 + 672);
          v120 = v65;
          if ( v65
            && (ExAcquireResourceSharedLite((PERESOURCE)(v65 + 56), 1u), (*((_DWORD *)v65 + 264) & 0x10) != 0)
            && !(unsigned int)KeIsSubsetAffinityEx((unsigned __int16 *)&v147, (unsigned __int16 *)v65 + 364) )
          {
            LODWORD(v7) = -1073741823;
          }
          else
          {
            KeSetUserAffinityThread((__int64)Object, (__int64)&v147);
            KeQueryPrimaryGroupProcess(v64, &v113, v66, v67);
            for ( j = 0; ; ++j )
            {
              if ( j >= (unsigned __int16)v147 )
                goto LABEL_220;
              if ( v148[j] )
                break;
            }
            v107 = 0;
            if ( v113 != WORD4(v123) )
            {
              _interlockedbittestandset((volatile signed __int32 *)(v64 + 136), 0xCu);
              v65 = (char *)v120;
            }
          }
LABEL_220:
          if ( v65 )
            ExReleaseResourceLite((PERESOURCE)(v65 + 56));
          PspUnlockProcessShared(v64);
          goto LABEL_34;
        case ThreadCounterProfiling:
          if ( (_DWORD)v4 != 24 )
            return -1073741820;
          v124 = *(_OWORD *)ThreadInformation;
          v125 = *((_QWORD *)ThreadInformation + 2);
          v91 = v125;
          if ( (v125 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v125 >= 0x7FFFFFFF0000LL )
            v91 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v91 = *(_BYTE *)v91;
          *(_BYTE *)(v91 + 447) = *(_BYTE *)(v91 + 447);
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v19 = Object;
          if ( Object == KeGetCurrentThread() )
          {
            if ( HIDWORD(v124) )
              v92 = KeEnableProfiling(Object, DWORD2(v124), v124, v125);
            else
              v92 = KeDisableProfiling((__int64)Object, v125);
            v12 = v92;
          }
          else
          {
            v12 = -1073741637;
          }
          goto LABEL_48;
        case ThreadIdealProcessorEx:
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          v114 = *(_PROCESSOR_NUMBER *)ThreadInformation;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            v84 = Object;
            v85 = KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, &v114, &v114);
            if ( v85 >= 0 )
              *(_PROCESSOR_NUMBER *)ThreadInformation = v114;
            ObfDereferenceObjectWithTag(v84, 0x79517350u);
            return v85;
          }
          return result;
        case ThreadCpuAccountingInformation:
          if ( BugCheckParameter1 != -2LL )
            return -1073741811;
          if ( (_DWORD)v4 != 8 )
            return -1073741820;
          v146 = *(HANDLE *)ThreadInformation;
          if ( v146 )
          {
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)v146,
                       2,
                       (__int64)MmSessionObjectType,
                       PreviousMode,
                       0x79517350u,
                       &v126,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v93 = (struct _LIST_ENTRY *)v126;
            v94 = *((_QWORD *)v126 + 4);
            if ( !v94 )
            {
              ObfDereferenceObjectWithTag(v126, 0x79517350u);
              return -1073740715;
            }
            if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)v112, v94) )
            {
              ObfDereferenceObjectWithTag(v93, 0x79517350u);
              return -1073740714;
            }
            v112[1].ApcState.ApcListHead[1].Flink = v93;
            return 0;
          }
          if ( CurrentThread[1].ApcState.ApcListHead[1].Flink )
          {
            KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL);
            ObfDereferenceObject(v112[1].ApcState.ApcListHead[1].Flink);
            v112[1].ApcState.ApcListHead[1].Flink = 0LL;
            return 0;
          }
          return -1073740713;
        case ThreadHeterogeneousCpuPolicy:
        case ThreadManageWritesToExecutableMemory:
          return -1073741637;
        case ThreadNameInformation:
          v110 = 0;
          v46 = 0LL;
          v118 = 0LL;
          P = 0LL;
          v109 = 0;
          if ( (_DWORD)v4 == 16 )
          {
            v12 = ObpReferenceObjectByHandleWithTag(
                    BugCheckParameter1,
                    1024,
                    (__int64)PsThreadType,
                    PreviousMode,
                    0x79517350u,
                    &Object,
                    0LL,
                    0LL);
            v107 = v12;
            if ( v12 >= 0 )
            {
              v110 = 1;
              if ( v105 )
              {
                v143 = 0LL;
                v47 = 0x7FFFFFFF0000LL;
                if ( (unsigned __int64)ThreadInformation < 0x7FFFFFFF0000LL )
                  v47 = (__int64)ThreadInformation;
                v143.m128i_i32[0] = *(_DWORD *)v47;
                v48 = *(_QWORD *)(v47 + 8);
                v143.m128i_i64[1] = v48;
                *(__m128i *)Src = v143;
                if ( (unsigned __int16)_mm_cvtsi128_si32(v143) && (v48 & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v12 = v107;
                v46 = v118;
              }
              else
              {
                *(_OWORD *)Src = *(_OWORD *)ThreadInformation;
              }
              v49 = (unsigned __int16)Src[0];
              if ( ((__int64)Src[0] & 1) != 0 || LOWORD(Src[0]) > WORD1(Src[0]) )
              {
                v12 = -1073741811;
                v107 = -1073741811;
              }
              else
              {
                Pool2 = (unsigned __int16 *)ExAllocatePool2(0x40uLL, LOWORD(Src[0]) + 16LL, 0x6D4E6854u);
                v46 = Pool2;
                v118 = Pool2;
                if ( Pool2 )
                {
                  *((_QWORD *)Pool2 + 1) = Pool2 + 8;
                  *Pool2 = v49;
                  Pool2[1] = v49;
                  memmove(Pool2 + 8, Src[1], v49);
                  v51 = Object;
                  PspLockThreadSecurityExclusive((__int64)Object, (__int64)v112);
                  v109 = 1;
                  P = (PVOID)*((_QWORD *)v51 + 212);
                  *((_QWORD *)v51 + 212) = v46;
                  v46 = 0LL;
                  v118 = 0LL;
                  EtwTraceThreadSetName(v51);
                }
                else
                {
                  v12 = -1073741670;
                  v107 = -1073741670;
                }
              }
            }
          }
          else
          {
            v12 = -1073741820;
            v107 = -1073741820;
          }
          if ( v109 )
            PspUnlockThreadSecurityExclusive((__int64)Object);
          if ( v110 )
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( P )
            ExFreePoolWithTag(P, 0x6D4E6854u);
          if ( !v46 )
            return v12;
          ExFreePoolWithTag(v46, 0x6D4E6854u);
          return v12;
        case ThreadSelectedCpuSets:
          if ( (v4 & 7) != 0 || (unsigned int)v4 > 0x100 )
            return -1073741820;
          memmove(v149, ThreadInformation, v4);
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     1024,
                     (__int64)PsThreadType,
                     v105,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            v57 = KeSetSelectedCpuSetsThread((__int64)Object, (unsigned int)v4 >> 3, (__int64)v149);
LABEL_138:
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v57;
          }
          return result;
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
          v86 = *(_DWORD *)ThreadInformation;
          v138 = *(_DWORD *)ThreadInformation;
          if ( !(_BYTE)PreviousMode )
            goto LABEL_227;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741727;
          if ( !RtlTestProtectedAccess(
                  (PS_PROTECTION)SBYTE2(v112->Process[3].ActiveGroupsMask.Masks[1]),
                  (PS_PROTECTION)81) )
            return -1073741790;
          LOBYTE(PreviousMode) = v105;
LABEL_227:
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v107 = result;
          if ( result >= 0 )
          {
            if ( v86 )
              _InterlockedOr((volatile signed __int32 *)Object + 360, 0x80000u);
            else
              _InterlockedAnd((volatile signed __int32 *)Object + 360, 0xFFF7FFFF);
LABEL_230:
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v107;
          }
          return result;
        case ThreadDbgkWerReportActive:
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          v90 = *(_DWORD *)ThreadInformation;
          v137 = *(_DWORD *)ThreadInformation;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v107 = result;
          if ( result < 0 )
            return result;
          if ( v90 )
            _InterlockedOr((volatile signed __int32 *)Object + 360, 0x200000u);
          else
            _InterlockedAnd((volatile signed __int32 *)Object + 360, 0xFFDFFFFF);
          goto LABEL_230;
        case ThreadAttachContainer:
          if ( BugCheckParameter1 != -2LL )
            return -1073741811;
          if ( (_DWORD)v4 != 8 )
            return -1073741820;
          v127 = *(_QWORD *)ThreadInformation;
          v95 = KeGetCurrentThread();
          if ( !v127 )
          {
            if ( v95[1].WaitBlock[3].WaitListEntry.Blink == (struct _LIST_ENTRY *)-3LL )
              return -1073741811;
            v96 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
            v23 = 1833530192;
            v22 = v96;
            goto LABEL_59;
          }
          Object = v95;
          if ( v95[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
            return -1073741811;
          result = ObpReferenceObjectByHandleWithTag(
                     v127,
                     32,
                     (__int64)PsJobType,
                     PreviousMode,
                     0x6D497350u,
                     &v120,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            v97 = (struct _LIST_ENTRY *)v120;
            if ( (*((_DWORD *)v120 + 389) & 2) == 0 )
            {
              ObfDereferenceObjectWithTag(v120, 0x6D497350u);
              return -1073741811;
            }
            v98 = IoThreadToProcess((PETHREAD)Object);
            PsGetProcessSilo((__int64)v98);
            IsSiloInSilo = PspIsSiloInSilo(v97);
            v100 = v97;
            if ( IsSiloInSilo )
            {
              EffectiveServerSilo = PsGetEffectiveServerSilo((__int64)v97);
              ProcessServerSilo = PsGetProcessServerSilo((__int64)v98);
              v100 = v97;
              if ( ProcessServerSilo == EffectiveServerSilo )
              {
                PsAttachSiloToCurrentThread(v97);
                return 0;
              }
            }
            ObfDereferenceObjectWithTag(v100, 0x6D497350u);
            return -1073741811;
          }
          return result;
        case ThreadPowerThrottlingState:
          if ( (_DWORD)v4 != 12 )
            return -1073741820;
          Token[0] = *(PVOID *)ThreadInformation;
          v58 = *((_DWORD *)ThreadInformation + 2);
          if ( LODWORD(Token[0]) != 1 || (HIDWORD(Token[0]) & 0xFFFFFFFE) != 0 || (~HIDWORD(Token[0]) & v58) != 0 )
            return -1073741811;
          if ( (BYTE4(Token[0]) & 1) != 0 )
          {
            if ( (v58 & 1) == 0 )
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
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          PspSetThreadPpmPolicy(Object, v11);
          goto LABEL_57;
        case ThreadWorkloadClass:
          if ( BugCheckParameter1 != -2LL || (_BYTE)PreviousMode )
            return -1073741790;
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          v136 = *(_DWORD *)ThreadInformation;
          if ( v136 >= 2 )
            return -1073741811;
          v103 = KeGetCurrentThread();
          *((_DWORD *)&v103[1].SwapListEntry + 3) ^= ((unsigned __int16)*((_DWORD *)&v103[1].SwapListEntry + 3) ^ (unsigned __int16)((_WORD)v136 << 11)) & 0x800;
          KeUpdateThreadCpuSets((__int64)v103);
          return 0;
        case ThreadStrongerBadHandleChecks:
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          if ( BugCheckParameter1 != -2LL )
            return -1073741790;
          v135 = *(_DWORD *)ThreadInformation;
          v104 = v135;
          if ( v135 > 1 )
            return -1073741811;
          result = ObpReferenceObjectByHandleWithTag(
                     0xFFFFFFFFFFFFFFFEuLL,
                     32,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v22 = Object;
          *((_DWORD *)Object + 361) ^= ((unsigned __int16)*((_DWORD *)Object + 361) ^ (unsigned __int16)(v104 << 12)) & 0x1000;
          goto LABEL_58;
        case ThreadUpdateLockOwnership:
          if ( (_DWORD)v4 != 16 )
            return -1073741820;
          v142 = *(_OWORD *)ThreadInformation;
          if ( DWORD2(v142) )
          {
            v12 = -1073741811;
          }
          else
          {
            v12 = ObpReferenceObjectByHandleWithTag(
                    BugCheckParameter1,
                    32,
                    (__int64)PsThreadType,
                    PreviousMode,
                    0x79517350u,
                    &Object,
                    0LL,
                    0LL);
            v107 = v12;
            if ( v12 >= 0 )
            {
              v13 = Object;
              if ( Object == KeGetCurrentThread() )
              {
                KeAbUserModeEntryFree((ULONG_PTR)Object, v142);
                v12 = v107;
              }
              else
              {
                v12 = -1073741637;
              }
LABEL_28:
              if ( v13 )
              {
                ObfDereferenceObjectWithTag(v13, 0x79517350u);
                return v12;
              }
              return v12;
            }
          }
          v13 = Object;
          goto LABEL_28;
        case ThreadSchedulerSharedDataSlot:
          if ( (_DWORD)v4 != 24 )
            return -1073741820;
          Token[0] = 0LL;
          v40 = *(__m128i *)ThreadInformation;
          *(_OWORD *)v144 = *(_OWORD *)ThreadInformation;
          v41 = *((_QWORD *)ThreadInformation + 2);
          v145[0] = v41;
          v12 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  32,
                  (__int64)PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Object,
                  0LL,
                  0LL);
          if ( v12 < 0 )
            goto LABEL_90;
          v42 = _mm_cvtsi128_si32(v40);
          if ( !v42 )
          {
            v12 = ObpReferenceObjectByHandleWithTag(
                    v144[1],
                    1,
                    (__int64)PspSchedulerSharedDataType,
                    v105,
                    0x79517350u,
                    Token,
                    0LL,
                    0LL);
            if ( v12 < 0 )
              goto LABEL_90;
            v43 = PspSchedulerSharedDataRegionSlotAllocate(Object, Token[0], v145);
            v41 = v145[0];
            v40 = *(__m128i *)v144;
            goto LABEL_88;
          }
          if ( v42 == 1 )
          {
            v43 = PspSchedulerSharedDataRegionSlotFree(Object);
LABEL_88:
            v12 = v43;
            goto LABEL_89;
          }
          v12 = -1073741637;
LABEL_89:
          *(__m128i *)ThreadInformation = v40;
          *((_QWORD *)ThreadInformation + 2) = v41;
LABEL_90:
          if ( Token[0] )
            ObfDereferenceObjectWithTag(Token[0], 0x79517350u);
          v20 = Object;
          if ( !Object )
            return v12;
          break;
        default:
          return -1073741821;
      }
LABEL_49:
      ObfDereferenceObjectWithTag(v20, 0x79517350u);
      return v12;
    }
    return -1073741811;
  }
  if ( (_DWORD)v4 != 4 )
    return -1073741820;
  v134 = *(_DWORD *)ThreadInformation;
  v21 = v134;
  if ( (unsigned int)(v134 - 1) > 0x1E )
    return -1073741811;
  if ( v134 >= 16 )
  {
    if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                             SeIncreaseBasePriorityPrivilege,
                             BugCheckParameter1,
                             1024LL,
                             PreviousMode) )
      return -1073741727;
    LOBYTE(PreviousMode) = v105;
  }
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             1024,
             (__int64)PsThreadType,
             PreviousMode,
             0x79517350u,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    KeSetPriorityThread((PKTHREAD)Object, v21);
LABEL_57:
    v22 = Object;
LABEL_58:
    v23 = 2035381072;
LABEL_59:
    ObfDereferenceObjectWithTag(v22, v23);
    return 0;
  }
  return result;
}
