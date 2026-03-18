/*
 * XREFs of PopCompleteNotifyTransitionCommon @ 0x1403D8F34
 * Callers:
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1403D77B8 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopSystemIrpCompletion @ 0x140B6F8E0 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     PopReadyChildWake @ 0x1403D7834 (PopReadyChildWake.c)
 *     PopReadyParentSleep @ 0x1403D78C4 (PopReadyParentSleep.c)
 *     KeReleaseSemaphore @ 0x1403D91C0 (KeReleaseSemaphore.c)
 *     PopPrepChildWake @ 0x140491A84 (PopPrepChildWake.c)
 *     PopDiagTraceDriverVeto @ 0x140B5F828 (PopDiagTraceDriverVeto.c)
 */

void __fastcall PopCompleteNotifyTransitionCommon(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  _QWORD *v4; // r14
  __int64 v6; // r13
  char v8; // r15
  LONG v9; // ebx
  __int64 v10; // r8
  __int64 *v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 **v14; // rax
  __int64 v15; // rax
  __int64 **v16; // rdx
  __int64 *v17; // r12
  __int64 v18; // rax
  __int64 **v19; // rdx
  bool v20; // al
  int v21; // ecx
  __int64 *v22; // r11
  __int64 *i; // r10
  int v24; // eax
  bool v25; // al
  __int64 *v26; // r14
  int v27; // ecx
  __int64 *v28; // r10
  bool ready; // al
  int v30; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  char v32; // [rsp+80h] [rbp+8h]

  v4 = (_QWORD *)*(a2 - 19);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0LL;
  v8 = (DWORD1(PopCurrentBroadcast) & 0x800000) != 0;
  if ( (PVOID)*(a2 - 18) != IopRootDeviceNode )
    v6 = *(a2 - 18);
  v9 = 0;
  v32 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140F0BDF0 + 1, &LockHandle);
  v11 = (__int64 *)*a2;
  v12 = a1 + 48;
  v13 = 9LL * *((unsigned __int8 *)a2 + 56);
  if ( *(__int64 **)(*a2 + 8) != a2 || (v14 = (__int64 **)a2[1], *v14 != a2) )
LABEL_5:
    __fastfail(3u);
  *v14 = v11;
  v11[1] = (__int64)v14;
  if ( *(_BYTE *)(a1 + 464) )
  {
    v18 = a1 + 72 + 8 * v13;
    v19 = *(__int64 ***)(v18 + 8);
    if ( *v19 != (__int64 *)v18 )
      goto LABEL_5;
    *a2 = v18;
    a2[1] = (__int64)v19;
    *v19 = a2;
    *(_QWORD *)(v18 + 8) = a2;
    ++*(_DWORD *)(v12 + 8 * v13 + 20);
    while ( v4 )
    {
      ready = PopReadyChildWake(v4 + 20, a1 + 48, *((_BYTE *)a2 + 56), v8);
      v4 = (_QWORD *)*v4;
      v30 = v9 + 1;
      if ( !ready )
        v30 = v9;
      v9 = v30;
    }
    v26 = (__int64 *)a2[2];
    while ( v26 != a2 + 2 )
    {
      v25 = PopReadyChildWake((__int64 *)*(v26 - 1), a1 + 48, *((_BYTE *)a2 + 56), v8);
      v26 = (__int64 *)*v26;
      v27 = v9 + 1;
      if ( !v25 )
        v27 = v9;
      v9 = v27;
    }
  }
  else
  {
    v15 = a1 + 104 + 8 * v13;
    v16 = *(__int64 ***)(v15 + 8);
    if ( *v16 != (__int64 *)v15 )
      goto LABEL_5;
    *a2 = v15;
    a2[1] = (__int64)v16;
    *v16 = a2;
    *(_QWORD *)(v15 + 8) = a2;
    --*(_DWORD *)(v12 + 8 * v13 + 20);
    if ( v6 )
      v9 = PopReadyParentSleep((__int64 *)(v6 + 160), a1 + 48, *((_BYTE *)a2 + 56), v8);
    v17 = (__int64 *)a2[4];
    while ( v17 != a2 + 4 )
    {
      v20 = PopReadyParentSleep((__int64 *)v17[5], a1 + 48, *((_BYTE *)a2 + 56), v8);
      v17 = (__int64 *)*v17;
      v21 = v9 + 1;
      if ( !v20 )
        v21 = v9;
      v9 = v21;
    }
    while ( v4 )
    {
      LOBYTE(v10) = v8;
      PopPrepChildWake(v4 + 20, a1 + 48, v10);
      v4 = (_QWORD *)*v4;
    }
    v22 = a2 + 2;
    for ( i = (__int64 *)a2[2]; i != v22; i = (__int64 *)*v28 )
    {
      LOBYTE(v10) = v8;
      PopPrepChildWake(*(i - 1), a1 + 48, v10);
    }
    v24 = a3;
    if ( a3 < 0 )
    {
      if ( a4 && *(_BYTE *)a1 == 3 )
      {
        PopDiagTraceDriverVeto(a4, a2);
        v24 = a3;
      }
      if ( !*(_BYTE *)(a1 + 466) && (v24 != -1073741637 || !*(_BYTE *)(a1 + 467)) && *(int *)(a1 + 448) >= 0 )
      {
        *(_DWORD *)(a1 + 448) = v24;
        *(_QWORD *)(a1 + 456) = a2[8];
        v32 = 1;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v32 )
  {
    KeSetEvent(*(PRKEVENT *)(a1 + 24), 0, 0);
  }
  else if ( v9 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 32), 0, v9, 0);
  }
}
