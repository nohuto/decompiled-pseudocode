/*
 * XREFs of imp_WdfTimerCreate @ 0x14003B7B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_DDd @ 0x140002768 (WPP_IFR_SF_DDd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140020DF4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x14003A52C (-_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     WPP_IFR_SF_Dd @ 0x140080004 (WPP_IFR_SF_Dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfTimerCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_TIMER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFTIMER__ **Timer)
{
  _FX_DRIVER_GLOBALS *v4; // rdi
  __int64 result; // rax
  unsigned __int8 v9; // dl
  unsigned int Size; // ecx
  unsigned int Period; // eax
  _FX_DRIVER_GLOBALS *v12; // rdi
  _WDF_BIND_INFO *WdfBindInfo; // rax
  unsigned int _a1; // eax
  unsigned __int16 v15; // r9
  unsigned int v16; // ebx
  FxObject *pParent; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF

  pParent = 0LL;
  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pFxDriverGlobals = CONTAINING_RECORD(DriverGlobals, _FX_DRIVER_GLOBALS, Public);
  result = FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Attributes, 24);
  if ( (int)result >= 0 )
  {
    FxObjectHandleGetPtrAndGlobals(
      v4,
      (unsigned __int64)Attributes->ParentObject,
      0x1000u,
      (void **)&pParent,
      &pFxDriverGlobals);
    if ( !Config )
      FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
    if ( !Timer )
      FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
    Size = Config->Size;
    if ( ((Config->Size - 24) & 0xFFFFFFE7) != 0 || Size == 48 )
    {
      v16 = -1073741820;
      WPP_IFR_SF_DDd(pFxDriverGlobals, v9, 0x12u, 0xAu, WPP_FxTimerApi_cpp_Traceguids, Size, 0x28u, -1073741820);
      return v16;
    }
    Period = Config->Period;
    if ( Period > 0x7FFFFFFF )
    {
      v16 = -1073741811;
      WPP_IFR_SF_Dd(pFxDriverGlobals, 2u, 0x12u, 0xBu, WPP_FxTimerApi_cpp_Traceguids, Period, -1073741811);
      return v16;
    }
    v12 = pFxDriverGlobals;
    if ( Size > 0x18 )
    {
      WdfBindInfo = pFxDriverGlobals->WdfBindInfo;
      if ( WdfBindInfo->Version.Major <= 1 && (WdfBindInfo->Version.Major != 1 || WdfBindInfo->Version.Minor < 0xD) )
      {
        _a1 = Config->TolerableDelay;
        if ( _a1 > 0x7FFFFFFF )
        {
          v15 = 12;
          goto LABEL_21;
        }
      }
    }
    if ( Size > 0x20 )
    {
      _a1 = Config->TolerableDelay;
      if ( _a1 )
      {
        if ( Config->UseHighResolutionTimer )
        {
          v15 = 14;
LABEL_21:
          v16 = -1073741811;
          WPP_IFR_SF_Dd(pFxDriverGlobals, 2u, 0x12u, v15, WPP_FxTimerApi_cpp_Traceguids, _a1, -1073741811);
          return v16;
        }
      }
    }
    result = FxValidateObjectAttributes(pFxDriverGlobals, Attributes, 2);
    if ( (int)result >= 0 )
    {
      if ( Config->Period && Attributes->ExecutionLevel == WdfExecutionLevelPassive )
      {
        v16 = -1073741637;
        WPP_IFR_SF_D(v12, 2u, 0x12u, 0xFu, WPP_FxTimerApi_cpp_Traceguids, 0xC00000BB);
        return v16;
      }
      return FxTimer::_Create(v12, Config, Attributes, pParent, Timer);
    }
  }
  return result;
}
