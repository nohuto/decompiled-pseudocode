/*
 * XREFs of NtUserRemoteReconnect @ 0x1C0131B70
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteReconnect @ 0x1C0131F08 (xxxRemoteReconnect.c)
 */

__int64 __fastcall NtUserRemoteReconnect(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  EnterCrit(0LL, 0LL);
  LODWORD(a1) = xxxRemoteReconnect(a1);
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return (unsigned int)a1;
}
