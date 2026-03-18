/*
 * XREFs of IoCsqRemoveNextIrp @ 0x14024DC40
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

PIRP __stdcall IoCsqRemoveNextIrp(PIO_CSQ Csq, PVOID PeekContext)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v6; // r9
  __int64 v7; // rdx
  PIO_CSQ v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  IRP *v11; // rbx
  __int64 v12; // r9
  _QWORD *v13; // rax
  void (__stdcall *v14)(PKSPIN_LOCK, KIRQL); // r8
  void (__stdcall *CsqReleaseLock)(PKSPIN_LOCK, KIRQL); // r8
  KIRQL v17; // [rsp+30h] [rbp+8h] BYREF

  v17 = 0;
  Csq->ReservePointer = 0LL;
  guard_dispatch_icall_no_overrides(Csq, &v17, v2, v3);
  v7 = 0LL;
  v8 = Csq;
  do
  {
    v9 = guard_dispatch_icall_no_overrides(v8, v7, PeekContext, v6);
    v11 = (IRP *)v9;
    v8 = Csq;
    if ( !v9 )
    {
      CsqReleaseLock = (void (__stdcall *)(PKSPIN_LOCK, KIRQL))Csq->CsqReleaseLock;
      if ( CsqReleaseLock == KeReleaseSpinLock )
        KeReleaseSpinLock((PKSPIN_LOCK)&Csq->Type, v17);
      else
        guard_dispatch_icall_no_overrides(Csq, v17, CsqReleaseLock, v6);
      return 0LL;
    }
    v7 = v9;
  }
  while ( !_InterlockedExchange64((volatile __int64 *)(v9 + 104), 0LL) );
  guard_dispatch_icall_no_overrides(Csq, v9, v10, v6);
  v13 = v11->Tail.Overlay.DriverContext[3];
  if ( *(_DWORD *)v13 == 1 )
    v13[1] = 0LL;
  v11->Tail.Overlay.DriverContext[3] = 0LL;
  v14 = (void (__stdcall *)(PKSPIN_LOCK, KIRQL))Csq->CsqReleaseLock;
  if ( v14 == KeReleaseSpinLock )
    KeReleaseSpinLock((PKSPIN_LOCK)&Csq->Type, v17);
  else
    guard_dispatch_icall_no_overrides(Csq, v17, v14, v12);
  return v11;
}
