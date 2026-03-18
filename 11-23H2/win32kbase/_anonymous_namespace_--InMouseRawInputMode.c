/*
 * XREFs of _anonymous_namespace_::InMouseRawInputMode @ 0x1C000921C
 * Callers:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C0009088 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00557D8 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9444 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FA2E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00092AC (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     IsSpatialDelegationEnabledForThread @ 0x1C00A2620 (IsSpatialDelegationEnabledForThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

char __fastcall anonymous_namespace_::InMouseRawInputMode(__int64 a1, __int64 a2, int a3)
{
  __int64 PtiFromInputDest; // rax
  char v5; // bl
  __int64 v6; // rsi
  bool v7; // zf

  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest();
  v5 = 0;
  v6 = PtiFromInputDest;
  if ( PtiFromInputDest && !(unsigned __int8)IsSpatialDelegationEnabledForThread(PtiFromInputDest) )
  {
    if ( !a3 )
    {
      if ( !qword_1C0295490 || !(unsigned int)qword_1C0295490(v6) )
        return v5;
      v7 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 424) + 856LL) + 100LL) & 0x100) == 0;
      goto LABEL_8;
    }
    if ( a3 == 1 )
    {
      if ( !qword_1C0295490 || !(unsigned int)qword_1C0295490(v6) )
        return v5;
      v7 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 424) + 856LL) + 100LL) & 2) == 0;
LABEL_8:
      if ( !v7 )
        return 1;
      return v5;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 382LL);
  }
  return 0;
}
