/*
 * XREFs of NtOpenKeyTransactedEx @ 0x1409E3C50
 * Callers:
 *     NtOpenKeyTransacted @ 0x1407CFE40 (NtOpenKeyTransacted.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     CmpTransDereferenceTransaction @ 0x14087925C (CmpTransDereferenceTransaction.c)
 *     CmOpenKey @ 0x1409E3DB0 (CmOpenKey.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall NtOpenKeyTransactedEx(int a1, int a2, int a3, int a4, HANDLE Handle)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned int v17; // edi
  KPROCESSOR_MODE v18; // r9
  NTSTATUS v19; // eax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  __int128 v22; // [rsp+38h] [rbp-30h] BYREF
  __int64 v23; // [rsp+48h] [rbp-20h]

  v22 = 0LL;
  v23 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v22);
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(v10, v9, v11, v12) )
  {
    v17 = -1073741431;
    goto LABEL_8;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, 4u, CmRegistryTransactionType, PreviousMode, &Object, 0LL);
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
  v19 = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)TmTransactionObjectType, v18, &Object, 0LL);
  v16 = (__int64)Object;
  v17 = v19;
  if ( v19 >= 0 )
LABEL_4:
    v17 = CmOpenKey(a1, a2, a3, a4, v16, KeGetCurrentThread()->PreviousMode);
LABEL_5:
  if ( v16 )
    CmpTransDereferenceTransaction(v16);
  CmpReleaseShutdownRundown(v15);
LABEL_8:
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v22);
  return v17;
}
