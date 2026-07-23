/*
 * XREFs of NtOpenProcessTokenEx @ 0x140850490
 * Callers:
 *     RtlpSysVolTakeOwnership @ 0x140783EA8 (RtlpSysVolTakeOwnership.c)
 *     NtOpenProcessToken @ 0x140851640 (NtOpenProcessToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 */

NTSTATUS __stdcall NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  KPROCESSOR_MODE AccessMode; // r14
  int v8; // ebx
  ULONG v9; // ebx
  __int64 v10; // rcx
  NTSTATUS result; // eax
  void *v12; // rsi
  int v13; // ebx
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-20h] BYREF

  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v8 = 73714;
  if ( AccessMode )
    v8 = 7666;
  v9 = HandleAttributes & v8;
  if ( AccessMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TokenHandle < 0x7FFFFFFF0000LL )
      v10 = (__int64)TokenHandle;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  Object = 0LL;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             4096,
             (__int64)PsProcessType,
             KeGetCurrentThread()->PreviousMode,
             0x65537350u,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v12 = (void *)PsReferencePrimaryTokenWithTag((__int64)Object, 0x746C6644u);
    ObfDereferenceObjectWithTag(Object, 0x65537350u);
    v13 = ObOpenObjectByPointer(v12, v9, 0LL, DesiredAccess, (POBJECT_TYPE)SeTokenObjectType, AccessMode, &Handle);
    ObfDereferenceObject(v12);
    if ( v13 >= 0 )
      *TokenHandle = Handle;
    return v13;
  }
  return result;
}
