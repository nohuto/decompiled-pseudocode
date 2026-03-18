/*
 * XREFs of CmpFreezeThawWorker @ 0x1407D8740
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmThawRegistry @ 0x1407D85E0 (CmThawRegistry.c)
 */

_KAFFINITY_EX *CmpFreezeThawWorker()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  __int64 v2; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  v2 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v1);
  CmpFreezeThawPending = 0;
  if ( CmpFreezeThawState == 1 )
    CmThawRegistry();
  return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v1);
}
