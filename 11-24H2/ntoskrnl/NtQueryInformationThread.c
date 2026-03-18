/*
 * XREFs of NtQueryInformationThread @ 0x1409A7C80
 * Callers:
 *     <none>
 * Callees:
 *     PsGetPagePriorityThread @ 0x140208FD0 (PsGetPagePriorityThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     PsGetIoPriorityThread @ 0x140276920 (PsGetIoPriorityThread.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeQueryBasePriorityThread @ 0x1402C3D10 (KeQueryBasePriorityThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403B4160 (KeSetIdealProcessorThreadByNumber.c)
 *     KeQueryValuesThread @ 0x1403E27B0 (KeQueryValuesThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403EBDD0 (KeQueryTotalCycleTimeThread.c)
 *     PsQueryThreadStartAddress @ 0x1403FD0A0 (PsQueryThreadStartAddress.c)
 *     PspUnlockThreadSecurityShared @ 0x14041AFC0 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x14041F270 (PspLockThreadSecurityShared.c)
 *     PsGetWorkOnBehalfThread @ 0x140432F80 (PsGetWorkOnBehalfThread.c)
 *     IoThreadToProcess @ 0x140441CC0 (IoThreadToProcess.c)
 *     PsGetEffectiveContainerId @ 0x140444430 (PsGetEffectiveContainerId.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1404453F0 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     MmGetDefaultPagePriority @ 0x14047E830 (MmGetDefaultPagePriority.c)
 *     KeQueryUserAffinityThread @ 0x14048AFC8 (KeQueryUserAffinityThread.c)
 *     KeQueryPrimaryGroupAffinityThread @ 0x1404ACDC0 (KeQueryPrimaryGroupAffinityThread.c)
 *     KeQueryCpuSetsThread @ 0x1404D00FC (KeQueryCpuSetsThread.c)
 *     xKdEnumerateDebuggingDevices @ 0x1404FA9F0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PspSchedulerSharedDataRegionSlotRetrieve @ 0x1406FB034 (PspSchedulerSharedDataRegionSlotRetrieve.c)
 *     PspQueryThreadIndexInformation @ 0x14077C83C (PspQueryThreadIndexInformation.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     PspQueryLastCallThread @ 0x1409A7B90 (PspQueryLastCallThread.c)
 *     PspWow64GetContextThread @ 0x1409A90C0 (PspWow64GetContextThread.c)
 *     VslGetSecureTebAddress @ 0x1409A95C4 (VslGetSecureTebAddress.c)
 *     PsGetThreadExitStatus @ 0x1409A9660 (PsGetThreadExitStatus.c)
 *     MiCopyVirtualMemory @ 0x1409A9D80 (MiCopyVirtualMemory.c)
 *     PspGetThreadPpmPolicy @ 0x140AC16C0 (PspGetThreadPpmPolicy.c)
 */

