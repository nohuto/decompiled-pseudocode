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

__int64 __fastcall NtQueryInformationThread(
        ULONG_PTR BugCheckParameter1,
        int a2,
        volatile void **a3,
        unsigned int a4,
        int *a5)
{
  struct _LIST_ENTRY *Flink; // rbx
  PETHREAD CurrentThread; // r15
  char PreviousMode; // dl
  int v12; // eax
  __int64 v13; // rdx
  __int64 result; // rax
  PETHREAD v15; // rdi
  __int64 v16; // rdx
  __int128 v17; // xmm6
  __int64 UserAffinityPrimaryGroup; // rax
  _KAFFINITY_EX *UserAffinity; // rcx
  PETHREAD v20; // rcx
  PVOID WorkOnBehalfThread; // rcx
  int ContextThread; // edi
  int BasePriority; // ebx
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // r14
  volatile void *v26; // r15
  char v27; // di
  int v28; // r12d
  PETHREAD v29; // r12
  char v30; // al
  __int64 v31; // rcx
  const WCHAR *v32; // rdx
  unsigned int v33; // r12d
  PETHREAD v34; // rbx
  struct _LIST_ENTRY *Blink; // rdi
  PETHREAD v36; // r8
  int PagePriorityThread; // eax
  unsigned int v38; // ebx
  PETHREAD v39; // r9
  int IoPriorityThread; // eax
  int v41; // ebx
  int v42; // eax
  int v43; // ebx
  void *v44; // rcx
  _KPROCESS *Process; // r15
  _KPROCESS *v46; // rax
  unsigned __int64 v47; // rcx
  int *v48; // r12
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdx
  struct _EX_RUNDOWN_REF *v51; // r14
  _BYTE *v52; // rdx
  int v53; // eax
  int v54; // eax
  PETHREAD v55; // r14
  __int64 v56; // rax
  PETHREAD v57; // rcx
  int v58; // ebx
  unsigned int v59; // r14d
  PETHREAD v60; // rcx
  PETHREAD v61; // rbx
  int v62; // r8d
  int v63; // r15d
  unsigned int v64; // ebx
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
  struct _PROCESSOR_NUMBER v80; // [rsp+50h] [rbp-3B8h] BYREF
  __int16 v81; // [rsp+58h] [rbp-3B0h]
  _QWORD v82[2]; // [rsp+60h] [rbp-3A8h] BYREF
  int v83; // [rsp+70h] [rbp-398h]
  volatile void *v84; // [rsp+78h] [rbp-390h] BYREF
  int v85; // [rsp+80h] [rbp-388h] BYREF
  PETHREAD v86; // [rsp+88h] [rbp-380h]
  unsigned __int64 CycleTimeStamp; // [rsp+90h] [rbp-378h] BYREF
  unsigned int v88; // [rsp+98h] [rbp-370h]
  int *v89; // [rsp+A0h] [rbp-368h]
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

  v96[5] = BugCheckParameter1;
  v89 = a5;
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
  v86 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v77 = PreviousMode;
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
    v83 = v12;
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
    PreviousMode = v77;
  }
  DWORD1(v93[0]) = 0;
  v93[1] = 0LL;
  v94 = 0uLL;
  if ( !a2 )
  {
    if ( a4 == 48 )
    {
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
      *(_OWORD *)a3 = v93[0];
      *((_OWORD *)a3 + 1) = v17;
      *((_OWORD *)a3 + 2) = v94;
      if ( a5 )
        *a5 = 48;
      return 0LL;
    }
    return 3221225476LL;
  }
  if ( a2 != 23 )
  {
    if ( a2 != 44 )
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
          v24 = (unsigned int)KeMaximumIncrement * (unsigned __int64)Thread->SchedulerApc.SpareLong0;
          v25 = (unsigned int)KeMaximumIncrement * (unsigned __int64)Thread->UserTime;
          v26 = *(volatile void **)&Thread[1].Header.Lock;
          if ( LOBYTE(Thread->Header.SignalState) )
            Flink = Thread[1].Header.WaitListHead.Flink;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          *a3 = v26;
          a3[1] = Flink;
          a3[2] = (volatile void *)v24;
          a3[3] = (volatile void *)v25;
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
          v54 = xKdEnumerateDebuggingDevices();
          goto LABEL_182;
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
          v42 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
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
            *(_DWORD *)a3 = v43;
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
          v20 = Thread;
          *(_BYTE *)a3 = (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 4) != 0;
          if ( a5 )
            *a5 = 1;
          goto LABEL_43;
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
          v58 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 5) & 1;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          *(_DWORD *)a3 = v58;
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
          v41 = *(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          *(_DWORD *)a3 = v41;
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
          v54 = PspQueryLastCallThread((__int64)Thread, (__int64)a3, a4, a5);
LABEL_182:
          LODWORD(Flink) = v54;
          goto LABEL_183;
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
          v38 = result;
          v79 = result;
          if ( (int)result >= 0 )
          {
            v39 = Thread;
            if ( a2 == 22 )
              IoPriorityThread = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
            else
              IoPriorityThread = PsGetIoPriorityThread((__int64)Thread);
            *(_DWORD *)a3 = IoPriorityThread;
            if ( a5 )
              *a5 = 4;
            ObfDereferenceObjectWithTag(v39, 0x79517350u);
            return v38;
          }
          return result;
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
          v36 = Thread;
          if ( a2 == 24 )
            PagePriorityThread = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 12) & 7;
          else
            PagePriorityThread = PsGetPagePriorityThread((__int64)Thread);
          *(_DWORD *)a3 = PagePriorityThread;
          if ( a5 )
            *a5 = 4;
          goto LABEL_107;
        case 25:
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
          return 0LL;
        case 26:
        case 58:
          if ( a4 != 16 )
            return 3221225476LL;
          if ( PreviousMode )
          {
            RtlCopyVolatileMemory(Address, a3, 0x10uLL);
            ProbeForWrite(Address[0], HIDWORD(Address[1]), 1u);
            a3 = Address;
            PreviousMode = v77;
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
          v79 = result;
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
            v46 = KeGetCurrentThread()->ApcState.Process;
            CycleTimeStamp = (unsigned __int64)v46;
            if ( a2 == 58 && Process != v46 )
              goto LABEL_198;
            v47 = 6264LL;
            if ( Process[1].ReadyTime )
            {
              v47 = 12344LL;
              if ( WORD2(Process[3].PerProcessorCycleTimes) == 0x8664 )
                v47 = 14456LL;
            }
            v48 = (int *)a3 + 3;
            v86 = (PETHREAD)((char *)a3 + 12);
            v49 = *((unsigned int *)a3 + 3);
            if ( !(_DWORD)v49 || (v50 = *((unsigned int *)a3 + 2), v50 >= v47) || v49 > v47 - v50 )
            {
LABEL_198:
              ObfDereferenceObjectWithTag(Thread, 0x79517350u);
              return 3221225485LL;
            }
            v51 = (struct _EX_RUNDOWN_REF *)Thread;
            if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
            {
              v52 = (_BYTE *)(v51[30].Count + *((unsigned int *)a3 + 2));
              if ( Process == (_KPROCESS *)CycleTimeStamp )
              {
                v53 = *v48;
                if ( a2 == 58 )
                {
                  if ( v53 == 1 )
                  {
                    *(_BYTE *)*a3 = *v52;
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
                        *(_QWORD *)*a3 = *(_QWORD *)v52;
                        v51 = (struct _EX_RUNDOWN_REF *)Thread;
                      }
                    }
                    else
                    {
                      *(_DWORD *)*a3 = *(_DWORD *)v52;
                      v51 = (struct _EX_RUNDOWN_REF *)Thread;
                    }
                  }
                  else
                  {
                    *(_WORD *)*a3 = *(_WORD *)v52;
                    v51 = (struct _EX_RUNDOWN_REF *)Thread;
                  }
                }
                else
                {
                  memmove((void *)*a3, v52, (unsigned int)*v48);
                }
              }
              else
              {
                v79 = MiCopyVirtualMemory(
                        (_DWORD)Process,
                        (_DWORD)v52,
                        CycleTimeStamp,
                        (unsigned int)*a3,
                        (unsigned int)*v48,
                        v77,
                        (__int64)v96,
                        0);
              }
              ExReleaseRundownProtection_0(v51 + 177);
              ObfDereferenceObjectWithTag(v51, 0x79517350u);
              if ( v79 >= 0 )
              {
                if ( a5 )
                  *a5 = *v48;
                return 0;
              }
              return (unsigned int)v79;
            }
            else
            {
              ObfDereferenceObjectWithTag(v51, 0x79517350u);
              return 3221225547LL;
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
          ContextThread = PspWow64GetContextThread(Thread, a3, a4, v77);
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
          *(_QWORD *)&v102.Count = 2097153LL;
          memset_0(&v102.8, 0, sizeof(v102.8));
          v55 = Thread;
          KeQueryUserAffinityThread((__int64)Thread, &v102);
          v56 = v55->UserAffinityPrimaryGroup;
          WORD4(v90) = v56;
          if ( (unsigned __int16)v56 < v102.Count )
            Flink = (struct _LIST_ENTRY *)v102.Bitmap[v56];
          *(_QWORD *)&v90 = Flink;
          *(_OWORD *)a3 = v90;
          if ( a5 )
            *a5 = 16;
          v57 = v55;
          goto LABEL_206;
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
          v60 = Thread;
          *(_BYTE *)a3 = Thread->WaitBlock[0].SparePtr != 0LL;
          ObfDereferenceObjectWithTag(v60, 0x79517350u);
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
          v80 = (struct _PROCESSOR_NUMBER)0x400000;
          KeSetIdealProcessorThreadByNumber(Thread, &v80, &v80);
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          *(struct _PROCESSOR_NUMBER *)a3 = v80;
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
          v79 = result;
          if ( (int)result < 0 )
            return result;
          *(_BYTE *)a3 = Thread->SchedulingGroup != 0LL;
          if ( a5 )
            *a5 = 1;
          LODWORD(Flink) = v79;
          goto LABEL_183;
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
          v36 = Thread;
          *(_DWORD *)a3 = Thread->SuspendCount + ((*((_DWORD *)&Thread->0 + 1) >> 14) & 1);
          if ( a5 )
            *a5 = 4;
          goto LABEL_107;
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
          v61 = Thread;
          *(_DWORD *)a3 = MmGetDefaultPagePriority();
          if ( a5 )
            *a5 = 4;
LABEL_309:
          v57 = v61;
          goto LABEL_206;
        case 37:
          if ( a4 != 16 )
            return 3221225476LL;
          if ( BugCheckParameter1 != -2LL )
            return 3221225485LL;
          result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v98);
          if ( (int)result >= 0 )
          {
            *(_OWORD *)a3 = v98;
            if ( a5 )
              *a5 = 16;
          }
          return result;
        case 38:
          v27 = 0;
          v78 = 0;
          v76 = 0;
          v28 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
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
            if ( v33 > a4 )
            {
              v79 = -1073741789;
            }
            else
            {
              memmove(a3 + 2, v32, (unsigned __int16)Flink);
              *(_WORD *)a3 = (_WORD)Flink;
              *((_WORD *)a3 + 1) = (_WORD)Flink;
              a3[1] = a3 + 2;
              v27 = v78;
              v30 = v76;
            }
            if ( a5 )
              *a5 = v33;
            v28 = v79;
          }
          v34 = Thread;
          if ( v30 )
            PspUnlockThreadSecurityShared((__int64)Thread, (__int64)CurrentThread);
          if ( v27 )
            ObfDereferenceObjectWithTag(v34, 0x79517350u);
          return (unsigned int)v28;
        case 39:
          if ( (a4 & 7) != 0 || a4 > 0x100 )
            return 3221225476LL;
          v63 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
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
            if ( a5 )
              *a5 = v64;
            if ( v64 >= a4 )
              v64 = a4;
            v88 = v64;
            memmove(a3, Src, v64);
          }
          return (unsigned int)v63;
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
          v59 = result;
          if ( (int)result >= 0 )
          {
            v65 = Thread;
            KeQueryValuesThread((__int64)Thread, (__int64)v97);
            ThreadStartAddress = PsQueryThreadStartAddress((__int64)v65, 1);
            if ( ThreadStartAddress <= 0x7FFFFFFEFFFFLL )
              Flink = (struct _LIST_ENTRY *)ThreadStartAddress;
            *((_DWORD *)a3 + 17) = BYTE8(v97[0]);
            *((_DWORD *)a3 + 18) = BYTE9(v97[0]);
            *((_DWORD *)a3 + 15) = SBYTE11(v97[0]);
            *((_DWORD *)a3 + 14) = SBYTE10(v97[0]);
            *((_DWORD *)a3 + 6) = v97[0];
            v67 = (unsigned int)KeMaximumIncrement;
            *a3 = (volatile void *)((unsigned int)KeMaximumIncrement * (unsigned __int64)v65->SchedulerApc.SpareLong0);
            a3[1] = (volatile void *)(v67 * v65->UserTime);
            a3[2] = *(volatile void **)&v65[1].Header.Lock;
            *((_DWORD *)a3 + 16) = v65->WaitBlock[0].SpareLong;
            *(_OWORD *)(a3 + 5) = *(_OWORD *)&v65[1].CycleTime;
            a3[4] = Flink;
            if ( a5 )
              *a5 = 80;
            ObfDereferenceObjectWithTag(v65, 0x79517350u);
            return v59;
          }
          return result;
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
          v68 = Thread;
          KeQueryPrimaryGroupAffinityThread((__int64)Thread, (__int64)&v90);
          *(_OWORD *)a3 = v90;
          if ( a5 )
            *a5 = 16;
          v20 = v68;
          goto LABEL_43;
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
          v20 = Thread;
          *(_DWORD *)a3 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 18) & 1;
          if ( a5 )
            *a5 = 4;
          goto LABEL_43;
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
          v79 = result;
          if ( (int)result < 0 )
            return result;
          *(_DWORD *)a3 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 19) & 1;
          if ( a5 )
            *a5 = 4;
          LODWORD(Flink) = v79;
