/*
 * XREFs of TppWorkerThread @ 0x18007DCB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x180008DE0 (RtlExitUserThread.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003DF80 (TppPoolpDereferenceGlobalPool.c)
 *     TppIopExecuteCallback @ 0x180040230 (TppIopExecuteCallback.c)
 *     TppWaitCompletion @ 0x180041270 (TppWaitCompletion.c)
 *     TppTimerpExecuteCallback @ 0x180042330 (TppTimerpExecuteCallback.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     TppWorkpExecuteCallback @ 0x18007CF90 (TppWorkpExecuteCallback.c)
 *     TppWorkerFindTask @ 0x18007D4E0 (TppWorkerFindTask.c)
 *     TppCallbackEpilog @ 0x18007ECC0 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18007F260 (TppCallbackCheckThreadAfterCallback.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18007F694 (TppAdjustRunningThreadGoalWithLock.c)
 *     TppPrepareDirectParams @ 0x18007F750 (TppPrepareDirectParams.c)
 *     TppAlpcpExecuteCallback @ 0x18007FCA0 (TppAlpcpExecuteCallback.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800A00DC (TppPoolUpdateTrimmedWorker.c)
 *     TppPoolpFree @ 0x1800A09A4 (TppPoolpFree.c)
 *     TppSimplepExecuteCallback @ 0x1800D60D0 (TppSimplepExecuteCallback.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x1800E0830 (RtlClearThreadWorkOnBehalfTicket.c)
 *     TppCallbackPerformDeferredWork @ 0x1800E5140 (TppCallbackPerformDeferredWork.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x1800E5178 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppCritSetThread @ 0x1800F06E0 (TppCritSetThread.c)
 *     TppAllocThreadData @ 0x1800F0D70 (TppAllocThreadData.c)
 *     TppPoolAddWorker @ 0x1800F2088 (TppPoolAddWorker.c)
 *     RtlRegisterThreadWithCsrss @ 0x1800F2790 (RtlRegisterThreadWithCsrss.c)
 *     TppPoolRemoveWorker @ 0x1800F4C80 (TppPoolRemoveWorker.c)
 *     TppFreeThreadData @ 0x1800F5B58 (TppFreeThreadData.c)
 *     TppFreeDirectParamsCache @ 0x1800F6834 (TppFreeDirectParamsCache.c)
 *     TppCritResetThread @ 0x1800F9C38 (TppCritResetThread.c)
 *     RtlResetStackOverflow @ 0x1801361CC (RtlResetStackOverflow.c)
 *     TppWorkerpInnerExceptionFilter @ 0x18015DE74 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18015DF0C (TppWorkerpOuterExceptionFilter.c)
 *     NtWorkerFactoryWorkerReady @ 0x180163240 (NtWorkerFactoryWorkerReady.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1801643D0 (ZwAlpcSendWaitReceivePort.c)
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x180166ED0 (ZwWaitForWorkViaWorkerFactory.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
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
  char v24; // bl
  int v25; // eax
  unsigned __int64 v26; // rax
  char v27; // r8
  unsigned __int64 v28; // rtt
  void (__fastcall *v29)(_BYTE *); // rax
  int v30; // edx
  struct _TEB *v31; // rcx
  int v32; // edx
  struct _TEB *v33; // rcx
  _QWORD *v34; // rdx
  int *SharedData; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int16 j; // dx
  signed __int64 v40; // rax
  signed __int64 v41; // rtt
  __int64 v42; // rdx
  struct _PEB *v43; // rbx
  _LIST_ENTRY *v44; // rax
  _LIST_ENTRY *v45; // rcx
  _QWORD *v46; // r8
  __int64 v47; // [rsp+40h] [rbp-318h] BYREF
  bool v48; // [rsp+48h] [rbp-310h]
  int v49; // [rsp+4Ch] [rbp-30Ch]
  int v50; // [rsp+50h] [rbp-308h]
  unsigned int v51; // [rsp+54h] [rbp-304h]
  int v52; // [rsp+58h] [rbp-300h] BYREF
  int v53; // [rsp+5Ch] [rbp-2FCh] BYREF
  __int64 v54; // [rsp+60h] [rbp-2F8h]
  int *v55; // [rsp+68h] [rbp-2F0h]
  struct _PEB *v56; // [rsp+70h] [rbp-2E8h]
  unsigned int v57; // [rsp+78h] [rbp-2E0h]
  int v58; // [rsp+7Ch] [rbp-2DCh] BYREF
  unsigned __int64 v59; // [rsp+80h] [rbp-2D8h]
  __int128 *v60; // [rsp+88h] [rbp-2D0h]
  _DWORD *v61; // [rsp+90h] [rbp-2C8h]
  _LIST_ENTRY ***v62; // [rsp+98h] [rbp-2C0h] BYREF
  int v63; // [rsp+A0h] [rbp-2B8h]
  __int64 **v64; // [rsp+A8h] [rbp-2B0h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-2A8h] BYREF
  int v66; // [rsp+B8h] [rbp-2A0h]
  int v69; // [rsp+D0h] [rbp-288h]
  __int64 v70; // [rsp+E0h] [rbp-278h]
  __int64 v71; // [rsp+E8h] [rbp-270h]
  struct _TEB *v72; // [rsp+F0h] [rbp-268h]
  struct _TEB *v73; // [rsp+F8h] [rbp-260h]
  struct _TEB *v74; // [rsp+110h] [rbp-248h]
  struct _TEB *v75; // [rsp+118h] [rbp-240h]
  struct _TEB *v76; // [rsp+120h] [rbp-238h]
  struct _TEB *v77; // [rsp+130h] [rbp-228h]
  struct _TEB *v78; // [rsp+138h] [rbp-220h]
  struct _TEB *v79; // [rsp+140h] [rbp-218h]
  _LIST_ENTRY *p_TppWorkerpList; // [rsp+160h] [rbp-1F8h] BYREF
  _LIST_ENTRY *v81; // [rsp+168h] [rbp-1F0h]
  __int64 **v82; // [rsp+180h] [rbp-1D8h]
  __int64 v83; // [rsp+190h] [rbp-1C8h]
  _BYTE v84[72]; // [rsp+198h] [rbp-1C0h] BYREF
  int v85; // [rsp+1E0h] [rbp-178h]
  char v86; // [rsp+1E4h] [rbp-174h]
  __int64 v87; // [rsp+1F0h] [rbp-168h]
  __int64 **v88; // [rsp+1F8h] [rbp-160h]
  int v89; // [rsp+200h] [rbp-158h]
  __int64 v90; // [rsp+218h] [rbp-140h]
  _QWORD v91[2]; // [rsp+268h] [rbp-F0h] BYREF
  unsigned int v92; // [rsp+278h] [rbp-E0h]
  int v93; // [rsp+27Ch] [rbp-DCh]
  _GUID ActivityId; // [rsp+280h] [rbp-D8h]
  __int64 v95; // [rsp+290h] [rbp-C8h]
  __int128 v96; // [rsp+298h] [rbp-C0h] BYREF
  __int128 v97; // [rsp+2A8h] [rbp-B0h] BYREF
  _OWORD *v98; // [rsp+2B8h] [rbp-A0h]
  unsigned int v99; // [rsp+2C0h] [rbp-98h]
  char v100; // [rsp+2C8h] [rbp-90h]
  unsigned __int16 v101; // [rsp+2CAh] [rbp-8Eh]
  _BYTE v102[6]; // [rsp+2D0h] [rbp-88h] BYREF
  __int16 v103; // [rsp+2D6h] [rbp-82h]
  __int64 v104; // [rsp+2F0h] [rbp-68h]
  int v105; // [rsp+2F8h] [rbp-60h]
  int v106; // [rsp+2FCh] [rbp-5Ch]
  __int16 v107; // [rsp+300h] [rbp-58h]
  __int16 v108; // [rsp+302h] [rbp-56h]
  int v109; // [rsp+304h] [rbp-54h]
  int v110; // [rsp+308h] [rbp-50h]
  __int128 v111; // [rsp+310h] [rbp-48h] BYREF

  v61 = (_DWORD *)a1;
  v65 = 0LL;
  v52 = 0;
  v54 = a1;
  v70 = a1;
  v47 = 0LL;
  v64 = 0LL;
  memset_thunk_772440563353939046(&p_TppWorkerpList, 0, 0x170uLL);
  v62 = 0LL;
  v58 = 0;
  v49 = 0;
  RtlRegisterThreadWithCsrss();
  v56 = NtCurrentPeb();
  TppCritSetThread(&v65);
  TppAllocThreadData(&v62);
  if ( v62 )
    *v62 = &p_TppWorkerpList;
  memset_thunk_772440563353939046(&p_TppWorkerpList, 0, 0x170uLL);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 368));
  if ( *(_BYTE *)(a1 + 377) )
  {
    v50 = -1073741558;
  }
  else
  {
    v50 = NtWorkerFactoryWorkerReady(*(_QWORD *)(a1 + 56));
    if ( v50 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      LOBYTE(v47) = 1;
      v2 = HIBYTE(v47);
      goto LABEL_8;
    }
  }
  LOBYTE(v47) = 1;
  v2 = 1;
  HIBYTE(v47) = 1;
LABEL_8:
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 368));
  if ( v2 )
    goto LABEL_146;
  TppPoolAddWorker(a1, &p_TppWorkerpList);
  BYTE5(v47) = 1;
  v4 = v56;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&v56->TppWorkerpListLock);
  Blink = v56->TppWorkerpList.Blink;
  if ( Blink->Flink != &v56->TppWorkerpList )
    __fastfail(3u);
  p_TppWorkerpList = &v56->TppWorkerpList;
  v81 = Blink;
  Blink->Flink = (_LIST_ENTRY *)&p_TppWorkerpList;
  v4->TppWorkerpList.Blink = (_LIST_ENTRY *)&p_TppWorkerpList;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v4->TppWorkerpListLock);
  memset_thunk_772440563353939046(v84, 0, 0x100uLL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
  *(_WORD *)((char *)&v47 + 3) = 257;
  v57 = 0;
  v72 = NtCurrentTeb();
  Number = v72->CurrentIdealProcessor.Number;
  v73 = v72;
  Group = v72->CurrentIdealProcessor.Group;
  v8 = TppNumberNodes;
  v55 = (int *)(a1 + 440);
  v9 = *(_DWORD *)(a1 + 440);
  if ( !v9 )
    v9 = MEMORY[0x7FFE03C0];
  v61 = (_DWORD *)(a1 + 424);
  if ( *(_DWORD *)(a1 + 424) != v9 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 72));
    TppAdjustRunningThreadGoalWithLock(a1);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
  }
  for ( i = 0; ; ++i )
  {
    v57 = i;
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
  v99 = v8;
  v101 = Group;
  while ( 1 )
  {
LABEL_21:
    v49 = 0;
    v96 = 0LL;
    v97 = 0LL;
    v13 = v98;
    v51 = 16;
    if ( v98 )
    {
      if ( *((_DWORD *)v98 + 2) != 1 )
        goto LABEL_143;
      memset_thunk_772440563353939046(*(void **)v98, 0, 56LL * *((unsigned int *)v98 + 3));
      v51 = *((_DWORD *)v13 + 3);
      Heap = *(__int128 **)v13;
    }
    else
    {
      v66 = TppHeapTag + 3145728;
      Heap = (__int128 *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8u, 0x390uLL);
      if ( !Heap )
      {
LABEL_143:
        v51 = 1;
        Heap = &v96;
        goto LABEL_24;
      }
      *((_QWORD *)Heap + 112) = Heap;
      *((_DWORD *)Heap + 226) = 1;
      *((_DWORD *)Heap + 227) = 16;
      v98 = Heap + 56;
      v51 = 16;
    }
LABEL_24:
    v60 = Heap;
    v52 = 0;
    v15 = ZwWaitForWorkViaWorkerFactory(*(_QWORD *)(a1 + 56), Heap, v51, &v52, v91);
    v50 = v15;
    if ( v15 )
      v52 = 0;
    if ( (v93 & 1) != 0 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v91[0]);
      v93 &= ~1u;
      v15 = v50;
    }
    if ( v15 )
    {
      v3 = (unsigned int)(v15 - 128);
      if ( !(_DWORD)v3 )
        goto LABEL_146;
      v3 = (unsigned int)(v3 - 64);
      if ( (_DWORD)v3 )
      {
        if ( (_DWORD)v3 == 66 )
        {
          BYTE6(v47) = 1;
          goto LABEL_146;
        }
      }
      else
      {
        TppCallbackCheckThreadAfterCallback(0LL);
      }
    }
    else
    {
      if ( !a1 || (v16 = *v55) == 0 )
        v16 = MEMORY[0x7FFE03C0];
      if ( *v61 != v16 )
      {
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 72));
        TppAdjustRunningThreadGoalWithLock(a1);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
      }
      if ( (unsigned __int8)TppPrepareDirectParams(
                              (unsigned int)&p_TppWorkerpList,
                              (_DWORD)v60,
                              v52,
                              v51,
                              a1,
                              (__int64)&v47 + 2) )
        goto LABEL_146;
      if ( !BYTE2(v47) )
      {
        if ( (_QWORD)v96 )
        {
          v71 = v96;
          v87 = *(_QWORD *)(v96 + 56);
          v88 = (__int64 **)v96;
          v17 = *(_BYTE *)(v96 + 68);
          v18 = *(unsigned int *)(v96 + 64);
          v111 = 0LL;
          v19 = -1;
          v53 = 0;
          v20 = v99;
          v21 = v101;
          v22 = *(_DWORD *)(a1 + 428);
          if ( (_DWORD)v18 == v99 )
          {
            if ( v22 == -1 && !v100 )
            {
              v100 = 1;
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v18));
            }
          }
          else
          {
            if ( v22 == -1 )
            {
              if ( v100 )
              {
                v34 = (_QWORD *)(a1 + 40);
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v99));
              }
              else
              {
                v100 = 1;
                v34 = (_QWORD *)(v70 + 40);
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
                    goto LABEL_111;
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
LABEL_111:
            v99 = v18;
            v101 = v19;
            SharedData = (int *)NtCurrentPeb()->SharedData;
            if ( SharedData && (v69 = *SharedData) != 0 )
              v36 = (__int64)NtCurrentPeb()->SharedData + 556;
            else
              v36 = 2147353478LL;
            if ( *(_BYTE *)v36 )
            {
              memset_thunk_772440563353939046(v102, 0, 0x40uLL);
              v103 = 7209;
              v104 = a1;
              v105 = v20;
              v106 = v18;
              v107 = v21;
              v108 = v19;
              v37 = *(_QWORD *)(a1 + 40);
              v109 = *(_DWORD *)(v37 + 4 * v20);
              v110 = *(_DWORD *)(v37 + 4 * v18);
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                v38 = (__int64)NtCurrentPeb()->SharedData + 556;
              else
                v38 = 2147353478LL;
              NtTraceEvent(*(unsigned __int8 *)v38, 1026LL, 28LL, v102);
            }
            v111 = 0LL;
            NtSetInformationThread(-2LL, 30LL, &v111);
            LOWORD(v53) = v19;
            HIWORD(v53) = v17;
            NtSetInformationThread(-2LL, 33LL, &v53);
          }
          v74 = NtCurrentTeb();
          ActivityId = v74->ActivityId;
          if ( v90 && (*(_BYTE *)(v90 + 436) & 1) == 0 )
          {
            v30 = v89 | 8;
            v89 |= 8u;
            if ( NtCurrentTeb()->IsImpersonating )
              v89 = v30 | 4;
            v31 = NtCurrentTeb();
            if ( (((unsigned __int64)v31->CurrentTransactionHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0
              || v31->TxnScopeEnterCallback
              || v31->TxnScopeExitCallback
              || v31->TxnScopeContext
              || v31->TxFsContext != 65534 )
            {
              v89 |= 0x10u;
            }
            if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              v89 |= 0x20u;
            v75 = NtCurrentTeb();
            if ( v75->PreferredLanguages )
              v89 |= 0x40u;
            v76 = NtCurrentTeb();
            if ( v76->SavedPriorityState )
              v89 |= 0x80u;
          }
          v23 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v71 + 56);
          if ( (char *)v23 == (char *)TppAlpcpExecuteCallback )
          {
            TppAlpcpExecuteCallback(v84, v71, *((_QWORD *)&v96 + 1), &v97);
          }
          else if ( (char *)v23 == (char *)TppIopExecuteCallback )
          {
            TppIopExecuteCallback((__int64)v84, v71, *((__int64 *)&v96 + 1), (__int64)&v97);
          }
          else if ( (char *)v23 == (char *)TppWaitCompletion )
          {
            TppWaitCompletion((__int64)v84, v71, *((__int64 *)&v96 + 1));
          }
          else
          {
            v23(v84, v71, *((_QWORD *)&v96 + 1), &v97);
          }
          goto LABEL_47;
        }
        while ( 1 )
        {
          if ( !(unsigned int)TppWorkerFindTask(a1, (__int64)&p_TppWorkerpList, &v64) )
            goto LABEL_146;
          if ( (v93 & 1) != 0 )
          {
            ZwAlpcSendWaitReceivePort(v91[1], v92, v91[0], 0LL, 0LL, 0LL, 0LL, 0LL, v47);
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v91[0]);
            v93 &= ~1u;
          }
          v95 = 0LL;
          RtlClearThreadWorkOnBehalfTicket(v3);
          v82 = v64;
          v87 = **v64;
          v88 = v64;
          v90 = v83;
          v77 = NtCurrentTeb();
          ActivityId = v77->ActivityId;
          if ( v83 && (*(_BYTE *)(v83 + 436) & 1) == 0 )
          {
            v32 = v89 | 8;
            v89 |= 8u;
            if ( NtCurrentTeb()->IsImpersonating )
              v89 = v32 | 4;
            v33 = NtCurrentTeb();
            if ( (((unsigned __int64)v33->CurrentTransactionHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0
              || v33->TxnScopeEnterCallback
              || v33->TxnScopeExitCallback
              || v33->TxnScopeContext
              || v33->TxFsContext != 65534 )
            {
              v89 |= 0x10u;
            }
            if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              v89 |= 0x20u;
            v78 = NtCurrentTeb();
            if ( v78->PreferredLanguages )
              v89 |= 0x40u;
            v79 = NtCurrentTeb();
            if ( v79->SavedPriorityState )
              v89 |= 0x80u;
          }
          v29 = (void (__fastcall *)(_BYTE *))**v64;
          if ( (char *)v29 == (char *)TppWorkpExecuteCallback )
          {
            TppWorkpExecuteCallback((__int64)v84, (__int64)v64);
          }
          else if ( (char *)v29 == (char *)TppTimerpExecuteCallback )
          {
            TppTimerpExecuteCallback((__int64)v84, (__int64)v64);
          }
          else if ( (char *)v29 == (char *)TppSimplepExecuteCallback )
          {
            TppSimplepExecuteCallback(v84);
          }
          else
          {
            v29(v84);
          }
LABEL_47:
          v24 = BYTE1(v47);
          if ( (v86 & 4) != 0 )
            v24 = 1;
          BYTE1(v47) = v24;
          v48 = v85 == 4;
          TppCallbackEpilog(v84);
          v82 = 0LL;
          if ( v24 )
            break;
          if ( !a1 || (v25 = *v55) == 0 )
            v25 = MEMORY[0x7FFE03C0];
          if ( *v61 != v25 )
          {
            RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 72));
            TppAdjustRunningThreadGoalWithLock(a1);
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
          }
          v59 = 0LL;
          _m_prefetchw((const void *)(a1 + 8));
          v26 = *(_QWORD *)(a1 + 8);
          v59 = v26;
          do
          {
            v3 = HIDWORD(v26);
            if ( *(_BYTE *)(a1 + 376) )
              goto LABEL_146;
            if ( HIDWORD(v26) && ((v26 & 0x8000u) == 0LL || v48) )
            {
              v27 = 0;
              HIDWORD(v59) = HIDWORD(v26) - 1;
            }
            else
            {
              v27 = 1;
              LODWORD(v59) = ((__int16)v26 + 1) ^ (v26 ^ ((__int16)v26 + 1)) & 0xFFFF0000;
            }
            v28 = v26;
            v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v59, v26);
            v59 = v26;
          }
          while ( v28 != v26 );
          BYTE2(v47) = v27;
          if ( v27 )
            goto LABEL_21;
        }
        v55 = 0LL;
        _m_prefetchw((const void *)(a1 + 8));
        v40 = *(_QWORD *)(a1 + 8);
        v55 = (int *)v40;
        do
        {
          LODWORD(v55) = ((__int16)v40 + 1) ^ (v40 ^ ((__int16)v40 + 1)) & 0xFFFF0000;
          v41 = v40;
          v40 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), (signed __int64)v55, v40);
          v55 = (int *)v40;
        }
        while ( v41 != v40 );
        v58 = 3;
        NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 9LL, &v58);
LABEL_146:
        if ( (v93 & 1) != 0 )
        {
          TppCallbackSendAndDestroyAlpcMessage(v84);
          v93 &= ~1u;
        }
        v95 = 0LL;
        RtlClearThreadWorkOnBehalfTicket(v3);
        if ( BYTE3(v47) )
          _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
        if ( BYTE4(v47) )
        {
          v43 = v56;
          RtlAcquireSRWLockExclusive((volatile signed __int32 *)&v56->TppWorkerpListLock);
          v44 = p_TppWorkerpList;
          v45 = v81;
          if ( (_LIST_ENTRY **)p_TppWorkerpList->Blink != &p_TppWorkerpList
            || (_LIST_ENTRY **)v81->Flink != &p_TppWorkerpList )
          {
            __fastfail(3u);
          }
          v81->Flink = p_TppWorkerpList;
          v44->Blink = v45;
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v43->TppWorkerpListLock);
        }
        if ( BYTE5(v47) )
        {
          TppPoolRemoveWorker(&p_TppWorkerpList);
          if ( BYTE6(v47) )
            TppPoolUpdateTrimmedWorker(a1);
        }
        if ( (_BYTE)v47 )
        {
          if ( a1 == TppPoolpGlobalPool )
          {
            TppPoolpDereferenceGlobalPool(
              (const void **)&TppPoolpGlobalPool,
              (volatile signed __int32 *)&TppPoolpGlobalPoolLock);
          }
          else if ( a1 == TppPoolpSerializedPool )
          {
            TppPoolpDereferenceGlobalPool(
              (const void **)&TppPoolpSerializedPool,
              (volatile signed __int32 *)&TppPoolpSerializedPoolLock);
          }
          else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
          {
            TppPoolpFree(a1, v42);
          }
        }
        TppCritResetThread(v65);
        TppFreeThreadData(v62);
        v46 = v98;
        if ( v98 && _InterlockedExchangeAdd((volatile signed __int32 *)v98 + 2, 0xFFFFFFFF) == 1 )
        {
          v63 = TppHeapTag + 3145728;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 3145728), *v46);
        }
        v50 = 0;
        RtlExitUserThread(0);
      }
    }
  }
}
