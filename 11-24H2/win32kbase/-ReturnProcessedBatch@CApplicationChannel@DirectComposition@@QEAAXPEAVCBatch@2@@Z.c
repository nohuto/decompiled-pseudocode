/*
 * XREFs of ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x140070870
 * Callers:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1400707A0 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z @ 0x1400C9E1C (-SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1400D1620 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReturnProcessedBatch(
        union _SLIST_HEADER *this,
        struct DirectComposition::CBatch *a2)
{
  ULONGLONG Region; // rdi
  unsigned int v5; // ebx
  ULONGLONG Alignment; // rcx
  struct _SLIST_HEADER::$81D0B81343CD6A575F52E6033C50E59F v7; // [rsp+20h] [rbp-18h]

  DirectComposition::CBatch::SetSynchronizationObject(a2, 0LL);
  if ( *((_DWORD *)a2 + 5) == 6 )
  {
    Region = this[2].Region;
    v5 = *((_DWORD *)&this[1].HeaderX64 + 3);
    DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(Region + 80));
    DirectComposition::CLinearObjectTableBase::ReleaseHandle(
      (DirectComposition::CLinearObjectTableBase *)(Region + 24),
      v5);
    ExReleaseResourceLite(*(PERESOURCE *)(Region + 80));
    KeLeaveCriticalRegion();
    GreDeleteFastMutex((char *)a2);
    (*(void (__fastcall **)(union _SLIST_HEADER *, __int64))(this->Alignment + 32))(this, 1LL);
  }
  else
  {
    LODWORD(this[26].Alignment) = *((_DWORD *)a2 + 4);
    if ( (*((_BYTE *)a2 + 32) & 1) == 0 )
    {
      *(_QWORD *)&v7 = *((unsigned int *)a2 + 4);
      *((_QWORD *)&v7 + 1) = *((_QWORD *)a2 + 6);
      *(struct _SLIST_HEADER::$81D0B81343CD6A575F52E6033C50E59F *)((char *)&this[(*((_DWORD *)a2 + 4) & 0x7F) + 36].HeaderX64
                                                                 + 8) = v7;
      Alignment = this[24].Alignment;
      if ( Alignment )
      {
        if ( !this[24].Region )
          KeSetEvent(*(PRKEVENT *)(Alignment + 8), 1, 0);
      }
    }
    if ( (*((_BYTE *)a2 + 32) & 8) != 0 )
      *((_BYTE *)&this[16].HeaderX64 + 10) = 0;
    ExpInterlockedPushEntrySList(this + 13, (PSLIST_ENTRY)a2);
    KeSetEvent(*(PRKEVENT *)(this[15].Alignment + 8), 1, 0);
  }
}
