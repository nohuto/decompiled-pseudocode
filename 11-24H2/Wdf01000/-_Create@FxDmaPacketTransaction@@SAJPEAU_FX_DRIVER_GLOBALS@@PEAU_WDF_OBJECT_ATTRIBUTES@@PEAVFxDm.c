/*
 * XREFs of ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x140087A44
 * Callers:
 *     imp_WdfDmaTransactionCreate @ 0x140047E60 (imp_WdfDmaTransactionCreate.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x140049CCC (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ??0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1400872D0 (--0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 */

__int64 __fastcall FxDmaPacketTransaction::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDmaEnabler *DmaEnabler,
        WDFDMATRANSACTION__ **Transaction)
{
  $C917870CF6F2291303947F7793E18A6D *DmaDescription; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  unsigned __int16 v11; // r10
  $C917870CF6F2291303947F7793E18A6D *v12; // rax
  FxDmaPacketTransaction *v13; // r10
  unsigned __int16 v14; // r9
  FxObject *v15; // rax
  FxObject *v16; // rdi
  int v17; // ebx
  void *hTransaction; // [rsp+40h] [rbp-28h] BYREF

  hTransaction = 0LL;
  DmaDescription = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
  v11 = 0;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    v11 = 128;
  if ( !FxObjectHandleAlloc2(FxDriverGlobals, v9, 0x138uLL, v10, Attributes, v11, FxObjectTypeExternal) )
    goto LABEL_10;
  v12 = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
  v14 = 0;
  if ( v12->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    v14 = 128;
  FxDmaPacketTransaction::FxDmaPacketTransaction(v13, FxDriverGlobals, 0x138u, v14, DmaEnabler);
  v16 = v15;
  if ( v15 )
  {
    v17 = FxObject::Commit(v15, Attributes, &hTransaction, DmaEnabler, 1u);
    if ( v17 < 0 )
      FxObject::DeleteFromFailedCreate(v16);
    else
      *Transaction = (WDFDMATRANSACTION__ *)hTransaction;
  }
  else
  {
LABEL_10:
    v17 = -1073741670;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xFu, 0xAu, WPP_FxDmaTransactionPacket_cpp_Traceguids, 0xC000009A);
  }
  return (unsigned int)v17;
}
