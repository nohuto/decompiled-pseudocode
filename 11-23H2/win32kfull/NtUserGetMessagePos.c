/*
 * XREFs of NtUserGetMessagePos @ 0x1C008CEE0
 * Callers:
 *     <none>
 * Callees:
 *     _GetMessagePos @ 0x1C008CF14 (_GetMessagePos.c)
 */

__int64 __fastcall NtUserGetMessagePos(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int MessagePos; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  EnterSharedCrit(a1, a2, a3);
  MessagePos = GetMessagePos();
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return MessagePos;
}
