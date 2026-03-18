/*
 * XREFs of ?TryGetMasterTableEntry@CChannelTable@@QEAAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@I@Z @ 0x1801F6FDC
 * Callers:
 *     ?SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z @ 0x180266EA0 (-SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z.c)
 * Callees:
 *     <none>
 */

struct CLIENT_CHANNEL_HANDLE_ENTRY *__fastcall CChannelTable::TryGetMasterTableEntry(
        CChannelTable *this,
        unsigned int a2)
{
  if ( a2 && a2 < *((_DWORD *)this + 3) && *(_DWORD *)(*((_DWORD *)this + 2) * a2 + *((_QWORD *)this + 3)) )
    return (struct CLIENT_CHANNEL_HANDLE_ENTRY *)(*((_QWORD *)this + 3) + *((_DWORD *)this + 2) * a2);
  else
    return 0LL;
}
