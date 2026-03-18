/*
 * XREFs of ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x140039F84
 * Callers:
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140013910 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x140039D20 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x14003A14C (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x14006AFE0 (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 *     imp_WdfDmaEnablerCreate @ 0x1400A1B10 (imp_WdfDmaEnablerCreate.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1400A9770 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z @ 0x140069B30 (-GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

FxDeviceBase *__fastcall FxDeviceBase::_SearchForDevice(unsigned __int64 Object, IFxHasCallbacks **Callbacks)
{
  FxObject *v2; // rdi
  FxDeviceBase *v3; // rsi
  unsigned int v7; // edx
  FxTagTracker *v8; // rcx
  FxObject *ParentObjectReferenced; // rbx
  const void *_a2; // r8
  const void *_a1; // r14
  const void *v13; // rcx
  FxQueryInterfaceParams cbParams; // [rsp+40h] [rbp-28h] BYREF

  cbParams.Object = (void **)Callbacks;
  *(_QWORD *)&cbParams.Type = 5379LL;
  v2 = (FxObject *)Object;
  if ( Callbacks )
    *Callbacks = 0LL;
  v3 = *(FxDeviceBase **)(Object + 96);
  if ( v3 )
  {
    if ( Callbacks )
    {
      v7 = _InterlockedIncrement((volatile signed __int32 *)(Object + 12));
      if ( *(char *)(Object + 24) < 0 )
      {
        v8 = *(FxTagTracker **)(Object - 48);
        if ( v8 )
          FxTagTracker::UpdateTagHistory(
            v8,
            v2,
            256,
            "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp",
            TagAddRef,
            v7);
      }
      do
      {
        if ( v2->QueryInterface(v2, &cbParams) >= 0 )
        {
          v2->Release(v2, (void *)Object, 268, "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
          return v3;
        }
        ParentObjectReferenced = FxObject::GetParentObjectReferenced(v2, (void *)Object);
        v2->Release(v2, (void *)Object, 278, "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
        v2 = ParentObjectReferenced;
      }
      while ( ParentObjectReferenced );
      if ( v3->QueryInterface(v3, &cbParams) < 0 )
      {
        _a2 = (const void *)((unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v3->m_ObjectSize )
          _a2 = 0LL;
        _a1 = (const void *)(Object ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !*(_WORD *)(Object + 10) )
          _a1 = 0LL;
        WPP_IFR_SF_qq(*(_FX_DRIVER_GLOBALS **)(Object + 16), 2u, 0x14u, 0xCu, WPP_FxDeviceBase_cpp_Traceguids, _a1, _a2);
      }
    }
    return v3;
  }
  else
  {
    v13 = (const void *)(Object ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v2->m_ObjectSize )
      v13 = 0LL;
    WPP_IFR_SF_q(v2->m_Globals, 2u, 0x14u, 0xBu, WPP_FxDeviceBase_cpp_Traceguids, v13);
    return 0LL;
  }
}
