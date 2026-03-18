/*
 * XREFs of ZwCreateTransactionManager @ 0x1406A7E10
 * Callers:
 *     DifZwCreateTransactionManagerWrapper @ 0x14063E6E0 (DifZwCreateTransactionManagerWrapper.c)
 *     CmpInitCmRM @ 0x140AE4D94 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateTransactionManager(
        PHANDLE TmHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LogFileName,
        ULONG CreateOptions,
        ULONG CommitStrength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TmHandle, *(_QWORD *)&DesiredAccess);
}
