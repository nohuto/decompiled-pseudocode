/*
 * XREFs of IopAllocateReserveIrp @ 0x140374518
 * Callers:
 *     IopAllocateIrpMustSucceed @ 0x140253D60 (IopAllocateIrpMustSucceed.c)
 *     MiIssueAsynchronousFlush @ 0x1403724FC (MiIssueAsynchronousFlush.c)
 *     IoAsynchronousPageWrite @ 0x14037286C (IoAsynchronousPageWrite.c)
 *     MiSynchronousPageWrite @ 0x140372F44 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x1403731E8 (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x1403734C0 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x140373740 (IoPageReadEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IopIsActivityTracingEnabled @ 0x140375090 (IopIsActivityTracingEnabled.c)
 *     IoInitializeIrp @ 0x14043F410 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x140454AF0 (IopInitActivityIdIrp.c)
 */

PIRP __fastcall IopAllocateReserveIrp(LARGE_INTEGER a1, char a2, int a3)
{
  CCHAR v3; // di
  __int16 v4; // si
  PIRP v6; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  PIRP v8; // rcx
  struct _IO_STACK_LOCATION *v9; // rax
  PIRP v10; // rcx
  struct _IO_STACK_LOCATION *v11; // rax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout = a1;
  if ( a2 > byte_140F8C840 )
    return 0LL;
  v3 = a2 + 2;
  v4 = (char)(a2 + 2);
  if ( !a3 )
  {
    while ( _InterlockedExchange(&dword_140F8C768, 1) == 1 )
      KeWaitForSingleObject(&word_140F8C770, Executive, 0, 0, 0LL);
    IoInitializeIrp(IopReserveIrps, 8 * (8 * v3 + v4) + 208, v3);
    IopReserveIrps->AllocationFlags = 33;
    v6 = IopReserveIrps;
    IopReserveIrps->Tail.Overlay.CurrentStackLocation -= 2;
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    v6->CurrentLocation -= 2;
    v6->StackCount -= 2;
    *((_QWORD *)&v6->Tail.CompletionKey + 10) = CurrentStackLocation;
    if ( (unsigned __int8)IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(IopReserveIrps);
    return IopReserveIrps;
  }
  if ( a3 == 1 )
  {
    while ( _InterlockedExchange(&dword_140F8C790, 1) == 1 )
      KeWaitForSingleObject(&word_140F8C798, Executive, 0, 0, 0LL);
    IoInitializeIrp(Irp, 72 * v3 + 208, v3);
    Irp->AllocationFlags = 33;
    v8 = Irp;
    Irp->Tail.Overlay.CurrentStackLocation -= 2;
    v9 = v8->Tail.Overlay.CurrentStackLocation;
    v8->CurrentLocation -= 2;
    v8->StackCount -= 2;
    *((_QWORD *)&v8->Tail.CompletionKey + 10) = v9;
    if ( (unsigned __int8)IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(Irp);
    return Irp;
  }
  if ( a3 != 3 )
    return 0LL;
  Timeout.QuadPart = 0LL;
  while ( _InterlockedExchange(&dword_140F8C7B8, 1) == 1 )
  {
    Timeout.QuadPart = -50000000LL;
    if ( KeWaitForSingleObject(&stru_140F8C7C0, Executive, 0, 0, &Timeout) == 258 )
      return 0LL;
  }
  IoInitializeIrp(qword_140F8C7B0, 72 * v3 + 208, v3);
  qword_140F8C7B0->AllocationFlags = 33;
  v10 = qword_140F8C7B0;
  qword_140F8C7B0->Tail.Overlay.CurrentStackLocation -= 2;
  v11 = v10->Tail.Overlay.CurrentStackLocation;
  v10->CurrentLocation -= 2;
  v10->StackCount -= 2;
  *((_QWORD *)&v10->Tail.CompletionKey + 10) = v11;
  if ( (unsigned __int8)IopIsActivityTracingEnabled() )
    IopInitActivityIdIrp(qword_140F8C7B0);
  return qword_140F8C7B0;
}
