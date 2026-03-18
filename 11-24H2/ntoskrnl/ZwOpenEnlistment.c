/*
 * XREFs of ZwOpenEnlistment @ 0x1406A88F0
 * Callers:
 *     DifZwOpenEnlistmentWrapper @ 0x140641540 (DifZwOpenEnlistmentWrapper.c)
 *     CmpRecoverEnlistment @ 0x1407E0244 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenEnlistment(
        PHANDLE EnlistmentHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE RmHandle,
        LPGUID EnlistmentGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, *(_QWORD *)&DesiredAccess);
}
