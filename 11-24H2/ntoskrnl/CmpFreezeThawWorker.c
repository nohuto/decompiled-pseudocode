/*
 * XREFs of CmpFreezeThawWorker @ 0x1407D8C90
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmThawRegistry @ 0x1407D8B30 (CmThawRegistry.c)
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
