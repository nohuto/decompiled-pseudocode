/*
 * XREFs of NtCreateThreadStateChange @ 0x140A5DB20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
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
  PVOID *v12; // rcx
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
        v12 = (PVOID *)v16[0];
        *(_OWORD *)v16[0] = 0LL;
        v12[2] = 0LL;
        v12[1] = 0LL;
        *v12 = Object;
        *((_DWORD *)v12 + 4) = 0;
        Object = 0LL;
        inserted = ObInsertObjectEx((char *)v12, 0LL, DesiredAccess, 0, 0, 0LL, (__int64)&Handle);
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
