/*
 * XREFs of ZwOpenEnlistment @ 0x1406A9890
 * Callers:
 *     DifZwOpenEnlistmentWrapper @ 0x14063FB00 (DifZwOpenEnlistmentWrapper.c)
 *     CmpRecoverEnlistment @ 0x1407E0794 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenEnlistment(
        PHANDLE EnlistmentHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE RmHandle,
        LPGUID EnlistmentGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
