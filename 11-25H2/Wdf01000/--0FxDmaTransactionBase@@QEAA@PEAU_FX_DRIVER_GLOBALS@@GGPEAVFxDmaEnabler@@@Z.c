/*
 * XREFs of ??0FxDmaTransactionBase@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1400668D8
 * Callers:
 *     ??0FxDmaScatterGatherTransaction@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxDmaEnabler@@@Z @ 0x1400449C0 (--0FxDmaScatterGatherTransaction@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxDmaEnabler@@@Z.c)
 *     ??0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1400872E0 (--0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140022034 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Reset@FxDmaTransactionBase@@AEAAXXZ @ 0x140066C1C (-Reset@FxDmaTransactionBase@@AEAAXXZ.c)
 */

void __fastcall FxDmaTransactionBase::FxDmaTransactionBase(
        FxDmaTransactionBase *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ObjectSize,
        unsigned __int16 ExtraSize,
        FxDmaEnabler *DmaEnabler)
{
  unsigned __int16 v6; // si
  char *v7; // rdi

  v6 = ObjectSize + 15;
  v7 = 0LL;
  if ( ExtraSize )
    ObjectSize = (v6 & 0xFFF0) + ((ExtraSize + 15) & 0xFFF0);
  FxNonPagedObject::FxNonPagedObject(this, (_FX_DRIVER_GLOBALS *)0x1401, ObjectSize, FxDriverGlobals);
  this->__vftable = (FxDmaTransactionBase_vtbl *)FxDmaTransactionBase::`vftable';
  this->m_DmaAcquiredFunction.Method.ProgramDma = 0LL;
  this->m_DmaEnabler = DmaEnabler;
  this->m_EncodedRequest = 0LL;
  FxDmaTransactionBase::Reset(this);
  this->m_State = FxDmaTransactionStateCreated;
  if ( ExtraSize )
    v7 = (char *)this + (v6 & 0xFFF0);
  this->m_TransferContext = v7;
  this->m_ObjectFlags |= 0x800u;
}
