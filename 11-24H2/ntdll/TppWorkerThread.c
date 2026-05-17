/*
 * XREFs of TppWorkerThread @ 0x1800238D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x1800042C0 (RtlExitUserThread.c)
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     TppIopExecuteCallback @ 0x18001EF70 (TppIopExecuteCallback.c)
 *     TppWaitCompletion @ 0x18001FE00 (TppWaitCompletion.c)
 *     TppTimerpExecuteCallback @ 0x180020920 (TppTimerpExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x180022BB0 (TppWorkpExecuteCallback.c)
 *     TppWorkerFindTask @ 0x180023100 (TppWorkerFindTask.c)
 *     TppCallbackEpilog @ 0x1800248E0 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180024E80 (TppCallbackCheckThreadAfterCallback.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x1800252B4 (TppAdjustRunningThreadGoalWithLock.c)
 *     TppPrepareDirectParams @ 0x180025370 (TppPrepareDirectParams.c)
 *     TppAlpcpExecuteCallback @ 0x1800258C0 (TppAlpcpExecuteCallback.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppSimplepExecuteCallback @ 0x180069230 (TppSimplepExecuteCallback.c)
 *     TppCallbackPerformDeferredWork @ 0x18006A460 (TppCallbackPerformDeferredWork.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18006A498 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18006D7D0 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x1800DEE44 (TppPoolpFree.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x1800E3B80 (RtlClearThreadWorkOnBehalfTicket.c)
 *     TppCritSetThread @ 0x1800EEED0 (TppCritSetThread.c)
 *     TppAllocThreadData @ 0x1800EF610 (TppAllocThreadData.c)
 *     TppPoolAddWorker @ 0x1800F07D8 (TppPoolAddWorker.c)
 *     RtlRegisterThreadWithCsrss @ 0x1800F0C20 (RtlRegisterThreadWithCsrss.c)
 *     TppPoolRemoveWorker @ 0x1800F3110 (TppPoolRemoveWorker.c)
 *     TppFreeThreadData @ 0x1800F3D68 (TppFreeThreadData.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800F3DB4 (TppPoolUpdateTrimmedWorker.c)
 *     TppFreeDirectParamsCache @ 0x1800F4C54 (TppFreeDirectParamsCache.c)
 *     TppCritResetThread @ 0x1800F80A8 (TppCritResetThread.c)
 *     RtlResetStackOverflow @ 0x18013491C (RtlResetStackOverflow.c)
 *     TppWorkerpInnerExceptionFilter @ 0x18015C914 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18015C9AC (TppWorkerpOuterExceptionFilter.c)
 *     NtWorkerFactoryWorkerReady @ 0x180161CB0 (NtWorkerFactoryWorkerReady.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     ZwAlpcSendWaitReceivePort @ 0x180162E40 (ZwAlpcSendWaitReceivePort.c)
 *     NtSetInformationWorkerFactory @ 0x1801652A0 (NtSetInformationWorkerFactory.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x180165940 (ZwWaitForWorkViaWorkerFactory.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

void __fastcall __noreturn TppWorkerThread(__int64 a1)
{
  char v2; // bl
  unsigned __int64 v3; // rcx
  struct _PEB *v4; // rbx
  _LIST_ENTRY *Blink; // rcx
  unsigned __int64 Number; // r15
  int Group; // esi
  int v8; // r14d
  int v9; // ecx
  unsigned int i; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  _OWORD *v13; // rbx
  __int128 *Heap; // rax
  int v15; // ecx
  int v16; // ecx
  unsigned __int8 v17; // r12
  __int64 v18; // rbx
  __int16 v19; // si
  __int64 v20; // r15
  int v21; // r14d
  int v22; // eax
  void (__fastcall *v23)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  bool v24; // bl
  int v25; // eax
  unsigned __int64 v26; // rax
  char v27; // r8
  unsigned __int64 v28; // rtt
  __int64 v29; // r8
  __int64 v30; // r9
  void (__fastcall *v31)(_BYTE *); // rax
  int v32; // edx
  struct _TEB *v33; // rcx
  int v34; // edx
  struct _TEB *v35; // rcx
  _QWORD *v36; // rdx
  int *SharedData; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  unsigned __int16 j; // dx
  signed __int64 v44; // rax
  signed __int64 v45; // rtt
  struct _PEB *v46; // rbx
  _LIST_ENTRY *v47; // rax
  _LIST_ENTRY *v48; // rcx
  _QWORD *v49; // r8
  char v50; // [rsp+42h] [rbp-316h] BYREF
  char v51; // [rsp+43h] [rbp-315h]
  char v52; // [rsp+44h] [rbp-314h]
  char v53; // [rsp+45h] [rbp-313h]
  char v54; // [rsp+46h] [rbp-312h]
  char v55; // [rsp+47h] [rbp-311h]
  bool v56; // [rsp+48h] [rbp-310h]
  int v57; // [rsp+4Ch] [rbp-30Ch]
  int v58; // [rsp+50h] [rbp-308h]
  unsigned int v59; // [rsp+54h] [rbp-304h]
  int v60; // [rsp+58h] [rbp-300h] BYREF
  int v61; // [rsp+5Ch] [rbp-2FCh] BYREF
  __int64 v62; // [rsp+60h] [rbp-2F8h]
  int *v63; // [rsp+68h] [rbp-2F0h]
  struct _PEB *v64; // [rsp+70h] [rbp-2E8h]
  unsigned int v65; // [rsp+78h] [rbp-2E0h]
  int v66; // [rsp+7Ch] [rbp-2DCh] BYREF
  unsigned __int64 v67; // [rsp+80h] [rbp-2D8h]
  __int128 *v68; // [rsp+88h] [rbp-2D0h]
  _DWORD *v69; // [rsp+90h] [rbp-2C8h]
  _LIST_ENTRY ***v70; // [rsp+98h] [rbp-2C0h] BYREF
  int v71; // [rsp+A0h] [rbp-2B8h]
  __int64 **v72; // [rsp+A8h] [rbp-2B0h] BYREF
  __int64 v73; // [rsp+B0h] [rbp-2A8h] BYREF
  int v74; // [rsp+B8h] [rbp-2A0h]
  int v77; // [rsp+D0h] [rbp-288h]
  __int64 v78; // [rsp+E0h] [rbp-278h]
  __int64 v79; // [rsp+E8h] [rbp-270h]
  struct _TEB *v80; // [rsp+F0h] [rbp-268h]
  struct _TEB *v81; // [rsp+F8h] [rbp-260h]
  struct _TEB *v82; // [rsp+110h] [rbp-248h]
  struct _TEB *v83; // [rsp+118h] [rbp-240h]
  struct _TEB *v84; // [rsp+120h] [rbp-238h]
  struct _TEB *v85; // [rsp+130h] [rbp-228h]
  struct _TEB *v86; // [rsp+138h] [rbp-220h]
  struct _TEB *v87; // [rsp+140h] [rbp-218h]
  _LIST_ENTRY *p_TppWorkerpList; // [rsp+160h] [rbp-1F8h] BYREF
  _LIST_ENTRY *v89; // [rsp+168h] [rbp-1F0h]
  __int64 **v90; // [rsp+180h] [rbp-1D8h]
  __int64 v91; // [rsp+190h] [rbp-1C8h]
  _BYTE v92[72]; // [rsp+198h] [rbp-1C0h] BYREF
  int v93; // [rsp+1E0h] [rbp-178h]
  char v94; // [rsp+1E4h] [rbp-174h]
  __int64 v95; // [rsp+1F0h] [rbp-168h]
  __int64 **v96; // [rsp+1F8h] [rbp-160h]
  int v97; // [rsp+200h] [rbp-158h]
  __int64 v98; // [rsp+218h] [rbp-140h]
  _QWORD v99[2]; // [rsp+268h] [rbp-F0h] BYREF
  unsigned int v100; // [rsp+278h] [rbp-E0h]
  int v101; // [rsp+27Ch] [rbp-DCh]
  _GUID ActivityId; // [rsp+280h] [rbp-D8h]
  __int64 v103; // [rsp+290h] [rbp-C8h]
  __int128 v104; // [rsp+298h] [rbp-C0h] BYREF
  __int128 v105; // [rsp+2A8h] [rbp-B0h] BYREF
  _OWORD *v106; // [rsp+2B8h] [rbp-A0h]
  unsigned int v107; // [rsp+2C0h] [rbp-98h]
  char v108; // [rsp+2C8h] [rbp-90h]
  unsigned __int16 v109; // [rsp+2CAh] [rbp-8Eh]
  _BYTE v110[6]; // [rsp+2D0h] [rbp-88h] BYREF
  __int16 v111; // [rsp+2D6h] [rbp-82h]
  __int64 v112; // [rsp+2F0h] [rbp-68h]
  int v113; // [rsp+2F8h] [rbp-60h]
  int v114; // [rsp+2FCh] [rbp-5Ch]
  __int16 v115; // [rsp+300h] [rbp-58h]
  __int16 v116; // [rsp+302h] [rbp-56h]
  int v117; // [rsp+304h] [rbp-54h]
  unsigned int v118; // [rsp+308h] [rbp-50h]
  __int128 v119; // [rsp+310h] [rbp-48h] BYREF

  v69 = (_DWORD *)a1;
  v73 = 0LL;
  v60 = 0;
  v62 = a1;
  v78 = a1;
  v51 = 0;
  v52 = 0;
  v55 = 0;
  v53 = 0;
  v50 = 0;
  v54 = 0;
  v72 = 0LL;
  memset_thunk_772440563353939046(&p_TppWorkerpList, 0, 0x170uLL);
  v70 = 0LL;
  v66 = 0;
  v57 = 0;
  RtlRegisterThreadWithCsrss();
  v64 = NtCurrentPeb();
  TppCritSetThread(&v73);
  TppAllocThreadData(&v70);
  if ( v70 )
    *v70 = &p_TppWorkerpList;
  memset_thunk_772440563353939046(&p_TppWorkerpList, 0, 0x170uLL);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 368));
  if ( *(_BYTE *)(a1 + 377) )
  {
    v58 = -1073741558;
  }
  else
  {
    v58 = NtWorkerFactoryWorkerReady(*(_QWORD *)(a1 + 56));
    if ( v58 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v2 = v55;
      goto LABEL_8;
    }
  }
  v2 = 1;
  v55 = 1;
LABEL_8:
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 368));
  if ( v2 )
    goto LABEL_144;
  TppPoolAddWorker(a1, &p_TppWorkerpList);
  v53 = 1;
  v4 = v64;
  RtlAcquireSRWLockExclusive(&v64->TppWorkerpListLock);
  Blink = v64->TppWorkerpList.Blink;
  if ( Blink->Flink != &v64->TppWorkerpList )
    __fastfail(3u);
  p_TppWorkerpList = &v64->TppWorkerpList;
  v89 = Blink;
  Blink->Flink = (_LIST_ENTRY *)&p_TppWorkerpList;
  v4->TppWorkerpList.Blink = (_LIST_ENTRY *)&p_TppWorkerpList;
  v52 = 1;
  RtlReleaseSRWLockExclusive(&v4->TppWorkerpListLock);
  memset_thunk_772440563353939046(v92, 0, 0x100uLL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
  v51 = 1;
  v65 = 0;
  v80 = NtCurrentTeb();
  Number = v80->CurrentIdealProcessor.Number;
  v81 = v80;
  Group = v80->CurrentIdealProcessor.Group;
  v8 = TppNumberNodes;
  v63 = (int *)(a1 + 440);
  v9 = *(_DWORD *)(a1 + 440);
  if ( !v9 )
    v9 = MEMORY[0x7FFE03C0];
  v69 = (_DWORD *)(a1 + 424);
  if ( *(_DWORD *)(a1 + 424) != v9 )
  {
    RtlAcquireSRWLockExclusive(a1 + 72);
    TppAdjustRunningThreadGoalWithLock(a1);
    RtlReleaseSRWLockExclusive(a1 + 72);
  }
  for ( i = 0; ; ++i )
  {
    v65 = i;
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
  v107 = v8;
  v109 = Group;
  while ( 1 )
  {
LABEL_21:
    v57 = 0;
    v104 = 0LL;
    v105 = 0LL;
    v13 = v106;
    v59 = 16;
    if ( v106 )
    {
      if ( *((_DWORD *)v106 + 2) != 1 )
        goto LABEL_141;
      memset_thunk_772440563353939046(*(void **)v106, 0, 56LL * *((unsigned int *)v106 + 3));
      v59 = *((_DWORD *)v13 + 3);
      Heap = *(__int128 **)v13;
    }
    else
    {
      v74 = TppHeapTag + 3145728;
      Heap = (__int128 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8u, 0x390uLL);
      if ( !Heap )
      {
LABEL_141:
        v59 = 1;
        Heap = &v104;
        goto LABEL_24;
      }
      *((_QWORD *)Heap + 112) = Heap;
      *((_DWORD *)Heap + 226) = 1;
      *((_DWORD *)Heap + 227) = 16;
      v106 = Heap + 56;
      v59 = 16;
    }
LABEL_24:
    v68 = Heap;
    v60 = 0;
    v15 = ZwWaitForWorkViaWorkerFactory(*(_QWORD *)(a1 + 56), Heap, v59, &v60, v99);
    v58 = v15;
    if ( v15 )
      v60 = 0;
    if ( (v101 & 1) != 0 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v99[0]);
      v101 &= ~1u;
      v15 = v58;
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
          v54 = 1;
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
      if ( !a1 || (v16 = *v63) == 0 )
        v16 = MEMORY[0x7FFE03C0];
      if ( *v69 != v16 )
      {
        RtlAcquireSRWLockExclusive(a1 + 72);
        TppAdjustRunningThreadGoalWithLock(a1);
        RtlReleaseSRWLockExclusive(a1 + 72);
      }
      if ( (unsigned __int8)TppPrepareDirectParams(
                              (unsigned int)&p_TppWorkerpList,
                              (_DWORD)v68,
                              v60,
                              v59,
                              a1,
                              (__int64)&v50) )
        goto LABEL_144;
      if ( !v50 )
      {
        if ( (_QWORD)v104 )
        {
          v79 = v104;
          v95 = *(_QWORD *)(v104 + 56);
          v96 = (__int64 **)v104;
          v17 = *(_BYTE *)(v104 + 68);
          v18 = *(unsigned int *)(v104 + 64);
          v119 = 0LL;
          v19 = -1;
          v61 = 0;
          v20 = v107;
          v21 = v109;
          v22 = *(_DWORD *)(a1 + 428);
          if ( (_DWORD)v18 == v107 )
          {
            if ( v22 == -1 && !v108 )
            {
              v108 = 1;
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v18));
            }
          }
          else
          {
            if ( v22 == -1 )
            {
              if ( v108 )
              {
                v36 = (_QWORD *)(a1 + 40);
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v107));
              }
              else
              {
                v108 = 1;
                v36 = (_QWORD *)(v78 + 40);
              }
              _InterlockedIncrement((volatile signed __int32 *)(*v36 + 4 * v18));
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
            v107 = v18;
            v109 = v19;
            SharedData = (int *)NtCurrentPeb()->SharedData;
            if ( SharedData && (v77 = *SharedData) != 0 )
              v38 = (__int64)NtCurrentPeb()->SharedData + 556;
            else
              v38 = 2147353478LL;
            if ( *(_BYTE *)v38 )
            {
              memset_thunk_772440563353939046(v110, 0, 0x40uLL);
              v111 = 7209;
              v112 = a1;
              v113 = v20;
              v114 = v18;
              v115 = v21;
              v116 = v19;
              v39 = *(_QWORD *)(a1 + 40);
              v117 = *(_DWORD *)(v39 + 4 * v20);
              v118 = *(_DWORD *)(v39 + 4 * v18);
              if ( (unsigned int)RtlGetCurrentServiceSessionId(v118, v39, v40, v41) )
                v42 = (__int64)NtCurrentPeb()->SharedData + 556;
              else
                v42 = 2147353478LL;
              NtTraceEvent(*(unsigned __int8 *)v42, 1026LL, 28LL, v110);
            }
            v119 = 0LL;
            NtSetInformationThread(-2LL, 30LL, &v119);
            LOWORD(v61) = v19;
            HIWORD(v61) = v17;
            NtSetInformationThread(-2LL, 33LL, &v61);
          }
          v82 = NtCurrentTeb();
          ActivityId = v82->ActivityId;
          if ( v98 && (*(_BYTE *)(v98 + 436) & 1) == 0 )
          {
            v32 = v97 | 8;
            v97 |= 8u;
            if ( NtCurrentTeb()->IsImpersonating )
              v97 = v32 | 4;
            v33 = NtCurrentTeb();
            if ( (((unsigned __int64)v33->CurrentTransactionHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0
              || v33->TxnScopeEnterCallback
              || v33->TxnScopeExitCallback
              || v33->TxnScopeContext
              || v33->TxFsContext != 65534 )
            {
              v97 |= 0x10u;
            }
            if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              v97 |= 0x20u;
            v83 = NtCurrentTeb();
            if ( v83->PreferredLanguages )
              v97 |= 0x40u;
            v84 = NtCurrentTeb();
            if ( v84->SavedPriorityState )
              v97 |= 0x80u;
          }
          v23 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v79 + 56);
          if ( (char *)v23 == (char *)TppAlpcpExecuteCallback )
          {
            TppAlpcpExecuteCallback(v92, v79, *((_QWORD *)&v104 + 1), &v105);
          }
          else if ( (char *)v23 == (char *)TppIopExecuteCallback )
          {
            TppIopExecuteCallback((__int64)v92, v79, *((__int64 *)&v104 + 1), (__int64)&v105);
          }
          else if ( (char *)v23 == (char *)TppWaitCompletion )
          {
            TppWaitCompletion((__int64)v92, v79, *((__int64 *)&v104 + 1), (__int64)&v105);
          }
          else
          {
            v23(v92, v79, *((_QWORD *)&v104 + 1), &v105);
          }
          goto LABEL_47;
        }
        while ( 1 )
        {
          if ( !(unsigned int)TppWorkerFindTask(a1, (__int64)&p_TppWorkerpList, &v72) )
            goto LABEL_144;
          if ( (v101 & 1) != 0 )
          {
            ZwAlpcSendWaitReceivePort(v99[1], v100, v99[0], 0LL, 0LL, 0LL, 0LL, 0LL);
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v99[0]);
            v101 &= ~1u;
          }
          v103 = 0LL;
          RtlClearThreadWorkOnBehalfTicket(v3);
          v90 = v72;
          v95 = **v72;
          v96 = v72;
          v98 = v91;
          v85 = NtCurrentTeb();
          ActivityId = v85->ActivityId;
          if ( v91 && (*(_BYTE *)(v91 + 436) & 1) == 0 )
          {
            v34 = v97 | 8;
            v97 |= 8u;
            if ( NtCurrentTeb()->IsImpersonating )
              v97 = v34 | 4;
            v35 = NtCurrentTeb();
            if ( (((unsigned __int64)v35->CurrentTransactionHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0
              || v35->TxnScopeEnterCallback
              || v35->TxnScopeExitCallback
              || v35->TxnScopeContext
              || v35->TxFsContext != 65534 )
            {
              v97 |= 0x10u;
            }
            if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              v97 |= 0x20u;
            v86 = NtCurrentTeb();
            if ( v86->PreferredLanguages )
              v97 |= 0x40u;
            v87 = NtCurrentTeb();
            if ( v87->SavedPriorityState )
              v97 |= 0x80u;
          }
          v31 = (void (__fastcall *)(_BYTE *))**v72;
          if ( (char *)v31 == (char *)TppWorkpExecuteCallback )
          {
            TppWorkpExecuteCallback((__int64)v92, (__int64)v72, v29, v30);
          }
          else if ( (char *)v31 == (char *)TppTimerpExecuteCallback )
          {
            TppTimerpExecuteCallback((__int64)v92, (__int64)v72);
          }
          else if ( (char *)v31 == (char *)TppSimplepExecuteCallback )
          {
            TppSimplepExecuteCallback(v92);
          }
          else
          {
            v31(v92);
          }
LABEL_47:
          v24 = (v94 & 4) != 0;
          v56 = v93 == 4;
          TppCallbackEpilog(v92);
          v90 = 0LL;
          if ( v24 )
            break;
          if ( !a1 || (v25 = *v63) == 0 )
            v25 = MEMORY[0x7FFE03C0];
          if ( *v69 != v25 )
          {
            RtlAcquireSRWLockExclusive(a1 + 72);
            TppAdjustRunningThreadGoalWithLock(a1);
            RtlReleaseSRWLockExclusive(a1 + 72);
          }
          v67 = 0LL;
          _m_prefetchw((const void *)(a1 + 8));
          v26 = *(_QWORD *)(a1 + 8);
          v67 = v26;
          do
          {
            v3 = HIDWORD(v26);
            if ( *(_BYTE *)(a1 + 376) )
              goto LABEL_144;
            if ( HIDWORD(v26) && ((v26 & 0x8000u) == 0LL || v56) )
            {
              v27 = 0;
              HIDWORD(v67) = HIDWORD(v26) - 1;
            }
            else
            {
              v27 = 1;
              LODWORD(v67) = ((__int16)v26 + 1) ^ (v26 ^ ((__int16)v26 + 1)) & 0xFFFF0000;
            }
            v28 = v26;
            v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v67, v26);
            v67 = v26;
          }
          while ( v28 != v26 );
          v50 = v27;
          if ( v27 )
            goto LABEL_21;
        }
        v63 = 0LL;
        _m_prefetchw((const void *)(a1 + 8));
        v44 = *(_QWORD *)(a1 + 8);
        v63 = (int *)v44;
        do
        {
          LODWORD(v63) = ((__int16)v44 + 1) ^ (v44 ^ ((__int16)v44 + 1)) & 0xFFFF0000;
          v45 = v44;
          v44 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), (signed __int64)v63, v44);
          v63 = (int *)v44;
        }
        while ( v45 != v44 );
        v66 = 3;
        NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 9LL, &v66);
LABEL_144:
        if ( (v101 & 1) != 0 )
        {
          TppCallbackSendAndDestroyAlpcMessage(v92);
          v101 &= ~1u;
        }
        v103 = 0LL;
        RtlClearThreadWorkOnBehalfTicket(v3);
        if ( v51 )
          _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
        if ( v52 )
        {
          v46 = v64;
          RtlAcquireSRWLockExclusive(&v64->TppWorkerpListLock);
          v47 = p_TppWorkerpList;
          v48 = v89;
          if ( (_LIST_ENTRY **)p_TppWorkerpList->Blink != &p_TppWorkerpList
            || (_LIST_ENTRY **)v89->Flink != &p_TppWorkerpList )
          {
            __fastfail(3u);
          }
          v89->Flink = p_TppWorkerpList;
          v47->Blink = v48;
          RtlReleaseSRWLockExclusive(&v46->TppWorkerpListLock);
        }
        if ( v53 )
        {
          TppPoolRemoveWorker(&p_TppWorkerpList);
          if ( v54 )
            TppPoolUpdateTrimmedWorker(a1);
        }
        if ( a1 == TppPoolpGlobalPool )
        {
          TppPoolpDereferenceGlobalPool(&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
        }
        else if ( a1 == TppPoolpSerializedPool )
        {
          TppPoolpDereferenceGlobalPool(&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
        }
        else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
        {
          TppPoolpFree(a1);
        }
        TppCritResetThread(v73);
        TppFreeThreadData(v70);
        v49 = v106;
        if ( v106 && _InterlockedExchangeAdd((volatile signed __int32 *)v106 + 2, 0xFFFFFFFF) == 1 )
        {
          v71 = TppHeapTag + 3145728;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 3145728), *v49);
        }
        v58 = 0;
        RtlExitUserThread(0);
      }
    }
  }
}
