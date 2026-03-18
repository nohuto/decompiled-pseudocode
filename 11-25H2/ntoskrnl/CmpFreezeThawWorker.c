/*
 * XREFs of CmpFreezeThawWorker @ 0x1407C8FA0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmThawRegistry @ 0x1407C8E40 (CmThawRegistry.c)
 */

_KAFFINITY_EX *CmpFreezeThawWorker()
{
  __int128 v1; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v1);
  CmpFreezeThawPending = 0;
  if ( CmpFreezeThawState == 1 )
    CmThawRegistry();
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v1);
}
