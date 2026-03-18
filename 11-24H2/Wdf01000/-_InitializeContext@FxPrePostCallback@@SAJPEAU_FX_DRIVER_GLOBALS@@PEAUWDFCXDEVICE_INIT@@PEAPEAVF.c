/*
 * XREFs of ?_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x140041C70
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140042688 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxPrePostCallback::_InitializeContext(
        _FX_DRIVER_GLOBALS *Globals,
        WDFCXDEVICE_INIT *CxInit,
        FX_POOL ***Context,
        unsigned __int8 CallbackType)
{
  FX_POOL *EvtCxDevicePreD0Exit; // rbx
  FX_POOL *EvtCxDevicePostD0Exit; // rdi
  FX_POOL *EvtCxDevicePreArmWakeFromSxFailedCleanup; // rsi
  bool v11; // zf
  ULONG Tag; // ecx
  void *v13; // rax
  FX_POOL **v14; // rax
  __m128i v15; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( CallbackType <= 0xAu )
  {
    if ( CallbackType == 10 )
    {
      EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0Exit;
      EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostD0Exit;
      goto LABEL_8;
    }
    if ( CallbackType > 5u )
    {
      switch ( CallbackType )
      {
        case 6u:
          EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromSx;
          EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostArmWakeFromSx;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromSxFailedCleanup;
          goto LABEL_9;
        case 7u:
          EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromSxWithReason;
          EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostArmWakeFromSxWithReason;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromSxWithReasonFailedCleanup;
          goto LABEL_9;
        case 8u:
          EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0EntryPostHardwareEnabled;
          EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostD0EntryPostHardwareEnabled;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0EntryPostHardwareEnabledFailedCleanup;
          goto LABEL_9;
        case 9u:
          EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreReleaseHardware;
          EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostReleaseHardware;
          goto LABEL_8;
      }
    }
    else
    {
      switch ( CallbackType )
      {
        case 5u:
          EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromS0;
          EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostArmWakeFromS0;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromS0FailedCleanup;
          goto LABEL_9;
        case 0u:
          EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePrePrepareHardware;
          EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostPrepareHardware;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePrePrepareHardwareFailedCleanup;
          goto LABEL_9;
        case 1u:
          EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0Entry;
          EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostD0Entry;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0EntryFailedCleanup;
          goto LABEL_9;
        case 2u:
          EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoInit;
          EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoInit;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoInitFailedCleanup;
          goto LABEL_9;
        case 3u:
          EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoRestart;
          EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoRestart;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoRestartFailedCleanup;
          goto LABEL_9;
        case 4u:
          EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoRestartEx;
          EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoRestartEx;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoRestartExFailedCleanup;
          goto LABEL_9;
      }
    }
    goto LABEL_12;
  }
  if ( CallbackType <= 0x10u )
  {
    switch ( CallbackType )
    {
      case 0x10u:
        EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreDisarmWakeFromS0;
        EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostDisarmWakeFromS0;
        goto LABEL_8;
      case 0xBu:
        EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoSuspend;
        EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoSuspend;
        goto LABEL_8;
      case 0xCu:
        EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoSuspendEx;
        EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoSuspendEx;
        goto LABEL_8;
      case 0xDu:
        EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoFlush;
        EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoFlush;
        goto LABEL_8;
      case 0xEu:
        EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoCleanup;
        EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoCleanup;
        goto LABEL_8;
      case 0xFu:
        EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSurpriseRemoval;
        EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSurpriseRemoval;
        goto LABEL_8;
    }
    goto LABEL_12;
  }
  switch ( CallbackType )
  {
    case 0x11u:
      EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreDisarmWakeFromSx;
      EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostDisarmWakeFromSx;
      goto LABEL_8;
    case 0x12u:
      EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreWakeFromS0Triggered;
      EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostWakeFromS0Triggered;
      goto LABEL_8;
    case 0x13u:
      EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreWakeFromSxTriggered;
      EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostWakeFromSxTriggered;
      goto LABEL_8;
  }
  if ( CallbackType != 20 )
  {
LABEL_12:
    *Context = 0LL;
    return 0LL;
  }
  EvtCxDevicePreD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0ExitPreHardwareDisabled;
  EvtCxDevicePostD0Exit = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostD0ExitPreHardwareDisabled;
LABEL_8:
  EvtCxDevicePreArmWakeFromSxFailedCleanup = 0LL;
LABEL_9:
  if ( !EvtCxDevicePreD0Exit && !EvtCxDevicePostD0Exit && !EvtCxDevicePreArmWakeFromSxFailedCleanup )
    goto LABEL_12;
  v11 = Globals->FxPoolTrackingOn == 0;
  Tag = Globals->Tag;
  v15.m128i_i64[0] = 0LL;
  v15.m128i_i64[1] = 64LL;
  if ( v11 )
    v13 = 0LL;
  else
    v13 = retaddr;
  v14 = FxPoolAllocator(Globals, &Globals->FxPoolFrameworks, &v15, 0x20uLL, Tag, v13);
  if ( v14 )
  {
    *(_BYTE *)v14 = CallbackType;
    *((_BYTE *)v14 + 1) = 0;
    *(_OWORD *)(v14 + 1) = 0LL;
    v14[1] = EvtCxDevicePreD0Exit;
    v14[2] = EvtCxDevicePostD0Exit;
    v14[3] = EvtCxDevicePreArmWakeFromSxFailedCleanup;
    *Context = v14;
    return 0LL;
  }
  WPP_IFR_SF_(Globals, 2u, 0x12u, 0xAu, WPP_CxPnpPowerCallbacks_cpp_Traceguids);
  return 3221225626LL;
}
