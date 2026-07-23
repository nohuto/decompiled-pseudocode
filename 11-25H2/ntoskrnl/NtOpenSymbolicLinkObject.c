/*
 * XREFs of NtOpenSymbolicLinkObject @ 0x1409E0AA0
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x140801E68 (AdtpInitializeDriveLetters.c)
 *     IopReassignSystemRoot @ 0x140C0BDD0 (IopReassignSystemRoot.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __cdecl NtOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // si
  __int64 v7; // rcx
  PVOID v8; // rdi
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS result; // eax
  void *v11; // [rsp+40h] [rbp-28h] BYREF

  v11 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)LinkHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)LinkHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = ObpSymbolicLinkObjectType;
  CurrentSilo = PsGetCurrentSilo();
  result = ObOpenObjectByNameEx(
             (__int64)ObjectAttributes,
             (__int64)v8,
             PreviousMode,
             0LL,
             DesiredAccess,
             0,
             (__int64)CurrentSilo,
             &v11);
  *LinkHandle = v11;
  return result;
}
