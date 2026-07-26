/*
 * XREFs of ??1KnobNamespace@@QEAA@XZ @ 0x1401674A0
 * Callers:
 *     ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x140072950 (--1_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KnobNamespace::~KnobNamespace(KnobNamespace *this)
{
  _LIST_ENTRY *p_m_collectionList; // rdi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v4; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v6; // r8
  _LIST_ENTRY *v7; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&this->m_lock, 0LL);
  p_m_collectionList = &this->m_collectionList;
  while ( 1 )
  {
    Flink = p_m_collectionList->Flink;
    if ( p_m_collectionList->Flink == p_m_collectionList )
      break;
    v4 = Flink->Flink;
    if ( Flink->Flink->Blink != Flink )
      goto LABEL_10;
    Blink = Flink->Blink;
    if ( Blink->Flink != Flink )
      goto LABEL_10;
    Blink->Flink = v4;
    v4->Blink = Blink;
    if ( Flink != (_LIST_ENTRY *)8 )
      ExFreePoolWithTag(&Flink[-1].Blink, 0x43626E4Bu);
  }
  ExReleasePushLockExclusiveEx(&this->m_lock, 0LL);
  KeLeaveCriticalRegion();
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&stru_14011CAF0, 0LL);
  v6 = this->m_globalLinkage.Flink;
  if ( v6->Blink != &this->m_globalLinkage || (v7 = this->m_globalLinkage.Blink, v7->Flink != &this->m_globalLinkage) )
LABEL_10:
    __fastfail(3u);
  v7->Flink = v6;
  v6->Blink = v7;
  ExReleasePushLockExclusiveEx(&stru_14011CAF0, 0LL);
  KeLeaveCriticalRegion();
}
