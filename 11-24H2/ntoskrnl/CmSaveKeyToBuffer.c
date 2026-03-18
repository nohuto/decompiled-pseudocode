/*
 * XREFs of CmSaveKeyToBuffer @ 0x140BB9010
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     CmpDumpKeyToBuffer @ 0x140BB9130 (CmpDumpKeyToBuffer.c)
 *     CmObReferenceObjectByHandle @ 0x140BB9350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmSaveKeyToBuffer(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  int v11; // r8d
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // r8
  PVOID v15; // rdi
  __int64 v16; // rdx
  PVOID Object; // [rsp+30h] [rbp-19h] BYREF
  __int128 v19; // [rsp+38h] [rbp-11h] BYREF
  __int64 v20; // [rsp+48h] [rbp-1h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp+7h] BYREF

  Object = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v19);
  if ( (_DWORD)v9 == 4 )
  {
    if ( (unsigned __int8)CmpAcquireShutdownRundown(v7, v6, v8, v9) )
    {
      v10 = CmObReferenceObjectByHandle(a1, 0, v11, 0, (__int64)&Object, 0LL);
      if ( v10 < 0 )
      {
        v15 = Object;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        CmpAttachToRegistryProcess(&ApcState);
        v14 = a2;
        v15 = Object;
        v10 = CmpDumpKeyToBuffer(Object, v16, v14, a3);
        KiUnstackDetachProcess((__int64)&ApcState, 0);
        KeLeaveCriticalRegion();
      }
      if ( v15 )
        ObfDereferenceObject(v15);
      CmpReleaseShutdownRundown(v12);
    }
    else
    {
      v10 = -1073741431;
    }
  }
  else
  {
    v10 = -1073741637;
  }
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v19);
  return (unsigned int)v10;
}
