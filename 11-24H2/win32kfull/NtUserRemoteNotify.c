/*
 * XREFs of NtUserRemoteNotify @ 0x140212C40
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteNotify @ 0x140212C80 (xxxRemoteNotify.c)
 */

__int64 __fastcall NtUserRemoteNotify(void *Src)
{
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  LODWORD(Src) = xxxRemoteNotify(Src);
  UserSessionSwitchLeaveCrit(v2);
  return (unsigned int)Src;
}
