/*
 * XREFs of NtCommitRegistryTransaction @ 0x140A00B00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     CmpCommitLightWeightTransaction @ 0x140A02A20 (CmpCommitLightWeightTransaction.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 */

NTSTATUS __cdecl NtCommitRegistryTransaction(HANDLE RegistryTransactionHandle, ULONG Flags)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  PVOID v10; // rdi
  NTSTATUS v11; // ebx
  PVOID Object; // [rsp+38h] [rbp-9h] BYREF
  __int128 v14; // [rsp+40h] [rbp-1h] BYREF
  __int64 v15; // [rsp+50h] [rbp+Fh]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp+17h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v14);
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v5, v4, v6, v7) )
  {
    if ( Flags )
    {
      v11 = -1073741811;
    }
    else
    {
      Object = 0LL;
      v9 = ObReferenceObjectByHandle(
             RegistryTransactionHandle,
             8u,
             CmRegistryTransactionType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
      v10 = Object;
      v11 = v9;
      if ( v9 >= 0 )
      {
        CmpAttachToRegistryProcess(&ApcState);
        v11 = CmpCommitLightWeightTransaction(v10);
        CmpDetachFromRegistryProcess(&ApcState);
        if ( v11 >= 0 )
          v11 = 0;
      }
      if ( v10 )
        ObfDereferenceObject(v10);
    }
    CmpReleaseShutdownRundown(v8);
  }
  else
  {
    v11 = -1073741431;
  }
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v14);
  return v11;
}
