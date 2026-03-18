/*
 * XREFs of IoCsqInsertIrpEx @ 0x140444FF0
 * Callers:
 *     IoCsqInsertIrp @ 0x140444FD0 (IoCsqInsertIrp.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall IoCsqInsertIrpEx(PIO_CSQ Csq, PIRP Irp, PIO_CSQ_IRP_CONTEXT Context, PVOID InsertContext)
{
  NTSTATUS v4; // esi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  PIO_CSQ v13; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 v20; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v20 = 0;
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
  guard_dispatch_icall_no_overrides(Csq, &v20, Context, InsertContext);
  if ( Csq->Type == 3 )
  {
    v4 = guard_dispatch_icall_no_overrides(Csq, Irp, InsertContext, v10);
    if ( v4 < 0 )
      goto LABEL_6;
  }
  else
  {
    guard_dispatch_icall_no_overrides(Csq, Irp, v9, v10);
  }
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)IopCsqCancelRoutine);
  if ( !Irp->Cancel )
  {
LABEL_6:
    v13 = Csq;
LABEL_7:
    guard_dispatch_icall_no_overrides(v13, v20, v11, v12);
    return v4;
  }
  v13 = Csq;
  if ( !_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
    goto LABEL_7;
  guard_dispatch_icall_no_overrides(Csq, Irp, v11, v12);
  if ( Context )
    Context->Irp = 0LL;
  v17 = v20;
  Irp->Tail.Overlay.DriverContext[3] = 0LL;
  guard_dispatch_icall_no_overrides(Csq, v17, v15, v16);
  guard_dispatch_icall_no_overrides(Csq, Irp, v18, v19);
  return v4;
}
