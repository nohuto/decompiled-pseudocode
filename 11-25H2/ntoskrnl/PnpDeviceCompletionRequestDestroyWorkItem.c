/*
 * XREFs of PnpDeviceCompletionRequestDestroyWorkItem @ 0x1404694D0
 * Callers:
 *     IopProcessWorkItem @ 0x140306B80 (IopProcessWorkItem.c)
 * Callees:
 *     IoFreeWorkItem @ 0x140469520 (IoFreeWorkItem.c)
 *     PnpDisableWatchdog @ 0x14096E4C0 (PnpDisableWatchdog.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
