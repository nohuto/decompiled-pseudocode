/*
 * XREFs of PopCompleteNotifyTransitionCommon @ 0x140477380
 * Callers:
 *     PopCompleteDirectedPowerTransitionCallback @ 0x140477304 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopSystemIrpCompletion @ 0x140B5A4B0 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     PopReadyParentSleep @ 0x1404775FC (PopReadyParentSleep.c)
 *     PopReadyChildWake @ 0x140477688 (PopReadyChildWake.c)
 *     PopPrepChildWake @ 0x1404777EC (PopPrepChildWake.c)
 *     PopDiagTraceDriverVeto @ 0x140B4F6E8 (PopDiagTraceDriverVeto.c)
 */

void __fastcall PopCompleteNotifyTransitionCommon(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  _QWORD *v4; // r14
  __int64 v6; // r13
  bool v8; // r15
  LONG v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 **v15; // rax
  __int64 v16; // rax
  __int64 **v17; // rdx
  __int64 *v18; // r12
  __int64 v19; // rax
  __int64 **v20; // rdx
  char v21; // al
  int v22; // ecx
  __int64 *v23; // r11
  __int64 *i; // r10
  int v25; // eax
  char v26; // al
  __int64 *v27; // r14
  int v28; // ecx
  char ready; // al
  int v30; // ecx
  __int64 *v31; // r10
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  char v33; // [rsp+80h] [rbp+8h]

  v4 = (_QWORD *)*(a2 - 19);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0LL;
  v8 = (DWORD1(PopCurrentBroadcast) & 0x800000) != 0;
  if ( (PVOID)*(a2 - 18) != IopRootDeviceNode )
    v6 = *(a2 - 18);
  v9 = 0;
  v33 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140F0AA30 + 1, &LockHandle);
  v12 = (__int64 *)*a2;
  v13 = a1 + 48;
  v14 = 9LL * *((unsigned __int8 *)a2 + 56);
  if ( *(__int64 **)(*a2 + 8) != a2 || (v15 = (__int64 **)a2[1], *v15 != a2) )
LABEL_5:
    __fastfail(3u);
  *v15 = v12;
  v12[1] = (__int64)v15;
  if ( *(_BYTE *)(a1 + 464) )
  {
    v19 = a1 + 72 + 8 * v14;
    v20 = *(__int64 ***)(v19 + 8);
    if ( *v20 != (__int64 *)v19 )
      goto LABEL_5;
    *a2 = v19;
    a2[1] = (__int64)v20;
    *v20 = a2;
    *(_QWORD *)(v19 + 8) = a2;
    ++*(_DWORD *)(v13 + 8 * v14 + 20);
    while ( v4 )
    {
      LOBYTE(v10) = *((_BYTE *)a2 + 56);
      LOBYTE(v11) = v8;
      ready = PopReadyChildWake(
                v4 + 20,
                a1 + 48,
                v10,
                v11,
                LockHandle.LockQueue.Next,
                LockHandle.LockQueue.Lock,
                *(_QWORD *)&LockHandle.OldIrql);
      v4 = (_QWORD *)*v4;
      v30 = v9 + 1;
      if ( !ready )
        v30 = v9;
      v9 = v30;
    }
    v27 = (__int64 *)a2[2];
    while ( v27 != a2 + 2 )
    {
      LOBYTE(v10) = *((_BYTE *)a2 + 56);
      LOBYTE(v11) = v8;
      v26 = PopReadyChildWake(
              *(v27 - 1),
              a1 + 48,
              v10,
              v11,
              LockHandle.LockQueue.Next,
              LockHandle.LockQueue.Lock,
              *(_QWORD *)&LockHandle.OldIrql);
      v27 = (__int64 *)*v27;
      v28 = v9 + 1;
      if ( !v26 )
        v28 = v9;
      v9 = v28;
    }
  }
  else
  {
    v16 = a1 + 104 + 8 * v14;
    v17 = *(__int64 ***)(v16 + 8);
    if ( *v17 != (__int64 *)v16 )
      goto LABEL_5;
    *a2 = v16;
    a2[1] = (__int64)v17;
    *v17 = a2;
    *(_QWORD *)(v16 + 8) = a2;
    --*(_DWORD *)(v13 + 8 * v14 + 20);
    if ( v6 )
    {
      LOBYTE(v10) = *((_BYTE *)a2 + 56);
      LOBYTE(v11) = v8;
      v9 = (unsigned __int8)PopReadyParentSleep(
                              v6 + 160,
                              a1 + 48,
                              v10,
                              v11,
                              LockHandle.LockQueue.Next,
                              LockHandle.LockQueue.Lock,
                              *(_QWORD *)&LockHandle.OldIrql) != 0;
    }
    v18 = (__int64 *)a2[4];
    while ( v18 != a2 + 4 )
    {
      LOBYTE(v10) = *((_BYTE *)a2 + 56);
      LOBYTE(v11) = v8;
      v21 = PopReadyParentSleep(
              v18[5],
              a1 + 48,
              v10,
              v11,
              LockHandle.LockQueue.Next,
              LockHandle.LockQueue.Lock,
              *(_QWORD *)&LockHandle.OldIrql);
      v18 = (__int64 *)*v18;
      v22 = v9 + 1;
      if ( !v21 )
        v22 = v9;
      v9 = v22;
    }
    while ( v4 )
    {
      LOBYTE(v10) = v8;
      PopPrepChildWake(v4 + 20, a1 + 48, v10);
      v4 = (_QWORD *)*v4;
    }
    v23 = a2 + 2;
    for ( i = (__int64 *)a2[2]; i != v23; i = (__int64 *)*v31 )
    {
      LOBYTE(v10) = v8;
      PopPrepChildWake(*(i - 1), a1 + 48, v10);
    }
    v25 = a3;
    if ( a3 < 0 )
    {
      if ( a4 && *(_BYTE *)a1 == 3 )
      {
        PopDiagTraceDriverVeto(a4, a2);
        v25 = a3;
      }
      if ( !*(_BYTE *)(a1 + 466) && (v25 != -1073741637 || !*(_BYTE *)(a1 + 467)) && *(int *)(a1 + 448) >= 0 )
      {
        *(_DWORD *)(a1 + 448) = v25;
        *(_QWORD *)(a1 + 456) = a2[8];
        v33 = 1;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v33 )
  {
    KeSetEvent(*(PRKEVENT *)(a1 + 24), 0, 0);
  }
  else if ( v9 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 32), 0, v9, 0);
  }
}
