/*
 * XREFs of NtSetInformationThread @ 0x140911410
 * Callers:
 *     EtwpLogger @ 0x1409D88E0 (EtwpLogger.c)
 * Callees:
 *     KeSetUserAffinityThread @ 0x140209564 (KeSetUserAffinityThread.c)
 *     PsSetIoPriorityThread @ 0x14020973C (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x1402098B8 (PsSetPagePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     PspUnlockProcessShared @ 0x14025E2E0 (PspUnlockProcessShared.c)
 *     IoBoostThreadIoPriority @ 0x140278D90 (IoBoostThreadIoPriority.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402A0C10 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PspUpdateContainerImpersonation @ 0x1402A11C4 (PspUpdateContainerImpersonation.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PspLockProcessShared @ 0x14033E760 (PspLockProcessShared.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     PsGetEffectiveServerSilo @ 0x140349B30 (PsGetEffectiveServerSilo.c)
 *     KiSetLegacyAffinityThread @ 0x1403B178C (KiSetLegacyAffinityThread.c)
 *     KeIsSubsetAffinityEx @ 0x1403B34F0 (KeIsSubsetAffinityEx.c)
 *     KeQueryPrimaryGroupProcess @ 0x1403B3618 (KeQueryPrimaryGroupProcess.c)
 *     KeSetIdealProcessorThread @ 0x1403B40B0 (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403B4160 (KeSetIdealProcessorThreadByNumber.c)
 *     KeUpdateThreadCpuSets @ 0x1403C6338 (KeUpdateThreadCpuSets.c)
 *     KeSetSelectedCpuSetsThread @ 0x1403C6670 (KeSetSelectedCpuSetsThread.c)
 *     KeSetPriorityThread @ 0x1403F96D0 (KeSetPriorityThread.c)
 *     PsGetProcessSilo @ 0x14040EEC0 (PsGetProcessSilo.c)
 *     PspLockThreadSecurityExclusive @ 0x140431AF0 (PspLockThreadSecurityExclusive.c)
 *     PsAttachSiloToCurrentThread @ 0x14043CF50 (PsAttachSiloToCurrentThread.c)
 *     PspUnlockThreadSecurityExclusive @ 0x14043D500 (PspUnlockThreadSecurityExclusive.c)
 *     IoThreadToProcess @ 0x140441CC0 (IoThreadToProcess.c)
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 *     KeSetDisableBoostThread @ 0x140451E34 (KeSetDisableBoostThread.c)
 *     KeAbUserModeEntryFree @ 0x14046AAD8 (KeAbUserModeEntryFree.c)
 *     MmGetMinWsPagePriority @ 0x1404790C0 (MmGetMinWsPagePriority.c)
 *     MmGetDefaultPagePriority @ 0x14047E830 (MmGetDefaultPagePriority.c)
 *     KeQueryActiveGroupCount @ 0x140481460 (KeQueryActiveGroupCount.c)
 *     KeDisableProfiling @ 0x1404D8C44 (KeDisableProfiling.c)
 *     KeSetBasePriorityThread @ 0x1404E7260 (KeSetBasePriorityThread.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     PspSchedulerSharedDataRegionSlotFree @ 0x1408A7904 (PspSchedulerSharedDataRegionSlotFree.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 *     PspThreadFromTicket @ 0x140912E70 (PspThreadFromTicket.c)
 *     PspWow64SetContextThread @ 0x140913174 (PspWow64SetContextThread.c)
 *     EtwTraceThreadSetName @ 0x1409136CC (EtwTraceThreadSetName.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x1409137C4 (PspSchedulerSharedDataRegionSlotAllocate.c)
 *     PspSetThreadPpmPolicy @ 0x140913AC0 (PspSetThreadPpmPolicy.c)
 *     SeCheckPrivilegedObject @ 0x140913BF4 (SeCheckPrivilegedObject.c)
 *     PsGetNextProcessThread @ 0x14094A700 (PsGetNextProcessThread.c)
 *     RtlTestProtectedAccess @ 0x1409E87F0 (RtlTestProtectedAccess.c)
 *     PspIsSiloInSilo @ 0x140A57A74 (PspIsSiloInSilo.c)
 *     KeEnableProfiling @ 0x140AB6C40 (KeEnableProfiling.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v27; // r8
  NTSTATUS v28; // esi
  PVOID v29; // rdi
  PVOID v30; // rdi
  NTSTATUS v31; // ebx
  int v32; // esi
  PVOID v33; // rbx
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  LONG v38; // edx
  PVOID v39; // rbx
  NTSTATUS v40; // esi
  __m128i v41; // xmm6
  __int64 v42; // xmm7_8
  int v43; // ecx
  NTSTATUS v44; // eax
  int v45; // ebx
  char v46; // r9
  PVOID v47; // r14
  __int64 v48; // rcx
  __int64 v49; // rdx
  unsigned __int16 v50; // bx
  unsigned __int16 *Pool2; // rax
  PVOID v52; // rbx
  __int64 v53; // rbx
  PVOID v54; // r14
  struct _EX_RUNDOWN_REF *v55; // rsi
  __int64 v56; // rbx
  UCHAR v57; // bl
  NTSTATUS v58; // ebx
  int v59; // edx
  int v60; // ebx
  NTSTATUS v61; // esi
  PVOID v62; // rdi
  __int64 v63; // r14
  unsigned __int16 v64; // bx
  __int64 v65; // rsi
  __int64 v66; // r8
  char *v67; // rbx
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
  __int64 v91; // rdx
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
  PVOID Object; // [rsp+48h] [rbp-3E0h] BYREF
  NTSTATUS v108; // [rsp+50h] [rbp-3D8h]
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-3D0h]
  char v110; // [rsp+60h] [rbp-3C8h]
  char v111; // [rsp+61h] [rbp-3C7h]
  int v112; // [rsp+64h] [rbp-3C4h]
  struct _KTHREAD *v113; // [rsp+68h] [rbp-3C0h]
  __int16 v114; // [rsp+74h] [rbp-3B4h] BYREF
  struct _PROCESSOR_NUMBER v115; // [rsp+78h] [rbp-3B0h] BYREF
  PVOID Token[2]; // [rsp+80h] [rbp-3A8h] BYREF
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
  unsigned int v134; // [rsp+11Ch] [rbp-30Ch]
  int v135; // [rsp+120h] [rbp-308h]
  unsigned int v136; // [rsp+124h] [rbp-304h]
  unsigned int v137; // [rsp+128h] [rbp-300h]
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
  __int64 v148; // [rsp+1B0h] [rbp-278h] BYREF
  _QWORD v149[33]; // [rsp+1B8h] [rbp-270h] BYREF
  _BYTE v150[256]; // [rsp+2C0h] [rbp-168h] BYREF

  v4 = ThreadInformationLength;
  BugCheckParameter1 = (ULONG_PTR)ThreadHandle;
  v7 = 0LL;
  Object = 0LL;
  v124 = 0LL;
  memset_0(&v148, 0, 0x108uLL);
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
        case ThreadCpuAccountingInformation|ThreadAffinityMask:
        case ThreadCounterProfiling|ThreadIsIoPending:
        case ThreadCounterProfiling|ThreadPagePriority:
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
      if ( (unsigned __int64)ThreadInformation + v4 > 0x7FFFFFFF0000LL
        || (char *)ThreadInformation + v4 < ThreadInformation )
      {
        v10 = v112;
      }
    }
    if ( ThreadInformationClass == (ThreadActualGroupAffinity|ThreadIsIoPending)
      || ThreadInformationClass == (ThreadCounterProfiling|ThreadIsIoPending) )
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
  if ( ThreadInformationClass == (ThreadCounterProfiling|ThreadAmILastThread) )
  {
    if ( BugCheckParameter1 != -2LL )
      return -1073741811;
    if ( (_DWORD)v4 == 8 )
    {
      v18 = *(HANDLE *)ThreadInformation;
      v129 = *(HANDLE *)ThreadInformation;
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
        if ( v18 && (v12 = PspThreadFromTicket(&v129, Token), v7 = Token[0], v12 < 0) )
        {
          v19 = Object;
        }
        else
        {
          v19 = Object;
          PspUpdateContainerImpersonation((ULONG_PTR)Object, v7);
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
          v32 = *(_DWORD *)ThreadInformation;
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
          v108 = result;
          if ( result < 0 )
            return result;
          v33 = Object;
          v34 = *((_QWORD *)Object + 68);
          v35 = (unsigned int)(v32 + 16);
          if ( (unsigned int)v35 > 0x20 || (v36 = 0x10007C001LL, !_bittest64(&v36, v35)) )
          {
            if ( v113->ApcState.Process != (_KPROCESS *)*((_QWORD *)PsGetServerSiloGlobals(0LL) + 106)
              && *(_BYTE *)(v34 + 839) != 4 )
            {
              ObfDereferenceObjectWithTag(v33, 0x79517350u);
              return -1073741811;
            }
          }
          v37 = *(_QWORD *)(v34 + 672);
          if ( v37 && (*(_DWORD *)(v37 + 1056) & 0x20) != 0 && *(_BYTE *)(v34 + 839) != 4 )
          {
            v38 = Increment;
            if ( Increment > 0 )
            {
              v39 = Object;
              goto LABEL_82;
            }
          }
          else
          {
            v38 = Increment;
          }
          v39 = Object;
          KeSetBasePriorityThread((PKTHREAD)Object, v38);
LABEL_82:
          v40 = v108;
          ObfDereferenceObjectWithTag(v39, 0x79517350u);
          return v40;
        case ThreadAffinityMask:
          if ( (_DWORD)v4 != 8 )
            return -1073741820;
          *(_QWORD *)&v124 = *(_QWORD *)ThreadInformation;
          v53 = v124;
          if ( !(_QWORD)v124 )
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
            v54 = Object;
            v55 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)Object + 68);
            if ( ExAcquireRundownProtection(v55 + 61) )
            {
              v56 = KiSetLegacyAffinityThread((__int64)v54, v53);
              ExReleaseRundownProtection_0(v55 + 61);
              if ( !v56 )
                LODWORD(v7) = -1073741811;
            }
            else
            {
              LODWORD(v7) = -1073741558;
            }
            ObfDereferenceObjectWithTag(v54, 0x79517350u);
            return (int)v7;
          }
          return result;
        case ThreadEnableAlignmentFaultFixup:
          if ( (_DWORD)v4 != 1 )
            return -1073741820;
          v88 = *(_BYTE *)ThreadInformation;
          v117 = *(_BYTE *)ThreadInformation;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v108 = result;
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
          v120 = *(_DWORD *)ThreadInformation;
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
          v108 = result;
          if ( result >= 0 )
          {
            v71 = (struct _KTHREAD *)Object;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( v71 != v113 )
              return -1073741811;
            Process = (__int64)v71->Process;
            v113 = (struct _KTHREAD *)Process;
            for ( i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Process, 0LL);
                  ;
                  i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Process, v74) )
            {
              Object = i;
              v74 = i;
              if ( !i )
                break;
              if ( ExAcquireRundownProtection(i + 177) )
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
                      v146[1] = v79;
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
          v122 = *(_DWORD *)ThreadInformation;
          v57 = v122;
          if ( v122 > 0x40 )
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
            v58 = KeSetIdealProcessorThread((PKTHREAD)Object, v57);
            goto LABEL_138;
          }
          return result;
        case ThreadPriorityBoost:
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          v60 = *(_DWORD *)ThreadInformation;
          v131 = *(_DWORD *)ThreadInformation;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     1024,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v61 = result;
          if ( result >= 0 )
          {
            LOBYTE(v7) = v60 != 0;
            KeSetDisableBoostThread((__int64)Object, (unsigned int)v7);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v61;
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
          v108 = result;
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
          v132 = *(_DWORD *)ThreadInformation;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741727;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     v106,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v108 = result;
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
            v133 = *(_DWORD *)ThreadInformation;
            LOBYTE(v17) = 0;
          }
          else
          {
            v16 = *(_QWORD *)ThreadInformation;
            v141 = v16;
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
            LOBYTE(PreviousMode) = v106;
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
            v62 = Object;
            if ( (_BYTE)v17 == 1 && ((*((_DWORD *)Object + 360) >> 9) & 7) < (int)v16 )
              IoBoostThreadIoPriority((KSPIN_LOCK *)Object, v16, 0);
            PsSetIoPriorityThread((__int64)v62, v16);
            ObfDereferenceObjectWithTag(v62, 0x79517350u);
            return 0;
          }
          return result;
        case ThreadPagePriority:
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          v134 = *(_DWORD *)ThreadInformation;
          v45 = v134;
          if ( v134 > (unsigned int)MmGetDefaultPagePriority() || v134 < (unsigned int)MmGetMinWsPagePriority() )
            return -1073741811;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     v46,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            PsSetPagePriorityThread((__int64)Object, v45);
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
          v28 = result;
          if ( result >= 0 )
          {
            v29 = Object;
            if ( v26 < 16
              || *(_BYTE *)(*((_QWORD *)Object + 68) + 839LL) == 4
              || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v106) )
            {
              KeSetActualBasePriorityThread((ULONG_PTR)v29, v26, v27);
              ObfDereferenceObjectWithTag(v29, 0x79517350u);
              return v28;
            }
            else
            {
              ObfDereferenceObjectWithTag(v29, 0x79517350u);
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
            v30 = Object;
            if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 177) )
            {
              v31 = PspWow64SetContextThread((PETHREAD)v30);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v30 + 177);
              ObfDereferenceObjectWithTag(v30, 0x79517350u);
              return v31;
            }
            else
            {
              ObfDereferenceObjectWithTag(v30, 0x79517350u);
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
          v63 = v124;
          if ( ((unsigned __int64)v124 & KeActiveProcessors.Bitmap[WORD4(v124)]) != (_QWORD)v124 )
            return -1073741811;
          v64 = WORD4(v124);
          if ( WORD5(v124) | (unsigned __int16)(WORD6(v124) | HIWORD(v124)) )
            return -1073741811;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     v106,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v148 = 2097153LL;
          memset_0(v149, 0, 0x100uLL);
          if ( (unsigned __int16)v148 > v64 )
            goto LABEL_169;
          if ( WORD1(v148) > v64 )
          {
            LOWORD(v148) = v64 + 1;
LABEL_169:
            v149[v64] |= v63;
          }
          v65 = *((_QWORD *)Object + 68);
          PspLockProcessShared(v65, (__int64)v113);
          v67 = *(char **)(v65 + 672);
          v121 = v67;
          if ( v67
            && (ExAcquireResourceSharedLite((PERESOURCE)(v67 + 56), 1u), (*((_DWORD *)v67 + 264) & 0x10) != 0)
            && !(unsigned int)KeIsSubsetAffinityEx((unsigned __int16 *)&v148, (unsigned __int16 *)v67 + 364) )
          {
            LODWORD(v7) = -1073741823;
          }
          else
          {
            KeSetUserAffinityThread((__int64)Object, (__int64)&v148, v66);
            KeQueryPrimaryGroupProcess(v65, &v114);
            for ( j = 0; ; ++j )
            {
              if ( j >= (unsigned __int16)v148 )
                goto LABEL_220;
              if ( v149[j] )
                break;
            }
            v108 = 0;
            if ( v114 != WORD4(v124) )
            {
              _interlockedbittestandset((volatile signed __int32 *)(v65 + 136), 0xCu);
              v67 = (char *)v121;
            }
          }
LABEL_220:
          if ( v67 )
            ExReleaseResourceLite((PERESOURCE)(v67 + 56));
          PspUnlockProcessShared(v65);
          goto LABEL_34;
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
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v19 = Object;
          if ( Object == KeGetCurrentThread() )
          {
            if ( HIDWORD(v125) )
              v93 = KeEnableProfiling(Object, DWORD2(v125), v125, v126);
            else
              v93 = KeDisableProfiling((__int64)Object, v126);
            v12 = v93;
          }
          else
          {
            v12 = -1073741637;
          }
          goto LABEL_48;
        case ThreadIdealProcessorEx:
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          v115 = *(struct _PROCESSOR_NUMBER *)ThreadInformation;
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
            v85 = KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, &v115, &v115);
            if ( v85 >= 0 )
              *(struct _PROCESSOR_NUMBER *)ThreadInformation = v115;
            ObfDereferenceObjectWithTag(v84, 0x79517350u);
            return v85;
          }
          return result;
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
        case ThreadCounterProfiling|ThreadAffinityMask:
        case ThreadCounterProfiling|ThreadIsIoPending:
          return -1073741637;
        case ThreadCpuAccountingInformation|ThreadAffinityMask:
          v111 = 0;
          v47 = 0LL;
          v119 = 0LL;
          P = 0LL;
          v110 = 0;
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
            v108 = v12;
            if ( v12 >= 0 )
            {
              v111 = 1;
              if ( v106 )
              {
                v144 = 0LL;
                v48 = 0x7FFFFFFF0000LL;
                if ( (unsigned __int64)ThreadInformation < 0x7FFFFFFF0000LL )
                  v48 = (__int64)ThreadInformation;
                v144.m128i_i32[0] = *(_DWORD *)v48;
                v49 = *(_QWORD *)(v48 + 8);
                v144.m128i_i64[1] = v49;
                *(__m128i *)Src = v144;
                if ( (unsigned __int16)_mm_cvtsi128_si32(v144) && (v49 & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v12 = v108;
                v47 = v119;
              }
              else
              {
                *(_OWORD *)Src = *(_OWORD *)ThreadInformation;
              }
              v50 = (unsigned __int16)Src[0];
              if ( ((__int64)Src[0] & 1) != 0 || LOWORD(Src[0]) > WORD1(Src[0]) )
              {
                v12 = -1073741811;
                v108 = -1073741811;
              }
              else
              {
                Pool2 = (unsigned __int16 *)ExAllocatePool2(0x40uLL);
                v47 = Pool2;
                v119 = Pool2;
                if ( Pool2 )
                {
                  *((_QWORD *)Pool2 + 1) = Pool2 + 8;
                  *Pool2 = v50;
                  Pool2[1] = v50;
                  memmove(Pool2 + 8, Src[1], v50);
                  v52 = Object;
                  PspLockThreadSecurityExclusive((__int64)Object, (__int64)v113);
                  v110 = 1;
                  P = (PVOID)*((_QWORD *)v52 + 212);
                  *((_QWORD *)v52 + 212) = v47;
                  v47 = 0LL;
                  v119 = 0LL;
                  EtwTraceThreadSetName(v52);
                }
                else
                {
                  v12 = -1073741670;
                  v108 = -1073741670;
                }
              }
            }
          }
          else
          {
            v12 = -1073741820;
            v108 = -1073741820;
          }
          if ( v110 )
            PspUnlockThreadSecurityExclusive((__int64)Object);
          if ( v111 )
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( P )
            ExFreePoolWithTag(P, 0x6D4E6854u);
          if ( !v47 )
            return v12;
          ExFreePoolWithTag(v47, 0x6D4E6854u);
          return v12;
        case ThreadSuspendCount|ThreadAffinityMask:
          if ( (v4 & 7) != 0 || (unsigned int)v4 > 0x100 )
            return -1073741820;
          memmove(v150, ThreadInformation, v4);
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     1024,
                     (__int64)PsThreadType,
                     v106,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            v58 = KeSetSelectedCpuSetsThread((__int64)Object, (unsigned int)v4 >> 3, (__int64)v150);
LABEL_138:
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v58;
          }
          return result;
        case ThreadDynamicCodePolicyInfo:
          if ( BugCheckParameter1 != -2LL )
            return -1073741811;
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          v140 = *(_DWORD *)ThreadInformation;
          if ( v140 == 1 )
          {
            if ( ((__int64)CurrentThread->Process[4].ThreadListHead.Flink & 0x200) != 0 )
            {
              _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x40000u);
              return 0;
            }
            return -1073741790;
          }
          if ( v140 )
            return -1073741811;
          _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFBFFFF);
          return 0;
        case ThreadDynamicCodePolicyInfo|ThreadTimes:
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          v86 = *(_DWORD *)ThreadInformation;
          v139 = *(_DWORD *)ThreadInformation;
          if ( !(_BYTE)PreviousMode )
            goto LABEL_227;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741727;
          LOBYTE(v91) = 81;
          if ( !(unsigned __int8)RtlTestProtectedAccess(BYTE2(v113->Process[3].ActiveGroupsMask.Masks[1]), v91) )
            return -1073741790;
          LOBYTE(PreviousMode) = v106;
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
          v108 = result;
          if ( result >= 0 )
          {
            if ( v86 )
              _InterlockedOr((volatile signed __int32 *)Object + 360, 0x80000u);
            else
              _InterlockedAnd((volatile signed __int32 *)Object + 360, 0xFFF7FFFF);
LABEL_230:
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v108;
          }
          return result;
        case ThreadDynamicCodePolicyInfo|ThreadAffinityMask:
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          v90 = *(_DWORD *)ThreadInformation;
          v138 = *(_DWORD *)ThreadInformation;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v108 = result;
          if ( result < 0 )
            return result;
          if ( v90 )
            _InterlockedOr((volatile signed __int32 *)Object + 360, 0x200000u);
          else
            _InterlockedAnd((volatile signed __int32 *)Object + 360, 0xFFDFFFFF);
          goto LABEL_230;
        case ThreadSubsystemInformation|ThreadPriority:
          if ( BugCheckParameter1 != -2LL )
            return -1073741811;
          if ( (_DWORD)v4 != 8 )
            return -1073741820;
          v128 = *(_QWORD *)ThreadInformation;
          v96 = KeGetCurrentThread();
          if ( !v128 )
          {
            if ( v96[1].WaitBlock[3].WaitListEntry.Blink == (struct _LIST_ENTRY *)-3LL )
              return -1073741811;
            v97 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
            v23 = 1833530192;
            v22 = v97;
            goto LABEL_59;
          }
          Object = v96;
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
          if ( result >= 0 )
          {
            v98 = (struct _LIST_ENTRY *)v121;
            if ( (*((_DWORD *)v121 + 389) & 2) == 0 )
            {
              ObfDereferenceObjectWithTag(v121, 0x6D497350u);
              return -1073741811;
            }
            v99 = IoThreadToProcess((PETHREAD)Object);
            PsGetProcessSilo((__int64)v99);
            IsSiloInSilo = PspIsSiloInSilo(v98);
            v101 = v98;
            if ( IsSiloInSilo )
            {
              EffectiveServerSilo = PsGetEffectiveServerSilo((__int64)v98);
              ProcessServerSilo = PsGetProcessServerSilo((__int64)v99);
              v101 = v98;
              if ( ProcessServerSilo == EffectiveServerSilo )
              {
                PsAttachSiloToCurrentThread(v98);
                return 0;
              }
            }
            ObfDereferenceObjectWithTag(v101, 0x6D497350u);
            return -1073741811;
          }
          return result;
        case ThreadIdealProcessorEx|ThreadIsIoPending:
          if ( (_DWORD)v4 != 12 )
            return -1073741820;
          Token[0] = *(PVOID *)ThreadInformation;
          v59 = *((_DWORD *)ThreadInformation + 2);
          if ( LODWORD(Token[0]) != 1 || (HIDWORD(Token[0]) & 0xFFFFFFFE) != 0 || (~HIDWORD(Token[0]) & v59) != 0 )
            return -1073741811;
          if ( (BYTE4(Token[0]) & 1) != 0 )
          {
            if ( (v59 & 1) == 0 )
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
        case ThreadCpuAccountingInformation|ThreadIsIoPending:
          if ( BugCheckParameter1 != -2LL || (_BYTE)PreviousMode )
            return -1073741790;
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          v137 = *(_DWORD *)ThreadInformation;
          if ( v137 >= 2 )
            return -1073741811;
          v104 = KeGetCurrentThread();
          *((_DWORD *)&v104[1].SwapListEntry + 3) ^= ((unsigned __int16)*((_DWORD *)&v104[1].SwapListEntry + 3) ^ (unsigned __int16)((_WORD)v137 << 11)) & 0x800;
          KeUpdateThreadCpuSets((__int64)v104);
          return 0;
        case ThreadIdealProcessorEx|ThreadIsTerminated:
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          if ( BugCheckParameter1 != -2LL )
            return -1073741790;
          v136 = *(_DWORD *)ThreadInformation;
          v105 = v136;
          if ( v136 > 1 )
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
          *((_DWORD *)Object + 361) ^= ((unsigned __int16)*((_DWORD *)Object + 361) ^ (unsigned __int16)(v105 << 12)) & 0x1000;
          goto LABEL_58;
        case ThreadCounterProfiling|ThreadPagePriority:
          if ( (_DWORD)v4 != 16 )
            return -1073741820;
          v143 = *(_OWORD *)ThreadInformation;
          if ( DWORD2(v143) )
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
            v108 = v12;
            if ( v12 >= 0 )
            {
              v13 = Object;
              if ( Object == KeGetCurrentThread() )
              {
                KeAbUserModeEntryFree((ULONG_PTR)Object, v143);
                v12 = v108;
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
        case ThreadActualGroupAffinity|ThreadIsIoPending:
          if ( (_DWORD)v4 != 24 )
            return -1073741820;
          Token[0] = 0LL;
          v41 = *(__m128i *)ThreadInformation;
          *(_OWORD *)v145 = *(_OWORD *)ThreadInformation;
          v42 = *((_QWORD *)ThreadInformation + 2);
          v146[0] = v42;
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
          v43 = _mm_cvtsi128_si32(v41);
          if ( !v43 )
          {
            v12 = ObpReferenceObjectByHandleWithTag(
                    v145[1],
                    1,
                    (__int64)PspSchedulerSharedDataType,
                    v106,
                    0x79517350u,
                    Token,
                    0LL,
                    0LL);
            if ( v12 < 0 )
              goto LABEL_90;
            v44 = PspSchedulerSharedDataRegionSlotAllocate(Object, Token[0], v146);
            v42 = v146[0];
            v41 = *(__m128i *)v145;
            goto LABEL_88;
          }
          if ( v43 == 1 )
          {
            v44 = PspSchedulerSharedDataRegionSlotFree((__int64)Object);
LABEL_88:
            v12 = v44;
            goto LABEL_89;
          }
          v12 = -1073741637;
LABEL_89:
          *(__m128i *)ThreadInformation = v41;
          *((_QWORD *)ThreadInformation + 2) = v42;
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
  v135 = *(_DWORD *)ThreadInformation;
  v21 = v135;
  if ( (unsigned int)(v135 - 1) > 0x1E )
    return -1073741811;
  if ( v135 >= 16 )
  {
    if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                             SeIncreaseBasePriorityPrivilege,
                             BugCheckParameter1,
                             1024LL,
                             PreviousMode) )
      return -1073741727;
    LOBYTE(PreviousMode) = v106;
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
