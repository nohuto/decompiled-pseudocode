/*
 * XREFs of NtUserEnsureDpiDepSysMetCacheForPlateau @ 0x1402272D0
 * Callers:
 *     <none>
 * Callees:
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x140227310 (_EnsureDpiDepSysMetCacheForPlateau.c)
 */

__int64 __fastcall NtUserEnsureDpiDepSysMetCacheForPlateau(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)EnsureDpiDepSysMetCacheForPlateau(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
