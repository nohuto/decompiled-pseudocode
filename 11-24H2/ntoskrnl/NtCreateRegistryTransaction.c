/*
 * XREFs of NtCreateRegistryTransaction @ 0x140A43150
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtCreateRegistryTransaction(
        HANDLE *RegistryTransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjAttributes,
        ULONG CreateOptions)
{
  int v5; // r12d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // r14
  char PreviousMode; // r15
  __int64 v14; // rax
  NTSTATUS inserted; // edi
  _OWORD *v16; // rcx
  PVOID v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-78h]
  HANDLE Handle; // [rsp+58h] [rbp-40h] BYREF
  PVOID Object; // [rsp+60h] [rbp-38h] BYREF
  __int128 v22; // [rsp+68h] [rbp-30h] BYREF
  __int64 v23; // [rsp+78h] [rbp-20h]

  v5 = (int)ObjAttributes;
  v22 = 0LL;
  v23 = 0LL;
  Object = 0LL;
  Handle = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v22);
  v12 = CmpAcquireShutdownRundown(v9, v8, v10, v11);
  if ( v12 )
  {
    if ( CreateOptions )
    {
      inserted = -1073741811;
    }
    else
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode == 1 )
      {
        v14 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)RegistryTransactionHandle < 0x7FFFFFFF0000LL )
          v14 = (__int64)RegistryTransactionHandle;
        *(_QWORD *)v14 = 0LL;
      }
      else
      {
        *RegistryTransactionHandle = 0LL;
      }
      inserted = ObCreateObjectEx(
                   PreviousMode,
                   CmRegistryTransactionType,
                   v5,
                   PreviousMode,
                   v19,
                   32,
                   0,
                   0,
                   &Object,
                   0LL);
      if ( inserted >= 0 )
      {
        v16 = Object;
        *(_OWORD *)Object = 0LL;
        v16[1] = 0LL;
        *((_QWORD *)v16 + 1) = 0LL;
        inserted = ObInsertObjectEx((struct _FILE_OBJECT *)v16, 0LL, DesiredAccess, 0, 0, 0LL, (__int64)&Handle);
        Object = 0LL;
        if ( inserted >= 0 )
        {
          *RegistryTransactionHandle = Handle;
          Handle = 0LL;
          inserted = 0;
        }
      }
    }
  }
  else
  {
    inserted = -1073741431;
  }
  if ( Handle )
    NtClose(Handle);
  v17 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v12 )
    CmpReleaseShutdownRundown(v17);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v22);
  return inserted;
}
