/*
 * XREFs of ?Initialize@KnobNamespace@@QEAAXPEAU_DRIVER_OBJECT@@PEAU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x14006B020
 * Callers:
 *     ??0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x140166400 (--0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_CONFIG_KNOB_NAMESPACE@@@Z.c)
 * Callees:
 *     ?ReleaseExclusive@KPushLockBase@@QEAAXXZ @ 0x140160970 (-ReleaseExclusive@KPushLockBase@@QEAAXXZ.c)
 *     ?AcquireExclusive@KPushLockBase@@QEAAXXZ @ 0x140160F50 (-AcquireExclusive@KPushLockBase@@QEAAXXZ.c)
 */

void __fastcall KnobNamespace::Initialize(
        KnobNamespace *this,
        struct _DRIVER_OBJECT *a2,
        struct _CONFIG_KNOB_NAMESPACE *a3)
{
  int v3; // eax
  __int128 v5; // xmm0
  _LIST_ENTRY **v6; // rcx
  _LIST_ENTRY *p_m_globalLinkage; // rax

  v3 = *(_DWORD *)&a3->ObjectId.Data4[4];
  v5 = *(_OWORD *)&a3->NamespaceType;
  this->m_driverObject = a2;
  *(_OWORD *)&this->m_id.NamespaceType = v5;
  *(_DWORD *)&this->m_id.ObjectId.Data4[4] = v3;
  this->m_collectionList.Blink = &this->m_collectionList;
  this->m_collectionList.Flink = &this->m_collectionList;
  KeEnterCriticalRegion();
  KPushLockBase::AcquireExclusive(&stru_14011CAF0);
  v6 = (_LIST_ENTRY **)qword_14011CB00;
  p_m_globalLinkage = &this->m_globalLinkage;
  if ( *(__int64 **)qword_14011CB00 != &qword_14011CAF8 )
    __fastfail(3u);
  this->m_globalLinkage.Blink = (_LIST_ENTRY *)qword_14011CB00;
  p_m_globalLinkage->Flink = (_LIST_ENTRY *)&qword_14011CAF8;
  *v6 = p_m_globalLinkage;
  qword_14011CB00 = (__int64)&this->m_globalLinkage;
  KPushLockBase::ReleaseExclusive(&stru_14011CAF0);
  KeLeaveCriticalRegion();
}
