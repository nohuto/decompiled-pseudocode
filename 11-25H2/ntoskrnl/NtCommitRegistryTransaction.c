/*
 * XREFs of NtCommitRegistryTransaction @ 0x1409D8FB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     CmpCommitLightWeightTransaction @ 0x1409D90CC (CmpCommitLightWeightTransaction.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
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
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  __int128 v14; // [rsp+38h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

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
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v14);
  return v11;
}
