/*
 * XREFs of ?PushPowerTransitionRecord@FxWaitLockInternal@@QEAAJXZ @ 0x1400188BC
 * Callers:
 *     ?_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z @ 0x140018810 (-_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall FxWaitLockInternal::PushPowerTransitionRecord(FxWaitLockInternal *this)
{
  _PO_TRANSITION_RECORD_REQUEST record; // [rsp+30h] [rbp-48h] BYREF

  record.Header.Version = 0;
  *((_DWORD *)&record.Operation + 1) = 0;
  *((_DWORD *)&record.RecordType + 1) = 0;
  record.Operation = AddTransitionRecord;
  record.Header.InternalType = PowerInternalManageTransitionStateRecord;
  record.Thread = KeGetCurrentThread();
  record.Process = IoGetCurrentProcess();
  record.RecordType = PoTransitionRecordWithResolverCallback;
  record.u.ResolverCallback = FxPowerTransitionRecordCallback;
  record.Context = this;
  return ZwPowerInformation(PowerInformationInternal, &record, 0x38u, 0LL, 0);
}
