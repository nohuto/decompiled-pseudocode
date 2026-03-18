/*
 * XREFs of RunContext @ 0x140005EA0
 * Callers:
 *     InsertReadyQueue @ 0x140013A60 (InsertReadyQueue.c)
 *     DispatchCtxtQueue @ 0x14003E8A0 (DispatchCtxtQueue.c)
 * Callees:
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     ReleaseASLMutex @ 0x140005C88 (ReleaseASLMutex.c)
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     DupObjData @ 0x140006F90 (DupObjData.c)
 *     FreeContext @ 0x14000AF70 (FreeContext.c)
 *     RestartContext @ 0x14001384C (RestartContext.c)
 *     LogSchedEvent @ 0x14002DA00 (LogSchedEvent.c)
 *     InvokePauseCallbacks @ 0x14004E99C (InvokePauseCallbacks.c)
 *     Debugger @ 0x14006E888 (Debugger.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RunContext(_QWORD *Entry)
{
  char v1; // si
  _QWORD *v2; // r12
  _QWORD *v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KTHREAD *CurrentThread; // r11
  __int64 v9; // r10
  __int64 v10; // rbx
  __int64 v11; // rdx
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // r9
  __int64 (__fastcall *v18)(); // r11
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // r9
  __int64 v22; // rbp
  struct _KTHREAD *v23; // r14
  __int64 v24; // r15
  __int64 v25; // r10
  _QWORD **v26; // rsi
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  struct _KTHREAD *v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  _QWORD *v34; // rax
  struct _KTHREAD *v35; // r11
  __int64 v36; // r10
  __int64 v37; // rsi
  __int64 v38; // rdx
  char v39; // [rsp+60h] [rbp+8h]

  v1 = 0;
  v2 = Entry + 49;
  if ( (_QWORD *)*v2 == v2 )
  {
    v4 = (_QWORD *)qword_140089A28;
    if ( *(__int64 **)qword_140089A28 != &RunningContextListHead )
      goto LABEL_56;
    *v2 = &RunningContextListHead;
    Entry[50] = v4;
    *v4 = v2;
    qword_140089A28 = (__int64)(Entry + 49);
    v39 = 0;
  }
  else
  {
    v39 = 1;
  }
  Entry[51] = KeGetCurrentThread();
  v5 = *((_DWORD *)Entry + 16);
  if ( (v5 & 0x200) != 0 )
  {
    gReadyQueue |= 0x200u;
    v5 = *((_DWORD *)Entry + 16);
  }
  v6 = Entry[13];
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 32);
  else
    v7 = Entry[9];
  CurrentThread = KeGetCurrentThread();
  v9 = Entry[51];
  v10 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_140089090 )
  {
    v11 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_140089088 + 1, 1u) % (unsigned int)qword_140089088);
    *(_QWORD *)((char *)qword_140089090 + v11 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_140089090 + v11) = 1381322307;
    *(_QWORD *)((char *)qword_140089090 + v11 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_140089090 + v11 + 24) = v9;
    *(_QWORD *)((char *)qword_140089090 + v11 + 32) = Entry;
    *(_QWORD *)((char *)qword_140089090 + v11 + 40) = v10;
    *(_QWORD *)((char *)qword_140089090 + v11 + 48) = Entry;
    *(_QWORD *)((char *)qword_140089090 + v11 + 56) = v7;
    *(_QWORD *)((char *)qword_140089090 + v11 + 64) = v5;
  }
  do
  {
    v12 = 0;
    *((_DWORD *)Entry + 16) = Entry[8] & 0xFFFFFFE7 | 0x10;
    KeReleaseSpinLock(&SpinLock, NewIrql);
    do
    {
      if ( !Entry[52] )
        break;
      if ( (gDebugger & 0x1000) != 0 )
      {
        ConPrintf("\nProcess AML Debugger Request.\n");
        _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
        if ( (gdwfAMLIInit & 0x40) != 0 )
        {
          if ( (gDebugger & 4) != 0 )
          {
            ConPrintf("\nRe-entering AML debugger is not allowed.\nType 'g' to go back to the AML debugger.\n");
          }
          else
          {
            _InterlockedAnd(&gDebugger, 0xFFFFFFFD);
            _InterlockedOr(&gDebugger, 1u);
            Debugger();
            _InterlockedAnd(&gDebugger, 0xFFFFFFFC);
          }
        }
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(Entry[52] + 24LL))(
              Entry,
              Entry[52],
              (unsigned int)v12);
      v12 = v13;
      if ( v13 == 32772 )
        break;
    }
    while ( v13 != 0x8000 );
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v14 = *((_DWORD *)Entry + 16);
    if ( (v14 & 0x80u) == 0 || v12 != 0x8000 )
    {
      v14 &= ~0x10u;
      *((_DWORD *)Entry + 16) = v14;
    }
  }
  while ( (v14 & 8) != 0 );
  if ( v12 == 32772 )
  {
    *((_DWORD *)Entry + 16) = v14 | 0x20;
  }
  else if ( v12 == 0x8000 )
  {
    if ( !Entry[13] )
      *((_DWORD *)Entry + 16) = v14 & 0xFFFFFF7F;
    v12 = 0;
  }
  else
  {
    KeReleaseSpinLock(&SpinLock, NewIrql);
    if ( !v12 )
    {
      v15 = Entry[22];
      if ( v15 )
        v12 = DupObjData(gpheapGlobal, v15, Entry + 16);
    }
    v16 = *((_DWORD *)Entry + 16);
    if ( (v16 & 0x20) != 0 )
    {
      v17 = (_QWORD *)Entry[13];
      if ( v17 )
      {
        v18 = (__int64 (__fastcall *)())v17[11];
        v19 = v17[4];
        v20 = v17[12];
        v21 = v17[13];
      }
      else
      {
        v18 = (__int64 (__fastcall *)())Entry[21];
        v19 = Entry[9];
        v20 = Entry[22];
        v21 = Entry[23];
      }
      if ( v18 == EvalMethodComplete )
      {
        v35 = KeGetCurrentThread();
        v36 = Entry[51];
        v37 = (unsigned int)gReadyQueue;
        if ( (gDebugger & 0x8000) != 0 && qword_140089090 )
        {
          v38 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_140089088 + 1, 1u) % (unsigned int)qword_140089088);
          *(_QWORD *)((char *)qword_140089090 + v38 + 8) = MEMORY[0xFFFFF78000000008];
          *(_DWORD *)((char *)qword_140089090 + v38) = 1146048069;
          *(_QWORD *)((char *)qword_140089090 + v38 + 16) = v35;
          *(_QWORD *)((char *)qword_140089090 + v38 + 24) = v36;
          *(_QWORD *)((char *)qword_140089090 + v38 + 32) = Entry;
          *(_QWORD *)((char *)qword_140089090 + v38 + 40) = v37;
          *(_QWORD *)((char *)qword_140089090 + v38 + 48) = v19;
          *(_QWORD *)((char *)qword_140089090 + v38 + 56) = v12;
          *(_QWORD *)((char *)qword_140089090 + v38 + 64) = v21;
        }
        *(_DWORD *)v21 = v12;
        *(_QWORD *)(v21 + 8) = Entry;
        KeSetEvent((PRKEVENT)(v21 + 16), 0, 0);
      }
      else if ( v12 == 32771 )
      {
        RestartContext(Entry, 0LL, v19, v21);
      }
      else if ( v18 )
      {
        v22 = Entry[51];
        v23 = KeGetCurrentThread();
        v24 = (unsigned int)gReadyQueue;
        if ( (gDebugger & 0x8000) != 0 && qword_140089090 )
        {
          v25 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_140089088 + 1, 1u) % (unsigned int)qword_140089088);
          *(_QWORD *)((char *)qword_140089090 + v25 + 8) = MEMORY[0xFFFFF78000000008];
          *(_DWORD *)((char *)qword_140089090 + v25) = 1095975746;
          *(_QWORD *)((char *)qword_140089090 + v25 + 16) = v23;
          *(_QWORD *)((char *)qword_140089090 + v25 + 24) = v22;
          *(_QWORD *)((char *)qword_140089090 + v25 + 32) = Entry;
          *(_QWORD *)((char *)qword_140089090 + v25 + 40) = v24;
          *(_QWORD *)((char *)qword_140089090 + v25 + 48) = v19;
          *(_QWORD *)((char *)qword_140089090 + v25 + 56) = v12;
          *(_QWORD *)((char *)qword_140089090 + v25 + 64) = v21;
        }
        ((void (__fastcall *)(__int64, _QWORD, __int64, __int64))v18)(v19 + 120, (unsigned int)v12, v20, v21);
      }
      v16 = *((_DWORD *)Entry + 16);
      if ( (v16 & 0x100) != 0 )
        v12 = 32772;
    }
    if ( (v16 & 0x200) != 0 )
      gReadyQueue &= ~0x200u;
    v26 = (_QWORD **)(Entry + 6);
    while ( 1 )
    {
      v27 = *v26;
      if ( *v26 == v26 )
        break;
      if ( *((_DWORD *)v27 - 6) == 1 )
      {
        ReleaseASLMutex((__int64)Entry, *(v27 - 1), 0);
      }
      else
      {
        if ( (_QWORD **)v27[1] != v26 )
          goto LABEL_56;
        v34 = (_QWORD *)*v27;
        if ( *(_QWORD **)(*v27 + 8LL) != v27 )
          goto LABEL_56;
        *v26 = v34;
        v34[1] = v26;
        HeapFree(v27 - 3);
      }
    }
    v1 = 1;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  }
  if ( !v39 )
  {
    v28 = (_QWORD *)*v2;
    if ( *(_QWORD **)(*v2 + 8LL) == v2 )
    {
      v29 = (_QWORD *)v2[1];
      if ( (_QWORD *)*v29 == v2 )
      {
        *v29 = v28;
        v28[1] = v29;
        v2[1] = v2;
        *v2 = v2;
        Entry[51] = 0LL;
        goto LABEL_45;
      }
    }
LABEL_56:
    __fastfail(3u);
  }
LABEL_45:
  if ( v1 )
    FreeContext(Entry);
  if ( (gReadyQueue & 4) != 0 && glistCtxtHead == (_UNKNOWN *)&glistCtxtHead )
  {
    gReadyQueue = gReadyQueue & 0xFFFFFFF3 | 8;
    if ( (__int64 *)qword_140088F20 != &qword_140088F20 )
    {
      InvokePauseCallbacks();
      LogSchedEvent(1346454338, 0, (_DWORD)Entry, v12, 0LL);
    }
  }
  v30 = KeGetCurrentThread();
  v31 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_140089090 )
  {
    v32 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_140089088 + 1, 1u) % (unsigned int)qword_140089088);
    *(_QWORD *)((char *)qword_140089090 + v32 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_140089090 + v32) = 1381322273;
    *(_QWORD *)((char *)qword_140089090 + v32 + 16) = v30;
    *(_QWORD *)((char *)qword_140089090 + v32 + 24) = 0LL;
    *(_QWORD *)((char *)qword_140089090 + v32 + 32) = 0LL;
    *(_QWORD *)((char *)qword_140089090 + v32 + 40) = v31;
    *(_QWORD *)((char *)qword_140089090 + v32 + 48) = Entry;
    *(_QWORD *)((char *)qword_140089090 + v32 + 56) = v12;
    *(_QWORD *)((char *)qword_140089090 + v32 + 64) = 0LL;
  }
  return (unsigned int)v12;
}
