/*
 * XREFs of ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0
 * Callers:
 *     imp_WdfDeviceAllocAndQueryPropertyEx @ 0x140001AC0 (imp_WdfDeviceAllocAndQueryPropertyEx.c)
 *     imp_WdfObjectAllocateContext @ 0x14000ED30 (imp_WdfObjectAllocateContext.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x14000F140 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x14000F550 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     imp_WdfRequestCreate @ 0x14000FF10 (imp_WdfRequestCreate.c)
 *     imp_WdfMemoryCreate @ 0x140011E50 (imp_WdfMemoryCreate.c)
 *     imp_WdfIoTargetCreate @ 0x140013E70 (imp_WdfIoTargetCreate.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x14001F7DC (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x140020A10 (imp_WdfDeviceOpenRegistryKey.c)
 *     imp_WdfStringCreate @ 0x140020B30 (imp_WdfStringCreate.c)
 *     imp_WdfSpinLockCreate @ 0x140020CD0 (imp_WdfSpinLockCreate.c)
 *     imp_WdfWorkItemCreate @ 0x140039AA0 (imp_WdfWorkItemCreate.c)
 *     imp_WdfIoQueueCreate @ 0x14003A680 (imp_WdfIoQueueCreate.c)
 *     imp_WdfTimerCreate @ 0x14003B7B0 (imp_WdfTimerCreate.c)
 *     imp_WdfDeviceCreate @ 0x140042100 (imp_WdfDeviceCreate.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x140045C20 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfWaitLockCreate @ 0x140045D80 (imp_WdfWaitLockCreate.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x140046010 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1400465C8 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     imp_WdfDmaTransactionCreate @ 0x140047E60 (imp_WdfDmaTransactionCreate.c)
 *     FxUsbTargetDeviceCreate @ 0x1400508FC (FxUsbTargetDeviceCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x14005551C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1400558B4 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x14005AC90 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfRegistryQueryMultiString @ 0x140062110 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfCommonBufferCreate @ 0x140069560 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfObjectCreate @ 0x140069D00 (imp_WdfObjectCreate.c)
 *     imp_WdfDpcCreate @ 0x14006ADB0 (imp_WdfDpcCreate.c)
 *     imp_WdfDriverCreate @ 0x14006B960 (imp_WdfDriverCreate.c)
 *     imp_WdfCollectionCreate @ 0x14006EC50 (imp_WdfCollectionCreate.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x14007252C (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     imp_WdfDeviceInitSetFileObjectConfig @ 0x1400784B0 (imp_WdfDeviceInitSetFileObjectConfig.c)
 *     imp_WdfRegistryQueryMemory @ 0x140078BE0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfDeviceInitSetRequestAttributes @ 0x14007D630 (imp_WdfDeviceInitSetRequestAttributes.c)
 *     imp_WdfDeviceMiniportCreate @ 0x14007F2E0 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfUsbInterfaceSelectSetting @ 0x14007F9B0 (imp_WdfUsbInterfaceSelectSetting.c)
 *     imp_WdfRegistryCreateKey @ 0x140080E20 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryOpenKey @ 0x1400810E0 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x140081370 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfChildListCreate @ 0x14008B1D0 (imp_WdfChildListCreate.c)
 *     imp_WdfFdoInitAllocAndQueryProperty @ 0x1400906F0 (imp_WdfFdoInitAllocAndQueryProperty.c)
 *     imp_WdfFdoInitAllocAndQueryPropertyEx @ 0x1400907F0 (imp_WdfFdoInitAllocAndQueryPropertyEx.c)
 *     imp_WdfFdoInitOpenRegistryKey @ 0x140090950 (imp_WdfFdoInitOpenRegistryKey.c)
 *     imp_WdfFdoInitSetDefaultChildListConfig @ 0x140090CA0 (imp_WdfFdoInitSetDefaultChildListConfig.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x140091CF0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x140092D10 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     imp_WdfCxDeviceInitSetRequestAttributes @ 0x140093300 (imp_WdfCxDeviceInitSetRequestAttributes.c)
 *     imp_WdfLookasideListCreate @ 0x140093DD0 (imp_WdfLookasideListCreate.c)
 *     imp_WdfDriverOpenPersistentStateRegistryKey @ 0x140094220 (imp_WdfDriverOpenPersistentStateRegistryKey.c)
 *     imp_WdfIoResourceListCreate @ 0x140098B10 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x14009B500 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x14009C010 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x14009CDD0 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x14009D510 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     imp_WdfDmaEnablerCreate @ 0x1400A1B10 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfInterruptCreate @ 0x1400A2120 (imp_WdfInterruptCreate.c)
 *     VfAllocateContext @ 0x1400E21C4 (VfAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_qDd @ 0x1400017F0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qiid @ 0x1400028A4 (WPP_IFR_SF_qiid.c)
 *     WPP_IFR_SF_qid @ 0x140002A18 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qdd @ 0x14005F07C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqddd @ 0x14007F490 (WPP_IFR_SF_qqddd.c)
 *     WPP_IFR_SF_qddd @ 0x1400863D4 (WPP_IFR_SF_qddd.c)
 */

