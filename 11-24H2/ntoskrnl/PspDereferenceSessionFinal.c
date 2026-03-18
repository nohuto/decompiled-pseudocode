/*
 * XREFs of PspDereferenceSessionFinal @ 0x14077BA80
 * Callers:
 *     PsDereferenceSession @ 0x140A07200 (PsDereferenceSession.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessListExclusive @ 0x1403494CC (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x140349ACC (PspLockProcessListExclusive.c)
 *     KeWaitForGate @ 0x140415DEC (KeWaitForGate.c)
 *     KeInitializeGate @ 0x1404892A8 (KeInitializeGate.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     ExpWnfDeleteScopeById @ 0x1408A9F88 (ExpWnfDeleteScopeById.c)
 */

void PspDereferenceSessionFinal()
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  unsigned __int64 CycleTime; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _KTHREAD *v6; // rax
  _LIST_ENTRY *p_ReadyListHead; // rbx
  struct _KTHREAD *v8; // rsi
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  void *v11; // rcx
  int v12; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  CycleTime = Process[1].CycleTime;
  PspLockProcessListExclusive((__int64)CurrentThread);
  *(_DWORD *)(CycleTime + 4) |= 2u;
  if ( *(_DWORD *)(CycleTime + 52) )
  {
    KeInitializeGate(CycleTime + 56, 0);
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    KeWaitForGate(CycleTime + 56, 18LL, 0);
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
    guard_dispatch_icall_no_overrides(0LL, v3, v4, v5);
  v12 = *(_DWORD *)(CycleTime + 8);
  v6 = KeGetCurrentThread();
  --v6->KernelApcDisable;
  ExpWnfDeleteScopeById(1LL, &v12);
  KeLeaveCriticalRegion();
  p_ReadyListHead = &Process[1].ReadyListHead;
  if ( Process[1].ReadyListHead.Flink )
  {
    v8 = KeGetCurrentThread();
    PspLockProcessListExclusive((__int64)v8);
    Flink = p_ReadyListHead->Flink;
    if ( p_ReadyListHead->Flink->Blink != p_ReadyListHead
      || (Blink = Process[1].ReadyListHead.Blink, Blink->Flink != p_ReadyListHead) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    PspUnlockProcessListExclusive((__int64)v8);
    p_ReadyListHead->Flink = 0LL;
  }
  v11 = *(void **)(CycleTime + 160);
  if ( v11 )
    ObfDereferenceObjectWithTag(v11, 0x73536D4Du);
  *(_QWORD *)(CycleTime + 160) = 0LL;
}
