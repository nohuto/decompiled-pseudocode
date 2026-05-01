/*
 * XREFs of ?HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180044EC4
 * Callers:
 *     ?HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z @ 0x180044D28 (-HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z.c)
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180045548 (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 *     ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_TERMINATE_TYPE@@@Z @ 0x180045C94 (-HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_TERMINATE_TYPE@@@Z.c)
 *     ?HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z @ 0x18007FCF4 (-HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z.c)
 *     ?HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180080A9C (-HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 * Callees:
 *     ?HampClientAcquireLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180017174 (-HampClientAcquireLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientReleaseLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001DD20 (-HampClientReleaseLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x1800385CC (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_A.c)
 */

__int64 __fastcall HampHostFindByClient(__int64 a1, char a2, struct _RM_HAM_ACTIVITY_HOST **a3, unsigned __int64 *a4)
{
  void *v8; // rsi
  int v9; // ebx
  HANDLE CurrentProcess; // rbx
  HANDLE v11; // rax
  __int64 v12; // r8
  void *TargetHandle; // [rsp+60h] [rbp+8h] BYREF

  TargetHandle = 0LL;
  HampClientAcquireLockShared((struct _HAM_CLIENT_CONTEXT *)a1);
  v8 = *(void **)(a1 + 192);
  if ( v8 )
  {
    CurrentProcess = GetCurrentProcess();
    v11 = GetCurrentProcess();
    v9 = NtDuplicateObject(v11, v8, CurrentProcess, &TargetHandle, 0x1000u, 0, 0);
    HampClientReleaseLockShared((struct _HAM_CLIENT_CONTEXT *)a1);
    if ( v9 >= 0 )
    {
      LOBYTE(v12) = a2;
      v9 = HampHostFindByProcessHandle(
             (*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *(unsigned __int8 *)(a1 + 164) - 16,
             TargetHandle,
             v12,
             a3,
             a4);
      if ( v9 >= 0 )
        v9 = 0;
    }
  }
  else
  {
    v9 = -1073741816;
    HampClientReleaseLockShared((struct _HAM_CLIENT_CONTEXT *)a1);
  }
  if ( TargetHandle )
    NtClose(TargetHandle);
  return (unsigned int)v9;
}
