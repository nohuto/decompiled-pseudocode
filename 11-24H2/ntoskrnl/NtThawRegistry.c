/*
 * XREFs of NtThawRegistry @ 0x1407D1830
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmThawRegistry @ 0x1407D8B30 (CmThawRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 */

NTSTATUS NtThawRegistry(void)
{
  NTSTATUS v0; // ebx
  __int128 v2; // [rsp+20h] [rbp-58h] BYREF
  __int64 v3; // [rsp+30h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v2);
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    CmpAttachToRegistryProcess(&ApcState);
    v0 = CmThawRegistry();
    CmpDetachFromRegistryProcess(&ApcState);
  }
  else
  {
    v0 = -1073741727;
  }
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v2);
  return v0;
}
