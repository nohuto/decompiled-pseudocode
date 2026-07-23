/*
 * XREFs of NtQueryInformationThread @ 0x1409910D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeQueryBasePriorityThread @ 0x14021B3D0 (KeQueryBasePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsGetPagePriorityThread @ 0x1403305B0 (PsGetPagePriorityThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140370880 (KeSetIdealProcessorThreadByNumber.c)
 *     KeQueryValuesThread @ 0x1403CAE20 (KeQueryValuesThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E03C0 (KeQueryTotalCycleTimeThread.c)
 *     PsQueryThreadStartAddress @ 0x1403F6A60 (PsQueryThreadStartAddress.c)
 *     PspUnlockThreadSecurityShared @ 0x14040AFC0 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x140414FB0 (PspLockThreadSecurityShared.c)
 *     PsGetWorkOnBehalfThread @ 0x1404250C0 (PsGetWorkOnBehalfThread.c)
 *     IoThreadToProcess @ 0x140438740 (IoThreadToProcess.c)
 *     PsGetEffectiveContainerId @ 0x140439ED0 (PsGetEffectiveContainerId.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x14043D5A0 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     MmGetDefaultPagePriority @ 0x140479730 (MmGetDefaultPagePriority.c)
 *     KeQueryUserAffinityThread @ 0x140485DF8 (KeQueryUserAffinityThread.c)
 *     KeQueryPrimaryGroupAffinityThread @ 0x1404A7360 (KeQueryPrimaryGroupAffinityThread.c)
 *     KeQueryCpuSetsThread @ 0x1404C9264 (KeQueryCpuSetsThread.c)
 *     xKdEnumerateDebuggingDevices @ 0x1404F82D0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PspSchedulerSharedDataRegionSlotRetrieve @ 0x1406F8C74 (PspSchedulerSharedDataRegionSlotRetrieve.c)
 *     PspQueryThreadIndexInformation @ 0x14077C6EC (PspQueryThreadIndexInformation.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     PspQueryLastCallThread @ 0x140990FE0 (PspQueryLastCallThread.c)
 *     PspWow64GetContextThread @ 0x140992510 (PspWow64GetContextThread.c)
 *     VslGetSecureTebAddress @ 0x1409929D4 (VslGetSecureTebAddress.c)
 *     PsGetThreadExitStatus @ 0x140992A70 (PsGetThreadExitStatus.c)
 *     MiCopyVirtualMemory @ 0x140993190 (MiCopyVirtualMemory.c)
 *     PspGetThreadPpmPolicy @ 0x140ABC9A8 (PspGetThreadPpmPolicy.c)
 */

