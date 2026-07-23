/*
 * XREFs of IoCsqInsertIrpEx @ 0x14043D1A0
 * Callers:
 *     IoCsqInsertIrp @ 0x14043D180 (IoCsqInsertIrp.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall IoCsqInsertIrpEx(PIO_CSQ Csq, PIRP Irp, PIO_CSQ_IRP_CONTEXT Context, PVOID InsertContext)
{
  NTSTATUS v4; // esi
  PIO_CSQ v8; // rcx
  __int64 v10; // rdx
  unsigned __int8 v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v11 = 0;
  if ( Context )
  {
    Irp->Tail.Overlay.DriverContext[3] = Context;
    Context->Irp = Irp;
    Context->Csq = Csq;
    Context->Type = 1;
  }
  else
  {
    Irp->Tail.Overlay.DriverContext[3] = Csq;
  }
  Csq->ReservePointer = 0LL;
  guard_dispatch_icall_no_overrides(Csq, &v11);
  if ( Csq->Type == 3 )
  {
    v4 = guard_dispatch_icall_no_overrides(Csq, Irp);
    if ( v4 < 0 )
      goto LABEL_6;
  }
  else
  {
    guard_dispatch_icall_no_overrides(Csq, Irp);
  }
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)IopCsqCancelRoutine);
  if ( !Irp->Cancel )
  {
LABEL_6:
    v8 = Csq;
LABEL_7:
    guard_dispatch_icall_no_overrides(v8, v11);
    return v4;
  }
  v8 = Csq;
  if ( !_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
    goto LABEL_7;
  guard_dispatch_icall_no_overrides(Csq, Irp);
  if ( Context )
    Context->Irp = 0LL;
  v10 = v11;
  Irp->Tail.Overlay.DriverContext[3] = 0LL;
  guard_dispatch_icall_no_overrides(Csq, v10);
  guard_dispatch_icall_no_overrides(Csq, Irp);
  return v4;
}