__int64 __fastcall FxValidateObjectAttributes(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        char Flags)
{
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rcx
  __int64 ContextSize; // r11
  const void *ContextSizeOverride; // rax
  void *ParentObject; // rcx
  _WDF_EXECUTION_LEVEL _a2; // eax
  _WDF_SYNCHRONIZATION_SCOPE SynchronizationScope; // ecx
  unsigned __int64 v11; // r11

  if ( !Attributes )
  {
    if ( (Flags & 8) != 0 )
    {
      WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxValidateFunctions_cpp_Traceguids, 0xC0200212);
      return 3223323154LL;
    }
    return 0LL;
  }
  if ( Attributes->Size != 56 )
  {
    WPP_IFR_SF_qddd(
      FxDriverGlobals,
      (unsigned __int8)Attributes,
      6u,
      0xBu,
      WPP_FxValidateFunctions_cpp_Traceguids,
      Attributes,
      56,
      Attributes->Size,
      -1073741820);
    return 3221225476LL;
  }
  ContextTypeInfo = Attributes->ContextTypeInfo;
  if ( ContextTypeInfo )
  {
    if ( ((ContextTypeInfo->Size - 24) & 0xFFFFFFEF) != 0 )
    {
      WPP_IFR_SF_qqddd(
        FxDriverGlobals,
        (unsigned __int8)Attributes,
        6u,
        0xCu,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        ContextTypeInfo,
        ContextTypeInfo->Size,
        40,
        -1073741820);
      return 3221225476LL;
    }
    ContextSize = ContextTypeInfo->ContextSize;
    if ( ContextSize )
    {
      if ( !ContextTypeInfo->ContextName )
      {
        WPP_IFR_SF_qiid(
          FxDriverGlobals,
          2u,
          6u,
          0xDu,
          WPP_FxValidateFunctions_cpp_Traceguids,
          Attributes,
          ContextTypeInfo,
          ContextSize,
          -1071644151);
        return 3223323145LL;
      }
    }
  }
  ContextSizeOverride = (const void *)Attributes->ContextSizeOverride;
  if ( ContextSizeOverride )
  {
    if ( !ContextTypeInfo )
    {
      WPP_IFR_SF_qid(
        FxDriverGlobals,
        2u,
        6u,
        0xEu,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        (__int64)ContextSizeOverride,
        -1071644151);
      return 3223323145LL;
    }
    v11 = ContextTypeInfo->ContextSize;
    if ( (unsigned __int64)ContextSizeOverride < v11 )
    {
      WPP_IFR_SF_qiid(
        FxDriverGlobals,
        2u,
        6u,
        0xFu,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        ContextSizeOverride,
        v11,
        -1071644151);
      return 3223323145LL;
    }
  }
  if ( (Flags & 1) != 0 )
  {
    ParentObject = Attributes->ParentObject;
    if ( ParentObject )
    {
      WPP_IFR_SF_qqd(
        FxDriverGlobals,
        2u,
        6u,
        0x10u,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        ParentObject,
        0xC020020F);
      return 3223323151LL;
    }
  }
  else if ( (Flags & 0x10) != 0 && !Attributes->ParentObject )
  {
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, 0x11u, WPP_FxValidateFunctions_cpp_Traceguids, Attributes, -1071644142);
    return 3223323154LL;
  }
  _a2 = Attributes->ExecutionLevel;
  if ( _a2 == WdfExecutionLevelInvalid || _a2 > WdfExecutionLevelDispatch )
  {
    WPP_IFR_SF_qdd(FxDriverGlobals, 2u, 6u, 0x12u, WPP_FxValidateFunctions_cpp_Traceguids, Attributes, _a2, -1071644151);
    return 3223323145LL;
  }
  SynchronizationScope = Attributes->SynchronizationScope;
  if ( SynchronizationScope == WdfSynchronizationScopeInvalid || SynchronizationScope > WdfSynchronizationScopeNone )
  {
    WPP_IFR_SF_qdd(
      FxDriverGlobals,
      2u,
      6u,
      0x13u,
      WPP_FxValidateFunctions_cpp_Traceguids,
      Attributes,
      SynchronizationScope,
      -1071644151);
    return 3223323145LL;
  }
  if ( (Flags & 4) == 0
    && SynchronizationScope != WdfSynchronizationScopeInheritFromParent
    && SynchronizationScope != WdfSynchronizationScopeNone )
  {
    WPP_IFR_SF_qDd(
      FxDriverGlobals,
      (unsigned __int8)Attributes,
      6u,
      0x14u,
      WPP_FxValidateFunctions_cpp_Traceguids,
      Attributes,
      SynchronizationScope,
      0xC0200210);
    return 3223323152LL;
  }
  if ( (Flags & 2) != 0 || _a2 == WdfExecutionLevelInheritFromParent )
    return 0LL;
  WPP_IFR_SF_qDd(
    FxDriverGlobals,
    (unsigned __int8)Attributes,
    6u,
    0x15u,
    WPP_FxValidateFunctions_cpp_Traceguids,
    Attributes,
    _a2,
    0xC0200211);
  return 3223323153LL;
}
