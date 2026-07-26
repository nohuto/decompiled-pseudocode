/*
 * XREFs of ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x14006E6A0
 * Callers:
 *     ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14006DEA0 (-ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 * Callees:
 *     ??$?0$00X@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x140099960 (--$-0$00X@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     ??0BindStack@Ndis@@QEAA@XZ @ 0x14016C8B0 (--0BindStack@Ndis@@QEAA@XZ.c)
 *     ??0KPushLock@@QEAA@XZ @ 0x1401735C0 (--0KPushLock@@QEAA@XZ.c)
 *     ??0BindEngine@Ndis@@QEAA@XZ @ 0x140174A40 (--0BindEngine@Ndis@@QEAA@XZ.c)
 */

_NDIS_MINIPORT_BLOCK *__fastcall _NDIS_MINIPORT_BLOCK::_NDIS_MINIPORT_BLOCK(_NDIS_MINIPORT_BLOCK *this)
{
  _NDIS_MINIPORT_BLOCK *result; // rax

  this->ExportName.__ptr_.__value_ = 0LL;
  this->FilterClass.__ptr_.__value_ = 0LL;
  this->SurpriseRemovalWorkItem.Irp = 0LL;
  Ndis::BindStack::BindStack(&this->Bindings);
  Ndis::BindEngine::BindEngine(&this->BindEngine);
  this->MiniportOwner.m_owner = MiniportNotOwned;
  KPushLock::KPushLock(&this->MiniportOwner.m_lock);
  KeInitializeEvent(&this->MiniportOwner.m_isUnowned.m_event, NotificationEvent, 0);
  KeSetEvent(&this->MiniportOwner.m_isUnowned.m_event, 0, 0);
  this->PoFxDStateReportingEnabled = 0;
  *(_WORD *)&this->InterfaceUpdateInProgress = 0;
  this->MtuUpdateQueued = 0;
  this->PendingMtuSize = 0;
  this->DevicePowerOnWorkItem.Irp = 0LL;
  this->DevicePowerDownWorkItem.Irp = 0LL;
  this->PendingOidWatchdog.m_ptr = (NDISWATCHDOG__ *)-1LL;
  this->HookedOidWatchdog.m_ptr = (NDISWATCHDOG__ *)-1LL;
  this->ReenumerateWatchdog.m_ptr = (NDISWATCHDOG__ *)-1LL;
  this->PollModeConfigKnobsNamespace.m_driverObject = 0LL;
  *(_OWORD *)&this->PollModeConfigKnobsNamespace.m_id.NamespaceType = 0LL;
  *(_DWORD *)&this->PollModeConfigKnobsNamespace.m_id.ObjectId.Data4[4] = 0;
  this->PollModeConfigKnobsNamespace.m_globalLinkage = 0LL;
  this->PollModeConfigKnobsNamespace.m_collectionList = 0LL;
  KPushLock::KPushLock(&this->PollModeConfigKnobsNamespace.m_lock);
  *(_QWORD *)&this->PollModeConfigKnobDescriptors.m_bufferSize = 0LL;
  this->PollModeConfigKnobDescriptors._p = 0LL;
  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::unique_ptr<KnobCollection,KFreePool<KnobCollection>>(&this->IdleSm);
  result = this;
  this->HasConversionFilter = 0;
  return result;
}