NTSTATUS __cdecl NtQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  struct _LIST_ENTRY *Flink; // rbx
  PETHREAD CurrentThread; // r14
  char PreviousMode; // dl
  int v12; // eax
  __int64 v13; // rdx
  PETHREAD v14; // rcx
  NTSTATUS result; // eax
  PETHREAD v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 v20; // xmm6
  __int64 v21; // rax
  _KAFFINITY_EX *UserAffinity; // rcx
  PVOID WorkOnBehalfThread; // rcx
  int BasePriority; // ebx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r14
  __int64 v27; // r15
  NTSTATUS ContextThread; // edi
  PETHREAD v29; // r8
  int PagePriorityThread; // eax
  char v31; // di
  NTSTATUS v32; // r12d
  PETHREAD v33; // rdi
  __int64 v34; // rcx
  const WCHAR *v35; // rdx
  unsigned int v36; // r12d
  PETHREAD v37; // rbx
  struct _LIST_ENTRY *Blink; // rdi
  PETHREAD v39; // r9
  int IoPriorityThread; // eax
  _KPROCESS *Process; // r15
  _KPROCESS *v42; // rax
  unsigned __int64 v43; // rcx
  ULONG *v44; // r12
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  struct _EX_RUNDOWN_REF *v47; // r14
  _BYTE *v48; // rdx
  ULONG v49; // eax
  int v50; // ebx
  int v51; // eax
  int v52; // ebx
  void *v53; // rcx
  PETHREAD v54; // r14
  __int64 UserAffinityPrimaryGroup; // rax
  NTSTATUS v56; // edi
  PETHREAD v57; // rcx
  int v58; // ebx
  NTSTATUS v59; // r14d
  PETHREAD v60; // rcx
  PETHREAD v61; // rbx
  int v62; // r8d
  ULONG v63; // ebx
  PETHREAD v64; // rdi
  unsigned __int64 ThreadStartAddress; // rax
  __int64 v66; // rcx
  PETHREAD v67; // rdi
  int v68; // edi
  int ThreadPpmPolicy; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  PETHREAD v73; // r11
  PETHREAD Thread; // [rsp+40h] [rbp-3B8h] BYREF
  unsigned __int8 v75; // [rsp+48h] [rbp-3B0h]
  char v76; // [rsp+49h] [rbp-3AFh]
  int v77; // [rsp+4Ch] [rbp-3ACh]
  char v78; // [rsp+50h] [rbp-3A8h]
  _PROCESSOR_NUMBER v79; // [rsp+54h] [rbp-3A4h] BYREF
  __int16 v80; // [rsp+5Ch] [rbp-39Ch]
  _QWORD v81[2]; // [rsp+60h] [rbp-398h] BYREF
  int v82; // [rsp+70h] [rbp-388h]
  int v83; // [rsp+74h] [rbp-384h] BYREF
  __int64 v84; // [rsp+78h] [rbp-380h] BYREF
  char *v85; // [rsp+80h] [rbp-378h]
  unsigned __int64 CycleTimeStamp; // [rsp+88h] [rbp-370h] BYREF
  ULONG v87; // [rsp+90h] [rbp-368h]
  PULONG v88; // [rsp+98h] [rbp-360h]
  __int128 v89; // [rsp+A0h] [rbp-358h] BYREF
  __int128 v90; // [rsp+B0h] [rbp-348h] BYREF
  volatile void *Address[2]; // [rsp+C0h] [rbp-338h] BYREF
  _OWORD v92[2]; // [rsp+D0h] [rbp-328h] BYREF
  __int128 v93; // [rsp+F0h] [rbp-308h]
  unsigned int v94; // [rsp+100h] [rbp-2F8h]
  _QWORD v95[6]; // [rsp+108h] [rbp-2F0h] BYREF
  _OWORD v96[2]; // [rsp+138h] [rbp-2C0h] BYREF
  __int128 v97; // [rsp+158h] [rbp-2A0h] BYREF
  int v98; // [rsp+168h] [rbp-290h]
  __int128 v99; // [rsp+170h] [rbp-288h]
  __int128 v100; // [rsp+180h] [rbp-278h]
  struct _KAFFINITY_EX v101; // [rsp+190h] [rbp-268h] BYREF
  char Src[256]; // [rsp+2A0h] [rbp-158h] BYREF

  v95[5] = ThreadHandle;
  v88 = ReturnLength;
  DWORD1(v92[0]) = 0;
  Flink = 0LL;
  v95[0] = 0LL;
  v97 = 0LL;
  v98 = 0;
  v89 = 0LL;
  *(_OWORD *)Address = 0LL;
  memset(v81, 0, 12);
  v99 = 0LL;
  v100 = 0LL;
  Thread = 0LL;
  memset_0(&v101.8, 0, sizeof(v101.8));
  CycleTimeStamp = 0LL;
  memset(v96, 0, sizeof(v96));
  CurrentThread = KeGetCurrentThread();
  v85 = (char *)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v75 = PreviousMode;
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
    v82 = v12;
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
    PreviousMode = v75;
  }
  DWORD1(v92[0]) = 0;
  v92[1] = 0LL;
  v93 = 0uLL;
  if ( ThreadInformationClass != ThreadCycleTime )
  {
    if ( ThreadInformationClass == ThreadActualBasePriority )
    {
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
    }
    else
    {
      if ( ThreadInformationClass )
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
            v25 = KeMaximumIncrement * (unsigned __int64)Thread->SchedulerApc.SpareLong0;
            v26 = KeMaximumIncrement * (unsigned __int64)Thread->UserTime;
            v27 = *(_QWORD *)&Thread[1].Header.Lock;
            if ( LOBYTE(Thread->Header.SignalState) )
              Flink = Thread[1].Header.WaitListHead.Flink;
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            *(_QWORD *)ThreadInformation = v27;
            *((_QWORD *)ThreadInformation + 1) = Flink;
            *((_QWORD *)ThreadInformation + 2) = v25;
            *((_QWORD *)ThreadInformation + 3) = v26;
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
            LODWORD(Flink) = xKdEnumerateDebuggingDevices();
            goto LABEL_192;
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
            v51 = ObpReferenceObjectByHandleWithTag(
                    (ULONG_PTR)ThreadHandle,
                    2048,
                    (__int64)PsThreadType,
                    PreviousMode,
                    0x79517350u,
                    &Thread,
                    0LL,
                    0LL);
            ContextThread = v51;
            if ( v51 >= 0 )
            {
              v52 = (*((_DWORD *)&Thread->0 + 1) >> 3) & 1;
              ObfDereferenceObjectWithTag(Thread, 0x79517350u);
              *(_DWORD *)ThreadInformation = v52;
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
            v14 = Thread;
            *(_BYTE *)ThreadInformation = (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 4) != 0;
            if ( ReturnLength )
              *ReturnLength = 1;
            goto LABEL_26;
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
            v50 = *(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1;
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            *(_DWORD *)ThreadInformation = v50;
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
            LODWORD(Flink) = PspQueryLastCallThread(
                               (__int64)Thread,
                               (__int64)ThreadInformation,
                               ThreadInformationLength,
                               (int *)ReturnLength);
            v14 = Thread;
            goto LABEL_26;
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
            LODWORD(Flink) = result;
            v77 = result;
            if ( result < 0 )
              return result;
            v39 = Thread;
            if ( ThreadInformationClass == ThreadIoPriority )
              IoPriorityThread = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
            else
              IoPriorityThread = PsGetIoPriorityThread((__int64)Thread);
            *(_DWORD *)ThreadInformation = IoPriorityThread;
            if ( ReturnLength )
              *ReturnLength = 4;
            v14 = v39;
            goto LABEL_26;
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
            v29 = Thread;
            if ( ThreadInformationClass == ThreadPagePriority )
              PagePriorityThread = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 12) & 7;
            else
              PagePriorityThread = PsGetPagePriorityThread((__int64)Thread);
            *(_DWORD *)ThreadInformation = PagePriorityThread;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_75;
          case ThreadTebInformation:
          case ThreadTebInformationAtomic:
            if ( ThreadInformationLength != 16 )
              return -1073741820;
            if ( PreviousMode )
            {
              RtlCopyVolatileMemory(Address, ThreadInformation, 0x10uLL);
              ProbeForWrite(Address[0], HIDWORD(Address[1]), 1u);
              ThreadInformation = Address;
              PreviousMode = v75;
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
            v77 = result;
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
              v42 = KeGetCurrentThread()->ApcState.Process;
              CycleTimeStamp = (unsigned __int64)v42;
              if ( ThreadInformationClass == ThreadTebInformationAtomic && Process != v42 )
                goto LABEL_181;
              v43 = 6264LL;
              if ( Process[1].ReadyTime )
              {
                v43 = 12344LL;
                if ( WORD2(Process[3].PerProcessorCycleTimes) == 0x8664 )
                  v43 = 14456LL;
              }
              v44 = (ULONG *)((char *)ThreadInformation + 12);
              v85 = (char *)ThreadInformation + 12;
              v45 = *((unsigned int *)ThreadInformation + 3);
              if ( (_DWORD)v45 && (v46 = *((unsigned int *)ThreadInformation + 2), v46 < v43) && v45 <= v43 - v46 )
              {
                v47 = (struct _EX_RUNDOWN_REF *)Thread;
                if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
                {
                  v48 = (_BYTE *)(v47[30].Count + *((unsigned int *)ThreadInformation + 2));
                  if ( Process == (_KPROCESS *)CycleTimeStamp )
                  {
                    v49 = *v44;
                    if ( ThreadInformationClass == ThreadTebInformationAtomic )
                    {
                      if ( v49 == 1 )
                      {
                        **(_BYTE **)ThreadInformation = *v48;
                        v47 = (struct _EX_RUNDOWN_REF *)Thread;
                      }
                      else if ( v49 != 2 || ((unsigned __int8)v48 & 1) != 0 )
                      {
                        if ( v49 != 4 || ((unsigned __int8)v48 & 3) != 0 )
                        {
                          if ( v49 != 8 || ((unsigned __int8)v48 & 7) != 0 )
                          {
                            v77 = -1073741811;
                          }
                          else
                          {
                            **(_QWORD **)ThreadInformation = *(_QWORD *)v48;
                            v47 = (struct _EX_RUNDOWN_REF *)Thread;
                          }
                        }
                        else
                        {
                          **(_DWORD **)ThreadInformation = *(_DWORD *)v48;
                          v47 = (struct _EX_RUNDOWN_REF *)Thread;
                        }
                      }
                      else
                      {
                        **(_WORD **)ThreadInformation = *(_WORD *)v48;
                        v47 = (struct _EX_RUNDOWN_REF *)Thread;
                      }
                    }
                    else
                    {
                      memmove(*(void **)ThreadInformation, v48, *v44);
                    }
                  }
                  else
                  {
                    v77 = MiCopyVirtualMemory(
                            (_DWORD)Process,
                            (_DWORD)v48,
                            CycleTimeStamp,
                            *(_QWORD *)ThreadInformation,
                            *v44,
                            v75,
                            (__int64)v95,
                            0);
                  }
                  ExReleaseRundownProtection_0(v47 + 177);
                  ObfDereferenceObjectWithTag(v47, 0x79517350u);
                  if ( v77 >= 0 )
                  {
                    if ( ReturnLength )
                      *ReturnLength = *v44;
                    return 0;
                  }
                  return v77;
                }
                else
                {
                  ObfDereferenceObjectWithTag(v47, 0x79517350u);
                  return -1073741749;
                }
              }
              else
              {
LABEL_181:
                ObfDereferenceObjectWithTag(Thread, 0x79517350u);
                return -1073741811;
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
            ContextThread = PspWow64GetContextThread(Thread, ThreadInformation, ThreadInformationLength, v75);
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
            *(_QWORD *)&v101.Count = 2097153LL;
            memset_0(&v101.8, 0, sizeof(v101.8));
            v54 = Thread;
            KeQueryUserAffinityThread((__int64)Thread, &v101);
            UserAffinityPrimaryGroup = v54->UserAffinityPrimaryGroup;
            WORD4(v89) = UserAffinityPrimaryGroup;
            if ( (unsigned __int16)UserAffinityPrimaryGroup < v101.Count )
              Flink = (struct _LIST_ENTRY *)v101.Bitmap[UserAffinityPrimaryGroup];
            *(_QWORD *)&v89 = Flink;
            *(_OWORD *)ThreadInformation = v89;
            if ( ReturnLength )
              *ReturnLength = 16;
            ObfDereferenceObjectWithTag(v54, 0x79517350u);
            return ContextThread;
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
            v79 = (_PROCESSOR_NUMBER)0x400000;
            KeSetIdealProcessorThreadByNumber(Thread, &v79, &v79);
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            *(_PROCESSOR_NUMBER *)ThreadInformation = v79;
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
            v77 = result;
            if ( result < 0 )
              return result;
            *(_BYTE *)ThreadInformation = Thread->SchedulingGroup != 0LL;
            if ( ReturnLength )
              *ReturnLength = 1;
            LODWORD(Flink) = v77;
            goto LABEL_192;
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
            v29 = Thread;
            *(_DWORD *)ThreadInformation = Thread->SuspendCount + ((*((_DWORD *)&Thread->0 + 1) >> 14) & 1);
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_75;
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
LABEL_306:
            ObfDereferenceObjectWithTag(v61, 0x79517350u);
            return ContextThread;
          case ThreadContainerId:
            if ( ThreadInformationLength != 16 )
              return -1073741820;
            if ( ThreadHandle != (HANDLE)-2LL )
              return -1073741811;
            result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v97);
            if ( result >= 0 )
            {
              *(_OWORD *)ThreadInformation = v97;
              if ( ReturnLength )
                *ReturnLength = 16;
            }
            return result;
          case ThreadNameInformation:
            v31 = 0;
            v76 = 0;
            v78 = 0;
            v32 = ObpReferenceObjectByHandleWithTag(
                    (ULONG_PTR)ThreadHandle,
                    2048,
                    (__int64)PsThreadType,
                    PreviousMode,
                    0x79517350u,
                    &Thread,
                    0LL,
                    0LL);
            v77 = v32;
            if ( v32 >= 0 )
            {
              v76 = 1;
              v33 = Thread;
              PspLockThreadSecurityShared((__int64)Thread, (__int64)CurrentThread);
              v78 = 1;
              v34 = *(_QWORD *)&v33[1].WaitBlockFill11[160];
              if ( v34 )
              {
                v35 = *(const WCHAR **)(v34 + 8);
                LOWORD(Flink) = *(_WORD *)v34;
              }
              else
              {
                v35 = &word_140AEDAC0;
              }
              v80 = (__int16)Flink;
              v95[2] = v35;
              v36 = (unsigned __int16)Flink + 16;
              v94 = v36;
              if ( v36 > ThreadInformationLength )
              {
                v77 = -1073741789;
              }
              else
              {
                memmove((char *)ThreadInformation + 16, v35, (unsigned __int16)Flink);
                *(_WORD *)ThreadInformation = (_WORD)Flink;
                *((_WORD *)ThreadInformation + 1) = (_WORD)Flink;
                *((_QWORD *)ThreadInformation + 1) = (char *)ThreadInformation + 16;
              }
              if ( ReturnLength )
                *ReturnLength = v36;
              v31 = v76;
              v32 = v77;
            }
            v37 = Thread;
            if ( v78 )
              PspUnlockThreadSecurityShared((__int64)Thread);
            if ( v31 )
              ObfDereferenceObjectWithTag(v37, 0x79517350u);
            return v32;
          case ThreadSelectedCpuSets:
            if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0x100 )
              return -1073741820;
            v59 = ObpReferenceObjectByHandleWithTag(
                    (ULONG_PTR)ThreadHandle,
                    2048,
                    (__int64)PsThreadType,
                    PreviousMode,
                    0x79517350u,
                    &Thread,
                    0LL,
                    0LL);
            v77 = v59;
            if ( v59 >= 0 )
            {
              v63 = 8 * KeQueryCpuSetsThread((__int64)Thread, Src, v62);
              ObfDereferenceObjectWithTag(Thread, 0x79517350u);
              v87 = v63;
              if ( ReturnLength )
                *ReturnLength = v63;
              if ( v63 >= ThreadInformationLength )
                v63 = ThreadInformationLength;
              v87 = v63;
              memmove(ThreadInformation, Src, v63);
            }
            return v59;
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
            if ( result < 0 )
              return result;
            v64 = Thread;
            KeQueryValuesThread((__int64)Thread, (__int64)v96);
            ThreadStartAddress = PsQueryThreadStartAddress((__int64)v64, 1);
            if ( ThreadStartAddress <= 0x7FFFFFFEFFFFLL )
              Flink = (struct _LIST_ENTRY *)ThreadStartAddress;
            *((_DWORD *)ThreadInformation + 17) = BYTE8(v96[0]);
            *((_DWORD *)ThreadInformation + 18) = BYTE9(v96[0]);
            *((_DWORD *)ThreadInformation + 15) = SBYTE11(v96[0]);
            *((_DWORD *)ThreadInformation + 14) = SBYTE10(v96[0]);
            *((_DWORD *)ThreadInformation + 6) = v96[0];
            v66 = KeMaximumIncrement;
            *(_QWORD *)ThreadInformation = KeMaximumIncrement * (unsigned __int64)v64->SchedulerApc.SpareLong0;
            *((_QWORD *)ThreadInformation + 1) = v66 * v64->UserTime;
            *((_QWORD *)ThreadInformation + 2) = *(_QWORD *)&v64[1].Header.Lock;
            *((_DWORD *)ThreadInformation + 16) = v64->WaitBlock[0].SpareLong;
            *(_OWORD *)((char *)ThreadInformation + 40) = *(_OWORD *)&v64[1].CycleTime;
            *((_QWORD *)ThreadInformation + 4) = Flink;
            if ( ReturnLength )
              *ReturnLength = 80;
            ObfDereferenceObjectWithTag(v64, 0x79517350u);
            return v59;
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
            v67 = Thread;
            KeQueryPrimaryGroupAffinityThread((__int64)Thread, (__int64)&v89);
            *(_OWORD *)ThreadInformation = v89;
            if ( ReturnLength )
              *ReturnLength = 16;
            v14 = v67;
            goto LABEL_26;
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
            v14 = Thread;
            *(_DWORD *)ThreadInformation = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 18) & 1;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_26;
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
            v77 = result;
            if ( result < 0 )
              return result;
            *(_DWORD *)ThreadInformation = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 19) & 1;
            if ( ReturnLength )
              *ReturnLength = 4;
            LODWORD(Flink) = v77;
LABEL_192:
            v14 = Thread;
            goto LABEL_26;
          case ThreadWorkOnBehalfTicket:
            v83 = 0;
            if ( ThreadInformationLength != 16 )
              return -1073741820;
            if ( ThreadHandle != (HANDLE)-2LL )
              return -1073741811;
            v90 = 0LL;
            WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v83);
            if ( WorkOnBehalfThread )
            {
              PsEncodeThreadWorkOnBehalfTicket((__int64)WorkOnBehalfThread, &v90);
              if ( v83 )
                ObfDereferenceObject(v53);
            }
            else
            {
              PsEncodeThreadWorkOnBehalfTicket((__int64)CurrentThread, &v90);
              DWORD2(v90) |= 1u;
            }
            *(_OWORD *)ThreadInformation = v90;
            if ( ReturnLength )
              *ReturnLength = 16;
            return 0;
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
            v56 = result;
            if ( result >= 0 )
            {
              v57 = Thread;
              if ( *(_QWORD *)&Thread[1].WaitBlockFill11[112] )
                LODWORD(Flink) = qword_140F05A70;
              *(_DWORD *)ThreadInformation = (_DWORD)Flink;
              if ( ReturnLength )
                *ReturnLength = 4;
              ObfDereferenceObjectWithTag(v57, 0x79517350u);
              return v56;
            }
            return result;
          case ThreadPowerThrottlingState:
            if ( ThreadInformationLength < 4 )
            {
              if ( ReturnLength )
                *ReturnLength = 12;
              return -1073741820;
            }
            v81[0] = *(_QWORD *)ThreadInformation;
            v68 = *((_DWORD *)ThreadInformation + 2);
            if ( LODWORD(v81[0]) != 1 )
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
            if ( ThreadPpmPolicy && (v70 = ThreadPpmPolicy - 1) != 0 && (v71 = v70 - 1) != 0 )
            {
              v72 = v71 - 1;
              if ( v72 )
              {
                if ( v72 == 5 )
                {
                  HIDWORD(v81[0]) = 1;
                  v68 = 1;
                  LODWORD(v81[1]) = 1;
                }
LABEL_290:
                *(_QWORD *)ThreadInformation = v81[0];
                *((_DWORD *)ThreadInformation + 2) = v68;
                v77 = 0;
LABEL_75:
                v14 = v29;
                goto LABEL_26;
              }
              *(_QWORD *)((char *)v81 + 4) = 1LL;
            }
            else
            {
              *(_QWORD *)((char *)v81 + 4) = 0LL;
            }
            v68 = 0;
            goto LABEL_290;
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
            v73 = Thread;
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
            if ( !v73 )
              return ContextThread;
            ObfDereferenceObjectWithTag(v73, 0x79517350u);
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
              v79 = 0;
              LODWORD(v84) = 0;
              v61 = Thread;
              ContextThread = PspQueryThreadIndexInformation(Thread, &v79, &v84);
              if ( ContextThread >= 0 )
              {
                *(_PROCESSOR_NUMBER *)ThreadInformation = v79;
                *((_DWORD *)ThreadInformation + 1) = v84;
                if ( ReturnLength )
                  *ReturnLength = 8;
              }
            }
            if ( v61 )
              goto LABEL_306;
            return ContextThread;
          default:
            return -1073741821;
        }
      }
      if ( ThreadInformationLength != 48 )
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
      v16 = Thread;
      if ( LOBYTE(Thread->Header.SignalState) )
        LODWORD(v92[0]) = PsGetThreadExitStatus(Thread);
      else
        LODWORD(v92[0]) = 259;
      *((_QWORD *)&v92[0] + 1) = v16->Teb;
      if ( (IoThreadToProcess(v16)->SecureState.SecureHandle & 1) != 0 )
        VslGetSecureTebAddress(v16, (char *)v92 + 8);
      v20 = *(_OWORD *)&v16[1].CycleTime;
      v21 = v16->UserAffinityPrimaryGroup;
      UserAffinity = v16->UserAffinity;
      if ( (unsigned __int16)v21 < UserAffinity->Count )
        Flink = (struct _LIST_ENTRY *)UserAffinity->Bitmap[v21];
      *(_QWORD *)&v93 = Flink;
      DWORD2(v93) = v16->Priority;
      HIDWORD(v93) = KeQueryBasePriorityThread((__int64)v16, v17, v18, v19);
      ObfDereferenceObjectWithTag(v16, 0x79517350u);
      *(_OWORD *)ThreadInformation = v92[0];
      *((_OWORD *)ThreadInformation + 1) = v20;
      *((_OWORD *)ThreadInformation + 2) = v93;
      if ( ReturnLength )
        *ReturnLength = 48;
    }
    return 0;
  }
  if ( ThreadInformationLength != 16 )
    return -1073741820;
  if ( ThreadHandle == (HANDLE)-2LL )
  {
    Thread = CurrentThread;
LABEL_22:
    *(_QWORD *)ThreadInformation = KeQueryTotalCycleTimeThread(CurrentThread, &CycleTimeStamp);
    *((_QWORD *)ThreadInformation + 1) = CycleTimeStamp;
    if ( ReturnLength )
      *ReturnLength = 16;
    if ( ThreadHandle == (HANDLE)-2LL )
      return (int)Flink;
    v14 = CurrentThread;
LABEL_26:
    ObfDereferenceObjectWithTag(v14, 0x79517350u);
    return (int)Flink;
  }
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
  if ( result >= 0 )
  {
    CurrentThread = Thread;
    goto LABEL_22;
  }
  return result;
}
