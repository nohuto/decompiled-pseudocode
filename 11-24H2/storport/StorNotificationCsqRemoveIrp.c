/*
 * XREFs of StorNotificationCsqRemoveIrp @ 0x140138750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorNotificationCsqRemoveIrp(char *Csq, PIRP Irp)
{
  volatile signed __int16 *v2; // rcx
  _LIST_ENTRY *p_ListEntry; // rax
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rdx

  if ( Csq )
  {
    if ( Irp )
    {
      v2 = (volatile signed __int16 *)(Csq - 80);
      if ( v2 )
      {
        p_ListEntry = &Irp->Tail.Overlay.ListEntry;
        Flink = Irp->Tail.Overlay.ListEntry.Flink;
        if ( (void **)Flink->Blink != &Irp->Tail.CompletionKey + 6
          || (Blink = Irp->Tail.Overlay.ListEntry.Blink, Blink->Flink != p_ListEntry) )
        {
          __fastfail(3u);
        }
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        _InterlockedDecrement16(v2 + 18);
      }
    }
  }
}
