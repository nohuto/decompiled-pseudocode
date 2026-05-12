/*
 * XREFs of StorNotificationCsqPeekNextIrp @ 0x1401386D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_LIST_ENTRY **__fastcall StorNotificationCsqPeekNextIrp(PIO_CSQ Csq, PIRP Irp, PVOID PeekContext)
{
  __int64 v3; // r8
  void (__fastcall **p_CsqInsertIrp)(_IO_CSQ *, _IRP *); // rax

  v3 = 0LL;
  if ( Csq )
  {
    if ( Csq != (PIO_CSQ)80 )
    {
      p_CsqInsertIrp = &Csq[1].CsqInsertIrp;
      if ( (char *)*p_CsqInsertIrp != (char *)p_CsqInsertIrp )
      {
        if ( Irp )
          return &Irp->Tail.Overlay.ListEntry.Flink[-11].Blink;
        else
          return (_LIST_ENTRY **)((char *)*p_CsqInsertIrp - 168);
      }
    }
  }
  return (_LIST_ENTRY **)v3;
}
