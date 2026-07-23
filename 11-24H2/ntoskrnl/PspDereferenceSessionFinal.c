/*
 * XREFs of PspDereferenceSessionFinal @ 0x14077B930
 * Callers:
 *     PsDereferenceSession @ 0x140A03730 (PsDereferenceSession.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessListExclusive @ 0x1403C2F0C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403C350C (PspLockProcessListExclusive.c)
 *     KeInitializeGate @ 0x1404842C4 (KeInitializeGate.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     ExpWnfDeleteScopeById @ 0x1409001E8 (ExpWnfDeleteScopeById.c)
 */

void PspDereferenceSessionFinal()
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  unsigned __int64 CycleTime; // rdi
  __int64 v3; // rdx
  struct _KTHREAD *v4; // rax
  _LIST_ENTRY *p_ReadyListHead; // rbx
  struct _KTHREAD *v6; // rsi
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  void *v9; // rcx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  CycleTime = Process[1].CycleTime;
  PspLockProcessListExclusive((__int64)CurrentThread);
  *(_DWORD *)(CycleTime + 4) |= 2u;
  if ( *(_DWORD *)(CycleTime + 52) )
  {
    KeInitializeGate(CycleTime + 56, 0);
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    KeWaitForGate(CycleTime + 56, 18LL);
  }
  else
  {
    PspUnlockProcessListExclusive((__int64)CurrentThread);
  }
  if ( *(_QWORD *)(CycleTime + 40) )
  {
    KeSetEvent(*(PRKEVENT *)(CycleTime + 32), 1, 0);
    ObCloseHandle(*(HANDLE *)(CycleTime + 40), 0);
  }
  if ( *(_QWORD *)(CycleTime + 120) > 1uLL )
    guard_dispatch_icall_no_overrides(0LL, v3);
  v10 = *(_DWORD *)(CycleTime + 8);
  v4 = KeGetCurrentThread();
  --v4->KernelApcDisable;
  ExpWnfDeleteScopeById(1LL, &v10);
  KeLeaveCriticalRegion();
  p_ReadyListHead = &Process[1].ReadyListHead;
  if ( Process[1].ReadyListHead.Flink )
  {
    v6 = KeGetCurrentThread();
    PspLockProcessListExclusive((__int64)v6);
    Flink = p_ReadyListHead->Flink;
    if ( p_ReadyListHead->Flink->Blink != p_ReadyListHead
      || (Blink = Process[1].ReadyListHead.Blink, Blink->Flink != p_ReadyListHead) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    PspUnlockProcessListExclusive((__int64)v6);
    p_ReadyListHead->Flink = 0LL;
  }
  v9 = *(void **)(CycleTime + 160);
  if ( v9 )
    ObfDereferenceObjectWithTag(v9, 0x73536D4Du);
  *(_QWORD *)(CycleTime + 160) = 0LL;
}
