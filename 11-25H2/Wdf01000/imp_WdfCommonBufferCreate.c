/*
 * XREFs of imp_WdfCommonBufferCreate @ 0x14006B0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140036790 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x140037570 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ??0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z @ 0x14006B228 (--0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_KPEAU_WDF_COMMON_BUFFER_CONFIG@@@Z @ 0x1400AB59C (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_KPEAU_WDF_COMMON_BUFFER_CONFIG@@@Z.c)
 */

__int64 __fastcall imp_WdfCommonBufferCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 Length,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFCOMMONBUFFER__ **CommonBufferHandle)
{
  WDFCOMMONBUFFER__ **v7; // rsi
  _FX_DRIVER_GLOBALS *v8; // rbx
  _FX_DRIVER_GLOBALS *v9; // rcx
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r9
  FX_POOL **v13; // rax
  unsigned int v14; // edi
  unsigned __int16 v15; // r9
  int CommonBuffer; // ebx
  FxObject *v17; // rax
  FxCommonBuffer *v18; // rdi
  FxDmaEnabler *pDmaEnabler; // [rsp+40h] [rbp-28h] BYREF
  void *handle; // [rsp+48h] [rbp-20h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+70h] [rbp+8h] BYREF

  pDmaEnabler = 0LL;
  handle = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler,
    &pFxDriverGlobals);
  v7 = CommonBufferHandle;
  if ( !CommonBufferHandle )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v8 = pFxDriverGlobals;
  v9 = pFxDriverGlobals;
  *CommonBufferHandle = 0LL;
  result = FxVerifierCheckIrqlLevel(v9, 0);
  if ( (int)result >= 0 )
  {
    if ( Length )
    {
      result = FxValidateObjectAttributes(v8, Attributes, 1);
      if ( (int)result < 0 )
        return result;
      v13 = FxObjectHandleAlloc2(v8, v11, 0xB8uLL, v12, Attributes, 0, FxObjectTypeExternal);
      if ( v13 )
      {
        FxCommonBuffer::FxCommonBuffer((FxCommonBuffer *)v13, v8, pDmaEnabler);
        v18 = (FxCommonBuffer *)v17;
        if ( v17 )
        {
          CommonBuffer = FxObject::Commit(v17, Attributes, &handle, pDmaEnabler, 1u);
          if ( CommonBuffer < 0
            || (CommonBuffer = FxCommonBuffer::AllocateCommonBuffer(v18, Length, 0LL), CommonBuffer < 0) )
          {
            FxObject::DeleteFromFailedCreate(v18);
          }
          else
          {
            *v7 = (WDFCOMMONBUFFER__ *)handle;
          }
          return (unsigned int)CommonBuffer;
        }
      }
      v14 = -1073741670;
      v15 = 11;
    }
    else
    {
      v14 = -1073741811;
      v15 = 10;
    }
    WPP_IFR_SF_D(v8, 2u, 0xFu, v15, WPP_FxCommonBufferAPI_cpp_Traceguids, v14);
    return v14;
  }
  return result;
}
