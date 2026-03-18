/*
 * XREFs of DpiGdiHandleAsyncDisplayCallout @ 0x140235D10
 * Callers:
 *     <none>
 * Callees:
 *     DpiGdiSyncDisplayCallout @ 0x1403F798C (DpiGdiSyncDisplayCallout.c)
 */

void __fastcall DpiGdiHandleAsyncDisplayCallout(PVOID IoObject, _BYTE *Context, PIO_WORKITEM IoWorkItem)
{
  _QWORD *v3; // rdi

  v3 = Context;
  LOBYTE(Context) = Context[8];
  DpiGdiSyncDisplayCallout(*v3, Context);
  IoFreeWorkItem(IoWorkItem);
  ExFreePoolWithTag(v3, 0);
}
