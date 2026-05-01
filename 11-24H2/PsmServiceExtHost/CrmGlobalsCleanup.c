/*
 * XREFs of CrmGlobalsCleanup @ 0x1800786E8
 * Callers:
 *     PsmCrmCleanup @ 0x1800778B0 (PsmCrmCleanup.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     CrmGlobalsCleanupWorkers @ 0x1800787D4 (CrmGlobalsCleanupWorkers.c)
 *     CrmGlobalsRegistrationRemoveAll @ 0x180078954 (CrmGlobalsRegistrationRemoveAll.c)
 *     CrmGlobalsCleanupCrmRegistrations @ 0x18007B618 (CrmGlobalsCleanupCrmRegistrations.c)
 *     CrmGlobalsCleanupTelemetry @ 0x18007B6C0 (CrmGlobalsCleanupTelemetry.c)
 *     TlgUnregisterAggregateProvider @ 0x180091E5C (TlgUnregisterAggregateProvider.c)
 */

int CrmGlobalsCleanup()
{
  int result; // eax
  RPC_BINDING_VECTOR *BindingVector; // [rsp+30h] [rbp+8h] BYREF

  BindingVector = ::BindingVector;
  if ( ::BindingVector )
  {
    RpcEpUnregister(&unk_1800BFF30, ::BindingVector, 0LL);
    RpcBindingVectorFree(&BindingVector);
    RpcServerUnregisterIf(&unk_1800BFF30, 0LL, 0);
  }
  CrmGlobalsCleanupTelemetry(&CrmGlobals);
  CrmGlobalsCleanupCrmRegistrations(&CrmGlobals);
  CrmGlobalsRegistrationRemoveAll();
  if ( hObject )
  {
    CempLockAcquireExclusive((__int64)&unk_1800EAA00);
    SetEvent(hObject);
    dword_1800EAA08 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800EAA00);
  }
  CrmGlobalsCleanupWorkers(&CrmGlobals);
  result = TlgUnregisterAggregateProvider();
  if ( hObject )
    return CloseHandle(hObject);
  return result;
}
