/*
 * XREFs of NtCreateThreadStateChange @ 0x140A5FDF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 */

__int64 __fastcall NtCreateThreadStateChange(HANDLE *a1, int a2, int a3, ULONG_PTR a4, int a5)
{
  char PreviousMode; // r14
  __int64 v9; // rcx
  int inserted; // edi
  struct _FILE_OBJECT *v12; // rcx
  __int64 Tag; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-28h] BYREF
  PVOID v16[3]; // [rsp+68h] [rbp-20h] BYREF

  Object = 0LL;
  v16[0] = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a1;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  if ( a5 )
  {
    inserted = -1073741811;
  }
  else
  {
    inserted = ObpReferenceObjectByHandleWithTag(
                 a4,
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
                   a3,
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
        inserted = ObInsertObjectEx(v12, 0LL, a2, 0, 0, 0LL, (__int64)&Handle);
        if ( inserted >= 0 )
        {
          *a1 = Handle;
          Handle = 0LL;
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x63547350u);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)inserted;
}
