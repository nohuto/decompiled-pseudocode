/*
 * XREFs of NtCreateRegistryTransaction @ 0x140A4C5C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall NtCreateRegistryTransaction(HANDLE *a1, int a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // r14
  char PreviousMode; // r15
  __int64 v14; // rax
  int inserted; // edi
  _OWORD *v16; // rcx
  PVOID v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-78h]
  HANDLE Handle; // [rsp+58h] [rbp-40h] BYREF
  PVOID Object; // [rsp+60h] [rbp-38h] BYREF
  __int128 v22; // [rsp+68h] [rbp-30h] BYREF
  __int64 v23; // [rsp+78h] [rbp-20h]

  v22 = 0LL;
  v23 = 0LL;
  Object = 0LL;
  Handle = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v22);
  v12 = CmpAcquireShutdownRundown(v9, v8, v10, v11);
  if ( v12 )
  {
    if ( a4 )
    {
      inserted = -1073741811;
    }
    else
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode == 1 )
      {
        v14 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
          v14 = (__int64)a1;
        *(_QWORD *)v14 = 0LL;
      }
      else
      {
        *a1 = 0LL;
      }
      inserted = ObCreateObjectEx(
                   PreviousMode,
                   CmRegistryTransactionType,
                   a3,
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
        inserted = ObInsertObjectEx((struct _FILE_OBJECT *)v16, 0LL, a2, 0, 0, 0LL, (__int64)&Handle);
        Object = 0LL;
        if ( inserted >= 0 )
        {
          *a1 = Handle;
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
  return (unsigned int)inserted;
}
