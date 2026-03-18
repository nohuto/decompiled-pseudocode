/*
 * XREFs of ?GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z @ 0x140069B30
 * Callers:
 *     ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x14001EC64 (-IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x140039F84 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

FxObject *__fastcall FxObject::GetParentObjectReferenced(FxObject *this, void *Tag)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v5; // bp
  FxObject *m_ParentObject; // rbx
  FxObject *v7; // rdi
  unsigned int RefCount; // edx
  FxTagTracker *m_Lock; // rcx

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState == 1 )
  {
    m_ParentObject = this->m_ParentObject;
    v7 = m_ParentObject;
    if ( m_ParentObject )
    {
      RefCount = _InterlockedIncrement(&m_ParentObject->m_Refcnt);
      if ( SLOBYTE(m_ParentObject->m_ObjectFlags) < 0 )
      {
        m_Lock = (FxTagTracker *)m_ParentObject[-1].m_SpinLock.m_Lock;
        if ( m_Lock )
          FxTagTracker::UpdateTagHistory(
            m_Lock,
            Tag,
            1023,
            "minkernel\\wdf\\framework\\shared\\object\\fxobject.cpp",
            TagAddRef,
            RefCount);
      }
    }
  }
  else
  {
    v7 = 0LL;
  }
  KeReleaseSpinLock(p_m_Lock, v5);
  return v7;
}
