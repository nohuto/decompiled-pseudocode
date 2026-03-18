/*
 * XREFs of ?PopPowerTransitionRecord@FxWaitLockInternal@@QEAAXXZ @ 0x14002FDFC
 * Callers:
 *     ?_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z @ 0x140030130 (-_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxWaitLockInternal::PopPowerTransitionRecord(FxWaitLockInternal *this)
{
  _PO_TRANSITION_RECORD_REQUEST record; // [rsp+30h] [rbp-48h] BYREF

  memset(&record, 0, sizeof(record));
  record.Header.InternalType = PowerInternalManageTransitionStateRecord;
  record.Operation = RemoveTransitionRecord;
  ZwPowerInformation(PowerInformationInternal, &record, 0x38u, 0LL, 0);
}
