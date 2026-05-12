/*
 * XREFs of StorNotificationCsqInsertIrp @ 0x140138680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorNotificationCsqInsertIrp(struct _IO_CSQ *Csq, PIRP Irp)
{
  void (__fastcall **p_CsqCompleteCanceledIrp)(_IO_CSQ *, _IRP *); // rax
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *v4; // r8

  if ( Csq )
  {
    if ( Irp )
    {
      p_CsqCompleteCanceledIrp = &Csq[-2].CsqCompleteCanceledIrp;
      if ( Csq != (struct _IO_CSQ *)80 )
      {
        p_ListEntry = &Irp->Tail.Overlay.ListEntry;
        v4 = (_LIST_ENTRY *)p_CsqCompleteCanceledIrp[20];
        if ( (void (__fastcall **)(_IO_CSQ *, _IRP *))v4->Flink != p_CsqCompleteCanceledIrp + 19 )
          __fastfail(3u);
        p_ListEntry->Flink = (_LIST_ENTRY *)(p_CsqCompleteCanceledIrp + 19);
        Irp->Tail.Overlay.ListEntry.Blink = v4;
        v4->Flink = p_ListEntry;
        p_CsqCompleteCanceledIrp[20] = (void (__fastcall *)(_IO_CSQ *, _IRP *))p_ListEntry;
        _InterlockedIncrement16((volatile signed __int16 *)p_CsqCompleteCanceledIrp + 18);
      }
    }
  }
}
