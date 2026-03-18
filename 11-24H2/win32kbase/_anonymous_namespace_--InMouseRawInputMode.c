/*
 * XREFs of _anonymous_namespace_::InMouseRawInputMode @ 0x14005FEB4
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14005E1E8 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x14018D9A8 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x14018E920 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@_K3W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x14021E008 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 * Callees:
 *     IsSpatialDelegationEnabledForThread @ 0x1400C2380 (IsSpatialDelegationEnabledForThread.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1400E39B0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     HasHidTable @ 0x1400E3A64 (HasHidTable.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall anonymous_namespace_::InMouseRawInputMode(__int64 a1, __int64 a2, int a3)
{
  InputDelegation *PtiFromInputDest; // rax
  char v5; // bl
  InputDelegation *v6; // rdi
  bool v8; // zf

  PtiFromInputDest = (InputDelegation *)anonymous_namespace_::GetPtiFromInputDest(a1, a2);
  v5 = 0;
  v6 = PtiFromInputDest;
  if ( !PtiFromInputDest || (unsigned __int8)IsSpatialDelegationEnabledForThread(PtiFromInputDest) )
    return 0;
  if ( a3 )
  {
    if ( a3 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 363LL);
      return 0;
    }
    if ( (unsigned int)HasHidTable(v6) )
    {
      v8 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 58) + 832LL) + 100LL) & 2) == 0;
      goto LABEL_11;
    }
  }
  else if ( (unsigned int)HasHidTable(v6) )
  {
    v8 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 58) + 832LL) + 100LL) & 0x100) == 0;
LABEL_11:
    if ( !v8 )
      return 1;
  }
  return v5;
}
