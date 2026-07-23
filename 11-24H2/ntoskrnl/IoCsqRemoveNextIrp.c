/*
 * XREFs of IoCsqRemoveNextIrp @ 0x14027E250
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

PIRP __stdcall IoCsqRemoveNextIrp(PIO_CSQ Csq, PVOID PeekContext)
{
  __int64 v3; // rdx
  PIO_CSQ v4; // rcx
  __int64 v5; // rax
  IRP *v6; // rbx
  _QWORD *v7; // rax
  KIRQL v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  Csq->ReservePointer = 0LL;
  guard_dispatch_icall_no_overrides(Csq, &v9);
  v3 = 0LL;
  v4 = Csq;
  do
  {
    v5 = guard_dispatch_icall_no_overrides(v4, v3);
    v6 = (IRP *)v5;
    v4 = Csq;
    if ( !v5 )
    {
      if ( (void (__stdcall *)(PKSPIN_LOCK, KIRQL))Csq->CsqReleaseLock == KeReleaseSpinLock )
        KeReleaseSpinLock((PKSPIN_LOCK)&Csq->Type, v9);
      else
        guard_dispatch_icall_no_overrides(Csq, v9);
      return 0LL;
    }
    v3 = v5;
  }
  while ( !_InterlockedExchange64((volatile __int64 *)(v5 + 104), 0LL) );
  guard_dispatch_icall_no_overrides(Csq, v5);
  v7 = v6->Tail.Overlay.DriverContext[3];
  if ( *(_DWORD *)v7 == 1 )
    v7[1] = 0LL;
  v6->Tail.Overlay.DriverContext[3] = 0LL;
  if ( (void (__stdcall *)(PKSPIN_LOCK, KIRQL))Csq->CsqReleaseLock == KeReleaseSpinLock )
    KeReleaseSpinLock((PKSPIN_LOCK)&Csq->Type, v9);
  else
    guard_dispatch_icall_no_overrides(Csq, v9);
  return v6;
}
