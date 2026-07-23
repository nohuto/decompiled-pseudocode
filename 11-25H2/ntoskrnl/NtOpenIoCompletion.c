/*
 * XREFs of NtOpenIoCompletion @ 0x140709090
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x14085AA70 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  char PreviousMode; // di
  __int64 v7; // rdx
  NTSTATUS v8; // edx
  ACCESS_MASK v10; // [rsp+20h] [rbp-48h]
  void *v11; // [rsp+48h] [rbp-20h] BYREF

  v3 = (int)ObjectAttributes;
  v11 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoCompletionHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)IoCompletionHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v10 = DesiredAccess;
  LOBYTE(DesiredAccess) = PreviousMode;
  v8 = ObOpenObjectByName(v3, (_DWORD)IoCompletionObjectType, DesiredAccess, 0, v10, 0LL, (__int64)&v11);
  if ( v8 >= 0 )
    *IoCompletionHandle = v11;
  return v8;
}
