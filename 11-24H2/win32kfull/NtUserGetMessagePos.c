/*
 * XREFs of NtUserGetMessagePos @ 0x14004A380
 * Callers:
 *     <none>
 * Callees:
 *     _GetMessagePos @ 0x14004A3B8 (_GetMessagePos.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 NtUserGetMessagePos()
{
  unsigned int MessagePos; // ebx
  char v2; // [rsp+30h] [rbp+8h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v2, 1LL);
  MessagePos = GetMessagePos();
  UserSessionSwitchLeaveCrit();
  return MessagePos;
}
