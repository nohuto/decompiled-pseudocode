/*
 * XREFs of ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1400490A4
 * Callers:
 *     imp_WdfDmaTransactionCreate @ 0x140047E60 (imp_WdfDmaTransactionCreate.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     FxAllocateFromNPagedLookasideList @ 0x140019390 (FxAllocateFromNPagedLookasideList.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x140049CCC (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140049F80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ??0FxDmaScatterGatherTransaction@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxDmaEnabler@@@Z @ 0x14004A260 (--0FxDmaScatterGatherTransaction@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxDmaEnabler@@@Z.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDmaEnabler *DmaEnabler,
        WDFDMATRANSACTION__ **Transaction)
{
  const void *_a1; // rdi
  _FxDmaDescription *DmaDescription; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  unsigned __int16 v12; // r10
  unsigned int v13; // esi
  _FxDmaDescription *v14; // rax
  FxDmaScatterGatherTransaction *v15; // r10
  unsigned __int16 v16; // r8
  FxObject *v17; // rax
  FxObject *v18; // rbx
  unsigned __int64 v19; // rdx
  PVOID v20; // rax
  void *hTransaction; // [rsp+40h] [rbp-28h] BYREF

  _a1 = 0LL;
  hTransaction = 0LL;
  DmaDescription = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
  v12 = 0;
  if ( DmaDescription->DeviceDescription.Version == 3 )
    v12 = 128;
  if ( FxObjectHandleAlloc2(FxDriverGlobals, v10, 0x118uLL, v11, Attributes, v12, FxObjectTypeExternal) )
  {
    v14 = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
    v16 = 0;
    if ( v14->DeviceDescription.Version == 3 )
      v16 = 128;
    FxDmaScatterGatherTransaction::FxDmaScatterGatherTransaction(v15, FxDriverGlobals, v16, DmaEnabler);
    v18 = v17;
    if ( v17 )
    {
      v13 = FxObject::Commit(v17, Attributes, &hTransaction, DmaEnabler, 1u);
      if ( (v13 & 0x80000000) == 0 )
      {
        if ( (*((_BYTE *)DmaEnabler + 380) & 0x20) == 0 )
        {
LABEL_12:
          *Transaction = (WDFDMATRANSACTION__ *)hTransaction;
          return v13;
        }
        v20 = FxAllocateFromNPagedLookasideList(&DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside, v19);
        v18[2].m_SpinLock.m_Lock = (unsigned __int64)v20;
        if ( v20 )
        {
          FxObject::AddRef(
            DmaEnabler,
            v18,
            96,
            "minkernel\\wdf\\framework\\kmdf\\src\\dma\\base\\fxdmatransactionscattergather.cpp");
          LODWORD(v18[2].m_ParentObject) = DmaEnabler->m_SGListSize;
          BYTE4(v18[2].m_ParentObject) = 1;
          goto LABEL_12;
        }
        v13 = -1073741670;
        if ( v18->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qd(
          FxDriverGlobals,
          2u,
          0xFu,
          0xBu,
          WPP_FxDmaTransactionScatterGather_cpp_Traceguids,
          _a1,
          -1073741670);
      }
      FxObject::DeleteFromFailedCreate(v18);
      return v13;
    }
  }
  v13 = -1073741670;
  WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xFu, 0xAu, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, 0xC000009A);
  return v13;
}
