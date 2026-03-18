/*
 * XREFs of imp_WdfDmaEnablerCreate @ 0x1400A1B10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_DDd @ 0x140002768 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_qqqd @ 0x140003694 (WPP_IFR_SF_qqqd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x140005AE0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_dd @ 0x1400076CC (WPP_IFR_SF_dd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x140039F84 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140089408 (--0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x140089C54 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     memset @ 0x1400AC800 (memset.c)
 *     memmove @ 0x1400ACD40 (memmove.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall imp_WdfDmaEnablerCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DMA_ENABLER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFDMAENABLER__ **DmaEnablerHandle)
{
  _FX_DRIVER_GLOBALS *v9; // rbx
  __int64 result; // rax
  WDFDMAENABLER__ **v11; // r12
  void *ParentObject; // rdx
  unsigned int v13; // edx
  _FX_DRIVER_GLOBALS *v14; // rcx
  _FX_DRIVER_GLOBALS *v15; // rax
  unsigned int v16; // r14d
  const void *_a2; // rcx
  bool IsVersionGreaterThanOrEqualTo; // al
  __int16 v19; // r8
  __int64 v20; // r9
  size_t Size; // rdx
  unsigned int v22; // ecx
  unsigned __int64 _a1; // rdx
  unsigned __int16 v24; // r9
  FX_POOL **v25; // rax
  FxObject *v26; // rax
  FxDmaEnabler *v27; // r15
  int v28; // ebx
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+58h] [rbp-41h] BYREF
  WDFDMAENABLER__ *handle; // [rsp+60h] [rbp-39h] BYREF
  void *ObjectHandle; // [rsp+68h] [rbp-31h] BYREF
  _WDF_DMA_ENABLER_CONFIG dmaConfig_8; // [rsp+78h] [rbp-21h] OVERLAPPED BYREF
  unsigned __int64 retaddr; // [rsp+F0h] [rbp+57h]
  FxObject *pParent; // [rsp+F8h] [rbp+5Fh] BYREF

  pFxDriverGlobals = 0LL;
  ObjectHandle = 0LL;
  handle = 0LL;
  pParent = 0LL;
  memset(&dmaConfig_8, 0, sizeof(dmaConfig_8));
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1030u,
    (void **)&pFxDriverGlobals,
    (_FX_DRIVER_GLOBALS **)&handle);
  v9 = (_FX_DRIVER_GLOBALS *)handle;
  result = FxVerifierCheckIrqlLevel((_FX_DRIVER_GLOBALS *)handle, 0);
  if ( (int)result < 0 )
    return result;
  v11 = DmaEnablerHandle;
  if ( !DmaEnablerHandle )
    FxVerifierNullBugCheck(v9, retaddr);
  if ( !Config )
    FxVerifierNullBugCheck(v9, retaddr);
  *DmaEnablerHandle = 0LL;
  result = FxValidateObjectAttributes(v9, Attributes, 0);
  if ( (int)result < 0 )
    return result;
  if ( Attributes )
  {
    ParentObject = Attributes->ParentObject;
    if ( ParentObject )
    {
      FxObjectHandleGetPtr(v9, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v9, v13, 0xBu) )
      {
        v15 = (_FX_DRIVER_GLOBALS *)FxDeviceBase::_SearchForDevice((unsigned __int64)pParent, 0LL);
        if ( !v15 )
        {
          v16 = -1071644151;
          WPP_IFR_SF_qd(v9, 2u, 0xFu, 0xAu, WPP_FxDmaEnablerAPI_cpp_Traceguids, Attributes->ParentObject, -1071644151);
          return v16;
        }
        if ( v15 != pFxDriverGlobals )
        {
          _a2 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
          v16 = -1071644151;
          if ( !WORD1(v15->Linkage.Blink) )
            _a2 = 0LL;
          WPP_IFR_SF_qqqd(
            v9,
            2u,
            0xFu,
            0xBu,
            WPP_FxDmaEnablerAPI_cpp_Traceguids,
            Attributes->ParentObject,
            _a2,
            Device,
            -1071644151);
          return v16;
        }
        goto LABEL_20;
      }
      if ( pParent != (FxObject *)pFxDriverGlobals )
      {
        WPP_IFR_SF_qq(v14, 3u, 0xFu, 0xCu, WPP_FxDmaEnablerAPI_cpp_Traceguids, Attributes->ParentObject, Device);
        if ( v9->FxVerifyDownlevel )
          FxVerifierDbgBreakPoint(v9);
      }
    }
  }
  pParent = (FxObject *)pFxDriverGlobals;
LABEL_20:
  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
                                    v9,
                                    (unsigned int)ParentObject,
                                    0xBu);
  Size = Config->Size;
  v22 = IsVersionGreaterThanOrEqualTo ? 80 : 64;
  if ( (_DWORD)Size != v22 )
  {
    v16 = -1073741820;
    WPP_IFR_SF_DDd(v9, Size, 0xFu, v19 + 2, WPP_FxDmaEnablerAPI_cpp_Traceguids, Size, v22, -1073741820);
    return v16;
  }
  if ( (unsigned int)Size < 0x50 )
  {
    dmaConfig_8.Profile = Config->Profile;
    dmaConfig_8.MaximumLength = Config->MaximumLength;
    memmove(&dmaConfig_8, Config, Size);
    dmaConfig_8.Size = 80;
    Config = &dmaConfig_8;
  }
  _a1 = (unsigned int)Config->Profile;
  if ( Config->Profile != WdfDmaProfilePacket
    && Config->Profile != WdfDmaProfileScatterGather
    && Config->Profile != WdfDmaProfilePacket64
    && Config->Profile != WdfDmaProfileScatterGather64
    && Config->Profile != WdfDmaProfileScatterGatherDuplex
    && Config->Profile != WdfDmaProfileScatterGather64Duplex
    && (unsigned int)(Config->Profile - 7) >= 2 )
  {
    v16 = -1073741811;
    WPP_IFR_SF_dd(v9, 2u, 0xFu, 0xFu, WPP_FxDmaEnablerAPI_cpp_Traceguids, _a1, -1073741811);
    return v16;
  }
  if ( !Config->MaximumLength )
  {
    v24 = 16;
    v16 = -1073741811;
LABEL_42:
    WPP_IFR_SF_D(v9, 2u, 0xFu, v24, WPP_FxDmaEnablerAPI_cpp_Traceguids, v16);
    return v16;
  }
  v25 = FxObjectHandleAlloc2(v9, _a1, 0x2C0uLL, v20, Attributes, 0, FxObjectTypeExternal);
  if ( !v25 || (FxDmaEnabler::FxDmaEnabler((FxDmaEnabler *)v25, v9), (v27 = (FxDmaEnabler *)v26) == 0LL) )
  {
    v24 = 19;
    v16 = -1073741670;
    goto LABEL_42;
  }
  v28 = FxObject::Commit(v26, Attributes, &ObjectHandle, pParent, 1u);
  if ( v28 < 0 || (v28 = FxDmaEnabler::Initialize(v27, Config, (FxDeviceBase *)pFxDriverGlobals), v28 < 0) )
    FxObject::DeleteFromFailedCreate(v27);
  else
    *v11 = (WDFDMAENABLER__ *)ObjectHandle;
  return (unsigned int)v28;
}
