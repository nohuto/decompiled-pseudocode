/*
 * XREFs of ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x140072E44
 * Callers:
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x14001DE8C (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x14004AB2C (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x140072D30 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x14007AF34 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x14007F1FC (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@@Z @ 0x1400841DC (-MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntr.c)
 * Callees:
 *     <none>
 */

void __fastcall FxChildList::MarkDescriptionNotPresentWorker(
        FxChildList *this,
        FxDeviceDescriptionEntry *DescriptionEntry,
        unsigned __int8 ModificationCanBeQueued)
{
  _LIST_ENTRY *p_m_ModificationLink; // r9
  _LIST_ENTRY *Blink; // rdx

  p_m_ModificationLink = &DescriptionEntry->m_ModificationLink;
  if ( !ModificationCanBeQueued || p_m_ModificationLink->Flink == p_m_ModificationLink )
  {
    DescriptionEntry->m_FoundInLastScan = 0;
    DescriptionEntry->m_ModificationState = ModificationRemoveNotify;
    Blink = this->m_ModificationListHead.Blink;
    if ( Blink->Flink != &this->m_ModificationListHead )
      __fastfail(3u);
    p_m_ModificationLink->Flink = &this->m_ModificationListHead;
    p_m_ModificationLink->Blink = Blink;
    Blink->Flink = p_m_ModificationLink;
    this->m_ModificationListHead.Blink = p_m_ModificationLink;
  }
}
