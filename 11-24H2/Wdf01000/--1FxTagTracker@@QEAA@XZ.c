/*
 * XREFs of ??1FxTagTracker@@QEAA@XZ @ 0x140082404
 * Callers:
 *     ?FinalRelease@FxObject@@AEAAXXZ @ 0x140008D40 (-FinalRelease@FxObject@@AEAAXXZ.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x14000BC50 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x14001CA30 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x140040500 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x14004A2C0 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x140052A60 (--1FxObject@@UEAA@XZ.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x140053430 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1400823DC (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x14003ECB4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x140082928 (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ??_GFxTagTrackingBlock@@QEAAPEAXI@Z @ 0x1400977E0 (--_GFxTagTrackingBlock@@QEAAPEAXI@Z.c)
 */

void __fastcall FxTagTracker::~FxTagTracker(FxTagTracker *this)
{
  FxDriverGlobalsDebugExtension *DebugExtension; // rbx
  KIRQL v3; // al
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *Blink; // rdx
  KIRQL v6; // al
  unsigned int v7; // edx
  FxTagTrackingBlock *m_Next; // rcx
  KIRQL v9; // bp
  FxTagTrackingBlock *Next; // rbx

  if ( this->m_TrackerType == FxTagTrackerTypeHandle )
  {
    FxTagTracker::CheckForAbandondedTags(this);
    DebugExtension = this->m_Globals->DebugExtension;
    v3 = KeAcquireSpinLockRaiseToDpc(&DebugExtension->AllocatedTagTrackersLock.m_Lock);
    Flink = this->m_TrackerEntry.Flink;
    if ( Flink->Blink != &this->m_TrackerEntry
      || (Blink = this->m_TrackerEntry.Blink, Blink->Flink != &this->m_TrackerEntry) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    KeReleaseSpinLock(&DebugExtension->AllocatedTagTrackersLock.m_Lock, v3);
  }
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_Next = this->m_Next;
  v9 = v6;
  this->m_Next = 0LL;
  if ( m_Next )
  {
    do
    {
      Next = m_Next->Next;
      FxTagTrackingBlock::`scalar deleting destructor'(m_Next, v7);
      m_Next = Next;
    }
    while ( Next );
  }
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v9);
  `vector destructor iterator'(
    (char *)this->m_TagHistory,
    0x30uLL,
    0x19uLL,
    (void (__fastcall *)(void *))FxTagTrackingBlock::~FxTagTrackingBlock);
  this->m_SpinLock.m_DbgFlagIsInitialized = 0;
}
