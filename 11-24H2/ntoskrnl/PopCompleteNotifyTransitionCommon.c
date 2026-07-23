/*
 * XREFs of PopCompleteNotifyTransitionCommon @ 0x1402F2208
 * Callers:
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1402F1298 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopSystemIrpCompletion @ 0x140B71950 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     PopPrepChildWake @ 0x1402F0AEC (PopPrepChildWake.c)
 *     PopReadyChildWake @ 0x1402F1314 (PopReadyChildWake.c)
 *     PopReadyParentSleep @ 0x1402F13A4 (PopReadyParentSleep.c)
 *     KeReleaseSemaphore @ 0x1402F2490 (KeReleaseSemaphore.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopDiagTraceDriverVeto @ 0x140B618A8 (PopDiagTraceDriverVeto.c)
 */

void __fastcall PopCompleteNotifyTransitionCommon(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  _QWORD *v4; // r14
  __int64 v6; // r13
  char v8; // r15
  LONG v9; // ebx
  __int64 *v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 **v13; // rax
  __int64 v14; // rax
  __int64 **v15; // rdx
  __int64 *v16; // r12
  __int64 v17; // rax
  __int64 **v18; // rdx
  bool v19; // al
  int v20; // ecx
  __int64 *v21; // r11
  __int64 *i; // r10
  int v23; // eax
  bool v24; // al
  __int64 *v25; // r14
  int v26; // ecx
  __int64 *v27; // r10
  bool ready; // al
  int v29; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  char v31; // [rsp+80h] [rbp+8h]

  v4 = (_QWORD *)*(a2 - 19);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0LL;
  v8 = (DWORD1(PopCurrentBroadcast) & 0x800000) != 0;
  if ( (PVOID)*(a2 - 18) != IopRootDeviceNode )
    v6 = *(a2 - 18);
  v9 = 0;
  v31 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140F0B910 + 1, &LockHandle);
  v10 = (__int64 *)*a2;
  v11 = a1 + 48;
  v12 = 9LL * *((unsigned __int8 *)a2 + 56);
  if ( *(__int64 **)(*a2 + 8) != a2 || (v13 = (__int64 **)a2[1], *v13 != a2) )
LABEL_5:
    __fastfail(3u);
  *v13 = v10;
  v10[1] = (__int64)v13;
  if ( *(_BYTE *)(a1 + 464) )
  {
    v17 = a1 + 72 + 8 * v12;
    v18 = *(__int64 ***)(v17 + 8);
    if ( *v18 != (__int64 *)v17 )
      goto LABEL_5;
    *a2 = v17;
    a2[1] = (__int64)v18;
    *v18 = a2;
    *(_QWORD *)(v17 + 8) = a2;
    ++*(_DWORD *)(v11 + 8 * v12 + 20);
    while ( v4 )
    {
      ready = PopReadyChildWake(v4 + 20, a1 + 48, *((_BYTE *)a2 + 56), v8);
      v4 = (_QWORD *)*v4;
      v29 = v9 + 1;
      if ( !ready )
        v29 = v9;
      v9 = v29;
    }
    v25 = (__int64 *)a2[2];
    while ( v25 != a2 + 2 )
    {
      v24 = PopReadyChildWake((__int64 *)*(v25 - 1), a1 + 48, *((_BYTE *)a2 + 56), v8);
      v25 = (__int64 *)*v25;
      v26 = v9 + 1;
      if ( !v24 )
        v26 = v9;
      v9 = v26;
    }
  }
  else
  {
    v14 = a1 + 104 + 8 * v12;
    v15 = *(__int64 ***)(v14 + 8);
    if ( *v15 != (__int64 *)v14 )
      goto LABEL_5;
    *a2 = v14;
    a2[1] = (__int64)v15;
    *v15 = a2;
    *(_QWORD *)(v14 + 8) = a2;
    --*(_DWORD *)(v11 + 8 * v12 + 20);
    if ( v6 )
      v9 = PopReadyParentSleep((__int64 *)(v6 + 160), a1 + 48, *((_BYTE *)a2 + 56), v8);
    v16 = (__int64 *)a2[4];
    while ( v16 != a2 + 4 )
    {
      v19 = PopReadyParentSleep((__int64 *)v16[5], a1 + 48, *((_BYTE *)a2 + 56), v8);
      v16 = (__int64 *)*v16;
      v20 = v9 + 1;
      if ( !v19 )
        v20 = v9;
      v9 = v20;
    }
    while ( v4 )
    {
      PopPrepChildWake(v4 + 20, a1 + 48, v8);
      v4 = (_QWORD *)*v4;
    }
    v21 = a2 + 2;
    for ( i = (__int64 *)a2[2]; i != v21; i = (__int64 *)*v27 )
      PopPrepChildWake((__int64 *)*(i - 1), a1 + 48, v8);
    v23 = a3;
    if ( a3 < 0 )
    {
      if ( a4 && *(_BYTE *)a1 == 3 )
      {
        PopDiagTraceDriverVeto(a4, a2);
        v23 = a3;
      }
      if ( !*(_BYTE *)(a1 + 466) && (v23 != -1073741637 || !*(_BYTE *)(a1 + 467)) && *(int *)(a1 + 448) >= 0 )
      {
        *(_DWORD *)(a1 + 448) = v23;
        *(_QWORD *)(a1 + 456) = a2[8];
        v31 = 1;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v31 )
  {
    KeSetEvent(*(PRKEVENT *)(a1 + 24), 0, 0);
  }
  else if ( v9 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 32), 0, v9, 0);
  }
}
