/*
 * XREFs of ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x140046310
 * Callers:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x140044FC0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x140045630 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x140045EC0 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 * Callees:
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1400461B8 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x140046260 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

void __fastcall FxObject::QueueDeferredDisposeLocked(FxObject *this, unsigned int NewDeferedState)
{
  unsigned __int8 v3; // r8
  FxDeviceBase *m_DeviceBase; // rcx
  FxDisposeList *m_DisposeList; // rcx

  FxObject::SetObjectStateLocked(this, NewDeferedState);
  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase )
    m_DisposeList = m_DeviceBase->m_DisposeList;
  else
    m_DisposeList = this->m_Globals->Driver->m_DisposeList;
  FxDisposeList::Add(m_DisposeList, this, v3);
}
