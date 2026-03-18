/*
 * XREFs of PnpDeviceCompletionRequestDestroyWorkItem @ 0x140467C90
 * Callers:
 *     IopProcessWorkItem @ 0x1402A2410 (IopProcessWorkItem.c)
 * Callees:
 *     IoFreeWorkItem @ 0x140467CE0 (IoFreeWorkItem.c)
 *     PnpDisableWatchdog @ 0x1409EFFB0 (PnpDisableWatchdog.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
