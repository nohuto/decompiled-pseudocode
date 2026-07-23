/*
 * XREFs of NtDuplicateObject @ 0x14083C090
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  int v9; // r12d
  PVOID v11; // rdi
  char PreviousMode; // r15
  __int64 v13; // rcx
  NTSTATUS result; // eax
  int v15; // r14d
  NTSTATUS v16; // ebx
  int v17; // edx
  PVOID v18; // r12
  NTSTATUS v19; // r15d
  PVOID v20; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  void *v22; // [rsp+60h] [rbp-28h] BYREF

  v9 = (int)SourceHandle;
  v11 = 0LL;
  v22 = 0LL;
  Object = 0LL;
  v20 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( TargetHandle && PreviousMode )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TargetHandle < 0x7FFFFFFF0000LL )
      v13 = (__int64)TargetHandle;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    *TargetHandle = 0LL;
  }
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)SourceProcessHandle, 0x7544624Fu, (__int64)&Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    if ( TargetProcessHandle )
    {
      v15 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)TargetProcessHandle, 0x7544624Fu, (__int64)&v20, 0LL, 0LL);
      if ( v15 < 0 )
      {
        v20 = 0LL;
        goto LABEL_10;
      }
    }
    else
    {
      v15 = 0;
    }
    v11 = v20;
LABEL_10:
    v16 = v15;
    v17 = v9;
    v18 = Object;
    v19 = ObDuplicateObject(
            (_DWORD)Object,
            v17,
            (_DWORD)v11,
            (unsigned int)&v22,
            DesiredAccess,
            HandleAttributes,
            Options,
            PreviousMode);
    if ( TargetHandle )
      *TargetHandle = v22;
    ObfDereferenceObjectWithTag(v18, 0x7544624Fu);
    if ( v11 )
      ObfDereferenceObjectWithTag(v11, 0x7544624Fu);
    if ( v15 >= 0 )
      return v19;
    return v16;
  }
  return result;
}