LABEL_183:
          v20 = Thread;
          goto LABEL_43;
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
          ContextThread = result;
          if ( (int)result < 0 )
            return result;
          v57 = Thread;
          if ( *(_QWORD *)&Thread[1].WaitBlockFill11[112] )
            LODWORD(Flink) = qword_140F053D0;
          *(_DWORD *)a3 = (_DWORD)Flink;
          if ( a5 )
            *a5 = 4;
          goto LABEL_206;
        case 49:
          if ( a4 < 4 )
          {
            if ( a5 )
              *a5 = 12;
            return 3221225476LL;
          }
          v82[0] = *a3;
          v69 = *((_DWORD *)a3 + 2);
          if ( LODWORD(v82[0]) != 1 )
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
              *a3 = (volatile void *)v82[0];
              *((_DWORD *)a3 + 2) = v69;
              v79 = 0;
LABEL_107:
              ObfDereferenceObjectWithTag(v36, 0x79517350u);
              return (unsigned int)Flink;
            }
            *(_QWORD *)((char *)v82 + 4) = 1LL;
          }
          else
          {
            *(_QWORD *)((char *)v82 + 4) = 0LL;
          }
          v69 = 0;
          goto LABEL_293;
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
          v74 = Thread;
          if ( ContextThread >= 0 )
          {
            v84 = 0LL;
            ContextThread = PspSchedulerSharedDataRegionSlotRetrieve(Thread, &v84);
            if ( ContextThread >= 0 )
            {
              *a3 = v84;
              if ( a5 )
                *a5 = 8;
            }
          }
          if ( !v74 )
            return (unsigned int)ContextThread;
          v57 = v74;
