/*
 * XREFs of IoCsqRemoveIrp @ 0x1404806A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

PIRP __stdcall IoCsqRemoveIrp(PIO_CSQ Csq, PIO_CSQ_IRP_CONTEXT Context)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  PIRP Irp; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v14; // [rsp+30h] [rbp+8h] BYREF

  Csq->ReservePointer = 0LL;
  v14 = 0;
  guard_dispatch_icall_no_overrides(Csq, &v14, v2, v3);
  Irp = Context->Irp;
  if ( Irp && _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
  {
    guard_dispatch_icall_no_overrides(Csq, Irp, v7, v8);
    Context->Irp = 0LL;
    Irp->Tail.Overlay.DriverContext[3] = 0LL;
    LOBYTE(v10) = v14;
    guard_dispatch_icall_no_overrides(Csq, v10, v11, v12);
    return Irp;
  }
  else
  {
    LOBYTE(v6) = v14;
    guard_dispatch_icall_no_overrides(Csq, v6, v7, v8);
    return 0LL;
  }
}
