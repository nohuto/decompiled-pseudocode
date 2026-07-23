/*
 * XREFs of NtCreateThreadStateChange @ 0x140A58340
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 */

NTSTATUS __cdecl NtCreateThreadStateChange(
        PHANDLE ThreadStateChangeHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ThreadHandle,
        ULONG64 Reserved)
{
  int v5; // r15d
  char PreviousMode; // r14
  __int64 v9; // rcx
  NTSTATUS inserted; // edi
  struct _FILE_OBJECT *v12; // rcx
  __int64 Tag; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-28h] BYREF
  PVOID v16[3]; // [rsp+68h] [rbp-20h] BYREF

  v5 = (int)ObjectAttributes;
  Object = 0LL;
  v16[0] = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ThreadStateChangeHandle < 0x7FFFFFFF0000LL )
      v9 = (__int64)ThreadStateChangeHandle;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  if ( (_DWORD)Reserved )
  {
    inserted = -1073741811;
  }
  else
  {
    inserted = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 32,
                 (__int64)PsThreadType,
                 PreviousMode,
                 0x63547350u,
                 &Object,
                 0LL,
                 0LL);
    if ( inserted >= 0 )
    {
      inserted = ObCreateObjectEx(
                   PreviousMode,
                   (_DWORD *)PspThreadStateChangeType,
                   v5,
                   PreviousMode,
                   Tag,
                   24,
                   0,
                   0,
                   v16,
                   0LL);
      if ( inserted >= 0 )
      {
        v12 = (struct _FILE_OBJECT *)v16[0];
        *(_OWORD *)v16[0] = 0LL;
        v12->Vpb = 0LL;
        v12->DeviceObject = 0LL;
        *(_QWORD *)&v12->Type = Object;
        LODWORD(v12->Vpb) = 0;
        Object = 0LL;
        inserted = ObInsertObjectEx(v12, 0LL, DesiredAccess, 0, 0, 0LL, (__int64)&Handle);
        if ( inserted >= 0 )
        {
          *ThreadStateChangeHandle = Handle;
          Handle = 0LL;
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x63547350u);
  if ( Handle )
    NtClose(Handle);
  return inserted;
}
