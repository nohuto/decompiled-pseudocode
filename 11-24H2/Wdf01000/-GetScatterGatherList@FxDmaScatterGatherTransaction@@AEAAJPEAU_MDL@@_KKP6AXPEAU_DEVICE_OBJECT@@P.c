/*
 * XREFs of ?GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z5@Z @ 0x1400884B4
 * Callers:
 *     ?StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x140059D70 (-StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ.c)
 * Callees:
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x140049CCC (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::GetScatterGatherList(
        FxDmaScatterGatherTransaction *this,
        _MDL *Mdl,
        unsigned __int64 CurrentOffset,
        unsigned int Length,
        void (__fastcall *Context)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *),
        void *Mdl_0)
{
  KIRQL v10; // al
  FxDmaEnabler *m_DmaEnabler; // rsi
  KIRQL v12; // di
  $C917870CF6F2291303947F7793E18A6D *DmaDescription; // rax
  _FxDmaDescription *m_AdapterInfo; // rcx
  _DEVICE_OBJECT *m_FDO; // rdx
  int v16; // eax
  unsigned int v17; // ebx

  v10 = KfRaiseIrql(2u);
  m_DmaEnabler = this->m_DmaEnabler;
  v12 = v10;
  DmaDescription = FxDmaEnabler::GetDmaDescription(m_DmaEnabler, WdfDmaDirectionReadFromDevice);
  m_AdapterInfo = this->m_AdapterInfo;
  m_FDO = m_DmaEnabler->m_FDO;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    v16 = m_AdapterInfo->AdapterObject->DmaOperations->GetScatterGatherListEx(
            m_AdapterInfo->AdapterObject,
            m_FDO,
            this->m_TransferContext,
            Mdl,
            CurrentOffset,
            Length,
            this->m_Flags,
            (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))FxDmaScatterGatherTransaction::_AdapterListControl,
            Mdl_0,
            this->m_DmaDirection,
            0LL,
            0LL,
            0LL);
  else
    v16 = m_AdapterInfo->AdapterObject->DmaOperations->GetScatterGatherList(
            m_AdapterInfo->AdapterObject,
            m_FDO,
            Mdl,
            (char *)Mdl->StartVa + Mdl->ByteOffset + CurrentOffset,
            Length,
            (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))FxDmaScatterGatherTransaction::_AdapterListControl,
            Mdl_0,
            this->m_DmaDirection);
  v17 = v16;
  KeLowerIrql(v12);
  return v17;
}
