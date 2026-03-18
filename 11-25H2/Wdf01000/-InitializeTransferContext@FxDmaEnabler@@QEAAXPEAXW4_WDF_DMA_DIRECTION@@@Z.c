/*
 * XREFs of ?InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z @ 0x140068B94
 * Callers:
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x14008767C (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxDmaEnabler::InitializeTransferContext(FxDmaEnabler *this, void *Context, __int64 Direction)
{
  FxDmaEnabler *v3; // r9

  v3 = this;
  if ( (*((_BYTE *)this + 380) & 0x10) != 0 )
    this = (FxDmaEnabler *)((char *)this + 96 * (int)Direction);
  ((void (__fastcall *)(_DMA_ADAPTER *, void *, __int64, FxDmaEnabler *))this->m_SimplexAdapterInfo.AdapterObject->DmaOperations->InitializeDmaTransferContext)(
    this->m_SimplexAdapterInfo.AdapterObject,
    Context,
    Direction,
    v3);
}
