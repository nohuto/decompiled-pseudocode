/*
 * XREFs of PiDqIrpComplete @ 0x1409F2684
 * Callers:
 *     PiDqQueryCompletePendedIrp @ 0x1408D1708 (PiDqQueryCompletePendedIrp.c)
 *     PiDqIrpQueryGetResult @ 0x1409F1D48 (PiDqIrpQueryGetResult.c)
 *     PiDqIrpQueryCreate @ 0x1409F2380 (PiDqIrpQueryCreate.c)
 * Callees:
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 */

void __fastcall PiDqIrpComplete(IRP *a1, int a2, unsigned int a3, _OWORD *a4)
{
  ULONG_PTR v4; // rax
  _OWORD *UserBuffer; // rax

  v4 = 0LL;
  if ( a2 >= 0 )
  {
    if ( a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4653063 )
      UserBuffer = a1->UserBuffer;
    else
      UserBuffer = &a1->AssociatedIrp.MasterIrp->Type;
    *UserBuffer = *a4;
    v4 = a3;
  }
  a1->IoStatus.Information = v4;
  a1->IoStatus.Status = a2;
  IofCompleteRequest(a1, 0);
}
