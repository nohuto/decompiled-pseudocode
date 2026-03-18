/*
 * XREFs of UsbhInsertPdoIdleIrp @ 0x1C00586E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UsbhInsertPdoIdleIrp(struct _IO_CSQ *Csq, PIRP Irp)
{
  _LIST_ENTRY *ReservePointer; // rax
  void (__fastcall **p_CsqCompleteCanceledIrp)(_IO_CSQ *, _IRP *); // rcx
  _LIST_ENTRY *p_ListEntry; // rdx

  ReservePointer = (_LIST_ENTRY *)Csq[-1].ReservePointer;
  p_CsqCompleteCanceledIrp = &Csq[-1].CsqCompleteCanceledIrp;
  p_ListEntry = &Irp->Tail.Overlay.ListEntry;
  if ( (void (__fastcall **)(_IO_CSQ *, _IRP *))ReservePointer->Flink != p_CsqCompleteCanceledIrp )
    __fastfail(3u);
  p_ListEntry->Flink = (_LIST_ENTRY *)p_CsqCompleteCanceledIrp;
  p_ListEntry->Blink = ReservePointer;
  ReservePointer->Flink = p_ListEntry;
  p_CsqCompleteCanceledIrp[1] = (void (__fastcall *)(_IO_CSQ *, _IRP *))p_ListEntry;
}
