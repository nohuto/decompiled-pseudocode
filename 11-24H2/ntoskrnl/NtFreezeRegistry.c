/*
 * XREFs of NtFreezeRegistry @ 0x1407CFBF0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     CmFreezeRegistry @ 0x1407D841C (CmFreezeRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall NtFreezeRegistry(unsigned int a1)
{
  unsigned int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-58h] BYREF
  __int64 v5; // [rsp+30h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v4);
  if ( a1 <= 0x384 )
  {
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    {
      CmpAttachToRegistryProcess(&ApcState);
      v2 = CmFreezeRegistry(a1);
      CmpDetachFromRegistryProcess(&ApcState);
    }
    else
    {
      v2 = -1073741727;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v4);
  return v2;
}
