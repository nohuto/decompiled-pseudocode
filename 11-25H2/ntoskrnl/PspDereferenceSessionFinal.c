/*
 * XREFs of PspDereferenceSessionFinal @ 0x14076BEE0
 * Callers:
 *     PsDereferenceSession @ 0x140A05104 (PsDereferenceSession.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessListExclusive @ 0x1403D6E4C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403D744C (PspLockProcessListExclusive.c)
 *     KeWaitForGate @ 0x140418844 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x140489B40 (KeInitializeGate.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExpWnfDeleteScopeById @ 0x1408E18E8 (ExpWnfDeleteScopeById.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 */

void PspDereferenceSessionFinal()
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  unsigned __int64 CycleTime; // rdi
  struct _KTHREAD *v3; // rax
  _LIST_ENTRY *p_ReadyListHead; // rbx
  struct _KTHREAD *v5; // rsi
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  void *v8; // rcx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  CycleTime = Process[1].CycleTime;
  PspLockProcessListExclusive((__int64)CurrentThread);
  *(_DWORD *)(CycleTime + 4) |= 2u;
  if ( *(_DWORD *)(CycleTime + 52) )
  {
    KeInitializeGate(CycleTime + 56, 0);
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    KeWaitForGate(CycleTime + 56, 18, 0);
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
    guard_dispatch_icall_no_overrides(0LL);
  v9 = *(_DWORD *)(CycleTime + 8);
  v3 = KeGetCurrentThread();
  --v3->KernelApcDisable;
  ExpWnfDeleteScopeById(1LL, &v9);
  KeLeaveCriticalRegion();
  p_ReadyListHead = &Process[1].ReadyListHead;
  if ( Process[1].ReadyListHead.Flink )
  {
    v5 = KeGetCurrentThread();
    PspLockProcessListExclusive((__int64)v5);
    Flink = p_ReadyListHead->Flink;
    if ( p_ReadyListHead->Flink->Blink != p_ReadyListHead
      || (Blink = Process[1].ReadyListHead.Blink, Blink->Flink != p_ReadyListHead) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    PspUnlockProcessListExclusive((__int64)v5);
    p_ReadyListHead->Flink = 0LL;
  }
  v8 = *(void **)(CycleTime + 160);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x73536D4Du);
  *(_QWORD *)(CycleTime + 160) = 0LL;
}
