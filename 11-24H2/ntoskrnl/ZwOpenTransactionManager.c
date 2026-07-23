/*
 * XREFs of ZwOpenTransactionManager @ 0x1406A9B30
 * Callers:
 *     DifZwOpenTransactionManagerWrapper @ 0x140641740 (DifZwOpenTransactionManagerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenTransactionManager(
        PHANDLE TmHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LogFileName,
        LPGUID TmIdentity,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TmHandle);
}
