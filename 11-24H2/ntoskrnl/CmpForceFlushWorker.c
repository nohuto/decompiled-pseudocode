/*
 * XREFs of CmpForceFlushWorker @ 0x140A52FE0
 * Callers:
 *     <none>
 * Callees:
 *     CmpDoFlushAll @ 0x14024528C (CmpDoFlushAll.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 */

_KAFFINITY_EX *CmpForceFlushWorker()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+30h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v6);
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v1, v0, v2, v3) )
  {
    CmpAttachToRegistryProcess(&ApcState);
    CmpDoFlushAll(0);
    CmpDetachFromRegistryProcess(&ApcState);
    CmpReleaseShutdownRundown(v5);
  }
  _InterlockedExchange(&CmpForceFlushPending, 0);
  return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v6);
}
