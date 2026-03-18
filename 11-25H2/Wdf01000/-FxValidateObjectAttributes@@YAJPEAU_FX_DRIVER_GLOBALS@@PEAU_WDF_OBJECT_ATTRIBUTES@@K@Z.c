/*
 * XREFs of ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140036790
 * Callers:
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1400018AC (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x1400082E0 (imp_WdfDeviceOpenRegistryKey.c)
 *     imp_WdfStringCreate @ 0x140008400 (imp_WdfStringCreate.c)
 *     imp_WdfSpinLockCreate @ 0x1400085A0 (imp_WdfSpinLockCreate.c)
 *     imp_WdfIoQueueCreate @ 0x140013E60 (imp_WdfIoQueueCreate.c)
 *     imp_WdfWorkItemCreate @ 0x140022280 (imp_WdfWorkItemCreate.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x140023128 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1400236A0 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfObjectAllocateContext @ 0x140034B00 (imp_WdfObjectAllocateContext.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x140034F10 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x140035320 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     imp_WdfRequestCreate @ 0x140035CE0 (imp_WdfRequestCreate.c)
 *     imp_WdfMemoryCreate @ 0x140037B30 (imp_WdfMemoryCreate.c)
 *     imp_WdfIoTargetCreate @ 0x140039B50 (imp_WdfIoTargetCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x14003E36C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x14003E704 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1400401C0 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfDmaTransactionCreate @ 0x1400420C0 (imp_WdfDmaTransactionCreate.c)
 *     imp_WdfDeviceCreate @ 0x14004DE10 (imp_WdfDeviceCreate.c)
 *     imp_WdfDpcCreate @ 0x14004F950 (imp_WdfDpcCreate.c)
 *     imp_WdfTimerCreate @ 0x14004FD30 (imp_WdfTimerCreate.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x140051E30 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfWaitLockCreate @ 0x140051F90 (imp_WdfWaitLockCreate.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x140052260 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfRegistryOpenKey @ 0x140052930 (imp_WdfRegistryOpenKey.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x140052DD4 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     imp_WdfRegistryCreateKey @ 0x140054A10 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfDeviceAllocAndQueryPropertyEx @ 0x140055080 (imp_WdfDeviceAllocAndQueryPropertyEx.c)
 *     imp_WdfRegistryQueryMemory @ 0x1400551D0 (imp_WdfRegistryQueryMemory.c)
 *     FxUsbTargetDeviceCreate @ 0x140059F74 (FxUsbTargetDeviceCreate.c)
 *     imp_WdfCommonBufferCreate @ 0x14006B0A0 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfObjectCreate @ 0x14006B7E0 (imp_WdfObjectCreate.c)
 *     imp_WdfDriverCreate @ 0x14006CBA0 (imp_WdfDriverCreate.c)
 *     imp_WdfCollectionCreate @ 0x14006F840 (imp_WdfCollectionCreate.c)
 *     imp_WdfDeviceInitSetFileObjectConfig @ 0x140078C30 (imp_WdfDeviceInitSetFileObjectConfig.c)
 *     imp_WdfDeviceInitSetRequestAttributes @ 0x14007D970 (imp_WdfDeviceInitSetRequestAttributes.c)
 *     imp_WdfDeviceMiniportCreate @ 0x14007F6B0 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfUsbInterfaceSelectSetting @ 0x14007FEF0 (imp_WdfUsbInterfaceSelectSetting.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1400813D0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfChildListCreate @ 0x14008B170 (imp_WdfChildListCreate.c)
 *     imp_WdfFdoInitAllocAndQueryProperty @ 0x140090690 (imp_WdfFdoInitAllocAndQueryProperty.c)
 *     imp_WdfFdoInitAllocAndQueryPropertyEx @ 0x140090790 (imp_WdfFdoInitAllocAndQueryPropertyEx.c)
 *     imp_WdfFdoInitOpenRegistryKey @ 0x1400908F0 (imp_WdfFdoInitOpenRegistryKey.c)
 *     imp_WdfFdoInitSetDefaultChildListConfig @ 0x140090C40 (imp_WdfFdoInitSetDefaultChildListConfig.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x140091C90 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x140092CB0 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     imp_WdfCxDeviceInitSetRequestAttributes @ 0x1400932A0 (imp_WdfCxDeviceInitSetRequestAttributes.c)
 *     imp_WdfLookasideListCreate @ 0x140093D70 (imp_WdfLookasideListCreate.c)
 *     imp_WdfDriverOpenPersistentStateRegistryKey @ 0x1400941C0 (imp_WdfDriverOpenPersistentStateRegistryKey.c)
 *     imp_WdfIoResourceListCreate @ 0x140098AD0 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x14009B430 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x14009BF40 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x14009CD00 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x14009D440 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     imp_WdfDmaEnablerCreate @ 0x1400A1A40 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfInterruptCreate @ 0x1400A2050 (imp_WdfInterruptCreate.c)
 *     VfAllocateContext @ 0x1400E21C4 (VfAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_qDd @ 0x14000562C (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qiid @ 0x1400560A4 (WPP_IFR_SF_qiid.c)
 *     WPP_IFR_SF_qid @ 0x140056218 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qdd @ 0x140061F7C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqddd @ 0x14007F860 (WPP_IFR_SF_qqddd.c)
 *     WPP_IFR_SF_qddd @ 0x1400863E4 (WPP_IFR_SF_qddd.c)
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