__int64 __fastcall NtQueryInformationThread(
        ULONG_PTR BugCheckParameter1,
        int a2,
        volatile void **a3,
        unsigned int a4,
        int *a5)
{
  struct _LIST_ENTRY *Flink; // rbx
  PETHREAD CurrentThread; // r14
  char PreviousMode; // dl
  int v12; // eax
  __int64 v13; // rdx
  PETHREAD v14; // rcx
  __int64 result; // rax
  PETHREAD v16; // rdi
  __int64 v17; // rdx
  __int128 v18; // xmm6
  __int64 v19; // rax
  _KAFFINITY_EX *UserAffinity; // rcx
  PVOID WorkOnBehalfThread; // rcx
  int BasePriority; // ebx
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // r14
  volatile void *v25; // r15
  int ContextThread; // edi
  PETHREAD v27; // r8
  int PagePriorityThread; // eax
  char v29; // di
  int v30; // r12d
  PETHREAD v31; // rdi
  __int64 v32; // rcx
  const WCHAR *v33; // rdx
  unsigned int v34; // r12d
  PETHREAD v35; // rbx
  struct _LIST_ENTRY *Blink; // rdi
  PETHREAD v37; // r9
  int IoPriorityThread; // eax
  _KPROCESS *Process; // r15
  _KPROCESS *v40; // rax
  unsigned __int64 v41; // rcx
  int *v42; // r12
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  struct _EX_RUNDOWN_REF *v45; // r14
  _BYTE *v46; // rdx
  int v47; // eax
  int v48; // ebx
  int v49; // eax
  int v50; // ebx
  void *v51; // rcx
  PETHREAD v52; // r14
  __int64 UserAffinityPrimaryGroup; // rax
  unsigned int v54; // edi
  PETHREAD v55; // rcx
  int v56; // ebx
  int v57; // r14d
  PETHREAD v58; // rcx
  PETHREAD v59; // rbx
  int v60; // r8d
  unsigned int v61; // ebx
  PETHREAD v62; // rdi
  unsigned __int64 ThreadStartAddress; // rax
  __int64 v64; // rcx
  PETHREAD v65; // rdi
  int v66; // edi
  int ThreadPpmPolicy; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  PETHREAD v71; // r11
  PETHREAD Thread; // [rsp+40h] [rbp-3B8h] BYREF
  unsigned __int8 v73; // [rsp+48h] [rbp-3B0h]
  char v74; // [rsp+49h] [rbp-3AFh]
  int v75; // [rsp+4Ch] [rbp-3ACh]
  char v76; // [rsp+50h] [rbp-3A8h]
  struct _PROCESSOR_NUMBER v77; // [rsp+54h] [rbp-3A4h] BYREF
  __int16 v78; // [rsp+5Ch] [rbp-39Ch]
  _QWORD v79[2]; // [rsp+60h] [rbp-398h] BYREF
  int v80; // [rsp+70h] [rbp-388h]
  int v81; // [rsp+74h] [rbp-384h] BYREF
  volatile void *v82; // [rsp+78h] [rbp-380h] BYREF
  PETHREAD v83; // [rsp+80h] [rbp-378h]
  unsigned __int64 CycleTimeStamp; // [rsp+88h] [rbp-370h] BYREF
  unsigned int v85; // [rsp+90h] [rbp-368h]
  int *v86; // [rsp+98h] [rbp-360h]
  __int128 v87; // [rsp+A0h] [rbp-358h] BYREF
  __int128 v88; // [rsp+B0h] [rbp-348h] BYREF
  volatile void *Address[2]; // [rsp+C0h] [rbp-338h] BYREF
  _OWORD v90[2]; // [rsp+D0h] [rbp-328h] BYREF
  __int128 v91; // [rsp+F0h] [rbp-308h]
  unsigned int v92; // [rsp+100h] [rbp-2F8h]
  _QWORD v93[6]; // [rsp+108h] [rbp-2F0h] BYREF
  _OWORD v94[2]; // [rsp+138h] [rbp-2C0h] BYREF
  __int128 v95; // [rsp+158h] [rbp-2A0h] BYREF
  int v96; // [rsp+168h] [rbp-290h]
  __int128 v97; // [rsp+170h] [rbp-288h]
  __int128 v98; // [rsp+180h] [rbp-278h]
  struct _KAFFINITY_EX v99; // [rsp+190h] [rbp-268h] BYREF
  char Src[256]; // [rsp+2A0h] [rbp-158h] BYREF

  v93[5] = BugCheckParameter1;
  v86 = a5;
  DWORD1(v90[0]) = 0;
  Flink = 0LL;
  v93[0] = 0LL;
  v95 = 0LL;
  v96 = 0;
  v87 = 0LL;
  *(_OWORD *)Address = 0LL;
  memset(v79, 0, 12);
  v97 = 0LL;
  v98 = 0LL;
  Thread = 0LL;
  memset_0(&v99.8, 0, sizeof(v99.8));
  CycleTimeStamp = 0LL;
  memset(v94, 0, sizeof(v94));
  CurrentThread = KeGetCurrentThread();
  v83 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v73 = PreviousMode;
  if ( PreviousMode )
  {
    if ( a2 == 38 )
    {
      v12 = 8;
    }
    else if ( a2 == 49 )
    {
      v12 = 4;
    }
    else
    {
      v12 = 1;
      if ( a4 >= 4 )
        v12 = 4;
    }
    v80 = v12;
    if ( a4 )
    {
      if ( ((v12 - 1) & (unsigned int)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = 0x7FFFFFFF0000LL;
    }
    else
    {
      v13 = 0x7FFFFFFF0000LL;
    }
    if ( a5 )
    {
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a5;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
    PreviousMode = v73;
  }
  DWORD1(v90[0]) = 0;
  v90[1] = 0LL;
  v91 = 0uLL;
  if ( a2 != 23 )
  {
    if ( a2 == 25 )
    {
      if ( a4 != 4 )
        return 3221225476LL;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 2048,
                 (__int64)PsThreadType,
                 PreviousMode,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( (int)result < 0 )
        return result;
      BasePriority = Thread->BasePriority;
      ObfDereferenceObjectWithTag(Thread, 0x79517350u);
      *(_DWORD *)a3 = BasePriority;
      if ( a5 )
        *a5 = 4;
    }
    else
    {
      if ( a2 )
      {
        switch ( a2 )
        {
          case 1:
            if ( a4 != 32 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            if ( (int)result < 0 )
              return result;
            v23 = (unsigned int)KeMaximumIncrement * (unsigned __int64)Thread->SchedulerApc.SpareLong0;
            v24 = (unsigned int)KeMaximumIncrement * (unsigned __int64)Thread->UserTime;
            v25 = *(volatile void **)&Thread[1].Header.Lock;
            if ( LOBYTE(Thread->Header.SignalState) )
              Flink = Thread[1].Header.WaitListHead.Flink;
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            *a3 = v25;
            a3[1] = Flink;
            a3[2] = (volatile void *)v23;
            a3[3] = (volatile void *)v24;
            if ( a5 )
              *a5 = 32;
            return 0LL;
          case 6:
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       64,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            if ( (int)result < 0 )
              return result;
            LODWORD(Flink) = xKdEnumerateDebuggingDevices();
            goto LABEL_192;
          case 9:
            if ( a4 != 8 )
              return 3221225476LL;
            LODWORD(Flink) = ObpReferenceObjectByHandleWithTag(
                               BugCheckParameter1,
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
              *a3 = Blink;
              if ( a5 )
                *a5 = 8;
            }
            return (unsigned int)Flink;
          case 11:
            if ( a4 != 8 )
              return 3221225476LL;
            ContextThread = ObpReferenceObjectByHandleWithTag(
                              BugCheckParameter1,
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
              *a3 = 0LL;
              if ( a5 )
                *a5 = 8;
            }
            return (unsigned int)ContextThread;
          case 12:
            if ( a4 != 4 )
              return 3221225476LL;
            LOBYTE(Flink) = LODWORD(CurrentThread->Process[1].CpuPartitionList.Blink) == 1;
            *(_DWORD *)a3 = (_DWORD)Flink;
            if ( a5 )
              *a5 = 4;
            return 0LL;
          case 14:
            if ( a4 != 4 )
              return 3221225476LL;
            v49 = ObpReferenceObjectByHandleWithTag(
                    BugCheckParameter1,
                    2048,
                    (__int64)PsThreadType,
                    PreviousMode,
                    0x79517350u,
                    &Thread,
                    0LL,
                    0LL);
            ContextThread = v49;
            if ( v49 >= 0 )
            {
              v50 = (*((_DWORD *)&Thread->0 + 1) >> 3) & 1;
              ObfDereferenceObjectWithTag(Thread, 0x79517350u);
              *(_DWORD *)a3 = v50;
              if ( a5 )
                *a5 = 4;
            }
            return (unsigned int)ContextThread;
          case 16:
            if ( a4 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       64,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            if ( (int)result < 0 )
              return result;
            LOBYTE(Flink) = *(_QWORD *)&Thread[1].SystemCallNumber != (_QWORD)Thread + 1344;
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            *(_DWORD *)a3 = (_DWORD)Flink;
            if ( a5 )
              *a5 = 4;
            return 0LL;
          case 17:
            if ( a4 != 1 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       64,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            LODWORD(Flink) = result;
            if ( (int)result < 0 )
              return result;
            v14 = Thread;
            *(_BYTE *)a3 = (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 4) != 0;
            if ( a5 )
              *a5 = 1;
            goto LABEL_26;
          case 18:
            if ( a4 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       64,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            if ( (int)result < 0 )
              return result;
            v56 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 5) & 1;
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            *(_DWORD *)a3 = v56;
            if ( a5 )
              *a5 = 4;
            return 0LL;
          case 20:
            if ( a4 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            if ( (int)result < 0 )
              return result;
            v48 = *(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1;
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            *(_DWORD *)a3 = v48;
            if ( a5 )
              *a5 = 4;
            return 0LL;
          case 21:
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       8,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            if ( (int)result < 0 )
              return result;
            LODWORD(Flink) = PspQueryLastCallThread((__int64)Thread, (__int64)a3, a4, a5);
            v14 = Thread;
            goto LABEL_26;
          case 22:
          case 54:
            if ( a4 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            LODWORD(Flink) = result;
            v75 = result;
            if ( (int)result < 0 )
              return result;
            v37 = Thread;
            if ( a2 == 22 )
              IoPriorityThread = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
            else
              IoPriorityThread = PsGetIoPriorityThread((__int64)Thread);
            *(_DWORD *)a3 = IoPriorityThread;
            if ( a5 )
              *a5 = 4;
            v14 = v37;
            goto LABEL_26;
          case 24:
          case 55:
            if ( a4 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            LODWORD(Flink) = result;
            if ( (int)result < 0 )
              return result;
            v27 = Thread;
            if ( a2 == 24 )
              PagePriorityThread = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 12) & 7;
            else
              PagePriorityThread = PsGetPagePriorityThread((__int64)Thread);
            *(_DWORD *)a3 = PagePriorityThread;
            if ( a5 )
              *a5 = 4;
            goto LABEL_75;
          case 26:
          case 58:
            if ( a4 != 16 )
              return 3221225476LL;
            if ( PreviousMode )
            {
              RtlCopyVolatileMemory(Address, a3, 0x10uLL);
              ProbeForWrite(Address[0], HIDWORD(Address[1]), 1u);
              a3 = Address;
              PreviousMode = v73;
            }
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       24,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            v75 = result;
            if ( (int)result < 0 )
              return result;
            if ( (Thread->MiscFlags & 0x400) != 0 )
            {
              ObfDereferenceObjectWithTag(Thread, 0x79517350u);
              return 3221225480LL;
            }
            else
            {
              Process = Thread->Process;
              v40 = KeGetCurrentThread()->ApcState.Process;
              CycleTimeStamp = (unsigned __int64)v40;
              if ( a2 == 58 && Process != v40 )
                goto LABEL_181;
              v41 = 6264LL;
              if ( Process[1].ReadyTime )
              {
                v41 = 12344LL;
                if ( WORD2(Process[3].PerProcessorCycleTimes) == 0x8664 )
                  v41 = 14456LL;
              }
              v42 = (int *)a3 + 3;
              v83 = (PETHREAD)((char *)a3 + 12);
              v43 = *((unsigned int *)a3 + 3);
              if ( (_DWORD)v43 && (v44 = *((unsigned int *)a3 + 2), v44 < v41) && v43 <= v41 - v44 )
              {
                v45 = (struct _EX_RUNDOWN_REF *)Thread;
                if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
                {
                  v46 = (_BYTE *)(v45[30].Count + *((unsigned int *)a3 + 2));
                  if ( Process == (_KPROCESS *)CycleTimeStamp )
                  {
                    v47 = *v42;
                    if ( a2 == 58 )
                    {
                      if ( v47 == 1 )
                      {
                        *(_BYTE *)*a3 = *v46;
                        v45 = (struct _EX_RUNDOWN_REF *)Thread;
                      }
                      else if ( v47 != 2 || ((unsigned __int8)v46 & 1) != 0 )
                      {
                        if ( v47 != 4 || ((unsigned __int8)v46 & 3) != 0 )
                        {
                          if ( v47 != 8 || ((unsigned __int8)v46 & 7) != 0 )
                          {
                            v75 = -1073741811;
                          }
                          else
                          {
                            *(_QWORD *)*a3 = *(_QWORD *)v46;
                            v45 = (struct _EX_RUNDOWN_REF *)Thread;
                          }
                        }
                        else
                        {
                          *(_DWORD *)*a3 = *(_DWORD *)v46;
                          v45 = (struct _EX_RUNDOWN_REF *)Thread;
                        }
                      }
                      else
                      {
                        *(_WORD *)*a3 = *(_WORD *)v46;
                        v45 = (struct _EX_RUNDOWN_REF *)Thread;
                      }
                    }
                    else
                    {
                      memmove((void *)*a3, v46, (unsigned int)*v42);
                    }
                  }
                  else
                  {
                    v75 = MiCopyVirtualMemory(
                            (_DWORD)Process,
                            (_DWORD)v46,
                            CycleTimeStamp,
                            (unsigned int)*a3,
                            (unsigned int)*v42,
                            v73,
                            (__int64)v93,
                            0);
                  }
                  ExReleaseRundownProtection_0(v45 + 177);
                  ObfDereferenceObjectWithTag(v45, 0x79517350u);
                  if ( v75 >= 0 )
                  {
                    if ( a5 )
                      *a5 = *v42;
                    return 0;
                  }
                  return (unsigned int)v75;
                }
                else
                {
                  ObfDereferenceObjectWithTag(v45, 0x79517350u);
                  return 3221225547LL;
                }
              }
              else
              {
LABEL_181:
                ObfDereferenceObjectWithTag(Thread, 0x79517350u);
                return 3221225485LL;
              }
            }
          case 29:
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       8,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            if ( (int)result < 0 )
              return result;
            ContextThread = PspWow64GetContextThread(Thread, a3, a4, v73);
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            if ( ContextThread >= 0 && a5 )
              *a5 = 716;
            return (unsigned int)ContextThread;
          case 30:
            if ( a4 != 16 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            ContextThread = result;
            if ( (int)result < 0 )
              return result;
            *(_QWORD *)&v99.Count = 2097153LL;
            memset_0(&v99.8, 0, sizeof(v99.8));
            v52 = Thread;
            KeQueryUserAffinityThread((__int64)Thread, &v99);
            UserAffinityPrimaryGroup = v52->UserAffinityPrimaryGroup;
            WORD4(v87) = UserAffinityPrimaryGroup;
            if ( (unsigned __int16)UserAffinityPrimaryGroup < v99.Count )
              Flink = (struct _LIST_ENTRY *)v99.Bitmap[UserAffinityPrimaryGroup];
            *(_QWORD *)&v87 = Flink;
            *(_OWORD *)a3 = v87;
            if ( a5 )
              *a5 = 16;
            ObfDereferenceObjectWithTag(v52, 0x79517350u);
            return (unsigned int)ContextThread;
          case 32:
            if ( a4 != 1 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       64,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            ContextThread = result;
            if ( (int)result < 0 )
              return result;
            v58 = Thread;
            *(_BYTE *)a3 = Thread->WaitBlock[0].SparePtr != 0LL;
            ObfDereferenceObjectWithTag(v58, 0x79517350u);
            if ( a5 )
              *a5 = a4;
            return (unsigned int)ContextThread;
          case 33:
            if ( a4 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            if ( (int)result < 0 )
              return result;
            v77 = (struct _PROCESSOR_NUMBER)0x400000;
            KeSetIdealProcessorThreadByNumber(Thread, &v77, &v77);
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            *(struct _PROCESSOR_NUMBER *)a3 = v77;
            if ( a5 )
              *a5 = 4;
            return 0LL;
          case 34:
            if ( !a4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       64,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            v75 = result;
            if ( (int)result < 0 )
              return result;
            *(_BYTE *)a3 = Thread->SchedulingGroup != 0LL;
            if ( a5 )
              *a5 = 1;
            LODWORD(Flink) = v75;
            goto LABEL_192;
          case 35:
            if ( a4 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            LODWORD(Flink) = result;
            if ( (int)result < 0 )
              return result;
            v27 = Thread;
            *(_DWORD *)a3 = Thread->SuspendCount + ((*((_DWORD *)&Thread->0 + 1) >> 14) & 1);
            if ( a5 )
              *a5 = 4;
            goto LABEL_75;
          case 36:
            if ( a4 != 4 )
              return 3221225476LL;
            ContextThread = ObpReferenceObjectByHandleWithTag(
                              BugCheckParameter1,
                              2048,
                              (__int64)PsThreadType,
                              PreviousMode,
                              0x79517350u,
                              &Thread,
                              0LL,
                              0LL);
            if ( ContextThread < 0 )
              return (unsigned int)ContextThread;
            v59 = Thread;
            *(_DWORD *)a3 = MmGetDefaultPagePriority();
            if ( a5 )
              *a5 = 4;
LABEL_306:
            ObfDereferenceObjectWithTag(v59, 0x79517350u);
            return (unsigned int)ContextThread;
          case 37:
            if ( a4 != 16 )
              return 3221225476LL;
            if ( BugCheckParameter1 != -2LL )
              return 3221225485LL;
            result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v95);
            if ( (int)result >= 0 )
            {
              *(_OWORD *)a3 = v95;
              if ( a5 )
                *a5 = 16;
            }
            return result;
          case 38:
            v29 = 0;
            v74 = 0;
            v76 = 0;
            v30 = ObpReferenceObjectByHandleWithTag(
                    BugCheckParameter1,
                    2048,
                    (__int64)PsThreadType,
                    PreviousMode,
                    0x79517350u,
                    &Thread,
                    0LL,
                    0LL);
            v75 = v30;
            if ( v30 >= 0 )
            {
              v74 = 1;
              v31 = Thread;
              PspLockThreadSecurityShared((__int64)Thread, (__int64)CurrentThread);
              v76 = 1;
              v32 = *(_QWORD *)&v31[1].WaitBlockFill11[160];
              if ( v32 )
              {
                v33 = *(const WCHAR **)(v32 + 8);
                LOWORD(Flink) = *(_WORD *)v32;
              }
              else
              {
                v33 = &word_140AEA890;
              }
              v78 = (__int16)Flink;
              v93[2] = v33;
              v34 = (unsigned __int16)Flink + 16;
              v92 = v34;
              if ( v34 > a4 )
              {
                v75 = -1073741789;
              }
              else
              {
                memmove(a3 + 2, v33, (unsigned __int16)Flink);
                *(_WORD *)a3 = (_WORD)Flink;
                *((_WORD *)a3 + 1) = (_WORD)Flink;
                a3[1] = a3 + 2;
              }
              if ( a5 )
                *a5 = v34;
              v29 = v74;
              v30 = v75;
            }
            v35 = Thread;
            if ( v76 )
              PspUnlockThreadSecurityShared((__int64)Thread);
            if ( v29 )
              ObfDereferenceObjectWithTag(v35, 0x79517350u);
            return (unsigned int)v30;
          case 39:
            if ( (a4 & 7) != 0 || a4 > 0x100 )
              return 3221225476LL;
            v57 = ObpReferenceObjectByHandleWithTag(
                    BugCheckParameter1,
                    2048,
                    (__int64)PsThreadType,
                    PreviousMode,
                    0x79517350u,
                    &Thread,
                    0LL,
                    0LL);
            v75 = v57;
            if ( v57 >= 0 )
            {
              v61 = 8 * KeQueryCpuSetsThread((__int64)Thread, Src, v60);
              ObfDereferenceObjectWithTag(Thread, 0x79517350u);
              v85 = v61;
              if ( a5 )
                *a5 = v61;
              if ( v61 >= a4 )
                v61 = a4;
              v85 = v61;
              memmove(a3, Src, v61);
            }
            return (unsigned int)v57;
          case 40:
            if ( a4 != 80 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            v57 = result;
            if ( (int)result < 0 )
              return result;
            v62 = Thread;
            KeQueryValuesThread((__int64)Thread, (__int64)v94);
            ThreadStartAddress = PsQueryThreadStartAddress((__int64)v62, 1);
            if ( ThreadStartAddress <= 0x7FFFFFFEFFFFLL )
              Flink = (struct _LIST_ENTRY *)ThreadStartAddress;
            *((_DWORD *)a3 + 17) = BYTE8(v94[0]);
            *((_DWORD *)a3 + 18) = BYTE9(v94[0]);
            *((_DWORD *)a3 + 15) = SBYTE11(v94[0]);
            *((_DWORD *)a3 + 14) = SBYTE10(v94[0]);
            *((_DWORD *)a3 + 6) = v94[0];
            v64 = (unsigned int)KeMaximumIncrement;
            *a3 = (volatile void *)((unsigned int)KeMaximumIncrement * (unsigned __int64)v62->SchedulerApc.SpareLong0);
            a3[1] = (volatile void *)(v64 * v62->UserTime);
            a3[2] = *(volatile void **)&v62[1].Header.Lock;
            *((_DWORD *)a3 + 16) = v62->WaitBlock[0].SpareLong;
            *(_OWORD *)(a3 + 5) = *(_OWORD *)&v62[1].CycleTime;
            a3[4] = Flink;
            if ( a5 )
              *a5 = 80;
            ObfDereferenceObjectWithTag(v62, 0x79517350u);
            return (unsigned int)v57;
          case 41:
            if ( a4 != 16 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            LODWORD(Flink) = result;
            if ( (int)result < 0 )
              return result;
            v65 = Thread;
            KeQueryPrimaryGroupAffinityThread((__int64)Thread, (__int64)&v87);
            *(_OWORD *)a3 = v87;
            if ( a5 )
              *a5 = 16;
            v14 = v65;
            goto LABEL_26;
          case 42:
            if ( a4 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            LODWORD(Flink) = result;
            if ( (int)result < 0 )
              return result;
            v14 = Thread;
            *(_DWORD *)a3 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 18) & 1;
            if ( a5 )
              *a5 = 4;
            goto LABEL_26;
          case 43:
            if ( a4 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            v75 = result;
            if ( (int)result < 0 )
              return result;
            *(_DWORD *)a3 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 19) & 1;
            if ( a5 )
              *a5 = 4;
            LODWORD(Flink) = v75;
LABEL_192:
            v14 = Thread;
            goto LABEL_26;
          case 44:
            v81 = 0;
            if ( a4 != 16 )
              return 3221225476LL;
            if ( BugCheckParameter1 != -2LL )
              return 3221225485LL;
            v88 = 0LL;
            WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v81);
            if ( WorkOnBehalfThread )
            {
              PsEncodeThreadWorkOnBehalfTicket((__int64)WorkOnBehalfThread, &v88);
              if ( v81 )
                ObfDereferenceObject(v51);
            }
            else
            {
              PsEncodeThreadWorkOnBehalfTicket((__int64)CurrentThread, &v88);
              DWORD2(v88) |= 1u;
            }
            *(_OWORD *)a3 = v88;
            if ( a5 )
              *a5 = 16;
            return 0LL;
          case 45:
            if ( a4 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            v54 = result;
            if ( (int)result >= 0 )
            {
              v55 = Thread;
              if ( *(_QWORD *)&Thread[1].WaitBlockFill11[112] )
                LODWORD(Flink) = qword_140F05790;
              *(_DWORD *)a3 = (_DWORD)Flink;
              if ( a5 )
                *a5 = 4;
              ObfDereferenceObjectWithTag(v55, 0x79517350u);
              return v54;
            }
            return result;
          case 49:
            if ( a4 < 4 )
            {
              if ( a5 )
                *a5 = 12;
              return 3221225476LL;
            }
            v79[0] = *a3;
            v66 = *((_DWORD *)a3 + 2);
            if ( LODWORD(v79[0]) != 1 )
              return 3221225485LL;
            if ( a5 )
              *a5 = 12;
            if ( a4 != 12 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       64,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            if ( (int)result < 0 )
              return result;
            ThreadPpmPolicy = PspGetThreadPpmPolicy(Thread);
            if ( ThreadPpmPolicy && (v68 = ThreadPpmPolicy - 1) != 0 && (v69 = v68 - 1) != 0 )
            {
              v70 = v69 - 1;
              if ( v70 )
              {
                if ( v70 == 5 )
                {
                  HIDWORD(v79[0]) = 1;
                  v66 = 1;
                  LODWORD(v79[1]) = 1;
                }
LABEL_290:
                *a3 = (volatile void *)v79[0];
                *((_DWORD *)a3 + 2) = v66;
                v75 = 0;
LABEL_75:
                v14 = v27;
                goto LABEL_26;
              }
              *(_QWORD *)((char *)v79 + 4) = 1LL;
            }
            else
            {
              *(_QWORD *)((char *)v79 + 4) = 0LL;
            }
            v66 = 0;
            goto LABEL_290;
          case 57:
            if ( a4 != 8 )
              return 3221225476LL;
            ContextThread = ObpReferenceObjectByHandleWithTag(
                              BugCheckParameter1,
                              64,
                              (__int64)PsThreadType,
                              PreviousMode,
                              0x79517350u,
                              &Thread,
                              0LL,
                              0LL);
            v71 = Thread;
            if ( ContextThread >= 0 )
            {
              v82 = 0LL;
              ContextThread = PspSchedulerSharedDataRegionSlotRetrieve(Thread, &v82);
              if ( ContextThread >= 0 )
              {
                *a3 = v82;
                if ( a5 )
                  *a5 = 8;
              }
            }
            if ( !v71 )
              return (unsigned int)ContextThread;
            ObfDereferenceObjectWithTag(v71, 0x79517350u);
            return (unsigned int)ContextThread;
          case 59:
            if ( a4 != 8 )
              return 3221225476LL;
            ContextThread = ObpReferenceObjectByHandleWithTag(
                              BugCheckParameter1,
                              2048,
                              (__int64)PsThreadType,
                              PreviousMode,
                              0x79517350u,
                              &Thread,
                              0LL,
                              0LL);
            if ( ContextThread < 0 )
            {
              v59 = Thread;
            }
            else
            {
              v77 = 0;
              LODWORD(v82) = 0;
              v59 = Thread;
              ContextThread = PspQueryThreadIndexInformation(Thread, &v77, &v82);
              if ( ContextThread >= 0 )
              {
                *(struct _PROCESSOR_NUMBER *)a3 = v77;
                *((_DWORD *)a3 + 1) = (_DWORD)v82;
                if ( a5 )
                  *a5 = 8;
              }
            }
            if ( v59 )
              goto LABEL_306;
            return (unsigned int)ContextThread;
          default:
            return 3221225475LL;
        }
      }
      if ( a4 != 48 )
        return 3221225476LL;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 2048,
                 (__int64)PsThreadType,
                 PreviousMode,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( (int)result < 0 )
        return result;
      v16 = Thread;
      if ( LOBYTE(Thread->Header.SignalState) )
        LODWORD(v90[0]) = PsGetThreadExitStatus(Thread);
      else
        LODWORD(v90[0]) = 259;
      *((_QWORD *)&v90[0] + 1) = v16->Teb;
      if ( (IoThreadToProcess(v16)->SecureState.SecureHandle & 1) != 0 )
        VslGetSecureTebAddress(v16, (char *)v90 + 8);
      v18 = *(_OWORD *)&v16[1].CycleTime;
      v19 = v16->UserAffinityPrimaryGroup;
      UserAffinity = v16->UserAffinity;
      if ( (unsigned __int16)v19 < UserAffinity->Count )
        Flink = (struct _LIST_ENTRY *)UserAffinity->Bitmap[v19];
      *(_QWORD *)&v91 = Flink;
      DWORD2(v91) = v16->Priority;
      HIDWORD(v91) = KeQueryBasePriorityThread((__int64)v16, v17);
      ObfDereferenceObjectWithTag(v16, 0x79517350u);
      *(_OWORD *)a3 = v90[0];
      *((_OWORD *)a3 + 1) = v18;
      *((_OWORD *)a3 + 2) = v91;
      if ( a5 )
        *a5 = 48;
    }
    return 0LL;
  }
  if ( a4 != 16 )
    return 3221225476LL;
  if ( BugCheckParameter1 == -2LL )
  {
    Thread = CurrentThread;
LABEL_22:
    *a3 = (volatile void *)KeQueryTotalCycleTimeThread(CurrentThread, &CycleTimeStamp);
    a3[1] = (volatile void *)CycleTimeStamp;
    if ( a5 )
      *a5 = 16;
    if ( BugCheckParameter1 == -2LL )
      return (unsigned int)Flink;
    v14 = CurrentThread;
LABEL_26:
    ObfDereferenceObjectWithTag(v14, 0x79517350u);
    return (unsigned int)Flink;
  }
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             2048,
             (__int64)PsThreadType,
             PreviousMode,
             0x79517350u,
             &Thread,
             0LL,
             0LL);
  LODWORD(Flink) = result;
  if ( (int)result >= 0 )
  {
    CurrentThread = Thread;
    goto LABEL_22;
  }
  return result;
}
