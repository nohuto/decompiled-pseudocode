/*
 * XREFs of NtUserRemoteThinwireStats @ 0x14029BE30
 * Callers:
 *     <none>
 * Callees:
 *     RemoteThinwireStats @ 0x14026CF80 (RemoteThinwireStats.c)
 */

__int64 __fastcall NtUserRemoteThinwireStats(_OWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  LODWORD(a1) = RemoteThinwireStats(a1, v2);
  UserSessionSwitchLeaveCrit(v3);
  return (unsigned int)a1;
}
