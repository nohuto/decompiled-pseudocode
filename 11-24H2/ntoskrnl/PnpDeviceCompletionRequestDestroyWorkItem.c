/*
 * XREFs of PnpDeviceCompletionRequestDestroyWorkItem @ 0x140460640
 * Callers:
 *     IopProcessWorkItem @ 0x1402D1B40 (IopProcessWorkItem.c)
 * Callees:
 *     IoFreeWorkItem @ 0x140460690 (IoFreeWorkItem.c)
 *     PnpDisableWatchdog @ 0x1409ED880 (PnpDisableWatchdog.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeviceCompletionRequestDestroyWorkItem(PVOID IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  if ( Context[8] )
  {
    PnpDisableWatchdog();
    Context[8] = 0LL;
  }
  IoFreeWorkItem(IoWorkItem);
  ExFreePoolWithTag(Context, 0x31706E50u);
}
