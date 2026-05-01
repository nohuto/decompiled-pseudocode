/*
 * XREFs of CrmGlobalsCleanup @ 0x180078688
 * Callers:
 *     PsmCrmCleanup @ 0x180077850 (PsmCrmCleanup.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     CrmGlobalsCleanupWorkers @ 0x180078774 (CrmGlobalsCleanupWorkers.c)
 *     CrmGlobalsRegistrationRemoveAll @ 0x1800788F4 (CrmGlobalsRegistrationRemoveAll.c)
 *     CrmGlobalsCleanupCrmRegistrations @ 0x18007B5B8 (CrmGlobalsCleanupCrmRegistrations.c)
 *     CrmGlobalsCleanupTelemetry @ 0x18007B660 (CrmGlobalsCleanupTelemetry.c)
 *     TlgUnregisterAggregateProvider @ 0x1800919FC (TlgUnregisterAggregateProvider.c)
 */

int CrmGlobalsCleanup()
{
  int result; // eax
  RPC_BINDING_VECTOR *BindingVector; // [rsp+30h] [rbp+8h] BYREF

  BindingVector = ::BindingVector;
  if ( ::BindingVector )
  {
    RpcEpUnregister(&unk_1800BF050, ::BindingVector, 0LL);
    RpcBindingVectorFree(&BindingVector);
    RpcServerUnregisterIf(&unk_1800BF050, 0LL, 0);
  }
  CrmGlobalsCleanupTelemetry(&CrmGlobals);
  CrmGlobalsCleanupCrmRegistrations(&CrmGlobals);
  CrmGlobalsRegistrationRemoveAll();
  if ( hObject )
  {
    CempLockAcquireExclusive((__int64)&unk_1800E9A60);
    SetEvent(hObject);
    dword_1800E9A68 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E9A60);
  }
  CrmGlobalsCleanupWorkers(&CrmGlobals);
  result = TlgUnregisterAggregateProvider();
  if ( hObject )
    return CloseHandle(hObject);
  return result;
}
