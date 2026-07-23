/*
 * XREFs of NtOpenEvent @ 0x1409FCB90
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     ObOpenObjectByName @ 0x14085AA70 (ObOpenObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __cdecl NtOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // si
  __int64 v7; // rdx
  POBJECT_TYPE *v8; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS v10; // ecx
  _QWORD v12[5]; // [rsp+40h] [rbp-28h] BYREF

  v12[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EventHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)EventHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = ExEventObjectType;
  CurrentSilo = PsGetCurrentSilo();
  v10 = ObOpenObjectByNameEx(
          (__int64)ObjectAttributes,
          (__int64)v8,
          PreviousMode,
          0LL,
          DesiredAccess,
          0,
          (__int64)CurrentSilo,
          v12);
  if ( v10 == -1073741788 && ExCrossVmEventObjectType )
    v10 = ObOpenObjectByName(
            (__int64)ObjectAttributes,
            (__int64)ExCrossVmEventObjectType,
            PreviousMode,
            0LL,
            DesiredAccess,
            0LL,
            (__int64)v12);
  if ( v10 >= 0 )
    *EventHandle = (HANDLE)v12[0];
  return v10;
}
