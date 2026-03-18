/*
 * XREFs of _anonymous_namespace_::GetPtiFromInputDest @ 0x1400E39B0
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14005E1E8 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x14005FEB4 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1400E38D8 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14018C758 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x14018D9A8 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x14021D0E8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x14021D248 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x14021E6D0 (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x14021ED84 (_anonymous_namespace_--ValidateUIPI.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x14009483C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::GetPtiFromInputDest(CInputDest *a1, int a2)
{
  __int64 v2; // rbx
  CInputDest *v4; // rcx
  __int64 Queue; // rax
  __int64 v6; // rcx

  v2 = 0LL;
  if ( a2 == 2 )
  {
    if ( a1 && CInputDest::GetUserWindow(a1) )
      return *((_QWORD *)CInputDest::GetUserWindow(v4) + 2);
  }
  else
  {
    if ( a1 )
      Queue = CInputDest::GetQueue(a1, 0);
    else
      Queue = *(_QWORD *)(W32GetUserSessionState(0LL) + 18944);
    if ( Queue )
    {
      if ( a2 )
      {
        if ( a2 != 1 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 169LL);
          return v2;
        }
        v6 = *(_QWORD *)(Queue + 112);
        if ( v6 )
          return *(_QWORD *)(v6 + 16);
      }
      return *(_QWORD *)(Queue + 96);
    }
  }
  return v2;
}
