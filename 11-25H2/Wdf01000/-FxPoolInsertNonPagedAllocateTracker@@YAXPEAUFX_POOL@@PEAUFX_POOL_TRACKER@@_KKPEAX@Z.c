/*
 * XREFs of ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x140082628
 * Callers:
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x140026CA0 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x140027830 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x140028E00 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x14002A6F0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1400571E4 (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 *     ?Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x140060630 (-Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPoolInsertNonPagedAllocateTracker(
        FX_POOL *Pool,
        FX_POOL_TRACKER *Tracker,
        unsigned __int64 Size,
        unsigned int Tag,
        void *Caller)
{
  KIRQL v8; // r9
  _LIST_ENTRY *Blink; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // eax

  Tracker->PoolType = ExDefaultNonPagedPoolType;
  Tracker->Pool = Pool;
  Tracker->CallersAddress = Caller;
  Tracker->Tag = Tag;
  Tracker->Size = Size;
  v8 = KeAcquireSpinLockRaiseToDpc(&Pool->NonPagedLock.m_Lock);
  Blink = Pool->NonPagedHead.Blink;
  if ( Blink->Flink != &Pool->NonPagedHead )
    __fastfail(3u);
  Tracker->Link.Blink = Blink;
  Tracker->Link.Flink = &Pool->NonPagedHead;
  Blink->Flink = &Tracker->Link;
  Pool->NonPagedHead.Blink = &Tracker->Link;
  v10 = Size + Pool->NonPagedBytes;
  v11 = Pool->NonPagedAllocations + 1;
  Pool->NonPagedBytes = v10;
  Pool->NonPagedAllocations = v11;
  if ( v10 > Pool->PeakNonPagedBytes )
    Pool->PeakNonPagedBytes = v10;
  if ( v11 > Pool->PeakNonPagedAllocations )
    Pool->PeakNonPagedAllocations = v11;
  KeReleaseSpinLock(&Pool->NonPagedLock.m_Lock, v8);
}
