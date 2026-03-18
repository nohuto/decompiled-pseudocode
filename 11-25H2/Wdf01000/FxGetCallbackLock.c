/*
 * XREFs of FxGetCallbackLock @ 0x14006C298
 * Callers:
 *     imp_WdfObjectAcquireLock @ 0x14006C130 (imp_WdfObjectAcquireLock.c)
 *     imp_WdfObjectReleaseLock @ 0x14006C1F0 (imp_WdfObjectReleaseLock.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

FxCallbackLock *__fastcall FxGetCallbackLock(FxObject *Object)
{
  FxObject_vtbl *v1; // rax
  FxQueryInterfaceParams params; // [rsp+20h] [rbp-18h] BYREF
  IFxHasCallbacks *ihcb; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)&params.Type = 5379LL;
  params.Object = (void **)&ihcb;
  v1 = Object->__vftable;
  ihcb = 0LL;
  if ( v1->QueryInterface(Object, &params) < 0 )
    return 0LL;
  else
    return ihcb->GetCallbackLockPtr(ihcb, 0LL);
}
