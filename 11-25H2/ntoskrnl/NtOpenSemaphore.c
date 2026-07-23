/*
 * XREFs of NtOpenSemaphore @ 0x140A0F110
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __cdecl NtOpenSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // si
  __int64 v7; // rdx
  POBJECT_TYPE *v8; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS v10; // edx
  void *v12; // [rsp+40h] [rbp-28h] BYREF

  v12 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SemaphoreHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)SemaphoreHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = ExSemaphoreObjectType;
  CurrentSilo = PsGetCurrentSilo();
  v10 = ObOpenObjectByNameEx(
          (__int64)ObjectAttributes,
          (__int64)v8,
          PreviousMode,
          0LL,
          DesiredAccess,
          0,
          (__int64)CurrentSilo,
          &v12);
  if ( v10 >= 0 )
    *SemaphoreHandle = v12;
  return v10;
}
