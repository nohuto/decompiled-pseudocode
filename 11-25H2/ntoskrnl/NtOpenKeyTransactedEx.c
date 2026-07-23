/*
 * XREFs of NtOpenKeyTransactedEx @ 0x140A315F0
 * Callers:
 *     NtOpenKeyTransacted @ 0x1407C0740 (NtOpenKeyTransacted.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     CmpTransDereferenceTransaction @ 0x140870EB0 (CmpTransDereferenceTransaction.c)
 *     CmOpenKey @ 0x140A31750 (CmOpenKey.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtOpenKeyTransactedEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions,
        HANDLE TransactionHandle)
{
  int v5; // r15d
  int v7; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  NTSTATUS v17; // edi
  KPROCESSOR_MODE v18; // r9
  NTSTATUS v19; // eax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  __int128 v22; // [rsp+38h] [rbp-30h] BYREF

  v5 = (int)KeyHandle;
  v22 = 0LL;
  v7 = (int)ObjectAttributes;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v22);
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(v10, v9, v11, v12) )
  {
    v17 = -1073741431;
    goto LABEL_8;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(TransactionHandle, 4u, CmRegistryTransactionType, PreviousMode, &Object, 0LL);
  v16 = (__int64)Object;
  v17 = v14;
  if ( v14 != -1073741788 )
  {
    if ( v14 < 0 )
      goto LABEL_5;
    v16 = (unsigned __int64)Object | 1;
    goto LABEL_4;
  }
  v18 = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v19 = ObReferenceObjectByHandle(TransactionHandle, 4u, (POBJECT_TYPE)TmTransactionObjectType, v18, &Object, 0LL);
  v16 = (__int64)Object;
  v17 = v19;
  if ( v19 >= 0 )
LABEL_4:
    v17 = CmOpenKey(v5, DesiredAccess, v7, OpenOptions, v16, KeGetCurrentThread()->PreviousMode);
LABEL_5:
  if ( v16 )
    CmpTransDereferenceTransaction(v16);
  CmpReleaseShutdownRundown(v15);
LABEL_8:
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v22);
  return v17;
}
