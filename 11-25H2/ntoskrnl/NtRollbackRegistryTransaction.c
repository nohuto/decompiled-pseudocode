/*
 * XREFs of NtRollbackRegistryTransaction @ 0x1407C1840
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     CmpRollbackLightWeightTransaction @ 0x140866FE0 (CmpRollbackLightWeightTransaction.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 */

NTSTATUS __cdecl NtRollbackRegistryTransaction(HANDLE RegistryTransactionHandle, ULONG Flags)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  NTSTATUS v9; // ebx
  NTSTATUS v10; // eax
  PVOID v11; // rdi
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
      v9 = -1073741811;
    }
    else
    {
      Object = 0LL;
      v10 = ObReferenceObjectByHandle(
              RegistryTransactionHandle,
              0x10u,
              CmRegistryTransactionType,
              KeGetCurrentThread()->PreviousMode,
              &Object,
              0LL);
      v11 = Object;
      v9 = v10;
      if ( v10 >= 0 )
      {
        CmpAttachToRegistryProcess(&ApcState);
        v9 = CmpRollbackLightWeightTransaction(v11);
        CmpDetachFromRegistryProcess(&ApcState);
        if ( v9 >= 0 )
          v9 = 0;
      }
      if ( v11 )
        ObfDereferenceObject(v11);
    }
    CmpReleaseShutdownRundown(v8);
  }
  else
  {
    v9 = -1073741431;
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v14);
  return v9;
}
