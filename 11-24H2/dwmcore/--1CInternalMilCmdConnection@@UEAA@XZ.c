/*
 * XREFs of ??1CInternalMilCmdConnection@@UEAA@XZ @ 0x180259504
 * Callers:
 *     ??_GCInternalMilCmdConnection@@UEAAPEAXI@Z @ 0x180259530 (--_GCInternalMilCmdConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CChannelTable@@UEAA@XZ @ 0x18025D3BC (--1CChannelTable@@UEAA@XZ.c)
 */

void __fastcall CInternalMilCmdConnection::~CInternalMilCmdConnection(CInternalMilCmdConnection *this)
{
  CChannelTable::~CChannelTable((CInternalMilCmdConnection *)((char *)this + 48));
  CConnection::~CConnection(this);
}
