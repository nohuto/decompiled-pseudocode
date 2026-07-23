/*
 * XREFs of TppWorkerThread @ 0x1800502D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     TppIopExecuteCallback @ 0x18004B970 (TppIopExecuteCallback.c)
 *     TppWaitCompletion @ 0x18004C800 (TppWaitCompletion.c)
 *     TppTimerpExecuteCallback @ 0x18004D320 (TppTimerpExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x18004F5B0 (TppWorkpExecuteCallback.c)
 *     TppWorkerFindTask @ 0x18004FB00 (TppWorkerFindTask.c)
 *     TppCallbackEpilog @ 0x1800512E0 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180051880 (TppCallbackCheckThreadAfterCallback.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180051CB4 (TppAdjustRunningThreadGoalWithLock.c)
 *     TppPrepareDirectParams @ 0x180051D70 (TppPrepareDirectParams.c)
 *     TppAlpcpExecuteCallback @ 0x1800522C0 (TppAlpcpExecuteCallback.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppSimplepExecuteCallback @ 0x180084DC0 (TppSimplepExecuteCallback.c)
 *     TppCallbackPerformDeferredWork @ 0x180086B50 (TppCallbackPerformDeferredWork.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x180086B88 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18008A0B0 (TppPoolpDereferenceGlobalPool.c)
 *     RtlExitUserThread @ 0x1800AADB0 (RtlExitUserThread.c)
 *     TppPoolpFree @ 0x1800D9FB4 (TppPoolpFree.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x1800DF150 (RtlClearThreadWorkOnBehalfTicket.c)
 *     TppCritSetThread @ 0x1800EA0B0 (TppCritSetThread.c)
 *     TppAllocThreadData @ 0x1800EA5A0 (TppAllocThreadData.c)
 *     TppPoolAddWorker @ 0x1800EB458 (TppPoolAddWorker.c)
 *     RtlRegisterThreadWithCsrss @ 0x1800EB8A0 (RtlRegisterThreadWithCsrss.c)
 *     TppPoolRemoveWorker @ 0x1800EDA00 (TppPoolRemoveWorker.c)
 *     TppFreeThreadData @ 0x1800EE288 (TppFreeThreadData.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800EE2D4 (TppPoolUpdateTrimmedWorker.c)
 *     TppFreeDirectParamsCache @ 0x1800EF874 (TppFreeDirectParamsCache.c)
 *     TppCritResetThread @ 0x1800F2C18 (TppCritResetThread.c)
 *     RtlResetStackOverflow @ 0x180132B4C (RtlResetStackOverflow.c)
 *     TppWorkerpInnerExceptionFilter @ 0x18015ACD4 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18015AD6C (TppWorkerpOuterExceptionFilter.c)
 *     NtWorkerFactoryWorkerReady @ 0x180160070 (NtWorkerFactoryWorkerReady.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     ZwAlpcSendWaitReceivePort @ 0x180161200 (ZwAlpcSendWaitReceivePort.c)
 *     NtSetInformationWorkerFactory @ 0x180163660 (NtSetInformationWorkerFactory.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x180163D00 (ZwWaitForWorkViaWorkerFactory.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

void __fastcall __noreturn TppWorkerThread(__int64 a1)
{
  char v2; // bl
  unsigned __int64 v3; // rcx
  _RTL_SRWLOCK *v4; // rbx
  unsigned __int64 **Value; // rcx
  unsigned __int64 Number; // r15
  int Group; // esi
  int v8; // r14d
  int v9; // ecx
  unsigned int i; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  _FILE_IO_COMPLETION_INFORMATION *v13; // rbx
  _FILE_IO_COMPLETION_INFORMATION *KeyContext; // rax
  NTSTATUS v15; // ecx
  int v16; // ecx
  unsigned __int8 v17; // r12
  __int64 v18; // rbx
  __int16 v19; // si
  __int64 v20; // r15
  int v21; // r14d
  int v22; // eax
  void (__fastcall *v23)(_TP_CALLBACK_INSTANCE *, __int64, _QWORD, __int128 *); // rax
  bool v24; // bl
  int v25; // eax
  unsigned __int64 v26; // rax
  char v27; // r8
  unsigned __int64 v28; // rtt
  __int64 (__fastcall *v29)(PTP_CALLBACK_INSTANCE); // rax
  unsigned int v30; // edx
  struct _TEB *v31; // rcx
  unsigned int v32; // edx
  struct _TEB *v33; // rcx
  _QWORD *v34; // rdx
  int *SharedData; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int16 j; // dx
  signed __int64 v40; // rax
  signed __int64 v41; // rtt
  _RTL_SRWLOCK *v42; // rbx
  _RTL_SRWLOCK *v43; // rax
  unsigned __int64 **v44; // rcx
  PVOID *p_KeyContext; // r8
  char v46; // [rsp+42h] [rbp-316h] BYREF
  char v47; // [rsp+43h] [rbp-315h]
  char v48; // [rsp+44h] [rbp-314h]
  char v49; // [rsp+45h] [rbp-313h]
  char v50; // [rsp+46h] [rbp-312h]
  char v51; // [rsp+47h] [rbp-311h]
  bool v52; // [rsp+48h] [rbp-310h]
  int v53; // [rsp+4Ch] [rbp-30Ch]
  NTSTATUS v54; // [rsp+50h] [rbp-308h]
  ULONG Count; // [rsp+54h] [rbp-304h]
  ULONG PacketsReturned; // [rsp+58h] [rbp-300h] BYREF
  int v57; // [rsp+5Ch] [rbp-2FCh] BYREF
  __int64 v58; // [rsp+60h] [rbp-2F8h]
  int *v59; // [rsp+68h] [rbp-2F0h]
  _RTL_SRWLOCK *v60; // [rsp+70h] [rbp-2E8h]
  unsigned int v61; // [rsp+78h] [rbp-2E0h]
  int WorkerFactoryInformation; // [rsp+7Ch] [rbp-2DCh] BYREF
  unsigned __int64 v63; // [rsp+80h] [rbp-2D8h]
  PFILE_IO_COMPLETION_INFORMATION MiniPackets; // [rsp+88h] [rbp-2D0h]
  _DWORD *v65; // [rsp+90h] [rbp-2C8h]
  PVOID BaseAddress; // [rsp+98h] [rbp-2C0h] BYREF
  ULONG Flags; // [rsp+A0h] [rbp-2B8h]
  void ***v68; // [rsp+A8h] [rbp-2B0h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-2A8h] BYREF
  ULONG v70; // [rsp+B8h] [rbp-2A0h]
  int v73; // [rsp+D0h] [rbp-288h]
  __int64 v74; // [rsp+E0h] [rbp-278h]
  __int64 v75; // [rsp+E8h] [rbp-270h]
  struct _TEB *v76; // [rsp+F0h] [rbp-268h]
  struct _TEB *v77; // [rsp+F8h] [rbp-260h]
  struct _TEB *v78; // [rsp+110h] [rbp-248h]
  struct _TEB *v79; // [rsp+118h] [rbp-240h]
  struct _TEB *v80; // [rsp+120h] [rbp-238h]
  struct _TEB *v81; // [rsp+130h] [rbp-228h]
  struct _TEB *v82; // [rsp+138h] [rbp-220h]
  struct _TEB *v83; // [rsp+140h] [rbp-218h]
  _RTL_SRWLOCK *v84; // [rsp+160h] [rbp-1F8h] BYREF
  unsigned __int64 **v85; // [rsp+168h] [rbp-1F0h]
  void ***v86; // [rsp+180h] [rbp-1D8h]
  __int64 v87; // [rsp+190h] [rbp-1C8h]
  _TP_CALLBACK_INSTANCE Work; // [rsp+198h] [rbp-1C0h] BYREF
  __int128 v89; // [rsp+298h] [rbp-C0h] BYREF
  __int128 v90; // [rsp+2A8h] [rbp-B0h] BYREF
  _FILE_IO_COMPLETION_INFORMATION *v91; // [rsp+2B8h] [rbp-A0h]
  unsigned int v92; // [rsp+2C0h] [rbp-98h]
  char v93; // [rsp+2C8h] [rbp-90h]
  unsigned __int16 v94; // [rsp+2CAh] [rbp-8Eh]
  _BYTE Fields[6]; // [rsp+2D0h] [rbp-88h] BYREF
  __int16 v96; // [rsp+2D6h] [rbp-82h]
  __int64 v97; // [rsp+2F0h] [rbp-68h]
  int v98; // [rsp+2F8h] [rbp-60h]
  int v99; // [rsp+2FCh] [rbp-5Ch]
  __int16 v100; // [rsp+300h] [rbp-58h]
  __int16 v101; // [rsp+302h] [rbp-56h]
  int v102; // [rsp+304h] [rbp-54h]
  int v103; // [rsp+308h] [rbp-50h]
  __int128 ThreadInformation; // [rsp+310h] [rbp-48h] BYREF

  v65 = (_DWORD *)a1;
  v69 = 0LL;
  PacketsReturned = 0;
  v58 = a1;
  v74 = a1;
  v47 = 0;
  v48 = 0;
  v51 = 0;
  v49 = 0;
  v46 = 0;
  v50 = 0;
  v68 = 0LL;
  memset_thunk_772440563353939046(&v84, 0, 0x170uLL);
  BaseAddress = 0LL;
  WorkerFactoryInformation = 0;
  v53 = 0;
  RtlRegisterThreadWithCsrss();
  v60 = (_RTL_SRWLOCK *)NtCurrentPeb();
  TppCritSetThread(&v69);
  TppAllocThreadData(&BaseAddress);
  if ( BaseAddress )
    *(_QWORD *)BaseAddress = &v84;
  memset_thunk_772440563353939046(&v84, 0, 0x170uLL);
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
  if ( *(_BYTE *)(a1 + 377) )
  {
    v54 = -1073741558;
  }
  else
  {
    v54 = NtWorkerFactoryWorkerReady(*(HANDLE *)(a1 + 56));
    if ( v54 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v2 = v51;
      goto LABEL_8;
    }
  }
  v2 = 1;
  v51 = 1;
LABEL_8:
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
  if ( v2 )
    goto LABEL_144;
  TppPoolAddWorker(a1, &v84);
  v49 = 1;
  v4 = v60;
  RtlAcquireSRWLockExclusive(v60 + 113);
  Value = (unsigned __int64 **)v60[115].Value;
  if ( *Value != (unsigned __int64 *)&v60[114] )
    __fastfail(3u);
  v84 = v60 + 114;
  v85 = Value;
  *Value = (unsigned __int64 *)&v84;
  v4[115].Value = (unsigned __int64)&v84;
  v48 = 1;
  RtlReleaseSRWLockExclusive(v4 + 113);
  memset_thunk_772440563353939046(&Work, 0, 0x100uLL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
  v47 = 1;
  v61 = 0;
  v76 = NtCurrentTeb();
  Number = v76->CurrentIdealProcessor.Number;
  v77 = v76;
  Group = v76->CurrentIdealProcessor.Group;
  v8 = TppNumberNodes;
  v59 = (int *)(a1 + 440);
  v9 = *(_DWORD *)(a1 + 440);
  if ( !v9 )
    v9 = MEMORY[0x7FFE03C0];
  v65 = (_DWORD *)(a1 + 424);
  if ( *(_DWORD *)(a1 + 424) != v9 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
    TppAdjustRunningThreadGoalWithLock(a1);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  }
  for ( i = 0; ; ++i )
  {
    v61 = i;
    if ( i >= TppNumberNodes )
      goto LABEL_20;
    v11 = *(_QWORD *)(a1 + 48) + 16LL * (Group + TppMaximumGroups * i);
    if ( *(_WORD *)(v11 + 8) == (_WORD)Group )
    {
      v12 = *(_QWORD *)v11;
      if ( _bittest64(&v12, Number) )
        break;
    }
  }
  v8 = i;
LABEL_20:
  v92 = v8;
  v94 = Group;
  while ( 1 )
  {
LABEL_21:
    v53 = 0;
    v89 = 0LL;
    v90 = 0LL;
    v13 = v91;
    Count = 16;
    if ( v91 )
    {
      if ( LODWORD(v91->ApcContext) != 1 )
        goto LABEL_141;
      memset_thunk_772440563353939046(v91->KeyContext, 0, 56LL * HIDWORD(v91->ApcContext));
      Count = HIDWORD(v13->ApcContext);
      KeyContext = (_FILE_IO_COMPLETION_INFORMATION *)v13->KeyContext;
    }
    else
    {
      v70 = TppHeapTag + 3145728;
      KeyContext = (_FILE_IO_COMPLETION_INFORMATION *)RtlAllocateHeap(
                                                        NtCurrentPeb()->ProcessHeap,
                                                        (TppHeapTag + 3145728) | 8,
                                                        0x390uLL);
      if ( !KeyContext )
      {
LABEL_141:
        Count = 1;
        KeyContext = (_FILE_IO_COMPLETION_INFORMATION *)&v89;
        goto LABEL_24;
      }
      KeyContext[28].KeyContext = KeyContext;
      LODWORD(KeyContext[28].ApcContext) = 1;
      HIDWORD(KeyContext[28].ApcContext) = 16;
      v91 = KeyContext + 28;
      Count = 16;
    }
LABEL_24:
    MiniPackets = KeyContext;
    PacketsReturned = 0;
    v15 = ZwWaitForWorkViaWorkerFactory(*(HANDLE *)(a1 + 56), KeyContext, Count, &PacketsReturned, &Work.DeferredWork);
    v54 = v15;
    if ( v15 )
      PacketsReturned = 0;
    if ( (Work.DeferredWork.Flags & 1) != 0 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Work.DeferredWork.AlpcSendMessage);
      Work.DeferredWork.Flags &= ~1u;
      v15 = v54;
    }
    if ( v15 )
    {
      v3 = (unsigned int)(v15 - 128);
      if ( !(_DWORD)v3 )
        goto LABEL_144;
      v3 = (unsigned int)(v3 - 64);
      if ( (_DWORD)v3 )
      {
        if ( (_DWORD)v3 == 66 )
        {
          v50 = 1;
          goto LABEL_144;
        }
      }
      else
      {
        TppCallbackCheckThreadAfterCallback(0LL);
      }
    }
    else
    {
      if ( !a1 || (v16 = *v59) == 0 )
        v16 = MEMORY[0x7FFE03C0];
      if ( *v65 != v16 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
        TppAdjustRunningThreadGoalWithLock(a1);
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
      }
      if ( (unsigned __int8)TppPrepareDirectParams(
                              (unsigned int)&v84,
                              (_DWORD)MiniPackets,
                              PacketsReturned,
                              Count,
                              a1,
                              (__int64)&v46) )
        goto LABEL_144;
      if ( !v46 )
      {
        if ( (_QWORD)v89 )
        {
          v75 = v89;
          Work.Callback = *(void **)(v89 + 56);
          Work.Context = (void *)v89;
          v17 = *(_BYTE *)(v89 + 68);
          v18 = *(unsigned int *)(v89 + 64);
          ThreadInformation = 0LL;
          v19 = -1;
          v57 = 0;
          v20 = v92;
          v21 = v94;
          v22 = *(_DWORD *)(a1 + 428);
          if ( (_DWORD)v18 == v92 )
          {
            if ( v22 == -1 && !v93 )
            {
              v93 = 1;
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v18));
            }
          }
          else
          {
            if ( v22 == -1 )
            {
              if ( v93 )
              {
                v34 = (_QWORD *)(a1 + 40);
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v92));
              }
              else
              {
                v93 = 1;
                v34 = (_QWORD *)(v74 + 40);
              }
              _InterlockedIncrement((volatile signed __int32 *)(*v34 + 4 * v18));
            }
            if ( ((1LL << v17) & *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(v21 + TppMaximumGroups * v18))) != 0 )
            {
              v19 = v21;
            }
            else
            {
              for ( j = 0; ; ++j )
              {
                while ( 1 )
                {
                  if ( j >= (unsigned int)TppMaximumGroups )
                    goto LABEL_109;
                  if ( j != (_WORD)v21 )
                    break;
                  ++j;
                }
                if ( ((1LL << v17) & *(_QWORD *)(*(_QWORD *)(a1 + 48)
                                               + 16LL * (TppMaximumGroups * (_DWORD)v18 + (unsigned int)j))) != 0 )
                  break;
              }
              v19 = j;
            }
LABEL_109:
            v92 = v18;
            v94 = v19;
            SharedData = (int *)NtCurrentPeb()->SharedData;
            if ( SharedData && (v73 = *SharedData) != 0 )
              v36 = (__int64)NtCurrentPeb()->SharedData + 556;
            else
              v36 = 2147353478LL;
            if ( *(_BYTE *)v36 )
            {
              memset_thunk_772440563353939046(Fields, 0, 0x40uLL);
              v96 = 7209;
              v97 = a1;
              v98 = v20;
              v99 = v18;
              v100 = v21;
              v101 = v19;
              v37 = *(_QWORD *)(a1 + 40);
              v102 = *(_DWORD *)(v37 + 4 * v20);
              v103 = *(_DWORD *)(v37 + 4 * v18);
              if ( RtlGetCurrentServiceSessionId() )
                v38 = (__int64)NtCurrentPeb()->SharedData + 556;
              else
                v38 = 2147353478LL;
              NtTraceEvent((HANDLE)*(unsigned __int8 *)v38, 0x402u, 0x1Cu, Fields);
            }
            ThreadInformation = 0LL;
            NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, &ThreadInformation, 0x10u);
            LOWORD(v57) = v19;
            HIWORD(v57) = v17;
            NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessorEx, &v57, 4u);
          }
          v78 = NtCurrentTeb();
          Work.PreviousActivityId = v78->ActivityId;
          if ( Work.Pool && (*((_BYTE *)Work.Pool + 436) & 1) == 0 )
          {
            v30 = Work.SkipPostThreadFlags | 8;
            Work.SkipPostThreadFlags |= 8u;
            if ( NtCurrentTeb()->IsImpersonating )
              Work.SkipPostThreadFlags = v30 | 4;
            v31 = NtCurrentTeb();
            if ( (((unsigned __int64)v31->CurrentTransactionHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0
              || v31->TxnScopeEnterCallback
              || v31->TxnScopeExitCallback
              || v31->TxnScopeContext
              || v31->TxFsContext != 65534 )
            {
              Work.SkipPostThreadFlags |= 0x10u;
            }
            if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              Work.SkipPostThreadFlags |= 0x20u;
            v79 = NtCurrentTeb();
            if ( v79->PreferredLanguages )
              Work.SkipPostThreadFlags |= 0x40u;
            v80 = NtCurrentTeb();
            if ( v80->SavedPriorityState )
              Work.SkipPostThreadFlags |= 0x80u;
          }
          v23 = *(void (__fastcall **)(_TP_CALLBACK_INSTANCE *, __int64, _QWORD, __int128 *))(v75 + 56);
          if ( (char *)v23 == (char *)TppAlpcpExecuteCallback )
          {
            TppAlpcpExecuteCallback(&Work, v75, *((_QWORD *)&v89 + 1), &v90);
          }
          else if ( (char *)v23 == (char *)TppIopExecuteCallback )
          {
            TppIopExecuteCallback((PTP_WORK)&Work, v75, *((__int64 *)&v89 + 1), (__int64)&v90);
          }
          else if ( (char *)v23 == (char *)TppWaitCompletion )
          {
            TppWaitCompletion(&Work, v75, *((__int64 *)&v89 + 1));
          }
          else
          {
            v23(&Work, v75, *((_QWORD *)&v89 + 1), &v90);
          }
          goto LABEL_47;
        }
        while ( 1 )
        {
          if ( !(unsigned int)TppWorkerFindTask(a1, (__int64)&v84, &v68) )
            goto LABEL_144;
          if ( (Work.DeferredWork.Flags & 1) != 0 )
          {
            ZwAlpcSendWaitReceivePort(
              Work.DeferredWork.AlpcSendMessagePort,
              Work.DeferredWork.AlpcSendMessageFlags,
              Work.DeferredWork.AlpcSendMessage,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL);
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Work.DeferredWork.AlpcSendMessage);
            Work.DeferredWork.Flags &= ~1u;
          }
          Work.WorkOnBehalf = 0LL;
          RtlClearThreadWorkOnBehalfTicket(v3);
          v86 = v68;
          Work.Callback = **v68;
          Work.Context = v68;
          Work.Pool = (_TP_POOL *)v87;
          v81 = NtCurrentTeb();
          Work.PreviousActivityId = v81->ActivityId;
          if ( v87 && (*(_BYTE *)(v87 + 436) & 1) == 0 )
          {
            v32 = Work.SkipPostThreadFlags | 8;
            Work.SkipPostThreadFlags |= 8u;
            if ( NtCurrentTeb()->IsImpersonating )
              Work.SkipPostThreadFlags = v32 | 4;
            v33 = NtCurrentTeb();
            if ( (((unsigned __int64)v33->CurrentTransactionHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0
              || v33->TxnScopeEnterCallback
              || v33->TxnScopeExitCallback
              || v33->TxnScopeContext
              || v33->TxFsContext != 65534 )
            {
              Work.SkipPostThreadFlags |= 0x10u;
            }
            if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              Work.SkipPostThreadFlags |= 0x20u;
            v82 = NtCurrentTeb();
            if ( v82->PreferredLanguages )
              Work.SkipPostThreadFlags |= 0x40u;
            v83 = NtCurrentTeb();
            if ( v83->SavedPriorityState )
              Work.SkipPostThreadFlags |= 0x80u;
          }
          v29 = (__int64 (__fastcall *)(PTP_CALLBACK_INSTANCE))**v68;
          if ( (char *)v29 == (char *)TppWorkpExecuteCallback )
          {
            TppWorkpExecuteCallback(&Work, (__int64)v68);
          }
          else if ( (char *)v29 == (char *)TppTimerpExecuteCallback )
          {
            TppTimerpExecuteCallback(&Work, (__int64)v68);
          }
          else if ( v29 == TppSimplepExecuteCallback )
          {
            TppSimplepExecuteCallback(&Work);
          }
          else
          {
            v29(&Work);
          }
LABEL_47:
          v24 = (*((_BYTE *)&Work + 76) & 4) != 0;
          v52 = Work.CallbackRunType == TppCallbackRunTypeShortUsed;
          TppCallbackEpilog(&Work);
          v86 = 0LL;
          if ( v24 )
            break;
          if ( !a1 || (v25 = *v59) == 0 )
            v25 = MEMORY[0x7FFE03C0];
          if ( *v65 != v25 )
          {
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
            TppAdjustRunningThreadGoalWithLock(a1);
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
          }
          v63 = 0LL;
          _m_prefetchw((const void *)(a1 + 8));
          v26 = *(_QWORD *)(a1 + 8);
          v63 = v26;
          do
          {
            v3 = HIDWORD(v26);
            if ( *(_BYTE *)(a1 + 376) )
              goto LABEL_144;
            if ( HIDWORD(v26) && ((v26 & 0x8000u) == 0LL || v52) )
            {
              v27 = 0;
              HIDWORD(v63) = HIDWORD(v26) - 1;
            }
            else
            {
              v27 = 1;
              LODWORD(v63) = ((__int16)v26 + 1) ^ (v26 ^ ((__int16)v26 + 1)) & 0xFFFF0000;
            }
            v28 = v26;
            v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v63, v26);
            v63 = v26;
          }
          while ( v28 != v26 );
          v46 = v27;
          if ( v27 )
            goto LABEL_21;
        }
        v59 = 0LL;
        _m_prefetchw((const void *)(a1 + 8));
        v40 = *(_QWORD *)(a1 + 8);
        v59 = (int *)v40;
        do
        {
          LODWORD(v59) = ((__int16)v40 + 1) ^ (v40 ^ ((__int16)v40 + 1)) & 0xFFFF0000;
          v41 = v40;
          v40 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), (signed __int64)v59, v40);
          v59 = (int *)v40;
        }
        while ( v41 != v40 );
        WorkerFactoryInformation = 3;
        NtSetInformationWorkerFactory(*(HANDLE *)(a1 + 56), WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
LABEL_144:
        if ( (Work.DeferredWork.Flags & 1) != 0 )
        {
          TppCallbackSendAndDestroyAlpcMessage(&Work);
          Work.DeferredWork.Flags &= ~1u;
        }
        Work.WorkOnBehalf = 0LL;
        RtlClearThreadWorkOnBehalfTicket(v3);
        if ( v47 )
          _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
        if ( v48 )
        {
          v42 = v60;
          RtlAcquireSRWLockExclusive(v60 + 113);
          v43 = v84;
          v44 = v85;
          if ( (_RTL_SRWLOCK **)v84[1].Value != &v84 || *v85 != (unsigned __int64 *)&v84 )
            __fastfail(3u);
          *v85 = (unsigned __int64 *)v84;
          v43[1].Value = (unsigned __int64)v44;
          RtlReleaseSRWLockExclusive(v42 + 113);
        }
        if ( v49 )
        {
          TppPoolRemoveWorker(&v84);
          if ( v50 )
            TppPoolUpdateTrimmedWorker(a1);
        }
        if ( a1 == TppPoolpGlobalPool )
        {
          TppPoolpDereferenceGlobalPool(&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
        }
        else if ( (PVOID)a1 == TppPoolpSerializedPool )
        {
          TppPoolpDereferenceGlobalPool(&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
        }
        else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
        {
          TppPoolpFree((PVOID)a1);
        }
        TppCritResetThread(v69);
        TppFreeThreadData(BaseAddress);
        p_KeyContext = &v91->KeyContext;
        if ( v91 && _InterlockedExchangeAdd((volatile signed __int32 *)&v91->ApcContext, 0xFFFFFFFF) == 1 )
        {
          Flags = TppHeapTag + 3145728;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *p_KeyContext);
        }
        v54 = 0;
        RtlExitUserThread(0);
      }
    }
  }
}
