/*
 * XREFs of NtQueryInformationThread @ 0x1409C32F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeQueryBasePriorityThread @ 0x1402FC0E0 (KeQueryBasePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1403031B0 (PsGetIoPriorityThread.c)
 *     PsGetPagePriorityThread @ 0x1403059B0 (PsGetPagePriorityThread.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403B2510 (KeSetIdealProcessorThreadByNumber.c)
 *     KeQueryValuesThread @ 0x1403DE8C0 (KeQueryValuesThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E5570 (KeQueryTotalCycleTimeThread.c)
 *     PsQueryThreadStartAddress @ 0x1403F5710 (PsQueryThreadStartAddress.c)
 *     PspUnlockThreadSecurityShared @ 0x14041DA20 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x140429710 (PspLockThreadSecurityShared.c)
 *     PsGetWorkOnBehalfThread @ 0x1404365B0 (PsGetWorkOnBehalfThread.c)
 *     IoThreadToProcess @ 0x140442EB0 (IoThreadToProcess.c)
 *     PsGetEffectiveContainerId @ 0x140442EC0 (PsGetEffectiveContainerId.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x140447A80 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     MmGetDefaultPagePriority @ 0x14047DF60 (MmGetDefaultPagePriority.c)
 *     KeQueryUserAffinityThread @ 0x14048BD38 (KeQueryUserAffinityThread.c)
 *     KeQueryPrimaryGroupAffinityThread @ 0x1404AB900 (KeQueryPrimaryGroupAffinityThread.c)
 *     KeQueryCpuSetsThread @ 0x1404D0084 (KeQueryCpuSetsThread.c)
 *     xKdEnumerateDebuggingDevices @ 0x1404F8540 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PspSchedulerSharedDataRegionSlotRetrieve @ 0x1406EF1F4 (PspSchedulerSharedDataRegionSlotRetrieve.c)
 *     PspQueryThreadIndexInformation @ 0x14076D510 (PspQueryThreadIndexInformation.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     VslGetSecureTebAddress @ 0x1409C3178 (VslGetSecureTebAddress.c)
 *     PspQueryLastCallThread @ 0x1409C3208 (PspQueryLastCallThread.c)
 *     PspWow64GetContextThread @ 0x1409C4730 (PspWow64GetContextThread.c)
 *     PsGetThreadExitStatus @ 0x1409C4C30 (PsGetThreadExitStatus.c)
 *     MiCopyVirtualMemory @ 0x1409C5370 (MiCopyVirtualMemory.c)
 *     PspGetThreadPpmPolicy @ 0x140ABD8D0 (PspGetThreadPpmPolicy.c)
 */

