/*
 * XREFs of NtOpenSection @ 0x1409FCCB0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __cdecl NtOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // si
  __int64 v7; // rdx
  POBJECT_TYPE v8; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS result; // eax
  void *v11; // [rsp+40h] [rbp-28h] BYREF

  v11 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SectionHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)SectionHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = MmSectionObjectType;
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
  *SectionHandle = v11;
  return result;
}
