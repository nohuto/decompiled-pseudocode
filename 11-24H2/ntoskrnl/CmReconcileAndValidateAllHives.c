/*
 * XREFs of CmReconcileAndValidateAllHives @ 0x1407D83B0
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     CmpDoFlushAll @ 0x14020DA6C (CmpDoFlushAll.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 */

__int64 CmReconcileAndValidateAllHives()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
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
    CmpDoFlushAll(0xCu);
    CmpDetachFromRegistryProcess(&ApcState);
    CmpReleaseShutdownRundown(v4);
  }
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v6);
  return 0LL;
}
