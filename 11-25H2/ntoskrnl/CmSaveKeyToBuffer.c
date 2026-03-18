/*
 * XREFs of CmSaveKeyToBuffer @ 0x140BA9010
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpDumpKeyToBuffer @ 0x140BA9128 (CmpDumpKeyToBuffer.c)
 *     CmObReferenceObjectByHandle @ 0x140BA93B0 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
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
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  __int128 v19; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  Object = 0LL;
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
        KiUnstackDetachProcess((__int64)&ApcState, 0LL);
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
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v19);
  return (unsigned int)v10;
}
