/*
 * XREFs of _RegRtlSetValue @ 0x140993B48
 * Callers:
 *     _SysCtxOpenControlSet @ 0x1408201E0 (_SysCtxOpenControlSet.c)
 *     _RegRtlCopyTreeInternal @ 0x140820BA0 (_RegRtlCopyTreeInternal.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1408B16A8 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _PnpCtxRegSetValue @ 0x140993B14 (_PnpCtxRegSetValue.c)
 *     _CmAddDeviceToContainerWorker @ 0x140A547D0 (_CmAddDeviceToContainerWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x1406A7010 (ZwSetValueKey.c)
 */

int __fastcall RegRtlSetValue(HANDLE KeyHandle, const WCHAR *a2, ULONG a3, void *a4, ULONG DataSize)
{
  int result; // eax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  ValueName = 0LL;
  result = RtlInitUnicodeStringEx(&ValueName, a2);
  if ( result >= 0 )
    return ZwSetValueKey(KeyHandle, &ValueName, 0, a3, a4, DataSize);
  return result;
}
