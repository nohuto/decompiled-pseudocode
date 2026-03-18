/*
 * XREFs of ?GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x140056488
 * Callers:
 *     ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x140056080 (-Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

_LIST_ENTRY **__fastcall FxWmiProvider::GetInstanceReferencedLocked(FxWmiProvider *this, unsigned int Index, void *Tag)
{
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY **p_Blink; // rbx
  unsigned int i; // eax
  unsigned int RefCount; // edx
  FxTagTracker *Blink; // rcx

  Flink = this->m_InstanceListHead.Flink;
  p_Blink = 0LL;
  for ( i = 0; i < this->m_NumInstances; ++i )
  {
    if ( i == Index )
    {
      p_Blink = &Flink[-8].Blink;
      RefCount = _InterlockedIncrement((volatile signed __int32 *)&Flink[-7].Flink + 1);
      if ( SLOBYTE(Flink[-6].Flink) < 0 )
      {
        Blink = (FxTagTracker *)Flink[-11].Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            Blink,
            Tag,
            498,
            "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiprovider.cpp",
            TagAddRef,
            RefCount);
      }
      return p_Blink;
    }
    Flink = Flink->Flink;
  }
  return p_Blink;
}
