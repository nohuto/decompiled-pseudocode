/*
 * XREFs of ZwOpenKeyEx @ 0x1406A8970
 * Callers:
 *     DifZwOpenKeyExWrapper @ 0x140641BA0 (DifZwOpenKeyExWrapper.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C7B60 (_RegRtlOpenKeyTransacted.c)
 *     MfgInitSystem @ 0x140C0BCB0 (MfgInitSystem.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&DesiredAccess);
}
