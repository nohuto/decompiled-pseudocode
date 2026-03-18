/*
 * XREFs of ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x14001AF6C
 * Callers:
 *     ?ResetStateForRestart@FxPkgIo@@QEAAXXZ @ 0x1400A0CD0 (-ResetStateForRestart@FxPkgIo@@QEAAXXZ.c)
 * Callees:
 *     GetIoQueueList_ProcessQueueListEntry @ 0x14001B044 (GetIoQueueList_ProcessQueueListEntry.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxPkgIo::GetIoQueueListLocked(FxPkgIo *this, _SINGLE_LIST_ENTRY *SListHead, void *ListType)
{
  _LIST_ENTRY *p_m_IoQueueListHead; // rdi
  _LIST_ENTRY *i; // rbx
  FxTagTracker *Blink; // rcx
  unsigned int RefCount; // edx
  _LIST_ENTRY *j; // rbx

  p_m_IoQueueListHead = &this->m_IoQueueListHead;
  if ( (_DWORD)ListType == 1 )
    goto LABEL_2;
  if ( (_DWORD)ListType != 2 )
    return;
  if ( *(FxDeviceBase **)&this->m_DeviceBase[1].m_ExecutionLevel == (FxDeviceBase *)&this->m_DeviceBase[1].m_ExecutionLevel )
  {
LABEL_2:
    for ( i = this->m_IoQueueListHead.Blink; i != p_m_IoQueueListHead; i = i->Blink )
    {
      if ( LODWORD(i[1].Flink) == 1 )
      {
        i[1].Blink = (_LIST_ENTRY *)SListHead->Next;
        SListHead->Next = (_SINGLE_LIST_ENTRY *)&i[1].Blink;
        RefCount = _InterlockedIncrement((volatile signed __int32 *)&i[-56].Flink + 1);
        if ( SLOBYTE(i[-55].Flink) < 0 )
        {
          Blink = (FxTagTracker *)i[-60].Blink;
          if ( Blink )
            FxTagTracker::UpdateTagHistory(
              Blink,
              (void *)0x65776F70,
              1479,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
              TagAddRef,
              RefCount);
        }
      }
    }
  }
  else
  {
    for ( j = p_m_IoQueueListHead->Flink; j != p_m_IoQueueListHead; j = j->Flink )
      GetIoQueueList_ProcessQueueListEntry(j, SListHead, ListType);
  }
}
