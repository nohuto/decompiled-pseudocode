/*
 * XREFs of ??1CChannelTable@@UEAA@XZ @ 0x18025D3BC
 * Callers:
 *     ??1CInternalMilCmdConnection@@UEAA@XZ @ 0x180259504 (--1CInternalMilCmdConnection@@UEAA@XZ.c)
 *     ??_GCChannelTable@@UEAAPEAXI@Z @ 0x18025D400 (--_GCChannelTable@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CChannelTable::~CChannelTable(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE LockSemaphore; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CChannelTable::`vftable';
  DeleteCriticalSection(this + 1);
  LockSemaphore = this->LockSemaphore;
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&HANDLE_TABLE::`vftable';
  operator delete(LockSemaphore);
}
