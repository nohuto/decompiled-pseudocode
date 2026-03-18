/*
 * XREFs of CmpForceFlushWorker @ 0x140A50B10
 * Callers:
 *     <none>
 * Callees:
 *     CmpDoFlushAll @ 0x14032401C (CmpDoFlushAll.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 */

_KAFFINITY_EX *CmpForceFlushWorker()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  v6 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v6);
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v1, v0, v2, v3) )
  {
    CmpAttachToRegistryProcess(&ApcState);
    CmpDoFlushAll(0);
    CmpDetachFromRegistryProcess(&ApcState);
    CmpReleaseShutdownRundown(v4);
  }
  _InterlockedExchange(&CmpForceFlushPending, 0);
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v6);
}
