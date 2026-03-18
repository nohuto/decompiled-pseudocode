/*
 * XREFs of ?AddRef@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x140060430
 * Callers:
 *     ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x14001CB58 (-ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxMemoryObject::AddRef(FxMemoryObject *this, void *Tag, int Line, const char *File)
{
  unsigned int RefCount; // ebx
  _SINGLE_LIST_ENTRY *Next; // rcx

  RefCount = _InterlockedIncrement((volatile signed __int32 *)(&this[-1].m_ObjectState + 1));
  if ( SLOBYTE(this[-1].m_ChildListHead.Blink) < 0 )
  {
    Next = this[-2].m_DisposeSingleEntry.Next;
    if ( Next )
      FxTagTracker::UpdateTagHistory((FxTagTracker *)Next, Tag, Line, File, TagAddRef, RefCount);
  }
  return RefCount;
}
