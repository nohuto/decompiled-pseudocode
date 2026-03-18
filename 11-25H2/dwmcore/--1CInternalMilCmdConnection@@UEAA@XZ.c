/*
 * XREFs of ??1CInternalMilCmdConnection@@UEAA@XZ @ 0x180264444
 * Callers:
 *     ??_GCInternalMilCmdConnection@@UEAAPEAXI@Z @ 0x180264470 (--_GCInternalMilCmdConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CChannelTable@@UEAA@XZ @ 0x18026732C (--1CChannelTable@@UEAA@XZ.c)
 */

void __fastcall CInternalMilCmdConnection::~CInternalMilCmdConnection(CInternalMilCmdConnection *this)
{
  CChannelTable::~CChannelTable((CInternalMilCmdConnection *)((char *)this + 48));
  CConnection::~CConnection(this);
}