NTSTATUS __cdecl NtQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  struct _LIST_ENTRY *Flink; // rbx
  PETHREAD CurrentThread; // r15
  char PreviousMode; // dl
  int v12; // eax
  __int64 v13; // rdx
  NTSTATUS result; // eax
  PETHREAD v15; // rdi
  __int64 v16; // rdx
  __int128 v17; // xmm6
  __int64 UserAffinityPrimaryGroup; // rax
  _KAFFINITY_EX *UserAffinity; // rcx
  PETHREAD v20; // rcx
  PVOID WorkOnBehalfThread; // rcx
  NTSTATUS ContextThread; // edi
  int BasePriority; // ebx
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // r14
  __int64 v26; // r15
  char v27; // di
  NTSTATUS v28; // r12d
  PETHREAD v29; // r12
  char v30; // al
  __int64 v31; // rcx
  const WCHAR *v32; // rdx
  unsigned int v33; // r12d
  PETHREAD v34; // rbx
  struct _LIST_ENTRY *Blink; // rdi
  PETHREAD v36; // r8
  int PagePriorityThread; // eax
  NTSTATUS v38; // ebx
  PETHREAD v39; // r9
  int IoPriorityThread; // eax
  int v41; // ebx
  int v42; // eax
  int v43; // ebx
  void *v44; // rcx
  _KPROCESS *Process; // r15
  _KPROCESS *v46; // rax
  unsigned __int64 v47; // rcx
  ULONG *v48; // r12
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdx
  struct _EX_RUNDOWN_REF *v51; // r14
  _BYTE *v52; // rdx
  ULONG v53; // eax
  int v54; // eax
  PETHREAD v55; // r14
  __int64 v56; // rax
  PETHREAD v57; // rcx
  int v58; // ebx
  NTSTATUS v59; // r14d
  PETHREAD v60; // rcx
  PETHREAD v61; // rbx
  int v62; // r8d
  NTSTATUS v63; // r15d
  ULONG v64; // ebx
  PETHREAD v65; // rdi
  unsigned __int64 ThreadStartAddress; // rax
  __int64 v67; // rcx
  PETHREAD v68; // rdi
  int v69; // edi
  int ThreadPpmPolicy; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  PETHREAD v74; // r11
  PETHREAD Thread; // [rsp+40h] [rbp-3C8h] BYREF
  char v76; // [rsp+48h] [rbp-3C0h]
  unsigned __int8 v77; // [rsp+49h] [rbp-3BFh]
  char v78; // [rsp+4Ah] [rbp-3BEh]
  int v79; // [rsp+4Ch] [rbp-3BCh]
  _PROCESSOR_NUMBER v80; // [rsp+50h] [rbp-3B8h] BYREF
  __int16 v81; // [rsp+58h] [rbp-3B0h]
  _QWORD v82[2]; // [rsp+60h] [rbp-3A8h] BYREF
  int v83; // [rsp+70h] [rbp-398h]
  __int64 v84; // [rsp+78h] [rbp-390h] BYREF
  int v85; // [rsp+80h] [rbp-388h] BYREF
  char *v86; // [rsp+88h] [rbp-380h]
  unsigned __int64 CycleTimeStamp; // [rsp+90h] [rbp-378h] BYREF
  ULONG v88; // [rsp+98h] [rbp-370h]
  PULONG v89; // [rsp+A0h] [rbp-368h]
  __int128 v90; // [rsp+A8h] [rbp-360h] BYREF
  __int128 v91; // [rsp+B8h] [rbp-350h] BYREF
  volatile void *Address[2]; // [rsp+C8h] [rbp-340h] BYREF
  _OWORD v93[2]; // [rsp+D8h] [rbp-330h] BYREF
  __int128 v94; // [rsp+F8h] [rbp-310h]
  unsigned int v95; // [rsp+108h] [rbp-300h]
  _QWORD v96[6]; // [rsp+110h] [rbp-2F8h] BYREF
  _OWORD v97[2]; // [rsp+140h] [rbp-2C8h] BYREF
  __int128 v98; // [rsp+160h] [rbp-2A8h] BYREF
  int v99; // [rsp+170h] [rbp-298h]
  __int128 v100; // [rsp+178h] [rbp-290h]
  __int128 v101; // [rsp+188h] [rbp-280h]
  struct _KAFFINITY_EX v102; // [rsp+1A0h] [rbp-268h] BYREF
  char Src[256]; // [rsp+2B0h] [rbp-158h] BYREF

  v96[5] = ThreadHandle;
  v89 = ReturnLength;
  DWORD1(v93[0]) = 0;
  Flink = 0LL;
  v96[0] = 0LL;
  v98 = 0LL;
  v99 = 0;
  v90 = 0LL;
  *(_OWORD *)Address = 0LL;
  memset(v82, 0, 12);
  v100 = 0LL;
  v101 = 0LL;
  Thread = 0LL;
  memset_0(&v102.8, 0, sizeof(v102.8));
  CycleTimeStamp = 0LL;
  memset(v97, 0, sizeof(v97));
  CurrentThread = KeGetCurrentThread();
  v86 = (char *)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v77 = PreviousMode;
  if ( PreviousMode )
  {
    if ( ThreadInformationClass == ThreadNameInformation )
    {
      v12 = 8;
    }
    else if ( ThreadInformationClass == ThreadPowerThrottlingState )
    {
      v12 = 4;
    }
    else
    {
      v12 = 1;
      if ( ThreadInformationLength >= 4 )
        v12 = 4;
    }
    v83 = v12;
    if ( ThreadInformationLength )
    {
      if ( ((v12 - 1) & (unsigned int)ThreadInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = 0x7FFFFFFF0000LL;
    }
    else
    {
      v13 = 0x7FFFFFFF0000LL;
    }
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v13 = (__int64)ReturnLength;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
    PreviousMode = v77;
  }
  DWORD1(v93[0]) = 0;
  v93[1] = 0LL;
  v94 = 0uLL;
  if ( ThreadInformationClass == ThreadBasicInformation )
  {
    if ( ThreadInformationLength == 48 )
    {
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 2048,
                 (__int64)PsThreadType,
                 PreviousMode,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v15 = Thread;
      if ( LOBYTE(Thread->Header.SignalState) )
        LODWORD(v93[0]) = PsGetThreadExitStatus(Thread);
      else
        LODWORD(v93[0]) = 259;
      *((_QWORD *)&v93[0] + 1) = v15->Teb;
      if ( (IoThreadToProcess(v15)->SecureState.SecureHandle & 1) != 0 )
        VslGetSecureTebAddress((__int64)v15, (_QWORD *)v93 + 1);
      v17 = *(_OWORD *)&v15[1].CycleTime;
      UserAffinityPrimaryGroup = v15->UserAffinityPrimaryGroup;
      UserAffinity = v15->UserAffinity;
      if ( (unsigned __int16)UserAffinityPrimaryGroup < UserAffinity->Count )
        Flink = (struct _LIST_ENTRY *)UserAffinity->Bitmap[UserAffinityPrimaryGroup];
      *(_QWORD *)&v94 = Flink;
      DWORD2(v94) = v15->Priority;
      HIDWORD(v94) = KeQueryBasePriorityThread((__int64)v15, v16);
      ObfDereferenceObjectWithTag(v15, 0x79517350u);
      *(_OWORD *)ThreadInformation = v93[0];
      *((_OWORD *)ThreadInformation + 1) = v17;
      *((_OWORD *)ThreadInformation + 2) = v94;
      if ( ReturnLength )
        *ReturnLength = 48;
      return 0;
    }
    return -1073741820;
  }
  if ( ThreadInformationClass != ThreadCycleTime )
  {
    if ( ThreadInformationClass != ThreadWorkOnBehalfTicket )
    {
      switch ( ThreadInformationClass )
      {
        case ThreadTimes:
          if ( ThreadInformationLength != 32 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v24 = KeMaximumIncrement * (unsigned __int64)Thread->SchedulerApc.SpareLong0;
          v25 = KeMaximumIncrement * (unsigned __int64)Thread->UserTime;
          v26 = *(_QWORD *)&Thread[1].Header.Lock;
          if ( LOBYTE(Thread->Header.SignalState) )
            Flink = Thread[1].Header.WaitListHead.Flink;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          *(_QWORD *)ThreadInformation = v26;
          *((_QWORD *)ThreadInformation + 1) = Flink;
          *((_QWORD *)ThreadInformation + 2) = v24;
          *((_QWORD *)ThreadInformation + 3) = v25;
          if ( ReturnLength )
            *ReturnLength = 32;
          return 0;
        case ThreadDescriptorTableEntry:
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     64,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v54 = xKdEnumerateDebuggingDevices();
          goto LABEL_182;
        case ThreadQuerySetWin32StartAddress:
          if ( ThreadInformationLength != 8 )
            return -1073741820;
          LODWORD(Flink) = ObpReferenceObjectByHandleWithTag(
                             (ULONG_PTR)ThreadHandle,
                             64,
                             (__int64)PsThreadType,
                             PreviousMode,
                             0x79517350u,
                             &Thread,
                             0LL,
                             0LL);
          if ( (int)Flink >= 0 )
          {
            Blink = Thread[1].ApcState.ApcListHead[0].Blink;
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            *(_QWORD *)ThreadInformation = Blink;
            if ( ReturnLength )
              *ReturnLength = 8;
          }
          return (int)Flink;
        case ThreadPerformanceCount:
          if ( ThreadInformationLength != 8 )
            return -1073741820;
          ContextThread = ObpReferenceObjectByHandleWithTag(
                            (ULONG_PTR)ThreadHandle,
                            64,
                            (__int64)PsThreadType,
                            PreviousMode,
                            0x79517350u,
                            &Thread,
                            0LL,
                            0LL);
          if ( ContextThread >= 0 )
          {
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            *(_QWORD *)ThreadInformation = 0LL;
            if ( ReturnLength )
              *ReturnLength = 8;
          }
          return ContextThread;
        case ThreadAmILastThread:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          LOBYTE(Flink) = LODWORD(CurrentThread->Process[1].CpuPartitionList.Blink) == 1;
          *(_DWORD *)ThreadInformation = (_DWORD)Flink;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ThreadPriorityBoost:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          v42 = ObpReferenceObjectByHandleWithTag(
                  (ULONG_PTR)ThreadHandle,
                  2048,
                  (__int64)PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          ContextThread = v42;
          if ( v42 >= 0 )
          {
            v43 = (*((_DWORD *)&Thread->0 + 1) >> 3) & 1;
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            *(_DWORD *)ThreadInformation = v43;
            if ( ReturnLength )
              *ReturnLength = 4;
          }
          return ContextThread;
        case ThreadIsIoPending:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     64,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          LOBYTE(Flink) = *(_QWORD *)&Thread[1].SystemCallNumber != (_QWORD)Thread + 1344;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          *(_DWORD *)ThreadInformation = (_DWORD)Flink;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ThreadHideFromDebugger:
          if ( ThreadInformationLength != 1 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     64,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          LODWORD(Flink) = result;
          if ( result < 0 )
            return result;
          v20 = Thread;
          *(_BYTE *)ThreadInformation = (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 4) != 0;
          if ( ReturnLength )
            *ReturnLength = 1;
          goto LABEL_43;
        case ThreadBreakOnTermination:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     64,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v58 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 5) & 1;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          *(_DWORD *)ThreadInformation = v58;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ThreadIsTerminated:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v41 = *(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          *(_DWORD *)ThreadInformation = v41;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ThreadLastSystemCall:
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     8,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v54 = PspQueryLastCallThread(
                  (__int64)Thread,
                  (__int64)ThreadInformation,
                  ThreadInformationLength,
                  (int *)ReturnLength);
LABEL_182:
          LODWORD(Flink) = v54;
          goto LABEL_183;
        case ThreadIoPriority:
        case ThreadEffectiveIoPriority:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v38 = result;
          v79 = result;
          if ( result >= 0 )
          {
            v39 = Thread;
            if ( ThreadInformationClass == ThreadIoPriority )
              IoPriorityThread = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
            else
              IoPriorityThread = PsGetIoPriorityThread((__int64)Thread);
            *(_DWORD *)ThreadInformation = IoPriorityThread;
            if ( ReturnLength )
              *ReturnLength = 4;
            ObfDereferenceObjectWithTag(v39, 0x79517350u);
            return v38;
          }
          return result;
        case ThreadPagePriority:
        case ThreadEffectivePagePriority:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          LODWORD(Flink) = result;
          if ( result < 0 )
            return result;
          v36 = Thread;
          if ( ThreadInformationClass == ThreadPagePriority )
            PagePriorityThread = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 12) & 7;
          else
            PagePriorityThread = PsGetPagePriorityThread((__int64)Thread);
          *(_DWORD *)ThreadInformation = PagePriorityThread;
          if ( ReturnLength )
            *ReturnLength = 4;
          goto LABEL_107;
        case ThreadActualBasePriority:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          BasePriority = Thread->BasePriority;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          *(_DWORD *)ThreadInformation = BasePriority;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ThreadTebInformation:
        case ThreadTebInformationAtomic:
          if ( ThreadInformationLength != 16 )
            return -1073741820;
          if ( PreviousMode )
          {
            RtlCopyVolatileMemory(Address, ThreadInformation, 0x10uLL);
            ProbeForWrite(Address[0], HIDWORD(Address[1]), 1u);
            ThreadInformation = Address;
            PreviousMode = v77;
          }
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     24,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v79 = result;
          if ( result < 0 )
            return result;
          if ( (Thread->MiscFlags & 0x400) != 0 )
          {
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            return -1073741816;
          }
          else
          {
            Process = Thread->Process;
            v46 = KeGetCurrentThread()->ApcState.Process;
            CycleTimeStamp = (unsigned __int64)v46;
            if ( ThreadInformationClass == ThreadTebInformationAtomic && Process != v46 )
              goto LABEL_198;
            v47 = 6264LL;
            if ( Process[1].ReadyTime )
            {
              v47 = 12344LL;
              if ( WORD2(Process[3].PerProcessorCycleTimes) == 0x8664 )
                v47 = 14456LL;
            }
            v48 = (ULONG *)((char *)ThreadInformation + 12);
            v86 = (char *)ThreadInformation + 12;
            v49 = *((unsigned int *)ThreadInformation + 3);
            if ( !(_DWORD)v49 || (v50 = *((unsigned int *)ThreadInformation + 2), v50 >= v47) || v49 > v47 - v50 )
            {
LABEL_198:
              ObfDereferenceObjectWithTag(Thread, 0x79517350u);
              return -1073741811;
            }
            v51 = (struct _EX_RUNDOWN_REF *)Thread;
            if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
            {
              v52 = (_BYTE *)(v51[30].Count + *((unsigned int *)ThreadInformation + 2));
              if ( Process == (_KPROCESS *)CycleTimeStamp )
              {
                v53 = *v48;
                if ( ThreadInformationClass == ThreadTebInformationAtomic )
                {
                  if ( v53 == 1 )
                  {
                    **(_BYTE **)ThreadInformation = *v52;
                    v51 = (struct _EX_RUNDOWN_REF *)Thread;
                  }
                  else if ( v53 != 2 || ((unsigned __int8)v52 & 1) != 0 )
                  {
                    if ( v53 != 4 || ((unsigned __int8)v52 & 3) != 0 )
                    {
                      if ( v53 != 8 || ((unsigned __int8)v52 & 7) != 0 )
                      {
                        v79 = -1073741811;
                      }
                      else
                      {
                        **(_QWORD **)ThreadInformation = *(_QWORD *)v52;
                        v51 = (struct _EX_RUNDOWN_REF *)Thread;
                      }
                    }
                    else
                    {
                      **(_DWORD **)ThreadInformation = *(_DWORD *)v52;
                      v51 = (struct _EX_RUNDOWN_REF *)Thread;
                    }
                  }
                  else
                  {
                    **(_WORD **)ThreadInformation = *(_WORD *)v52;
                    v51 = (struct _EX_RUNDOWN_REF *)Thread;
                  }
                }
                else
                {
                  memmove(*(void **)ThreadInformation, v52, *v48);
                }
              }
              else
              {
                v79 = MiCopyVirtualMemory(
                        (_DWORD)Process,
                        (_DWORD)v52,
                        CycleTimeStamp,
                        *(_QWORD *)ThreadInformation,
                        *v48,
                        v77,
                        (__int64)v96,
                        0);
              }
              ExReleaseRundownProtection_0(v51 + 177);
              ObfDereferenceObjectWithTag(v51, 0x79517350u);
              if ( v79 >= 0 )
              {
                if ( ReturnLength )
                  *ReturnLength = *v48;
                return 0;
              }
              return v79;
            }
            else
            {
              ObfDereferenceObjectWithTag(v51, 0x79517350u);
              return -1073741749;
            }
          }
        case ThreadWow64Context:
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     8,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          ContextThread = PspWow64GetContextThread(Thread, ThreadInformation, ThreadInformationLength, v77);
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( ContextThread >= 0 && ReturnLength )
            *ReturnLength = 716;
          return ContextThread;
        case ThreadGroupInformation:
          if ( ThreadInformationLength != 16 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          ContextThread = result;
          if ( result < 0 )
            return result;
          *(_QWORD *)&v102.Count = 2097153LL;
          memset_0(&v102.8, 0, sizeof(v102.8));
          v55 = Thread;
          KeQueryUserAffinityThread((__int64)Thread, &v102);
          v56 = v55->UserAffinityPrimaryGroup;
          WORD4(v90) = v56;
          if ( (unsigned __int16)v56 < v102.Count )
            Flink = (struct _LIST_ENTRY *)v102.Bitmap[v56];
          *(_QWORD *)&v90 = Flink;
          *(_OWORD *)ThreadInformation = v90;
          if ( ReturnLength )
            *ReturnLength = 16;
          v57 = v55;
          goto LABEL_206;
        case ThreadCounterProfiling:
          if ( ThreadInformationLength != 1 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     64,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          ContextThread = result;
          if ( result < 0 )
            return result;
          v60 = Thread;
          *(_BYTE *)ThreadInformation = Thread->WaitBlock[0].SparePtr != 0LL;
          ObfDereferenceObjectWithTag(v60, 0x79517350u);
          if ( ReturnLength )
            *ReturnLength = ThreadInformationLength;
          return ContextThread;
        case ThreadIdealProcessorEx:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v80 = (_PROCESSOR_NUMBER)0x400000;
          KeSetIdealProcessorThreadByNumber(Thread, &v80, &v80);
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          *(_PROCESSOR_NUMBER *)ThreadInformation = v80;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ThreadCpuAccountingInformation:
          if ( !ThreadInformationLength )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     64,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v79 = result;
          if ( result < 0 )
            return result;
          *(_BYTE *)ThreadInformation = Thread->SchedulingGroup != 0LL;
          if ( ReturnLength )
            *ReturnLength = 1;
          LODWORD(Flink) = v79;
          goto LABEL_183;
        case ThreadSuspendCount:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          LODWORD(Flink) = result;
          if ( result < 0 )
            return result;
          v36 = Thread;
          *(_DWORD *)ThreadInformation = Thread->SuspendCount + ((*((_DWORD *)&Thread->0 + 1) >> 14) & 1);
          if ( ReturnLength )
            *ReturnLength = 4;
          goto LABEL_107;
        case ThreadHeterogeneousCpuPolicy:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          ContextThread = ObpReferenceObjectByHandleWithTag(
                            (ULONG_PTR)ThreadHandle,
                            2048,
                            (__int64)PsThreadType,
                            PreviousMode,
                            0x79517350u,
                            &Thread,
                            0LL,
                            0LL);
          if ( ContextThread < 0 )
            return ContextThread;
          v61 = Thread;
          *(_DWORD *)ThreadInformation = MmGetDefaultPagePriority();
          if ( ReturnLength )
            *ReturnLength = 4;
LABEL_309:
          v57 = v61;
          goto LABEL_206;
        case ThreadContainerId:
          if ( ThreadInformationLength != 16 )
            return -1073741820;
          if ( ThreadHandle != (HANDLE)-2LL )
            return -1073741811;
          result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v98);
          if ( result >= 0 )
          {
            *(_OWORD *)ThreadInformation = v98;
            if ( ReturnLength )
              *ReturnLength = 16;
          }
          return result;
        case ThreadNameInformation:
          v27 = 0;
          v78 = 0;
          v76 = 0;
          v28 = ObpReferenceObjectByHandleWithTag(
                  (ULONG_PTR)ThreadHandle,
                  2048,
                  (__int64)PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          v79 = v28;
          if ( v28 < 0 )
          {
            v30 = v76;
          }
          else
          {
            v27 = 1;
            v78 = 1;
            v29 = Thread;
            PspLockThreadSecurityShared((__int64)Thread, (__int64)CurrentThread);
            v30 = 1;
            v76 = 1;
            v31 = *(_QWORD *)&v29[1].WaitBlockFill11[160];
            if ( v31 )
            {
              v32 = *(const WCHAR **)(v31 + 8);
              LOWORD(Flink) = *(_WORD *)v31;
            }
            else
            {
              v32 = &word_140AD8570;
            }
            v81 = (__int16)Flink;
            v96[2] = v32;
            v33 = (unsigned __int16)Flink + 16;
            v95 = v33;
            if ( v33 > ThreadInformationLength )
            {
              v79 = -1073741789;
            }
            else
            {
              memmove((char *)ThreadInformation + 16, v32, (unsigned __int16)Flink);
              *(_WORD *)ThreadInformation = (_WORD)Flink;
              *((_WORD *)ThreadInformation + 1) = (_WORD)Flink;
              *((_QWORD *)ThreadInformation + 1) = (char *)ThreadInformation + 16;
              v27 = v78;
              v30 = v76;
            }
            if ( ReturnLength )
              *ReturnLength = v33;
            v28 = v79;
          }
          v34 = Thread;
          if ( v30 )
            PspUnlockThreadSecurityShared((__int64)Thread, (__int64)CurrentThread);
          if ( v27 )
            ObfDereferenceObjectWithTag(v34, 0x79517350u);
          return v28;
        case ThreadSelectedCpuSets:
          if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0x100 )
            return -1073741820;
          v63 = ObpReferenceObjectByHandleWithTag(
                  (ULONG_PTR)ThreadHandle,
                  2048,
                  (__int64)PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          v79 = v63;
          if ( v63 >= 0 )
          {
            v64 = 8 * KeQueryCpuSetsThread((__int64)Thread, Src, v62);
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            v88 = v64;
            if ( ReturnLength )
              *ReturnLength = v64;
            if ( v64 >= ThreadInformationLength )
              v64 = ThreadInformationLength;
            v88 = v64;
            memmove(ThreadInformation, Src, v64);
          }
          return v63;
        case ThreadSystemThreadInformation:
          if ( ThreadInformationLength != 80 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v59 = result;
          if ( result >= 0 )
          {
            v65 = Thread;
            KeQueryValuesThread((__int64)Thread, (__int64)v97);
            ThreadStartAddress = PsQueryThreadStartAddress((__int64)v65, 1);
            if ( ThreadStartAddress <= 0x7FFFFFFEFFFFLL )
              Flink = (struct _LIST_ENTRY *)ThreadStartAddress;
            *((_DWORD *)ThreadInformation + 17) = BYTE8(v97[0]);
            *((_DWORD *)ThreadInformation + 18) = BYTE9(v97[0]);
            *((_DWORD *)ThreadInformation + 15) = SBYTE11(v97[0]);
            *((_DWORD *)ThreadInformation + 14) = SBYTE10(v97[0]);
            *((_DWORD *)ThreadInformation + 6) = v97[0];
            v67 = KeMaximumIncrement;
            *(_QWORD *)ThreadInformation = KeMaximumIncrement * (unsigned __int64)v65->SchedulerApc.SpareLong0;
            *((_QWORD *)ThreadInformation + 1) = v67 * v65->UserTime;
            *((_QWORD *)ThreadInformation + 2) = *(_QWORD *)&v65[1].Header.Lock;
            *((_DWORD *)ThreadInformation + 16) = v65->WaitBlock[0].SpareLong;
            *(_OWORD *)((char *)ThreadInformation + 40) = *(_OWORD *)&v65[1].CycleTime;
            *((_QWORD *)ThreadInformation + 4) = Flink;
            if ( ReturnLength )
              *ReturnLength = 80;
            ObfDereferenceObjectWithTag(v65, 0x79517350u);
            return v59;
          }
          return result;
        case ThreadActualGroupAffinity:
          if ( ThreadInformationLength != 16 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          LODWORD(Flink) = result;
          if ( result < 0 )
            return result;
          v68 = Thread;
          KeQueryPrimaryGroupAffinityThread((__int64)Thread, (__int64)&v90);
          *(_OWORD *)ThreadInformation = v90;
          if ( ReturnLength )
            *ReturnLength = 16;
          v20 = v68;
          goto LABEL_43;
        case ThreadDynamicCodePolicyInfo:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          LODWORD(Flink) = result;
          if ( result < 0 )
            return result;
          v20 = Thread;
          *(_DWORD *)ThreadInformation = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 18) & 1;
          if ( ReturnLength )
            *ReturnLength = 4;
          goto LABEL_43;
        case ThreadExplicitCaseSensitivity:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v79 = result;
          if ( result < 0 )
            return result;
          *(_DWORD *)ThreadInformation = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 19) & 1;
          if ( ReturnLength )
            *ReturnLength = 4;
          LODWORD(Flink) = v79;
LABEL_183:
          v20 = Thread;
          goto LABEL_43;
        case ThreadSubsystemInformation:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          ContextThread = result;
          if ( result < 0 )
            return result;
          v57 = Thread;
          if ( *(_QWORD *)&Thread[1].WaitBlockFill11[112] )
            LODWORD(Flink) = qword_140F053D0;
          *(_DWORD *)ThreadInformation = (_DWORD)Flink;
          if ( ReturnLength )
            *ReturnLength = 4;
          goto LABEL_206;
        case ThreadPowerThrottlingState:
          if ( ThreadInformationLength < 4 )
          {
            if ( ReturnLength )
              *ReturnLength = 12;
            return -1073741820;
          }
          v82[0] = *(_QWORD *)ThreadInformation;
          v69 = *((_DWORD *)ThreadInformation + 2);
          if ( LODWORD(v82[0]) != 1 )
            return -1073741811;
          if ( ReturnLength )
            *ReturnLength = 12;
          if ( ThreadInformationLength != 12 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     64,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          ThreadPpmPolicy = PspGetThreadPpmPolicy(Thread);
          if ( ThreadPpmPolicy && (v71 = ThreadPpmPolicy - 1) != 0 && (v72 = v71 - 1) != 0 )
          {
            v73 = v72 - 1;
            if ( v73 )
            {
              if ( v73 == 5 )
              {
                HIDWORD(v82[0]) = 1;
                v69 = 1;
                LODWORD(v82[1]) = 1;
              }
LABEL_293:
              *(_QWORD *)ThreadInformation = v82[0];
              *((_DWORD *)ThreadInformation + 2) = v69;
              v79 = 0;
LABEL_107:
              ObfDereferenceObjectWithTag(v36, 0x79517350u);
              return (int)Flink;
            }
            *(_QWORD *)((char *)v82 + 4) = 1LL;
          }
          else
          {
            *(_QWORD *)((char *)v82 + 4) = 0LL;
          }
          v69 = 0;
          goto LABEL_293;
        case ThreadSchedulerSharedDataSlot:
          if ( ThreadInformationLength != 8 )
            return -1073741820;
          ContextThread = ObpReferenceObjectByHandleWithTag(
                            (ULONG_PTR)ThreadHandle,
                            64,
                            (__int64)PsThreadType,
                            PreviousMode,
                            0x79517350u,
                            &Thread,
                            0LL,
                            0LL);
          v74 = Thread;
          if ( ContextThread >= 0 )
          {
            v84 = 0LL;
            ContextThread = PspSchedulerSharedDataRegionSlotRetrieve(Thread, &v84);
            if ( ContextThread >= 0 )
            {
              *(_QWORD *)ThreadInformation = v84;
              if ( ReturnLength )
                *ReturnLength = 8;
            }
          }
          if ( !v74 )
            return ContextThread;
          v57 = v74;
LABEL_206:
          ObfDereferenceObjectWithTag(v57, 0x79517350u);
          return ContextThread;
        case ThreadIndexInformation:
          if ( ThreadInformationLength != 8 )
            return -1073741820;
          ContextThread = ObpReferenceObjectByHandleWithTag(
                            (ULONG_PTR)ThreadHandle,
                            2048,
                            (__int64)PsThreadType,
                            PreviousMode,
                            0x79517350u,
                            &Thread,
                            0LL,
                            0LL);
          if ( ContextThread < 0 )
          {
            v61 = Thread;
          }
          else
          {
            v80 = 0;
            LODWORD(v84) = 0;
            v61 = Thread;
            ContextThread = PspQueryThreadIndexInformation(Thread, &v80, &v84);
            if ( ContextThread >= 0 )
            {
              *(_PROCESSOR_NUMBER *)ThreadInformation = v80;
              *((_DWORD *)ThreadInformation + 1) = v84;
              if ( ReturnLength )
                *ReturnLength = 8;
            }
          }
          if ( v61 )
            goto LABEL_309;
          return ContextThread;
        default:
          return -1073741821;
      }
    }
    v85 = 0;
    if ( ThreadInformationLength == 16 )
    {
      if ( ThreadHandle != (HANDLE)-2LL )
        return -1073741811;
      v91 = 0LL;
      WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v85);
      if ( WorkOnBehalfThread )
      {
        PsEncodeThreadWorkOnBehalfTicket((__int64)WorkOnBehalfThread, &v91);
        if ( v85 )
          ObfDereferenceObject(v44);
      }
      else
      {
        PsEncodeThreadWorkOnBehalfTicket((__int64)CurrentThread, &v91);
        DWORD2(v91) |= 1u;
      }
      *(_OWORD *)ThreadInformation = v91;
      if ( ReturnLength )
        *ReturnLength = 16;
      return 0;
    }
    return -1073741820;
  }
  if ( ThreadInformationLength != 16 )
    return -1073741820;
  if ( ThreadHandle == (HANDLE)-2LL )
  {
    Thread = CurrentThread;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ThreadHandle,
               2048,
               (__int64)PsThreadType,
               PreviousMode,
               0x79517350u,
               &Thread,
               0LL,
               0LL);
    LODWORD(Flink) = result;
    if ( result < 0 )
      return result;
    CurrentThread = Thread;
  }
  *(_QWORD *)ThreadInformation = KeQueryTotalCycleTimeThread(CurrentThread, &CycleTimeStamp);
  *((_QWORD *)ThreadInformation + 1) = CycleTimeStamp;
  if ( ReturnLength )
    *ReturnLength = 16;
  if ( ThreadHandle != (HANDLE)-2LL )
  {
    v20 = CurrentThread;
LABEL_43:
    ObfDereferenceObjectWithTag(v20, 0x79517350u);
  }
  return (int)Flink;
}
