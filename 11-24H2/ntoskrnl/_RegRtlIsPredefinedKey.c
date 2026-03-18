/*
 * XREFs of _RegRtlIsPredefinedKey @ 0x140926654
 * Callers:
 *     _RegRtlQueryKeyPathName @ 0x1408211B8 (_RegRtlQueryKeyPathName.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1408B16A8 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _RegRtlCreateTreeTransacted @ 0x1409261A4 (_RegRtlCreateTreeTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x140926504 (_RegRtlCreateKeyTransacted.c)
 *     _PnpSetPropertyWorker @ 0x14099197C (_PnpSetPropertyWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x140A547D0 (_CmAddDeviceToContainerWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140A60638 (_CmCreateOrdinalInstanceKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall RegRtlIsPredefinedKey(__int64 a1)
{
  return (unsigned __int64)(a1 - 0x80000000LL) <= 6 || a1 == 2147483655LL;
}
