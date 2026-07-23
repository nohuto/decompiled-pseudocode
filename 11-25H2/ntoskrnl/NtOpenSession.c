/*
 * XREFs of NtOpenSession @ 0x140A54C80
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __cdecl NtOpenSession(PHANDLE SessionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // si
  __int64 v7; // rdx
  POBJECT_TYPE v8; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS result; // eax
  void *v11; // [rsp+48h] [rbp-30h] BYREF

  v11 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SessionHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)SessionHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = MmSessionObjectType;
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
  *SessionHandle = v11;
  return result;
}