LABEL_206:
          ObfDereferenceObjectWithTag(v57, 0x79517350u);
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
              *(struct _PROCESSOR_NUMBER *)a3 = v80;
              *((_DWORD *)a3 + 1) = (_DWORD)v84;
              if ( a5 )
                *a5 = 8;
            }
          }
          if ( v61 )
            goto LABEL_309;
          return (unsigned int)ContextThread;
        default:
          return 3221225475LL;
      }
    }
    v85 = 0;
    if ( a4 == 16 )
    {
      if ( BugCheckParameter1 != -2LL )
        return 3221225485LL;
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
      *(_OWORD *)a3 = v91;
      if ( a5 )
        *a5 = 16;
      return 0LL;
    }
    return 3221225476LL;
  }
  if ( a4 != 16 )
    return 3221225476LL;
  if ( BugCheckParameter1 == -2LL )
  {
    Thread = CurrentThread;
  }
  else
  {
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
    CurrentThread = Thread;
  }
  *a3 = (volatile void *)KeQueryTotalCycleTimeThread(CurrentThread, &CycleTimeStamp);
  a3[1] = (volatile void *)CycleTimeStamp;
  if ( a5 )
    *a5 = 16;
  if ( BugCheckParameter1 != -2LL )
  {
    v20 = CurrentThread;
LABEL_43:
    ObfDereferenceObjectWithTag(v20, 0x79517350u);
  }
  return (unsigned int)Flink;
}
