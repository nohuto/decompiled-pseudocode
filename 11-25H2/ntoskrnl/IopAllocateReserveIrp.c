/*
 * XREFs of IopAllocateReserveIrp @ 0x14035D8C8
 * Callers:
 *     IopAllocateIrpMustSucceed @ 0x140253750 (IopAllocateIrpMustSucceed.c)
 *     MiIssueAsynchronousFlush @ 0x14035B6FC (MiIssueAsynchronousFlush.c)
 *     IoAsynchronousPageWrite @ 0x14035BA6C (IoAsynchronousPageWrite.c)
 *     MiSynchronousPageWrite @ 0x14035C250 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14035C508 (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14035C7E0 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14035CA60 (IoPageReadEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IoInitializeIrp @ 0x14043ECB0 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x140454288 (IopInitActivityIdIrp.c)
 */

PIRP __fastcall IopAllocateReserveIrp(LARGE_INTEGER a1, char a2, int a3)
{
  CCHAR v3; // di
  __int16 v4; // si
  PIRP v6; // rcx
  bool v7; // zf
  PIRP v8; // rcx
  PIRP v9; // rcx
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout = a1;
  if ( a2 > byte_140F8C0C0 )
    return 0LL;
  v3 = a2 + 2;
  v4 = (char)(a2 + 2);
  if ( !a3 )
  {
    while ( _InterlockedExchange(&dword_140F8BFE8, 1) == 1 )
      KeWaitForSingleObject(&word_140F8BFF0, Executive, 0, 0, 0LL);
    IoInitializeIrp(IopReserveIrps, 8 * (8 * v3 + v4) + 208, v3);
    IopReserveIrps->AllocationFlags = 33;
    v6 = IopReserveIrps;
    IopReserveIrps->Tail.Overlay.CurrentStackLocation -= 2;
    v6->CurrentLocation -= 2;
    v6->StackCount -= 2;
    v7 = (IopIrpExtensionStatus & 1) == 0;
    *((_QWORD *)&v6->Tail.CompletionKey + 10) = v6->Tail.Overlay.CurrentStackLocation;
    if ( !v7 && (IopFunctionPointerMask & 4) != 0 )
      IopInitActivityIdIrp(IopReserveIrps);
    return IopReserveIrps;
  }
  if ( a3 == 1 )
  {
    while ( _InterlockedExchange(&dword_140F8C010, 1) == 1 )
      KeWaitForSingleObject(&word_140F8C018, Executive, 0, 0, 0LL);
    IoInitializeIrp(Irp, 72 * v3 + 208, v3);
    Irp->AllocationFlags = 33;
    v8 = Irp;
    Irp->Tail.Overlay.CurrentStackLocation -= 2;
    v8->CurrentLocation -= 2;
    v8->StackCount -= 2;
    v7 = (IopIrpExtensionStatus & 1) == 0;
    *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
    if ( !v7 && (IopFunctionPointerMask & 4) != 0 )
      IopInitActivityIdIrp(Irp);
    return Irp;
  }
  if ( a3 != 3 )
    return 0LL;
  Timeout.QuadPart = 0LL;
  while ( _InterlockedExchange(&dword_140F8C038, 1) == 1 )
  {
    Timeout.QuadPart = -50000000LL;
    if ( KeWaitForSingleObject(&stru_140F8C040, Executive, 0, 0, &Timeout) == 258 )
      return 0LL;
  }
  IoInitializeIrp(qword_140F8C030, 72 * v3 + 208, v3);
  qword_140F8C030->AllocationFlags = 33;
  v9 = qword_140F8C030;
  qword_140F8C030->Tail.Overlay.CurrentStackLocation -= 2;
  v9->CurrentLocation -= 2;
  v9->StackCount -= 2;
  v7 = (IopIrpExtensionStatus & 1) == 0;
  *((_QWORD *)&v9->Tail.CompletionKey + 10) = v9->Tail.Overlay.CurrentStackLocation;
  if ( !v7 && (IopFunctionPointerMask & 4) != 0 )
    IopInitActivityIdIrp(qword_140F8C030);
  return qword_140F8C030;
}
